#include <bits/stdc++.h>
using namespace std;

unsigned long long int maiusc (char charac) {
	if (charac >= 97) {
		return 0;
	} else {
		return 1;
	}
}

int main (void) {
    
    
    
	unsigned long long int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string r, s;
		cin >> r >> s;
		string result;
		
		string Final;
		for (int j = 0; j < r.size(); j++) {
			int cR = maiusc(r[j]);
			
			int cS = maiusc(s[j]);

			if (cR == cS) {
				result.push_back( r[j]);
				if (result[j] >= 97) {
				    
					result[j] = result[j] - 32;
				}
			} else {
				result.push_back(r[j]);
				if (result[j] <= 90) {
					result[j] = result[j] + 32;
				}
			}
  
			Final  += result[j];
		} 

		cout <<  Final << endl;
		
	}

	return 0;
}
