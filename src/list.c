#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

//a struct that contain int data and a pointer *next
typedef struct node 
{
  int data;
  struct node *next;
} node;


// function add
void add(node *head, int x)
{
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/

  // assert, to make sure head is not equal NULL
  assert(head!=NULL); 

  
  node *p = head;

  // a while loop that runs until the pointer is NULL
 
  while (p->next!=NULL)
  {
   
    p = p->next;
  } /*p points to the last element*/

  
  node *element = (node*) malloc(sizeof(node));


  element->next = NULL;

  
  element->data = x;

  
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/

    // we need to return how many elements we have in our list
    // make a counter to the elements
    int x = 0;

   
    node *p = l;

    // now we create a while loop that runs until NULL
    while(p->next != NULL)
    {
    
      x++;
    
      p = p->next;
    }

    
    return x;
}

void printout(node *l)
{
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/

    
    node *p = l->next;

    // while loop runs as long as p is not NULL
    while(p != NULL)
    {
    // print
      printf("%d, ",p->data);

    // change here!! 
    // We need to let p point to the next element in the list, so it is not stuck in the while loop
    
      p = p->next;
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/

    
    node *p = l->next;

    
    int a = 0;

    // while loop that runs until the pointer p point to the last element in the list which is NULL
    while(p != NULL)
    {
    
    // if statement
      if(a < p->data)
      {
        
        a = p->data;
      }
     
      p = p->next;
    }
    
    
    return a; 
}
