def is_palindrome(s):
  
    #If reverse string is equal to given string,
    # then it is palindrome.
    return 1 if s == s[::-1] else 0

# Driver code
s = "abba"
print(is_palindrome(s))