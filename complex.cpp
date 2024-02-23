/* 
Normal Constructor: https://ide.geeksforgeeks.org/OhJuH0bVQv
Initializer List: https://ide.geeksforgeeks.org/RrJj053shO
Without Initializer List: https://ide.geeksforgeeks.org/VlMgoxvgsa
With Initializer List: https://ide.geeksforgeeks.org/wBIjIREd9r
Shallow Copy: https://ide.geeksforgeeks.org/MpRZdZdg1C
Deep Copy: https://ide.geeksforgeeks.org/vIURiPfrWy
Destructor Example 1: https://ide.geeksforgeeks.org/Mnf1iJWYOx
Destructor Example 2: https://ide.geeksforgeeks.org/TgCTHdvtcQ

*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
  
  
  int real; 
  int imag;
  
  public:
  void print()
  {
      cout<<real<<"+i"<<imag<<endl;
  }
  
  Complex (int r, int i)
  {
      real = r; 
      imag = i;
      
  }
  
 
    
};

int main ()
{
    Complex c1(10,15);
    c1.print();
  //  cout<<c1.real;
    
    return 0;
}