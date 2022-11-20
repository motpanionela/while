#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	srand(time(0));
//	int userspin=1234, pin , error=0;
//
//do{
//cout <<"PIN";
//cin >>pin;
//if(pin != userspin) {
//	error++;
//}	
//
//
//} while( error <3 && pin!=userspin);
//
//if( error<3) cout <<"Loading...";
//else cout <<" Bloacked";
//int counter =100;
//while ( counter<=500) {
//	
//	if(counter%3==0 && counter%5==0)
//	cout << counter << " is disible"<<endl;
//	counter ++;
//}

int s,R;
for (int i =0 ,a,b,c,n=rand()%10-1; i < n; i++) {
do{
	a=rand()%200;
} while(a%2!=0);
s=0;
do {
	b=rand()%100;
	s+=b;
}while ( s <100);

do {
	c=rand()%100;
}while (c<33 || c > 44);


R=a+b-c;
cout << i << " din "<< n << " a  = " << a << " b = "<< b <<" c = "<< c <<" a+b-c= " << R<<endl;

if(R>=10 && R < 20) {
	cout << " a+b de " << endl;
	for (int j=0, x=rand()%50; j<x ; j++) {
		a=rand()%100;
		b=rand()%100;
		cout <<j+1<<" "<< x << " ori "<< " a+b= "<< a+b << endl;
	}
}
}










return 0;
}

