#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED
#include <string>
class Media {
   public:
      Media(std::string cn, std::string te, std::string st, std::string nts);
      bool compare_callnumber(const std::string& ss);
      bool compare_title(const std::string& ss);
      bool compare_subjects(const std::string& ss);
      bool compare_notes(const std::string& ss);
      virtual bool compare_other(const std::string& ss) = 0;
      virtual void display() = 0;
   protected:
      std::string call_number, title, subjects, notes;
};
//#include "Media.cpp"
#endif