#include <time.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <stdio.h>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::list;
typedef long long int long_int;
const int max_int = 1000000001; // value, that could't be in the table. Analog of NULL.
// function for calculation of hash
inline int hash(long_int a_prime, long_int b_prime, int p_prime, int table_size, int key)
{
 return (((a_prime * key + b_prime) % p_prime) % table_size);
}
// class for mini-hash table in cells of main hash-table
class Bucket
{
 vector<int> _cells;
 int size; // the size of mini-table should be greater then 4
 long_int hash_a;
 long_int hash_b;
 int prime;
public:
 Bucket() {}
 void Initialize()
 {
 prime = 17;
 hash_a = std::rand() % prime;
 hash_b = 1 + std::rand() % (prime - 1);
 }
 // construct hash table from list of elements

 void Construct(list<int>& input)
 {
 if (input.empty())
 {
 size = 0;
 return;
 }
 size = input.size() * input.size();
 bool flag = true;
 // while there is no collisions in table
 while (flag)
 {
 _cells.assign(size, max_int);
 Initialize();
 list<int>::iterator elem = input.begin();
 while (elem != input.end() && flag)
 {
 int hashKey = hash(hash_a, hash_b, prime, size, *elem);
 if (hashKey < 0)
 hashKey = - hashKey;
 // if collision then construct hash table from the begining!
 if (_cells[hashKey] != max_int)
 {
 flag = false;
 break;
 }
 _cells[hashKey] = *elem;
 ++elem;
 }
 if (!flag)
 flag = true;
 else
 flag = false;
 }
 }
 bool Contains(int elem)
 {
 if (size == 0)
 return false;
 int hashKey = hash(hash_a, hash_b, prime, size, elem);
 if (hashKey < 0)

 hashKey = - hashKey;
 if (_cells[hashKey] == elem)
 return true;
 return false;
 }
};
// class for main hash table
class FixedSet
{
 int _tableSize;
 long_int _hashFuncA;
 long_int _hashFuncB;
 int _primeNumber;
 vector<list<int> > _elementsInCells;
 vector<Bucket> _buckets;
public:
 FixedSet()
 {
 _primeNumber = 100013; // the maximum prime number
 _hashFuncA = std::rand() % _primeNumber;
 _hashFuncB = 1 + std::rand() % (_primeNumber - 1);
 }
 void setTableSize(int size)
 {
 _tableSize = size;
 _buckets.resize(size);
 }
 void Initialize(const vector<int>& numbers)
 {
 _tableSize = numbers.size();
 _buckets.resize(numbers.size());
 _elementsInCells.resize(numbers.size());
 for (int i = 0; i < numbers.size(); ++i)
 {
 int hashKey = hash(_hashFuncA, _hashFuncB, _primeNumber, _tableSize, numbers[i]);
 if (hashKey < 0)
 hashKey = - hashKey;
 _elementsInCells[hashKey].push_back(numbers[i]);
 }
 for (int i = 0; i < numbers.size(); ++i)
 {
 _buckets[i].Construct(_elementsInCells[i]);

 }
 }
 bool Contains(int number)
 {
 int hashKey = hash(_hashFuncA, _hashFuncB, _primeNumber, _tableSize, number);
 if (hashKey < 0)
 hashKey = - hashKey;
 return _buckets[hashKey].Contains(number);
 }
};
int main(int argc, char* argv[])
{
 clock_t begin, end;
 double time_spent;
 std::srand (time(NULL));
 int numberOfElements;
 printf("Number of elements\n");
 scanf("%i", &numberOfElements);
 FixedSet fs;
 begin = clock();
 vector<int> inputVector;
 fs.setTableSize(numberOfElements);
 printf("Enter Elements");
 for (int i = 0; i < numberOfElements; ++i)
 {
 int elemValue;
 scanf("%d", &elemValue);
 inputVector.push_back(elemValue);
 }
 fs.Initialize(inputVector);
 end = clock();
 int numberOfElementsForSearch;
 printf("Number of elements to search\n");
 scanf("%i", &numberOfElementsForSearch);
 for (int i = 0; i < numberOfElementsForSearch; ++i)
 {
 int elem;
 printf("Enter element\n");
 scanf("%d", &elem);
 if (fs.Contains(elem))
 {

 cout << "Yes" << endl;
 }
 else
 {
 cout << "No" << endl;
 }
 }
 time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
 cout << time_spent << endl;
 return 0;
}