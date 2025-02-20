# Data Structures and Algorithms (DSA)

Data Structures are used to organise and store data to use it in an effective way when performing data operations

Algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output. Algorithms are generally created independent of underlying languages, i.e. an algorithm can be implemented in more than one programming language.

## How to start learning Data Structures & Algorithms (DSA)?
The basic steps to learn DSA is as follows:

### Step 1 - Learn Time and Space complexities
Time and Space complexities are the measures of the amount of time required to execute the code (Time Complexity) and amount of space required to execute the code (Space Complexity).

### Step 2 - Learn Different Data Structures
Here we learn different types of data structures like Array, Stack, Queye, Linked List et.

### Step 3 - Learn Different Algorithms
Once you have good undertanding about various data sturtcures then you can start learning associated algorithms to process the data stored in these data structures. These algorithms include searching, sorting, and other different algorithms.

# What is Data Structure?
Data Structure is a systematic way to organize data in order to use it efficiently. Following terms are the foundation terms of a data structure.

1. Interface − Each data structure has an interface. Interface represents the set of operations that a data structure supports. An interface only provides the list of supported operations, type of parameters they can accept and return type of these operations.

2. Implementation − Implementation provides the internal representation of a data structure. Implementation also provides the definition of the algorithms used in the operations of the data structure.

# Execution Time Cases
There are three cases which are usually used to compare various data structure's execution time in a relative manner.

1. Worst Case − This is the scenario where a particular data structure operation takes maximum time it can take. If an operation's worst case time is ƒ(n) then this operation will not take more than ƒ(n) time where ƒ(n) represents function of n.

2. Average Case − This is the scenario depicting the average execution time of an operation of a data structure. If an operation takes ƒ(n) time in execution, then m operations will take mƒ(n) time.

3. Best Case − This is the scenario depicting the least possible execution time of an operation of a data structure. If an operation takes ƒ(n) time in execution, then the actual operation may take time as the random number which would be maximum as ƒ(n).

# Characteristics of an Algorithm
Not all procedures can be called an algorithm. An algorithm should have the following characteristics

1. Unambiguous − Algorithm should be clear and unambiguous. Each of its steps (or phases), and their inputs/outputs should be clear and must lead to only one meaning.

2. Input − An algorithm should have 0 or more well-defined inputs.

3. Output − An algorithm should have 1 or more well-defined outputs, and should match the desired output.

4. Finiteness − Algorithms must terminate after a finite number of steps.

5. Feasibility − Should be feasible with the available resources.

6. Independent − An algorithm should have step-by-step directions, which should be independent of any programming code.

# Algorithm Complexity
Suppose X is an algorithm and n is the size of input data, the time and space used by the algorithm X are the two main factors, which decide the efficiency of X.

1. Time Factor − Time is measured by counting the number of key operations such as comparisons in the sorting algorithm.

2. Space Factor − Space is measured by counting the maximum memory space required by the algorithm.

The complexity of an algorithm f(n) gives the running time and/or the storage space required by the algorithm in terms of n as the size of input data.

# Space Complexity
Space complexity of an algorithm represents the amount of memory space required by the algorithm in its life cycle. The space required by an algorithm is equal to the sum of the following two components

- A fixed part that is a space required to store certain data and variables, that are independent of the size of the problem. For example, simple variables and constants used, program size, etc.

- A variable part is a space required by variables, whose size depends on the size of the problem. For example, dynamic memory allocation, recursion stack space, etc.

Space complexity S(P) of any algorithm P is S(P) = C + SP(I), where C is the fixed part and S(I) is the variable part of the algorithm, which depends on instance characteristic I. Following is a simple example that tries to explain the concept

Algorithm: SUM(A, B)
Step 1 − START
Step 2 − C ← A + B + 10
Step 3 − Stop

Here we have three variables A, B, and C and one constant. Hence S(P) = 1 + 3. Now, space depends on data types of given variables and constant types and it will be multiplied accordingly

# Time Complexity

Time complexity of an algorithm represents the amount of time required by the algorithm to run to completion. Time requirements can be defined as a numerical function T(n), where T(n) can be measured as the number of steps, provided each step consumes constant time.

For example, addition of two n-bit integers takes n steps. Consequently, the total computational time is T(n) = c ∗ n, where c is the time taken for the addition of two bits. Here, we observe that T(n) grows linearly as the input size increases.