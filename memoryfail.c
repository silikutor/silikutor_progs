#include <stdio.h>
#include <stdlib.h>
#include "reverse.h"



void memoryFail(void *pMem)
{
  if (NULL == pMem)
  {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(1);    
  }	  
}	