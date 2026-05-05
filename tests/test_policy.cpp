#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{83, 84, 16, 7, 6};
    assert(score_signal(signal_case_1) == 155);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{99, 106, 23, 21, 13};
    assert(score_signal(signal_case_2) == 104);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{84, 103, 17, 14, 4};
    assert(score_signal(signal_case_3) == 117);
    assert(classify_signal(signal_case_3) == "review");
}
