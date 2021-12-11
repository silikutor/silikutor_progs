#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"

#define MAX_LENGTH 1024	

void write(char **lines, int lineNum)
{
  int i;
  for (i = lineNum-1; i >= 0; --i)
  {
    fprintf(stdout, "%d %s\n", i+1, strrev(lines[i]));    
  }
  free(lines);
}	