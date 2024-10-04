from setuptools import setup
from setuptools import Extension
import pybind11

ext_modules = [
    Extension(
        'ProjectDrabinka',
        ['src/ProjectDrabinka.cpp'],
        include_dirs=[pybind11.get_include()],
        language='c++'
    ),
]

setup(
    name='ProjectDrabinka',
    ext_modules=ext_modules,
)