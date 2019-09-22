#include <iostream>
using namespace std;

int main()
{
	int arr[7], i, j, n, arr2[6];
	cout<<"input 7 elements for array"<<endl;
	for (i=0, i<7, i++)
		cin<<arr;
	for (i=0, i<7, i++)
	{
	 	if (arr[i]>arr[i+1])
		{
			for (j=0, j<6, j++)
				arr[j]=arr[i];
		}

	}
}
