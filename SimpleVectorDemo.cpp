// This program demonstrates the SimpleVector template.
#include <iostream>
#include "SimpleVector.h"
using namespace std;

int main()
{
    const int SIZE = 10;    // Number of elements
    int count;              // Loop counter

    // Create a SimpleVector of ints.
    SimpleVector<int> intTable(SIZE);

    // Create a new SimpleVector of integers named intTable2, initialized with the same size as intTable.
    SimpleVector<int> intTable2(SIZE);

    // Create a SimpleVector of doubles.
    SimpleVector<double> doubleTable(SIZE);

    // Store values in the THREE SimpleVectors.
    for (count = 0; count < SIZE; count++)
    {
        // Update the loop storing values in intTable2 to multiply count by a different factor (e.g., 3, 4, or 5).
        intTable[count] = (count * 2);
        intTable2[count] = (count * 3);
        doubleTable[count] = (count * 2.14);
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;
    // Add a new loop to display the contents of intTable2 after the existing loops for intTable and doubleTable.
    cout << "These values are in intTable2:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable2[count] << " ";
    cout << endl;

    // Use the standard + operator on the elements.
    cout << "\nAdding 5 to each element of intTable"
        << " and doubleTable.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = intTable[count] + 5;
        doubleTable[count] = doubleTable[count] + 5.0;
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    // Use the standard ++ operator on the elements.
    cout << "\nIncrementing each element of intTable and"
        << " doubleTable.\n";
    for (count = 0; count < SIZE; count++)
    {
        intTable[count]++;
        doubleTable[count]++;
    }

    // Display the values in the SimpleVectors.
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    cout << "These values are in doubleTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << doubleTable[count] << " ";
    cout << endl;

    return 0;
}