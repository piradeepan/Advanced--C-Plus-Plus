#ifndef SEARCH_H_INCLUDED
#include <string>
#include <vector>
class Search_engine {
    private:
        vector<Media*> card_catalog;
    public:
        Search_engine();
        ~Search_engine();
        std::vector<Media*> title_search(string ss);
        std::vector<Media*> callnumber_search(string ss);
        std::vector<Media*> subjects_search(string ss);
        std::vector<Media*> other_search(string ss);
};
//#include "Search_engine.cpp"
#endif