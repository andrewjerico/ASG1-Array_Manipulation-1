int strlen(char *str)
{
	int idx = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		idx++;
	}
	return idx;
}

bool strcmp(char *str1, char *str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (str1[i] != str2[i])
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}

	for (int i = 0; i < len1; i++)
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] += 32;
		}
	}
	str1[0] -= 32;
	return false;
}
