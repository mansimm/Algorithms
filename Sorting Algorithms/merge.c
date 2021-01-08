#include<stdio.h>

void merge(int num[],int low,int mid,int high)
{
	int n1=(mid-low)+1;
	int n2=high-mid;


	int left[n1],right[n2];
	for(int i=0;i<n1;i++)
	{
		left[i]=num[low+i];
	}
	for(int i=0;i<n2;i++)
	{
		right[i]=num[mid+1+i];
	}

	int i=0,j=0,k=low;
	while(i<n1 && j<n2)
	{
		if(left[i]<right[j])
		{
			num[k++]=left[i++];
		}
		else
		{
			num[k++]=right[j++];
		}
	}
	while(i<n1)
	{
		num[k++]=left[i++];
	}
	while(j<n2)
	{
		num[k++]=right[j++];
	}
}
void merge_sort(int num[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=low+(high-low)/2;

		merge_sort(num,low,mid);
		merge_sort(num,mid+1,high);
		merge(num,low,mid,high);
	}
}
int main()
{
	int num[30],n;

	printf("		Merge Sort");
	printf("\n	Enter total number of inputs :");
	scanf("%d",&n);
	printf("\n	Enter %d inputs :",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\n	Numbers :");
	for(int i=0;i<n;i++)
	{
		printf("   %d",num[i]);
	}
	merge_sort(num,0,n-1);
	printf("\n	Sorted Numbers :");
	for(int i=0;i<n;i++)
	{
		printf("   %d",num[i]);
	}
	printf("\n");



}

/*
	OUTPUT-


(base) mansi@mansi-Vostro-15-3568:~$ gcc merge.c
(base) mansi@mansi-Vostro-15-3568:~$ ./a.out
		Merge Sort
	Enter total number of inputs :5

	Enter 5 inputs :2
3
1
5
4

	Numbers :   2   3   1   5   4
	Sorted Numbers :   1   2   3   4   5
(base) mansi@mansi-Vostro-15-3568:~$ 





*/
