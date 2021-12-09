#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"

#define MAX_LENGTH 1024	

char **read( FILE *fp, int *pLines);
void write( char **lines, int nLines);
void allocfail( void *ptr);
void reverse(FILE *fp){
	
	int nLines = 0;
	char **lines = read( fp, &nLines);	
	write( lines, nLines); 
}

char **read( FILE *fp, int *pLines){
	int  capacity = 8;
	int  nLines   = 0;
	char buffer[MAX_LENGTH];	
	char **lines = (char **)malloc(capacity * sizeof(char*));
	allocfail(lines);
	while (fgets(buffer, MAX_LENGTH, fp))
	{
		int len = strlen(buffer);
		if ('\n' == buffer[len-1])  
    {
      buffer[len-1] = '\0';    
    }
		if (nLines == capacity)
		{
			capacity *= 2;         
			lines = realloc( lines, capacity * sizeof(char *));
			allocfail(lines);
		}
		lines[nLines] = (char *) malloc(len+1); 
		allocfail(lines);
		strcpy(lines[nLines], buffer);
		++nLines;
		
	}
	*pLines = nLines;  
	return lines;
}

void write(char **lines, int nLines)
{
  int i;
  for (i = nLines-1; i >= 0; --i)  /* sorok */
  {
    fprintf(stdout, "%d. %s:\n", i+1, strrev(lines[i]));    
  }
  free(lines);
}	

void allocfail( void *ptr)
{
  if ( NULL == ptr )
  {
    fprintf(stderr, "Out of memory\n");
    exit(1);    
  }	  
}	
	