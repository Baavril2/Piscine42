#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

typedef	enum		e_bool
{
	false,
	true
}			t_bool;

typedef unsigned char t_byte;


void		ft_putchar(char c);
void		ft_putstr(const char *str);
void		ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_atoi_base(char *str, char *base);
void		ft_bzero(void *s, unsigned int n);
char		*ft_strcat(char *dest, char const *src);
char		*ft_strncat(char *dest, char *src, unsigned int n);
size_t		ft_strlcat(char *dest, char const *src, size_t size);
char		*ft_strchr(const char *s, int c);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strstr(char *haystack, char *needle);
char		*ft_strnstr(char *haystack, char *needle, size_t size);
char		*ft_strrchr(const char *s, int c);
void		ft_swap(int *a, int *b);
char		*ft_strcpy(char *s1, char const *s2);
char		*ft_strdup(char *src);
size_t		ft_strlen(char const *str);
char		*ft_strncpy(char *dest, const char *src, size_t n);
size_t		ft_strlcpy(char *dest, char const *src, size_t n);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char*));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
t_bool		ft_isalnum(int c);
t_bool		ft_isalpha(int c);
t_bool		ft_isascii(int c);
t_bool		ft_isdigit(int c);
t_bool		ft_islower(int c);
t_bool		ft_isprint(int c);
t_bool		ft_isupper(int c);
t_bool		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void		ft_print_words_tables(char **tab);

#endif
