#include "events.hpp"
#include <sstream>
#include <iostream>

int main() {
    std::ostringstream out;

    ExchangeEvent* e1 = new TradeEvent("AAPL", 1694900000, 187.25, 100);
    ExchangeEvent* e2 = new QuoteEvent("AAPL", 1694900001, 187.20, 187.30);

    e1->print(out);
    e2->print(out);

    std::string expected =
        "Trade: AAPL @ 187.25 x 100 at 1694900000\n"
        "Quote: AAPL bid 187.2, ask 187.3 at 1694900001\n";

    if (out.str() != expected) {
        std::cerr << "❌ Output mismatch:\n" << out.str();
        return 1;
    }

    std::cout << "✅ All tests passed.\n";
    return 0;
}
