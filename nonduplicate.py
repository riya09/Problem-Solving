def nonduplicate(arr):
  cnt = arr[0]
  for i in range(1,len(arr)):
    cnt = cnt ^ arr[i]
  return cnt

if __name__=="__main__":
  arr = [4,2,1,3,4,3,2]
  print(nonduplicate(arr))

