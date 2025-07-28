from setuptools import Extension, setup
from Cython.Build import cythonize

ext_modules = [
    Extension("HelloFunc",
              sources=["hellopython.pyx"]
              #libraries=["math"]  for Unix-like systems like MacOS or Linux
              )
]

setup(name="Demos",
      ext_modules=cythonize(ext_modules))