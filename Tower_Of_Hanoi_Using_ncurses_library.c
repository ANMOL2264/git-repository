#include <stdio.h>
#include <ncurses.h>
void tower1(int);
int main()
{ 
 tower1(10);
 tower1(10);
 tower1(10);
}

void tower1(int startx)
{
 int height=2,width=5,starty=5 ;
 int forw=4,forx=0,fory=4,i=0;

initscr();

 WINDOW * win = newwin(height, width , starty + 2 , startx + 2);
refresh();
 box(win,0,0);
 wrefresh(win);

while (i<=1)
{
 win = newwin(height , width + forw  , starty + fory , startx + forx );
refresh();
 box(win,0,0);
 wrefresh(win);
 
 forw += 4;
 fory += 2;
 forx -= 2;
 i++;
}
}

