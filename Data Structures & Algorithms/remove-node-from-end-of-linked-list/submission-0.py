# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        count : int = 0
        temp = head
        while temp:
            temp = temp.next
            count+=1
        num : int = count - n
        if num == 0 and head:
            return head.next
        temp = head
        prev = head

        while temp and num  > 0:
            prev = temp
            temp = temp.next
            num-=1
        if prev and temp:
            prev.next = temp.next
        return head
