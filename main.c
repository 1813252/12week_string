#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp;
	int i;
	char word[100];
	
	fp=fopen("sample.txt","r");
	
	for(i=0;i<3;i++){
		
	
		fscanf(fp, "%s",word); 
		printf("%s\n",word);

	}
	
	fclose(fp);
	
	
	return 0;
}



