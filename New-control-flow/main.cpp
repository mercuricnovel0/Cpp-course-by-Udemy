#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

// Functions prototypes
void display_menu();

char get_choice();
void menu_logic(char&, vector<int>&);
void print_numbers(const vector<int>&);
void add_number(vector<int>&);
void mean_numbers(const vector<int> &);
void smallest_numbers(const vector<int> &);
void largest_numbers(const vector<int> &);

int main() {
    vector<int> numbers;
    char choice {};

    do {
        display_menu();
        choice = get_choice();
        menu_logic(choice, numbers);
    } while (choice != 'Q');

    return 0;
}

void display_menu() {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_choice() {
    char choice {};
    cin >> choice;
    return static_cast<char>(toupper(static_cast<unsigned char>(choice)));
}

void menu_logic(char &choice, vector<int>& numbers) {
/*    if (choice == 'P')
        print_numbers(numbers);
    else if (choice == 'A')
        add_number(numbers);
    else if (choice == 'M')
        mean_numbers(numbers);
    else if (choice == 'S')
        smallest_numbers(numbers);
    else if (choice == 'L')
        largest_numbers(numbers);
*/
    switch (choice) {
        case 'P':
            print_numbers(numbers);
            break;
        case 'A':
            add_number(numbers);
            break;
        case 'M':
            mean_numbers(numbers);
            break;
        case 'S':
            smallest_numbers(numbers);
            break;
        case 'L':
            largest_numbers(numbers);
            break;
        default:
            choice = 'Q';
    }
}

void print_numbers(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Empty numbers!" << endl;
    } else {
        for (auto number : numbers) {
            cout << number << " ";
        }
        cout << "\n";
    }
}

void add_number(vector<int> &numbers) {
    int num_to_add {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    numbers.push_back(num_to_add);
    cout << "Number: " << num_to_add << " added" << endl;
}

void mean_numbers(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Empty numbers!" << endl;
    } else {
        double sum_vector {};
        for (const auto number : numbers) {
            sum_vector += number;
        }
        cout << "Average: " << sum_vector / static_cast<double>(numbers.size()) << endl;
    }
}

void smallest_numbers(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Empty numbers!" << endl;
    } else {
        int smallest_number{numbers[0]};
        for (const auto number: numbers) {
            if (number < smallest_number)
                smallest_number = number;
        }
        cout << "Smallest number: " << smallest_number << endl;
    }
}

void largest_numbers(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Empty numbers!" << endl;
    } else {
        int largest_number{numbers[0]};
        for (const auto number: numbers) {
            if (number > largest_number)
                largest_number = number;
        }
        cout << "Smallest number: " << largest_number << endl;
    }
}

