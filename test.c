#include <unistd.h>
#include <stdio.h>
#include <ncurses.h>

int main()
{
  char	buffer[16];
  int	i;
  char	*term;

  //  read(0, buffer, 15);

  setupterm(NULL, 1, (int *)0);

  term = tigetstr("smkx");

  i = 0;
  printf("%d ", term[i++]);
  printf("%d ", term[i++]);
  printf("%d ", term[i++]);
  printf("%d ", term[i++]);
  printf("%d ", term[i++]);

  printf("%d ", term[i++]);
  printf("%d ", term[i++]);
  printf("%d ", term[i++]);


  return (0);

  i = 0;
  printf("%d ", buffer[i++]);
  printf("%d ", buffer[i++]);
  printf("%d ", buffer[i++]);
  printf("%d ", buffer[i++]);
  


}