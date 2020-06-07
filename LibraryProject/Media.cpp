#include "Media.h"
#include <iostream>
using namespace std;

Media::Media(string cn, string te, string st, string nts): call_number(cn), title(te), subjects(st), notes(nts) { }

void Media::display() {
   cout << "Call Number: " << call_number << endl;
   cout << "Title: "       << title << endl;
   cout << "Subject: "     << subjects << endl;
   cout << "Notes"         << notes << endl;
}
bool Media::compare_callnumber(const string& ss) {
   if(call_number.find(ss))
      return true;
   else
      return false;
}
bool Media::compare_title(const string& ss) {
   if(title.find(ss)) 
      return true;
   else
      return false;
}
bool Media::compare_subjects(const string& ss) {
   if(subjects.find(ss)) 
      return true;
   else
      return false;
}
bool Media::compare_notes(const string& ss) {
   if(notes.find(ss)) 
      return true;
   else
      return false;
}