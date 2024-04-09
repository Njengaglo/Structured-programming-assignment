#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>

struct Movie {
    char name[50];
    char genre[50];
    float rating;
};

struct MovieLibrary {
    struct Movie movies[10];
};

void populate_movie_library(struct MovieLibrary *library);
void print_movie_library(struct MovieLibrary *library);

#endif