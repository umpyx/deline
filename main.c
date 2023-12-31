#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[]){
	if (access(argv[1], F_OK) != 0){
		if (argc != 1){
			puts("Usage: deline [FILE]\nRemove all newlines from FILE and print to stdout\nIf no FILE is given, deline processes stdin");
		}
		char buffer = fgetc(stdin);
		while (feof(stdin) == 0){
			switch (buffer){
			case (0x0A):
				break;
			default:
				putchar(buffer);
				break;
		}
		buffer = fgetc(stdin);
		}
		putchar('\n');
		return 0;
	} else {
		if (argc != 2){
			puts("Usage: deline [FILE]\nRemove all newlines from FILE and print to stdout\nIf no FILE is given, deline processes stdin");
		}
		FILE *fp = fopen (argv[1], "r");
		char buffer = fgetc(fp);
		while (feof(fp) == 0){
			switch (buffer){
				case (0x0A):
					break;
				default:
					putchar(buffer);
					break;
			}
		buffer = fgetc(fp);
		}
		putchar('\n');
		return 0;
	}
}
