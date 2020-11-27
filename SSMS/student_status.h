#ifndef STUDENT_STATUS_H
#define STUDENT_STATUS_H

#include <QString>

class StudentStatus
{
public:
    StudentStatus();
    StudentStatus(QString &id, QString &name, QString &sex, int &cls, double &math, double &cprogram);
//                : id_(id), name_(name), sex_(sex), class_(cls), math_(math), cProgram_(cprogram)

    static int StudentCnt;

    QString GetID();
    QString GetName();
    QString GetSex();
    int GetClass();
    int GetMath();
    int GetCProgram();

    void SetID(QString id);
    void SetName(QString name);
    void SetSex(QString sex);
    void SetClass(int cls);
    void SetMath(double math);
    void SetCProgram(double cprogram);

private:
    int uid_;
    QString id_;
    QString name_;
    QString sex_;
    int class_;
    double math_;
    double cProgram_;
    double average_;
    double sum_;

    void Calc();
};

#endif // STUDENT_STATUS_H
