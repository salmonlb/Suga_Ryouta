#include<iostream>
#include<vector>

std::vector <int> data;

void push(int value){
	data.emplace_back(value);
}

void pop(){
	data.erase(data.end());
}

void showVector() {
	std::cout << "Vector is : ";
	for (auto& value : data) {
		std::cout << value;
	}
	std::cout << "\n";
}

int main() {

	data.emplace_back(1);
	showVector();
	data.emplace_back(3);
	showVector();
	data.emplace_back(5);
	showVector();
	data.emplace_back(7);
	showVector();
	data.emplace_back(9);
	showVector();
}