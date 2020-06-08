#ifndef VIDEO_H
#define VIDEO_H
#include <string>
class Video : public Media {
   public:
      Video(std::string cn, std::string te, std::string st, std::string nts, std::string dn, std::string dr, std::string srs, std::string lbl);
      virtual bool compare_other(const std::string& ss);
      void display();
   private:
      std::string description, distributor, series, label;
};
#endif