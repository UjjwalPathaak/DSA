
Akshay, Aryaman, Ashi, Awanish, Deep, Geetansh, Ishita, Jyotiraditya, Karan, Nandini, Nikhil, Pradyuman, Pranav, Raman, Roodransh, Roodransh, Saksham, Shreya, Sristhi, Therapist, Uday, Vinayak, +91 6230 111 398, +91 6230 755 121, +91 6230 767 107, +91 70184 90824, +91 78763 18470, +91 80917 11105, +91 85699 95185, +91 91938 56481, +91 97204 36699, +91 98052 54044, You
YESTERDAY
Pradyuman Vashisht JUIT
Aryaman Tiwari
Haii
Oki sir
11:10 pm
31/03/2022
Aryaman Tiwari
Kal engineering drawing practical hai ki nhi
9:36 am
Pradyuman Vashisht JUIT
Nhi
9:51 am
Nhi bola hume
9:51 am

2:07 pm
You deleted this message
4:29 pm
You deleted this message
4:29 pm
You deleted this message
4:29 pm
You deleted this message
4:29 pm
Pradyuman Vashisht JUIT
Yr drawing wala kya bnana hai koii pic bhejo toh
9:15 pm
Aryaman Tiwari
You
Photo
Yeh rha
9:18 pm
Ek toh
9:18 pm
Dusra auto cad wala
9:18 pm
Pradyuman Vashisht JUIT
Aryaman Tiwari
Dusra auto cad wala
Acha uski dimensions bta skta hai bhai
9:20 pm
Pradyuman Vashisht JUIT
Aryaman Tiwari
Yeh rha
Oki
9:20 pm
FRIDAY
Aryaman Tiwari
This message was deleted
12:38 am
Saksham Gupta JUIT
aata kisi ko kuch
10:29 am
Saksham Gupta JUIT

fuse conductor nikal liya Genda Swami 🤣🤣
youtube.com
https://youtu.be/zcCMk5jje48
12:00 pm
YESTERDAY
Karan Singh JUIT

10:39 am
Notebook kiski h??
10:39 am
Ashi Gupta JUIT
This message was deleted
10:39 am
Geetansh Singh JUIT
Forwarded
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct list
{
  int data;
  struct list *next;


};
typedef struct list list;
void insertatbeg (list **);
void insertatend (list **);
void display (list *);
void rdisplay (list *);
void deleteFromStart (list **);
void deletfromend(list **);
void deleteAfterElement(list *);
void insertAfterElement(list *);
list* searchElement(list *, int);
void
main ()
{
  list *head = NULL;
  insertatbeg (&head);
  insertatbeg (&head);
  insertatbeg (&head);
  rdisplay (head);



  insertatend (&head);
  insertatend (&head);
  insertatend (&head);
  insertAfterElement(head);
  deleteAfterElement(head);
  rdisplay(head);


}

void
insertatbeg (list ** start)
{
  int d;
  printf ("enter the data:\n");
  scanf ("%d", &d);
  list *node = (list *) malloc (sizeof (list));
  node->data = d;
  node->next = *start;
  *start = node;
}

void
insertatend (list ** start)
{
  int d;
  list *temp;
  printf ("\nenter the data: \n");
  scanf ("%d", &d);
  list *node = (list *) malloc (sizeof (list));
  node->data = d;
  node->next = NULL;
  if (*start == NULL)
    *start = node;
  else
    {
      temp = *start;
      while (temp->next != NULL)
	temp = temp->next;

      temp->next = node;


    }

}

void
display (list * start)
{
  printf ("the list is:\n");
  while (start != NULL)
    {
      printf ("%d\t", start->data);
      start = start->next;


    }



}


void rdisplay (list * start)
{
  if (start != NULL)
    {
      rdisplay (start->next);
      printf ("%d\t", start->data);
    }
}

list * searchElement(list *start, int element)
{
	while( (start != NULL) && (start->data != element) )
		start = start->next;
	return start;
}


void deleteAfterElement(list *start)
{
	int element;
	list *temp, *loc;
	printf("\n Enter the element whose next node has to be deleted: ");
	scanf("%d", &element);
	loc=searchElement(start, element);
	if(loc == NULL)  
		return;
	temp = loc->next;
	loc->next = temp->next;
	free(temp);
	
}

void insertAfterElement(list *start)
{
	int d; 
	int element;  
	list *node;
	list *loc;
	printf("\n Enter the data to be inserted: ");
	scanf("%d", &d); 
	printf("\n Enter the element after which the node has to be inserted: ");
	scanf("%d", &element);
	loc = searchElement(start, element);
	if(loc ==NULL)  
		return;
	node = (list*) malloc (sizeof(list));
	node->data = d;
	node->next = loc->next;
	loc->next = node;
}