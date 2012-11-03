//ncurses window library
#ifndef __nwin__nwin__
#define __nwin__nwin__
#define __nwin__version 1
#include <ncurses.h>
#include <curses.h>

#include <iostream>
using namespace std;

namespace phyrrus9
{
    namespace nwin
    {
        void wtitle(WINDOW *, const char *); //sets the title of a window
        WINDOW * wcreatewin(int, int); //creates a centered window
        void wresizewindow(WINDOW *, int, int);
        void wcldisplay(WINDOW *);
    }
}

#endif /* defined(__nwin__nwin__) */