//project name: student marksheet generator by aayushparekh 
#include <stdio.h>
#include <stdlib.h>
char name[20], fa_name[20], mo_name[20], s_name[40], dob[15];
int roll_number, year, evs_marks, vss_marks, cp_marks, fwd_marks, maths_marks;

void generate_marksheet()
{
    int grand_total;
    float presentage;

    grand_total = evs_marks + vss_marks + cp_marks + fwd_marks + maths_marks;
    presentage = grand_total / 5;

    printf("\n------------------------------------------------------------------------------------\n");
    printf("|\t\t             Name of the UNIVERSITY                \n");
    printf("|-------------------------------------------------------------------------------------\n");
    printf("|Your name: %s\tyear: %dst\tRoll Number: %d\n", name, year, roll_number);
    printf("|Father name: %s\n", fa_name);
    printf("|Mother name: %s\n", mo_name);
    printf("|Date of birth: %s\n", dob);
    printf("|Institute name: %s\n", s_name);
    printf("|------------------------------------------------------------------------------------\n");
    printf("|\tSUBJECTS                 \tMAX MARKS    \tMIN MARKS\tTHEORY MARKS\n");
    printf("|------------------------------------------------------------------------------------\n");
    printf("|\tENVIRONMENTAL SCIENCE    \t    100      \t 33       \t    %d\n", evs_marks);
    printf("|\tSOCIAL SCIENCE           \t    100      \t 33       \t    %d\n", vss_marks);
    printf("|\tCOMPUTER PROGRAMMING-1   \t    100      \t 33       \t    %d\n", cp_marks);
    printf("|\tFUNDAMENTAL OF WEB DESIGN\t    100      \t 33       \t    %d\n", fwd_marks);
    printf("|\tEngineering Mathematcis  \t    100      \t 33       \t    %d\n", maths_marks);
    printf("|------------------------------------------------------------------------------------\n");
    printf("|\t              \t  500    |    GRAND TOTAL\t    %d\n", grand_total);
    printf("|------------------------------------------------------------------------------------\n");
    if (presentage >= 81 && presentage <= 100)
    {
        printf("|RESULT : PASS IN Distinction\n");
        printf("|GRADE  : A+\n");
    }
    if (presentage >= 60 && presentage <= 80)
    {
        printf("|RESULT : PASS IN FIRST CLASS\n");
        printf("|GRADE  : A\n");
    }
    else if (presentage >= 41 && presentage <= 59)
    {
        printf("|RESULT : PASS IN SECOND CLASS\n");
        printf("|GRADE  : B\n");
    }
    else if (presentage >= 31 && presentage <= 40)
    {
        printf("|RESULT : PASS IN THIRD CLASS\n");
        printf("|GRADE  : C\n");
    }
    else if (presentage >= 1 && presentage <= 30)
    {
        printf("|RESULT : Fail\n");
        printf("|GRADE  : D\n");
    }
    printf("|------------------------------------------------------------------------------------\n\n");
}

void take_user_info()
{
    char yesNo;
    printf("Enter your name: ");
    fflush(stdin);
    gets(name);
    printf("Enter father name: ");
    fflush(stdin);
    gets(fa_name);
    printf("Enter mother name: ");
    fflush(stdin);
    gets(mo_name);
    printf("Enter Institute name:: ");
    fflush(stdin);
    gets(s_name);
    printf("Enter date of birth name: ");
    fflush(stdin);
    gets(dob);
    printf("Enter your year: ");
    scanf("%d", &year);
    printf("Enter roll No.: ");
    scanf("%d", &roll_number);
    printf("Enter subject marks\n");
repeate:
    printf("Environmental science marks: ");
    scanf("%d", &evs_marks);
    if (evs_marks > 100 || evs_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate;
    }
repeate1:
    printf("English marks: ");
    scanf("%d", &vss_marks);
    if (vss_marks > 100 || vss_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate1;
    }
repeate2:
    printf("computer programing marks: ");
    scanf("%d", &cp_marks);
    if (cp_marks > 100 || cp_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate2;
    }
repeate3:
    printf("fundamental of web design marks: ");
    scanf("%d", &fwd_marks);
    if (fwd_marks > 100 || fwd_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate3;
    }
repeate4:
    printf("Maths marks: ");
    scanf("%d", &maths_marks);
    if (maths_marks > 100 || maths_marks < 1)
    {
        printf("invalid marks enter valid marks\n");
        goto repeate4;
    }
    printf("\nIf you want to generate your marksheet then press 'Y' otherwise 'N': ");
    fflush(stdin);
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        generate_marksheet();
    }
    else
    {
        exit(0);
    }
}
void main()
{
    char yesNo;
    printf("\n             *Welcome to marsheet generation project*               \n\n");
    printf("If you want to generate your marsheet ");
    printf("then you have to provide some information\n");
    printf("If you want to provide information then press 'Y' otherwise 'N': ");
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        take_user_info();
    }
    else
    {
        exit(0);
    }
}