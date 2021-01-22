#include <stdio.h>
//function prototypes @ lines 3-5
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; //global variable

int main(void){
    int x = 5;//local variable to main
    printf("local x in outer scope of main is %d\n", x);

    if(1){ //start new scope
        int x =7;//local variable to new scope
        printf("local x in inner scope of ain is %d\n", x);
    }//end new scope

    printf("local x in outer scope of main is %d\n", x);

    printf("\n***first function calls*****\n");
    useLocal();//useLocal has automatic local x
    useStaticLocal(); //useStaticLocal has static local x
    useGlobal();//useGlobal uses global x

    printf("\nlocal x in main is %d\n", x);
    return 0;
}
//useLocal re-initializes local variable x during each call
void useLocal(void){
    int x = 25;
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}
// useStaticLocal initializes static local variable x only the first time
// the function is called; value of x is saved between calls to this 
// function
void useStaticLocal(void){
    //initialized once
    static int x = 50;

    printf("\nlcal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}
// function useGlobal modifies global variable x during each call
void useGlobal(void){
    printf("\nglobal x is %d on entering useGlobal\n", x);
    ++x;
    printf("global x is %d on exiting useGlobal\n", x);
}