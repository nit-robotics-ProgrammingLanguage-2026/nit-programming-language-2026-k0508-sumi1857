#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    
    if(n<0)
       printf("Error");
    
    else if(n==0)
       printf("No");  

    else{
       int flag=0;   
    
    if(n%3==0){
       printf("Up");
       flag=1; 
    }
    
    if(n%5==0){
       printf("Go");
       flag=1;
    }

    if(n%7==0){
       printf("!!");
       flag=1;
    }

    if(flag==0)
       printf("No");

    }
   /* TODO: 課題0508 */
    return 0;
}
