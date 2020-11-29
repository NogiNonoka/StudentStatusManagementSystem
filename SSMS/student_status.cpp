#include "student_status.h"

StudentStatus::StudentStatus()
{
//    this->uid_ = ++studentCnt;
    this->id_ = "";
    this->name_ = "";
    this->sex_ = "";
    this->class_ = 0;
    this->math_ = 0;
    this->cProgram_ = 0;
}


StudentStatus::StudentStatus(const QString &id, const QString &name, const QString &sex, int cls, double math, double cprogram)
{
//    this->uid_ = ++studentCnt;
    this->id_ = id;
    this->name_ = name;
    this->sex_ = sex;
    this->class_ = cls;
    this->math_ = math;
    this->cProgram_ = cprogram;
}

QString StudentStatus::GetID(){return this->id_;}
QString StudentStatus::GetName(){return this->name_;}
QString StudentStatus::GetSex(){return this->sex_;}
int StudentStatus::GetClass(){return this->class_;}
double StudentStatus::GetMath(){return this->math_;}
double StudentStatus::GetCProgram(){return this->cProgram_;}
double StudentStatus::GetSum(){return this->sum_;}

void StudentStatus::SetID(const QString &id){this->id_ = id;}
void StudentStatus::SetName(const QString &name){this->name_ = name;}
void StudentStatus::SetSex(const QString &sex){this->sex_ = sex;}
void StudentStatus::SetMath(double math){this->math_ = math;}
void StudentStatus::SetCProgram(double cprogram){this->cProgram_ = cprogram;}

void StudentStatus::CalcValue()
{
    this->sum_ = this->cProgram_ + this->math_;
    this->average_ = this->sum_ / 2.0;
}
