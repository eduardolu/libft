
char	*strdup(const char *s1)
{
	char	*dup;
	int		i;

	while(s1[i])
		i++;
	dup = (char *)malloc((i+1)*sizeof(char));
	if(dup == 0)
		return (0);
	i = 0;
	while(s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}