

#include <iostream>
#include <vector>
struct Point {
    double x; 
    double y; 
};
class Student {
private:
    std::string name;
    std::vector<double> grades;

public:
    Student(const std::string& Name, const std::vector<double>& Grades)
        : name(Name), grades(Grades) {}
    double calculate() const {
        if (grades.empty()) {
            return 0.0;
        }
        double sum = 0.0;
        for (double grade : grades) {
            sum += grade;
        }
        return sum / grades.size();
    }
    void Info() const {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Оценки: ";
        for (double grade : grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
        std::cout << "Средний балл: " << calculate() << std::endl;
    }
};
int main()
{
    setlocale(0, "rus");
 
    ////zad1
    /*const int n=5;
    int arr[n] = {10,20,30,40,50};
    int sum = 0;
    double sred;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    sred = sum / n;
    std::cout << "Среднее арифметическое:" << sred;*/

    ////zad2
   /* const int rows = 3;
    const int cols = 4;
    int arr[rows][cols] = {
        { 1,2,3,4 },
        { 5,6,7,8 },
        { 9,10,11,12 }
    };
    int sum[cols] = { 0 };
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) 
        {
            sum[j] += arr[i][j];
        }
    }   
    for (int j = 0; j < cols; j++) 
    {
        std::cout << " Сумма столбца: " << j << " = " << sum[j];
    }*/

    ////zad3
    /*Point point1; 
    Point point2;
    std::cout << "Введите координаты первой точки (x y): ";
    std::cin >> point1.x >> point1.y;
    std::cout << "Введите координаты второй точки (x y): ";
    std::cin >> point2.x >> point2.y;
    double distance = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
    std::cout << "Расстояние между точками: " << distance;*/

    ////zad4
    std::vector<double> grades = { 5.0, 4.5, 4.0, 3.5 };
    Student student("Алиса", grades);
    student.Info();
    return 0;
}

