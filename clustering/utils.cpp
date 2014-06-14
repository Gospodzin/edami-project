#include "src/utils.h"

vector<DensePoint> utils::loadData(std::string fileName)
{
	//TODO mocked
	vector<DensePoint> data;
	// task 3. from the 14L MockTestII :D
	data.push_back(DensePoint(vector<double> { 1, 5}));
	data.push_back(DensePoint(vector<double> { 2, 5}));
	data.push_back(DensePoint(vector<double> { 2, 6}));
	data.push_back(DensePoint(vector<double> { 3, 2}));
	data.push_back(DensePoint(vector<double> { 3, 4}));
	data.push_back(DensePoint(vector<double> { 3, 5}));
	data.push_back(DensePoint(vector<double> { 4, 2}));
	data.push_back(DensePoint(vector<double> { 4, 3}));
	data.push_back(DensePoint(vector<double> { 4, 5}));
	data.push_back(DensePoint(vector<double> { 8, 1}));
	data.push_back(DensePoint(vector<double> { 8, 2}));
	data.push_back(DensePoint(vector<double> { 9, 2}));
	data.push_back(DensePoint(vector<double> { 10, 3}));
	data.push_back(DensePoint(vector<double> { 10, 5}));
	data.push_back(DensePoint(vector<double> { 11, 4}));
	return data;
}

vector<DensePoint> utils::loadDataMichal(std::string fileName)
{
	//TODO mocked
	vector<DensePoint> data;
	// task 3. from the 14L MockTestII :D
	data.push_back(DensePoint(vector<double> { 1, 2}));
	data.push_back(DensePoint(vector<double> { 2, 1}));
	data.push_back(DensePoint(vector<double> { 2, 2}));
	data.push_back(DensePoint(vector<double> { 3, 2}));
	data.push_back(DensePoint(vector<double> { 3, 5}));
	data.push_back(DensePoint(vector<double> { 4, 2}));
	data.push_back(DensePoint(vector<double> { 4, 4}));
	data.push_back(DensePoint(vector<double> { 4, 5}));
	data.push_back(DensePoint(vector<double> { 8, 5}));
	data.push_back(DensePoint(vector<double> { 8, 6}));
	data.push_back(DensePoint(vector<double> { 9, 5}));
	data.push_back(DensePoint(vector<double> { 10, 4}));
	data.push_back(DensePoint(vector<double> { 10, 2}));
	data.push_back(DensePoint(vector<double> { 11, 3}));
	return data;
}

void utils::printVector(vector<double> vec) {
	cout << "(";
	for (unsigned i = 0; i < vec.size(); ++i) {
		cout << vec.at(i);
		if (i < vec.size())
			cout << ",";
	}
	cout << ")";
	cout << endl;
}