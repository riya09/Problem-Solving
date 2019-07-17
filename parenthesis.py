def matching(opening,closing):
  if opening=='(' and closing==')':
    return True
  elif opening=='{' and closing=='}':
    return True
  elif opening=='[' and closing==']':
    return True
  else:
    return False

def parenthesis(string):
  stack=[]
  for i in string:
    if i=='(' or i=='{' or i=='[':
      stack.append(i)
    elif not stack:
      return False
    elif(matching(stack[-1],i)):
      stack.pop()
    else:
      return False
  return True

print(parenthesis('{[(])}'))
