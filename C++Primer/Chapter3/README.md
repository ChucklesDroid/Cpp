**Exercise 3.2:** What is a default constructor ?<br>
*A default constructor is used to initialise objects of a class and is called automatically by compiler when memory is allocated to object*<br>

**Exercise 3.3:** Name 3 ways to initialise a string ?<br>
*string s2; //Empty String*<br>
*string s3(s2); //Initializing s3 with s2*<br>
*string s3("Hello"); //Initializing s3 with string literal*<br>
*string s2(n,'c'); //Initialize s2 with n copies of 'c'*<br>

**Exercise 3.4:** What are the values of s and s2?<br>
string s ;<br>
int main(){<br>
	string s2 ;<br>
}<br>
*Both s and s2 are null strings*<br>

**Exercise 3.6:** Explain how whitespace characters are handled in the string input operator and in the getline function ?<br>
*String input operator reads and discards any leading whitespace character and reads untill next whitespace character. Getline on the other hand reads
leading whitespace characters but reads till newline character only, if it encounters newline character initially then it will store an empty string.*



