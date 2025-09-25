from setuptools import setup
from Cython.Build import cythonize

setup(
    ext_modules = cythonize("rect.pyx")
)
# python setuprect.py build_ext --inplace (use this)