# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return head
        else:
            temp = head
        arr = []
        while(temp != None):
            arr.append(temp.val)
            temp = temp.next

        temp = head
        i : int = -1
        while(temp != None):
            temp.val = arr[i]
            temp = temp.next
            i-=1
        return head
        
            
