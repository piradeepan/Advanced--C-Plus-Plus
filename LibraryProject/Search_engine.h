#ifndef SEARCH_H_INCLUDED
#include <string>
class Search_engine : public Media {
    private:
        vector<Media*> card_catalog;
    public:
        Search_engine();
        ~Search_engine();
        string books() const;
        string films() const;
        string periodicals() const;
        string videos() const;
        vector<Media*> title_search(string ss);
        vector<Media*> callnumber_search(string ss);
        vector<Media*> subjects_search(string ss);
        vector<Media*> notes_search(string ss);
};
//#include "Search_engine.cpp"
#endif