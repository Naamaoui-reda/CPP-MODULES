/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:37:55 by rnaamaou          #+#    #+#             */
/*   Updated: 2023/01/06 21:37:55 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(): r_char('\0'), r_int(0), r_float(0.0f), r_double(0.0)
{
}

Convert::Convert(const Convert & copy)
{
	*this = copy;
}

Convert& Convert::operator = (const Convert &other)
{
	if (this == &other)
		return (*this);
	this->r_int = other.r_int;
	this->r_char = other.r_char;
	this->r_float = other.r_float;
	this->r_double = other.r_double;
	for(int i=0; i < 4; i++)
		this->flag[i] = other.flag[i];
	return (*this);
}


Convert::~Convert()
{
}

void Convert::_guide(void)
{
	std::cout << "invalide argument to convert pls enter somthing like : $> ./Convert <Typeliteral> " <<std::endl;
	std::cout << "char literals  : 'c', 'a', ..." <<std::endl;
	std::cout << "int literals   : 0, -42, 42..." <<std::endl;
	std::cout << "float literals : 0.0f, -4.2f, 4.2f, nanf, -inff, inff..." <<std::endl;
	std::cout << "double literals: 0.0, -4.2, 4.2, nan, -inf, +inf..." <<std::endl;
}

void Convert::FromChar()
{
	if (r_char > 32 && r_char < 127)
		flag[s_char] = Printable;
	else
		flag[s_char] = NonPrintable;
	r_int = static_cast<int>(r_char);
		flag[s_int] = Printable;
	r_float = static_cast<float>(r_char);
		flag[s_float] = Printable;
	r_double = static_cast<double>(r_char);
		flag[s_double] = Printable;
	this->ShowTime();
}

void Convert::FromInt()
{
	if (flag[s_int] == Impossible)
	{
		flag[s_char] = flag[s_float] = flag[s_double] = flag[s_int];
	}
	else
	{
		r_char = static_cast<char>(r_int);
		if (r_int < 0 || r_int > 255)
			flag[s_char] = Impossible;
		else if (r_int > 32 && r_int < 127)
			flag[s_char] = Printable;
		else
			flag[s_char] = NonPrintable;
		r_float = static_cast<float>(r_int);
			flag[s_float] = Printable;
		r_double = static_cast<double>(r_int);
			flag[s_double] = Printable;
	}
	this->ShowTime();
}

void Convert::FromFloat()
{
	if (flag[s_float] == Impossible)
	{
		flag[s_char] = flag[s_int] = flag[s_double] = flag[s_float];
	}
	else if (r_float == std::numeric_limits<float>::infinity() || r_float == -std::numeric_limits<float>::infinity() || std::isnan(r_float))
	{
		flag[s_char] = flag[s_int] = Impossible;
		r_double = static_cast<double>(r_float);
			flag[s_double] = Printable;
	}
	else
	{
		r_char = static_cast<char>(r_float);
		if (r_float < 0 || r_float >= 256)
			flag[s_char] = Impossible;
		else if (r_float >= 31 && r_float < 127)
			flag[s_char] = Printable;
		else
			flag[s_char] = NonPrintable;
		r_int = static_cast<int>(r_float);
		if (r_float > (float)(INT_MAX) + 1 || r_float < INT_MIN)
			flag[s_int] = Impossible;
		else 
			flag[s_int] = Printable;
		r_double = static_cast<double>(r_float);
			flag[s_double] = Printable;
	}
	this->ShowTime();
}

void Convert::FromDouble()
{
	if (flag[s_double] == Impossible)
	{
		flag[s_char] = flag[s_int] = flag[s_float] = flag[s_double];
	}
	else if (r_double == std::numeric_limits<double>::infinity() || r_double == -std::numeric_limits<double>::infinity() || std::isnan(r_double))
	{
		flag[s_char] = flag[s_int] = Impossible;
		r_float = static_cast<double>(r_double);
		flag[s_float] = Printable;
	}
	else
	{
		r_char = static_cast<char>(r_double);
		if (r_double < 0 || r_double >= 256)
			flag[s_char] = Impossible;
		else if (r_double >= 31 && r_double < 127)
			flag[s_char] = Printable;
		else
			flag[s_char] = NonPrintable;
		r_int = static_cast<int>(r_double);
		if (r_double > (float)(INT_MAX) + 1 || r_double < INT_MIN)
			flag[s_int] = Impossible;
		else
			flag[s_int] = Printable;
		r_float = static_cast<float>(r_double);
		if (r_double > std::numeric_limits<float>::max() || r_double < -std::numeric_limits<float>::max())
			flag[s_float] = Impossible;
		else
			flag[s_float] = Printable;
	}
	this->ShowTime();
}

void Convert::parsing(std::string argv)
{
	std::stringstream ss;
	long c_long;
	long double c_ldouble;
	int i = 0;


	if (!isdigit(argv[0]) && argv.length() == 1)
	{
		this->r_char = argv[0];
		flag[s_char] = Printable;
		this->FromChar();
	}
	else if (!argv.compare("nan"))
	{
		r_double = std::numeric_limits<double>::quiet_NaN();
		flag[s_double] = Printable;
		this->FromDouble();
	}
	else if (!argv.compare("nanf"))
	{
		r_float = std::numeric_limits<float>::quiet_NaN( );
		flag[s_float] = Printable;
		this->FromFloat();
	}
	else if (!argv.compare("inf") || !argv.compare("+inf"))
	{
		r_double = std::numeric_limits<double>::infinity();
		flag[s_double] = Printable;
		this->FromDouble();
	}
	else if (!argv.compare("-inf"))
	{
		r_double = -std::numeric_limits<double>::infinity();
		flag[s_double] = Printable;
		this->FromDouble();
	}
	else if (!argv.compare("inff") || !argv.compare("+inff"))
	{
		r_float = std::numeric_limits<float>::infinity();
		flag[s_float] = Printable;
		this->FromFloat();
	}
	else if (!argv.compare("-inff"))
	{
		r_float = -std::numeric_limits<float>::infinity();
		flag[s_float] = Printable;
		this->FromFloat();
	}
	else if (argv[i] == '+' || argv[i] == '-' || isdigit(argv[i]))
	{
		ss << argv[i++];
		for (; i < (int)argv.length() && isdigit(argv[i]); i++)
			ss << argv[i];
		if (!argv[i])
		{
			ss >> c_long;
			r_int = static_cast<int>(c_long);
			if (c_long > std::numeric_limits<int>::max() || c_long < INT_MIN)
				flag[s_int] = Impossible;
			else
				flag[s_int] = Printable;
			this->FromInt();
		}
		else if (argv[i] == '.')
		{
			ss << argv[i++];
			for (; i < (int)argv.length() && isdigit(argv[i]); i++)
				ss << argv[i];
			if (!argv[i])
			{
				ss >> c_ldouble;
				r_double = static_cast<double>(c_ldouble);
				if (c_ldouble > std::numeric_limits<double>::max() || c_ldouble < -std::numeric_limits<double>::max())
					flag[s_double] = Impossible;
				else
					flag[s_double] = Printable;
				this->FromDouble();
			}
			else if ((argv[i] == 'f' || argv[i] == 'F') && !argv[i + 1])
			{
				ss >> r_double;
				r_float = static_cast<float>(r_double);
				if (r_double > std::numeric_limits<float>::max() || r_double < -std::numeric_limits<float>::max())
					flag[s_float] = Impossible;
				else
					flag[s_float] = Printable;
				this->FromFloat();
			}
			else
				this->_guide();
		}
		else
			this->_guide();
	}
	else
		this->_guide();
}

void Convert::ShowTime()
{
	if (flag[s_char] == Impossible)
		std::cout << "char	:	Impossible" << std::endl;
	else if (flag[s_char] == NonPrintable)
		std::cout << "char	:	NonPrintable" << std::endl;
	else
		std::cout << "char	:	" << r_char << std::endl;
	if (flag[s_int] == Impossible)
		std::cout << "int	:	Impossible" << std::endl; 
	else
		std::cout << "int	:	" << r_int << std::endl;
	if (flag[s_float] == Impossible)
		std::cout << "float	:	Impossible" << std::endl;
	else if (std::isnan(r_float))
		std::cout << "float	:	nanf" << std::endl;
	else if (r_float == std::numeric_limits<float>::infinity())
		std::cout << "float	:	inff" << std::endl;
	else if (r_float == -std::numeric_limits<float>::infinity())
		std::cout << "float	:	-inff" << std::endl;
	else
		std::cout << "float	:	" << std::fixed  << std::setprecision(1) << r_float  << "f"<< std::endl;
	if (flag[s_double] == Impossible)
		std::cout << "double	:	Impossible" << std::endl;
	else
		std::cout << "double	:	" << std::fixed << std::setprecision(1) << r_double << std::endl;
}