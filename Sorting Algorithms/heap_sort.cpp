/*    Heap Sort

	Input - numbers in random order
	
	Output - numbers sorted in ascnding or dscending order

	Time Complexity - 
			Best case - O(nLogn)
			Average case - O(nLogn)
			Worst case - O(nLogn)
*/

#include<iostream>
using namespace std;
void heapify(int heap[])//creates min heap
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
		i++;
	}
}
int delete_heap(int heap[])//delete minimum element from min heap
{
	int n=heap[0],i=1,x;
	if(n!=0)
	{
		x=heap[1];
		heap[1]=heap[n];
		n=n-1;
		heap[0]=n;
		heapify(heap);
		return x;
	}
	return -1;
		
}
void heap_sort(int heap[])//delete minimum element each time
{
	cout<<"\n Your numbers in ascending order : ";
	int n=heap[0];
	while(heap[0]!=0)
	{
		int x=delete_heap(heap);
		cout<<" "<<x<<" ";
	}
}

int main()
{
	int numbers[100];
	int n;
	int i,j,temp;

	cout<<"\n 			Heap Sort\n ";
	cout<<"\n Enter total number of numbers : ";
	cin>>n;
	numbers[0]=n;
	cout<<"\n Enter "<<n<<" Numbers : ";
	for(i=1;i<=n;i++)
	{
		cin>>numbers[i];
	}
	cout<<"\n Your Numbers : ";
	for(i=1;i<=n;i++)
	{
		cout<<" "<<numbers[i]<<" ";
	}

	heapify(numbers);
	heap_sort(numbers);
	cout<<" \n";
	return 0;
}


/*       OUTPUT

(base) mansi@mansi-Vostro-15-3568:~$ g++ heap_sort.cpp
(base) mansi@mansi-Vostro-15-3568:~$ ./a.out

 			Heap Sort
 
 Enter total number of numbers : 7

 Enter 7 Numbers : 10
90
80
60
70
40
20

 Your Numbers :  10  90  80  60  70  40  20 
 Your numbers in ascending order :  10  20  40  60  70  80  90  
(base) mansi@mansi-Vostro-15-3568:~$ 



*/

