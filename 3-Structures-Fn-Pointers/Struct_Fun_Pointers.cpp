#include <iostream>
#include <math.h>
using namespace std;

struct Triangle {
  char color; //'r'==red, 'g'==green, 'b'==blue
  char shade; //'l'==light, 'd'==dark
  short base;
  short height;
} T;
struct Circle {
  char color; //'r'==red, 'g'==green, 'b'==blue
  char shade; //'l'==light, 'd'==dark
  int radius;
} C;
void setCircle(struct Circle* x, char col, char sha, short rad) {
   x->color = col;
   x->shade = sha;
   x->radius = rad;
}
void drawCircle(struct Circle* x) {
   switch(x->shade) {
      case 'l':
         cout << endl << "light";
         break;
      case 'd':
         cout << endl << "dark";
         break;
   }
   switch(x->color) {
      case 'r':
         cout << " red circle, ";
         break;
      case 'g':
         cout << " green circle, ";
         break;
      case 'b':
         cout << " blue circle, ";
         break;
   }
   cout << "Radius is " << x->radius << endl;
}
float areaCircle(struct Circle* x) { //returns area
   return 3.14 * pow(x->radius, 2);;
}
void setTriangle(struct Triangle* x, char col, char sha, short b, short h) {
   x->color = col;
   x->shade = sha;
   x->base = b;
   x->height = h; 
}
void drawTriangle(struct Triangle *x) {
   switch(x->shade) {
      case 'l':
         cout << endl << "light";
         break;
      case 'd':
         cout << endl << "dark";
         break;
   }
   switch(x->color) {
      case 'r':
         cout << " red triangle, ";
         break;
      case 'g':
         cout << " green triangle, ";
         break;
      case 'b':
         cout << " blue triangle, ";
         break;
   }
   cout << "base is " << x->base << " & height is " << x->height << endl;
}
float areaTriangle(struct Triangle* x) { //returns area
   return (x->base * x->height) / 2;
}
struct VT_Cir {
   void (*draw)(struct Circle* x);
   float (*area)(struct Circle* x);
} vtcir;
struct VT_Tri {
   void (*draw)(struct Triangle* x);
   float (*area)(struct Triangle* x);
} vttri;
int main() {
   struct Circle C;
   setCircle(&C, 'b', 'l', 32);
   drawCircle(&C);
   cout << "Area of Circle is " << areaCircle(&C) << endl;

   struct Triangle T;
   setTriangle(&T, 'b', 'l', 14, 23);
   drawTriangle(&T);
   cout << "Area of Triangle is " << areaTriangle(&T) << endl;
   
   cout << "********************";

   cout << endl<< "****** VT_Cir ******";
   struct VT_Cir vtcir;
   vtcir.draw = drawCircle;
   vtcir.area = areaCircle;
   vtcir.draw(&C);
   cout << "Area of Circle is " << vtcir.area(&C) << endl;

   cout << endl<< "****** VT_Tri ******";
   struct VT_Tri vttri;
   vttri.draw = drawTriangle;
   vttri.area = areaTriangle;
   vttri.draw(&T);
   cout << "Area of Triangle is " << vttri.area(&T) << endl;
   return 0;
}