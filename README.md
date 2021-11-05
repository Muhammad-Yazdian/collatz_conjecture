# Collatz Conjecture
Collatz conjecture (a.k.a. 3n+1 conjecture) is a sequence of numbers that regardless of an initial value it always falls in a 4-2-1 loop. The conjecture rules are:

1. Pick any positive integer number n
2. If n is  
   even, then **n = n / 2**  
   odd, then **n = 3 * n + 1**

Despite its simple rules, the Collatz conjecture is still **an unsolved mathematic problem**!

**Paul Erdős** said:
> Mathematics may not be ready for such problems.

# This Branch
- Using back propagation, we are interested to find the structure of the ending
sequence (e.g. 4, 2, 1).  
- To do so, we can simply reverse the original rules:  
  - n = 2 * n or  
  - n = (n - 1) / 3
- We will apply both rules to every number but check the validity of operatioin.
- Thus starting from 1, we will have two branches
  - Branch A: 1, 2, 4, ...
  - Branch B: 1, 0 (invalid branch)
- Next, we can further propegate branch A which is formulated in this code.

# More
- Proposed by Lothar Collatz in 1937
- [More about Collatz Conjecture on Wikipedia](https://en.wikipedia.org/wiki/Collatz_conjecture)
- [List of unsolved problems in mathematics](https://en.wikipedia.org/wiki/List_of_unsolved_problems_in_mathematics)
