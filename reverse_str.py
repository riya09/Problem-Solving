'''Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
Example 1:
Input: "The cat in the hat"
Output: "ehT tac ni eht tah"'''

string = "The cat with a hat"
string_words = string.split(' ');
r=" "
for words in string_words:
  r = r + " " + words[::-1];

print(r)
