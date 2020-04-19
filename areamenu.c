#include<stdio.h>
int main()
{
	while(1)
	{
	
	int choice,r,l,b,h,a;
	float Pi=3.14;
	float area,perimeter;
	printf("\nPress 1 to calculate area of circle");
	printf("\nPress 2 to calculate area of recatngle");
	printf("\nPress 3 to calculate area of square");
	printf("\nPress 4 to exit");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
		    printf("Enter radius of a circle");
	        scanf("%d",&r);
    	    area=Pi*(r*r);
	        perimeter=2*Pi*r;
    	    printf("\nArea of Circle is %f",area);
	        printf("\nPerimeter of circle is %f",perimeter);
	        break;
	    case 2:
	        printf("\nEnter length ,breadth and height");
	        scanf("%d%d%d",&l,&b,&h);
	        area=l*b*h;
        	perimeter=2*(l+b)*h;
	        printf("\nArea of rectangle is %f",area);
	        printf("\nPerimeter of rectangle is %f",perimeter);
	        break;
	    case 3:
	    	printf("\nEnter side of square");
        	scanf("%d",&a);
        	area=a*a;
	        perimeter=4*a;
	        printf("\nArea of square is %f",area);
	        printf("\nPerimeter of square is %f",perimeter);
	        break;
	    case 4:exit(0);
	        
			
		default:
	    printf("Wrong Entry");
		
	}
	getch(0);
	
}
}
