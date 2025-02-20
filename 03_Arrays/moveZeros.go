package main

func moveZeroes(nums []int) {
	nonZeroIndex := 0

	for i := 0; i < len(nums); i++ {
		if nums[i] != 0 {
			temp := nums[i]
			nums[i] = nums[nonZeroIndex]
			nums[nonZeroIndex] = temp
			nonZeroIndex++
		}
	}
}
