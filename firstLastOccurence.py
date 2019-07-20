def firstOccurrence(arr,n,target):
  low=0;
  high=n;
  first = -1
  while low <= high:
    mid = (low + high)//2
    if target == arr[mid]:
      first = mid
      high = mid - 1
    elif target < arr[mid]:
      high = mid - 1
    elif target > arr[mid]:
      low = mid + 1
  return first

def lastOccurrence(arr,n,target):
  low=0;
  high=n;
  last = -1
  while low <= high:
    mid = (low + high)//2
    if target == arr[mid]:
      last = mid
      low = mid + 1
    elif target < arr[mid]:
      high = mid - 1
    elif target > arr[mid]:
      low = mid + 1
  return last

if __name__ == "__main__":
  arr = [100, 150, 150, 153]
  first = firstOccurrence(arr,len(arr)-1,150)
  last = lastOccurrence(arr,len(arr)-1,150)
  index=[first,last]
  print(index)
