
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
bool Include(const char* s, const char c, const char a)
{
	for (int i = 0; s[i] != '\0'; i++)
		if (c == s[i])
			return true;
	return false;
	{
		for (int i = 0; s[i] != '\0'; i++)
		if (a == s[i])
			return true;
		return false;
	}
}


int main()
{
	char s[10] = "none";
	char a = 'on';
	char c = 'no';
	if (Include(s, c, a))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}