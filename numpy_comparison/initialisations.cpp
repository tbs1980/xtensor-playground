#include <iostream>
#include <xtensor/xarray.hpp>
#include <xtensor/xio.hpp>

int main()
{
    // np.array([[3, 4], [5, 6]])
	xt::xarray<double> arr1{{3, 4}, {5, 6}};

    std::cout << "comparing np.array([[3, 4], [5, 6]])" << std::endl;
	std::cout << arr1 << std::endl;

	// np.zeros([3, 4])
	auto arr2 = xt::zeros<double>({3, 4});

    std::cout << "comparing np.zeros([3, 4])" << std::endl;
	std::cout << arr2 << std::endl;
}
