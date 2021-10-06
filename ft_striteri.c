void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// -- test code --
// #include <stdio.h>
// #include <string.h>

// void	print_index_char(unsigned int index, char *c)
// {
// 	*c += 1;
// 	printf("char[%u] = %c\n", index, *c);
// }

// int main(void) {
// 	char str[] = "Hello, world!";

// 	printf("str = %s\n", str);
// 	ft_striteri(str, print_index_char);
// }
