#include <iostream>
#include <string>

struct Movie {
    std::string title;             
    int year;                      
    std::string genre;             
    unsigned int duration;         
    unsigned int price;            
};
void print_movie(const Movie& movie) {
    std::cout << "Название: " << movie.title << std::endl;
    std::cout << "Год выпуска: " << movie.year << std::endl;
    std::cout << "Жанр: " << movie.genre << std::endl;
    std::cout << "Продолжительность: " << movie.duration << " минут" << std::endl;
    std::cout << "Цена: $" << movie.price << std::endl;

struct Movie {
   std::string title;
   double price;
    };    
Movie expensive(const Movie movies[], int length) {
    if (length == 0) {
        return { "", 0.0 };
    };
Movie mostExpensive = movies[0];       
   for (int i = 1; i < length; ++i) {
   if (movies[i].price > mostExpensive.price) {
       mostExpensive = movies[i];
   }
}

        return mostExpensive;
    }