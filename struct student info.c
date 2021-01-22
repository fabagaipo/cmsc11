#include <stdio.h>

struct student{
    int studentID;
    char lastName[20];
    char firstName[20];
    char lecSec[10];
    float hEx1;
    float hEx2;
    float hEx3;
};

struct student cmsc11[70];

struct student Create(struct student insert);
struct student Update();
struct student Display();

static int studentNum = 0;

int main(void){
    int input = 1;

    while (input > 0 && input < 4){
        printf("+++++++++++++++++++++++++++++++++STUDENT REGISTRATION SYSTEM (SRS)+++++++++++++++++++++++++++++++++\n1. Create\n2. Update\n3. Display\n+++++++++++++++++++++++++++++++++STUDENT REGISTRATION SYSTEM (SRS)+++++++++++++++++++++++++++++++++\nINPUT: ");
        scanf(" %d",&input);

        switch(input){
        case 1:
            if (studentNum < 70){
                cmsc11[studentNum] = Create(cmsc11[studentNum]);
                break;
            }else{
                printf("No more slots available\n");
                break;
            }

        case 2:
            if (studentNum == 0){
                printf("\nNo records available to update\n\n");
                break;
            }else{
                printf("Enter Student ID: ");
                Update();
                break;
            }

        case 3:
            if (studentNum == 0){
                printf("\nNo records available to display\n\n");
                break;
            }else{
                Display();
                break;
            }


        }
        }
    printf("Ending...\n");
    return 0;
}


struct student Create(struct student insert){

    printf("Enter Student ID: ");
    scanf(" %d", &insert.studentID);
    printf("Enter Last Name: ");
    scanf(" %19[^\n]c", &insert.lastName);
    printf("Enter First Name: ");
    scanf(" %19[^\n]c", &insert.firstName);
    printf("Enter Lecture Section: ");
    scanf(" %19[^\n]c", &insert.lecSec);
    printf("Enter score for Hands On Exam 1: ");
    scanf(" %f", &insert.hEx1);
    printf("Enter score for Hands On Exam 2: ");
    scanf(" %f", &insert.hEx2);
    printf("Enter score for Hands On Exam 3: ");
    scanf(" %f", &insert.hEx3);
    printf("\n");

    studentNum++;
    
    return insert;
};


struct student Update(){
    int studentID, found = 0, choice = 1, i;

    scanf(" %d", &studentID);
    for (i = 0; i < studentID; i++){
        if(studentID == cmsc11[i].studentID){
            printf("Found!\n");
            found = 1;
            break;
        }else{

        }
    }
    if (found == 1){
        while (choice > 0 && choice < 8){
            int updateInt = 0;
            float updateFloat = 0;
            printf("\n\tStudent ID: \t\t%d\n\tName: \t\t\t%s, %s\n\Lecture Section: \t%s\n\tHex 1: \t\t\t%.2f\n\tHex 2: \t\t\t%.2f\n\tHex 3: \t\t\t%.2f\n\n",cmsc11[i].studentID,cmsc11[i].lastName,cmsc11[i].firstName,cmsc11[i].lecSec,cmsc11[i].hEx1,cmsc11[i].hEx2,cmsc11[i].hEx3);
            printf("Update: Choose from (1-7), otherwise EXIT...\n1. StudentID\n2. lastName\n3. firstName\n4. Lecture Section\n5. Hands On Exam 1 Score\n6. Hands On Exam 2 Score\n7. Hands On Exam 3 Score\nINPUT: ");
            scanf(" %d", &choice);

            switch (choice){
            case 1:
                scanf(" %d", &updateInt);
                cmsc11[i].studentID = updateInt;
                break;

            case 2:
                scanf(" %49[^\n]s",&cmsc11[i].lastName);
                break;

            case 3:
                scanf(" %49[^\n]s",&cmsc11[i].firstName);
                break;

            case 4:
                scanf(" %49[^\n]s",&cmsc11[i].lecSec);
                break;

            case 5:
                scanf(" %f",&updateFloat);
                cmsc11[i].hEx1 = updateFloat;
                break;

            case 6:
                scanf(" %f",&updateFloat);
                cmsc11[i].hEx2 = updateFloat;
                break;

            case 7:
                scanf(" %f",&updateFloat);
                cmsc11[i].hEx3 = updateFloat;
                break;
            }

        }
        }else{
        printf("No records available to update\n");
        }
        printf("\nEXIT...\n\n");
        };

struct student Display(){
    for (int i = 0; i < studentNum; i++){
        printf("\n\tStudent ID: \t\t%d\n\tName: \t\t\t%s, %s\n\tCMSC11 Section: \t%s\n\tHex 1: \t\t\t%.2f\n\tHex 2: \t\t\t%.2f\n\tHex 3: \t\t\t%.2f\n\n",cmsc11[i].studentID,cmsc11[i].lastName,cmsc11[i].firstName,cmsc11[i].lecSec,cmsc11[i].hEx1,cmsc11[i].hEx2,cmsc11[i].hEx3);}

};