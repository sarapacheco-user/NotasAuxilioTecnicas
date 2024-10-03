#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string soParentesis(string stringInput) {
	string stringPura;
	for(char c : stringInput) {
		if(c == '(' || c == '[' || c == '('||
		        c == '{' || c == ')' || c == ']' ||
		        c == '}' ) {
			stringPura.push_back(c);
		}
	}
	return stringPura;
}
void seEncostamTira(string stringPura) {
	if (!stringPura.empty() && stringPura[0] == ')' || stringPura[0] == ']' ||stringPura[0] == '}') {
		cout << "SyntaxError" << endl;
		return;
	}
	
	bool mudou = true;
	while(mudou) {
		mudou = false;
		for(size_t i = 0; i < stringPura.size(); i++ ) {
			if (i + 1 < stringPura.size()) {
				char atual = stringPura[i];
				char proxima = stringPura[i + 1];
 
				if ((atual == '(' && proxima == ')') || 
				    (atual == '[' && proxima == ']') ||
				    (atual == '{' && proxima == '}')) {
					stringPura.erase(i,2);
					mudou = true;
					break;
				}
			}
		}
	}
	if(stringPura.empty()) {
		cout << "OK" << endl;
		return;
 	} else {
 		cout << "SyntaxError" << endl;
 	}
}
 
 
int main()
{
	string stringInput;
	cin >> stringInput;
	string stringPura;
    stringPura = soParentesis(stringInput);
 
	seEncostamTira(stringPura);
 
 
	return 0;
}
