#include <iostream>
#include <math.h>
using namespace std;

struct VT_Tri {
   void (*draw)(struct Triangle* x);
   float (*area)(struct Triangle* x);
};
struct Triangle {
  char color; //'r'==red, 'g'==green, 'b'==blue
  VT_Tri vttri;
  char shade; //'l'==light, 'd'==dark
  short base;
  short height;
};
struct VT_Cir {
   void (*draw)(struct Circle* x);
   float (*area)(struct Circle* x);
};
struct Circle {
  char color; //'r'==red, 'g'==green, 'b'==blue
  VT_Cir vtcir;
  char shade; //'l'==light, 'd'==dark
  int radius;
};
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
void setCircle(struct Circle* x, char col, char sha, short rad) {
   x->color = col;
   x->shade = sha;
   x->radius = rad;
   x->vtcir.draw = drawCircle;
   x->vtcir.area = areaCircle;
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
void setTriangle(struct Triangle* x, char col, char sha, short b, short h) {
   x->color = col;
   x->shade = sha;
   x->base = b;
   x->height = h;
   x->vttri.draw = drawTriangle;
   x->vttri.area = areaTriangle;
}
union shape_ptr {
    struct Circle* cir_ptr;
    struct Triangle* tri_ptr;
};
void do_poly(union shape_ptr shape) {
   shape.tri_ptr->vttri.draw(shape.tri_ptr);
   shape.tri_ptr->vttri.area(shape.tri_ptr);
}
int main() {
   struct Circle C1, C2;
   setCircle(&C1, 'b', 'l', 32);
   setCircle(&C2, 'b', 'l', 12);
   
   struct Triangle T1, T2;
   setTriangle(&T1, 'b', 'l', 14, 23);
   setTriangle(&T2, 'b', 'l', 8, 12);
   
   cout << "****************************************";
   union shape_ptr shapes[4];
   shapes[0].cir_ptr = &C1;
   shapes[1].cir_ptr = &C2;
   shapes[2].tri_ptr = &T1;
   shapes[3].tri_ptr = &T2;

   for(unsigned i=0;i<4;i++) {
      do_poly(shapes[i]);
   }
   cout << "****************************************" << endl;

   return 0;
}