typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void  fill(char **tab, t_point size, t_point begin, char to_fill, char c)
{

	if (begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
		return;
	if (tab[begin.y][begin.x] != to_fill)
		return;

	tab[begin.y][begin.x] = c;

	fill(tab, size, (t_point){begin.x, begin.y + 1}, to_fill, c);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, to_fill, c);
	fill(tab, size, (t_point){begin.x + 1, begin.y}, to_fill, c);
	fill(tab, size, (t_point){begin.x - 1, begin.y}, to_fill, c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char	to_fill;
	char	c;

	to_fill = tab[begin.y][begin.x];
	c = 'F';

	fill(tab, size, begin, to_fill, c);
}


//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>


// ### MAIN 1###

/*int main(void)
{
	t_point size = {8, 5};
	t_point begin = {0, 0};

    char **area;
	area = malloc(sizeof(char *) * (size.y + 1));
	area[0] = strdup("11111111");
	area[1] = strdup("10001001");
	area[2] = strdup("10010001");
	area[3] = strdup("10110001");
	area[4] = strdup("11100001");
	area[5] = NULL;
	for (int i = 0; i < size.y; i++)
		printf("%s\n", area[i]);
	flood_fill(area, size, begin);
	printf("\n");
	for (int i = 0; i < size.y; i++)
		printf("%s\n", area[i]);
	return (0);
} */


// ## MAIN 2 ##


/* 
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
	{
		printf("%s\n", area[i]);
		free(area[i]);
	}
	free (area);
	return (0);
}
*/
