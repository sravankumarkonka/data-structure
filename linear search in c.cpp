#include<stdio.h>
int main()
{
	int list[10], size, i, element;
	printf("enter the size of the list: ");
	scanf("%d", &size);
	printf("enter any %d integer values: ",size);
	for(i=0;i<size;i++);
	scanf("%d", &list[i]);
	printf("enter the element to the search: ");
	scanf("%d", &element);
	for(i=0;i<size;i++)
	{
		if(element==list[i])
	{
	printf("element is found at %d ", size, i);
	break;   
}
}
if(i==size)
printf("given element is not found in the list[",size);
return 0;
}