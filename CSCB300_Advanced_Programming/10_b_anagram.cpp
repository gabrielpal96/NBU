/*
 10b.
Низът X е анаграма на низа Y, ако X може да бъде получен от разместването на символите на Y. Например всеки от низовете "baba", "abab", "aabb" и  "abba" е анаграма на "aabb", а низовете "aaab", "aab" и "aabc" не са анаграми на "aabb".
По зададено множество от низове S да се намери най-голямото му подмножество, в което няма два или повече низа, които да са анаграми един на друг.

Вход:
Всеки тестов пример е зададен на стандартния вход с един непразен ред, съдържащ низовете от S, разделени с един или няколко интервала. Всяко множество S съдържа между 1 и 50 низа, всеки от които е с дължина от 1 до  50.

Изход:
За всеки тестов пример на стандартния изход да се изведе по едно число – броя на низовете в исканото подмножество.

Пример:
abcd abac aabc bacd
wlrb m bhc arz wk yhi dqs dxr mowfr        sjyb
ab                                         ba
z    

Решение на примера:
2
10
1
1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    vector<string> anagram;
    string word;

    while(getline(cin,word)){
    istringstream input(word);
    string word;
    while(input >> word) {
      sort(word.begin(), word.end());
      anagram.push_back(word);
    }
        sort(anagram.begin(), anagram.end());
        int cnt = 1;
        for(int i = 0; i < anagram.size()-1;i++){
            if(anagram[i]!=anagram[i+1])
                cnt++;
        }
        cout << cnt<< endl;
        anagram.clear();
    }

	return 0;
}