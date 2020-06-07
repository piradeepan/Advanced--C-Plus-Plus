#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
#include <fstream>
#include <utility>
#include <string>

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
int main() {
   string bookfileName = "book.txt";
   string filmfileName = "film.txt";
   string periodicfileName= "periodic.txt";
   string videofileName = "video.txt";
   string Line, call_number, title, subjects, author, description, publisher, city, year, series, notes, director, publishing_history, related_titles, other_forms_title, govt_dc_number, distributor, label;
   char delimiter = '|';
   ifstream bookFile, filmFile, periodicFile, videoFile;
   vector<string> v;

   int i=0;
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
         //Book* bk = new Book(call_number, title, subjects, notes, author, description, publisher, city, year, series);
         cout << "Call Number: " << call_number << endl;
         cout << "Title:  " << title << endl;
         cout << "Subjects: " << subjects << endl;
         cout << "Notes: " << notes << endl;
         cout << "Author: " << author << endl;
         cout << "Description: " << description << endl;
         cout << "Publisher: " << publisher << endl;
         cout << "City: " << city << endl;
         cout << "Year: " << year << endl;
         cout << "Series: " << series << endl;
         cout << ++i <<"*******************************"<<endl;
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

   i=0;
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
         //Film* fm = new Film(call_number, title, subjects, notes, director, year);
         cout << "Call Number: " << call_number << endl;
         cout << "Title:  " << title << endl;
         cout << "Subjects: " << subjects << endl;
         cout << "Notes: " << notes << endl;
         cout << "Director: " << director << endl;
         cout << "Year: " << year << endl;
         cout << ++i <<"*******************************"<<endl;
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

   i=0;
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
         //Periodical* pl = new Periodical(call_number, title, subjects, notes, author, description, publisher, publishing_history, series, related_titles, other_forms_title, govt_dc_number);
         cout << "Call Number          : " << call_number << endl;
         cout << "Title                : " << title << endl;
         cout << "Subjects             : " << subjects << endl;
         cout << "Notes                : " << notes << endl;
         cout << "Author               : " << author << endl;
         cout << "Description          : " << description << endl;
         cout << "publisher            : " << publisher << endl;
         cout << "Publishing History   : " << publishing_history << endl;
         cout << "Series               : " << series << endl;
         cout << "Related Titles       : " << related_titles << endl;
         cout << "Other Forms Of Title : " << other_forms_title << endl;
         cout << "Govt Doc Number      : " << govt_dc_number << endl;
         cout <<"******************************* "<< ++i <<" *******************************"<<endl;
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

   i=0;
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
         //Video* vo = new Video(call_number, title, subjects, notes, description, distributor, series, label);
         cout << "Call Number          : " << call_number << endl;
         cout << "Title                : " << title << endl;
         cout << "Subjects             : " << subjects << endl;
         cout << "Notes                : " << notes << endl;
         cout << "Description          : " << description << endl;
         cout << "Distributor          : " << distributor << endl;
         cout << "Series               : " << series << endl;
         cout << "label                : " << label << endl;
         cout <<"******************************* "<< ++i <<" *******************************"<<endl;
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
  //open the 4 .txt files and read them in
  //open book.txt
  //loop while stuff read in
  //  read in 10 fields
  //  Book* bp=new Book(x10);
  //  card_catalog.push_back(bp);
  //
  //rinse and repeat for the other media types
}