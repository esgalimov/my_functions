#include "header.h"

void my_puts_test(void)
    {
    char sourse[100] = "Test string for my functions";
    int x = 0;
    printf("my_puts working\n");
    x = my_puts(sourse);
    printf("%d\n\n", x);
    }

void my_strchr_test(void)
    {
    char sourse[100] = "dfniaeiajnfe";
    char ch = 'e';
    char * ptrch = NULL;

    printf("my_strchr working\n");
    ptrch = my_strchr(sourse, ch);
    printf("%p\n", ptrch);
    ptrch = &sourse[5];
    printf("%p\n\n", ptrch);
    }

void my_strlen_test(void)
    {
    char sourse[100] = "QWErtY";
    size_t lenght = 0;
    printf("my_strlen working\n");
    lenght = my_strlen(sourse);
    printf("%zd\n\n", lenght);
    }

void my_strcpy_test(void)
    {
    char sourse[100] = "Test string for my strcpy func";
    char destination[100];
    char * ptrch = NULL;

    printf("my_strcpy working\n");
    ptrch = my_strcpy(destination, sourse);
    printf("%s\n\n", ptrch);
    }

void my_strncpy_test(void)
    {
    char sourse[100] = "Test string for my strcpy func";
    char destination[100];
    char * ptrch = NULL;
    size_t n = 8;

    printf("my_strcpy working\n");
    ptrch = my_strncpy(destination, sourse, n);
    printf("%s\n\n", ptrch);
    }

void my_strcat_test(void)
    {
    char sourse[100] = "Test string for my functions";
    char dest_not_empty[100] = "Hello! ";
    char * ptrch = NULL;

    printf("my_strcat working\n");
    ptrch = my_strcat(dest_not_empty, sourse);
    printf("%s\n\n", ptrch);
    }

void my_strncat_test(void)
    {
    char sourse[100] = "Test string for my functions";
    char dest_not_empty[100] = "Hello! ";
    char * ptrch = NULL;
    size_t n = 6;

    printf("my_strcat working\n");
    ptrch = my_strncat(dest_not_empty, sourse, n);
    printf("%s\n\n", ptrch);
    }

void my_fgets_test(void)
    {
    FILE * fp;
    char ptrch[100];

    printf("my_fgets working\n");
    fp = fopen("./text.txt", "r");
    if (fp != NULL)
        {
        my_fgets(ptrch, 3, fp);
        printf("%s\n\n", ptrch);
        }
    }

void my_strdup_test(void)
    {
    const char str[30] = "Testing my strdup function";
    char * ptrch = NULL;

    printf("my_strdup working\n");
    ptrch = my_strdup(str);
    printf("%s\n\n", ptrch);
    }

void my_getline_test(void)
    {
    char * line = NULL;
    size_t n = 0;
    size_t read_bytes = 0;
    FILE * fp = NULL;

    line = (char *) malloc(n);
    printf("my_getline working\n");
    fp = fopen("./text.txt", "r");

    read_bytes = my_getline(&line, &n, fp);

    printf("%s\n with %zd bytes\n\n", line, read_bytes);

    }

void my_strcmp_test()
    {
    char str1[] = "abcde";
    char str2[] = "bcde";
    char str3[] = "abc";
    char str4[] = "abc";

    printf("my_strcmp working\n");

    printf("%s or %s %d\n", str1, str2, my_strcmp(str1, str2));
    printf("%s or %s %d\n", str3, str4, my_strcmp(str3, str4));
    printf("%s or %s %d\n", str1, str3, my_strcmp(str1, str3));
    printf("%s or %s %d\n\n", str2, str3, my_strcmp(str2, str3));

    }
