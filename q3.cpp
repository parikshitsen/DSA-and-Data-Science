/*WAP to calculate tax deduction as follow:
1. Upto 2.5L no tax
2. More than 2.5 L but up to 5L 10%
3. More than 5L but up to 10L 20%
4. More than 10L 30%
	i. If senior citizen (age >= 60) then relaxation of 5%
	ii. if woman candidate (age >= 60) then relaxation of 3%*/
#include <iostream>
using namespace std;
int main()
{
	long int sal,tax=0;
	int age;
	char sex;
	cout<<"Enter your salary in lakhs: ";
	cin>>sal;
	if(sal<=250000)
		tax=0;
	else if(sal>250000 && sal<=500000)
		tax=sal/10;
	else if(sal>500000 && sal<=1000000)
		tax = sal/5;
	else
	{
		cout<<"Enter your age: ";
		cin>>age;
		cout<<"Enter your sex(m/f): ";
		cin>>sex;
		tax = (sal*3)/10;
		if(age>=60 && sex=='m')
			tax = tax - (sal/20);
		else if(sex=='f'&& age>=60)
			tax = tax - ((sal*3)/100);
	}
	cout<<"The tax to be paid is: "<<tax;
    return 0;
}