 //============================================================================
// Name        : lab.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<fstream>
//#define max 50;
#include<sstream>
using namespace std;
class student
{
public:
	string name;
	string usn;
	string sem;
	string branch;
	fstream fp,f1;
	string buffer;
	void readname()
	{
		cout<<"name is:";
		cin>>name;
		cout<<"usn is:";
		cin>>usn;
		cout<<"students sem is:";
		cin>>sem;
		cout<<"branch is:";
		cin>>branch;
	}
	void pack()
	{
	int k;
	buffer= name+'|'+usn+'|'+sem+'|'+branch;
	k=buffer.length();
	while(k<50)
	{
		buffer+='|';
	}
	}
	void write()
	{
		f1.open("data.txt",ios::out|ios::app);
		f1<<buffer;
		f1.close();
	}
	void del()
	};
int main()
{
int choice;
student s1;
cout <<" what is your choice" << endl;
cin>>choice;
switch(choice)
{
case 1:s1.readname();
s1.pack();
s1.write();
break;
}
return 0;
}
