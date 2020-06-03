#ifndef REPORT_H
#define REPORT_H
#include "Time.h"
#include "Date.h"
#include <string>
class Report {
  private:
    Date rep_date;
    Time rep_time;
    std::string rep_desc;
  public:
    //TO DO: constructor
    Report(int day, int month, int year, int hour, int minute, std::string desc);

    void display() const; //you write the definition
};
#endif
