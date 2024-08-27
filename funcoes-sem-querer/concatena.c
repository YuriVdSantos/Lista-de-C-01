char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = n;
	while (n != 0 && *src != '\0')
	{
		*dest = *src;
		n--;
		*dest++;
		*src++;
	}

	while (n != 0)
	{
		*dest = '\0';
		n--;
	}
	
	
}

int	main()
{
	unsigned int num = 4;
	char fonte[6] = "123456";
	char destino[9] = "123456789";
	printf("String fonte: %s\n", fonte);
	printf("String destino: %s\n\n", destino);

	ft_strncpy(destino, fonte, num);

	printf("String destino após a cópia ser realizada:\n");
	printf("%s\n", destino);

}