/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

unsigned char *file_to_str(char const *filepath)
{
    unsigned char *str;
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    struct stat file;
    stat(filepath, &file);
    str = malloc(sizeof(char) * (file.st_size + 1));
    str[file.st_size] = '\0';
    read(fd, str, file.st_size);
    return str;
}
