#pragma once
class Sort
{
private:
	int nrValues;
	int* v;
public:
	void InsertSort(bool ascendent=false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
	
	Sort(int nrValues, int min, int max);
	Sort(const Sort& other);
	Sort(int* v, int nrValues);
	Sort(int count, ...);
	Sort(const char* s);
};