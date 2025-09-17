#include "events.hpp"
#include <sstream>
#include <cassert>

void test_trade_event() {
    std::ostringstream oss;
    TradeEvent t("MSFT", 1694901234, 330.50, 200);
    std::streambuf* old = std::cout.rdbuf(oss.rdbuf());
    t.print();
    std::cout.rdbuf(old);
    assert(oss.str().find("Trade: MSFT @ 330.5 x 200") != std::string::npos);
}

void test_quote_event() {
    std::ostringstream oss;
    QuoteEvent q("GOOG", 1694901235, 134.10, 134.20);
    std::streambuf* old = std::cout.rdbuf(oss.rdbuf());
    q.print();
    std::cout.rdbuf(old);
    assert(oss.str().find("Quote: GOOG bid 134.1, ask 134.2") != std::string::npos);
}

int main() {
    test_trade_event();
    test_quote_event();
    std::cout << "All tests passed.\n";
    return 0;
}
