#include<graphics.h>
#include <stdlib.h>
#include<iostream.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;

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
   xmax = getmaxx();
   ymax = getmaxy();

   /* draw a diagonal line */
   long d1,d2;
   int i,gd,gm,x,y;
   long rx,ry,rxsq,rysq,tworxsq,tworysq,dx,dy;
   cout<<"Enter the x radius of the circle\n";
   cin>>rx;
   cout<<"Enter y radius\n";
   cin>>ry;
   rxsq=rx*rx;
   rysq=ry*ry;
   tworxsq=2*rxsq;
   tworysq=2*rysq;
   x=0;
   y=ry;
   d1=rysq-rxsq*ry+(0.25*rxsq);
   dx=tworysq*x;
   dy=tworxsq*y;
   do
   {
    putpixel(200+x,200+y,15);
    putpixel(200-x,200-y,15);
    putpixel(200+x,200-y,15);
    putpixel(200-x,200+y,15);
  if(d1<0)
  {
  x=x+1;
  dx=dx+tworysq;
  d1=d1+dx+rysq;
  }
  else
  {
  x++;
  y--;
  dx=dx+tworysq;
  dy=dy-tworxsq;
  d1=d1+dx-dy+rysq;
  }
  }
  while(dx<dy);
  d2=rysq*(x+0.5)*(x+0.5)+rxsq*(y-1)*(y-1)-rxsq*rysq;
   do
   {
    putpixel(200+x,200+y,15);
    putpixel(200-x,200-y,15);
    putpixel(200+x,200-y,15);
    putpixel(200-x,200+y,15);
  if(d2>0)
  {
  y--;
  dy=dy+tworxsq;
  d2=d2-dy+rxsq;
  }
  else
  {
  x++;
  y--;
  dx=dx+tworysq;
  dy=dy-tworxsq;
  d2=d2+dx-dy+rxsq;
  }
  }
  while(y>0);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
