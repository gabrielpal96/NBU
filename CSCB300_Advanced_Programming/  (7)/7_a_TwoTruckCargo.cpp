/*
7а. [8.2.2]
Сандъци с различно тегло трябва да се разпределят справедливо в два еднакви камиона. Да се направи такова разпределяне, че |a - b| да има най-малка стойност, където a е общото тегло на сандъците в първия камион, а  b - теглото на сандъците във втория камион.

Вход:
На входа се задават теглата на сандъците на един ред. Входът съдържа много примери.

Изход:
За всеки пример на нов ред се отпечатват числата  a и b,  a <= b.

Ограничения:
0 < a,b < 100
Сандъците са по-малко от 25.

Пример:
3 2 3 2 2 77 89 23 90 11

Решение на примера:
136 166

Бележка: Разделяне:
11 + 90 + 23 + 2 + 2 + 3 + 2 + 3 = 136
89 + 77  = 166 
*/
#include <iostream>
#include <string>
#include<vector>
#include <sstream>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <climits>

using namespace std;

const int length = 17000;
int power(int x){
	int sum =2;
	for(int i = 0;i<x;i++)	{
		sum *= 2;
	}	
	return sum;
}
bool ison(int i,int x)
{
 if((i>>x) & 1)return true;
 return false;
}
int main()
{


 //while(true){
  	vector<int> Vec;
 // int cur = 0;
 string line;
  	while(getline( cin, line ))
	{
 	istringstream iss( line );
 	int number;
 	while( iss >> number )
  	Vec.push_back(number);


int * sumOfarr1 = new int[length];
    int * sumOfarr2 = new int[length];
  
   for(int i = 0; i<length;i++){
   	sumOfarr1[i] = 0;
   }
   for(int i = 0; i<length;i++){
   	sumOfarr2[i] = 0;
   }
    int index=0;
  

    for(int i=1;i<length;i++)
    {  
       for(int j=0;j<Vec.size();j++)
       {
          if(ison(i,j))
          {
             sumOfarr1[index]+=Vec[j];
        
          }
          else
          {
             sumOfarr2[index]+=Vec[j];
           
          }
       }index++;
    }
    int ans=INT_MAX;
    int ii;
   for(int i=0;i<index;i++)
   {
      if(abs(sumOfarr1[i]-sumOfarr2[i])<ans)
      {
         ii=i;
         ans=abs(sumOfarr1[i]-sumOfarr2[i]);
     }
  }   
   if(sumOfarr1[ii]<sumOfarr2[ii]){
    	 cout << sumOfarr1[ii] << " " << sumOfarr2[ii];
    }
    else{
    	cout << sumOfarr2[ii] << " " << sumOfarr1[ii];  
    }
     
  cout << endl;
  	delete[] sumOfarr1;
  	delete[] sumOfarr2;
  	Vec.clear();
}
	
    
  
	//	}  
    
    return 0;
}
