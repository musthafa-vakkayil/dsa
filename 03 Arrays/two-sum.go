// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.


// this function is O(n^2 complexity)
func twoSum(nums []int, target int) []int {
    var output []int
    for i:=0;i<len(nums);i++{
      for j:=1 ;j<len(nums);j++{
        if nums[i]+nums[j] == target && i!=j{
            output = []int{i, j}
           return output
        }
      }
    }
    return output
}