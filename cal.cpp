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
