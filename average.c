#include <stdio.h>

float calculate_average( int arr[5] )
{
    int total ;
    float average;
    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }
    average = total/5;
    return average;    
}

char check_grades(int grade)
{
if (grade >100 || grade <0)
{
    printf("Grade is not valid");
}
else
{
    if (grade > 80)
    {
        return 'A';
    }
    else if (grade >= 61 && grade <= 80)
    {
        return 'B';
    }
    else if (grade >= 41 && grade <= 60)
    {
        return 'C';
    }
    else if (grade >= 0 && grade <= 40)
    {
        return 'D';
    }   
    return 'F';
}
return 'Y';

}


void university_status(int grade)
{
    if (grade > 60)
    {
        printf("The student passed he can now go to university");
    }else if(grade>40)
    {
        printf("The student was able to only go to a technical school");
    }else
    {
        printf("Thestudent was disqualified");
    }
}
int main()
{
    int grades[5];
    char *subjects[] = {"math", "language", "science", "social studies", "arts"};

    for (int i = 0; i < 5; i++)
    {
    printf("Enter the students %s scores\n", subjects[i]);
    scanf("%d", &grades[i]);
    }
  
    int average = (int) calculate_average(grades);

   
    for (int i = 0; i < 5; i++)
    {
        printf("The score of %s is %d\n The average grade in the subject is %c \n\n", subjects[i],grades[i], check_grades(grades[i]));
    }  

    printf("\n the students average is %d\n",average);

    char grade = check_grades(average);

    printf("The students average grade is %c\n", grade);

    university_status(average);

    return 0;
}