1)Develop a program to check the entered user name is valid or not. Get both the inputs from the user. 
Sample Input: 
Enter the user name: Saveetha@789 
Reenter the user name: Saveetha@123 

Sample Output: 
User name is Invalid 

Program
#include<iostream> 
#include<string.h> 
using namespace std;
 int main() 
{ 
	string a,b; 
	cout<<"ENTER THE USER NAME =>";  	
cin>>a; 
	cout<<"\nREENTER THE USER NAME =>";  	
cin>>b;  	
if(a==b) 
	cout<<"VALID USER NAME";  	
else 
cout<<"INVALID USER NAME"; 
	} 
2)Identify  the Mth maximum number and Nth minimum number in an array and then find the sum of it and difference of it. 
Sample Input: 
Array of elements = {14, 16, 87, 36, 25, 89, 34}
M	= 1 
N	= 3 
Sample Output: 
1stMaximum Number = 89 
3rdMinimum Number = 25 
Sum = 114 
Difference = 64 


Program:


#include<iostream>
using namespace std;
int main()
{
 int a[20],i,j,n,x,y,temp,diff,sum;
 cout<<"enter the no of elements: ";
 cin>>n;
 cout<<"enter the elements";
 for(i=1;i<=n;i++)
 {
    cin>>a[i];
 }
 cout<<"enter the mth maximum value: ";
 cin>>x;
 cout<<"enter the nth minimum value: ";
 cin>>y;
 if(x<0||y<0||x>n||y>n)
 {
 	cout<<"invalid input";
 }
 else
 {
 for(i=1;i<=n-1;i++)
 {
  for(j=i+1;j<=n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
  }
 }
 sum=a[n-(x-1)]+a[y];
 diff=a[n-(x-1)]-a[y];
 cout<<"the maximum element is "<<a[n-(x-1)]<<"\n";
 cout<<"the minimum element is "<<a[y]<<"\n";
 cout<<"the sum of maximum and minimum is "<<sum<<"\n";
 cout<<"the difference of maximum and minimum is "<<diff<<"\n";
}
}


3)Build a program to reverse a number using loop?(Get the input from user) 
Sample Input: 
Number: 14567 

Sample Output: Reverse Number: 76541 


output:

#include<iostream>
using namespace std;
int reversenum(int n)
{
int rev,digit;
while(n!=0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
return rev;
}
int main()
{
int num,j;
cout<<"enter a number to reverse =>";
cin>>num;
if(num<=0)
{
	cout<<"Invalid Input";
}
else
{
	j=reversenum(num);
}
j=reversenum(num);
cout<<j;
} 
4)Develop  a program to find whether the person is eligible for vote or not. And if that particular person is not eligible, then print how many years are left to be eligible.  
Sample Input: 
 Enter your age: 7 
Sample output: 
You are allowed to vote after 11 years 
#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"\nenter your age : ";
cin>>age;
if(age>=18)
cout<<"\nyou are eligible to vote!!!";
else if(age<18)
cout<<"\nyou are allowed to vote after "<<18-age<<"year";
}
5)Develop  a program using choice to check  
Case 1: Given string is palindrome or not Case 2: Given number is palindrome or not Sample Input: 
Case = 1 String = MADAM Sample Output: Palindrome 
#include<iostream> using namespace std; int main() 
{ 
	string a,b; 
	cout<<"ENTER THE STRING =>";  cin>>a; 
	for (int i=a.size()-1;i>=0;i--) 
	{ 
		b+=a[i];	
	} 
	if(a==b) 
	cout<<"THE ENTERED WORD IS PALINDROME....";
	else 
	cout<<"THE ENTERED WORD IS NOT A PALINDROME...!!!";
} 

6)Develop  a program to print Right Triangle Star Pattern  Sample Input:: n = 5 Output:  
  *  
*	*  
*	* *  
*	* * *  
output
		#include <iostream>
using namespace std;
int main()
{
    int n = 5;
for(int i=n; i>0; i--)
    {
for(int j=0; j<=n; j++)     
	   {
        if (j>=i)
        {
cout<<"*";
        }
        else
        {
cout<<" ";
        }
      }
cout<<endl;
    }
    return 0;
}	 
7)Develop a program to print the below pattern?                                
				1				
			1		1			
		1		2		1		
	1		3		3		1	
1		4		6		4		1


output				
#include<iostream> using namespace std; int main() 
{ 
	int i,j,k,temp,n;  	cout<<"enter the number of rows => "; 
	cin>>n;
	for(i=0;i<n;i++) 
	{ 
	for(j=0;j<n-i;j++)  	cout<<" ";  	temp=1; 
		for(k=0;k<=i;k++) 
		{ 
		cout<<temp<<" ";  		temp=temp*(i-k)/(k+1); 
		} 
		cout<<"\n";
	} 
} 
8)Develop  a program using function to calculate the simple interest. Suppose the customer is a senior citizen. He is being offered 12 percent rate of interest; for all other customers, the ROI is 10 percent. 
Sample Input: 
Enter the principal amount: 200000 
Enter the no of years:  3 
Is customer senior citizen (y/n): n Sample Output: 
Interest: 60000 

Output
#include<iostream>
using namespace std;
int main()
{
int p,y,c,i,a;
cout<<"enter the principle amount => ";
cin>>p;
cout<<"\nenter the no of years =>";
cin>>y;
cout<<"\n1.senior citizen\n2.not senior citizen";
cout<<"\n enter the choise =>";
cin>>c;
switch(c)
{
case 1:
a=p*y*12/100;
cout<<"\n the simple interest for senior citizen is => "<<a;
break;
case 2:
i=p*y*10/100;
cout<<"\nthe simple interest for normal citizen is => "<<i;
}
} 
9)Build a class series and use member function input() for getting a number and member function  show() to print fibonacci series of a number. 

output
#include<iostream> using namespace std; class series 
{ 
	public: 
	int n,a=0,b=1,sum=0,count=1;  	void input() 
	{ 
	cout<<"enter the limit =>";
	cin>>n;
} 
	void show() 
	{ 
	while(count!=n+1) 
{ 
	cout<<sum<<"\n";  	count+=1;  	a=b; 
		b=sum;  		sum=a+b; 
	}} 
}; int main() 
{ 
	series s1;  	s1.input();  	s1.show(); 
} 
10)Develop a program to print the below pattern 
1 
2	2 
3	3  3
4	4   4   4 
output
#include<iostream> using namespace std; int main() 
{ 
	int row,i,j; 
	cout<<"ENTER THE NUMBER OF ROWS =>";  	cin>>row; 
	for(i=0;i<row;i++) 
{ 
		for(j=0;j<=i;j++) 
		{ 
			cout<<i+1;
		} 
		cout<<"\n";
	} 
} 
11)Build  a C++ program to print the below pattern 
1 
2	2 
3	3  3
4	4   4   4 
3  3  3 
2  2
 1 

Output
#include <iostream> using namespace std; void printPattern(int n) 
{ 
	for (int i = 1; i<= n; i++) 
	{ 
		for (int j = 1; j <= i; j++) 
			cout<<i; 			cout<< "\n"; 
	} 
	for (int i = n - 1; i> 0; i--) 
	{ 
	for (int j = i; j > 0; j--) 
		cout<<i;	
		cout<< "\n";
} } int main() 
{ 
	int n;
	cout<<"ENTER THE MAXIMUM NUMBER =>";  	cin>>n; 
	printPattern(n);  	return 0; 
} 
12)Develop a C++ program to generate Electricity bill. Create a class with the following members: 
Consumer no., consumer name, previous month reading, current month reading, type of EB connection (i.e domestic or commercial).  

Compute the bill amount using the following tariff. If the type of the EB connection is domestic,  calculate the amount to be paid as follows:  
First 100 units - Rs. 1 per unit  
101-200 units - Rs. 2.50 per unit  
201 -500 units - Rs. 4 per unit  
> 501 units - Rs. 6 per unit 

 If the type of the EB connection is commercial, calculate the amount to be paid as follows:  First 100 units - Rs. 2 per unit  
101-200 units - Rs. 4.50 per unit  
201 -500 units - Rs. 6 per unit  
> 501 units - Rs. 7 per unit 

output
#include<iostream> using namespace std; class ebill
{ 
	public: 
		int cons_no,pre_read,cur_read,eb_type,usedunits;  		string cons_name; 
float amount=0;
	void input(void);  	void calculation();  		void display(); 
}; 
void ebill::input() 
{ 
	cout<<"ENTER CUSTOMER NUMBER =>";  	cin>>cons_no; 
	cout<<"\nENTER CONSUMER NAME =>";  	cin>>cons_name; 
	cout<<"\nENTER THE PREVIOUS MONTH UNITS READING =>";  	cin>>pre_read; 
	cout<<"\nENTER THE CURRENT MONTH UNITS READING =>";  	cin>>cur_read; 
	cout<<"\nENTER THE EB TYPE\n1 - domestic\n2 - commercial\n";  	cin>>eb_type; 
} 
void ebill::calculation() 
{ 
	if(eb_type==1) 
	{ 
		usedunits=cur_read-pre_read;  		if(usedunits<=100)  			amount=(usedunits*1); 
		if(usedunits>100&&usedunits<=200)  			amount=100+((usedunits-100)*2.5);  		if(usedunits>200&&usedunits<=500)  			amount=350+((usedunits-200)*4);  		if(usedunits>500)  	amount=1550+((usedunits-500)*7); 
} if(eb_type==2) 
	{ 
		usedunits=cur_read-pre_read;  		if(usedunits<=100)  			amount=(usedunits*2); 
		if(usedunits>100&&usedunits<=200)  			amount=200+((usedunits-100)*4.5);  		if(usedunits>200&&usedunits<=500)  			amount=650+((usedunits-200)*6);  		if(usedunits>500) 
			amount=2450+((usedunits-500)*7); 
	} 	
} 
void ebill::display() 
{ 
	cout<<"YOUR EBILL AMOUNT IS => "<<amount;
} int main() 
{ 
	ebill e1;  	e1.input();  	e1.calculation();  	e1.display(); 
} 
13)Develop a C++ program to perform different arithmetic operations such as addition, subtraction, division, modulus and multiplication switch case 

output
#include<iostream>
using namespace std; int main() 
{ 
	int a,b,input;  	float div; 
	cout<<"CALCULATOR\n\n1 - add\n2 - substract\n3 - multiplication\n4 - division\n5 
- modulas\n";
	cout<<"ENTER THE OPERATION =>";  	cin>>input;  	cout<<"\nNUMBER 1 : ";  	cin>>a; 
	cout<<"\nNUMBER2 : ";  	cin>>b; 
	switch(input) 
	{ 
		case 1: 
			cout<<a<<" + "<<b<<" = "<<(a+b);
			break;  		case 2: 
			cout<<a<<" - "<<b<<" = "<<(a-b);  			break;  		case 3: 
			cout<<a<<" x "<<b<<" = "<<(a*b);
			break;  		case 4: 
			div=(float)a/(float)b;  			cout<<a<<" / "<<b<<" = "<<div;  			break;  		case 5: 
			cout<<a<<" % "<<b<<" = "<<(a%b);
			break;
		default: 
			cout<<"ENTERED OPERATION IS INVALID ...!!";
} 
} 
14)Developa Employee class with Emp_name, Emp_id, Address, Mail_id, Mobile_no as members. Inherit the classes, Programmer, Assistant Professor, Associate Professor and Professor from employee class. Add Basic Pay (BP) as the member of all the inherited classes with 97% of BP as DA, 10 % of BP as HRA, 12% of BP as PF, 0.1% of BP for staff club fund. Generate pay slips for the employees with their gross and net salary. 

output
#include<iostream> using namespace std; class employee 
{ 
	public: 
	string Emp_name,Mail_id,Address,Emp_id,Mobile_no;  	double BP,GP,NP,DA,HRA,PF,CF;  	void input() 
	{ 
		cout<<"\n\nEnter Name of the Employee : ";  		cin>>Emp_name; 
		cout<<"\nEnter Address of the Employee : "; 
		cin>>Address;
		cout<<"\nEnter ID of the Employee : "; 
		cin>>Emp_id;
		cout<<"\nEnter Mobile Number : ";  		cin>>Mobile_no; 
		cout<<"\nEnter E-Mail ID of the Employee : "; 
		cin>>Mail_id;
	} 
	void display() 
	{ 
		cout<<"\nNAME => "<<Emp_name;  		cout<<"\nADDRESS => "<<Address;  		cout<<"\nEMPLOYEE ID => "<<Emp_id;  		cout<<"\nMOBILE NUMBER => "<<Mobile_no;  		cout<<"\nMAIL ID => "<<Mail_id<<"\n"; 
	} 
	void calculation() 
	{ 
		DA=BP*0.97;
		HRA=BP*0.10;
		PF=BP*0.12;
		CF=BP*0.01;
		GP=BP+DA+HRA+PF;
		NP=GP-PF-CF;	
	} 
	void basicpaydisplay() 
	{ 
		cout<<"\nBASIC PAY => "<<BP;  		cout<<"\nDEARNESS ALLOWANCE => "<<DA;  		cout<<"\nHOUSE RENT ALLOWENCE => "<<HRA;  		cout<<"\nPROVIDENT FUND => "<<PF;  		cout<<"\nCLUB FUND => "<<CF;  		cout<<"\nGROSS PAY => "<<GP;  		cout<<"\nNET PAY => "<<NP; 
	} 
}; 
class programmer:public employee 
{ 
	public: 
double bp1; 	 void proginput() 
{ 
		cout<<"\nENTER THE BASIC PAY OF THE PROGRAMMER =>";
		cin>>BP;
		cout<<"\n=======================\nPROGRAMMER	PAYMENT 
SLIP\n=======================";
	} 	
}; 
class assistantprof:public employee 
{ 
	public: 
	void assprofinput() 
	{ 
		cout<<"\nENTER THE BASIC PAY OF THE ASSISTANT PROFESSOR =>
"; 
		cin>>BP;
		cout<<"\n================================\nASSISTANT PROFESSOR PAYMENT SLIP\n================================\n";
	} 	
}; 
class assosciateprof:public employee 
{ 
	public: 
	void assoprofinput() 
	{ 
		cout<<"\nENTER THE BASIC PAY OF THE ASSOCIATE PROFESSOR =>
"; 
		cin>>BP;
		cout<<"\n================================\nASSOCIATE PROFESSOR PAYMENT SLIP\n================================\n";
	} 	
}; 
class professor:public employee 
{ 
	public: 
	void profinput() 
	{ 
		cout<<"\nENTER THE BASIC PAY OF THE PROFESSOR =>";
		cin>>BP;
		cout<<"\n======================\nPROFESSOR	PAYMENT 
SLIP\n======================\n";
	} 	
}; int main() 
{ 
	programmer p1;  	p1.input();  	p1.display();  	p1.proginput();  	p1.calculation();  	p1.basicpaydisplay();  	assistantprof a1;  	a1.input();  	a1.display();  	a1.assprofinput();  	a1.calculation();  	a1.basicpaydisplay();  	assosciateprof a2;  	a2.input();  	a2.display();  	a2.assoprofinput();  	a2.calculation(); a2.basicpaydisplay(); professor p2; p2.input(); 
	p2.display();  	p2.profinput();  	p2.calculation();  	p2.basicpaydisplay();  
} 
15)Develop  a class in C++ program To compute a record of 10 students, Read the name, Regno ,mark1,mark2,mark3 of the student, calculate the average marks  and grade for to display it. 
Test Case Average >90  , Grade – S 
                 Average >80  , Grade A 
                 Average >70, Grade  C
                 Average >60  Grade  D 
                 Average >50  Grade E 
               Average less than 50 Grade F 
Output
#include<iostream> using namespace std; class student 
{ 
	public:  	string name;  	int regno,mark1,mark2,mark3;  	float avg; 	
	void input();  	void calculation();  	void display(); 
}; 
void student::input() 
{ 
	cout<<"\n\nENTER THE STUDENT NAME =>";  	cin>>name; 
	cout<<"\nENTER THE REGISTER NUMBER =>";  	cin>>regno;  	cout<<"\nMARK 1 => ";  	cin>>mark1;  	cout<<"\nMARK 2 => ";  	cin>>mark2;  	cout<<"\nMARK 3 => ";  	cin>>mark3; 
} 
void student::calculation() 
{ 
	avg=(mark1+mark2+mark3)/3;
} 
void student::display() 
{ 
	cout<<"\nAVERAGE SCORE IS => "<<avg;  	if(avg>90)  	cout<<"\nS GRADE";  	if(avg>80 &&avg<90)  	cout<<"\nA GRADE";  	if(avg>70 &&avg<80)  	cout<<"\nC GRADE";  	if(avg>60 &&avg<70)  	cout<<"\nD GRADE";  	if(avg>50 &&avg<60)  	cout<<"\nE GRADE";  	if(avg<50) 
cout<<"\nF GRADE";
} int main() 
{ 
	int number;  	student s[20]; 
	cout<<"ENTER THE NUMBER OF STUDENT ENTRIES =>";  	cin>>number; 
	for(int i=0;i<number;i++) 
	{ 
		s[i].input();  		s[i].calculation();  		s[i].display(); 
	} 
} 
16)Develop   a Program in C++ to calculate income tax for the employee based on the following condition 
1.	if taxableincome<=60000,  tax=0; 
2.	if taxableincome>60000 and taxableincome<=150000,     tax= taxableincome *0.05; 
3.	if taxableincome>150000 or taxableincome<=500000) tax= taxableincome *0.1;
else tax=tableinc*0.15; 
output
#include<iostream> using namespace std; int main() 
{ 
	int income,tax;  	cout<<"ENTER THE INCOME => ";  	cin>>income;  	if(income<60000)  	tax=0; 
	if(income>60000 && income<150000)  	tax=income*0.05; 
	if(income>150000 && income<500000)  	tax=income*0.1;  	if(income>500000)  	tax=income*0.15; 
	cout<<"YOUR INCOME TAX FOR THE ENTERED INCOME IS => "<<tax;
} 
17)Develop   a Program in C++ to detect special characters present or not..
// Program to detect special character in a string. 
#include<bits/stdc++.h>
using namespace std; 
int main()
{
  // Input a string 
  string str;
  cout<<"Enter a string: ";
  getline(cin,str);
  int flag=0;
  
  // Checking if string contians special character
  for(int i=0;i<str.length();i++)
  {
    if ((str[i]>=48 && str[i]<=57)||(str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
        {
        	continue;
        }
    else
    {
      cout<<"String contains special character.\n";
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    cout<<"There is no special character in the string.\n";
  }
  return 0;
}





1.	Write a program in C++ to calculate the area of circle, rectangle, square and triangle using function overloading.


programme
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int s,l,b;
        float r,bs,ht;
        cout<<"Enter side of a square:";
        cin>>s;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        cout<<"Area of square is"<<area(s);
        cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}

output
Enter side of a square:4
Enter length and breadth of rectangle:4 6
Enter radius of circle:6
Enter base and height of triangle:2 4
Area of square is16
Area of rectangle is 24
Area of circle is 113.04
Area of triangle is 4


2.	Write a C++ program to swap two number using call by value mechanism


programme
#include<iostream>
using namespace std;

void swap(int,int);

int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;

        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";

        swap(a,b);

        cout<<"\nOutside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}


void swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nInside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}
Output
Enter Value Of A :: 23

Enter Value of B :: 30

Before Swapping, Value of ::
        A = 23  B = 30

Inside Function After Swapping, Value of ::
        A = 30  B = 23

Outside Function After Swapping, Value of ::
        A = 23  B = 30

3.	Create a class Vector with a single dimensional array, and size as data members. Use friend functions to read and print the member values. Write a main method to demonstrate the Vector class.
4.	Create a class Employee with members empno , name , deptname and designation as private variables. Create a friend function List Dept Wise to list all employees for a given dept.


programme
#include <windows.h>
#include <iostream>

using namespace std;

class employee
{
	int   emp_number;
	char  emp_name[20];
	float emp_basic;
	float emp_da;
	float emp_it;
	float emp_net_sal;

	public:

		void get_emp_details();
		float find_net_salary(float basic, float da, float it);
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee number: ";
	cin>>emp_number;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee basic: ";
	cin>>emp_basic;
	cout<<"\nEnter employee DA: ";
	cin>>emp_da;
	cout<<"\nEnter employee IT: ";
	cin>>emp_it;
}

float employee :: find_net_salary(float basic, float da, float it)
{
    return (basic+da)-it;
}

void employee :: show_emp_details()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee number    :  "<<emp_number;
	cout<<"\nBasic salary       :  "<<emp_basic;
	cout<<"\nEmployee DA        :  "<<emp_da;
	cout<<"\nIncome Tax         :  "<<emp_it;
	cout<<"\nNet Salary         :  "<<find_net_salary(emp_basic, emp_da, emp_it);
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    employee emp;
    
    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}

Output
Enter employee number: 88

Enter employee name: nani

Enter employee basic: 34444

Enter employee DA: 67

Enter employee IT: 66


**** Details of  Employee ****
Employee Name      :  nani
Employee number    :  88
Basic salary       :  34444
Employee DA        :  67
Income Tax         :  66
Net Salary         :  34445

1.	Write a program to print Right Triangle Star Pattern(Day 2)

programme
#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;  


output
    Sample Input::  n = 5
Output: 
           * 
         * * 
       * * * 
     * * * * 
  * * * * *
8. Write a program to convert Decimal number equivalent to Binary number and octal numbers?

programme
#include <iostream>
using namespace std;

int main()

{

	int dec, bin[16], i = 0, j = 0;	//dec and bin to store number and ints binary equivalent and i&j are	//for index maintaining 

	cout << "Enter a decimal number\n";

	cin >> dec;

	while (dec > 0)	//calculating the binary equivalent and storing it in the array

	{
		bin[i] = dec % 2;

		dec = dec / 2;

		++i;
	}

	cout << "Binary Equivalent:";	//printing the array in reverse order

	for (j = i - 1; j >= 0; --j)

		cout << bin[j];

	return 0;

}
output
Enter a decimal number
15
Binary Equivalent:1111
								
Sample Input:
Decimal Number: 15
Sample Output:
Binary Number = 1111
Octal = 17
10. Write a program to print hollow square and full square symbol pattern? Get the different symbol for hollow square and full square as input from the user.


programme
#include<stdio.h>

int main(){
    int side, i, j;
    
    printf("Enter side of square\n");
    scanf("%d", &side);
    
    /* Row iterator for loop */
    for(i = 0; i < side; i++){
     /* Column iterator for loop */
        for(j = 0; j < side; j++){
            /* Check if currely position is a boundary position */
            if(i==0 || i==side-1 || j==0 || j==side-1)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
Output
Enter side of square
4
****
*    *
*    *
****

11. Program to Find Even Sum of Fibonacci Series Till number N?(day 2)

programme
#include <bits/stdc++.h>
using namespace std;
int calculateEvenSum(int n)
{
    if (n <= 0)
        return 0;
 
    int fibo[2 * n + 1];
    fibo[0] = 0, fibo[1] = 1
    int sum = 0;
 
    for (int i = 2; i <= 2 * n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
 
        if (i % 2 == 0)
            sum += fibo[i];
    }
 
    return sum;
}
int main()
{
 
    // Get n
    int n = 8;
 
    cout << "Even indexed Fibonacci Sum upto "
         << n << " terms: "
         << calculateEvenSum(n) << endl;
 
    return 0;
}
Output
Sample Input: n = 4
Sample Output: 33
(N = 4, So here the fibonacci series will be produced from 0th term till 8th term: 0, 1, 1, 2, 3, 5, 8, 13, 21
Sum of numbers at even indexes = 0 + 1 + 3 + 8 + 21 = 33)
12. Write a program to enter the marks of a student in four subjects. Then calculate the total and aggregate, display the grade obtained by the student. If the student scores an aggregate greater than 75%, then the grade is Distinction. If aggregate is 60>= and <75, then the grade is First Division. If aggregate is 50 >= and <60, then the grade is Second Division. If aggregate is 40>= and <50, then the grade is Third Division. Else the grade is Fail.

programme
#include<iostream>
using namespace std;
int main()
{
	int english, chemistry, computers, physics, maths; 
    float total, average, percentage;
cout << "Please Enter the marks of five subjects: \n";
    cin >> english >> chemistry >> computers >> physics >> maths;
 total = english + chemistry + computers + physics + maths;
    average = total / 5;
    percentage = (total / (500)) * 100;
  cout << "\nTotal Marks      = " << total;
    cout << "\nAverage Marks    = " << average;
    cout << "\nMarks Percentage = " << percentage;
      if(percentage >= 90)    {
    	cout << "\nGrade A";
	}
	else if(percentage >= 80)    {
    	cout << "\nGrade B";
	}
	else if(percentage >= 70)    {
    	cout << "\nGrade C";
	}
	else if(percentage >= 60)    {
    	cout << "\nGrade D";
	}
	else if(percentage >= 40)    {
    	cout << "\nGrade E";
	}
	else {
    	cout << "\nFail";
	} 
	
 	return 0;
}
Output
Please Enter the marks of five subjects:
78
78
90
89
78

Total Marks      = 413
Average Marks    = 82.6
Marks Percentage = 82.6
Grade B


Sample Input & Output:
Enter the marks in python: 90
Enter the marks in c programming: 91
Enter the marks in Mathematics: 92
Enter the marks in Physics: 93
Total= 366
Aggregate = 91.5
DISTINCTION
13. Write a program for matrix addition?

programme
#include<iostream>
using namespace std; 
int main ()
{
    int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];
    cout << "Enter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q; 
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        exit(0);
    }	
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];		
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";	
        cout << "\n";
    }
    return 0;
}
output
Enter rows and column of matrix A : 2 2
Enter rows and column of matrix B : 2 2
Enter elements of matrix A : 4 6
2 3
Enter elements of matrix B : 7 5

2 3
Sum of matrices
11  11
4  6



Sample Input:
Mat1 = 1  2
   5  3
Mat2 = 2   3
             4   1
Sample Output:
Mat Sum = 3    5
                    9    4
14. Write a program for matrix multiplication?
programme
#include <iostream>  
using namespace std;  
int main()  
{  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
cout<<"enter the first matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiply of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;
output
enter the number of row=2
enter the number of column=2
enter the first matrix element=
2 4
2 4
enter the second matrix element=
3 5
3 5
multiply of the matrix=
18 30
18 30

Sample Input:
Mat1 = 1  2
5  3
Mat2 = 2   3
             4   1
Sample Output:
Mat Sum = 10    5
                    22    18
1.	Write a program to calculate bonus of the employees. The class master derives the information from both admin and account classes which derives information from class person. Create base and all derived classes having same  member functions and different parameters called getdata, display data and bonus. Create a base class pointer that capable of accessing data of any class and calculates bonus of the specified employee.
Code:
# include <iostream>
using namespace std;
class person
{
         int id;
        char name[30];
public:
        virtual void getdata();
        virtual void display();
        virtual void bonus();
};
void person :: getdata()
{   cout <<"\n Enter the name and number of the employee: "<< endl;
        cin >> name>>id;
}
void person :: display()
{
 cout <<"\n Employee Name  = "<< name<<"\n Number =  "<<id;
}
void person :: bonus()
{
 cout <<"\n Bonus function of person base class is called ";
}
class admin : public virtual person
{
 int sale_admin;
public:
        void getdata();
        void display();
        void bonus();
};
void admin :: getdata()
{
        cout <<"\n Enter the Sale amount of the admin : "<< endl;
        cin >> sale_admin;
}
void admin :: display()
{
        cout <<"\n Admin Employee sale amount  = "<< sale_admin;
}
void admin :: bonus()
{
       if (sale_admin >2000)
        cout << "\n The bonus of the admin is : "<< (sale_admin*0.25);
}
class account : public virtual person
{
        long int amt;
public :
        void getdata();
        void display();
        void bonus();
};
void account :: getdata()
{
        cout <<"\n Enter the amount accumulated in the account : "<< endl;
        cin >> amt;
}
void account:: display()
{
        cout <<"\n Employee Account amount  = "<< amt;
}
void account :: bonus()
{
        if (amt >10000)
        cout << "\n The bonus of the admin is : "<< (amt*0.25);
}
class master : public admin, public account
{
public:
        void getdata();
        void display();
        void bonus();
};
void master :: getdata()
{
        cout <<"\n Executing getdata of master class :";
        person::getdata();
        admin:: getdata();
        account::getdata();
}
void master :: display()
{
        cout <<"\n executing display of master class :";
        person::display();
        admin:: display();
        account::display();
}
void master :: bonus()
{
        cout <<"\n executing bonus of master class :";
        person::bonus();
        admin:: bonus();
        account::bonus();
}
int main()
{
    person p, *per_ptr;
    admin a, *admin_ptr;
    account ac, *acc_ptr;
    master  ms, *ms_ptr;
    cout <<"\nassigning the addr of base class person to base class pointer ";
    per_ptr=&p;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();
    cout <<"\n assigning the addr of admin class to base class pointer ";
    per_ptr=&a;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();
    cout <<"\n assigning the addr of account class to base class pointer ";
    per_ptr=&ac;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();
    cout <<"\n assigning the addr of class master to base class pointer ";
    per_ptr=&ms;
    per_ptr->getdata();
    per_ptr->display();
    per_ptr->bonus();
    return 0;
}
Output:
ssigning the addr of base class person to base class pointer
 Enter the name and number of the employee:
arjun
23

 Employee Name  = arjun
 Number =  23
 Bonus function of person base class is called
 assigning the addr of admin class to base class pointer
 Enter the Sale amount of the admin :
78000
 Admin Employee sale amount  = 78000
 The bonus of the admin is : 19500
 assigning the addr of account class to base class pointer
 Enter the amount accumulated in the account :
76000
 Employee Account amount  = 76000
 The bonus of the admin is : 19000
2.Write a C++ program to calculate the gross and net pay of employee from basic salary. Create employee which consists of employee name,emp_id, and basic salary as its data members. Use parameterized constructions in the derived class to initialize data members of the base class and calculate gross and net pay of the employee in the derived class.
Code
:# include<iostream>
using namespace std;
class salary
{
public:
int bs,net,hra,oa,alla,gp;
salary()
{
cout<<"Enter basic salary : ";
cin>>bs;
cout<<"Enter HRA : ";
cin>>hra;
cout<<"Enter other allowence : ";
cin>>oa;
cout<<"Enter all allowance for net salary : ";
cin>>alla; 
net=bs+hra+oa+alla;
cout<<"Your net salary is "<<net<<"\n";
gp=bs+hra+oa;
cout<<"Your gross pay is "<<gp<<"\n";
}
};
class deduction
{
public:
void deduction1()
{
cout<<"\n"<<"Income tax calculation Enter your details below "<<"\n";
}
};
class incometax : public salary
{
public:
incometax()
{
if(net>200000 and net<500000)
{
cout<<"Your income tax is "<<net*0.5;
}
else if(net>500000 and net<700000)
{
cout<<"Your income tax is "<<(net*0.10)+12500;
}
else if(net>700000 and net<1000000)
{
cout<<"Your income tax is "<<(net*0.15)+37500;
}
else if(net>1000000)
{
cout<<"Your income tax is "<<(net*0.20)+75000;
}
else
{
cout<<"No income tax";
}
}
};
int main()
{
salary p1;
deduction p2;
p2.deduction1();
incometax p3;
}
Output: Enter basic salary : 56000
Enter HRA : 4500
Enter other allowence : 3000
Enter all allowance for net salary : 3900
Your net salary is 67400
Your gross pay is 63500
3. Write a C++ program to demonstrate the multiple inheritance by creating a class cuboid which extends class rectangle, class shape. It calculates area and volume.
Code:
#include <iostream>
using namespace std;
class Volume {
    public:
        float volume(float l, float b, float h) {
            return (l * b * h);
        }
};
class Area {
    public:
        float area(float l, float b, float h) {
            return (2 * (l * b + l * h + b * h));
        }
};
class Cuboid: private Volume, private Area {
    private: float length,
    breadth,
    height;
    public: Cuboid(): length(0.0),
    breadth(0.0),
    height(0.0) {}
void getDimensions() {
        cout << "\nEnter the length of the Cuboid: ";
        cin >> length;

        cout << "\nEnter the breadth of the Cuboid: ";
        cin >> breadth;

        cout << "\nEnter the height of the Cuboid: ";
        cin >> height;
    }
    float volume() {
        return Volume::volume(length, breadth, height);
    }
    float area() {
        return Area::area(length, breadth, height);
    }
};
int main() {
     cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate the concept of Multiple Level Inheritence in CPP  ===== \n\n";
    Cuboid cuboid;
	cout << "\nCalling the getDimensions() method from the main() method:\n\n";
   cuboid.getDimensions();
    cout << "\n\n";
	cout << "\nArea of the Cuboid computed using Area Class is : " << cuboid.area() << "\n\n\n";
    cout << "Volume of the Cuboid computed using Volume Class is: " << cuboid.volume();
    cout << "\n\n\n";
    return 0;
}
Output:
Enter the length of the Cuboid: 4

Enter the breadth of the Cuboid: 4

Enter the height of the Cuboid: 3
Area of the Cuboid computed using Area Class is : 80
Volume of the Cuboid computed using Volume Class is: 48
4. Write a program for matrix addition?
Code:
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10],row,col,i,j;
	cout<<"enter the number of rows:";
	cin>>row;
	cout<<"enter the number of coloumn:";
	cin>>col;
	cout<<"enter A matrix element:";
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		cin>>a[i][j];
	}
	}
	cout<<"enter B matrix element:";
	for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    cin>>a[i][j];
	}
	}
	cout<<"ADDITION OF MATRIX A&B : \n";
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
	c[i][j]=a[i][j]+b[i][j];
	cout<<c[i][j];
	cout<<" ";
}
cout<<"\n";
}
return 0;
}
Output:
enter the number of rows:2
enter the number of coloumn:1
enter A matrix element:3
3
enter B matrix element:5
4
ADDITION OF MATRIX A&B :
5
4342193
5. Write a program to print rectangle symbol pattern. Get the symbol as input from user
Code:
#include <iostream>
using namespace std;
int main() {
    int l, w, i, j;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the width: ";
    cin >> w;
    cout << endl;
    for (i = 1; i <= w; i++) {
        for (j = 1; j <= l; j++) {
            cout << "*";
        }
        cout << endl;
    }
return 0;
}
Output:
Enter the length: 3
Enter the width: 4

***
***
***
6. Write a program to calculate tax given the following conditions:
If income is less than or equal to 1,50,000 then no tax
If taxable income is 1,50,001 – 3,00,000 the charge 10% tax
If taxable income is 3,00,001 – 5,00,000 the charge 20% tax
If taxable income is above 5,00,001 then charge 30% tax
Code:
#include<iostream>
using namespace std;
int main()
{
	int income,tax;
	cout<<" enter the income of the person :";
	cin>>income;
	if (income<=150000)
	  tax = 0;
	else if(income>=150001 && income<=300000)
	  tax = income*0.1;
	else if(income>=300001 && income<=500000)
	  tax = income*0.2;
	else
	  tax=income*0.3;
	cout<<" the income tax is :"<<tax<<endl;
	return 0;
}
Output:
enter the income of the person :6000
 the income tax is :0
7.Write a program that would sort a list of names in alphabetical order Ascending or Descending, choice get from the user?
Code:
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
        char str[5][20], t[20];
        int i, j;
        cout<<"\n Enter Any Five Names : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cin>>str[i];
        }
        for(i=1; i<5; i++)
        {
                for(j=1; j<5; j++)
                {
                        if(strcmp(str[j-1], str[j])>0)
                        {
                                strcpy(t, str[j-1]);
                                strcpy(str[j-1], str[j]);
                                strcpy(str[j], t);
                        }
                }
        }
        cout<<"\n Names Sorted in Alphabetical Order : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cout<<str[i]<<"\n";
        }
        return 0;
}
Output:
Enter any five names:
Ball
Apple
Cat
Dad
Red
Alphabetical order:
Apple
Ball
Cat
Dad
Red
8. Write a program to enter the marks of a student in four subjects. Then calculate the total and aggregate, display the grade obtained by the student. If the student scores an aggregate greater than 75%, then the grade is Distinction. If aggregate is 60>= and <75, then the grade is First Division. If aggregate is 50 >= and <60, then the grade is Second Division. If aggregate is 40>= and <50, then the grade is Third Division. Else the grade is Fail.
Code:
#include <iostream>
using namespace std;
int main(){
float a,b,c,d,tot;
 float agg;
cout<<"Enter the marks in python ";
cin>>a;
cout<<"Enter the marks in c programming:";
cin>>b;
cout<<"Enter the marks in Mathematics:";
cin>>c;
cout<<"Enter the marks in Physics:";
cin>>d;
tot=a+b+c+d;
cout<<"TOTAL : " << tot;
cout<<"\n";
agg=tot/4;
cout<<"AGGREGATE : " <<agg;
cout<<"\n";
 if (agg>=75){
cout<<"DISTINCTION";
 }
 else if (agg>=60 &&agg<75){
cout<<"FIRST DIVISION";
 }
 else if (agg>= 50 &&agg<60){
cout<<"SECOND DIVISION";
 }
 else if (agg>= 40 &&agg<50){
cout<<"THIRD DIVISION";
 }
 else if (agg< 40){
cout<<"FAIL";
 }
 else {
cout<<"invalid input";
 }
 return 0;
}
Output:
Enter the marks in python 56
Enter the marks in c programming:67
Enter the marks in Mathematics:78
Enter the marks in Physics:89
TOTAL : 290
AGGREGATE : 72.5
FIRST DIVISION
9. Find the factorial of n?
Code:
#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
Output:
Enter a positive integer: 5
Factorial of 5 = 120
10. Write a Program to create a list of all numbers in a range which are perfect squares and the sum of the digits of the number is less than 10.
Code:# include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int range1,range2;
    cout<<"Enter a range:";
    cin>>range1>>range2;
    int count=0;
    cout<<"Perfect numbers between "<<range1<<" and "<<range2<<" are: ";
    for(int i=range1;i<=range2;i++)
    {
    double sqr=sqrt(i);

   if(sqr-floor(sqr)==0)
     cout<<i<<" ";
    }
}
Output:
Enter a range:3
19
Perfect numbers between 3 and 19 are: 4 9 16
11. Write a Program to Find the Nth Largest Number in a array
Code:
#include <iostream>
using namespace std;
int main() {
int i, n;
  float arr[100];
 cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;
   for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }
  for(i = 1;i < n; ++i) {
  if(arr[0] < arr[i])
      arr[0] = arr[i];
  }
cout << endl << "Largest element = " << arr[0];
return 0;
}
Output: Enter total number of elements(1 to 100): 4

Enter Number 1 : 34
Enter Number 2 : 67
Enter Number 3 : 78
Enter Number 4 : 56
12. Write a program to find the sum of digits of N digit number (sum should be single digit)
Code:
#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,m,i; 
cout<<"Enter how many numbers:";
cin>>i;   
cout<<"Enter n number: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<"Sum is= "<<sum<<endl;    
return 0;  
}
Output:
Enter how many numbers:
2
1st num:2
2nd num:4
Sum:6

1. Problem Statement: The packing department of a television vision set manufacturer has to prepare a requisition note listing the number of different boxes required for the different TV models that it has received from the production department. The list prepared has to be forwarded to the stores department so that the required boxes are issued to the packing department. The category and the number of boxes required for each type of TV model is given as follows: Model types are TV-LCD 17,22,26,32,37 and box types are 1,2,3,4,2 respectively. 
Analysis:
Output 
prepare a requisition note include TV model, box types, number of different boxes required
Input: number of different boxes required for the different TV models

OUTPUT
#include<iostream>
using namespace std;
int main()
{
	int tv17box,tv22box,tv26box,tv32box,tv37box;
	int tv17num,tv22num,tv26num,tv32num,tv37num;
	tv17box=1;
	tv22box=2;
	tv26box=3;
	tv32box=4;
	tv37box=5;
	cout<<" enter number of tv 17 box model :";
	cin>>tv17num;
	cout<<" enter number of tv 22 box model :";
	cin>>tv22num;
	cout<<" enter number of tv 26 box model :";
	cin>>tv26num;
	cout<<" enter number of tv 32 box model :";
	cin>>tv32num;
cout<<" enter number of tv 37 box model :";
	cin>>tv37num;
	cout<< "\n            requesition note           ";
	cout<<" ============================================ ";
	cout<<" \n TV MODEL     |    BOX TYPE  |   NUMBERS REQUIRED ";
	cout<<"============================================= ";
	cout<<"\n tv model of 17 "<<tv17box<<tv17num;
	cout<<" \n tv model of 22 "<<tv22box<<tv22num;
	cout<<" \n tv model of 26 "<<tv26box<<tv26num;
	cout<<" \n tv model of 32 "<<tv32box<<tv32num;
	cout<<" \n tv model of 37 "<<tv37box<<tv37num;
   return 0;

}

QUESTION 2:
. Problem Statement : While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.
3.Write a source code for banking system with account creation with minimum 500 INR, deposit, withdraw, and balance checking features for 20 holders. Here 500 INR minimum balance should be maintain by all account holders. 
OUTPUT
#include <iostream>
using namespace std;
int main()
{
    int rows, num = 1;
cout<< "Enter number of rows: ";
cin>>rows;

for(int i = 1; i<= rows; i++)
   {
for(int j = 1; j <= i; j++)
        {
cout<<num*num*num<< " ";
num++;
        }
cout<<endl;
    }

    return 0;
}

QUESTION 3:
3.Problem Statement :A Travels company insures its drivers in the following cases:
Driver is married. 
Driver is an unmarried male above 30 years of age. 
Driver is an unmarried female above 25 years of age. 

In all other cases the driver is not insured. If the marital status, gender and age of the driver are the inputs, write a program to determine whether the driver is to be insured or not.
OUTPUT
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;
int main () 
{     
int m,s,p;    
 {  
cout<<"-If the driver is married:-\n";   
cout<< "1. yes\n";
	cout<< "2. no\n";
	cin>>m;
	 while (m==1)       
	  {      
	cout<<"-You are insured-\n";
	    return 0;
	  }   
 }  
 {  
cout<<"-Enter sex-:\n";      
cout<< "1. male\n";
cout<< "2. female\n";
cin>>s;
cout<<"-Enter your age-:\n";      
cin>>p;
 }      
 if ((s==1, p>39) and (s==2, p>25))     
cout<<"-You are insured-\n";
 else     
cout<<"-You are not insured-\n";
 return 0;
}


QUESTION 4:
. Problem Statement :You are playing an online game. In the game, a list of N numbers is given. The player has to arrange the numbers so that all the odd numbers of the list come after the even numbers. Write an algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.
Input
The first line of the input consists of an integer num, representing the size of the list(N). The second line of the input consists of N space-separated integers representing the values of the list
Output
Print N space-separated integers such that all the odd numbers of the list come after the even numbers


OUTPUT
#include <iostream>
using namespace std;


void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{

	int left = 0, right = size-1;
	while (left < right)
	{
		
		while (arr[left] % 2 == 0 && left < right)
			left++;

		
		while (arr[right] % 2 == 1 && left < right)
			right--;

		if (left < right)
		{
			
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int arr[] = {12, 34, 45, 9, 8, 90, 3};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;

	segregateEvenOdd(arr, arr_size);

	cout<<"Array after segregation ";
	for (i = 0; i<arr_size; i++)
		cout<<arr[i] << " ";

	return 0;
}
QUESTION 5:
Problem Statement :
Write a program to print all the locations at which a particular element
(taken as input) is found in a list and also print the total number of times it occurs
 in the list. The location starts from 1.
For example if there are 4 elements in the array
5
6
5
7
If the element to search is 5 then the output will be
5 is present at location 1
5 is present at location 3
5 is present 2 times in the array

OUTPUT
#include<iostream>

using namespace std;

int main()
{
int i,j,k,n,a[30];
cout<<"How many elements?";
cin>>n;
cout<<"\nEnter elements of array\n"<<endl;
for(i=0;i<n;++i)
cin>>a[i];
for(i=0;i<n;++i)
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
cout<<"\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";

return 0;
}









QUESTION 6:
9.Problem Statement :
           Write a program to print the below pattern
1
8      27
64    125    216
343  512    729    1000

OUTPUT 
#include <iostream>
using namespace std;
int main()
{
    int rows, num = 1;
cout<< "Enter number of rows: ";
cin>>rows;

for(int i = 1; i<= rows; i++)
   {
for(int j = 1; j <= i; j++)
        {
cout<<num*num*num<< " ";
num++;
        }
cout<<endl;
    }

    return 0;
}
QUESTION 7:
10.Problem Statement : A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3 steps at a time. Implement a method to count how many possible ways the child can run up the stairs.
Examples: 
Input : 4
Output : 7

OUTPUT
#include<iostream>
using namespace std;
int count_Ways(int n)
{
   if(n<0)
   {
      return 0;
   }
   else if(n==0)
   {
      return 1;
   }
   else
   {
      return count_Ways(n-1) +count_Ways(n-2) + count_Ways(n-3);
   }
}
int main()
{
   int n;
cout<<"Enter number of stairs: ";
cin>>n;
cout<<"There are "<<count_Ways(n)<<"  possible ways the child can run up thestairs."<<endl;
   return 0;
}

QUESTION 8:
12.Write a program to print number of factors and to print nth factor of the given number.
Sample Input:
Given Number: 100
N = 4
Sample Output:
Number of factors = 9
4th factor of 100 = 5
Test Cases:
Given Number = 512 , N = 6
Given Number = 343 , N = 7
OUTPUT

#include<iostream>
#include<string.h>
using namespace std;

int main(){
int n,num;
cout<<"Enter Number (between 1 and 100,000,00) : ";
cin>>num;
cout<<"Enter nth Number";
cin>>n;
int count=0,temp=0;
for(int i=1;i<=num;i++){
 if(num%i==0){
 count++;
 if(count==n){
 temp=i;
 }
 }
 }
cout<<"Number of factors ="<<count;
cout<<"nth factor  "<<n,num,temp;
}



QUESTION 9:
13.Write a Program to Remove the Duplicate Items from a array.
Sample Input:
Enter the number of elements in array:7
Enter element1:10
Enter element2:20
Enter element3:20
Enter element4:30
Enter element5:40
Enter element6:40
Enter element7:50
Sample Output:
Non-duplicate items:
[10, 20, 30, 40, 50]




OUTPUT
#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n, i, j, k = 0;
cout<< "Enter size of array : ";
cin>>n;
cout<< "Enter elements of array : ";
    for (i = 0; i< n; i++)
cin>> A[i];
    for (i = 0; i< n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
cout<< "Repeated elements after deletion : ";
    for (i = 0; i< k; i++)
cout<< B[i] << " ";
    return 0;
}



QUESTION 10:

14.Program to find whether the given number is Armstrong number or not
Sample Input:
Enter number : 153
Sample Output:
Given number is Armstrong number

OUTPUT
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
cout<< "Enter a three-digit integer: ";
cin>>num;
originalNum = num;

    while (originalNum != 0) {

        remainder = originalNum % 10;

        result += remainder * remainder * remainder;


originalNum /= 10;
    }

    if (result == num)
cout<<num<< " is an Armstrong number.";
    else 
cout<<num<< " is not an Armstrong number.";

    return 0;


1. Read the salary and deductions from user and calculate the  Gross Pay, net salary and income tax with various income tax slabs. The salary class will read all details then the deduction class and incometax class will inherit the salary class to perform the above.  
 
Code: 
 
#include<iostream> using namespace std; 
class salary 
{ 
 	public: 
 	 	int bs,net,hra,oa,alla,gp; 
 	 	salary() 
 	 	{ 
 	 	 	cout<<"Enter basic salary : "; 
 	 	 	cin>>bs; 
 	 	 	cout<<"Enter HRA : "; 
 	 	 	cin>>hra; 
 	 	 	cout<<"Enter other allowence : "; 
 	 	 	cin>>oa; 
 	 	 	cout<<"Enter all allowance for net salary : "; 
 	 	 	cin>>alla;   	 	 	net=bs+hra+oa+alla; 
 	 	 	cout<<"Your net salary is "<<net<<"\n"; 
 	 	 	gp=bs+hra+oa; 
 	 	 	cout<<"Your gross pay is "<<gp<<"\n"; 
 	 	} 
}; 
class deduction 
{ public: 
void deduction1() 
{ 
	 	cout<<"\n"<<"Income tax calculation Enter your details below 
"<<"\n"; 
 	 	 	 
 	 	} 
 	 	 
 	 	 
}; 
class incometax : public salary 
{ 
 	public: 
 	 	incometax() 
 	 	{ 
 	 	 	if(net>200000 and net<500000) 
 	 	 	{ 
 	 	 	 	cout<<"Your income tax is "<<net*0.5; 
 	 	 	} 
 	 	 	else if(net>500000 and net<700000) 
 	 	 	{ 
 	 	 	 	cout<<"Your income tax is "<<(net*0.10)+12500; 
 	 	 	} 
 	 	 	else if(net>700000 and net<1000000) 
 	 	 	{ 
 	 	 	 	cout<<"Your income tax is "<<(net*0.15)+37500; 
 	 	 	} 
 	 	 	else if(net>1000000) 
 	 	 	{ 
 	 	 	 	cout<<"Your income tax is "<<(net*0.20)+75000; 
 	 	 	} 
 	 	 	else 
 	 	 	{ 
 	 	 	 	cout<<"No income tax"; 
 	 	 	} 
 	 	} 
}; 
int main() 
{ 
 salary p1;  deduction p2;  p2.deduction1(); 
 	incometax p3; 
} 
OUTPUT:
Enter basic salary : 30000
Enter HRA : 4000
Enter other allowence : 3000
Enter all allowance for net salary : 5000
Your net salary is 42000
Your gross pay is 37000
 	 
2. Implement a program of maintaining banking account information system using multiple inheritance in C++ Programming. Here class savings derived from class account and class user. Use appropriate functions and variables. 
Code : 
 
#include<iostream> using namespace std; int bal=0; 
class account 
{ 
 	public:  	 	string name,acc,acty; 
 	 	void getdet() 
 	 	{ 
 	 	 	cout<<"\nenter your name : "; 
 	 	 	cin>>name; 
 	 	 	cout<<"\nenter your account number : "; 
 	 	 	cin>>acc; 
 	 	 	cout<<"\nenter your account type : "; 
 	 	 	cin>>acty; 
 	 	} 
 	 	void displaya() 
 	 	{ 
 	 	 	cout<<"\nname : "<<name;  	 	 	cout<<"\naccount number : "<<acc; 
 	 	 	cout<<"\naccount type  	: "<<acty; 
 	 	} 
}; 
class withdraw 
{ 
 	public: 
 	 	int amt; 
 	 	void getwith() 
 	 	{ 
 	 	 	cout<<"\nenter the withdrawl amount : "; 
 	 	 	cin>>amt; 
 	 	} 
 	 	void displayb() 
 	 	{ 
 	 	 	if(amt<=bal){ 
 	 	 	cout<<"\nbalance : "<<bal-amt;  	 	 	cout<<"\nTake your cash !!!"; 
 	 	 	} 
 	 	 	else 
 	 	 	cout<<"\ninsufficient balance !!!"; 
 	 	} 
}; 
class savings:public account,public withdraw 
{ public: 
int amt2; void getdep() 
{ 
 	 	 	cout<<"\nenter the deposit amount : "; 
 	 	 	cin>>amt2; 
 	 	} 
 	 	void displayc() 
 	 	{ 
 	 	 	if(amt2>0){ 
 	 	 	cout<<"\nbalance : "<<bal+amt2; 
 	 	 	cout<<"\ndeposited successfully !!!!"; 
 	 	 	} 
 	 	 	else 
 	 	 	cout<<"\ninvalid amount !!!"; 
 	 	} 
}; 
int main() 
{ 
 	int n;  	savings s; 
 	s.getdet(); 
 	cout<<"\n1.withdraw \n2.deposit \nenter your choice : "; 
 	cin>>n; 
// 	s.displaya();  	if(n==1){ 
 	 	s.getwith();  	 	//s.displayb(); 
 	} 
 	else if(n==2){ 
 	 	s.getdep();  	 	//s.displaya();  	 	s.displayc(); 
 	} 
 	return 0; 
} 

OUTPUT:
enter your name : rahul
enter your account number : 567845362
enter your account type : savings
1.withdraw
2.deposit
enter your choice : 2
enter the deposit amount : 1000
balance : 1000
deposited successfully !!!!
 
3. Consider an example of declaring the examination result. Design 3 classes student,exam,result. The student class has data members such as that reperesenting number, name of student ,create the class exam,which contains data members reperesenting name of subject,minmum marks,maximum marks, obtained marks for 3 subject derive class result from both student and exam classes. Test the result class in main function ? 
Code : 
 
#include<iostream> using namespace std; class student 
{
 public:   string name,regno;   void getdet() 
 	 	{ 
 	 	 	cout<<"\nenter your name : ";  
 	 	 	cin>>name; 
 	 	 	cout<<"\nenter your reg no : "; 
 	 	 	cin>>regno; 
 	 	} 	 	 
 	 	void displaya() 
 	 	{ 
 	 	 	cout<<"\nname : "<<name;  	 	 	cout<<"\nreg no : "<<regno; 
 	 	} 
}; 
class exam  
{ 
 	public:  	 	string sub1,sub2,sub3;  	 	float max=100,min=50,m1,m2,m3;  	 	void getmark() 
 	 	{ 
 	 	 	cout<<"\nenter the subject 1 : "; 
 	 	 	cin>>sub1; 
 	 	 	cout<<"\nenter the marks obtained in subject 1: "; 
 	 	 	cin>>m1; 
 	 	 	cout<<"\nenter the subject 2 : "; 
 	 	 	cin>>sub2; 
 	 	 	cout<<"\nenter the marks obtained in subject 2 : "; 
 	 	 	cin>>m2; 
 	 	 	cout<<"\nenter the subject 3 : "; 
 	 	 	cin>>sub3; 
 	 	 	cout<<"\nenter the marks obtained in subject 3 : "; 
 	 	 	cin>>m3; 
 	 	} 
}; 
class result:public student,public exam 
{ 
 	public:  	 	void displayb() 
 	 	{ 
 	 	 	cout<<"\n\n\n"<<sub1<<" : ";  	 	 	cout<<"\nminimum marks : "<<min;  	 	 	cout<<"\nmaximum marks : "<<max;  	 	cout<<"\nmarks obtained in "<<sub1<<" : "<<m1;  	 	cout<<"\n\n\n"<<sub2<<" : "; 
 	cout<<"\nminimum marks : "<<min;  	cout<<"\nmaximum marks : "<<max;  	cout<<"\nmarks obtained in "<<sub2<<" : "<<m2; 
 	 	 	cout<<"\n\n\n"<<sub3<<" : ";  	 	 	cout<<"\nminimum marks : "<<min;  	 	 	cout<<"\nmaximum marks : "<<max;  	 	 	cout<<"\nmarks obtained in "<<sub3<<" : "<<m3; 
 	 	} 
}; 
int main() 
{ 
 	result r; 
 	r.getdet(); 
 	r.getmark(); 
 	r.displaya(); 
 	r.displayb();  	return 0; 
} 

OUTPUT:
enter your name : rohith
enter your reg no : 192111567
enter the subject 1 : maths
enter the marks obtained in subject 1: 98
enter the subject 2 : physics
enter the marks obtained in subject 2 : 87
enter the subject 3 : english
enter the marks obtained in subject 3 : 89
name : rohith
reg no : 192111567
maths :
minimum marks : 50
maximum marks : 100
marks obtained in maths : 98
physics :
minimum marks : 50
maximum marks : 100
marks obtained in physics : 87
english :
minimum marks : 50
maximum marks : 100
marks obtained in english : 89


 
4.	Find the max of an integral data set. The program will ask the user to input the number of data values in the set and each value. The program prints on screen a pointer that points to the max value. 

CODE:
#include<iostream>
using namespace std;
int main()
{
  int n;int i; int max=0;
  cout<<"Enter number of values:";
  cin>>n;
  cout<<"Enter values in array:\n";
  int arr[n];
  for(i=0;i<n;i++) {
  cin>>arr[i];
  }
   for(int u=0;u<=n;u++){
   if (arr[u]>max)
     max=arr[u];
  }
  int *pointer= &max;
  cout<<"Largest integer value in the array is "<<*pointer;
  return 0;
}

OUTPUT:

Enter number of values:4
Enter values in array:
23
56
87
56
Largest integer value in the array is 87
     
 
 
5.	The user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them. 
 
Code : 
 
#include<iostream> using namespace std; 
void justdisplay(int*a,int*b) 
{ 
 	cout<<"entered A => "<<*a;  	cout<<"\nentered B => "<<*b; 
} 
int main() 
{ 
 	int a,b;  	cout<<"ENTER A => ";  	cin>>a; 
 	cout<<"ENTER B => ";  	cin>>b; 
 	justdisplay(&a,&b); 
}
OUTPUT:
Enter number of values:3
Enter values in array:
45
67
87
Largest integer value in the array is 87

6.	Program to read and display the Names, Roll No., Marks and grades of 3 students who have appeared in the examination. Declare the class of name, Roll No. and grade. Create an array of objects to read and display the contents. 
CODE:
 
#include<iostream> using namespace std; class name 
{ 
 	public: 
  string name;   void getname() 
 	 	{ 
 	 	 	cout<<"\nenter the name : "; 
 	 	 	cin>>name; 
 	 	} 
 	 	void displaya() 
 	 	{ 
 	 	 	cout<<"\nname : "<<name; 
 	 	} 
}; class roll 
{ 
 	public:  	 	string r; 
 	 	void getrn() 
 	 	{ 
 	 	 	cout<<"\nenter the roll no : "; 
 	 	 	cin>>r; 
 	 	} 
 	 	void displayb() 
 	 	{ 
 	 	 	cout<<"\nroll no : "<<r; 
 	 	} 
}; 
class grade:public name,public roll  
{ 
 	public:  	char g; 
 	void getgra() 
 	{ 
 	 	cout<<"\nenter the grade : ";  	 	cin>>g; 
 	} 
 	void displayc() 
{ 
	 	cout<<"\ngrade : "<<g; 
} 
}; 
int main() 
{ 
 	int n,i;  	grade d[10]; 
 	cout<<"\nenter the no of students : ";  	cin>>n; 
 	for(i=0;i<n;i++){  	 	d[i].getname();  	 	d[i].getrn();  	 	d[i].getgra(); 
 	} 
 	for(i=0;i<n;i++){  	 	d[i].displaya();  	 	d[i].displayb();  	 	d[i].displayc(); 
 	} 
 	return 0; 
} 
OUTPUT:
Enter information of students:
For roll number1,
Enter name: akash
Enter Grade: A

For roll number2,
Enter name: adithya
Enter Grade: B

For roll number3,
Enter name: pallavi
Enter Grade: A

Displaying Information:

Roll number: 1
Name: akash
Grade: A

Roll number: 2
Name: adithya
Grade: B

Roll number: 3
Name: pallavi
Grade: A

7. Count the number of persons inside a bank, by increasing count whenever a person enters a bank, using an increment(++) operator overloading function, and decrease the count whenever a person leaves the bank using a decrement(--) operator overloading function inside a class. 
 
Code : 
 
#include<iostream> using namespace std; 
class counter 
{ 
	 	public: 
	 	 	int count; 
	 	 	counter() 
	 	 	{ 
	 	 	 	count=0; 
	 	 	} 
	 	 	void operator++() 
	 	 	{ 
	 	 	 	count++; 
	 	 	} 
	 	 	void operator--() 
	 	 	{ 
	 	 	 	count--; 
	 	 	} 
	 	 	int display() 
	 	 	{ 
	 	 	 	return count; 
	 	 	} 
}; 
int main() 
{ 
	 	counter c1; 
	 	cout<<"\ninitial number of people => "<<c1.display(); 
	 	++c1; 
	 	++c1; 
 	++c1;  	++c1; 
	 	cout<<"\npresent number => "<<c1.display(); 
	 	--c1; 
	 	cout<<"\nsome of them leave => "<<c1.display(); 
} 
OUTPUT:
initial number of people => 0
present number => 4
some of them leave => 3

 
8. Suppose you have a Piggie Bank with an initial amount of Rs.500 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of Rs.500. Now make two constructors of this class as follows: 
i - without any parameter - no amount will be added to the Piggie Bank iki - having a parameter which is the amount that will be added to the Piggie Bank Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank. 
Code: 
 
#include<iostream> using namespace std; int sav=0; 
class addamount 
{ 
 	public:  	 	int amount=500;  	 	addamount() 
 	 	{ 
 	 	 	 
 	 	} 
 	 	addamount(int a) 
 	 	{  	 	 	sav=a; 
 	 	 	sav+=amount; 
 	 	} 
 	 	void display() 
 	 	{ 
 	 	 	cout<<"\nyour savings in a piggy bank : "<<sav; 
 	 	} 
}; 
int main() 
{ 
 	int amt; 
 	cout<<"\nenter the amount to add in a piggy bank : ";  	cin>>amt;  	addamount s,d(amt);  	s.display(); 
 	return 0; 
}  
OUTPUT:
enter the amount to add in a piggy bank : 100
your savings in a piggy bank : 600

9. Write a program to print the below pattern?                                  	 	 	 	1  	 	 	 
	 	 	 	1 	 	1 	 	 	 
	 	 	1  	2  	1 	 	 
	 	1 	 	3 	 	3 	 	1  
	1 	 	4  	6  	4 	 	1 
 
 
Code : 
 
#include <iostream> using namespace std; 
 
int main() 
{     int r, c = 1; 
 
    cout << "Enter number of rows: "; 
    cin >> r; 
 
    for(int i = 0; i < r; i++) 
    { 
        for(int j= r; j >= i; j--)             cout <<"  "; 
 
        for(int k = 0; k <= i; k++) 
        { 
            if (k == 0 || i == 0)                 c = 1;             else                 c = c*(i-k+1)/k;             cout << c << "   "; 
        } 
        cout << endl; 
    } 
 
    return 0; 
} 

OUTPUT:

Enter number of rows: 4
     1
    1 1
   1 2 1
  1 3 3 1

10. Write a program to print the first n perfect numbers. (Hint Perfect number means a positive integer that is equal to the sum of its proper divisors) Sample Input: 
N = 3 
Sample Output: 
First 3 perfect numbers are: 6 , 28 , 496 Test Cases: 
i. 	N = 0 ii. N = 5 iii. N = -2 iv. N = -5 
v. N = 0.2 Code : 
#include<iostream> using namespace std; int main() 
{ 
 	int n,i,j,k,c,n1=0;  	cout<<"\nenter the limit : ";  	cin>>n; 
 	cout<<"\nperfect numbers : \n";  	for(i=1;i<10000;i++){ 
	 	 	c=0; 
	 	 	for(j=1;j<i;j++){ 
 	 	 	if(i%j==0){  	 	 	 	c+=j; 
	 	 	 	} 
	 	 	} 
 	 	if(i==c){  	 	 	cout<<i<<"\n"; 
	 	 	 	n1++; 
 	 	 	if(n1==n)  	 	 	break; 
	 	 	} 
	 	} 
	 	return 0;
} 

OUTPUT:
   enter the limit : 3

perfect numbers :
6
28
496
11.  Write a program to print all the composite numbers between a and b? 
Sample Input: 
A	= 12 
B	= 19 
Sample Output 14, 15, 16, 18 Test cases: 
i. 	A = 11, B = 11 ii. A = 20, B = 10 iii. A = 0, B = 0 iv. A = -5, B = 5 
v. A = 7, B = -12 
 
Code : 
 
#include<iostream> using namespace std; int main() 
{ 
 	int start,end,i,j;  	cout<<"\nENTER THE STARTING => "; 
 	cin>>start; 
 	cout<<"\nENTER THE ENDING => "; 
 	cin>>end; 
 	for(i=start+1;i<end;i++) 
 	{ 
 	 int count=0;  	 for(j=1;j<=i;j++) 
 	 { 
 	  	if(i%j==0)  	  	count++; 
 	 } 
 	 if(count==2)  	 continue; 
 	 else 
 	 { 
 	  	cout<<i<<"\n"; 
 	 } 
 	} 
 	 
 	 
} 
OUTPUT:
  ENTER THE STARTING => 4
                ENTER THE ENDING => 9
       6
      8
12. Write a program to read the numbers until -1 is encountered. Find the average of positive numbers and negative numbers entered by user.  
Sample Input: 
Enter -1 to exit… 
Enter the number: 7 
Enter the number: -2 
Enter the number: 9 
Enter the number: -8 
Enter the number: -6 
Enter the number: -4 
Enter the number: 10 
Enter the number:  -1 Sample Output: 
The average of negative numbers is: -5.0 
The average of positive numbers is : 8.66666667 Test cases: 
i. -1,43, -87, -29, 1, -9 ii. 73, 7-6,2,10,28,-1 iii. -5, -9, -46,2,5,0 iv. 9, 11, -5, 6, 0,-1 v. -1,-1,-1,-1,-1 
 
Code: 
 
#include<iostream> using namespace std; int main() 
{ 
 	float n,neg=0,pos=0,n1=0,p1=0;  	cout<<"\nenter -1 to exit !!!";  	while(n!=-1){  	 	cout<<"\nenter the num : "; 
 	 	cin>>n; 
 	 	if(n<-1){ 
 	 	 	neg+=n; 
 	 	 	n1++; 
 	 	} 
 	 	else if(n>0){ 
 	 	 	pos+=n;  	 	 	p1++; 
 	 	} 
 	} 
 	cout<<"\npositive average : "<<pos/p1;  	cout<<"\nnegative average : "<<neg/n1; 
 	return 0; 
} 
 
OUTPUT:
  enter -1 to exit !!!
enter the num : 5
enter the num : 7
enter the num : 3
enter the num : -5
enter the num : -3
enter the num : -9
enter the num : -1
positive average : 5
negative average : -5.66667
13. Find the Mean, Median, Mode of the array of numbers? (DAY-3) Sample Input;: 
Array of elements = {16, 18, 27, 16, 23, 21, 19} Sample Output: 
	 	Mean = 20 
Median = 19 
Mode = 16 Test cases: 
1.	Array of elements = {26, 28, 37, 26, 33, 31, 29} 
2.	Array of elements = {1.6, 1.8, 2.7, 1.6, 2.3, 2.1, .19} 
3.	Array of elements = {0, 160, 180, 270, 160, 230, 210, 190, 0} 
4.	Array of elements = {200, 180, 180, 270, 160, 270, 270, 190, 200} 
5.	Array of elements = {100, 100, 100, 100, 100, 100, 100, 100, 100} 
 
Code: 
 
 
#include<iostream> using namespace std; int main() 
{ 
 	int a[50],c=0,i,n,c1,n1,j,k,b[10],re=0,r,max;  	float mean=0,median=0; 
 	cout<<"\nenter the no of elements in an array : "; 
 	cin>>n; 
 	for(i=0;i<n;i++){  	 	cout<<"\nenter the element "<<i+1<<" : "; 
 	 	cin>>a[i];  	 	mean+=a[i]; 
 	} 
 	for(i=0;i<n;i++){  	 	for(j=i+1;j<n;j++){ k=a[i]; 
	 	a[i]=a[j]; 
	 	 	a[j]=k; 
	 	} 
 	} 
 	cout<<"\nmean : "<<mean/n;  	if(n%2!=0){ 
 	 	n1=n/2; 
 	 	cout<<"\nmedian : "<<a[n1+1]<<"\n"; 
 	} 
 	else{ 
 	 	n1=n/2; 
 	 	median=(a[n1]+a[n1-1])/2;  	 	cout<<"\nmedian : "<<median; 
 	} 
 	for(i=0;i<n;i++){ 
 	 	max=0; 
 	 	for(j=i+1;j<n;j++){ 
 	 	 	if(a[i]==a[j]) 
 	 	 	max++; 
 	 	} 
 	 	if(max>=1){  	 	 	if(c<max){ 
 	 	 	 	c=max; 
	 	c1=a[i]; 
	 	} 
	 	} 
} 
 	cout<<"\nmode : "<<c1;  	return 0; 
} 
OUTPUT:
enter the no of elements in an array : 4

enter the element 1 : 23

enter the element 2 : 5

enter the element 3 : 7

enter the element 4 : 7

mean : 10.5
median : 6
mode : 7
 
14. Find the number of factors for the given number (DAY-3) Sample Input: 
Given number: 100 Sample Output: 
Number of factors = 9 Test cases: 
i. 343 ii. 1080 
iii.	-243 
iv.	101010 
v.	0 
Code : 
 
#include<iostream> using namespace std; int main() 
{ 
 	int n,i,j,k;  	cout<<"\nenter the number : "; 
 	cin>>n; 
 	for(i=1;i<n;i++){ 
 	 	if(n%i==0){ 
 	 	 	k++; 
}
}
cout<<"\nnumber of factors : "<<k; return 0; 
}  
OUTPUT:
enter the number : 12

number of factors : 6

15. Write a program to check if a given year is leap year or not. If it is leap year then print the next leap year, if it is non-leap year then print the previous leap year. 
 
Sample Input: 
Enter Date : 1947 Sample Output: 
Given year is Non Leap Year 
Previous Leap Year: 1944 Test cases: 
i. 19.47 ii. 1936 
iii.	0 
iv.	2000 v. -1428 
 
Code: 
#include<iostream>
using namespace std;
int main() {
 int year;
cout<<"Enter year : ";
cin>>year;
if(year==0)
 cout<<"invalid input!!";
else if(year % 400 == 0)
 cout << year << " is a Leap Year";
 else if(year % 4 == 0 && year % 100 != 0)
 cout << year << " is a Leap Year";
 else
 cout << year << " is not a Leap Year";
 return 0;
}
OUTPUT:
Enter year : 2008
2008 is a Leap Year





