#include <iostream>
#include "Media.h"
#include "Film.h"
using namespace std;

Film::Film(string cn, string te, string st, string nts, string dtr, string yr): Media(cn, te, st, nts), director(dtr), year(yr) { }

bool Film::compare_other(const string& ss) {
   if(notes.find(ss) || director.find(ss) || year.find(ss))
      return true;
   else
      return false;
}

void Film::display() {
   Media::display();
   cout << "Director: " << director << endl;
   cout << "Year: "     << year << endl;
}