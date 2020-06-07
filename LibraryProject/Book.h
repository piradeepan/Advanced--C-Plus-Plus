#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <string>
class Book : public Media {
   public:
      Book(string cn, string te, string st, string nts, string ar, string dn, string pr, string cy, string yr, string srs);
      virtual bool compare_other(const string& ss);
      void display();
   private:
      std::string author, description, publisher, city, year, series;
};
#include "Book.cpp"
#endif