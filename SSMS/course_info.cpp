#include "course_info.h"

CourseInfo::CourseInfo()
{
//    this->uid_ = ++courseCnt;
    this->courseName_ = "";
    this->sum_ = 0.0;
    this->average_ = 0.0;
    this->totalNumber_ = 0;
    this->passNumber_ = 0;
    this->passRatio_ = 0.0;
}

CourseInfo::CourseInfo(QString &courseName)
{
//    this->uid_ = ++courseCnt;
    this->courseName_ = courseName;
    this->sum_ = 0.0;
    this->average_ = 0.0;
    this->totalNumber_ = 0;
    this->passNumber_ = 0;
    this->passRatio_ = 0.0;
}

QString CourseInfo::GetCourseName(){return this->courseName_;}
double CourseInfo::GetSum(){return this->sum_;}
double CourseInfo::GetAverage(){return this->average_;}
double CourseInfo::GetPassRatio(){return this->passRatio_;}

void CourseInfo::SetCourseName(QString &courseName){this->courseName_ = courseName;}
void CourseInfo::AddCourseScore(double newScore)
{
    this->sum_ += newScore;
    ++this->totalNumber_;
    if (newScore >= 60)
        ++this->passNumber_;
    CalcValue();
}

void CourseInfo::CalcValue()
{
    this->passRatio_ = this->passNumber_ / this->totalNumber_;
    this->average_ = this->sum_ / this->totalNumber_;
}
