#include <iostream>
#include <iomanip>
#include "Media.h"
#include "Book.h"
using namespace std;

Book::Book(string cn, string te, string st, string nts, string ar, string dn, string pr, string cy, string yr, string srs): Media(cn, te, st, nts), author(ar), description(dn), publisher(pr), city(cy), year(yr), series(srs) { }

bool Book::compare_other(const string& ss) {
   if(description.find(ss) != std::string::npos || notes.find(ss) != std::string::npos || year.find(ss) != std::string::npos)
      return true;
   else
      return false;
}

void Book::display() {
   Media::display();
   cout << "Author " << setw(15) << " : " << author << endl;
   cout << "Description " << setw(10) << " : " << description << endl;
   cout << "Publisher " << setw(12) << " : " << publisher << endl;
   cout << "City " << setw(17) << " : " << city << endl;
   cout << "Year " << setw(17) << " : " << year << endl;
   cout << "Series " << setw(15) << " : " << series << endl;
   cout << "*********************" << endl << endl;
}