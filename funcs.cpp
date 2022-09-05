#include "header.h"

int my_puts(char * str)
    {
    if (printf("%s\n", str))
        return '\n';
    else
        return EOF;
    }

char * my_strchr(const char * str, int ch)
    {
    int i = 0;
    while (*(str + i) != '\0')
        {
        if (*(str + i) == ch)
            return (char *)(str + i);
        i++;
        }
    return NULL;
    }

size_t my_strlen(const char * str)
    {
    size_t i = 0;
    while (*str++)
        i++;
    return i;
    }

char * my_strcpy(char * destination, const char * sourse)
    {
    int i = 0;
    while (sourse[i] != '\0')
        {
        destination[i] = sourse[i];
        i++;
        }
    destination[i] = '\0';
    return destination;
    }

char * my_strncpy(char * destination, const char * sourse, size_t n)
    {
    size_t i = 0;
    while (sourse[i] != '\0' && i < n)
        {
        destination[i] = sourse[i];
        i++;
        }
    destination[i] = '\0';
    return destination;
    }

char * my_strcat(char * destination, const char * sourse)
    {
    size_t len_dest = 0;
    size_t i = 0;
    len_dest = my_strlen(destination);
    while (sourse[i] != '\0')
        {
        destination[len_dest + i] = sourse[i];
        i++;
        }
    return destination;
    }

char * my_strncat(char * destination, const char * sourse, size_t n)
    {
    size_t len_dest = 0;
    size_t i = 0;
    len_dest = my_strlen(destination);
    while (sourse[i] != '\0' && i < n)
        {
        destination[len_dest + i] = sourse[i];
        i++;
        }
    return destination;
    }

char * my_fgets(char * str, int num, FILE * stream)
    {
    int ch = 0;
    int i = 0;
    ch = getc(stream);
    while (ch != '\n' && ch != EOF && i < num)
        {
        str[i] = (char) ch;
        ch = getc(stream);
        i++;
        }

    if (ch == EOF)
        return NULL;
    return str;
    }

char * my_strdup(const char * str)
    {
    int i = 0;
    char * ptrch = NULL;

    size_t len_str;
    len_str = my_strlen(str) + 1;
    ptrch = (char *) malloc(sizeof(char) * len_str);

    if (ptrch != NULL)
        {
        while (str[i] != '\0')
            {
            ptrch[i] = str[i];
            i++;
            }
        ptrch[i] = '\0';
        return ptrch;
        }
    return NULL;
    }

int my_strcmp(const char * str1, const char * str2)
    {
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') i++;
    return (int) str1[i] - (int) str2[i];
   }

size_t my_getline(char ** string, size_t * n, FILE * stream)
    {
    size_t len = 0;
    int ch = 0;
    ch = getc(stream);

    while (ch != '\n' && ch != EOF)
        {
        len++;
        ch = getc(stream);
        }
    if (*n == 0)
        {
            *string = (char *) calloc(len + 1, sizeof(char));
            *n = len;
        }

    if (len > *n)
        {
        *string = (char *) realloc(*string, len + 1);
        *n = len;
        }

    rewind(stream);

    for (size_t i = 0; i < len; i++)
        {
        ch = getc(stream);
        *(*string + i) = (char)ch;
        }

    if (ch == EOF)
        return NULL;
    return len;

    }

