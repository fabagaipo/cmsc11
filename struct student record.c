#include <stdio.h>

struct student{
    int studID;
    char surName[20];
    char firName[20];
    char cmscSec[10];
    float hex1;
    float hex2;
    float hex3;
};

struct student cmsc11[70];

struct student Add(struct student input);
struct student Update();
struct student Display();

static int stdntNum = 0;

int main(void){
    int choice = 1;
    while(choice >= 1 && choice <=3){

        printf("====================\nSTUDENT RECORDS MENU\n====================\n1. Add\n2. Update\n3. Display\n====================\n[INPUT]: ");
        scanf(" %d",&choice);

        switch(choice){
        case 1:
            if (stdntNum<70){
                cmsc11[stdntNum] = Add(cmsc11[stdntNum]);
                break;
            } else {
                printf("Max Students Enrolled.\n");
                break;
            }

        case 2:
            if (stdntNum==0){
                printf("\nThere are currently no Enrolled Students\n\n");
                break;
            } else {
                printf("Please enter Student ID: ");
                Update();
                break;
            }

        case 3:
            if (stdntNum==0){
                printf("\nThere are no Records to display\n\n");
                break;
            } else {
                Display();
                break;
            }



        }

    }

    printf("End of Program...\n");
    return 0;
}

struct student Add(struct student input){

    printf("Enter sudent id: ");
    scanf(" %d", &input.studID);
    printf("Enter surname: ");
    scanf(" %19[^\n]c", &input.surName);
    printf("Enter firstname: ");
    scanf(" %19[^\n]c", &input.firName);
    printf("Enter CMSC section: ");
    scanf(" %19[^\n]c", &input.cmscSec);
    printf("Enter score for hex1: ");
    scanf(" %f", &input.hex1);
    printf("Enter score for hex2: ");
    scanf(" %f", &input.hex2);
    printf("Enter score for hex3: ");
    scanf(" %f", &input.hex3);
    printf("\n");

    stdntNum++;

    return input;
};


struct student Update(){
    int studentID, found = 0, choice = 1, i;

    scanf(" %d", &studentID);
    for (i=0; i<stdntNum; i++){
        if(studentID==cmsc11[i].studID){
            printf("Found!\n");
            found = 1;
            break;
        } else {

        }
    }
    if (found == 1){
        while (choice>=1 && choice<=7){
            int updateInt = 0;
            float updateFlt = 0;
            printf("\n\tStudent ID: \t\t%d\n\tName: \t\t\t%s, %s\n\tCMSC11 Section: \t%s\n\tHex 1: \t\t\t%.2f\n\tHex 2: \t\t\t%.2f\n\tHex 3: \t\t\t%.2f\n\n",cmsc11[i].studID,cmsc11[i].surName,cmsc11[i].firName,cmsc11[i].cmscSec,cmsc11[i].hex1,cmsc11[i].hex2,cmsc11[i].hex3);
            printf("What do you want to update? Please choose from the choices (1-7); anything else -> EXIT...\n1. StudentID\n2. surName\n3. firName\n4. CMSC11 Section\n5. Hex 1 Score\n6. Hex 2 Score\n7. Hex 3 Score\n[INPUT]: ");
            scanf(" %d", &choice);

            switch (choice){
            case 1:
                scanf(" %d", &updateInt);
                cmsc11[i].studID = updateInt;
                break;

            case 2:
                scanf(" %49[^\n]s",&cmsc11[i].surName);
                break;

            case 3:
                scanf(" %49[^\n]s",&cmsc11[i].firName);
                break;

            case 4:
                scanf(" %49[^\n]s",&cmsc11[i].cmscSec);
                break;

            case 5:
                scanf(" %f",&updateFlt);
                cmsc11[i].hex1 = updateFlt;
                break;

            case 6:
                scanf(" %f",&updateFlt);
                cmsc11[i].hex2 = updateFlt;
                break;

            case 7:
                scanf(" %f",&updateFlt);
                cmsc11[i].hex3 = updateFlt;
                break;
            }

        }
        }
        else {
        printf("No Records.\n");
        }
        printf("\nEXIT\n\n");
        };

struct student Display(){
    for (int i=0; i<stdntNum; i++){
        printf("\n\tStudent ID: \t\t%d\n\tName: \t\t\t%s, %s\n\tCMSC11 Section: \t%s\n\tHex 1: \t\t\t%.2f\n\tHex 2: \t\t\t%.2f\n\tHex 3: \t\t\t%.2f\n\n",cmsc11[i].studID,cmsc11[i].surName,cmsc11[i].firName,cmsc11[i].cmscSec,cmsc11[i].hex1,cmsc11[i].hex2,cmsc11[i].hex3);}

};
