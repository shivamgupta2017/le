#include<iostream>
using namespace std;

int *max;
void call_recursion(int no1, int no2, int no3, int divisor)
{
	if(divisor>=no1||divisor>=no2||divisor>=no3)
	{
		cout<<divisor<<endl;
		return;
	}
	
	if((no1%divisor==0)&&(no2%divisor==0)&&(no3%divisor==0))
	{
		call_recursion(no1/divisor, no2/divisor, no3/divisor, divisor+1);
	}
	else
	{
		call_recursion(no1, no2, no3, divisor+1);
	}
}
int main()	
{
	//int *max;
	call_recursion(10, 20, 30, 1);		
	return 0;
}
