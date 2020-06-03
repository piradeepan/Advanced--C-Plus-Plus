#include "Report.h"
void func(Report r) //copy ctor
{
  r.display();
}


int main()
{
  Report r(07,02,1985,12,1985,"Piradeepan");
  // Create Report r;
  func(r);
}
