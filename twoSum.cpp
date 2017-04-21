#include <iostream>
#include <vector>
using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> properpair(2, 0);
	for(int i=0; i < nums.size(); i++)
	{for(int j = 0; j < nums.size(); j++){
		if(nums[i] + nums[j] == target){
			properpair[0] = i;
			properpair[1] = j;
			return properpair;
			}
		else continue;
		}
	}
if((properpair[0] == 0) && (properpair[1] == 0)) cout << "cannot acquire target"; return properpair; ;
}

int main(){
int nums2[] = {15, 7, 11, 3};
vector<int> nums(nums2, nums2 + sizeof(nums2) / sizeof(int) );
int target = 9;

vector<int> properpair(2, 0);


properpair = twoSum(nums, target);


 for (vector<int>::iterator it = properpair.begin(); it != properpair.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

}
