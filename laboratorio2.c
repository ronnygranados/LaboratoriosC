#include <stdio.h>
#include <string.h>

void changePosition(char *caracter1, char *caracter2)
{
  char tmp;
  tmp = *caracter1;
  *caracter1 = *caracter2;
  *caracter2 = tmp;
}
void charPermu(char *cht, int stno, int endno)
{
  int i;
  if (stno == endno)
    printf("%s  ", cht);
  else
  {
      for (i = stno; i <= endno; i++)
      {
        changePosition((cht+stno), (cht+i));
        charPermu(cht, stno+1, endno);
        changePosition((cht+stno), (cht+i)); 
      }
  }
}
 
int main()
{
  char word;

  printf("Ingrese una línea de caracteres: ");
  scanf("%s", &word);
  char string = word;

  int n = strlen(&string);
  printf(" Todas las permutaciones posibles son: \n");
  charPermu(&string, 0, n-1);
  printf("\n");
  return 0;
}
