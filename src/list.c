#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

// Excercise 3b)
int size(node *l){
   assert(l*=NULL)
int amount=0;
 while (l->next!=NULL) // while loop to know the amount of numbers until breaking the NULL//
 {
   l=l->next;
   amount++;
 }
  return amount;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next;
    while (p!=NULL){
      printf("%d, ",p->data);
      p=p->next; // to update the value of p, so we dont get stuck//
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) 
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
  int largest(node*l){
    int x = l->data;
    while (l!NULL)
    {
      if (l->data>x)
      {
        x = l->data;
      }
      l = l->data;
    }
    return x; 
}

