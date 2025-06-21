#include <stdio.h>

int main() 
{
	int c, newLine, blankSpace, tab;
	newLine = 0;
	blankSpace = 0;
	tab = 0;

	while((c = getchar()) != EOF){
		if (c == ' '){
			++blankSpace;
		}
		if(c == '\n'){
			++newLine;
		}
		if(c == '\t'){
			++tab;
		}
	}

	printf("\nnewlines: %d\n", newLine);
	printf("blankSpace: %d\n", blankSpace);
	printf("tabs: %d\n", tab);
}
