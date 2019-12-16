# Got these problems in HACKERRANK challenge


## 1. Friend Circles
-----

There are N students in a class. Some of them are friends, while some are not.
Their friendship is transitive in nature, i.e., if **A** is friend of **B** and **B** is friend of **C**, then **A** is also friend of **C**.
A friend circle is a group of students who are directly or indirectly friends.

You have to complete a function `int friendCircles(char[][] friends)` which return the number of friend circles in the class. Its argument, friends, is a `NxN` matrix which consists of characters "Y" or "N".
If `friends[i][j] == "Y" then `i-th` and `j-th` students are friends with each other, otherwise not. You have to return the total number of friend circles in the class.



Constraints
- 1 <= N <= 300.
- Each element of matrix friends will be "Y" or "N".
- Number of rows and columns will be equal in `friends`.
- friends[i][j] = "Y", where 0 <= i < N.
- friends[i][j] = friends[j][i], where 0 <= i < j < N.

		Sample Input 0:
		4
		YYNN
		YYYN
		NYYN
		NNNY
		Sample Output 0:
		2
		
		Explanation 0:
		There are two pairs of friends [0, 1] and [1, 2]. So [0, 2] is also a pair of friends by transitivity.
		So first friend circle contains (0, 1, 2) and second friend circle contains only student 3
		
		Sample Input 1:
		5
		YNNNN
		NYNNN
		NNYNN
		NNNYN
		NNNNY
		Sample output 1:
		5
		
		
		
## 2. String Chains
----

Given an array of words representing your dictionary, you test words to see if it can be made into another word in dictionary. 
This will be done by removing characters one at a time. 
Each word represents its own first element of its string chain, so start with a string chain length of 1. 
Each time you remove a character, increment your string chain by 1. In order to remove a character the resulting word must be in your original dictionary. 
Your goal is to determine the longest string chain available for a given dictionary.



for example, given a dictionary [a, and, an, bear] the word **and** could be reduced to **an** and the word **an** to **a**. 
The single character **a** can not be reduced to any further as the null string is not in the dictionary.
This  would be the longest string chain, having a length 3. The word **bear** can not be reduced at all.



Constraints:

- 1 <= n <= 50000
- 1 <= words[i] <= 60, where 0 <= i <= n
- Each words[i] is composed of lowercase letter in ascii[a-z]


Input: ["a", "b", "ba", "bca", "bda", "bdca"]

Output: 4

Constraints
- 1 <= Length of game <= 100000
- s[i] contains either "1" or "0"

		Sample Input 0:
		6
		a
		b
		ba 
		bca 
		bda 
		bdca 
		
		Sample Output 0:
		4
		
		Explanation 0:
		
		words = ["a", "b", "ba", "bca", "bda", "bdca"]
		the word "bdca" can create four different string chains of length: 4
		("bdca" -> "bda" -> "ba" -> "a", "bdca" -> "bda" -> "ba" -> "b", "bdca" -> "bca" -> "ba" -> "a", "bdca" -> "bca" -> "ba" -> "b")
		This means our current longest string chain is 4
