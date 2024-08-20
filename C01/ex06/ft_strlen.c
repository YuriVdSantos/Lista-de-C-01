
char d;

d = 'a';

int 	c;

int ft_strlen(char *str)
{
	int i = 0; //index for loop

	while(str[i] != '\0') // while array of the pointer str is diff null
	{
		i++; // increase 1 on index
	}

	return i;
}

int main()
{
	return ft_strlen("abc");
}

