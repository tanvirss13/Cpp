//
//  main.cpp
//  Two Sum
//
//  Created by Tanvir Sethi on 5/31/22.
//

#include <iostream>

//This is for 0(n^2) time | 0(1) space
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    for(int i = 0; i < array.size()-1; i++){
        int x = array[i];
        for(int j = i+1; j < array.size(); j++){
            int y = array[j];
            if (x + y == targetSum){
                return vector<int>{x, y};
            }
        }
    }
  return {};
}


// This is for 0(n) time | 0(n) space
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    unordered_set<int> nums;
    for(int i: array){
        int potentialMatch = targetSum - i;
        if(nums.find(potentialMatch) != nums.end()){
            return vector<int>{potentialMatch, i};
        } else {
            nums.insert(i);
        }
    }
  return {};
}




// This is for 0(n(log(n)) time | 0(1) space
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    sort(array.begin(), array.end());
    int left = 0;
    int right = array.size() - 1;
    while(left < right){
        int currentSum = array[left] + array[right];
        if(currentSum == targetSum){
            return {array[left], array[right]};
        } else if(currentSum < targetSum){
            left++;
        } else{
            right--;
        }
    }
  return {};
}






// This is for 0(n) time | 0(n) space to print the indices

#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
    unordered_map<int, int> nums;
    for(int i =0; i<array.size(); i++){
        int in = array[i];
        int potentialMatch = targetSum - in;
        if(nums.count(potentialMatch)){
            return vector<int>{nums.at(potentialMatch),i};
        } else {
            nums.insert(make_pair(in, i));
        }
    }
  return {};
}
