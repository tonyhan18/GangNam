# include <stdio.h>
#include "libft.h"

int     main(void)
{
    char a[5];

    memset(a, 'a', sizeof(a));
    for(unsigned int i = 0 ; i < 5; ++i)
    {
        printf("%c ", a[i]);
    }
    printf("\n");
    ft_memset(a, 'b', sizeof(a));
    for(unsigned int i = 0 ; i < 5; ++i)
    {
        printf("%c ", a[i]);
    }
    printf("\n-------\n");

    bzero(a+2, 3);
    for(unsigned int i = 0 ; i < 5; ++i)
    {
        printf("%c ", a[i]);
    }
    printf("\n");
    ft_bzero(a+1, 4);
    for(unsigned int i = 0 ; i < 5; ++i)
    {
        printf("%c ", a[i]);
    }
    printf("\n-------\n");

    char b[5];
    ft_memset(b,'b',sizeof(b));
    memcpy(a,b,3);
    for(unsigned int i = 0 ; i < 5; ++i)
    {
        printf("%c ", a[i]);
    }
    printf("\n");
    ft_memcpy(a,b,5);
    for(unsigned int i = 0 ; i < 5; ++i)
    {
        printf("%c ", a[i]);
    }
    printf("\n-------\n");

    printf("%c\n",strrchr("abc","a");
    printf("%c\n",ft_strrchr("abc","a");
    printf("\n-------\n");
    
}