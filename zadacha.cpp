#include <iostream>
#include <vector>
int j (int n) {
    std::vector<int> circle(n);
    for (int i = 0; i < n; ++i) {
        circle[i] = i + 1;
    }

    int c = 0;
    while (circle.size() > 1) {
        c = (c + 2) % circle.size();
        circle.erase(circle.begin() + c);
        
       
    }
    return circle[0];
}

int main() {
    int n;
    std::cout << "Введите количество людей: ";
    std::cin >> n;
    if (n <= 2)
    {
        std::cout << "Количество людей должно быть больше 2" << std::endl;
    } else{
      int position = j (n);
      std::cout << "Чтобы остаться в живых, Иосиф должен был стоять на позиции: " << position << std::endl;
    }

    return 0;
}