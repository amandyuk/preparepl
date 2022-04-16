#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int a;
	struct list* next;
} list;

list* init(int num)
{
	
	list* head = (list*)malloc(sizeof(list));
	//head->next = NULL;
	head->a = num%10;
	num=num/10;
	while(num > 0)
	{
		list* new = (list*)malloc(sizeof(list));
//		if (num < 10)
//		{	
//			new->a = num;
//			new->next = head;
//			return new;
//		}
//		else
//		{
			new->a = num%10;
			num/=10;
//		}
		new->next = head;
		head = new;
	}
	return head; //added

}	

void main()
{
	list * ex = init (79045353);
	while (ex!=NULL)
	{
		printf(" %d",ex->a);
		ex=ex->next;
	}
	printf("\n");
}
