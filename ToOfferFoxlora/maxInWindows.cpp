#include <iostream>
#include <deque>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size) {
		vector<int> res;
		if (num.size() == 0 || size < 1 || num.size() < size) return res;

		unsigned int n = num.size();

		deque<int> dq;
		for (unsigned int i = 0; i < n; i++)
		{
			//���������Ϊ�գ����õ�ǰԪ�غ����������һ��Ԫ�رȽϣ�������ڣ������������һ��Ԫ��ɾ����Ȼ���������ǰԪ�غ����������һ��Ԫ�رȽ�
			while (!dq.empty()&& num[dq.back()]<num[i])
			{
				dq.pop_back();
			}
			dq.push_back(i);
			//�ж϶��е�ͷ���±��Ƿ����
			if (dq.front() + size <= i)
			{
				dq.pop_front();
			}
			//�ж��Ƿ��γ��˴���
			if (i+1 >= size)
			{
				res.push_back(num[dq.front()]);
			}
		}

		return res;
	}
};


int main() {
	Solution s;
	vector<int> c({ 1,2,3,4 });
	vector<int> res = s.maxInWindows(vector<int> {2, 3, 4, 2, 6, 2, 5, 1},3);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << endl;
	}
}