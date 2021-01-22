#include <stdio.h>

struct student {
        int studentID;
        char last_name[100];
        char first_name[100];
        char section[100];
        int exam1_score;
        int exam2_score;
        int exam3_score;
        struct subject *sub;

}database[1000];

struct subject {
        int digit_code;
        char subject_name[100];
        char subject_title[100];

}subjectbase[1000];

struct student create(struct student database,struct student database1[]);
void update(struct student database1[]);
void display(struct student *database);
struct subject createSubject(struct subject subjectbase, struct subject subjectbase1[]);
void updateSubject(struct subject subjectbase[]);
void displaySubject(struct subject subjectbase);
void enrollStudent(struct student s1[],struct subject s2[]);
//This function was used in another function which is a function to Enroll a student in a subject.
char toUpper(char);
int stringCompare(char s1[], char s2[]);

int main(void){
        /*This is use so that if you don't create a subject the DISPLAY STUDENT RECORDS will still run.
        It will not terminate*/
    	struct subject initializeInput = {
		0000,
		"None",
		"None"
	};

    int choice;
        while (1) {
        system("pause");
        system("cls");
        printf("\n\t\t\t ===================================\n\t\t\t[COMPUTER SCIENCE REGISTRATION SYSTEM]\t\t\t| Press 1. Create a Student Record       Press 2. Update a Student Record  |\n\t\t\t|  Press 3. Create Subject Record    Press 4. Update Subject Record  |\n\t\t\t|                 Press 5. Enroll a Student to a Subject                 |\n\t\t\t| Press 6. Display all Student Record    Press 7. Display Subject Record |\n\t\t\t|                             Press 0. Exit                              |\n");
        printf("\t\t\t===================================\n");
        printf("\t\t\t\tChoice: ");
        scanf("%d", &choice);
            if(choice <= 0 || choice > 7){
            printf("\n\n\t\t\t\t===================================\n");
            printf("\t\t\t\t!!The Program is Terminated!! \n");
            printf("\t\t\t\t===================================\n");
                break;
            }
		int index, num, i=0, index2;
		for(index = 0; database[index].studentID !=0; index++){
        }
        for(index2 = 0; subjectbase[index2].digit_code != 0; index2++){
        }
		switch (choice){

    case 1:
            printf("\n===================================\n");

                printf("CREATING STUDENT INFORMATIONS\n\n");
                database[index] = create(database[index],database);
                database[index].sub=&initializeInput;

            printf("===================================\n");
            break;
    case 2:
            printf("\n===================================\n");

                update(database);

             printf("===================================\n");
             break;
    case 3:
            printf("\n===================================\n");

                printf("CREATING SUBJECT INFORMATIONS\n\n");
                subjectbase[index2] = createSubject(subjectbase[index2],subjectbase);

            printf("===================================\n");
            break;
    case 4:
            printf("\n===================================\n");

                updateSubject(subjectbase);

            printf("===================================\n");
            break;
    case 5:
            printf("\n===================================\n");

                printf("ENROLL A STUDENT TO A SUBJECT\n\n");
                enrollStudent(database,subjectbase);

            printf("===================================\n");
            break;
    case 6:
            printf("\n===================================\n");
            printf("DISPLAY OF ALL STUDENT INFORMATIONS\n\n");
                if(index == 0){
                    printf("NOT REGISTERED\n");
                       break;
                }
                while(i < index){
                    display(&database[i]);
                        i++;
                }
            printf("===================================\n");
            break;
    case 7:
            printf("\n===================================\n");
            printf("DISPLAY OF SUBJECT INFORMATIONS\n\n");
                if(index2 == 0){
                    printf("NOT REGISTERED\n");
                       break;
                }
                while(i < index2){
                    displaySubject(subjectbase[i]);
                        i++;
                }
            printf("===================================\n");
            break;
		}
    }
return 0;

}
struct student create(struct student database,struct student database1[]){
    int index;
        reinput:
    		printf("Input unique 3 digit student ID number: ");
			scanf("%d",&database.studentID);
			if(database.studentID>=100 && database.studentID<=999){
            for(index = 0; database1[index].studentID != 0; index++){
            }
                int i;
                for(i = 0; i<index; i++){
                    if(database.studentID == database1[i].studentID){
					printf("\nInput another one! This student ID is already registered\n\n");
					goto reinput;
                    }
                }
    printf("Input student's Last name: ");
    scanf(" %99[^\n]s",database.last_name);
    printf("Input student's first name: ");
    scanf(" %99[^\n]s",database.first_name);
    printf("Input student's section: ");
    scanf(" %99[^\n]s",database.section);
    printf("Input student's hands-on exam 1 score: ");
    scanf("%d",&database.exam1_score);
    printf("Input student's hands-on exam 2 score: ");
    scanf("%d",&database.exam2_score);
    printf("Input student's hands-on exam 3 score: ");
    scanf("%d",&database.exam3_score);
			}else{
			printf("\nYOUR STUDENT ID NUMBER SHOULD BE IN 3 DIGIT ONLY STARTING FROM 100\n");
			}
    return database;
};

void update(struct student database1[]){
	int num, index = 0;
	int i = 0;
	while(database1[index].studentID != 0){
            index++;
	}
    printf("Input the student ID number of the student you want to UPDATE: ");
			scanf("%d",&num);
			while(i <= index){
				if(num  ==  database1[i].studentID){
				    printf("\nUPDATING STUDENT INFORMATIONS\n\n");
                    printf("Input a new student ID (Optional): ");
                    scanf("%d",&database[i].studentID);
                    printf("Input student's Last name: ");
                    scanf(" %99[^\n]s",database1[i].last_name);
                    printf("Input student's first name: ");
                    scanf(" %99[^\n]s",database1[i].first_name);
                    printf("Input student's section: ");
                    scanf(" %99[^\n]s",database1[i].section);
                    printf("Input student's hands-on exam 1 score: ");
                    scanf("%d",&database1[i].exam1_score);
                    printf("Input student's hands-on exam 2 score: ");
                    scanf("%d",&database1[i].exam2_score);
                    printf("Input student's hands-on exam 3 score: ");
                    scanf("%d",&database1[i].exam3_score);
						break;
				}
				if (i==index-1){
					printf("NOT REGISTERED\n");
					break;
				}
				i++;
			}
		}

struct subject createSubject(struct subject subjectbase1, struct subject subjectbase2[]){
    int index2;
            reenter:
                printf("Input unique 4 digit suject ID number: ");
                scanf("%d",&subjectbase1.digit_code);
                if(subjectbase1.digit_code>=1000 && subjectbase1.digit_code<=9999){
                for(index2 = 0; subjectbase2[index2].digit_code != 0; index2++){
                }
                    int i;
                    for(i = 0; i<index2; i++){
                        if(subjectbase1.digit_code == subjectbase2[i].digit_code){
                        printf("\nInput another one! This subject ID is already registered\n\n");
                        goto reenter;
                        }
                    }
	printf("Input a Subject Code: ");
	scanf(" %99[^\n]s",subjectbase1.subject_name);
	printf("Input a Subject title: ");
	scanf(" %99[^\n]s",subjectbase1.subject_title);
				}else{
			printf("\nYOUR SUBJECT ID NUMBER SHOULD BE IN 4 DIGIT ONLY STARTING FROM 1000\n");
			}
	return subjectbase1;
};

void updateSubject(struct subject subjectbase[]){
    int num, index2 = 0, i = 0;
	while(subjectbase[index2].digit_code != 0){
            index2++;
	}
    printf("Input the student ID number of the student you want to UPDATE: ");
			scanf("%d",&num);
			while(i <= index2){
        if(num  ==  subjectbase[i].digit_code){
            printf("\nUPDATING SUBJECT INFORMATIONS\n\n");
            printf("Input a new subject ID (Optional): ");
            scanf("%d",&subjectbase[i].digit_code);
            printf("Input a new Subject Code: ");
            scanf(" %99[^\n]s",subjectbase[i].subject_name);
            printf("Input a new Subject Title: ");
            scanf(" %99[^\n]s",subjectbase[i].subject_title);
                break;
        }
				if (i==index2-1){
					printf("NOT REGISTERED\n");
					break;
				}
				i++;
			}
		}

void enrollStudent(struct student s1[],struct subject s2[]){
	char identification[100];
	int num, index, index2, count = 0, count1 = 0;
	for(index2=0; s2[index2].digit_code!=0; index2++){
	}
	for(index=0; s1[index].studentID!=0; index++){
	}
	printf("Input a student ID you want to enroll: ");
	scanf("%d",&num);
	while(count < index){
		if(num==s1[count].studentID){
					printf("Input a subject code: ");
					scanf(" %99[^\n]s",identification);
					while(count1 < index2){
						if(stringCompare(identification,s2[count1].subject_name)==0){
							s1[count].sub=&s2[count1];
							printf("\nYOU ARE NOW ENROLL! CONGRATULATIONS! :)\n");
							break;
						}
					if(count1==index2-1){
						printf("\nSUBJECT NOT REGISTERED!\n");
						break;
					}
					count1++;
				}
				break;
			}
			if(count==index-1){
			printf("\nSTUDENT NOT REGISTERED!\n");
			break;
			}
			count++;
		}
	}


void display(struct student *database){
    printf("Student ID: %d\n",database->studentID);
    printf("Last Name: %s\n",database->last_name);
    printf("First Name: %s\n",database->first_name);
    printf("Section: %s\n",database->section);
    printf("Hands-On Exam 1 Score: %d\n",database->exam1_score);
    printf("Hands-On Exam 2 Score: %d\n",database->exam2_score);
    printf("Hands-On Exam 3 Score: %d\n",database->exam3_score);
	printf("Subject Enroll: %s\n\n",database->sub->subject_name);
}

void displaySubject(struct subject subjectbase){
	printf("Subject ID: %d\n",subjectbase.digit_code);
	printf("Subject Name: %s\n",subjectbase.subject_name);
	printf("Subject Title: %s\n\n",subjectbase.subject_title);
}

int stringCompare(char s1[], char s2[]){
    int index = 0, x;
        while(toUpper(s1[index]) == toUpper(s2[index])){
            if(toUpper(s1[index]) == '\0' || toUpper(s2[index]) == '\0'){
                break;
            }
            index++;
        }
        if(toUpper(s1[index]) == '\0' && toUpper(s2[index]) == '\0'){
            x = 0;
            }else if(toUpper(s1[index]) < toUpper(s2[index])){
               x = -1;
                }else{
                    x = 1;
                }
return x;
}

char toUpper(char ch){
    int alpha = (int)ch;
        if(ch >= 'a' && ch <= 'z'){
            alpha -= 32;
        }
return alpha;
}
