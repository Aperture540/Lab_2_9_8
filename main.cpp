/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on September 13, 2017, 1:24 PM
 */

#include <iostream> 
#include <cmath>

using namespace std;

int main(void) {
    
    double vector[] = {1., 2., 3., 4., 5.};
    int n = sizeof (vector) / sizeof (vector[0]);
    double ArithmeticMean;
    double HarmonicMean;
    double GeometricMean;
    double RootMeanSquare;
    
    for(int count = 0; count < n; count++)
    {
        ArithmeticMean += vector[count]/n;
    }
    
    for(int count = 0; count < n; count++)
    {
        HarmonicMean += (1/vector[count]);
        if(count == 4)
        {
            HarmonicMean = n/HarmonicMean;
        }
    }
    
    //HarmonicMean = n/harmonicCounter;
    
    for(int count = 0; count < n; count++)
    {
        GeometricMean *= 1 * vector[count];
        
        if(vector[count] > 0)
        {
            GeometricMean = pow(GeometricMean, 1/vector[count]);
        }
    }
    
    
    
    // Insert your code here
    
    
    cout << "Arithmetic Mean = " << ArithmeticMean << endl;
    cout << "Harmonic Mean = " << HarmonicMean << endl;
    cout << "Geometric Mean = " << GeometricMean << endl;
    cout << "RootMean Square = " << RootMeanSquare << endl;
    
    cout << endl;
    return 0;
}

//Arithmetic Mean = 3 
//Harmonic Mean = 2.18978 
//Geometric Mean = 2.60517 
//RootMean Square = 3.31662