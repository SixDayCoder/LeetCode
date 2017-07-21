
/*
描述:给定句子,能否仅使用键盘上同一行的字母完成输入
提示：本质上还是字符、字符串搜索,使用hash
*/


class Solution {
private:
	map<char, int> hashtable;

	void initHash() {
		//first row
		hashtable['q'] = 1; hashtable['w'] = 1; hashtable['e'] = 1; hashtable['r'] = 1;
		hashtable['t'] = 1; hashtable['y'] = 1; hashtable['u'] = 1; hashtable['i'] = 1;
		hashtable['o'] = 1; hashtable['p'] = 1;
		hashtable['Q'] = 1; hashtable['W'] = 1; hashtable['E'] = 1; hashtable['R'] = 1;
		hashtable['T'] = 1; hashtable['Y'] = 1; hashtable['U'] = 1; hashtable['I'] = 1;
		hashtable['O'] = 1; hashtable['P'] = 1;
		//second row
		hashtable['a'] = 2; hashtable['s'] = 2; hashtable['d'] = 2; hashtable['f'] = 2;
		hashtable['g'] = 2; hashtable['h'] = 2; hashtable['j'] = 2; hashtable['k'] = 2;
		hashtable['l'] = 2;
		hashtable['A'] = 2; hashtable['S'] = 2; hashtable['D'] = 2; hashtable['F'] = 2;
		hashtable['G'] = 2; hashtable['H'] = 2; hashtable['J'] = 2; hashtable['K'] = 2;
		hashtable['L'] = 2;
		//third row
		hashtable['z'] = 3; hashtable['x'] = 3; hashtable['c'] = 3; hashtable['v'] = 3;
		hashtable['b'] = 3; hashtable['n'] = 3; hashtable['m'] = 3;
		hashtable['Z'] = 3; hashtable['X'] = 3; hashtable['C'] = 3; hashtable['V'] = 3;
		hashtable['B'] = 3; hashtable['N'] = 3; hashtable['M'] = 3;
	} 
public:
	vector<string> findWords(vector<string>& words) {
		vector<string> result;

		initHash();

		for (int i = 0; i < words.size(); ++i) {
			int rowCount = hashtable[words[i][0]];
			bool find = true;
			for (int j = 1; j < words[i].size(); ++j) {
				if (hashtable[words[i][j]] != rowCount) {
					find = false;
					break;
				}
			}
			if (find) result.push_back(words[i]);
		}

		return result;
	}
};