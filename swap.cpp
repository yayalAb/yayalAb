#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter 2 number\n";
	cin>>a>>b;
	b=a+b;
	a=b-a;
	b=b-a;
	cout<<a<<" "<<b;
}
