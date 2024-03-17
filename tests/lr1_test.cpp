#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class calculateSumAndProductTest : public ::testing::Test {
protected:
    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    void SetUp() override {
        // Например, инициализация данных
        arr = {10, 14, 15, 20, 21, 25, 30};
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
        arr.clear();
    }

    // Объявляем переменные, которые будут использоваться в тестах
    std::vector<double> arr;
    std::pair<double, double> result;
};

TEST_F(calculateSumAndProductTest, CTest1) {
// Вызываем функцию countAndSum с тестовыми данными
    arr = {};
    result = calculateSumAndProduct(arr,1,4);

// Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 0);
    EXPECT_EQ(result.second, 1.0);

/*Тестовый вариант для пути 1:
Исходные данные: нулевой массив.
Ожидаемые результаты: сумма положительных чисел = 0, произведение = 1.
*/
}

TEST_F(calculateSumAndProductTest, CTest2) {
// Вызываем функцию countAndSum с тестовыми данными
    arr = { 10, 14, 15, 20, 21, 25, 30 };
    result = calculateSumAndProduct(arr, 10, 11);
    
// Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 135.0);
    EXPECT_EQ(result.second, 1.0);
/*Тестовый вариант для пути 2: 
Исходные данные: arr = {10, 14, 15, 20, 21, 25, 30}; b =10; d=11.
Ожидаемые результаты: сумма положительных чисел = 135, произведение = 1.
*/
}

TEST_F(calculateSumAndProductTest, CTest3) {
// Вызываем функцию countAndSum с тестовыми данными
    arr = { -10, -14, -15, -20, -21, -25, -30 };
    result = calculateSumAndProduct(arr, 10, 11);

// Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 0.0);
    EXPECT_EQ(result.second, 1.0);

    /*Тестовый вариант для пути 3: 
Исходные данные: arr = {-10, -14, -15, -20, -21, -25, -30}; b =10; d=11.
Ожидаемые результаты: сумма положительных чисел = 0, произведение = 1.
*/
}

TEST_F(calculateSumAndProductTest, CTest4) {
    // Вызываем функцию countAndSum с тестовыми данными
    arr = { 10, -14, -15, -20, -21, -25, 30 };
    result = calculateSumAndProduct(arr, 1, 4);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 40.0);
    EXPECT_EQ(result.second, 88200.0);

    /*Тестовый вариант для пути 4:
Исходные данные : arr = { 10, -14, -15, -20, -21, -25, 30 }; b = 1; d = 4.
Ожидаемые результаты : сумма положительных чисел = 0, произведение = 1.
*/
}

TEST_F(calculateSumAndProductTest, CTest5) {
    // Вызываем функцию countAndSum с тестовыми данными
    arr = { -10, -14, -15, -20, -21, -25, -30 };
    result = calculateSumAndProduct(arr, 1, 4);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 0.0);
    EXPECT_EQ(result.second, 88200.0);

    /*Тестовый вариант для пути 5: 
Исходные данные: arr = {-10, -14, -15, -20, -21, -25, -30}; b =1; d=4.
Ожидаемые результаты: сумма положительных чисел = 0, произведение = 88200.

*/
}

TEST_F(calculateSumAndProductTest, CTest6) {
    // Вызываем функцию countAndSum с тестовыми данными
    arr = { 10, -14, -15, -20, -21, -25, -30 };
    result = calculateSumAndProduct(arr, 1, -4);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 10.0);
    EXPECT_EQ(result.second, 1.0);

    /*если в массиве нет положительных элементов, Arr.size() <= b <= Arr.size() <  и d<0 за пределами его размера
*/
}

TEST_F(calculateSumAndProductTest, CTest7) {
    // Вызываем функцию countAndSum с тестовыми данными
    arr = { -10, -14, -15, -20, -21, -25, -30 };
    result = calculateSumAndProduct(arr, 1, -4);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result.first, 0.0);
    EXPECT_EQ(result.second, 1.0);

    /*если в массиве нет положительных элементов, Arr.size() <= b <= Arr.size() <  и d<0 за пределами его размера
*/
}



