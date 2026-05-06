#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{68, 21, 30, 88};
    assert(domain_review_score(item) == 155);
    assert(domain_review_lane(item) == "ship");
}
