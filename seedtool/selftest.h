// Copyright © 2020 Blockchain Commons, LLC

#ifndef SELFTEST_H
#define SELFTEST_H

void selftest();

// Used to populate dummy data in UI testing.
const uint16_t * selftest_dummy_bip39();
const uint16_t * selftest_dummy_slip39(size_t ndx);

#endif // SELFTEST_H
