/*
##      ## #### ########  #### ########     ##    ## ######## ######## 
##  ##  ##  ##  ##     ##  ##     ##        ###   ## ##          ##    
##  ##  ##  ##  ##     ##  ##     ##        ####  ## ##          ##    
##  ##  ##  ##  ########   ##     ##        ## ## ## ######      ##    
##  ##  ##  ##  ##     ##  ##     ##        ##  #### ##          ##    
##  ##  ##  ##  ##     ##  ##     ##    ### ##   ### ##          ##    
 ###  ###  #### ########  ####    ##    ### ##    ## ########    ## 
*/
#include <stdio.h>
#include <time.h>
#define ROWS 20
#define COLS 79

int gen = 0;
int pop = 0;
int popMax = 0;
int popMin = 0;
int tempGrid[ROWS][COLS];

int getUserInput();
void initGrid(int, int, int[ROWS][COLS]);
void processGen(int, int, int[ROWS][COLS]);
int countNbors(int, int, int[ROWS][COLS], int, int);
void printGrid(int, int, int[ROWS][COLS]);
void sleep(unsigned int);

int main()
{
	srand((unsigned int) time(NULL));
	int grid[ROWS][COLS];
	initGrid(ROWS, COLS, grid);
	printGrid(ROWS, COLS, grid);
	
	int i, g;
	g = getUserInput();
	for(i = 0; i < g; i++)
	{
		gen++;
		processGen(ROWS, COLS, grid);
		printGrid(ROWS, COLS, grid);
		sleep(25);
	}
	return 0;
}
//**********************************
int getUserInput()
{
	int g;
	printf("Thanks for playing The Game of Life!\n");
	printf("How many generations do you want to watch? ");
	scanf("%d", &g);
	return g;
}
//*******************************
void initGrid(int rows, int cols, int g[rows][cols])
{
	int i, j, k;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			if(i == 0 || i == (rows - 1) || j == 0 || j == (cols - 1))
				g[i][j] = -1;
			else
			{
				k = rand() % 3;
				if(k == 0)
				{
					g[i][j] = 1;
					pop++;
				}
				else g[i][j] = 0;
			}
		}
	}
	processGen(rows, cols, g);
}
//****************************************
void processGen(int rows, int cols, int g[rows][cols])
{
	int i, j, nbors;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			if(g[i][j] == -1) continue;
			nbors = countNbors(rows, cols, g, i, j);
			
			if(g[i][j] == 1 && (nbors < 2 || nbors > 3))
				tempGrid[i][j] = 0;
			else if((g[i][j] == 0) && (nbors == 3))
				tempGrid[i][j] = 1;	
		}
	}
	
	pop = 0;
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
		{
			if(g[i][j] == -1) continue;
			if(tempGrid[i][j] == 1) pop++;
			g[i][j] = tempGrid[i][j];
		}
	if(pop > popMax) 
		popMax = pop;
	if(pop < popMin || popMin ==0)
		popMin = pop;
	
				
}
//***************************************
int countNbors(int rows, int cols, int g[rows][cols], int x, int y)
{
	int n = 0, i, j;
	for(j = y -1; j < y + 2; j++)
	{
		for(i = x -1; i < x + 3; i++)
		{
			if(i == x && j == y) continue;
			if(g[i][j] != -1) n+= g[i][j];
		}
	}
	return n;
}
//***************************************
void printGrid(int rows, int cols, int g[rows][cols])
{
	system("cls");
	printf("Welcome to the Game of Life -- Generation: %d\n", gen);
	printf("Population: %d (MAX: %d MIN: %d\n", pop, popMax, popMin);
	
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			switch(g[i][j])
			{
				case -1: putchar('\xb2'); break;
				case  0: putchar(' '); break;
				case  1: putchar('\f'); break;
				default: break;
			}
		}
		putchar('\n');
	}
	
}
//**************************************
void sleep(unsigned int mill)
{
	clock_t start = clock();
	while(clock() - start < mill) { }
}


//***************************************