



char *mystrcpy(char *dest, const char *src)
{
	char *ret = dest;
	if(dest != NULL && src != NULL)
	{
		while((*dest++ = *src++) != '\0')
			;
	}
	return ret;
}







