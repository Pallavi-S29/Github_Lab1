#include<stdio.h>
int main()
{
	int n,i,marks,total=0;
	float percentage;
	
	
	printf("enter the number of subjects:");
	scanf("%d,&n");
	
	for(i=1;i<=n;i++)
	{
		printf("enter the marks for subject%d:",i);
		
scanf("%d",&marks);

total=total+marks;
}
percentage=(float)total/n;
 
 printf("\nTotal Marks=%d",total);
 printf("\npercentage=%.2f%%",percentage);
   
   if(percentage>=90)
   printf("\ngrade=A+");
   	else if(percentage>=80)
   printf("\ngrade=A");
   else if(percentage>=70)
   printf("\ngrade=B");
   else if(percentage>=60)
   printf("\ngrade=C");
   else if(percentage>=50)
   printf("\ngrade=D");
   else
   printf("\ngrade=F");
    
    return 0;
   
   
	}
