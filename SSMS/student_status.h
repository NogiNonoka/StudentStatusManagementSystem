#ifndef STUDENTSTATUS_H
#define STUDENTSTATUS_H

#include <QString>
#include <QPair>

#include "course_info.h"

class StudentStatus
{
public:
    StudentStatus();
    StudentStatus(const QString &id, const QString &name, const QString &sex, double math, double cprogram); // refact

    QString GetID();
    QString GetName();
    QString GetSex();
    double GetMath(); //abort
    double GetCProgram(); // abort
    double GetSum();
    bool GetCourseScore(const QString &courseName, double &courseScore);

    void SetID(const QString &id);
    void SetName(const QString &name);
    void SetSex(const QString &sex);
    void SetMath(double math); // abort
    void SetCProgram(double cprogram); // abort
    void SetCourseScore(const QVector<QPair<QString, double>> &courseScore);
    void AddCourseScore(const QString &courseName, const double courseScore);

private:
    QString id_;
    QString name_;
    QString sex_;
    double math_;
    double cProgram_;
    double average_;
    double sum_;

    QVector<QPair<QString, double> > coursescore_;

    void CalcValue(); //refact
};
#endif // STUDENTSTATUS_H
