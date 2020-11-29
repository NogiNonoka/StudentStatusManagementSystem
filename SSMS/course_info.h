#ifndef COURSEINFO_H
#define COURSEINFO_H

#include <QString>

class CourseInfo
{
public:
    CourseInfo();
    CourseInfo(QString &courseName);

//    static int courseCnt;

    QString GetCourseName();
    double GetSum();
    double GetAverage();
    double GetPassRatio();

    void SetCourseName(QString &courseName);
    void AddCourseScore(double newScore);

private:
    int uid_;
    QString courseName_;
    double sum_;
    double average_;
    int passNumber_;
    int totalNumber_;
    double passRatio_;

    void CalcValue();
};

#endif // COURSEINFO_H
