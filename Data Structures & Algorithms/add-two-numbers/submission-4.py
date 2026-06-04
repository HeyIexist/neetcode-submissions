# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carr = 0
        nodes = []
        temp1 = l1
        temp2 = l2

        while temp1 and temp2:
            value : int = (temp1.val + temp2.val + carr)
            val = value % 10 
            nodes.append(ListNode(val))
            carr = value // 10 if value >= 10 else 0
            temp1 = temp1.next
            temp2 = temp2.next
        
        while temp1:
            value = temp1.val + carr
            nodes.append(ListNode(value % 10))
            carr = value // 10 if value >=10 else 0
            temp1 = temp1.next
        while temp2:
            value = temp2.val + carr
            nodes.append(ListNode(value % 10))
            carr = value // 10 if value >=10 else 0
            temp2 = temp2.next
        if carr:
            nodes.append(ListNode(carr))
        sol = ListNode(-1)
        dummyNode = sol
        for node in nodes:
            dummyNode.next = node
            dummyNode = dummyNode.next
        
        return sol.next