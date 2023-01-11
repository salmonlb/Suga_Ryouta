#include<iostream>
#include<vector>

std::vector <int> data;

void push(int value){
	data.emplace_back(value);
}

void pop(){
	data.erase(data.end() - 1);
	//data.pop_back();
}

void showVector() {
	std::cout << "Vector is : ";
	for (auto value : data) {
		std::cout << value;
	}
	std::cout << "\n";
}

int main() {

	push(1);
	showVector();
	push(3);
	showVector();
	push(5);
	showVector();
	push(7);
	showVector();
	push(9);
	showVector();

	pop();
	showVector();

	pop();
	showVector();
}