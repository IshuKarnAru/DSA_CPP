/*
when we have to find the total number of set bits in a and b, we can use the bitwise AND operator (&) to find the common set bits between a and b. Then, we can count the number of set bits in the result.

i/p -> a & b
o/p -> total no. of set bits in a and b

Then we can use the following code to find the total number of set bits in a and b:

a = 2 -> 10
b = 3 -> 11

count of set bits in a & b = count of set bits in 10 & 11 = count of set bits in 10 = 1 & count of set bits in 11 = 2

So, total number of set bits in a and b = 1 + 2 = 3
o/p -> 3

*/