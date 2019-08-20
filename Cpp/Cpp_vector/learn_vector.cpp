#include <iostream>
#include <vector>

using namespace std;


int main() {
	//Do not use this code in a multi-threaded process.----
	ios_base::sync_with_stdio(false);					//-
	cin.tie(NULL);										//-
	cout.tie(NULL);										//-
	//-----------------------------------------------------
	vector<int> v;

	v.reserve(5); //벡터 v에 int 변수가 5개 들어갈 자리를 미리 할당.

	v.push_back(1);
	v.push_back(2);
	v.push_back(3); //벡터에 순서대로 1, 2, 3 를 입력한다.
	cout << "---- 크기를 5로 할당하고 3개의 원소만 입력한 상태 ----" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << "v.size()의 값 : " << v.size() << endl;
	cout << "v.capacity()의 값 : " << v.capacity() << endl;
	cout << "v.max_size()의 값 : " << v.max_size() << endl;
	//벡터의 capacity 는 미리 예약한 크기인 '5' 이고,
	//현재 3개의 원소가 입력되었기 떄문에 size는 '3'가 된다.

	v.resize(10);
	cout << "------- v.resize(10) 후 결과 -------" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "v.size()의 값 : " << v.size() << endl;
	cout << "v.capacity()의 값 : " << v.capacity() << endl;
	cout << "v.max_size()의 값 : " << v.max_size() << endl;
	//기존에 예약 크기보다 큰 값으로 resize하면 capacity가 증가하고,
	//추가된 크기만큼 원소가 0으로 초기화 된다.
	v.push_back(1);
	v.resize(5);

	cout << "------- v.resize(5) 후 결과 -------" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "v.size()의 값 : " << v.size() << endl;
	cout << "v.capacity()의 값 : " << v.capacity() << endl;
	cout << "v.max_size()의 값 : " << v.max_size() << endl;

	/*
	기존의 capacity 보다 작은 값으로 resize하면 capacity는 변화하지 않는다.
	크기를 초과하는 원소는 제거된다.
	입력데이터의 크기가 확실한경우 reserve를 사용하지만, 보통 새로운 원소가 벡터에 추가되면
	메모리 공간이 추가적으로 할당된다. 따라서 항상 max_size는 동일히다.*/


	v.clear();
	cout << "------- v.clear() 후 벡터 원소 출력해보기 -------" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "아무것도 출력되지 않는다." << endl;

	return 0;
}