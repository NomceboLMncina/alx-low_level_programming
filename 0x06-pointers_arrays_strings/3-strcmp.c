
#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: less than zero
 * if s1 < s2
 * more than zero
 * if s1 > s2
 * zero 
 * is s1 == s2
 * ---------pseudocode----------
 *  string1 = "dummy"
 *  string2 = "dummy"
 *  FOR LOOP
 *  	if string[i] != string2[i]
 *  		PRINT FALSE
 *  		if string1[i] == end && string2[i] != end
 *  			return -15
 *  		else if string2[i] == end && string1[i] != end
 *  			return 15
 *  	but if string1[i] == string2[i]
 *  		if string1[i] == end && string2[i] == end
 *  			return 0
 *  		keep looping
 */
int _strcmp(char *s1, char *s2)
{
	int i, status;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i]) /* string not equal */
		{
			if (s2[i + 1] == '\0' && s1[i + 1] != '\0')
				status = 15;
			if (s1[i + 1] == '\0' && s2[i + 1] != '\0') /* s1 > s2 */
				status = -15;
		}
		else /* strings equal */
			if (s1[i + 1] == '\0' && s2[i + 1] == '\0') /* all characters equal */
				status = 0;
		i++;
	}
	return (status);
}
