int (*get_specifier_func(const char *specifier))(va_list)
{
	int i = 0;
	sps_t sps[] = {
		{"c", char_func},
		{"s", string_func},
		{NULL, NULL}
	};

	while (sps[i].sp)
	{
		if (sps[i].sp[0] == (*specifier))
			return (sps[i].f);
		i++;
	i}
	return (NULL);
}
