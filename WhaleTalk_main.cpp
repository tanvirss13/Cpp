//
//  main.cpp
//  Whale Talk
//
//  Created by Tanvir Sethi on 5/31/22.
//


#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input = "turpentine and turtle";
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> result;
  for (int i=0; i<input.size(); i++){
    for (int j=0; j<vowels.size(); j++){
      if (input[i]==vowels[j]){
        result.push_back(input[i]);
        if (input[i] == 'e' || input[i] == 'u'){
          result.push_back(input[i]);
        }
      }
    }
  }
for (int k = 0; k<result.size(); k++){
  std::cout << result[k];
}
std::cout << "\n";
}





// OR ################################



//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//  std::string input = "turpentine and turtle.";
//  std::vector<char> vowels;
//  vowels.push_back('a');
//  vowels.push_back('e');
//  vowels.push_back('i');
//  vowels.push_back('o');
//  vowels.push_back('u');
//
//  std::vector<char> whale_talk;
//
//  for (int i=0; i<input.size(); i++){
//    for (int j=0; j<vowels.size(); j++){
//      if (input[i]==vowels[j]){
//        whale_talk.push_back(input[i]);
//        if (input[i] == 'e' || input[i] == 'u'){
//          whale_talk.push_back(input[i]);
//        }
//      }
//    }
//  }
//for (int k = 0; k<whale_talk.size(); k++){
//  std::cout << whale_talk[k];
//}
//std::cout << "\n";
//}
