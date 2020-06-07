#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED
class Video : public Media {
   public:
      Video(string cn, string te, string st, string nts, string dn, string dr, string srs, string lbl);
      virtual bool compare_other(const string& ss);
      void display();
   private:
      std::string description, distributor, series, label;
};
#include "Video.cpp"
#endif