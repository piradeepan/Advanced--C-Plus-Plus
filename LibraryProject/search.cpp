/* CSCI511, Library Project
 * @file LibrarySearch.cpp
 * Purpose: Search solution for Library
 * @author Piradeepan Nagarajan
 * version 1.1 06/01/2020
 * */
#include <iostream>
#include <vector>
#include <string> // For Strings
#include <sstream> // For istringstream
#include <vector>
#include <fstream>
using namespace std;
#include "LibrarySearch.h" // Include the class interface header file
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
int main() {
    LibrarySearch L;
}