#include <iostream>
#include <iomanip>
#include "Media.h"
#include "Video.h"
using namespace std;

Video::Video(string cn, string te, string st, string nts, string dn, string dr, string srs, string lbl): Media(cn, te, st, nts), description(dn), distributor(dr), series(srs), label(lbl) { }

bool Video::compare_other(const string& ss) {
   if(description.find(ss) != std::string::npos || notes.find(ss) != std::string::npos || distributor.find(ss) != std::string::npos)
      return true;
   else
      return false;
}

void Video::display() {
   Media::display();
   cout << "Description " << setw(10) << " : " << description << endl;
   cout << "Distributor " << setw(10) << " : " << distributor << endl;
   cout << "Series " << setw(15) << " : " << series << endl;
   cout << "Label " << setw(16) << " : " << label << endl << endl;
   cout << "*********************" << endl << endl;
}