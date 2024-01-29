#include<stdio.h>
int array[100],n,choice;

void store()
{
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		printf("Enter %d number : ",i);
		scanf("%d",&array[i]);
	}

}
//void select()
//{
//	printf("Select from below options \n\n");
//	printf("1. Ascending Order \n2. Descending order");
//	scanf("%d",&choice);
//}
void ascending()
{
	int t = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j =i+1 ;j<n;j++)
		{
			if(array[i] > array[j])
			{
				t = array[i];
				array[i] = array[j];
				array[j] = t;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
}
void descending()
{
	int t = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j =i+1 ;j<n;j++)
		{
			if(array[i] < array[j])
			{
				t = array[i];
				array[i] = array[j];
				array[j] = t;
			}
		}
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
}
int main()
{
	printf("Enter total elements of array : ");
	store();
//	select();
	if(choice == 1)
	{
		ascending();
	}
	else
	{
		descending();
	}
}