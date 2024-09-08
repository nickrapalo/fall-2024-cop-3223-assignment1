#include <stdio.h>
#include <math.h>

#define PI 3.14159;

double calculateDistance();
double getDistancePoints();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void printRequest(char *type, double value);

int main(int argc, char **argv)
{
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}

double calculateDistance()
{
  double distance = getDistancePoints();
  printf("\nThe distance between the two points is %lf", distance);
  return distance;
}

double calculatePerimeter()
{
  double radius = getDistancePoints();
  double perimeter = radius * PI;
  printRequest("perimeter", perimeter);
  return 2;
}

double calculateArea()
{
  double radius = getDistancePoints() / 2;
  double area = pow(radius, 2) * PI;
  printRequest("area", area);
  return 1;
}

double calculateWidth()
{
  double radius = getDistancePoints();
  printRequest("width", radius);
  return 1;
}

double calculateHeight()
{
  double radius = getDistancePoints();
  printRequest("height", radius);
  return 1;
}

// Collect user input and calculate distance
double getDistancePoints()
{
  double x1, x2, y1, y2, distance;

  scanf("%lf", &x1);
  scanf("%lf", &x2);
  scanf("%lf", &y1);
  scanf("%lf", &y2);

  distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
  printf("\nPoint #2 entered: x2 = %lf; y2 = %lf", x2, y2);
  return distance;
}

// Print answer of what was requested
void printRequest(char *type, double value)
{
  printf("\nThe %s of the city encompassed by your request is %.3lf\n", type, value);
  return;
}

/*
Nicholas Rapalo - Assignment 1 - COP3223
*/