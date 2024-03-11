from setuptools import find_packages
from setuptools import setup

setup(
    name='user_input_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('user_input_interfaces', 'user_input_interfaces.*')),
)
