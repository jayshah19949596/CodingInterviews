# Got these problems in HACKERRANK challenge


## 1. Cut the Sticks
-----
You will be given an array of the lengths of a number of sticks.  
When a turn begins, you must count the number of sticks you have.  
Determine the length of a stick with the shortest length and discard any sticks of that length.  
Remove that length from each of the longer sticks and discard the offcuts.  
Repeat until there are no sticks left.   
Return an array where elements are the number of sticks you had at the beginning of each turn.   

For example, consider an array representing the lengths of four sticks `[1, 1, 2, 3]`.  
The shortest sticks are 1 unit long.
Discard them. Remove 1 unit from the other two sticks and discard the scrap.  
Now you have two sticks lengths `[1, 2]`.  
Do the same and you'll have one stick of the length `[1]`.   
Discard it and return an array with the number of sticks you had at the start of each turn `[4, 2, 1] 1.

	lengths    cut length  sticks
	1 1 2 3       1          4
	_ _ 1 2       1          2
	_ _ _ 1       1          1
	_ _ _ _      DONE       DONE


Function Description:
Complete the function `cutSticks` in the editor below.  
The function must return an array of integers representing the number of sticks at the start of each turn.

`cutSticks` has the following parameter(s):   
   lengths[lengths[0], ...., lengths[n-1]]: an array of integers representing the stating stick lengths.
   
Constraints:  
 - 1 <= n <= 1000 
 - 1 <= lengths[i] <= 1000, where 0 <= i < n

Input Format:
The first line contains an integer `n` that represents the total number of elements in the array.
Next `n` lines contains integer values representing the values in the array


	Sample Input 0:
	6
	5
	4
	4
	2
	2
	8
	
	Sample Output 0:
	6
	4
	2
	1
	
	Explanation 0:
	lengths       cut length  sticks
	5 4 4 2 2 8      2          6
	3 2 2 _ _ 6      2          4
	1 _ _ _ _ 4      1          2
	_ _ _ _ _ 3      3          1
	_ _ _ _ _ _     DONE       DONE
		
## 2. Simple queries
-----

Given two array if positive integer, for each element in the second array, find the total number of elements in the first array which are less than or equal to that element.
Store the values determined in an array.
For example, if the first array is `[1, 2, 3]` and the second array is `[2, 4]`, then the there are 2 elements in the first array less than or equal to 2.
There are 3 elements in the first array which are less than or equal to 4.
We can store these answers in an array, answer = [2, 3].

Function Description:
Complete the function `counts`. 
The function must return an array of m positive integers, one for each maxes[i] representing the total number of elements nums[j] satisfying nums[j]<=maxes[i], where 0 <= j < n and 0 <= i < m, in given order

counts has the following parameters:
num[nums[0], ,..., nums[n-1]]: first array of positive integers
maxes[maxes[0], ,..., maxes[n-1]]: second array of positive integers


Constraints:  
- 2 <= n, m <= 100000
- 1 <= nums[j] <= 1000000000, where 0 <= j < n
- 1 <= maxes[i] <= 1000000000, where 0 <= i < m.

		Sample Input 0:
		4
		1
		4
		2
		4
		2
		3
		5
		
		Sample Output 0:
		2
		4
		
		Explanation 0:
		We are given n = 4, nums = [1, 4, 2, 4], m = 2, and maxes = [3, 5].
		1. For maxes[0] = 3, we have 2 elements in nums (nums[0] = 1, and nums[2] = 2) that are <= maxes[0].
		2. For maxes[1] = 5, we have 4 elements in nums (nums[0] = 1, nums[1] = 4, nums[2] = 2, and nums[3] = 4) that are <= maxes[1].
		Thus the function returns the array [2, 4] as the answer.
