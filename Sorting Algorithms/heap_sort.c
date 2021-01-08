/*    Heap Sort

	Input - numbers in random order
	
	Output - numbers sorted in ascnding or dscending order

	Time Complexity - 
			Best case - O(nLogn)
			Average case - O(nLogn)
			Worst case - O(nLogn)
*/

#include<stdio.h>


void heapify(int heap[])
{
	int i=1,parent,n=heap[0];
	while(i<=n)
	{
		parent=i/2;
		if(parent>=1 && parent<=n)
		{
			if(heap[parent]>heap[i])
			{
				int temp;
				temp=heap[i];
				heap[i]=heap[parent];
				heap[parent]=temp;
			}
		}
	}
}
int main()
{
	int numbers[100];
	int n;
	int i,j,temp;

	printf("\n Enter total number of numbers : ");
	scanf("%d",&n);
	printf("\n Enter %d Numbers : ",n);
	numbers[0]=n;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&numbers[i]);
		if(i==n)break;
	}
	printf("\n Your Numbers : ");
	for(i=1;i<=n;i++)
	{
		printf(" %d ",numbers[i]);
	}

	heapify(numbers);

	printf("\n Your numbers in ascending order : ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",numbers[i]);
	}
	printf("\n");
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

