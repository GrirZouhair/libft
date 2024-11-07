<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:08:59 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/02 16:52:25 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
//	basic functions
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t len);
//	string conversion functions
int					ft_atoi(const char *s);
char				*ft_itoa(int n);
//	string comparison and search functions
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *needle, size_t n);
//	string manipulation functions
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
unsigned int		ft_strlcpy(char *dest, char *src, size_t size);
unsigned int		ft_strlcat(char *dest, char *src, size_t size);
char				*ft_strdup(const char *s);
//	simple memory function
void				*ft_memcpy(void *b, const void *src, size_t n);
void				*ft_memmove(void *b, const void *src, size_t n);
void				*ft_memchr(void const *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t n, size_t size);
//	file output function
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
//	string construction function
char				*ft_substr(char const *s, size_t start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
=======
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

>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
#endif
