# Comparing Numpy Initalisations

Here we compare how the `xtensor` with `NumPy` on various tensor initialisers.
A full list can be found [here](https://xtensor.readthedocs.io/en/latest/numpy.html).

First table:

| Python 3 - NumPy           | C++ 14 - xtensor                                                              |
|----------------------------|-------------------------------------------------------------------------------|
| np.array([[3, 4], [5, 6]]) | xt::xarray<double>({{3, 4}, {5, 6}}) xt::xtensor<double, 2>({{3, 4}, {5, 6}}) |
| arr.reshape([3, 4])        | arr.reshape({3, 4})                                                           |
| arr.astype(np.float64)     | xt::cast<double>(arr)                                                         |

and the second:

| Python 3 - NumPy                       | C++ 14 - xtensor                     |
|----------------------------------------|--------------------------------------|
| np.zeros([3, 4])                       | xt::zeros<double>({3, 4})            |
| np.ones([3, 4])                        | xt::ones<double>({3, 4})             |
| np.linspace(1.0, 10.0, 100)            | xt::linspace<double>(1.0, 10.0, 100) |
| np.logspace(2.0, 3.0, 4)               | xt::logspace<double>(2.0, 3.0, 4)    |
| np.arange(3, 7)                        | xt::arange(3, 7)                     |
| np.eye(4)                              | xt::eye(4)                           |
| np.empty([3, 4])                       | xt::empty<double>({3, 4})            |
| np.meshgrid(x0, x1, x2, indexing='ij') | xt::meshgrid(x0, x1, x2)             |

Now, we will try each one of these in our `xtensor` example [`initialisations.cpp`](./initialisations.cpp)
