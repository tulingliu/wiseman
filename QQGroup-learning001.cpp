#include <iostream>
#include <string>
using namespace std;
int main(){
	int t[256];
	string s; int i;
	cin>>s;
	for (i=0;i<256;i++) t[i]=0;
	for (i=0;i<s.length();i++) t[s[i]]++;
	for (i=0;i<s.length();i++){
		if (t[s[i]]==1){
			cout <<s[i]<<endl;
		}
	}
	return 0;
	cout <<"no"<<endl;
	return 0;
}
/*统计字符串中字符出现的次数，输出只出现过一次的字符
t[s[i]]++是指某个字符出现的累计次数+1 
*/
