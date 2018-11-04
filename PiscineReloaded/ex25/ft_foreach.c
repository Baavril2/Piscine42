void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(f)(tab[i])
		
int	main()
{
	ft_foreach(tab, 1337, &ft_putnbr);
}
