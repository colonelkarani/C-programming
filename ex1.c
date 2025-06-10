#include<stdio.h>

/*This is a multiliner
 comment.*/
int main(int argc, char*argv[])
{
    //This is also a comment
    int distance = 100;
    int speed = 60;
    int time = 7;
    int velocity = speed - time;


    printf("You are %d miles away.\n", distance);
    printf("you are going at %d mph. \n", speed);
    printf("the time is %d am\n", time);
    printf("Your velocity is %d\n", velocity);

    return 0;
}