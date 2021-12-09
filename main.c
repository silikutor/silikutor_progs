#include <stdio.h>
#include "reverse.h"

int main(int argc, char *argv[]){	
		
	if(argc < 2){		
		reverse(stdin);				
	}
	for(int i=1;i<argc;++i){		
		
		FILE *fp = fopen(argv[i], "r");

		if (NULL != fp)
		{
			reverse(fp);
			fclose(fp);	
		}
		else{
			fprintf(stderr, "File opening unsuccessful!\n");
			return 1;
		}    		
	}   
  	
	return 0;
}