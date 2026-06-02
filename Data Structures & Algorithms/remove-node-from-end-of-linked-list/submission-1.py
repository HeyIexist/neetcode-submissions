# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp = head
        while temp and n > 0:
            temp = temp.next
            n-=1
        
        prev = start = head
        while temp and start:
            temp = temp.next
            prev = start
            start = start.next
        if prev and start:
            prev.next = start.next
        if prev == start and head:
            return head.next
        return head
