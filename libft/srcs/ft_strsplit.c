#include "libft.h"

static int	separator(char a, char b)
{
	return(a == b);
}

static int	ft_countwords(char const *str, char c)
{
        int     i;
        int     nb_word;

        i = 0;
        nb_word = 0;
        if (!separator(str[0], c))
                nb_word = 1;
        while (str[i] != '\0')
        {
                if (separator(str[i], c) && str[i] != '\0')
                {
                        if (!(separator(str[i + 1], c) || str[i + 1] == '\0'))
                        {
                                nb_word++;
                                i++;
                        }
                }
                i++;
        }
        return (nb_word);
}

char    **ft_strdup_modif(char *str, int i, char **tab, char c)
{
        int j;
        int nb_char;

        nb_char = 0;
        j = 0;
        while (!(separator(str[j], c) || str[j] == '\0'))
        {
                nb_char++;
                j++;
        }
        if (!(tab[i] = malloc(sizeof(char) * (nb_char + 1))))
                return (0);
        j = 0;
        while (!(separator(str[j], c) || str[j] == '\0'))
        {
                tab[i][j] = str[j];
                j++;
        }
        tab[i][j] = '\0';
        return (tab);
}

char    **ft_strsplit(char *str, char c)
{
        int             i;
        int             k;
        char    **tab;

        i = 0;
        k = ft_countwords(str, c);
        if (!(tab = (char**)malloc(sizeof(char*) * (k + 1))))
                return (0);
        while (i < k)
        {
                while (separator(*str, c) && *str != '\0')
                        str++;
                ft_strdup_modif(str, i, tab, c);
                while (!(separator(*str, c) || *str == '\0'))
                        str++;
                i++;
        }
        tab[i] = 0;
        return (tab);
}
