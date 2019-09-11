def sort(a,low,high):
  if low >= high:
    return
  p = partition(a,low,high)
  sort(a,low,p-1)
  sort(a,p+1,high)

def partition(a,low,high):
  i=low+1
  j=high
  pivot = a[low]
  while i <= j:
    while a[i]<pivot and i<high:
      i=i+1
    while a[j]>pivot: 
      j=j-1
    if i<j:
      tmp = a[i]
      a[i]=a[j]
      a[j]=tmp
      i=i+1
      j=j-1
    else:
      break
  a[low]=a[j]
  a[j]=pivot
  return j

nums = [50,45,20,60,74,83,43,68,85,10,89,71]
sort(nums,0,len(nums)-1)
print(nums)
