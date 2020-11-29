#ifndef STUDENTSTATUS_H
#define STUDENTSTATUS_H


#include <QString>

class StudentStatus
{
public:
    StudentStatus();
    StudentStatus(const QString &id, const QString &name, const QString &sex, int cls, double math, double cprogram);
//                : id_(id), name_(name), sex_(sex), class_(cls), math_(math), cProgram_(cprogram)

//    static int studentCnt;

    QString GetID();
    QString GetName();
    QString GetSex();
    int GetClass();
    double GetMath();
    double GetCProgram();
    double GetSum();

    void SetID(const QString &id);
    void SetName(const QString &name);
    void SetSex(const QString &sex);
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

    void CalcValue();
};
#endif // STUDENTSTATUS_H
