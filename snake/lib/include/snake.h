/*
** EPITECH PROJECT, 2019
** snake
** File description:
** snake
*/

#include <stdbool.h>

#ifndef SNAKE_H_
#define SNAKE_H_

#define NB_LINES 24
#define NB_COLS 70
#define LINE_SNAKE 3
#define COL_SNAKE 8
#define LINE_SCORE 5
#define COL_SCORE 4
#define LINE_HSCORE 7
#define COL_HSCORE 4
#define START_MAP_X 27
#define END_MAP_X 66
#define START_MAP_Y 2
#define END_MAP_Y 21

typedef struct snake_s {
    int x;
    int y;
    int direction;
} snake_t;

typedef struct game_s {
    int score;
    int highscore;
    bool pause;
    bool loose;
    int last[2];
    int first[2];
    int direction;
    int map[24][70];
    snake_t body[800];
} game_t;

enum keys {
    UP = 1,
    LEFT,
    DOWN,
    RIGHT,
    PAUSE,
    QUIT
};

//globals.c
extern const char controls[6][2];
extern const int map_snake[24][70];

//init_window.c
int init_window(void);
int close_window(int err_code);
int set_term_mode(int i);

#endif /* !SNAKE_H_ */
