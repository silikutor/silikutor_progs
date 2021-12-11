#ifndef REVERSE_H
#define REVERSE_H

void reverse(FILE *fp);
char **read(FILE *fp, int *ptrLines);
void write(char **lines, int lineNum);
void memoryFail(void *pMem);

#endif