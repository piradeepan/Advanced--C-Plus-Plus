#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED
class Film : public Media {
   public:
      Film(string cn, string te, string st, string nts, string dtr, string yr);
      virtual bool compare_other(const string& ss);
      void display();
   private:
      std::string director, year;
};
#include "Film.cpp"
#endif