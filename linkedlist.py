from node import Node
class linkedlist:
    def __init__(self):
        self.head = None
    def insert_at_beginning(self,info):
        newNode=Node(info)
        if self.head!=None:
            newNode.link = self.head
            self.head = newNode
        else:
            self.head = newNode

    def insert_at(self,index,info):
        if index>0:
            newNode = Node(info)
            if self.head !=None:
                curr = self.head
                c = 0
                while c<index-1:
                   curr = curr.link
                   c=c+1
                newNode.link = curr.link
                curr.link = newNode
            else:
                if index>0:
                    print('LinkedList is empty')
                else:
                    self.head = newNode
        else:
            self.insert_at_beginning(info)



    def insert_at_end(self,info):
        newNode = Node(info)
        if self.head!=None:
            curr = self.head
            while curr.link!=None:
                curr = curr.link
            curr.link = newNode
        else:
            self.head = newNode

    def delete(self,inf):
        if self.head==None:
            print('Empty List!')
        if self.head.info==inf :
            self.head=None
            return
        else:
            curr = self.head
            while curr.link !=None:
                if curr.link.info==inf:
                    temp = curr.link
                    curr.link = temp.link
                    temp = None
                    return
                curr = curr.link
            print('element not found!')
    def search(self,inf):
        if self.head==None:
            print('List is empty!')
        else:
            c=0
            curr = self.head
            while curr.link!=None:
                c += 1
                if curr.link.info==inf:
                    print('\nelement is found at {0} index.'.format(c))
                curr=curr.link

    def display(self):
        curr = self.head
        while curr!=None:
            print(curr.info,end=' ')
            curr = curr.link

LL = linkedlist()
LL.insert_at_beginning(45)
#print('________________________')
#LL.display()
LL.insert_at_beginning(12)
#print('________________________')
#LL.display()
LL.insert_at_beginning(19)
#print('________________________')
#LL.display()
LL.insert_at_beginning(10)
#print('________________________')
#LL.display()
LL.insert_at(2,5)
#print('________________________')
#LL.display()
LL.insert_at_end(78)
LL.display()
print('\n')
LL.delete(5)
#print('________________________')
LL.display()
LL.search(78)