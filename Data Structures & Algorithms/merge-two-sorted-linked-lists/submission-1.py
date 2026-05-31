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
        
        dummy = ListNode(-1)
        dummyTemp = dummy
        temp1 = list1
        temp2 = list2
        while temp1 and temp2:
            if temp1.val <= temp2.val:
                curr = temp1
                dummyTemp.next = curr
                
                dummyTemp = curr
                temp1 = temp1.next
            else:
                curr = temp2
                dummyTemp.next = curr
                
                dummyTemp = curr
                temp2 = temp2.next
        if not temp1:
            dummyTemp.next = temp2
        if not temp2:
            dummyTemp.next = temp1
        dummyTemp = dummy.next
        return dummyTemp
                

