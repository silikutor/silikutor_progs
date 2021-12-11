#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"

#define MAX_LENGTH 1024	

char **read(FILE *fp, int *ptrLines){
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
}