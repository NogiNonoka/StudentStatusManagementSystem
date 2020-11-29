#ifndef STUDENTSTATUS_H
#define STUDENTSTATUS_H

#include <QString>

class StudentStatus
{
public:
    StudentStatus();
    StudentStatus(const QString &id, const QString &name, const QString &sex, double math, double cprogram);

    QString GetID();
    QString GetName();
    QString GetSex();
    double GetMath();
    double GetCProgram();
    double GetSum();

    void SetID(const QString &id);
    void SetName(const QString &name);
    void SetSex(const QString &sex);
    void SetMath(double math);
    void SetCProgram(double cprogram);

private:
    int uid_;
    QString id_;
    QString name_;
    QString sex_;
    double math_;
    double cProgram_;
    double average_;
    double sum_;

    void CalcValue();
};
#endif // STUDENTSTATUS_H
