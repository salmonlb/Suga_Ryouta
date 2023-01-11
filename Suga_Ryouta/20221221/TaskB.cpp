#include<iostream>
#include<vector>

std::vector<int> data;

void enqueue(int value){        //値を入れる関数
    data.emplace_back(value);
}

void dequeue(){                 //入れた順に値を削除する関数
    data.erase(data.begin());
}

void showVector(){              //vectorの中身を表示する関数

    std::cout << "Vector is : ";
    for (auto value : data){
        std::cout << value;
    }
    std::cout << "\n";
}

int main() {
    enqueue(1);
    showVector();

    enqueue(3);
    showVector();

    enqueue(5);
    showVector();

    enqueue(7);
    showVector();

    enqueue(9);
    showVector();

    dequeue();
    showVector();

    dequeue();
    showVector();
}