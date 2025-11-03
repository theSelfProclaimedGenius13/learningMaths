#include<limits>
#include<cmath>
namespace basic_trig_func 
{
	double sin(double angle_in_radians) noexcept {
		return std::sin(angle_in_radians);
	}
	double cos(double angle_in_radians) noexcept {
		return std::cos(angle_in_radians);
	}
	double tan(double angle_in_radians) noexcept {
		return std::tan(angle_in_radians);
	}
	double asin(double value) noexcept {
		return std::asin(value);
	}
	double acos(double value) noexcept {
		return std::acos(value);
	}
	double atan(double value) noexcept {
		return std::atan(value);
	}
}