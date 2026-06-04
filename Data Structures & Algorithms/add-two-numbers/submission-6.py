# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carr = 0
        # nodes = []
        temp1 = l1
        temp2 = l2
        sol = ListNode(-1)
        dummyNode = sol
        def v(temp1, temp2, carr):
            v1 = temp1.val if temp1 else 0
            v2 = temp2.val if temp2 else 0
            return v1 + v2 + carr
        while temp1 or temp2:
            value : int = v(temp1, temp2, carr)
            val = value % 10 
            # nodes.append(ListNode(val))
            dummyNode.next = ListNode(val)
            dummyNode = dummyNode.next
            carr = value // 10 if value >= 10 else 0
            if temp1:
                temp1 = temp1.next 
            if temp2:
                temp2 = temp2.next
        
        # while temp1:
        #     value = temp1.val + carr
        #     # nodes.append(ListNode(value % 10))
        #     dummyNode.next = ListNode(value % 10)
        #     dummyNode = dummyNode.next
        #     carr = value // 10 if value >= 10 else 0
        #     temp1 = temp1.next
        # while temp2:
        #     value = temp2.val + carr
        #     # nodes.append(ListNode(value % 10))
        #     dummyNode.next = ListNode(value % 10)
        #     dummyNode = dummyNode.next
        #     carr = value // 10 if value >=10 else 0
        #     temp2 = temp2.next
        if carr:
            dummyNode.next = ListNode(carr)
            # nodes.append(ListNode(carr))
        
        # for node in nodes:
        #     dummyNode.next = node
        #     dummyNode = dummyNode.next
        
        return sol.next