#include <iostream>
#include <iomanip>
#include "Media.h"
#include "Periodical.h"
using namespace std;

Periodical::Periodical(string cn, string te, string st, string nts, string ar, string dn, string pr, string ph, string srs, string rts, string oft, string gdn): Media(cn, te, st, nts), author(ar), description(dn), publisher(pr), publishing_history(ph), series(srs), related_titles(rts), other_forms_title(oft), govt_dc_number(gdn) { }

bool Periodical::compare_other(const string& ss) {
   if(description.find(ss) != std::string::npos || notes.find(ss) != std::string::npos || series.find(ss) != std::string::npos || related_titles.find(ss) != std::string::npos)
      return true;
   else
      return false;
}

void Periodical::display() {
   Media::display();
   cout << "Author " << setw(15) << " : " << author << endl;
   cout << "Description " << setw(10) << " : " << description << endl;
   cout << "Publisher " << setw(12) << " : " << publisher << endl;
   cout << "Publishing History " << setw(3) << " : " << publishing_history << endl;
   cout << "Series " << setw(15) << " : " << series << endl;
   cout << "Related Titles " << setw(7) << " : " << related_titles << endl;
   cout << "Other Forms Of Title" << setw(0) << ": " << other_forms_title << endl;
   cout << "Govt Doc Number " << setw(6) << " : " << govt_dc_number << endl << endl;
   cout << "*********************" << endl << endl;
}