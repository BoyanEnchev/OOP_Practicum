#include "stdafx.h"
#include "String.h"
#include <cassert>

const int TEMP_LENGTH = 10000;  // needed for the istream implementation

int String::myStrLen(const char* data)
{
  int size = 0;
  while(data[size] != '\0')
    size++;

  return size;
}

void String::myStrCpy(char*& destination, char* source)
{
  int sourceLength = myStrLen(source);

  this->data = new char[sourceLength + 1];
  for(int i = 0; i <= sourceLength; i++)
    destination[i] = source[i];
}

int String::myStrCmp(const char* str1, const char* str2)
{
  int len1 = myStrLen(str1);
  int len2 = myStrLen(str2);

  if(len1 < len2)
    return -1;
  else if(len1 > len2)
    return 1;
  else
  {
    int index = 0;
    while(str1[index] != '\0')
    {
      if(str1[index] < str2[index])
        return -1;
      else if (str1[index] > str2[index])
        return 1;
      else
        continue;
    }

    return 0;
  }
}

void String::myStrCat(char*& str1, const char* str2)
{
  char* result = new char[myStrLen(str1) + myStrLen(str2) + 1];

  int length = 0;
  for(int i = 0; str1[i] != '\0'; i++, length++)
    result[length] = str1[i];

  for(int i = 0; str2[i] != '\0'; i++, length++)
    result[length] = str2[i];

  result[length] = '\0';

  delete[] str1;
  str1 = result;
}

String::String()
{
  data = NULL;
  length = 0;
}

String::String(char* data)
{
  myStrCpy(this->data, data);
  length = myStrLen(this->data);
}

String::String(const String& other)
{
  myStrCpy(data, other.data);
  length = other.length;
}

String& String::operator=(const String& other)
{
  if(this != &other)
  {
    if(data != NULL)
      delete[] data;

    myStrCpy(data, other.data);
    length = myStrLen(data);
  }
  return *this;
}

String::~String()
{
  if(data != NULL)
    delete[] data;
}

char String::at(size_t index)
{
  assert(("Invalid index!", index >= 0 && index < length));

  return data[index];
}

size_t String::size() const
{
  return length;
}

char& String::operator[](size_t index)
{
  assert(("Invalid index!", index >= 0 && index < length));

  return data[index];
}
char* String :: toString()
{
	return this -> data;
}

const char String::operator[](size_t index) const
{
  assert(("Invalid index!", index >= 0 && index < length));

  return data[index];
}

String& String::operator+=(const String& rhs)
{
  length = myStrLen(data) + myStrLen(rhs.data);
  myStrCat(data, rhs.data);

  return *this;
}

bool String::operator<(const String& rhs)
{
  return myStrCmp(data, rhs.data) < 0;
}

bool String::operator>(const String& rhs)
{
  return myStrCmp(data, rhs.data) > 0;
}

bool String::operator<=(const String& rhs)
{
  return myStrCmp(data, rhs.data) <= 0;
}

bool String::operator>=(const String& rhs)
{
  return myStrCmp(data, rhs.data) >= 0;
}

bool String::operator==(const String& rhs)
{
  return myStrCmp(data, rhs.data) == 0;
}

bool String::operator!=(const String& rhs)
{
  return myStrCmp(data, rhs.data) != 0;
}

String operator+(const String& lhs, const String& rhs)
{
  String result(lhs.data);
  result += rhs;

  return result;
}

ostream& operator<<(ostream& os, const String& obj)
{
  os << obj.data;
  return os;
}

istream& operator>>(istream& is, String& obj)
{
  char temp[TEMP_LENGTH];
  cin.getline(temp, TEMP_LENGTH);

  if(obj.data != NULL)
    delete[] obj.data;

  obj.myStrCpy(obj.data, temp);
  obj.length = obj.myStrLen(obj.data);
  return is;
}