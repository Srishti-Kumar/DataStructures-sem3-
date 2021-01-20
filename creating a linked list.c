//creating a linked list
#include<stdio.h>
#include <stdlib.h>                  //header files

struct node                                      //structure for creating a node
{
    int data;                                
    struct node *next;
};

int main()
{
    struct node *head,*second,*third;                                  //creating linkedlist 
    head = (struct node*) malloc (sizeof(struct node));
    second = (struct node*) malloc (sizeof(struct node));             //creatng space in heap for storage of these nodes
    third = (struct node*) malloc (sizeof(struct node));
    
    //link 1st and 2nd node
    head -> data = 3;
    head -> next = second;
    
    second -> data = 30;
    second -> next = third;
    
    third -> data = 300;
    third -> next = NULL;
    
    return 0;
}
