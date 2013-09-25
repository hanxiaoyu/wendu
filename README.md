wendu
=====
#include<iostream>
using namespace std;
double zhuanhuan(double p,double c,double f)
{
  double m;
  if( p==0 ) 
     m=5.0/9.0*(f-32.0); 
  else 
      m=9.0/5.0*c+32.0;	  
  return m;
}
int main()
{
double p,c,f;
cout<<"Input p "<<endl;
cout<<"Input c f"<<endl;
cin>>p>>c>>f;
cout<<"转换结果为："<<zhuanhuan(p,c,f)<<endl;
system("pause"); 
return 0;
}
