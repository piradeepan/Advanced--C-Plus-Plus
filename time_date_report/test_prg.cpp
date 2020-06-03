#include "Report.h"
void func(const Report& r) //copy ctor
{
  r.display();
}


int main()
{
  Report r(07,02,1985,11,20,"Piradeepan");
  // Create Report r;
  func(r);
}
