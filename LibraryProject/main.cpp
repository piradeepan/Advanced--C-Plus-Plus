#include <iostream>
#include <iomanip>
#include <vector>
#include <string> 
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;
#include "Media.h"
#include "Search_engine.h"
int main() {
    int option;
    string search_input;
    Search_engine Library;
    vector<Media*> user_result;
    do {
        cout << "Library supports the following 4 searches" << endl << endl;
        cout << "Option 1: Search by call number" << endl;
        cout << "Option 2: Searh by title" << endl;
        cout << "Option 3: Search by subject" << endl;
        cout << "Option 4: Search by Other" << endl << endl;
        cout << "Type any keyword to EXIT" << endl << endl;
        cout << "Please select an Option : ";
        cin >> option;
        cout<<endl;
        if (option == 1) {
			cout << "Enter the search string for Call Number :";
            cin.ignore();
            getline(cin, search_input);
            user_result = Library.callnumber_search(search_input);
            int sz = user_result.size();
            if(sz > 0) {
                for (int i =0; i < user_result.size(); i++) {
                    cout << "Search Result Number"<<setw(0)<<": " << i+1 <<endl;
                    user_result[i]->display();
                }
            } else {
                cout << endl << "NO SEARCH RESULTS FOUND."<< endl;
                cout << "------------------------" << endl;
            }
            search_input.clear();
		} else if (option == 2) {
			cout << "Enter the search string for Title :";
            cin.ignore();
            getline(cin, search_input);
            user_result = Library.title_search(search_input);
            int sz = user_result.size();
            if(sz > 0) {
                for (int i =0; i < user_result.size(); i++) {
                    cout << "Search Result Number"<<setw(0)<<": " << i+1 <<endl;
                    user_result[i]->display();
                }
            } else {
                cout << endl << "NO SEARCH RESULTS FOUND."<< endl;
                cout << "------------------------" << endl;
            }
            search_input.clear();
		} else if (option == 3) {
			cout << "Enter the search string for Subject :";
            cin.ignore();
            getline(cin, search_input);
            user_result = Library.subjects_search(search_input);
            int sz = user_result.size();
            if(sz > 0) {
                for (int i =0; i < user_result.size(); i++) {
                    cout << "Search Result Number"<<setw(0)<<": " << i+1 <<endl;
                    user_result[i]->display();
                }
            } else {
                cout << endl << "NO SEARCH RESULTS FOUND."<< endl;
                cout << "------------------------" << endl;
            }
            search_input.clear();
		} else if (option == 4) {
			cout << "Enter the search string for Other :";
            cin.ignore();
            getline(cin, search_input);
            user_result = Library.other_search(search_input);
            int sz = user_result.size();
            if(sz > 0) {
                for (int i =0; i < user_result.size(); i++) {
                    cout << "Search Result Number"<<setw(0)<<": " << i+1 <<endl;
                    user_result[i]->display();
                }
            } else {
                cout << endl << "NO SEARCH RESULTS FOUND."<< endl;
                cout << "------------------------" << endl;
            }
            search_input.clear();
		} else {
			cout << endl << "Invalid Option entered" << endl << endl;
		}
    } while(option == 1 || option ==2 || option ==3 || option == 4);
    return 0;
}