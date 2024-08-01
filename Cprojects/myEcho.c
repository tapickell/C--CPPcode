#include <stdio.h>

main(int argc, char* argv[])
{
	register int i, nflg;
	int color = 31;
	int tint = 0;
	int cycle = 0;
	
	nflg = 0;
	if(argc > 1 && argv[1][0] == '-' && argv[1][1] == 'n')
	{
		nflg++;
		argc--;
		argv++;
	}
	for(i = 1; i < argc; i++)
	{
		//fputs(argv[i], stdout);
		printf("\033[%dm%s\033[0m", color, argv[i]);
		if(i < argc - 1)
			putchar(' ');
			if(color < 36)
			{
				color++;
			}
			else
			{
				color = 31;
			}	
	}
	if(nflg == 0)
		putchar('\n');
	return 0;
}
