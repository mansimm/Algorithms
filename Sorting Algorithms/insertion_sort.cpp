/*    Insertion Sort 

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
	int i,j,temp,key;

	cout<<"\n 		Insertion Sort \n";
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


	for(i=1;i<n;i++)
	{
		key=numbers[i];
		j=i-1;
		while(j>=0 && key<numbers[j])
		{
			numbers[j+1]=numbers[j];
			j--;
		}

		numbers[j+1]=key;
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
(base) mansi@mansi-Vostro-15-3568:~$ c++ insertion_sort.cpp
(base) mansi@mansi-Vostro-15-3568:~$ ./a.out

 		Insertion Sort 

 Enter total number of numbers : 5

 Enter Numbers : 9
3
6
5
7

 Your Numbers :  9  3  6  5  7 
 Your numbers in ascending order :  3  5  6  7  9 
(base) mansi@mansi-Vostro-15-3568:~$ ^C



*/

