/*    Selection Sort 

	Input - numbers in random order
	
	Output - numbers sorted in ascnding or dscending order

	Time Complexity - O(n^2)
*/

#include<iostream>
using namespace std;

int main()
{
	int numbers[100];
	int n;
	int i,j,temp,min;

	cout<<"\n Enter total number of numbers : ";
	cin>>n;
	cout<<"\n Enter Numbers : ";
	for(int i=0;i<n;i++)
	{
		cin>>numbers[i];
	}
	cout<<"\n Your Numbers : ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<numbers[i]<<" ";
	}


	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(numbers[min]>numbers[j])//ascending order of sorting
			{
				min=j;
			}
		}
		temp=numbers[min];
		numbers[min]=numbers[i];
		numbers[i]=temp;
	}
	cout<<"\n Your numbers in ascending order : ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<numbers[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

/*       OUTPUT

(base) mansi@mansi-Vostro-15-3568:~$ c++ selection_sort.cpp
(base) mansi@mansi-Vostro-15-3568:~$ ./a.out

 Enter total number of numbers : 6

 Enter Numbers : 1
9
6
7
4
3

 Your Numbers :  1  9  6  7  4  3 
 Your numbers in ascending order :  1  3  4  6  7  9 
(base) mansi@mansi-Vostro-15-3568:~$ 


*/

