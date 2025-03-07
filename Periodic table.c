#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function Declarations
int get_option();
int atomic_number();
int atomic_symbol();
int atomic_name();
int atomic_weight();
void show(int);
void str_to_upper(char *str);
void str_to_lower(char *str);

// Global arrays storing atomic data
char name[118][20] = {
    "Hydrogen", "Helium", "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon",
    "Sodium", "Magnesium", "Aluminium", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon",
    "Potassium", "Calcium", "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc",
    "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton",
    "Rubidium", "Strontium", "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium",
    "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon",
    "Cesium", "Barium", "Lanthanum", "Cerium", "Praseodymium", "Neodymium", "Promethium", "Samarium", "Europium", "Gadolinium", "Terbium", "Dysprosium",
    "Holmium", "Erbium", "Thulium", "Ytterbium", "Lutetium",
    "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon",
    "Francium", "Radium", "Actinium", "Thorium", "Protactinium", "Uranium", "Neptunium", "Plutonium", "Americium", "Curium", "Berkelium",
    "Californium", "Einsteinium", "Fermium", "Mendelevium", "Nobelium", "Lawrencium",
    "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium", "Hassium", "Meitnerium", "Darmstadtium", "Roentgenium", "Copernicium", "Nihonium", "Flerovium", "Moscovium", "Livermorium", "Tennessine", "Oganesson"
};

char symbol[118][5] = {
    "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar",
    "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr",
    "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe",
    "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu",
    "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "TI", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac",
    "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh",
    "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og"
};

float weight[118] = {
    1.008, 4.003, 6.941, 9.012, 10.811, 12.011, 14.007, 15.999, 18.998, 20.180, 22.990, 24.305, 26.982, 28.086, 30.974, 32.066, 35.453, 39.948, 39.098, 40.078, 44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.38, 69.723, 72.631, 74.922, 78.972, 79.904, 83.798, 85.468, 87.62, 88.906, 91.224, 92.906, 95.95, 98.907, 101.07, 102.906, 106.42, 107.868, 112.414, 114.818, 118.711, 121.760, 127.6, 126.904, 131.294, 132.905, 137.328, 138.905, 140.116, 140.908, 144.242, 144.913, 150.36, 151.964, 157.25, 158.925, 162.50, 164.930, 167.259, 168.934, 173.055, 174.967, 178.49, 180.948, 183.84, 186.207, 190.23, 192.217, 195.085, 196.967, 200.592, 204.383, 207.2, 208.980, 208.982, 209.987, 222.018, 223.020, 226.025, 227.028, 232.038, 231.036, 238.029, 237.048, 244.064, 243.061, 247.070, 247.070, 251.080, 254.0, 257.095, 258.1, 259.101, 262.0, 261.0, 262.0, 266.0, 264.0, 269.0, 278.0, 281.0, 280.0, 285.0, 286.0, 289.0, 289.0, 293.0, 294.0, 294.0,
};

int main1() {
    // initialization of Modern Periodic Table
    int choice1;
    printf("\n>Enter '1' to search about Modern Periodic Table.\n");
    printf(">Enter '2' to close search about Modern Periodic Table.\n");
    printf("\nENTER HERE : ");
    scanf("%d", &choice1);
    if(choice1 == 1) {
        printf("\n  Welcome to Modern Periodic Table Search !!\n");
    }
    else if(choice1 == 2) {
        printf("\n\tSearch Closed.\n\n");
        exit(0);
    }
    else {
        printf("\n\tInvalid Input\n\tTry Again...\n");
        exit(1);
    }
    return 0; // Return success
}

// user's input choice
int main2() {
    int i, option;

    while(1) {
        option = get_option();  // Get the user's menu choice

        switch (option) {
            case 1:
                i = atomic_number(); // Search by atomic number
                break;
            case 2:
                i= atomic_symbol();  // Search by atomic symbol
                break;
            case 3:
                i = atomic_name();  // Search by atomic name
                break;
            case 4:
                i = atomic_weight();  // Search by atomic weight
                break;
            case 5:
                printf("\n  Exiting the Modern Periodic Table.\n\n");
                exit(0);  // Exit the program
            default:
                printf("\n\t\tInvalid Number.\n\t\tTry Again...");
                continue;
        }

        if (i >= 0) {
            show(i);  // Show the details of the element found
        }

    } while (1);
}
    
// Get the option from the user
int get_option() {
    int option;
    printf("\n\n\tEnter the corresponding number\n\n");
    printf("\t1. Search by ATOMIC NUMBER\n");
    printf("\t2. Search by ATOMIC SYMBOL\n");
    printf("\t3. Search by ATOMIC NAME\n");
    printf("\t4. Search by ATOMIC WEIGHT\n");
    printf("\t5. QUIT\n");
    printf("\n\tEnter Your Choice: ");
    scanf("%d", &option);
    return option;
}

// Function to search by atomic number
int atomic_number() {
    int n;
    printf("\n\tEnter the Atomic Number : ");
    scanf("%d", &n);
    if (n > 0 && n <= 118) {
        return n - 1;   // Return the index
    }
    printf("\n\tInvalid Atomic Number...\nNOTE: Enter only numbers between 1 and 118.\n");
    return -1;   // Invalid atomic number           
}
    
// Function to convert string to uppercase
void str_to_upper(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

// Function to convert string to lowercase
void str_to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Search by atomic symbol
int atomic_symbol() {
    char symbol_input[5];
    printf("\n\tEnter the Atomic Symbol: ");
    scanf("%s", symbol_input);
    for (int i = 0; symbol_input[i]; i++) {
        symbol_input[i] = tolower(symbol_input[i]);
    }
    for (int i = 0; i < 118; i++) {
        char element_symbol[20];
        strcpy(element_symbol, symbol[i]);
        for (int j = 0; element_symbol[j]; j++) {
            element_symbol[j] = tolower(element_symbol[j]);
        }
        if (strcmp(element_symbol,symbol_input) == 0) {
            return i;
        }
    }
    printf("\n\tNo such Atomic Symbol Exists.\n\t\tTry Again...\n");
    return -1;
}

// Function to search by atomic name
int atomic_name() {
    char name_input[20];
    printf("\n\tEnter Atomic Name : ");
    scanf("%s", name_input);
    str_to_lower(name_input); // Convert to lowercase

    for (int i = 0; i < 118; i++) {
        char temp_name[20];
        strcpy(temp_name, name[i]);
        str_to_lower(temp_name); // Convert to lowercase for comparison
        if (strcmp(temp_name, name_input) == 0) {
            return i;
        }
    }
    printf("\n\tNo such Atomic Name Exists.\n\t\tTry Again...\n");
    return -1;   // Element not found
}

// Function to search by atomic weight
int atomic_weight() {
    float weight_input;
    printf("\n\tEnter the Atomic Weight : ");
    scanf("%f", &weight_input);

    for (int i = 0; i < 118; i++) {
        if (fabs(weight[i] - weight_input) < 0.01) { // Using fabs() for float comparison
            return i;   // Return the index of the found element
        }
    }
    printf("\n\tNo such atomic weight Found.\n\t\tTry Again...\n");
    return -1;  // Weight not found
}

// Function to display element details
void show(int index) {
    printf("\n\n\n\t\t----Element Details----\n");
    printf("\n\t\tName: %s\n", name[index]);
    printf("\n\t\tSymbol: %s\n", symbol[index]);
    printf("\n\t\tAtomic Number: %d\n", index + 1);
    printf("\n\t\tAtomic Weight: %.4f\n", weight[index]);
    printf("\n\n\n>Enter \"A\" to search again.\n");
    printf(">Enter any key to exit.\n");
    printf("\nENTER HERE : ");

    int choice2;
    scanf(" %s", &choice2);
    if (choice2 == 'A' || choice2 == 'a') {
        main2();   // Restart the main menu
    }
    else {
        printf("\n\tSearch closed.\n\n");
        exit(0);   // Exit the program
    }
}

int main() {
    main1();   // Proceeds to initialization
    main2();   // Proceeds to user's input choice
    return 0; 
}