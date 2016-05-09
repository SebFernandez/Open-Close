#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main () { 
	int  FLAG = 0;
	char D;
	
	printf ("What do you want to do with the door? (It's closed).\nType 'x' for doing something with the dooor, 'e' for leaving the door.\n\n");
	scanf ("%c", &D);
	if ( D == 'e') {
		FLAG = 1;
	}
	
	while ( FLAG != 1)  {
		printf ("Opening door.\n");
		sleep (3.5);
		printf ("Door opened.\n\n");
		fflush (stdin);
		scanf ("%c", &D);

		if ( D == 'e') {
			FLAG = 1;
		}

		printf ("Closing door.\n");
		sleep (3.5);
		printf ("Door closed.\n\n");
		fflush (stdin);
		scanf ("%c", &D);

		if ( D == 'e') {
			FLAG = 1;
		}

		scanf ("%c", &D);					
	}	
	
	printf("\n\nGoodbye!\n\n");
	system ("pause");
}
