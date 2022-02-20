#include <iostream>
#include <string>

using namespace std;

void true_false(bool p, bool q) {

	bool result = false;
	bool result_xnor_1 = false;
	bool result_xnor_2 = false;
	bool p_implication = false;
	bool q_implication = false;

	//-------AND(Conjunction)(∧)-------

	if (p == q && p == true){
		result = true;
	}
	else {
		result = false;
	}
	cout << "AND(Conjunction)(∧): ";
	if (result) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	//-------OR(Disjunction)(∨)-------

	if (p == q && p == false) {
		result = false;
	}
	else {
		result = true;
	}
	cout << "OR(Disjunction)(∨): ";
	if (result) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	//-------XOR(Strict Disjunction)(⊕)-------

	if (p != q) {
		result = true;
	}
	else {
		result = false;
	}
	cout << "XOR(Strict Disjunction)(⊕): ";
	if (result) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	//-------NOTOR(Implication)(→)-------
	
	if (p == false) {
		p_implication = true;
	}
	else {
		p_implication = false;
	}

	if (p_implication == q && p_implication == false) {
		result = false;
	}
	else {
		result = true;
	}
	cout << "NOTOR(Implication)(→): ";
	if (result) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	//-------NOTOR(Reverse Implication)(←)-------

	if (q == false) {
		q_implication = true;
	}
	else {
		q_implication = false;
	}

	if (p == q_implication && p == false) {
		result = false;
	}
	else {
		result = true;
	}
	cout << "NOTOR(Reverse Implication)(←): ";
	if (result) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

	//-------XNOR(Equivalence)(⟷)(~)-------

	//NOTOR(Implication)(→)

	if (p == false) {
		p_implication = true;
	}
	else {
		p_implication = false;
	}

	if (p_implication == q && p_implication == false) {
		result_xnor_1 = false;
	}
	else {
		result_xnor_1 = true;
	}

	//NOTOR(Reverse Implication)(←)

	if (q == false) {
		q_implication = true;
	}
	else {
		q_implication = false;
	}

	if (p == q_implication && p == false) {
		result_xnor_2 = false;
	}
	else {
		result_xnor_2 = true;
	}

	//AND(Conjunction)(∧)

	if (result_xnor_1 == result_xnor_2 && result_xnor_1 == true) {
		result = true;
	}
	else {
		result = false;
	}

	cout << "XNOR(Equivalence)(⟷)(~): ";
	if (result) {
		cout << "True" << endl << endl;
	} else {
		cout << "False" << endl << endl;
	}
	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl << endl;
}

void OR_AND_XOR(int arr[], int arr1[])
{
	int n = 8;

	int result_or = 0;
	int result_and = 0;
	int result_xor = 0;

	cout << "One---Two---OR---AND---XOR" << endl;

	for (int i = 0; i < n; i++) {

		//-------OR-------

		if (arr[i] == arr1[i] && arr[i] == 0) {
			result_or = 0;
		}
		else {
			result_or = 1;
		}

		//-------AND-------

		if (arr[i] == arr1[i] && arr[i] == 1) {
			result_and = 1;
		}
		else {
			result_and = 0;
		}

		//-------XOR-------

		if (arr[i] != arr1[i]) {
			result_xor = 1;
		}
		else {
			result_xor = 0;
		}

		cout << " " << arr[i] << "  |  " << arr1[i] << "  |  " << result_or << " |  " << result_and << "  |  " << result_xor << endl;
	}

}

int main()
{
	int arr[8] = { 1,1,0,0,1,1,1,0 };
	int arr1[8] = { 0,1,1,0,0,1,1,1 };

	bool p = false;
	bool q = false;

	string p_checker = "";
	string q_checker = "";

	cout << "p: (True|False) (true|false) (1|0) : " << endl;
	cin >> p_checker;
	if (p_checker == "true" || p_checker == "True" || p_checker == "1") {
		p = true;
	}
	else if (p_checker == "false" || p_checker == "False" || p_checker == "0") {
		p = false;
	}
	cout << "q: (True|False) (true|false) (1|0) : " << endl;
	cin >> q_checker;
	if (q_checker == "true" || q_checker == "True" || q_checker == "1") {
		q = true;
	}
	else if (q_checker == "false" || q_checker == "False" || q_checker == "0") {
		q = false;
	}

	true_false(p, q);

	OR_AND_XOR(arr, arr1);
}