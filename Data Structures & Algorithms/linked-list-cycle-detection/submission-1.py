# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        s = set()
        temp = head
        while temp:
            if id(temp) in s:
                return True
            else:
                s.add(id(temp))
            temp = temp.next
        return False