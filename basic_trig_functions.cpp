#include<limits>
#include<cmath>
namespace basic_trig_func 
{
	inline constexpr double PI = double(double(22) / double(7));
	namespace sides_to_ratios
	{
		inline constexpr double sin(double opposite_side, double hypotenuse) noexcept {
			if (hypotenuse == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return opposite_side / hypotenuse;
		}
		inline constexpr double cos(double adjacent_side, double hypotenuse) noexcept {
			if (hypotenuse == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return adjacent_side / hypotenuse;
		}
		inline constexpr double tan(double opposite_side, double adjacent_side) noexcept {
			if (adjacent_side == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return opposite_side / adjacent_side;
		}
		inline constexpr double cosec(double hypotenuse, double opposite_side) noexcept {
			if (opposite_side == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return hypotenuse / opposite_side;
		}
		inline constexpr double sec(double hypotenuse, double adjacent_side) noexcept {
			if (adjacent_side == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return hypotenuse / adjacent_side;
		}
		inline constexpr double cot(double adjacent_side, double opposite_side) noexcept {
			if (opposite_side == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return adjacent_side / opposite_side;
		}
	}
	namespace angle_to_sin_cos_tan
	{
		inline constexpr double sin(double angle_in_radians) noexcept {
			return std::sin(angle_in_radians);
		}
		inline constexpr double cos(double angle_in_radians) noexcept {
			return std::cos(angle_in_radians);
		}
		inline constexpr double tan(double angle_in_radians) noexcept {
			return std::tan(angle_in_radians);
		}
		inline constexpr double cosec(double angle_in_radians) noexcept {
			double sine_value = std::sin(angle_in_radians);
			if (sine_value == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return 1.0 / sine_value;
		}
		inline constexpr double sec(double angle_in_radians) noexcept {
			double cosine_value = std::cos(angle_in_radians);
			if (cosine_value == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return 1.0 / cosine_value;
		}
		inline constexpr double cot(double angle_in_radians) noexcept {
			double tangent_value = std::tan(angle_in_radians);
			if (tangent_value == 0) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return 1.0 / tangent_value;
		}
	}
	namespace ratio_to_angle
	{
		inline constexpr double arcsin(double ratio) noexcept {
			if (ratio < -1 || ratio > 1) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return std::asin(ratio);
		}
		inline constexpr double arccos(double ratio) noexcept {
			if (ratio < -1 || ratio > 1) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return std::acos(ratio);
		}
		inline constexpr double arctan(double ratio) noexcept {
			return std::atan(ratio);
		}
		inline constexpr double arccosec(double ratio) noexcept {
			if (ratio > -1 && ratio < 1) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return std::asin(1.0 / ratio);
		}
		inline constexpr double arcsec(double ratio) noexcept {
			if (ratio > -1 && ratio < 1) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return std::acos(1.0 / ratio);
		}
		inline constexpr double arccot(double ratio) noexcept {
			return std::atan(1.0 / ratio);
		}
	}
	namespace angle_conversions 
	{
		inline constexpr double degrees_to_radians(double degrees) noexcept {
			return degrees * (PI / 180.0);
		}
		inline constexpr double radians_to_degrees(double radians) noexcept {
			return radians * (180.0 / PI);
		}
	}
}