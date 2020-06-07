#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <string>
class Book : public Media {
   public:
      Book(std::string cn, std::string te, std::string st, std::string nts, std::string ar, std::string dn, std::string pr, std::string cy, std::string yr, std::string srs);
      virtual bool compare_other(const std::string& ss);
      void display();
   private:
      std::string author, description, publisher, city, year, series;
};
//#include "Book.cpp"
#endif