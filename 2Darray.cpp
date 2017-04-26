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


  


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

  int sum1 =0;
  int sum =0;
  int max = -64;
  int i =0;  
  int j = 0;  
  int k =0;
  int l = 0;
    
    for(int arr_k = 0;arr_k < 4;arr_k++){
       for(int arr_l = 0;arr_l < 4;arr_l++){
                    //summing an hourglass
                     sum =0;
                     sum = arr[arr_k][arr_l] +  arr[arr_k][arr_l+1] + arr[arr_k][arr_l+2] + arr[arr_k+1][arr_l+1] +    
                         arr[arr_k+2][arr_l] +  arr[arr_k+2][arr_l+1] + arr[arr_k+2][arr_l+2];
             
            if(sum > max) 
                {max = sum;
                  sum =0; 
                 
                   //break;
                //for(int k=arr_k; k<arr_k+3; k++){
                //    for(int k=arr_l; k<arr_l+3; k++){
                //    cout << arr[k][l]; 
                //        }   
                //    }
                }  
            
       }
       
    }
     cout << max;
    return 0;
}
