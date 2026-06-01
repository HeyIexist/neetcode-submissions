# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        temp = head
        arr = []
        while temp:
            arr.append(temp.val)
            temp = temp.next
        for _ in range(0, len(arr) - 1, 2):
            last = arr[-1]
            for i in range(len(arr)-1, _, -1):
                arr[i] = arr[i-1]
            arr[_+1] = last
        temp = head
        i = 0
        while temp:
            temp.val = arr[i]
            i+=1
            temp = temp.next
