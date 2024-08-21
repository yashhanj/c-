/*types of function with operators 
1. with return type and with argument
2. without return type and with argument
3. with return type and without argument
4. without return type and without argument

operator
1. +
2. -
3. *
4. /
5. %
*/

#include<iostream>
using namespace std;
//with return type and with argument
int a1 (int n1,int n2);
int s1 (int n1,int n2);
int m1 (int n1,int n2);
float d1 (int n1,int n2);
int mo1 (int n1,int n2);

//without return type and with argument
void a2 (int n1,int n2);
void s2 (int n1,int n2);
void m2 (int n1,int n2);
void d2 (int n1,int n2);
void mo2 (int n1,int n2);

//with return type and without argument
int a3 ();
int s3 ();
int m3 ();
float d3 ();
int mo3 ();

//without return type and without argument
void a4 ();
void s4 ();
void m4 ();
void d4 ();
void mo4 ();

int main()
{
	int choice;
	char yes;
	again:
	cout<<"1. with return type and with argument  "<<endl;
	cout<<"2. without return type and with argument "<<endl;
	cout<<"3. with return type and without argument "<<endl;
	cout<<"4. without return type and without argument "<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"This is (with return type and with argument.)"<<endl;
			char interest;
			
			int n1,n2;
			int result;
			float result1;
			cout<<"Enter your n1:";
			cin>>n1;
			cout<<"Enter your n2:";
			cin>>n2;
			
			cout<<"Enter your interest in : add(+) , sub(-) , mul(*) , div(/) , mol(%) :";
			cin>>interest;
			
			switch(interest)
			{
				case '+':
				result = a1(n1,n2);
				cout<<"The addition of numbers are:"<<result;
				break;
				
				case '-':
				result = s1(n1,n2);
				cout<<"The subtraction of numbers are :"<<result;	
				break;
				
				case '*':
				result = m1(n1,n2);
				cout<<"The multipliaction of numbers are :"<<result;	
				break;
				
				case '/':
				result1 = d1(n1,n2);
				if(n2 != 0)
				{
					cout<<"The division of nums are :"<<result1;	
				}
				else 
				{
					cout<<"The value of denomerator can't be zero.";
				}
				break;	
				
				case '%':
				result = mo1(n1,n2);
				cout<<"The module of nums are :"<<result;	
				break;
				
				default:
					cout<<"INVALID DATA !";
				break;
			}
				cout<<"\nDo you like to continue: yes(y) or no(n):";
				cin>>yes;
				
				if(yes == 'y' || yes == 'Y')
				{
					goto again;	
				}
				else
				{
					goto end;
				}
				
			
		break;
		
		case 2 :
			cout<<"This is (without return type and with argument.)"<<endl;
			char interest2;
			
			int n3,n4;
			cout<<"Enter your n3:";
			cin>>n3;
			cout<<"Enter your n4:";
			cin>>n4;
			
			cout<<"Enter your interest in : add(+) , sub(-) , mul(*) , div(/) , mol(%) :";
			cin>>interest2;
			
			switch(interest2)
			{
				case '+':
					a2(n3,n4);
				break;
				
				case '-':
					s2(n3,n4);
				break;
				
				case '*':
					m2(n3,n4);
				break;
				
				case '/':
					d2(n3,n4);
				break;
				
				case '%':
					mo2(n3,n4);
				break;
				
				default:
					cout<<"INVALID DATA !";
				break;
			}
			
				cout<<"\nDo you like to continue: yes(y) or no(n):";
				cin>>yes;
				
				if(yes == 'y' || yes == 'Y')
				{
					goto again;	
				}
				else
				{
					goto end;
				}
			
		break;
		case 3:
			cout<<"This is (with return type and without argument)"<<endl;
			char interest3;
			
			cout<<"Enter your interest in : add(+) , sub(-) , mul(*) , div(/) , mol(%) :";
			cin>>interest3;
			
			switch(interest3)
			{
				case '+':
					a3();
				break;
				
				case '-':
					s3();
				break;
				
				case '*':
					m3();
				break;
				
				case '/':
					d3();
				break;
				
				case '%':
					mo3();
				break;
				
				default:
					cout<<"INVALID DATA !";
				break;
				
			}
				
				cout<<"\nDo you like to continue: yes(y) or no(n):";
				cin>>yes;
				
				if(yes == 'y' || yes == 'Y')
				{
					goto again;	
				}
				else
				{
					goto end;
				}
		break;
		
		case 4:
			cout<<"This is (with return type and without argument)"<<endl;
			char interest4;
			
			cout<<"Enter your interest in : add(+) , sub(-) , mul(*) , div(/) , mol(%) :";
			cin>>interest4;
			
			switch(interest4)
			{
				case '+':
					a4();
				break;
				
				case '-':
					s4();
				break;
				
				case '*':
					m4();
				break;
				
				case '/':
					d4();
				break;
				
				case '%':
					mo4();
				break;
				
				default:
					cout<<"INVALID DATA !";
				break;
				
			}
				
				cout<<"\nDo you like to continue: yes(y) or no(n):";
				cin>>yes;
				
				if(yes == 'y' || yes == 'Y')
				{
					goto again;	
				}
				else
				{
					goto end;
				}
		break;
		
		default: 
			cout<<"INVALID NUMBER:";
		break;
					
		}
	
	end:
		cout<<"Thank for running me, I AM HAPPY :)"<<endl;
	return 0;
}


//with return type and with argument
//addition
int a1 (int n1,int n2)
{
	
	return n1+n2;	
};
//subtraction
int s1 (int n1,int n2)
{
	return n1-n2;
};
//multiplication
int m1 (int n1,int n2)
{
	return n1*n2;
};
//division
float d1(int n1, int n2) {
    float div;
    div = (float)n1 / (float)n2; // typecasting
    return div;
};
//module
int mo1 (int n1,int n2)
{
	return n1%n2;
};

//without return type and with argument
void a2 (int n1,int n2)
{
	int add = n1+n2;
	cout<<"The addition of two number are :"<<add;
};
void s2 (int n1,int n2)
{
	int sub = n1-n2;
	cout<<"The subtraction of two number are :"<<sub;
};
void m2 (int n1,int n2)
{
	int mul = n1*n2;
	cout<<"The multiplication of two number are :"<<mul;	
};
void d2 (int n1,int n2)
{
	//int div = n1/n2;
	float ans;
	if(n2 != 0)
	{
		ans = (float)n1/(float)n2;
		cout<<"The division of two number are :"<<ans;
	}
	else
	{
		cout<<"Not valid value for n2";
	}
	
};
void mo2 (int n1,int n2)
{
	int mol = n1%n2;
	cout<<"The module of two number are :"<<mol;
};

//with return type and without argument
//addition
int a3 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int add=n1+n2;
	cout<<"The addition of two nums are :"<<add;
	return add;
};
int s3 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int sub=n1-n2;
	cout<<"The subtraction of two nums are :"<<sub;
	return sub;
};
int m3 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int mul=n1*n2;
	cout<<"The multiplication of two nums are :"<<mul;
	return mul;
};
float d3 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	float div=(float)n1/(float)n2;
	if (n2 != 0)
	{
		cout<<"The division of two nums are :"<<div;
		return div;
	}
	else if (n2 == 0)
	{
		cout<<"The denomerator can't be zero:";
	}
};
int mo3 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int mol=n1%n2;
	cout<<"The module of two nums are :"<<mol;
	return mol;
};

//without return type and without argument
void a4 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int add=n1+n2;
	cout<<"The addition of two nums are :"<<add;	
};
void s4 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int sub=n1-n2;
	cout<<"The subtraction of two nums are :"<<sub;
};
void m4 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int mul=n1*n2;
	cout<<"The multiplication of two nums are :"<<mul;
};
void d4 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	float div=(float)n1/(float)n2;
	if (n2 != 0)
	{
		cout<<"The division of two nums are :"<<div;
	}
	else if (n2 == 0)
	{
		cout<<"The denomerator can't be zero:";
	}
};

void mo4 ()
{
	int n1,n2;
	cout<<"Enter your n1:";
	cin>>n1;
	cout<<"Enter your n2:";
	cin>>n2;
	int mol=n1%n2;
	cout<<"The module of two nums are :"<<mol;
};
