#include <stdio.h>
//Inventory of Phone Tech Specs owned by
//CMSC11 students v2.0
//includes new structure for student owner

struct phone{//forward referencing structure
    int phoneID;
    char brandName[10];
    float price;
    char phoneOS[10];
    struct student *owner;
};

struct student{
    int studentID;
    char lastName[20];
    char firstName[20];
};

struct phone updateInfo(struct phone inputPhone);
void displayInfo(struct phone *inputPhonePtr);

int main(void){
    struct student s1 = {
        10,
        "Simpson",
        "Bart"
    };
    struct phone p1 = {
        111,
        "Huawei",
        34.5,
        "Android",
        &s1
    };
    /*display phone masterlist before any updates to student record*/
    displayInfo(&p1);

    /*Update first name the second time and display if changes are reflected*/
    printf("\n\nUpdate again First Name of student: ");
    scanf("%19[^\n]s", &s1.firstName);
    displayInfo(&p1);

    /*Update first name the second time and display if changes are reflected*/
    printf("\n\nUpdate again First Name of student: ");
    scanf("%19[^\n]s", &s1.firstName);
    displayInfo(&p1);
    return 0;
}

void displayInfo(struct phone *inputPhonePtr){
    printf("\n\nPHONE MASTERLIST\nPhoneID\t\tBrand Name\tPrice\t\tOS\t\tOwner's First Name\n");
    printf("%d\t\t", inputPhonePtr->phoneID);
    printf("%s\t\t", inputPhonePtr->brandName);
    printf("%f\t\t", inputPhonePtr->price);
    printf("%s\t\t", inputPhonePtr->phoneOS);
    printf("%s\t\t", inputPhonePtr->owner->firstName);
}