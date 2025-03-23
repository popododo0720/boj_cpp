#include <stdio.h>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
	int n, result = 0;
	char chat[20];
	map<string, int> chat_stat;
	
	scanf("%d", &n);

	for(int i = 0 ; i < n ; i++) {
		scanf("%s", chat);
		string chat_str = chat;
		if(chat_str == "ENTER") {
			result += chat_stat.size();
			chat_stat.clear();
		} else {
			chat_stat[chat_str] = 1;
		}
	}

	result += chat_stat.size();
	printf("%d", result);
}
