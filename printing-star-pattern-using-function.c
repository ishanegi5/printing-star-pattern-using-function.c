#include<stdio.h>

int star(int totalNumOfStars)

{ 
  for(int i=0;i<totalNumOfStars;i++)
  
{ for(int j=0;j<=i;j++)
  
{
    printf("*");
  
}
  
printf("\n");

}

}

int main()

{ int totalNumOfStars;
   
printf("totalNumOfStars= ") ;
   
scanf("%d",&totalNumOfStars);
   
star(totalNumOfStars);

}