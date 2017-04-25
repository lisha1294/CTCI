//for loop example: http://stackoverflow.com/questions/22989447/why-cant-i-use-cout-to-print-an-array-of-string-values-in-c
// declaration example: http://stackoverflow.com/questions/20396182/difference-between-new-string-and-new-string-in-java?answertab=votes#tab-top

// iterator example: http://www.cprogramming.com/tutorial/stl/iterators.html
#include<string>
#include<vector>
#include<iostream>
using namespace std;

vector<string> merge(string words[], string more[]){
	vector<string> sentence; 			// intiate a vector
	vector<string>::iterator it;			// initiate iterator
	int i=0;					// integer counts size of words
	for (string::iterator it=words->begin(); it!=words->end(); ++it){i++;}	// loop to count
  	sentence.insert(it, words, words+i);		// insert into sentence
	sentence.insert(sentence.end(), more,more+1);   // second insert into sentence
	return sentence;
}


int main(){
	string s1[] = {"help ", "the ", "team ", "please "};
	string s2[] = {"we need this done"};
	vector<string> sentence; 
	sentence = merge(s1, s2);		

	string::iterator it;
	cout<< sentence.size();
	for(int i = 0; i < sentence.size(); i++) { 
	for(it = sentence[i].begin(); it!=sentence[i].end(); ++it) {
		cout << *it;
			}
	}	
}


