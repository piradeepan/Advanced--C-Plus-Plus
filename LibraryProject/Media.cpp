#include "Media.h"
#include <iostream>
using namespace std;

Media::Media(string cn, string te, string st, string nts): call_number(cn), title(te), subjects(st), notes(nts) { }

void Media::display() {
   cout << "Call Number: "<< call_number << endl;
   cout << "Title: " << title << endl;
   cout << "Subject: "<< subjects << endl;
   cout << "Notes" << notes << endl;
}
bool compare_callnumber(const string& ss) {
   return 0;
}
bool Media::compare_title(const string& ss) {
   cout << "In Media compare_title function";
/*   if(title.find(ss)!=title.end()) 
      return true;
   else
      return false; */
      return 0;
}
bool compare_subjects(const string& ss) {
   return 0;
}
bool compare_notes(const string& ss) {
   return 0;
}