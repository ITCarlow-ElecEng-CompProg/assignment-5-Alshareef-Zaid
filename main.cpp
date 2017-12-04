/**
Zaid H Alshareef
C00210415
25/09/2017
5. Method of Least Squares of Linear Regression
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

     cout << "Method of Least Squares of Linear Regression\n" << endl;


    /**Variable declarations */
    double arrayX[100] = {0},arrayY[100] = {0};
    double sumX = 0, sumY = 0, sumXY = 0;
    double xSq = 0, avgX = 0, avgY = 0, slope = 0, c_intercept = 0;
    int n = 0, i = 0;


    /**using do loop*/
    do
    {
        ///*the number of data points should be from 1-100*/
        cout << "Enter value for n: ";
        cin >> n;
    }
    while ((n<=0) || ( n>100));


    for(i=0; i<n; i++)
    {
        cout << "Enter x: ";
        cin >> arrayX[i];
        cout << "Enter y: ";
        cin >> arrayY[i];

    }
    /**neat heading for the X and Y */
    cout << "\nX  Y Table" << endl;


    for(i=0; i<n; i++)
    {
        cout << arrayX[i] <<"  "<< arrayY[i] << endl;
        sumX = sumX + arrayX[i];
        sumY = sumY + arrayY[i];
        sumXY = sumXY + arrayX[i] * arrayY[i];
        xSq = xSq + pow(arrayX[i], 2.0);
    }

    /**Equation to calculate the average of X and Y*/
    avgX = sumX / n;
    avgY = sumY / n;

    /**Displays the results*/
    cout << "\nsum of X: " << sumX << endl;
    cout << "Sum of Y: " << sumY << endl;
    cout << "\nAverage X: " << avgX << endl;
    cout << "Average Y: " << avgY << endl;
    cout << "\nProduct of XY: " << sumXY << endl;
    cout << "\nX square is : " << xSq << endl;

    /**Equation for Slope and intercept*/
    slope = ((n*sumXY) - (sumX * sumY)) / ((n*xSq) - (pow(sumX, 2.0)));
    c_intercept = avgY - (slope * avgX);

    /**write result with 2 decimal*/
    cout.precision(3);

    /**Displays the slope and intercept to the user*/
    cout << "\nSlope: " << slope << endl;
    cout << "Point of interception: "<< c_intercept << endl;



    return 0;
}
