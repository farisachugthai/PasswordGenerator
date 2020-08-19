#!/usr/bin/env python
"""Tests for `passwordgenerator` package."""
import pytest


def test_import(ui_main_window):
    assert ui_main_window is not None


if __name__ == '__main__':
    pytest.main()
