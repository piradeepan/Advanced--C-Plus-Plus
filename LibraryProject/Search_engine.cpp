#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <fstream>
#include <utility>
#include <string>
#include "Media.h"
#include "Search_engine.h"
using namespace std;
vector<string> split( const string& s , char delimiter )  {
    vector<string> tokens;          // vector of tokens
    string token;                   // a single token
    istringstream tokenStream(s);   // an input string stream
    // Tokenize s by grabbing individual tokens
    while( getline( tokenStream , token , delimiter ) )
        tokens.push_back(token);    // add found token
    return tokens;
}
Search_engine::Search_engine() { 
   string bookfileName = "book.txt";
   string filmfileName = "film.txt";
   string periodicfileName= "periodic.txt";
   string videofileName = "video.txt";
   string Line, call_number, title, subjects, author, description, publisher, city, year, series, notes, director, publishing_history, related_titles, other_forms_title, govt_dc_number, distributor, label;
   char delimiter = '|';
   ifstream bookFile, filmFile, periodicFile, videoFile;
   vector<string> v;

   bookFile.open(bookfileName);
   while(!bookFile.eof()) {
      getline(bookFile,Line);
      if(!Line.empty()) {
         v = split(Line, delimiter);
         call_number = v[0];
         title       = v[1];
         subjects    = v[2];
         author      = v[3];
         description = v[4];
         publisher   = v[5];
         city        = v[6];
         year        = v[7];
         series      = v[8];
         notes       = v[9];
         Book* bk = new Book(call_number, title, subjects, notes, author, description, publisher, city, year, series);
         card_catalog.push_back(bk);
         //Clear all the contents from the string variable
         call_number.clear();
         title.clear();
         subjects.clear();
         author.clear();
         description.clear();
         publisher.clear();
         city.clear();
         year.clear();
         series.clear();
         notes.clear();
      }
   }
   v.clear();
	v.shrink_to_fit();
   bookFile.close();

   filmFile.open(filmfileName);
   while(!filmFile.eof()) {
      getline(filmFile,Line);
      if(!Line.empty()) {
         v = split(Line, delimiter);
         call_number = v[0];
         title       = v[1];
         subjects    = v[2];
         director    = v[3];
         notes       = v[4];
         year        = v[5];
         Film* fm = new Film(call_number, title, subjects, notes, director, year);
         card_catalog.push_back(fm);
         //Clear all the contents from the string variable
         call_number.clear();
         title.clear();
         subjects.clear();
         year.clear();
         notes.clear();
         director.clear();
      }
   }
   v.clear();
	v.shrink_to_fit();
   filmFile.close();

   periodicFile.open(periodicfileName);
   while(!periodicFile.eof()) {
      getline(periodicFile,Line);
      if(!Line.empty()) {
         v = split(Line, delimiter);
         call_number          = v[0];
         title                = v[1];
         subjects             = v[2];
         author               = v[3];
         description          = v[4];
         publisher            = v[5];
         publishing_history   = v[6];
         series               = v[7];
         notes                = v[8];
         related_titles       = v[9];
         other_forms_title    = v[10];
         if(v.size() > 11)
            govt_dc_number    = v[11];
         else
            govt_dc_number    = "";
         Periodical* pl = new Periodical(call_number, title, subjects, notes, author, description, publisher, publishing_history, series, related_titles, other_forms_title, govt_dc_number);
         card_catalog.push_back(pl);
         //Clear all the contents from the string variable
         call_number.clear();
         title.clear();
         subjects.clear();
         author.clear();
         description.clear();
         publisher.clear();
         series.clear();
         notes.clear();
         publishing_history.clear();
         related_titles.clear();
         other_forms_title.clear();
         govt_dc_number.clear();
      }
   }
   v.clear();
	v.shrink_to_fit();
   periodicFile.close();

   videoFile.open(videofileName);
   while(!videoFile.eof()) {
      getline(videoFile,Line);
      if(!Line.empty()) {
         v = split(Line, delimiter);
         call_number = v[0];
         title       = v[1];
         subjects    = v[2];
         description = v[3];
         distributor = v[4];
         notes       = v[5];
         series      = v[6];
         if(v.size() > 6)
            label    = v[7];
         else
            label    = "";
         Video* vo = new Video(call_number, title, subjects, notes, description, distributor, series, label);
         card_catalog.push_back(vo);
         cout << endl << card_catalog.size() << endl;
         //Clear all the contents from the string variable
         call_number.clear();
         title.clear();
         subjects.clear();
         description.clear();
         series.clear();
         notes.clear();
         distributor.clear();
         label.clear();
      }
   }
   v.clear();
	v.shrink_to_fit();
   videoFile.close();
}
vector<Media*> Search_engine::title_search(string ss) {
   vector<Media*> results;
   int sz = card_catalog.size();
   for(int i=0; i < sz; i++) {
      if (card_catalog[i]->compare_title(ss)) {
         std::cout << "True";
         results.push_back(card_catalog[i]);
      }
   }
   // for (int i =0; i < results.size(); ++i)
   //   results[i]->display();
   return results;
}
vector<Media*> Search_engine::callnumber_search(string ss) {
   vector<Media*> results;
   int sz = card_catalog.size();
   for(int i=0; i < sz; i++) {
      if (card_catalog[i]->compare_callnumber(ss)) {
         std::cout << "True";
         results.push_back(card_catalog[i]);
      }
   }
   // for (int i =0; i < results.size(); ++i)
   //   results[i]->display();
   return results;
}
vector<Media*> Search_engine::subjects_search(string ss) {
   vector<Media*> results;
   int sz = card_catalog.size();
   for(int i=0; i < sz; i++) {
      if (card_catalog[i]->compare_subjects(ss)) {
         std::cout << "True";
         results.push_back(card_catalog[i]);
      }
   }
   // for (int i =0; i < results.size(); ++i)
   //   results[i]->display();
   return results;
}
vector<Media*> Search_engine::other_search(string ss) {
   vector<Media*> results;
   int sz = card_catalog.size();
   for(int i=0; i < sz; i++) {
      if (card_catalog[i]->compare_notes(ss)) {
         std::cout << "True";
         results.push_back(card_catalog[i]);
      }
   }
   // for (int i =0; i < results.size(); ++i)
   //   results[i]->display();
   return results;
}
Search_engine::~Search_engine() {
   //release all the media objects using delete
   for(unsigned i=0;i<card_catalog.size();i++)
      delete card_catalog[i];
}