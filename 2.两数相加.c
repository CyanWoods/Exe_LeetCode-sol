/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{   
    struct ListNode *head = NULL, *tail = NULL;     //设置哑节点作为头尾节点
    int carry = 0;                                  //设置进位
    while (l1 || l2)                                //当两个链表均没有到达哑节点
    {
        int n1 = l1 ? l1->val : 0;                  //结构体非空—保存数值；结构体为空-定义为零            
        int n2 = l2 ? l2->val : 0;                  
        int sum = n1 + n2 + carry;                  //相加
        if (!head) 
        {
            head = tail = malloc(sizeof(struct ListNode));
            tail->val = sum % 10;
            tail->next = NULL;
        } 
        else 
        {
            tail->next = malloc(sizeof(struct ListNode));
            tail->next->val = sum % 10;
            tail = tail->next;
            tail->next = NULL;
        }
        carry = sum / 10;

        if (l1) 
        {
            l1 = l1->next;
        }
        if (l2) 
        {
            l2 = l2->next;
        }
    }
    
    if (carry > 0) 
    {
        tail->next = malloc(sizeof(struct ListNode));
        tail->next->val = carry;
        tail->next->next = NULL;
    }
    return head;
}



