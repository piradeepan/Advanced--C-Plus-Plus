#ifndef FILM_H
#define FILM_H
#include <string>
class Film : public Media {
   public:
      Film(std::string cn, std::string te, std::string st, std::string nts, std::string dtr, std::string yr);
      virtual bool compare_other(const std::string& ss);
      void display();
   private:
      std::string director, year;
};
#endif