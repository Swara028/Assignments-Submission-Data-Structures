#include <stdio.h>
#include <stdlib.h>
struct node {
int data ;
struct node *next ;
};
struct node *start = NULL ;
void traverse() ;
void delete_end() ;
int count = 0 ;
int main () {
int x, data ;
for (;;) {
printf("1. Want to insert an element at the beginning of linked list.\n") ;
printf("2. Want to traverse linked list.\n") ;
printf("3. Want to delete an element from end.\n") ;
printf("4. Exit\n") ;
scanf("%d", &x) ;
if (x == 1) {
printf("Enter value of element\n") ;
scanf("%d", &data) ;
insert_begin(data) ;
}
else if (x == 2)
traverse() ;
else if (x == 3)
delete_end() ;
else if (x == 4)
break ;
else
printf("Please enter valid input.\n") ;
}
return 0 ;
}
void insert_begin(int i) {
struct node *t ;
t = (struct node*)malloc(sizeof(struct node)) ;
t -> data = i;
count++ ;
if (start == NULL) {
start = t ;
start->next = NULL ;
return ;
}
t->next = start ;
start = t ;
}
void traverse() {
struct node *t ;
t = start ;
if (t == NULL) {
printf("Linked list is empty.\n") ;
return ;
}
printf("There are %d elements in linked list.\n", count) ;
while (t->next != NULL) {
printf("%d\n", t->data) ;
t = t->next ;
}
printf("%d\n", t->data); // Print last node
}
void delete_end() {
struct node *t, *u ;
int n;
if (start == NULL) {
printf("Linked list is empty.\n") ;
return ;
}
count-- ;
if (start->next == NULL) {
n = start->data ;
free(start) ;
start = NULL ;
printf("%d deleted from end successfully.\t", n) ;
return ;
}
t = start ;
while (t->next != NULL) {
u = t ;
t = t->next ;
}
n = t->data ;
u->next = NULL ;
free(t);
printf( "\n%d deleted from end successfully.\n ", n) ;
}
