# cpp_project
 Learn C++ language from its basics up to the newest features introduced by C++11, a practical orientation with example programs. 

A. Structure of a program

1. Two slash signs // : a comment
2. A hash sign # : directives, read and interpreted by preprocessor.
3. A blank line: no effect on a program.
4. int main() : the declaration of a function.
5. a. Open brace { : the beginning of main's function definition
   b. Closing brace } : its end.
6. a. std::cout<<"Hello World!"; : C++ statement.
   b. std::cout : the standard character output device
   c. insertion operation << : what follows is inserted into std::cout
   d. A sentence within quotes ("Hello world!") : the content inserted into the standard output.
   e. a statement ends with a semicolon ; : marks the end of the statement. 

II. Comments 
1. a. Line comment: a pair of slash signs. 
   b. Block comment: characters /* and */

III. Using namespace std
1. a. Unqualified name cout :   part of the standard library
   b. Qualified name std::cout : qualifies itself directly within the namespace std.
2. namespace std : all the elements in the standard C++ library are declared within that.
   a. Qualify every use of the library
   b. Introduce visibility of its components
   c. The declaration using namespace std; : 
	allows all elements in the std namespace to be accessed in an unqualified manner.
   d. explicit qualification and *using* declarations


B. Variables and types

I. Identifiers
1. Valid identifier : a sequence of one or more letters, digits, or underscore characters.
	a. Spaces, punctuation marks, and symbols cannot be part of an identifier.
	b. Shall always begin with a letter.
	c. Beginning with an or two underline characters(_) is on most cases considered for compiler-specific keywords, or external identifiers.
	d. In no case can they begin with a digit.

2. The standard reserved 56 keywords to identify operations and data descriptions are :
	（1）






