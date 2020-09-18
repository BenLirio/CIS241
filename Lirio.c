#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()   
{
		char ch;
		FILE *in, *out;

		in = fopen ("input.txt","r" );
		out = fopen ("output.txt", "w" );

		if ( in == NULL || out == NULL )	
		{
				printf ( "file could not be opened!\n" );
				exit (1);
		}
		while ( ! feof(in) )   {
				fscanf ( in, "%c", &ch );
				if ( isupper(ch) ) {
					fprintf ( out, "%c", tolower(ch) );
				} else {
					fprintf ( out, "%c", toupper(ch) );
				}
		}

		fclose(in);
		fclose(out);

		return 0;
}

