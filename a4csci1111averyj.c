/*
						avery Jacobson
						     csci 1111
						  James Polzin

						
Assignment 4:                Given: 01/24/14     Due: 01/30/14
------------                                  Points: 10
Purpose: Write some simple functions.

Description:

Modify your program for assignment #3 to have 3 functions in
addition to main( ). The additional functions should:
  1) Print an "overall" set of instructions to describe what 
     the program is about to do for the user and what it will
     require for inputs.
     
  2) Compute the area of a rectangle. {This will be used to 
     compute each of the required surface areas.}
     
  3) Compute the perimeter of a rectangle. {This will be used 
     to compute each of the required perimeters.}

Notes:
-----
- Read and meet all requirements of assignment #3.

- Gradually develop your program in steps:
    - Add one function at a time to your Assignment #3 
      solution and check that it is working properly. Then
      add an additional function, until all functions are
      present.
*/
    
#include <stdio.h>
#include <math.h>

    // area top, area face, acrea side, area all
    int areat, areaf, areas, areaa;
    // initial hight, width, lenght
    int height, width, length;

    // Perimeter top, Perimeter face, Perimeter side, Perimeter all 
    int perimt, perimf, perims, perima; 
    // Volume of cube
    int volume;
    // magnitude of distance
    float mag;

int main()
{
	//function prototypes 
	void printfunction(int,int,int,int,int,int,int,int,int,float);
        void print(void);
        void areafunction(int, int, int);
        void perimeterfunction(int, int, int);
    
	//print function to print program details
        print();
    
    	//print and scan functions for values
	printf("Please enter the hight in meters:\n");
        scanf("%i", &height);
        printf("Please enter the width in meters:\n");
        scanf("%i", &width);  
        printf("Please enter the length in meters:\n");
        scanf("%i", &length);
 
        
	//function calls for asssignment operations
 	areafunction(width, length, height);
        perimeterfunction(width, length, height);

    
    	volume = length * width * height;
    	mag = sqrt( pow(length, 2) + pow(width,2) + pow(height,2));
 
	//final print of all values
    	printfunction(areat, areaf,areas,areaa,perimt, perimf,perims, perima,  volume, mag);

 
	return 0;
}



void print(void)
{
	printf("\nIn the following program you will be asked to enter values to calculate the areaand perimeter of a recatagle\n\n");
}



void printfunction(int areat, int areaf, int areas, int areaa, int perimt, int perimf, int perims, int perima, int volume, float mag)
{
    
	printf("\narea of the top  is: %15i m^2\n", areat);
    	printf("area of the face is: %15i m^2\n", areaf);
    	printf("area of the side is: %15i m^2\n", areas);
    	printf("area of the entire box is: %9i m^2\n\n", areaa);
 
    	printf("Perimeter of the top  is: %10i m\n", perimt);
    	printf("Perimeter of the face is: %10i m\n", perimf);
   	printf("Perimeter of the side is: %10i m\n", perims);
    	printf("Perimeter of the entire box is: %4i m\n", perima);
 	printf("\nVolume of the box is: %14i m^3\n", volume);
 	printf("\nDistance from end to end : %9f m", mag);
}


void areafunction(int width, int length, int height)
{
    	areat = width * length;
    	areaf = length * height;
    	areas = width * height;
    	areaa = (areat+areaf+areas)*2;
}

void perimeterfunction(int width, int length, int height)
{
    	perimt = (width*2) + (length*2); 
    	perimf = (length*2) + (height*2);
    	perims = (width*2) + (height*2);
    	perima = (4*width) + (4 * height) + (4*length);
}
