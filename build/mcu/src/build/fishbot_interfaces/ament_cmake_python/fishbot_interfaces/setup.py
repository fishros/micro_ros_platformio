from setuptools import find_packages
from setuptools import setup

setup(
    name='fishbot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('fishbot_interfaces', 'fishbot_interfaces.*')),
)
