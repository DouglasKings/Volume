#include <stdio.h> // Include the standard input/output library

// Function prototype for calculating the volume of a rectangular prism
double getVolume(double Length, double Width, double Height);

int main() {
    double Length, Width, Height, Volume; // Declare variables for length, width, height, and volume

    // Prompt the user to enter the dimensions of the rectangular prism
    printf("Enter the length: ");
    scanf("%lf", &Length); // Read the length from the user
    printf("Enter the width: ");
    scanf("%lf", &Width); // Read the width from the user
    printf("Enter the height: ");
    scanf("%lf", &Height); // Read the height from the user

    // Calculate the volume using the getVolume function
    Volume = getVolume(Length, Width, Height);

    // Display the entered dimensions and calculated volume
    printf("Length: %.2lf \n", Length); // Print the length with 2 decimal places
    printf("Width: %.2lf \n", Width); // Print the width with 2 decimal places
    printf("Height: %.2lf \n", Height); // Print the height with 2 decimal places
    printf("Volume: %.2lf \n", Volume); // Print the volume with 2 decimal places
    
    return 0; // End of the main function
}

// Function definition for calculating the volume of a rectangular prism
double getVolume(double Length, double Width, double Height) {
    // Return the product of length, width, and height
    return Length * Width * Height;
}
