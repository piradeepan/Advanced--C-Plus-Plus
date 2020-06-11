#include "Media.h"
#include <iostream>
#include <iomanip>
using namespace std;

Media::Media(string cn, string te, string st, string nts): call_number(cn), title(te), subjects(st), notes(nts) { }

void Media::display() {
   cout << "Call Number " << setw(10) << " : " << call_number << endl;
   cout << "Title " << setw(16) << " : " << title << endl;
   cout << "Subject " << setw(14) << " : " << subjects << endl;
   cout << "Notes " << setw(16) << " : " << notes << endl;
}
bool Media::compare_callnumber(const string& ss) const {
   if(call_number.find(ss) != std::string::npos)
      return true;
   else
      return false;
}
bool Media::compare_title(const string& ss) const {
   if(title.find(ss) != std::string::npos) 
      return true;
   else
      return false;
}
bool Media::compare_subjects(const string& ss) const {
   if(subjects.find(ss) != std::string::npos) 
      return true;
   else
      return false;
}
bool Media::compare_notes(const string& ss) const {
   if(notes.find(ss) != std::string::npos) 
      return true;
   else
      return false;
}
Media::~Media () { }