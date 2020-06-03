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
int main() {
    LibrarySearch L;
    cout<<L.books()<<endl;
    cout<<L.films()<<endl;
    cout<<L.periodicals()<<endl;
    cout<<L.videos()<<endl;
}