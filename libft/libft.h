#ifndef libft
#define libft

/* returns 1 or 0 depend on c value*/
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

#include <stddef.h>/* for size_t*/
#include <stdlib.h>/* NULL*/

/* return length of s*/
size_t ft_strlen(const char *s);

int ft_toupper(int c);
int ft_tolower(int c);


void ft_bzero(void *s,size_t n);/* neden \0 attık bi sor xd*/


void *ft_memset(void *s, int c, size_t n);
void* ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *restrict dst,const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);/* =??= */
int memcmp(const void *s1, const void *s2, size_t n);




char* ft_strchr(const char *s, int c);
char* ft_strnstr(const char *haystack, const char *needle, size_t len);

size_t ft_strlcpy(char *restrict dst, const char *restrict src,size_t dstsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src,size_t dstsize);

char * ft_strrchr(const char *s, int c)




int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);









#endif