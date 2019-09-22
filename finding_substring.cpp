//code to search if a user input string is there in a given string or not 
#include <iostream>

using namespace std;

int main()
{
	char str[50]="this is the given string", str2;
	int n;
	cout<<"the given string is:"<<endl;
	cout<<str;
	cout<<"input substring:"<<endl;
	gets(str2);
	n= str.find(str2);
	if (n!=0){
		
		cout<<"the word is present and is at position:";
		cout<<n;
	}
	else 
		cout<<"word isn't present";
	return 0;
}
