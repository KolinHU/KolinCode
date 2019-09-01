/*
给定一个平衡括号字符串 S，按下述规则计算该字符串的分数：

() 得 1 分。
AB 得 A + B 分，其中 A 和 B 是平衡括号字符串。
(A) 得 2 * A 分，其中 A 是平衡括号字符串。
 

示例 1：

输入： "()"
输出： 1
示例 2：

输入： "(())"
输出： 2
示例 3：

输入： "()()"
输出： 2
示例 4：

输入： "(()(()))"
输出： 6

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/score-of-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

int scoreOfParentheses(char * s){
    int len = strlen(s);
	int sum = 0;
	int n = 0;

	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			if (n == 0) {
				n = 1;
			}
			else {
				n = n * 2;
			}
		}
		if (s[i] == ')') {
			if (s[i - 1] == '(') {
				sum += n;
			}
			n = n / 2;
		}
	}

	return sum;
}

