<<<<<<< HEAD
void divide(int a,int b){
	cout<<a/b;
=======
#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<a+b<<endl;
}
void sub(int a,int b)
{
	cout<<a-b<<endl;
}
void mul(int a,int b)
{
	cout<<a%b<<endl;
}
void div(int a,int b)
{
	cout<<a/b<<endl;
>>>>>>> a17d259a23a61223c1ae78a2b2abecf48d85c639
}
void main()
{
	int a,b,ch;
	cout<<"enter two no.s"<<endl;
	cin>>a;
	cin>>b;
	cout<<"enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case '+':
				 add(a,b);
				 break;
		case '-':
				 sub(a,b);
				 break;
		case '*':
				 mul(a,b);
				 break;
		case '/':
				 div(a,b);
				 break;		 		 		 

	}

	

}
