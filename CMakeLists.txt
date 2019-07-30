# cmake_minimum_required(VERSION <specify CMake version here>)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

# LinkedList
add_executable(203 "LinkedList/203. Remove Linked List Elements.cpp" "LinkedList/LinkedList.h")
add_executable(206 "LinkedList/206. Reverse Linked List.cpp" "LinkedList/LinkedList.h")
add_executable(234 "LinkedList/234. Palindrome Linked List.cpp" "LinkedList/LinkedList.h")
add_executable(237 "LinkedList/237. Delete Node in a Linked List.cpp" "LinkedList/LinkedList.h")
add_executable(24 "LinkedList/24. Swap Nodes in Pairs.cpp" "LinkedList/LinkedList.h")

# HashTable
add_executable(136 "HashTable/136. Single Number.cpp")
add_executable(202 "HashTable/202. Happy Number.cpp")
add_executable(205 "HashTable/205. Isomorphic Strings.cpp")
add_executable(217 "HashTable/217. Contains Duplicate.cpp")
add_executable(219 "HashTable/219. Contains Duplicate II.cpp")
add_executable(242 "HashTable/242. Valid Anagram.cpp")
add_executable(290 "HashTable/290. Word Pattern.cpp")

# Tree
add_executable(100 "Tree/100. Same Tree.cpp" "Tree/Tree.h")
add_executable(94 "Tree/94. Binary Tree Inorder Traversal.cpp" "Tree/Tree.h")
add_executable(104 "Tree/104. Maximum Depth of Binary Tree.cpp" "Tree/Tree.h")
add_executable(102 "Tree/102. Binary Tree Level Order Traversal.cpp" "Tree/Tree.h")
add_executable(101 "Tree/101. Symmetric Tree.cpp" "Tree/Tree.h")
add_executable(110 "Tree/110. Balanced Binary Tree.cpp" "Tree/Tree.h")
add_executable(111 "Tree/111. Minimum Depth of Binary Tree.cpp" "Tree/Tree.h")


# String
add_executable(13 "String/13. Roman to Integer.cpp")
add_executable(14 "String/14. Longest Common Prefix.cpp")
add_executable(28 "String/28. Implement strStr().cpp")
add_executable(58 "String/58. Length of Last Word.cpp")
add_executable(67 "String/67. Add Binary.cpp")
add_executable(171 "String/171. Excel Sheet Column Number.cpp")

# Stack
add_executable(20 "Stack/20. Valid Parentheses.cpp")
add_executable(155 "Stack/155. Min Stack.cpp")

# Other
add_executable(9 "Other/9. Palindrome Number.cpp")
add_executable(69 "Other/69. Sqrt(x).cpp")