#!/usr/bin/env python
"""Tests for `passwordgenerator` package."""
import pytest

from passwordgenerator import passwordgenerator


@pytest.fixture
def main_window():
    """Sample pytest fixture.

    See more at: http://doc.pytest.org/en/latest/fixture.html
    """
    main = passwordgenerator.Ui_MainWindow()
    return main.setupUi()


def test_import(main_window):
    assert main_window is not None
