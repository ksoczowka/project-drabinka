from setuptools import setup, Extension
import pybind11

include = [pybind11.get_include(), "./include"]
source = ['./src/bindings.cpp']

ext_modules = [
    Extension(
        'ProjectDrabinka',
        sources = source,
        include_dirs= include,
        language='c++'
    ),
]

setup(
    name='ProjectDrabinka',
    ext_modules=ext_modules,
    zip_safe = False,
)