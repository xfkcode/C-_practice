#include<iostream>
using namespace std;

//��������ָ�롣
//��һ��ָ��������ͷָ�뿪ʼ������ǰ��k-1���ڶ���ָ�뱣�ֲ�����
//�ӵ�k����ʼ���ڶ���ָ��Ҳ��ʼ�������ͷָ�뿪ʼ������
//��������ָ��ľ��뱣����k-1������һ��������ǰ��ģ�ָ�뵽�������β���ʱ��
//�ڶ���ָ�루���ں���ģ�ָ�������ǵ�����k����㡣
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :val(x), next(NULL) 
    {}
};
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if (pListHead == NULL || k == 0) {
            return NULL;
        }
        ListNode* pAhead = pListHead;
        ListNode* pBehind = pListHead;
        for (unsigned int i = 0; i < k - 1; i++) {
            if (pAhead->next != NULL) {
                pAhead = pAhead->next;
            }
            else {
                return NULL;
            }
        }
        while (pAhead->next != NULL) {
            pAhead = pAhead->next;
            pBehind = pBehind->next;
        }
        return pBehind;
    }
};

int main()
{
	return 0;
	system("pause");
}