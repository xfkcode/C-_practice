#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//ͨ������������£����ǲ�ϣ���޸�ԭ����Ľṹ��
//����һ���������������Ǿ���ġ�����ȳ��������ǿ���ʹ��ջʵ������˳��
//ÿ����һ������ʱ�򣬰Ѹý��ŵ�һ��ջ�С�
//������������������ٴ�ջ����ʼ����������ֵ����һ���µ�����ṹ�����������ʵ���˷�ת��
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) 
    {
        stack<int> nodes;
        vector<int> result;
        ListNode* node = head;
        while (node != NULL) 
        {
            nodes.push(node->val);
            node = node->next;
        }

        while (!nodes.empty()) 
        {
            result.push_back(nodes.top());
            nodes.pop();
        }
        return result;
    }
};
int main()
{
    ListNode node2(2);
    ListNode node1(1);
    node1.next = &node2;
    ListNode head(0);
    head.next = &node1;
    Solution s;
    s.printListFromTailToHead(&head);
    return 0;
}