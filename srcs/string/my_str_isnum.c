/*
** my_str_isnum.c for my_str_isnum in /home/benjamin.g/delivery/CPool_Day06
**
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
**
** Started on  Mon Oct 10 21:45:18 2016 Benjamin GAYMAY
** Last update Wed May 17 10:56:08 2017 Benjamin GAYMAY
*/

int	my_str_isnum(char *str)
{
  int	i;
  int	f;

  i = (str[0] == '-' ? 1 : 0);
  f = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0') || (str[i] > '9'))
	++f;
      ++i;
    }
  return (f != 0 ? 0 : 1);
}
