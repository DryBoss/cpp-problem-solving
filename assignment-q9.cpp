#include <iostream>

using namespace std;

int main() {
  double a,b,c,d,e,f,g,h,i,j,k,l;

  //getting coefficients of equations
  cout<<"Enter the coefficient of 1st equation: ";
  cin>>a>>b>>c>>d;
  cout<< "Enter the coefficient of 2nd equation: ";
  cin>>e>>f>>g>>h;
  cout<<"Enter the coefficient of 3rd equation: ";
  cin>>i>>j>>k>>l;

  //calculating Dx, Dy, Dz and D
  double D,Dx,Dy,Dz;
  Dx= d*(f*k-j*g)-b*(h*k-g*l)+c*(h*j-f*l);
  Dy=a*(h*k-l*g)-d*(e*k-i*g)+c*(e*l-i*h);
  Dz=a*(f*l-j*h)-b*(e*l-i*h)+d*(e*j-i*f);
  D=a*(f*k-g*j)-b*(e*k-i*g)+c*(e*j-i*f);

  //Showing result
  cout<< "x= "<<Dx/D<<endl;
  cout<<"y= "<<Dy/D<<endl;
  cout<<"z= " <<Dz/D<<endl;

  return 0;
}