/*    Quick Sort

	Input - numbers in random order
	
	Output - numbers sorted in ascnding or dscending order

	Time Complexity - O(nLogn)
*/

#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int t;
	t=*a;	
	*a=*b;
	*b=t;
}

int partition(int num[],int low ,int high)
{
	int pivot=high;
	int i=low-1;

	for(int j=low;j<=high-1;j++)
	{
		if(num[j]<num[pivot])
		{
			i++;
			swap(&num[j],&num[i]);
		}
	}
	swap(&num[i+1],&num[pivot]);
	return(i+1);
}

void quick_sort(int num[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(num,low,high);

		quick_sort(num,low,pivot-1);
		quick_sort(num,pivot+1,high);
	}
}
int main()
{
	int numbers[100];
	int n;
	int i,j,temp;

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

	quick_sort(numbers,0,n-1);

	cout<<"\n Your numbers in ascending order : ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<numbers[i]<<" ";
	}
	cout<<"\n";
	return 0;
}


/*       OUTPUT


(base) mansi@mansi-Vostro-15-3568:~$ c++ quick_sort.cpp
(base) mansi@mansi-Vostro-15-3568:~$ ./a.out

 Enter total number of numbers : 10

 Enter Numbers : 10
9
8
1
2
3
7
4
6
5

 Your Numbers :  10  9  8  1  2  3  7  4  6  5 
 Your numbers in ascending order :  1  2  3  4  5  6  7  8  9  10 
(base) mansi@mansi-Vostro-15-3568:~$ ^C
(base) mansi@mansi-Vostro-15-3568:~$ 

*/

