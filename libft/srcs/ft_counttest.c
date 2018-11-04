#include "libft.h"

static int      check_separator(char a, char b)
{
        return(a == b);
}

char    counter_word(char *str, char charset)
{
        int     i;
        int     nb_word;

        i = 0;
        nb_word = 0;
        if (!check_separator(str[0], charset))
                nb_word = 1;
        while (str[i] != '\0')
        {
                if (check_separator(str[i], charset) && str[i] != '\0')
                {
                        if (!(check_separator(str[i + 1], charset) || str[i + 1] == '\0'))
                        {
                                nb_word++;
                                i++;
                        }
                }
                i++;
        }
        return (nb_word);
}

int     main(int ac, char **av)
{
        (void)ac;
        printf("%d", counter_word(av[1], ' '));
}   
