#pragma once

template <typename Type1, typename Type2>
class Comparison
{
public:
	Type1 a;
	Type2 b;

	Comparison(Type1 a, Type2 b) : a(a), b(b) {};

	Type1 Min(){
		if (static_cast<Type1>(a) < static_cast<Type2>(b))
		{
			return static_cast<Type1>(a);
		}
		else {
			return static_cast<Type2>(b);
		}
	}
};

