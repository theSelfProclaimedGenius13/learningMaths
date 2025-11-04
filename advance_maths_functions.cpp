#include<limits>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
namespace adv_maths_func
{
	inline constexpr double PI = double(double(22) / double(7));
	double factorial (double num) noexcept {
		return std::tgamma(num + 1);
	}
	double mean(const std::vector<double>& numbers) noexcept {
		double sum = 0.0;
		for (double num : numbers) {
			sum += num;
		}
		return sum / numbers.size();
	}
	double median(const std::vector<double>& numbers) noexcept {
		if (numbers.empty()) {
			return std::numeric_limits<double>::quiet_NaN();
		}
		std::vector<double> sorted_vec = numbers;
		std::sort(sorted_vec.begin(), sorted_vec.end());
		size_t n = sorted_vec.size();
		size_t mid_index = n / 2;

		if (n % 2 == 1) {
			return sorted_vec[mid_index];
		}
		else {
			return (sorted_vec[mid_index - 1] + sorted_vec[mid_index]) / 2.0;
		}
	}
	std::vector<double> mode(const std::vector<double>& numbers) noexcept {
		if (numbers.empty()) {
			return {};
		}
		std::map<double, int> counts;
		for (double num : numbers) {
			counts[num]++;
		}
		int max_count = 0;
		for (auto const& [value, count] : counts) {
			if (count > max_count) {
				max_count = count;
			}
		}
		if (max_count == 1) {
			return {}; 
		}
		std::vector<double> modes;
		for (auto const& [value, count] : counts) {
			if (count == max_count) {
				modes.push_back(value);
			}
		}
		return modes;
	}
	
}