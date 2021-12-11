#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"
#include "read.c"
#include "write.c"
#include "memoryfail.c"

#define MAX_LENGTH 1024	

/*char **read(FILE *fp, int *ptrLines);
void write(char **lines, int lineNum);
void memoryFail(void *pMem);*/
void reverse(FILE *fp){
	
	int lineNum = 0;
	char **lines = read(fp, &lineNum);	
	write(lines, lineNum); 
}

/*char **read(FILE *fp, int *ptrLines){
	int  capacity = 8;
	int  lineNum  = 0;
	char buffer[MAX_LENGTH];	
	char **lines = (char **)malloc(capacity * sizeof(char*));
	memoryFail(lines);
		while (fgets(buffer, MAX_LENGTH, fp))
	{
		int len = strlen(buffer);
	if ('\n' == buffer[len-1])  
    {
      buffer[len-1] = '\0';    
    }
		if (lineNum == capacity)
		{
			capacity *= 2;         
			lines = realloc( lines, capacity * sizeof(char *));
			memoryFail(lines);
		}
		lines[lineNum] = (char *) malloc(len+1); 
		memoryFail(lines);
		strcpy(lines[lineNum], buffer);
		++lineNum;
		
	}
	*ptrLines = lineNum;
	
	return lines;
}*/

/*void write(char **lines, int lineNum)
{
  int i;
  for (i = lineNum-1; i >= 0; --i)
  {
    fprintf(stdout, "%d %s:\n", i+1, strrev(lines[i]));    
  }
  free(lines);
}*/

/*void memoryFail(void *pMem)
{
  if (NULL == pMem)
  {
    fprintf(stderr, "Memory allocation failed.\n");
    exit(1);    
  }	  
}*/
	