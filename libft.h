#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

// basic functions
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t len);

// string conversion functions
int ft_atoi(const char *s);
char *ft_itoa(int n);

// string comparison and search functions
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(const char *haystack, const char *needle, int n);

// string manipulation functions
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
char *ft_strdup(const char *s);

// file output functions
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int nb, int fd);

// simple memory function
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(const char *haystack, const char *needle, int n);

// string construction functions
char *ft_substr(char const *s, unsigned int start, int len);

#endif
