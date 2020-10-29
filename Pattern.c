#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int s=(2*n)-1;
      int f=n;
      //printf("%d",s);
      for(int i=0;i<s;i++)
      {
          //printf("%d",i);
          if((i/(s/2))%2==0)
          {
          for(int j=0;j<(i%(s/2));j++)
          {
              printf("%d ",f);
              f--;
              
          }
          }
          else
          {
              for(int j=0;j<(s/2)-(i%(s/2));j++)
            {
              printf("%d ",f);
              f--;
              
            }
          }
          f=n;
          //printf("\n");
          if((i/(s/2))%2==0)
          {
          for(int j=(i%(s/2));j<(s-(i%(s/2)));j++)
          {
              if((i/(s/2))%2==0)
              printf("%d ",f-((i%(s/2))));
              else 
              printf("%d ",f-(s/2-((i%(s/2)))));
          }
          }
          else
          {
              for(int j=s/2-(i%(s/2));j<=((i%(s/2))+(s/2));j++)
            {
              //if((i/(s/2))%2==0)
              //printf("%d ",((i%(s/2))));
              //else 
              printf("%d ",f-(s/2-((i%(s/2)))));
            }
          }
          f=n;
          if((i/(s/2))%2==0)
          {
              f=i-1;
          for(int j=0;j<(i%(s/2));j++)
          {
              
              printf("%d ",n-f);
              f--;
              for(int k=0;k<j;k++)
              {
                  //printf("%d ",k);
              }
          }
          }
          else
          {
              f=(s/2)-1-(i%(s/2));
              for(int j=0;j<(s/2)-(i%(s/2));j++)
            {
              printf("%d ",n-f);
              f--;
              for(int k=0;k<j;k++)
              {
                  //printf("%d ",k);
              }
            }
          }
          f=n;
          printf("\n");
      }
    return 0;
}
