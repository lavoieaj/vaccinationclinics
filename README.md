Vaccination Clinics

This implementation was designed to run with as much raw speed as possible to excel through all of the speed challenges set forth by the Guardant Health hackerrank challenges. I chose to implement the solution with a priority queue in C++ as it has fast insert times of O(log(N)) as well as good pop() times of O(2*log(N)). Whenever the program looks for the city with the maximum number of residents per clinic, top() lookup time is O(1). In a production environment, this program would obviously be implemented with input validation, error handling, and single-purpose reusable methods.


Problem:

The World Health Organization (WHO) wants to establish a total of B vaccination clinics across N cities to immunize people against fatal diseases. Every city must have at least 1 clinic and a clinic can only vaccinate people in the same city where they live. The goal is to minimize the number of vaccination kits needed in the largest clinic.

For example, suppose you have:
1. 2 cities and
2. 7 clinics to be opened.
3. If 200,000 is the population of the first city and
4. 500,000 is the population of the second city, then
5. two clinics can open in the first city and
6. five in the second. This way,
7. 100,000 people can be immunized in each of the two clinics in the first city, and
8. 100,000 can be immunized in each clinic in the second city.
9. So the maximum number of people to be immunized in the largest clinic is 100,000

Input Format:
Two integers in the first line, N, the number of cities, and B, the total number of clinics to be opened.
Each of the following N lines contains an integer ai, the population of city i.

Output Format:
One integer representing the maximum number of people to be immunized in any single clinic.

Sample Input:
2 7
200000
500000

Sample Output:
100000

