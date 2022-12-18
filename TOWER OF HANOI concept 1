#include <stdio.h>
#include <ncurses.h>
#include <string.h>
int x = 2;
void tower1 (int, int, int);
int
main ()
{

  tower1 (1, 7, 10);
  tower1 (5, 9, 10);
  tower1 (9, 11, 10);

  napms (1000);
  clear ();

  x = 4;
  tower1 (5, 9, 10);
  tower1 (9, 11, 10);
  x = 6;
  tower1 (1, 11, 60);

  napms (1000);
  clear ();

  x = 6;
  tower1 (9, 11, 10);
  x = 8;
  tower1 (5, 9, 60);
  x = 6;
  tower1 (1, 11, 60);

  napms (1000);
  clear ();

  x = 6;
  tower1 (9, 11, 30);
  x = 8;
  tower1 (5, 9, 60);
  x = 6;
  tower1 (1, 11, 60);

  napms (1000);
  clear ();

  x = 4;
  tower1 (5, 9, 30);
  tower1 (9, 11, 30);
  x = 6;
  tower1 (1, 11, 60);

  napms (1000);
  clear ();

  x = 2;
  tower1 (1, 7, 30);
  tower1 (5, 9, 30);
  tower1 (9, 11, 30);


}

void
tower1 (int width, int starty, int startx)
{
  static int height = 2;

  initscr ();

  WINDOW *win = newwin (height, width += 4, starty, startx -= x);
  refresh ();
  box (win, 0, 0);
  wrefresh (win);

  x += 2;

}
