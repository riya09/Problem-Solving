def two_sum(arr,target):
  sum_map = {}
  for i in arr:
    if target > i:
      num= target - i
    else:
      num = i - target
    if num in sum_map:
      return True
    else:
      sum_map[num]  = True
  return False
if __name__ == "__main__":
  arr = [4, 7, 1 , -3, 2]
  print(two_sum(arr,10))
