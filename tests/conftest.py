#!/usr/bin/env python3
"""Set up a few QT fixtures for the tests."""
import pytest
from PyQt5.QtWidgets import QMainWindow

from passwordgenerator import passwordgenerator

@pytest.fixture(scope="session")
def ui_main_window():
    """Generate the Ui_MainWindow for the session."""
    return passwordgenerator.Ui_MainWindow()


@pytest.fixture(scope="session")
def main_window():
    return QMainWindow()
