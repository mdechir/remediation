#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>

void mdp(char str[100]);
void main(int argc, char *argv[]) {
	char str[100];
	mdp(str);
	printf("\n Votre mdp etait %s", str);
	getch ();
}

void mdp(char str[100]) {
	int i;
	printf("Votre mdp :");
	str[100];
	i=0;
	while((str[i]=getch())!=13){
		printf("*");
		i++;
	}
}