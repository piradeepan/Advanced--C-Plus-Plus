#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <utility>
#include "LibrarySearch.h"
using namespace std;
LibrarySearch::LibrarySearch() { }
string LibrarySearch::books() const {
    return "Inside books class";
}
string LibrarySearch::films() const {
    return "Inside films class";
}
string LibrarySearch::periodicals() const {
    return "Inside periodicals class";
}
string LibrarySearch::videos() const {
    return "Inside videos class";
}
vector<string> split( const string& s, char delimiter )  {
    vector<string> tokens;          // vector of tokens
    string token;                   // a single token
    istringstream tokenStream(s);   // an input string stream
    // Tokenize s by grabbing individual tokens
    while( getline( tokenStream, token, delimiter ) )
        tokens.push_back(token);    // add found token
    return tokens;
}
string removeSpecials( string str ) {
    int i=0,len=str.length();
    while(i<len) { // Check every character    
        char c=str[i];
        if( !(((c>='0')&&(c<='9')) || ((c>='A')&&(c<='Z')) || ((c>='a')&&(c<='z')) || (c==' ') || (c=='-')) ) {
            str.erase(i,1); // Delete "bad" character
            --len;          // and adjust length
        } 
        i++;
    }
    return str;
}