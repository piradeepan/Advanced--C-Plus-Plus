#ifndef PERIODICAL_H_INCLUDED
#define PERIODICAL_H_INCLUDED
class Periodical : public Media {
   public:
      Periodical(string cn, string te, string st, string nts, string ar, string dn, string pr, string ph, string srs, string rts, string oft, string gdn);
      virtual bool compare_other(const string& ss);
      void display();
   private:
      string author, description, publisher, publishing_history, series, related_titles, other_forms_title, govt_dc_number;
};
#include "Periodical.cpp"
#endif