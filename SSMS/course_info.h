#ifndef COURSEINFO_H
#define COURSEINFO_H

#include <QString>
#include <QVector>

class CourseInfo
{
public:
    CourseInfo();
    CourseInfo(const QString &courseName);

    static int courseCnt;
    static QVector<QString> courseName;

    QString GetCourseName();
    double GetSum();
    double GetAverage();
    int GetTotalNumber();
    int GetPassNumber();
    double GetPassRatio();

    void SetCourseName(const QString &courseName);
    void AddCourseScore(double newScore);

private:
    QString courseName_;
    double sum_;
    double average_;
    int passNumber_;
    int totalNumber_;
    double passRatio_;

    void CalcValue();
};

#endif // COURSEINFO_H
