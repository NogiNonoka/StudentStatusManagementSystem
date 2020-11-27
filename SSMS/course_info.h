#ifndef COURSEINFO_H
#define COURSEINFO_H

#include <QString>

class CourseInfo
{
public:
    CourseInfo();
    CourseInfo(QString &courseName, double sum = 0.0, double average = 0.0, double passRation = 0.0);

private:
    int uid_;
    QString courseName_;
    double sum_;
    double average_;
    double passRatio_;
};

#endif // COURSEINFO_H
