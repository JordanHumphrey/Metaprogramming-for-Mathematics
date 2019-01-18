# Metaprogramming-for-Mathematics
Generalized Template Metaprogramming for faster common mathematics operations
- - - -

Metaprogramming and C++ templates are most often referred to as generic containers, STL, macros, etc. 
They do have hidden qualities, such as the ability to act like a virtual compiler, generating extremely
fast and efficient behavior.

## Fibonacci
- - - -

The fibonacci sequence is a classic example of an algorithm in dire need of improvement to traditional
algorithmic approach. A typical C++, Python, whatever your favorite language is 'programmer would always
pull up the Fib(n) = Fib(n-1) + Fib(n-2). This is computed in Exponential time, it's terrible! A more 
inclined programmer might think to do it iteratively, up to (n), but that still takes linear time. What
solution can possibly beat linear? Metaprogramming is a good place to start, and if done right, its 
done in constant time. 

In the .cpp file provided in the repo, you'll notice quite a few things about the template function for
the Fibonacci Sequence. First, it looks bizarre. Second, its not a function at all. Its a ***recursively 
enumerated integer, computed at compile time***. Using template *specialization <>*, you can handle base
cases with ease.

## Factorial
- - - -

Factorial works the same way, but multiplied!
