#include<limits>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>

namespace geometry_func 
{
	
	inline constexpr double PI = double(double(22) / double(7));

	namespace area_of 
	{
		inline constexpr double area_of_circle(double radius) noexcept {
			return PI * radius * radius;
		}
		inline constexpr double area_of_rectangle(double length, double width) noexcept {
			return length * width;
		}
		inline constexpr double area_of_triangle(double base, double height) noexcept {
			return 0.5 * base * height;
		}
		inline constexpr double surface_area_of_sphere(double radius) noexcept {
			return 4 * PI * radius * radius;
		}
		inline constexpr double surface_area_of_cylinder(double radius, double height) noexcept {
			return 2 * PI * radius * (radius + height);
		}
		inline constexpr double surface_area_of_cone(double radius, double slant_height) noexcept {
			return PI * radius * (radius + slant_height);
		}
		inline constexpr double area_of_square(double side) noexcept {
			return side * side;
		}
		inline constexpr double area_of_parallelogram(double base, double height) noexcept {
			return base * height;
		}
		inline constexpr double area_of_trapezoid(double base1, double base2, double height) noexcept {
			return 0.5 * (base1 + base2) * height;
		}
		inline constexpr double area_of_rhombus(double diagonal1, double diagonal2) noexcept {
			return 0.5 * diagonal1 * diagonal2;
		}
		inline constexpr double surface_area_of_cube(double side) noexcept {
			return 6 * side * side;
		}
		inline constexpr double surface_area_of_rectangular_prism(double length, double width, double height) noexcept {
			return 2 * (length * width + width * height + height * length);
		}
		inline constexpr double surface_area_of_pyramid(double base_area, double slant_height, double perimeter_of_base) noexcept {
			return base_area + 0.5 * perimeter_of_base * slant_height;
		}
		inline constexpr double surface_area_of_triangular_prism(double base_area, double height, double perimeter_of_base) noexcept {
			return 2 * base_area + perimeter_of_base * height;
		}
	}

	namespace pvc 
	{
		inline constexpr double circumference_of_circle(double radius) noexcept {
			return 2 * PI * radius;
		}

		inline constexpr double perimeter_of_rectangle(double length, double width) noexcept {
			return 2 * (length + width);
		}

		inline constexpr double perimeter_of_triangle(double side1, double side2, double side3) noexcept {
			return side1 + side2 + side3;
		}
		inline constexpr double volume_of_sphere(double radius) noexcept {
			return (4.0 / 3.0) * PI * (radius * radius * radius);
		}

		inline constexpr double volume_of_cylinder(double radius, double height) noexcept {
			return PI * radius * radius * height;
		}

		inline constexpr double volume_of_cone(double radius, double height) noexcept {
			return (1.0 / 3.0) * PI * radius * radius * height;
		}
		inline constexpr double perimeter_of_square(double side) noexcept {
			return 4 * side;
		}
		inline constexpr double perimeter_of_parallelogram(double side1, double side2) noexcept {
			return 2 * (side1 + side2);
		}
		inline constexpr double perimeter_of_trapezoid(double side1, double side2, double side3, double side4) noexcept {
			return side1 + side2 + side3 + side4;
		}
		inline constexpr double volume_of_cube(double side) noexcept {
			return side * side * side;
		}
		inline constexpr double volume_of_rectangular_prism(double length, double width, double height) noexcept {
			return length * width * height;
		}
		inline constexpr double volume_of_pyramid(double base_area, double height) noexcept {
			return (1.0 / 3.0) * base_area * height;
		}
		inline constexpr double volume_of_triangular_prism(double base_area, double height) noexcept {
			return base_area * height;
		}
	}
	namespace sum_of_angles 
	{
		inline constexpr double interior_angles_sum_of_polygon(int number_of_sides) noexcept {
			if (number_of_sides < 3) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return ((number_of_sides - 2) * 180.0);
		}
		inline constexpr double interior_angle_of_regular_polygon(int number_of_sides) noexcept {
			if (number_of_sides < 3) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return ((number_of_sides - 2) * 180.0) / number_of_sides;
		}
		inline constexpr double exterior_angles_sum_of_polygon(int number_of_sides) noexcept {
			if (number_of_sides < 3) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return 360.0;
		}
		inline constexpr double exterior_angle_of_regular_polygon(int number_of_sides) noexcept {
			if (number_of_sides < 3) {
				return std::numeric_limits<double>::quiet_NaN();
			}
			return 360.0 / number_of_sides;
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
	namespace coordinate_geometry 
	{
		inline constexpr double distance_between_two_points(double x1, double y1, double x2, double y2) noexcept {
			return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		}
		inline constexpr double midpoint_x(double x1, double x2) noexcept {
			return (x1 + x2) / 2.0;
		}
		inline constexpr double midpoint_y(double y1, double y2) noexcept {
			return (y1 + y2) / 2.0;
		}
		inline constexpr std::pair<double, double> midpoint_of_line(double x1, double y1, double x2, double y2) noexcept {
			return { midpoint_x(x1, x2), midpoint_y(y1, y2) };
		}
		inline constexpr double slope_of_line(double x1, double y1, double x2, double y2) noexcept {
			if (x2 - x1 == 0) {
				return std::numeric_limits<double>::infinity();
			}
			return (y2 - y1) / (x2 - x1);
		}
		inline constexpr double equation_of_y(double slope, double x, double y_intercept) noexcept {
			return slope * x + y_intercept;
		}
	}
}