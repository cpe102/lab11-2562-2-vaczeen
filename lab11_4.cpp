#include<iostream>
#include<string>

using namespace std;

//Declare prototype of function template mySwap() here
template <typename i>
i mySwap(i &,i &);

int main(){
	
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	
	string a = "ABC", b = "DEF";
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	
	char p = 'P', q = 'Q';
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}
template <typename i>
i mySwap(i &x,i &y){
	i z;
	z=x;	
	x=y;
	y=z;
	return z;
}