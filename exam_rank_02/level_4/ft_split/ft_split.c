#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i;
	int	pw;
	int	pl;
	char **split;

	i = 0;
	pw = 0;
	pl = 0;	
	if (!str)
		return (NULL);
	// reserve space for a maximum of 256 words.
	if(!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	
	// skip the spaces, tabs or newlines in the beginning by making the index positioning of the string itself plus one.
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;

	// while the string exists
	while (str[i])
	{	
		//start the word therefore start its positioning
		pw = 0;
		// allocate memory for the list of words that should have 4096 characters maximum
		if(!(split[pl] = (char *)malloc(sizeof(char *) * 4096)))
			return (NULL);
		// while the thing found IS A LETTER AND NOT A SPACE TAB OR NEW LINE, copy to the 'position list's position word' every character of the string.
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[pl][pw++] = str[i++];
		

		// Find space, tab or newline and skip it to return the next word
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		       i++;
		split[pl][pw] = '\0';
		pl++;	
	}
	// reset list
	split[pl] = NULL;
	return (split);
}

/*
int main(void)
{
    char **words;
    char str[] = "  Hello   world!   How  are you?  ";
    int i = 0;

    words = ft_split(str);
    if (!words)
    {
        printf("Memory allocation failed!\n");
        return (1);
    }

    while (words[i])
    {
        printf("Word %d: %s\n", i, words[i]); // Print each word
        i++;
    }

    return (0); // No free() since you can't use it
}
*/
