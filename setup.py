#!/usr/bin/env python
"""The setup script."""
from setuptools import setup, find_packages

with open('README.rst') as readme_file:
    readme = readme_file.read()

with open('HISTORY.rst') as history_file:
    history = history_file.read()

# So I'll admit there are a crazy # of ways to do this including runpy,
# pkg_resources, importlib_metadata and more. Let's not go through ALL of
# that and simply note that this needs to be updated in tandem with
# ./passwordgenerator/__init__.py
try:
    from passwordgenerator import __version__
except ImportError:
    __version__ = '0.1.1'

requirements = [ ]

setup_requirements = ['pytest-runner', ]

test_requirements = ['pytest>=3', ]

setup(
    author="Faris A Chugthai",
    author_email='farischugthai@gmail.com',
    python_requires='>=3.5',
    classifiers=[
        'Development Status :: 2 - Pre-Alpha',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
    ],
    description="Password generator using PyQt5",
    install_requires=requirements,
    license="MIT license",
    long_description=readme + '\n\n' + history,
    include_package_data=True,
    keywords='passwordgenerator',
    name='passwordgenerator',
    packages=find_packages(include=['passwordgenerator', 'passwordgenerator.*']),
    setup_requires=setup_requirements,
    test_suite='tests',
    tests_require=test_requirements,
    url='https://github.com/farisachugthai/passwordgenerator',
    version=__version__,
    zip_safe=False,
)
