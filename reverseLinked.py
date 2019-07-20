class Node:
  def __init__(self,value):
    self.link = None
    self.value=value
  
class SingleLinked:
  def __init__(self):
    self.head=None
  def insert(self,node):
    elem=Node(node)
    if self.head is None:
      self.head=elem
    else:
      p=self.head
      while p.link is not None:
        p=p.link
      p.link=elem

  def reverseList(self):
    prev=None
    p=self.head
    while p is not None:
      nextN = p.link
      p.link=prev
      prev=p
      p=nextN
    self.head=prev

  def printList(self):
    p=self.head
    while p.link is not None:
      print(p.value)
      p=p.link
    print(p.value)

if __name__ == "__main__":
  linkedList = SingleLinked()
  linkedList.insert(3)
  linkedList.insert(5)
  linkedList.insert(9)
  linkedList.insert(10)
  linkedList.reverseList()
  linkedList.printList()
