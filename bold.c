#include <ncurses.h>

int main(void)
{
    initscr();
    curs_set(0);
    noecho();

    use_default_colors();
    start_color();

    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_RED);
    init_pair(3, COLOR_BLACK, COLOR_WHITE);

    wattron(stdscr, COLOR_PAIR(1));
    wprintw(stdscr, "GREEN ON BLACK\n");
    wattroff(stdscr, COLOR_PAIR(1));

    wattron(stdscr, COLOR_PAIR(1) | A_BOLD);
    wprintw(stdscr, "BOLD GREEN ON BLACK\n");
    wattroff(stdscr, COLOR_PAIR(1) | A_BOLD);

    wattron(stdscr, COLOR_PAIR(2));
    wprintw(stdscr, "GREEN ON RED\n");
    wattroff(stdscr, COLOR_PAIR(2));

    wattron(stdscr, COLOR_PAIR(2) | A_BOLD);
    wprintw(stdscr, "BOLD GREEN ON RED\n");
    wattroff(stdscr, COLOR_PAIR(2) | A_BOLD);

    wattron(stdscr, COLOR_PAIR(3));
    wprintw(stdscr, "BLACK ON WHITE\n");
    wattroff(stdscr, COLOR_PAIR(2));

    wattron(stdscr, COLOR_PAIR(3) | A_BOLD);
    wprintw(stdscr, "BOLD BLACK ON WHITE\n");
    wattroff(stdscr, COLOR_PAIR(2) | A_BOLD);
    refresh();
    getch();

    endwin();
    return 0;
}
