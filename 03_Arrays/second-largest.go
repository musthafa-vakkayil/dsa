package main

import (
	"fmt"
	"sort"
)

func secondLargest(nums []int) int {
	if len(nums) == 0 {
		return -1
	}

	sort.Ints(nums)
	max := 0
	secondMax := 0

	for i := 0; i < len(nums); i++ {
		if nums[i] >= max {
			secondMax = max
			max = nums[i]
		}
	}

	if max == secondMax {
		return -1
	}

	return secondMax
}

func main() {
	nums := []int{10, 5, 10}

	fmt.Println("Second Maximum", secondLargest(nums))
}
