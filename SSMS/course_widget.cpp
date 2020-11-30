#include "course_widget.h"
#include "ui_course_widget.h"

CourseWidget::CourseWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CourseWidget)
{
    ui->setupUi(this);
}

CourseWidget::~CourseWidget()
{
    delete ui;
}

void CourseWidget::on_returnButton_clicked()
{
    emit display(0);
}

bool GetCourseInfo(int courseCnt, const QVector<QString> &courseName, QVector<CourseInfo> &course)
{
    QFile file("StudentStatus.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(nullptr, "错误", "数据文件检查失败");
        return false;
    }
    CourseInfo crs[courseCnt];
    for (int i = 0; i < courseCnt; ++i)
    {
       crs[i].SetCourseName(courseName[i]);
    }
    QTextStream inp(&file);
    while(!inp.atEnd())
    {
        QString id, name, sex;
        inp >> id >> name >> sex;
        if (id == "" && name == "" && sex == "")
            break;
        for (int i = 0; i < courseCnt; ++i)
        {
            double score;
            inp >> score;
            crs[i].AddCourseScore(score);
        }
    }
    for (int i = 0; i < courseCnt; ++i)
    {
        course.push_back(crs[i]);
    }
    file.close();
    return true;
}

int searchCourse(const QString &courseName, QVector<CourseInfo> &course)
{
    for (int i = 0; i < course.size(); ++i)
        if (courseName == course[i].GetCourseName())
            return i;
    return -1;
}

void CourseWidget::on_courseBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "默认")
    {
        ui->getAverageLabel->setText("NULL");
        ui->getPassRatioLabel->setText("NULL");
        return;
    }
    int courseCnt = 2;
    QVector<QString> courseName;
    courseName.push_back("高等数学");
    courseName.push_back("程序设计");
    QVector<CourseInfo> course;
    if (!GetCourseInfo(courseCnt, courseName, course))
        return;
    int pos = searchCourse(arg1, course);
    if (pos == -1)
    {
        QMessageBox::about(nullptr, "错误", "未找到该课程");
        return;
    }
    ui->getAverageLabel->setText(QString::number(course[pos].GetAverage()));
    ui->getPassRatioLabel->setText(QString::number(course[pos].GetPassRatio()));
}
