#include <stdio.h>
#include "functions.h"

int main() 
{
    struct MovieLibrary library;
    
    populate_movie_library(&library);
    print_movie_library(&library);
    return 0;
}