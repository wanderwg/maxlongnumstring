#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	int maxcount = 0;
	string str, s,ret;
	cin >> str;
	ret.clear();
	size_t i = 0;
	while(i<str.size()){
		while (str[i] >= 48&&str[i] <= 57) {
			count++;
			s += str[i];
			i++;
		}
		if (count > maxcount) {
			maxcount = count;
			count = 0;
			ret = s;
			s.clear();
		}
		else {
			count = 0;
			s.clear();
		}
		i++;
	}
	cout << ret << endl;
	return 0;
}