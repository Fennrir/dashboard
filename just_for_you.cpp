#include <iostream>
#include <string>

int main()
{   
    int total_sales = 0;
    std::string salsa_name[] = {"mild","medium","hot","sweet","fruit","verde","zesty"};
    int salsa_sold[7];
    for(int i = 0; i < 7; i++) {
        std::cout << "Enter amount of " << salsa_name[i] << " salsa sold: ";
        int sold = -1;
        std::cin >> sold;
        while( sold < 0 ) {
            std::cout << "Must be positive integer!\n>> ";
            std::cin >> sold;
        } 
        total_sales += sold;
        salsa_sold[i] = sold;
    }
    
    int smallest = salsa_sold[0];
    int largest = salsa_sold[0];
    int smallest_i = 0;
    int largest_i = 0;
    
    for(int i = 1;  i < sizeof(salsa_sold)/sizeof(salsa_sold[0]);  i++ ) {
        if(smallest > salsa_sold[i]) {
            smallest_i = i;
            smallest = salsa_sold[i];
        }
        if(largest < salsa_sold[i]) {
            largest_i = i;
            largest = salsa_sold[i];
        }
    }
    
    for(int i = 0; i < 7; i++){
        std::cout << "Amount sold of " << salsa_name[i] << " salsa: " << salsa_sold[i] << std::endl;
    }
    std::cout << "-- Total sold: " << total_sales << "\n\n";
    
    std::cout << "Most sold of type " << salsa_name[largest_i] << ": " << salsa_sold[largest_i] << std::endl;
    std::cout << "Least sold of type " << salsa_name[smallest_i] << ": " << salsa_sold[smallest_i] << std::endl;
}
