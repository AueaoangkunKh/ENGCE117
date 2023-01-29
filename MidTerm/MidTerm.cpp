// Aueaoangkun khamlek 65543206131-6 Sec 3
// URL:https://www.youtube.com/watch?v=oD0E1F7Kle0&ab_channel=Riyuki
#include <stdio.h>

struct Node {
 int data ;
 struct Node *next ;
 };
//--- Prototype
 void ShowAll( struct Node *walk ) ;
 struct Node *AddNode( struct Node **walk, int data );
 void UpdateNode(struct Node **walk, int A, int B);
 struct Node *ShowBack(struct Node *walk);
//---- ShowAll 
void ShowAll( struct Node *walk ){
    while (walk != NULL){
        printf("%d ", walk->data); 
        walk = walk->next; 
    } 
    printf("\n");
} 
//--- AddNode
struct Node *AddNode(struct Node **walk, int data  ){
    struct Node *add = new struct Node;
    add->data = data;
    add->next = NULL;
    
    if(*walk == NULL){
        *walk = add;
    } else {
        struct Node *temp = *walk;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = add;
    }	
    return add;
}
//--- UpadtaNode
void UpdateNode(struct Node **walk, int A, int B){
    struct Node *temp = *walk;
    while (temp != NULL){
        if (temp->data == A){
            temp->data = B;
            break;
        }	
        temp = temp->next;
    }
}
//--- ShowBack
struct Node *ShowBack(struct Node *start){
	struct Node *former = NULL;
	struct Node *walk = start;
	struct Node *next = NULL;
	while (walk != NULL){
		next = walk->next;
		walk->next = former;
		former = walk;
		walk = next;
	}
	start = former;
	return start;
}
//-- SwapNode
void SwapNode(struct Node **walk, int A, int B) {
    if (walk == NULL) {
        return;
    }
    struct Node *currA = *walk;
    struct Node *prevA = NULL;
    while (currA != NULL && currA->data != A) {
        prevA = currA;
        currA = currA->next;
    }
    if (currA == NULL) {
        return;
    }
    struct Node* currB = *walk;
    struct Node *prevB = NULL;
    while (currB != NULL && currB->data != B) {
        prevB = currB;
        currB = currB->next;
    }
    if (currB == NULL) {
        return;
    }
    if (prevA != NULL) {
        prevA->next = currB;
    } else {
        *walk = currB;
    }
    if (prevB != NULL) {
        prevB->next = currA;
    } else {
        *walk = currA;
    }
    struct Node *temp = currA->next;
    currA->next = currB->next;
    currB->next = temp;
}

//--- Main
 int main(){
    struct Node *start ;
    start = NULL;
    printf("AddNode : ");
    AddNode( &start, 1 ); 
    AddNode( &start, 2 );
    AddNode( &start, 3 ); 
    AddNode( &start, 4 );
    ShowAll(start);
    printf("UpdateNode : ");
    UpdateNode (&start, 4 , 20);
    ShowAll(start);
    printf("Showback : ");
    start = ShowBack(start); 
    ShowAll(start);
    printf("SwapNode : ");
    SwapNode(&start, 20, 2);
    ShowAll(start);
	return 0;
}
