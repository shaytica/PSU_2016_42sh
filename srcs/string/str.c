/*
** str.c for minishell2 in /home/benjamin.g/delivery/PSU_2016_minishell2
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Tue Mar 21 19:29:38 2017 Benjamin GAYMAY
** Last update Sat May 20 19:18:09 2017 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "my.h"
#include "minishell2.h"

char		*my_malloc_strcpy(char *s2)
{
  char		*s1;
  int		i;

  if (s2 == NULL)
    return (NULL);
  if ((s1 = my_calloc(my_strlen(s2) + 1, sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  while (s2[i] != '\0')
    {
      s1[i] = s2[i];
      i++;
    }
  return (s1);
}

char		*my_malloc_strcat(char *dest, char *src)
{
  int		i;
  int		f;
  char		*new;

  if (dest == NULL || src == NULL)
    return (NULL);
  i = my_strlen(dest) + my_strlen(src);
  f = 0;
  if ((new = my_calloc(i + 1, sizeof(*new))) == NULL)
    return (NULL);
  i = 0;
  while (dest[i] != '\0')
    {
      new[i] = dest[i];
      ++i;
    }
  while (src[f] != '\0')
    {
      new[i] = src[f];
      ++i;
      ++f;
    }
  return (new);
}

char		*my_pimp_malloc_strcat(char *dest, char *src, char separator)
{
  int		i;
  int		f;
  char		*new;

  if (dest == NULL || src == NULL)
    return (NULL);
  i = my_strlen(dest) + my_strlen(src);
  f = 0;
  if ((new = my_calloc(i + 2, sizeof(*new))) == NULL)
    return (NULL);
  i = -1;
  while (dest[++i] != '\0')
    new[i] = dest[i];
  new[i++] = separator;
  while (src[f] != '\0')
    new[i++] = src[f++];
  free(dest);
  return (new);
}

void		set_int_tab(int *tab, int val)
{
  int		i;

  i = -1;
  while (++i != 4)
    tab[i] = val;
}
