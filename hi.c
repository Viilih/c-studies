#include <stdio.h> // Standard I/O library


int main (void){


    int height = 72;
    float profit = 2150.48;
    printf("To C, or not to C: that is the questio. \n");
    printf("Height: %d\n", height);
    printf("Profit: %f\n", profit);
    return 0;
}

// Steps for running C -> preprocessing, compiling, linking
// 1. Preprocessing: The preprocessor handles directives (e.g., #include, #define)
// 2. Compiling: The compiler translates the preprocessed code 
// into assembly language (machina code - object code)

// 3. Linking: The linker combines object files into an executable
// combines the object code produced by the
// compiler with any additional code needed to yield a complete executable pro-
// gram. This additional code includes library functions (like printf) that are
// used in the program

// Directives are commands that give instructions to the preprocessor
// #include <stdio.h> tells the preprocessor to include the standard input/output library