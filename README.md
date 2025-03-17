# xtensor-playground

My effort learn internals of xtensor Linear Algebra Library.

# Installation

Follow the instructions at [xtensor documentation](https://xtensor.readthedocs.io/en/latest/installation.html)

Here are the steps I followed:

First, install the `xtl` library using its [source](https://github.com/xtensor-stack/xtl).

```bash
git clone git@github.com:xtensor-stack/xtl.git
cd xtl
mkdir build
cd build
cmake -D CMAKE_INSTALL_PREFIX=your_install_prefix ../
make install
```

This will install all the header files to `your_install_prefix`.
Where `your_install_prefix` can be for example, `/home/sree/linalg/installations/`.

Second, install the `xsimd` library using its [source](https://github.com/xtensor-stack/xsimd).

```bash
git clone git@github.com:xtensor-stack/xsimd.git
cd xsimd
mkdir build
cd build
cmake -D CMAKE_INSTALL_PREFIX=your_install_prefix ../
make install
```

Once again, this will install all the header files to `your_install_prefix`.

Thrid, we clone the `xtensor` from its [source](https://github.com/xtensor-stack/xtensor) and install it.

```bash
git clone git@github.com:xtensor-stack/xtensor.git
cd xtensor
mkdir build
cd build
cmake -D CMAKE_INSTALL_PREFIX=your_install_prefix ../
make install
```

This will install all the `xtensor` header files to `your_install_prefix`.

# Examples

Here we create a few examples to understand how the `xtensor` library work.

If you're using VS Code to build this repo, you might want to specify where the installtion of `xtensor`, `xsimd` and `xtl` are.
Edit the `settings.json` for the user and add the following.

```json
{

    "cmake.configureSettings": {
        "CMAKE_PREFIX_PATH": ["your_install_prefix"]
    }
}
```
