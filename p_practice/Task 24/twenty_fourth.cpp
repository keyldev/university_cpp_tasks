#include <iostream>
using namespace std;

size_t string_length(const char* string)
{
	int counter = 0; int i = 0;
	while (string[i] != '\0')
	{
		counter++;
		i++;
	}
	return counter;
}
int string_compare(const char* string1, const char* string2)
{
	int flag,counter1,counter2;
	flag = counter1 = counter2 = 0; int i = 0;
	while (string1[i] != '\0')
	{
		counter1++;
		i++;
	}
	i = 0;
	while (string2[i]!= '\0')
	{
		counter2++;
		i++;
	}
	if (counter1 < counter2) flag = -1;
	else if (counter1 > counter2) flag = 1;
	else if (counter1 == counter2) flag = 0;
	return flag;
}
char* string_string(char* string1, const char* string2)
{
	
	for (int i = 0; i < string_length(string1); i++)
	{
		int k = 0,c = 0;
		if (string1[k] == string2[k])
		{
			k++;
			while ((string1[i+1] == string2[k]) && (k < string_length(string2)))
			{
				c++;
				k++;
			}
			if (c == string_length(string2))
				return &string1[i];
		}
	}
	return nullptr;
}
char* string_cat(char* destptr, const char* srcptr)
{
	int k = string_length(destptr);
	int s_k = string_length(srcptr);
	for(int i = 0; i < s_k;i++)
	destptr[k+i] = srcptr[i];
	destptr[k + s_k] = '\0';
	return destptr;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	char str1[128];
	char str2[128];
	cin.getline(str1, 128);
	cin.getline(str2,128);
	cout << string_length(str1)<< ' ' <<string_length(str2) << endl;

	if (string_compare(str1, str2) < 0) cout << "Строка 1 меньше строки 2" << endl;
	else if (string_compare(str1, str2) > 0) cout << "Строка 1 больше строки 2" << endl;
	else if (string_compare(str1, str2) == 0) cout << "Строки равны" << endl;

	int i = 0;
	if (string_string(str1, str2)) while (&str1[i] != string_string(str1, str2))i++;
	else i = -1;
	cout << i << endl;
	cout << string_cat(str1, str2) << endl;
    return 0;
}
