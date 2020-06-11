#include <iostream>
using namespace std;
float add(float x, float y) {
   cout << "Function Add ";
   return x + y;
}
float subtract(float x, float y) {
   cout << "Function Subtract ";
   return x - y;
}
float divide(float x, float y) {
   cout << "Function Divide ";
   return x / y;
}
float multiply(float x, float y) {
   cout << "Function Multiply ";
   return x * y;
}
int main() {
   // Defining array of function pointers.
   float (*fn_ptr[])(float, float) = {add, subtract, divide, multiply};
   // Iterating through for loop to assign each of function to one element in an array.
   for(unsigned i = 0; i < sizeof(fn_ptr)/sizeof(*fn_ptr); i++ ) {
      cout << (*fn_ptr[i])(20, 10) << endl;
   }
   return 0;
}