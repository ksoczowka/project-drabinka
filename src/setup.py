from setuptools import setup
from setuptools import Extension
import pybind11

ext_modules = [
    Extension(
        'simpleTestExtension',
        ['src/example.cpp'],
        include_dirs=[pybind11.get_include()],
        language='c++'
    ),
]

setup(
    name='simpleTestExtension',
    ext_modules=ext_modules,
)