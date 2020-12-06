#include <iostream>
using namespace std;
class complex
 {
     int a,b;
     public:
     void set(int x,int y)
      {
          a=x;
          b=y;
      }
     void show()
      {
          cout<<"a is"<<a<<endl;
          cout<<"b is"<<b<<endl;
      }
      complex operator+(complex c)
      {
          complex temp;
          temp.a=a+c.a;
          temp.b=b+c.b;
          return(temp);
      }
 };

int main() {
    complex c1,c2,c3;
    c1.set(5,9);
    c2.set(8,6);
    c3=c1.operator+(c2);
    c3.show();
	
	return 0;
}
