#include<graphics.h>
#include <stdlib.h>
#include<dos.h>
#include <stdio.h>
#include <conio.h>
#include<iostream.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());


   /* draw a diagonal line */
   float  x1,y1,x2,y2,e;
   cout<<"Enter the first cordinates\n";
   cin>>x1>>y1;
   cout<<"Enter the second cordinated\n";
   cin>>x2>>y2 ;
   float x=x2-x1;
   float  y=y2-y1;
     e=(2*y)-x;
    cout<<"I\t"<<"PLOT\t"<<"\tX\t"<<"Y\t"<<"e"<<endl;
   putpixel((int)x1,(int)y1,RED);
       int i;
   for( i=0;i<x;i++)
   {
   while(e>=0)
   {
   y1=y1+1;
   e=e-2*x;
   }
   x1=x1+1;
   e=e+2*y;

   putpixel((int)x1,(int)y1,RED);
   delay(30);
   cout<<i<<"\t"<<"("<<x1<<","<<y1<<")\t"<<x1<<"\t"<<y1<<"\t"<<e<<endl;
   }




   /* clean up */
   getch();
   closegraph();
   return 0;
}

