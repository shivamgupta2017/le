#include<iostream>
using namespace std;
void swap(char &a, char &b)
{

	char temp;
	temp=a;
	a=b;
	b=temp;

//	cout<<"check now :"<<name<<endl;

}
void divide_function(string name, int m, int n)
{	
	int i=0;
	if(m==(n+1))
	{
		
		return;
	}		
	for(i=m; i<=n; i++)
	{
		swap(name[m], name[i]);
		divide_function(name, (i+1), n);
	//	swap(name[m], name[i]);
		cout<<name<<endl;
	}
}
int main()
{	
	string name="abc";
	//cout<<name.length();		
	divide_function(name, 0, name.length()-1);		
	return 0;

}
