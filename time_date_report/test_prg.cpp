#include "Report.h"
void func(Report r) //copy ctor
{
  r.display();
}


int main()
{
  // Create Report r;
  func(r);
}
