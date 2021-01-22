#include <stdio.h>

struct record{
    char name[20];
    float lit;
    float math;
    float physics;
} stud1 = {
    "Bart",
    82,
    82,
    82
};
struct record stud2 = {
    "Marge",
    80,
    80,
    85
};
struct record stud3 = {
    "Lisa",
    90,
    98,
    82
};

float mean(float a, float b, float c);

int main(void){
    printf(" Name \t\tLiterature\tMath\t\tPhysics\t\tComputed \n\t\t\t\t\t\t\t\tMean");
    printf("\n %s  \t\t%.f  \t\t%.f  \t\t%.f \t\t%.f", stud1.name,stud1.lit, stud1.math, stud1.physics, mean(stud1.lit, stud1.math, stud1.physics));
    printf("\n %s  \t%.f  \t\t%.f  \t\t%.f \t\t%.2f", stud2.name,stud2.lit, stud2.math, stud2.physics, mean(stud2.lit, stud2.math, stud2.physics));
    printf("\n %s  \t\t%.f  \t\t%.f  \t\t%.f \t\t%.f", stud3.name,stud3.lit, stud3.math, stud3.physics, mean(stud3.lit, stud3.math, stud3.physics));
    return 0;
}

float mean(float a, float b, float c){
    float compMean = 0;

    compMean = (a + b + c)/3;
    return compMean;

}