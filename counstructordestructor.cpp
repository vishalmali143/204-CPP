#include<iostream.h>
#include<conio.h>
class demo
{
  public:
  demo();
  ~demo();
};
demo::demo()
  {
  cout<<"default constructor called"<<endl;
  }
demo::~demo()
  {
  cout<<"destructor called"<<endl;
  }
main()
{
clrscr();
demo d;
getch();
}
