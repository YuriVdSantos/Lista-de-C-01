// #include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0; //index for loop

	while(str[i] != '\0') // while array of the pointer str is diff null
	{
		write( 1, &str[i], 1); // print the position of the array according to index
		i++; // increase 1 on index
	}

}

// int main()
// {
// 	writing("Yuri"); // call the function
// 	return 0;
// }