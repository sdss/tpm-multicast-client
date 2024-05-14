#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# @Author: José Sánchez-Gallego (gallegoj@uw.edu)
# @Date: 2024-05-14
# @Filename: unpack.py
# @License: BSD 3-clause (http://www.opensource.org/licenses/BSD-3-Clause)

from __future__ import annotations

from tpm_multicast_client.unpack import unpack_tpm_data

from .data.unpack_test_data import buffer, unpacked


def test_unpack():
    assert unpack_tpm_data(buffer) == unpacked
