#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int read(vector< vector<int> > arr;){
//read an hourglass
    int sum1, sum = 0;            // first row, middle, and third row
   
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum1+=arr[i][j]
        }   
    }
    
    sum = sum1 - (arr[i+1][j] + arr[i+1][j+2]); // subtracting the extra from the middle
    return sum;
}

void print(vector< vector<int> > arr(3,vector<int>(3));){
//read an hourglass
    int sum1, sum = 0;            // first row, middle, and third row
   
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           cout << arr[i][j]; 
        }   
    }
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    for(int arr_k = 0;arr_k < 4;arr_k++){
       for(int arr_l = 0;arr_l < 4;arr_l++){
            int sum, max = 0;
            sum = read(arr[arr_k][arr_l]);
            if(sum > max) max = sum;
            print(arr[arr_k][arr_l]);
       }
    }
        
    return 0;
}

