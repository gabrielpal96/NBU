#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	int n = 0;
	while (cin >> n) {

		//cin.ignore();
		int * v = new int[n];
		string line;
		
		/*while (getline(cin, line))
		{
		
			int d = 0;
			istringstream iss(line);
			int number;		
			while (iss >> number){
				v[d] = number;
				d++;
			}*/
		for (size_t i = 0; i < n; i++)
		{
			cin >> v[i];
		}

			vector<int> longestSubSequence(n);

			for (int i = n - 1; i >= 0; --i) {
				for (int j = i + 1; j < n; ++j) {
					if (v[i] <= v[j]) {
						longestSubSequence[i] = max(longestSubSequence[j], longestSubSequence[i]);
					}
				}
				++longestSubSequence[i];
				//	cout << longestSubSequence[i] << endl;
			}

			cout << *max_element(longestSubSequence.begin(), longestSubSequence.end()) << endl;
			
			//break;
		}



	//}
	return 0;
}
