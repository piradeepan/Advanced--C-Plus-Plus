#include <iostream>
#include "Media.h"
#include "Periodical.h"
using namespace std;

Periodical::Periodical(string cn, string te, string st, string nts, string ar, string dn, string pr, string ph, string srs, string rts, string oft, string gdn): Media(cn, te, st, nts), author(ar), description(dn), publisher(pr), publishing_history(ph), series(srs), related_titles(rts), other_forms_title(oft), govt_dc_number(gdn) { }

bool Periodical::compare_other(const string& ss) {
   if(notes.find(ss) || series.find(ss) || related_titles.find(ss))
      return true;
   else
      return false;
}

void Periodical::display() {
   Media::display();
   cout << "Author: "               << author << endl;
   cout << "Description: "          << description << endl;
   cout << "Publisher: "            << publisher << endl;
   cout << "Publishing History: "   << publishing_history << endl;
   cout << "Series: "               << series << endl;
   cout << "Related Titles: "       << related_titles << endl;
   cout << "Other Forms Of Title: " << other_forms_title << endl;
   cout << "Govt Doc Number: "      << govt_dc_number << endl;
}