#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H
#include <string>
#include <vector>
#include "Media.h"
#include "Book.h"
#include "Film.h"
#include "Periodical.h"
#include "Video.h"
class Search_engine {
    private:
        std::vector<Media*> card_catalog;
    public:
        Search_engine();
        ~Search_engine();
        std::vector<Media*> title_search(std::string ss);
        std::vector<Media*> callnumber_search(std::string ss);
        std::vector<Media*> subjects_search(std::string ss);
        std::vector<Media*> other_search(std::string ss);
};
#endif