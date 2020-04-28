#include<iostream>
using namespace std;
int main()
{
	int age;
		cout<<"Enter the age of person :" ;
		cin>> age;
		if(age>=18)
		{
			cout<<"\nyou are eligible for voting.";
		}
		else
		cout<<"\nyou are not eligible for voting.";
		if(age>= 13 && age<=19)
		{
		cout<< "\nyou are a teenager.";
	}
		else
		cout<<"\nyou are not teenager. ";
		if(age<=13)
		cout<< "\nyou are child";
		return 0;
}
