#pragma once
using namespace System;

public ref class ItemObj
{
public:
	String^ Name, ^ FullName;

	ItemObj(String^ Name, String^ FullName)
	{
		this->Name = Name;
		this->FullName = FullName;
	}

	String^ ToString() override {
		return Name;
	}
};



