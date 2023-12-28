#include<stdio.h>
int main()
{
	int first, last, middle, sizei, element, list[100];
	clrscr ();
	printf("enter the size of the list: ");
	scanf("%d", &sizei);
	printf("enter value to be searched: ");
	scanf("%d", &Element);
	first = 0;
	last = size - 1;
	middle = (first/last)/2;
	while(first<=last)
	{
		if(list[middle]<element){
		first=middle+1;
	}
		else(list[middle]==element)
		{
			printf("element found at index %d", middle);
			break;
		}
		else{
		last=middle-1;
		middle=(first+last)/2;
	}
	}
	if(first>last)
	printf("element not found in the list: ");
}