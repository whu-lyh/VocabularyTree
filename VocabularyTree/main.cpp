#include "VocabularyTree.h"

int main() {
	imageRetriver retriver;
	retriver.buildDataBase("F:\\data\\images");
	string queryPath;
	cout << "type in the query image path:" << endl;
	cin >> queryPath;
	vector<string> ans = retriver.queryImage(queryPath.c_str());
	printAns(ans);

	system("pause");
	return 0;
}