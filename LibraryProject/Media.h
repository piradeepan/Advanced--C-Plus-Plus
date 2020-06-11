#ifndef MEDIA_H
#define MEDIA_H
#include <string>
class Media {
   public:
      Media(std::string cn, std::string te, std::string st, std::string nts);
      ~Media();
      bool compare_callnumber(const std::string& ss) const;
      bool compare_title(const std::string& ss) const;
      bool compare_subjects(const std::string& ss) const;
      bool compare_notes(const std::string& ss) const;
      virtual bool compare_other(const std::string& ss) = 0;
      virtual void display() = 0;
   protected:
      std::string call_number, title, subjects, notes;
};
#endif