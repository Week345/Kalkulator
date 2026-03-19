#include "pch.h"
#include "../Kalkulator/kalkulator.h"
#include "../Kalkulator/Kalkulator.cpp"

TEST(KalkulatorTests, Odejmowanie) {
    Kalkulator kalk;
    kalk.setLiczby(7, 5);
    ASSERT_EQ(2, kalk.odejmij());
}

TEST(KalkulatorTests, Dodawanie) {
    Kalkulator kalk;
    kalk.setLiczby(7, 5);
    ASSERT_EQ(12, kalk.dodaj());
}

TEST(KalkulatorTests, Mnozenie) {
    Kalkulator kalk;
    kalk.setLiczby(7, 5);
    ASSERT_EQ(35, kalk.pomnoz());
}