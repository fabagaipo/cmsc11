#include <stdio.h>
/*Queue operations
1. Print all elements
2. Print non-empty elements only
3. ENQUEUE: Insert at last index (tail)
4. DEQUEUE: Delete at first index (front)
0. Exit

*/

/*
size of an array (i.e. no of elements)
sizeof(array_variable)/sizeof(data_type)
*/
int main(void){
    int queue[5] = {1,2,3};
    int numOfElements  = sizeof(queue)/sizeof(int);
    int tailIndex = 0;
    int choice;
    int newElement;
 //the menu choice of the user

    //Start of menu text code below
    printf("\n\t\t\t\t***************************************************************\n");
    printf("\t\t\t\tPress 1. Print all elements in queue\n");
    printf("\t\t\t\tPress 2. Print non empty(ie. non-zero) elements only in queue\n");
    printf("\t\t\t\tPress 3. Insert element to queue (ENQUEUE)\n");
    printf("\t\t\t\tPress 4. Delete element from queue (DEQUEUE)\n");
    printf("\t\t\t\tPress 0. Exit\n");
    printf("\t\t\t\t***************************************************************\n");

    printf("\t\t\t\tEnter choice:\t");
    scanf("%d", &choice);
    printf("\n");

    printf("+++++++++++++++++++++++++++++++\n");

    printf("O.U.T.P.U.T\n");
    //End of menu text code

    

    while(choice != 0) {
    
    switch (choice) {
    
    case 1: 
    printf("1. Print all elements in queue\n");
    for(int i=0; i<numOfElements; i++) {
        printf("\tqueue[%d] = %d\n", i, queue[i]);
    }
    printf("\nNumber of all elements in queue is %d\n", numOfElements); 
    
    break;

    case 2: 

    printf("2. Print non empty elements only in queue\n");
    for(int i=0; i<numOfElements; i++) {
        if(queue[i]==0) {
            tailIndex = i;
            break;
        }
        printf("queue[%d] = %d\n", i, queue[i]);
    }
    if(tailIndex==0) {
        printf("Array is empty because all values are zero");
        printf("(i.e default value of uninitialized elements of an array in C is zero.");
    }else{
        printf("Index of tail %d", tailIndex);
    }
    break;


    case 3: 
    
    printf("3. Insert element to queue (ENQUEUE @ tail index)\n"); 
    printf("Enter NEW ELEMENT to enqueue. Must be a positive integer only."); 
    scanf("%d", &newElement);

    for(int i=0; i<numOfElements; i++) {
        if(queue[i]==0) {
            tailIndex = i;
            break;
        }
    }
    printf("Index of tail is %d\n", tailIndex); 
    if(tailIndex == numOfElements) {
        printf("Array is at full capacity.");
    }else{
        queue[tailIndex] = newElement;
         for(int i=0; i<numOfElements; i++) {
        printf("queue[%d] = %d\n", i, queue[i]);
        tailIndex++;}
    }
    break;


    case 4: 

    printf("4. Dequeue (delete item in front, @ index 0)\n");

    for(int i=0; i<numOfElements; i++) {
        if(queue[i]==0) {
            tailIndex = i;
            break;
        }
        printf("queue[%d] = %d\n", i, queue[i]);
    }
    if(tailIndex == 0) {
        printf("Array is currently empty. All values are zeroes.");
    }else{
        int i;
        for(i=0; i<tailIndex-1; i++) {
            queue[i] = queue[i+1];
        }
        queue[i] = 0;
        tailIndex--;
    }
     for(int i=0; i<numOfElements; i++) {
        printf("queue[%d] = %d\n", i, queue[i]);
     }
    break;

    }

      printf("\n\t\t\t\t***************************************************************\n");
    printf("\t\t\t\tPress 1. Print all elements in queue\n");
    printf("\t\t\t\tPress 2. Print non empty(ie. non-zero) elements only in queue\n");
    printf("\t\t\t\tPress 3. Insert element to queue (ENQUEUE)\n");
    printf("\t\t\t\tPress 4. Delete element from queue (DEQUEUE)\n");
    printf("\t\t\t\tPress 0. Exit\n");
    printf("\t\t\t\t***************************************************************\n");

    printf("\t\t\t\tEnter choice:\t");
    scanf("%d", &choice);
    printf("\n");

    printf("+++++++++++++++++++++++++++++++\n");

    printf("O.U.T.P.U.T\n");
    }
    if(choice == 0){
     printf("0. Exit");
   }
    return 0;
    }
