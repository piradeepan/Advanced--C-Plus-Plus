#ifndef LIBRARYSEARCH_H_INCLUDED
#define LIBRARYSEARCH_H_INCLUDED
class LibrarySearch {
    private:
        int data;
    public:
        LibrarySearch();
        string books() const;
        string films() const;
        string periodicals() const;
        string videos() const;
};
#include "LibrarySearch.cpp"
#endif