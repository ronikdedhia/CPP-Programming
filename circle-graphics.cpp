#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int r=50,i,n;
   float e,x2,y2,startx,starty;
   float x1 = r*cos(0);
   float y1 = r*sin(0);
   x1=startx;
   y1=starty;
   /* initialize graphics mode */
   initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);             /* return with error code */
   }
   for(i=0;i<r;i++)
   {
	if((pow(2,i-1))<r && r<=(pow(2,i)))
		n=i;
   }
   starty=r;
   e=(pow(2,-n));
   cout<<e<<endl;
   cout<<n;
   x2=x1+n;
   do
   {
	x2=x1+(e*y1);
	y2=y1-e*x2;
	putpixel(200+x2,200+y2, 15);
	x1=x2;
	y1=y2;
   }while((y1-starty)<e || (startx-x1)>e);

   getch();
   closegraph();
   return 0;
}

