//for loop example: http://stackoverflow.com/questions/22989447/why-cant-i-use-cout-to-print-an-array-of-string-values-in-c
// declaration example: http://stackoverflow.com/questions/20396182/difference-between-new-string-and-new-string-in-java?answertab=votes#tab-top

// iterator example: http://www.cprogramming.com/tutorial/stl/iterators.html
#include<string>
#include<vector>
#include<iostream>
using namespace std;




//void print(string words[]){
//	string::iterator it;
//	for(int i = 0; i < words->size(); i++) { 				// iterates through every word of words[]
//	for(it = words[i].begin(); it!=words[i].end(); ++it) {cout << *it;}     // iterates through letters of current word
//	cout<< " ";								// adds space between each word
//	}
//}
//int main(){
//	string s1[4] = {"help", "the", "team", "please"};
//	print(s1);
//}



//============================================================================//

vector<string> merge(string words[], string more[]){
	vector<string> sentence; 			// intiate a vector
	vector<string>::iterator it;
	int i=0;
	for (string::iterator it=words->begin(); it!=words->end(); ++it){i++;}
//	while(!words->end()){++i;}
//	sentence(words, words+sizeof(&words)/sizeof(string));	
//	it = sentence.begin();
  	sentence.insert(it, words, words+i); 
//	new vector<string> sentence(words->begin(), words->end());
	//for(string w: more) sentence.add(w);
	return sentence;
}


int main(){
	string s1[] = {"help", "the", "team", "please"};
	string s2[] = {" the  team  please"};
	//string s3[] = {" "};
	vector<string> sentence; 
	sentence = merge(s1, s2);		
//	s3->push_back(merge(s1, s2));
//	merge(s1/*,s2*/);

	string::iterator it;
	cout<< sentence.size();
	for(int i = 0; i < sentence.size(); i++) { 
	for(it = sentence[i].begin(); it!=sentence[i].end(); ++it) {cout << *it;}
	}	
}


