#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED
#include <string>
class Media {
   public:
      Media(string cn, string te, string st, string nts);
      bool compare_callnumber(const string& ss);
      bool compare_title(const string& ss);
      bool compare_subjects(const string& ss);
      bool compare_notes(const string& ss);
      virtual bool compare_other(const string& ss) = 0;
      virtual void display() = 0;
   protected:
      std::string call_number, title, subjects, notes;
};
#include "Media.cpp"
#endif