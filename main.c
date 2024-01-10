#include <stdio.h>
#include "monty.h"

int main(int argc, char **argv)
{
    char *file;
    FILE *fcontent;
    int n = 0;

    if (argc > 1)
        file = argv[1];
    fcontent = fopen(file, "r");
    n = fread(fcontent);
    return(fcontent);
}
