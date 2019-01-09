#include <iostream>
#include <cmath>
using namespace std;

int main()

{
  	int tien;
  	double lai;
  	double tkv;
  	double n;
  	double log (     double x);
  	
  	cout<<"Nhap so tien, lai, tien ky vong:";
  	cin>>tien>>lai>>tkv;
  	
  	n= (log(tkv/tien)/ log(1+lai))/4;
  	
  	cout<<"Thoi gian dat duoc so tien ky vong:"<<roundf( n * 1) / 1;
  	
  	return 0;
}
  	
