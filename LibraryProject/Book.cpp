#include "Book.h"
#include <iostream>
using namespace std;
Book::Book(string cn, string te, string st, string nts, string ar, string dn, string pr, string cy, string yr, string srs): Media(cn, te, st, nts), author(ar), description(dn), publisher(pr), city(cy), year(yr), series(srs) { }

bool Book::compare_other(const string& ss) {
   /*if(description.find(ss) != description.end() || notes.find(ss) != notes.end() || year.find(ss) != year.end() )
      return true;
   else
      return false;*/
   return 0;
}

void Book::display() {
   Media::display();
   cout << "Author: "<< author << endl;
   cout << "Description: "<< description << endl;
   cout << "Publisher: "<< publisher << endl;
   cout << "City: "<< city << endl;
   cout << "Year: "<< year << endl;
   cout << "Series: "<< series << endl;
}