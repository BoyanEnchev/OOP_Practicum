#include "stdafx.h"
#include "Vector.h"

const size_t INITCAP = 10;

Vector::Vector()
{
	capacity = INITCAP;
	size = 0;
}

Vector::Vector(size_t capacity, size_t size)
{
	this->capacity = capacity;
	this->container = new int[this->capacity];
	this->size = size;

	for (size_t i = 0; i < this->size; ++i)
	{
		this->container[i] = 0;
	}

}

Vector::Vector(const Vector &otherVector)
{	
	this->capacity = otherVector.capacity;
	this->size = otherVector.size;
	this->container = new int[this->capacity];
	for (size_t i = 0; i < this->size; ++i)
	{
		this->container[i] = otherVector.container[i];
	}
}
Vector::~Vector()
{
	delete[] this->container;
}

void Vector::SetAt(int value, size_t index)
{
	this->container[index] = value;
}

int Vector::GetAt(size_t index)const
{
	return this->container[index];
}
void Vector::PushBack(int element)
{
	if (size == capacity) Resize(capacity * 2);
	this->container[size] = element;
	++size;
}

void Vector::InsetAt(int element, size_t index)
{
	for (size_t i = index; i < this->size - 1; ++i)
	{
		this->container[i+1] = this->container[i];
	}
	this->container[index] = element;
	++size;
}
void Vector::DeleteAt(size_t index)
{
	if (size == capacity/3) Resize(capacity/2);
	for (size_t i = index; i < this->size-1; ++i)
	{
		this->container[i] = this->container[i + 1];
	}
	--size;
}

bool Vector::isEmpty()const
{
	if (size == 0) return 0;
	else return 1;
}

size_t Vector::Size()const
{
	return size;
}

void Vector::Sort(bool sortIncreasing)
{	
	if (sortIncreasing == true)
	{
		for (size_t i = 0; i < size - 1; ++i)
		{
			for (size_t j = i; j < size; ++j)
			{
				if (container[j]>container[i])
				{
					int temp = container[i];
					container[i] = container[j];
					container[j] = temp;
				}
			}

		}
	}
	else
	{
		for (size_t i = 0; i < size - 1; ++i)
		{
			for (size_t j = i; j < size; ++j)
			{
				if (container[j]<container[i])
				{
					int temp = container[i];
					container[i] = container[j];
					container[j] = temp;
				}
			}

		}
	}

}

bool Vector::isSorted()const
{	
	for (size_t i = 0; i < size - 1; ++i)
	{
		if (container[i]>container[i + 1]) return false;
	}
	return true;
}

void Vector::Resize(size_t newCapacity)
{
	this->capacity = newCapacity;
	int *buffer = new int[newCapacity];
	
	for (size_t i = 0; i < this->size; ++i)
	{
		buffer[i] = this->container[i];
	}
	delete[] this->container;
	this->container = buffer;
}