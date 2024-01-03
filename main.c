#include <stdio.h>
#include "monty.h"

int main(int argc, char **argv)
{
    char *file;
    FILE *fcontent;

    if (argc > 1)
        file = argv[1];
    fcontent = fopen(file, "r");
    fread
    printf("%c", fcontent[0]);
}