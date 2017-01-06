#include <iostream>

using namespace std;
#include <iostream>

struct Foo
{
  Foo() {} 

  virtual void go() 
  {
    std::cout << "Foo" << std::endl;
  }
};

struct Bar : virtual public Foo
{
  Bar() {}

  void go()
  {
    std::cout << "Bar" << std::endl;
  }
};

int main() 
{ 
  Bar *b= new Bar;

   Foo *f = new Foo ;
b = dynamic_cast<Bar *>(f);
//f=b;
  b->Foo::go(); 
  //b->go(); 
  
  return 0; 
}