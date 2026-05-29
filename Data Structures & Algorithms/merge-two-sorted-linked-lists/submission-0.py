# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        if not list2:
            return list1
        temp1 = list1
        arr : list = []
        while temp1:
            arr.append(temp1.val)
            temp1 = temp1.next
        temp2 = list2
        while temp2:
            arr.append(temp2.val)
            temp2 = temp2.next
        arr.sort()
        temp1 = list1
        while(temp1):
            if temp1.next == None:
                break
            temp1 = temp1.next
        if temp1:
            temp1.next = list2
        temp2 = list1
        i = 0
        while temp2:
            temp2.val = arr[i]
            i+=1
            temp2 = temp2.next
        return list1
