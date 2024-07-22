from setuptools import find_packages
from setuptools import setup

setup(
    name='gps_tools',
    version='2.0.4',
    packages=find_packages(
        include=('gps_tools', 'gps_tools.*')),
)
