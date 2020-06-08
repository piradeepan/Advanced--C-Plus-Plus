#ifndef PERIODICAL_H
#define PERIODICAL_H
#include <string>
class Periodical : public Media {
   public:
      Periodical(std::string cn, std::string te, std::string st, std::string nts, std::string ar, std::string dn, std::string pr, std::string ph, std::string srs, std::string rts, std::string oft, std::string gdn);
      virtual bool compare_other(const std::string& ss);
      void display();
   private:
      std::string author, description, publisher, publishing_history, series, related_titles, other_forms_title, govt_dc_number;
};
#endif