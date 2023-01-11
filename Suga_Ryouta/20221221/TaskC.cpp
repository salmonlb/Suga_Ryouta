#include<iostream>
#include<vector>



std::vector<int> data;

//プロトタイプ宣言
void enqueue(int value);
void dequeue();
void showvector();

int main(){
    enqueue(1);
    showvector();

    enqueue(3);
    showvector();

    enqueue(5);
    showvector();

    enqueue(7);
    showvector();

    enqueue(9);
    showvector();

    dequeue();
    showvector();

    dequeue();
    showvector();

    enqueue(2);
    showvector();

    enqueue(4);
    showvector();

    return 0;
}

//値を入れていく関数
void enqueue(int value){
    data.emplace_back(value);
}

//値を入れた順番から消していく関数
void dequeue(){
    data.erase(data.begin());
} 

//dataの中身を表示する関数
void showvector(){
    std::cout << "Vector is : ";
    for (auto value : data){
        std::cout << value;
    }
    std::cout << "\n";
}