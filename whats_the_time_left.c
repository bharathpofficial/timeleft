/*THIS PROGRAM, TAKES INPUT OF CURRENT TIME,
FROM THE USER AND SUBSTRACTS IT
BY THE TOTAL 24HRS TIME == to show the left out time.*/ 

#include<stdio.h>

int main()

{
  int totaltime;
  float curt, x,y,z,timeleft;
    
    totaltime = 1440; //this is 24hrs x 60 min
  printf("\t for example 2.36 means 2hrs 36min");
  printf("\n\t Don`t ,enter like 2:36");
    
  printf("\n\nEnter current TIME = ");
  scanf("%f ", &curt);
  
    x = curt*totaltime; //current time x totaltime
    y = x - totaltime; //multiplied val. - totaltime
    z = y/60; //final value stored in variable
    timeleft = z-24;
  printf("\n\t You have %f time left ",timeleft);
  
  return 0;
  
  }
