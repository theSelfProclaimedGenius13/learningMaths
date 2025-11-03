#include<limits>
#include<cmath>

namespace basic_maths_func 
{
	double add(double num1, double num2) noexcept {
		return num1 + num2;
	}
	double subtract(double num1, double num2) noexcept {
		return num1 - num2;
	}
	double multiply(double num1, double num2) noexcept {
		return num1 * num2;
	}
	double divide(double num1, double num2) noexcept {
		return num1 / num2;
	}
	double avg_of_two(double num1, double num2) noexcept {
		return (num1 + num2) / 2.0;
	}
	double mod(double num1, double num2) noexcept {
		return std::fmod(num1, num2);
	}
	double absoulute(double num) noexcept {
		if (num < 0) {
			return -num;
		}
		return num;
	}
	double maximum(double num1, double num2) noexcept {
		return (num1 > num2) ? num1 : num2;
	}
	double minimum(double num1, double num2) noexcept {
		return (num1 < num2) ? num1 : num2;
	}
	double floor(double num) noexcept {
		return std::floor(num);
	}
	double ceil(double num) noexcept {
		return std::ceil(num);
	}
	double round(double num) noexcept {
		return std::round(num);
	}
	double square(double num) noexcept {
		return num * num;
	}
	double square_root(double num) noexcept {
		return std::sqrt(num);
	}
	double cube(double num) noexcept {
		return num * num * num;
	}
	double cube_root(double num) noexcept {
		return std::cbrt(num);
	}
	double power(double base, double exponent) noexcept {
		return std::pow(base, exponent);
	}
	double exponential(double exponent) noexcept {
		return std::exp(exponent);
	}
	double log_base_10(double num, double base = 10) noexcept {
		return std::log(num) / std::log(base);
	}
	double log_base_2(double num) noexcept {
		return std::log2(num);
	}
	double natural_logarithm(double num) noexcept {
		return std::log(num);
	}
}