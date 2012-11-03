//nwin window library
#include "nwin.h"

namespace phyrrus9
{
    namespace nwin
    {
        void wtitle(WINDOW * w, const char * str)
        {
            char * title = new char[strlen(str) + 5];
            strcpy(title, "\n ");
            strcat(title, str);
            wprintw(w, str);
            wrefresh(w);
        }
        WINDOW * wcreatewin(int height, int width)
        {
            int x = (LINES - height) / 2;
            int y = (COLS - width) / 2;
            WINDOW *w;
            w = newwin(height, width, x, y);
            return w;
        }
        void wresizewindow(WINDOW * v, int h, int w)
        {
            wclear(v);
            werase(v);
            wrefresh(v);
            wresize(v, h, w);
            wrefresh(v);
        }
        void wcldisplay(WINDOW * w)
        {
            wclear(w);
            werase(w);
            wrefresh(w);
        }
    }
}