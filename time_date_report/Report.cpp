#include "Report.h"
#include<iostream>
using namespace std;
// constructor to create a report
Report::Report(int day, int month, int year, int hour, int minute, string desc): rep_date(month, day, year), rep_time(hour, minute) { 
    rep_desc = desc;
}

// write a display function
void Report::display() const {
    rep_date.display();
    rep_time.display();
    cout << rep_desc;
}