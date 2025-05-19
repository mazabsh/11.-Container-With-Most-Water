#include<iostream> 
#include<vector>
#include<algorithm> 

using namespace std; 

class Solution{
public: 
      int maxArea(vector<int>& height){
        int n = height.size(); 
        int area = 0; 
        int max_area = 0;
        int left =0; 
        int right = n-1; 
        while(left<right){
          int h = min(height[left],height[right]); 
          area = h*(right-left); 
          max_area = max(max_area, area);
          if(height[left]<height[right]) ++left; 
          else --right; 
        }
        return max_area; 
        
      }
};
int main(){
  vector<int> height = {1,8,6,2,5,4,8,3,7}; 
  Solution sol; 
  int answer = sol.maxArea(height); 
  cout << "The maximum water container is:" << answer << endl; 
  return 0; 
}
