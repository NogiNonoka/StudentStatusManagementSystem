#include "course_info.h"

CourseInfo::CourseInfo()
{
    this->courseName_ = "";
    this->sum_ = 0.0;
    this->average_ = 0.0;
    this->totalNumber_ = 0;
    this->passNumber_ = 0;
    this->passRatio_ = 0.0;
}

CourseInfo::CourseInfo(const QString &courseName)
{
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
int CourseInfo::GetTotalNumber(){return this->totalNumber_;}
int CourseInfo::GetPassNumber(){return this->passNumber_;}
double CourseInfo::GetPassRatio(){return this->passRatio_;}

void CourseInfo::SetCourseName(const QString &courseName){this->courseName_ = courseName;}
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
    if (this->totalNumber_ > 0)
    {
        this->passRatio_ = 1.0 * this->passNumber_ / this->totalNumber_;
        this->average_ = 1.0 * this->sum_ / this->totalNumber_;
    }
    else
    {
        this->passRatio_ = 0.0;
        this->average_ = 0.0;
    }
}
