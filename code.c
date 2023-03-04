#include<stdio.h>
int main()
{   int choice;
    float r,len,bre;
    printf("select your choice\n");
    printf("1. cicrle \n");
    printf("2. rectangle \n)");
    printf("3. Triangle\n");
    printf("Enter your choice");
    scanf("%d",&choice);

   do
{ 
    switch(choice)
    {
      case 1:
        printf("Enter the radius of circle\n");
        scanf("%d",&r);
        printf("The area of the circle is %d\n",3.14*r);
        break;
    
      case 2:
        printf("Enter the length\n");
        scanf("%f",&len);
        printf("Enter the value of breadth\\n");
        scanf("%f",&bre);
        printf("The area of the rectangle is %f",len*bre);
        break;

      case 3:
        printf("Enter the height");
        scanf("%f",&len);
        printf("Enter the breadth");
        scanf("%f",&bre);
        printf("The area of the traingle",0.5*len*bre);
        break;

        default:
        printf("Please enter the correct choice");
        break;

    }
   }
   while (choice!=4);
}