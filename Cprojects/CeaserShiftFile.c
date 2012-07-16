#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getExtension(char*, char*);

int main(int argc, const char* argv[])
{
	int shift = atoi(argv[1]);
	int byte, i;
	char filename[255];
	char newFilename[255];
	char* ext[25];
	FILE *f_in;
	FILE *f_out;
	
	strcpy(filename, argv[2]);
	strcpy(newFilename, filename);
	getExtension(ext, filename);
	
	if (strcmp(ext, "enc") == 0)
	{
		//We have encrypted file here
		newFilename[strlen(newFilename) - 4] = '\0';
		f_in = fopen(filename, "r");
		strcat(newFilename, ".dec");
		f_out = fopen(newFilename, "w");
		for (i = 0; (byte = getc(f_in)) != EOF; i++)
		{
			fputc(byte - shift, f_out);
		}
	}
	else
	{
		//We want to encrypt this here.
		f_in = fopen(filename, "r");
		strcat(newFilename, ".enc");
		f_out = fopen(newFilename, "w");
		for (i = 0; (byte = getc(f_in)) != EOF; i++)
		{
			fputc(byte + shift, f_out);
		}
	}
	fclose(f_in);
	fclose(f_out);
	return 0;
}

void getExtension(char* ext, char* file)
{
	int i, j = 0;
	for (i = strlen(file) - 1 ; i >= 0; i--)
	{
		if(file[i] == '.')
			break;
		ext[j] = file[i];
		j++;
	}
	ext[j] = '\x0';
	strrev(ext);
	return ext;
}