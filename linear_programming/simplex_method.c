#include <stdio.h>

#define NUM_CON 3 // toto su riadky tabulky
#define NUM_VAR 4 // toto su stlpce tabulky

int find_pivot_column(double tableau)
{
	int pivot_col = 1;
	for (int j = 2; j < NUM_VAR; j++)
	{

		// Tu najdi minimalny prvok
		if (tableau[NUM_CON - 1][j] < tableau[NUM_CON - 1][pivot_col])
		{
			pivot_col = j;
		}
	}
	return pivot_col;
}


int find_pivot_row(double tableau) {
	int pivot_row = 1; 
	int min_ratio = -1; 

	for (int i = 0 ;i < NUM_CON;i++){
		if (tableau[i][pivot_col]>0){
			double ratio = tableau[i][NUM_VAR-1]/ tableau[i][pivot_col]; 
		}	

	}

}

int main()
{
	double tableu[MAX_TABLE_ROW][MAX_TABLE_COL];
}