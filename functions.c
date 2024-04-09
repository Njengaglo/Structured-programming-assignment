#include "functions.h"

void populate_movie_library(struct MovieLibrary *library) {
    int i;
    for (i = 0; i < 10; i++) 
    {
        printf("Enter name for movie %d: ", i + 1);
        scanf("%s", library->movies[i].name);
        printf("Enter genre for movie %d: ", i + 1);
        scanf("%s", library->movies[i].genre);
        printf("Enter rating for movie %d: ", i + 1);
        scanf("%f", &library->movies[i].rating);
    }
}

void print_movie_library(struct MovieLibrary *library) {
    int i;
    printf("\n***MOVIE DEALS***\n");
    for (i = 0; i < 10; i++) 
    {
        printf("\nMovie %d:\n", i + 1);
        printf("Name: %s\n", library->movies[i].name);
        printf("Genre: %s\n", library->movies[i].genre);
        printf("Rating: %.1f\n", library->movies[i].rating);
    }
}