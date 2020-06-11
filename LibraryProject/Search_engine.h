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
        std::vector<Media*> title_search(const std::string& ss) const;
        std::vector<Media*> callnumber_search(const std::string& ss) const;
        std::vector<Media*> subjects_search(const std::string& ss) const;
        std::vector<Media*> other_search(const std::string& ss) const;
};
#endif