#include <iostream>
#include <vector>
#include <string> 
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;
#include "Media.h"
#include "Book.h"
#include "Film.h"
#include "Periodical.h"
#include "Video.h"
#include "Search_engine.h"
int main() {
    int option;
    string search_input;
    Search_engine Library;
    vector<Media*> xyz;
    do {
        cout << endl;
        cout << "Library supports the following 4 searches" << endl << endl;
        cout << "Option 1: Search by call number" << endl;
        cout << "Option 2: Searh by title" << endl;
        cout << "Option 3: Search by subject" << endl;
        cout << "Option 4: Search by Other" << endl;
        cout << "Please select an Option : ";
        cin >> option;
        cout<<endl;
        if (option == 1) {
			cout << "Enter the search string for Call Number :";
            cin >> search_input;
            xyz = Library.title_search(search_input)
		} else if (option == 2) {
			cout << "Enter the search string for Title :";
            cin >> search_input;
		} else if (option == 3) {
			cout << "Enter the search string for Subject :";
            cin >> search_input;
		} else if (option == 4) {
			cout << "Enter the search string for Other :";
            cin >> search_input;
		} else {
			cout << "Invalid Option entered" << endl << endl;
		}
    } while(option == 1 || option ==2 || option ==3 || option == 4);
    return 0;
}