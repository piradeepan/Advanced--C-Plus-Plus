#include "Film.h"
#include <iostream>
using namespace std;
Film::Film(string cn, string te, string st, string nts, string dtr, string yr): Media(cn, te, st, nts), director(dtr), year(yr) { }

bool Film::compare_other(const string& ss) {
   /*if(description.find(ss) != description.end() || notes.find(ss) != notes.end() || year.find(ss) != year.end() )
      return true;
   else
      return false;*/
   return 0;
}

void Film::display() {
   Media::display();
   cout << "Director: "<< director << endl;
   cout << "Year: "<< year << endl;
}