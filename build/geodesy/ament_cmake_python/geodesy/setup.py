from setuptools import find_packages
from setuptools import setup

setup(
    name='geodesy',
    version='1.0.6',
    packages=find_packages(
        include=('geodesy', 'geodesy.*')),
)
