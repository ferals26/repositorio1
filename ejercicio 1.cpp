
#include<iostream>
#include<math.h>

using namespace std;

int main (){
	int precio;
	int iva = 0;
	int total = 0;
	
	cout<<"Digite el precio del producto: \n";
	cin>>precio;
	
	cout<<"\n\n El iva es el 16%\n";
	
	iva = (precio * 0.16);
	total = precio + iva;
	
	cout<<"El total del producto es : \n"<<total<<endl;
	
	return 0 ;
	
	
}
