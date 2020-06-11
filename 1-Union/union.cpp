#include <iostream>
using namespace std;

union MyUnion {
   int i1; // int member of MyUnion which occupies 4 bytes in the memory(vagrant c++ compiler)
   int *i2; // int pointer member of MyUnion which occupies 8 bytes in the memory(vagrant c++ compiler)
   float f1; // float member of MyUnion which occupies 4 bytes in the memory(vagrant c++ compiler)
   char c1[1]; // char member of MyUnion which occupies 1 byte in the memory(vagrant c++ compiler)
};

int main() {
   MyUnion MyUnOj; // Instance of Myunion
   MyUnOj.i1 = 20;
   MyUnOj.i2 = &MyUnOj.i1; //initializing the pointer to the address holding the integer value i2;
   MyUnOj.f1 = 10.10;
   MyUnOj.c1[0] = 'P';
   MyUnOj.c1[1] = 'N';
   cout << "Integer" << MyUnOj.i1 << endl;
   cout << "Integer Pointer" << MyUnOj.i2 << endl;
   cout << "Float" << MyUnOj.f1 << endl;
   cout << "Char c1[0]" << MyUnOj.c1[0] << endl;
   cout << "Chat c1[1]" << MyUnOj.c1[1] << endl;
   cout << endl << endl;
   cout << "An int occupies   " << sizeof(int) << " bytes." << endl;
   cout << "An int * occupies " << sizeof(int *) << " bytes." << endl;
   cout << "An float occupies " << sizeof(float) << " bytes." << endl;
   cout << "An char occupies  " << sizeof(char) << " bytes." << endl;
   return 0;
}

// In Union, the value with the hightst bytes will occupy the memory first, later when another datatype is assigned to a variable in the union, that overwrites the existing allotted space and throws a garbage velue.