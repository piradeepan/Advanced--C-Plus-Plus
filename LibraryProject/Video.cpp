#include "Video.h"
#include <iostream>
using namespace std;

Video::Video(string cn, string te, string st, string nts, string dn, string dr, string srs, string lbl): Media(cn, te, st, nts), description(dn), distributor(dr), series(srs), label(lbl) { }

bool Video::compare_other(const string& ss) {
   if(description.find(ss) || notes.find(ss) || distributor.find(ss) )
      return true;
   else
      return false;
}

void Video::display() {
   Media::display();
   cout << "Description: " << description << endl;
   cout << "Distributor: " << distributor << endl;
   cout << "Series: "      << series << endl;
   cout << "Label: "       << label << endl;
}