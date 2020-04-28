#include<iostream>
using namespace std;
int main()
{
	int value[5];
	cout<< "Enter the element : ";
	
	for(int i=0;i<5; ++i)
	cin>> value[i];
	
		cout<<"Element entered by you";
		for(int i=0;i<5; ++i)
		cout<<endl<<*(value+i);
		return 0;
}
