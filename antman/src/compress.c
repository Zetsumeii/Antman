/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "../include/protos_compress.h"
#include "../include/macros.h"

int choice_compress(int argc, char **argv)
{
    if (error_handling(argc, argv) == ERROR_EPITECH)
        return ERROR_EPITECH;
    char *str = file_to_str(argv[1]);
    if (str == NULL)
        return ERROR_EPITECH;
    if (argv[2][0] == '1' && argv[2][1] == '\0' && CHECK_TEXTE) {
        if (huffman_compression_main(str) == SUCCESS_EPITECH)
            return SUCCESS_EPITECH;
    }
    if (argv[2][0] == '2' && argv[2][1] == '\0' && CHECK_HTML) {
        if (huffman_compression_main(str) == SUCCESS_EPITECH)
            return SUCCESS_EPITECH;
    }
    if (argv[2][0] == '3' && argv[2][1] == '\0' && CHECK_IMAGE) {
        if (huffman_compression_main(str) == SUCCESS_EPITECH)
            return SUCCESS_EPITECH;
    }
    return ERROR_EPITECH;
}

int compress_file(int argc, char **argv)
{
    if (argc == 3) {
        if (choice_compress(argc, argv) == SUCCESS_EPITECH)
            return SUCCESS_EPITECH;
    }
    return ERROR_EPITECH;
}
