#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
	
  int k,m;
  scanf("%d%d", &k,&m);

	if (k < 1) k = 1;


  for (int i = k; i <= m; i++)
{
	printf (" %d\n", i);
}

	printf("%d", m-k+1);
	
  return 0;
}