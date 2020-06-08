#include <iostream>
#include <iomanip>
#include "Media.h"
#include "Film.h"
using namespace std;

Film::Film(string cn, string te, string st, string nts, string dtr, string yr): Media(cn, te, st, nts), director(dtr), year(yr) { }

bool Film::compare_other(const string& ss) {
   if(notes.find(ss) != std::string::npos || director.find(ss) != std::string::npos || year.find(ss) != std::string::npos)
      return true;
   else
      return false;
}

void Film::display() {
   Media::display();
   cout << "Director " << setw(10) << " : " << director << endl;
   cout << "Year  " << setw(17) << " : " << year << endl << endl;
   cout << "*********************" << endl << endl;
}