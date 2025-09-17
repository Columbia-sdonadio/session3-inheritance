#include "events.hpp"

int main() {
    ExchangeEvent* e1 = new TradeEvent("AAPL", 1694900000, 187.25, 100);
    ExchangeEvent* e2 = new QuoteEvent("AAPL", 1694900001, 187.20, 187.30);

    e1->print();
    e2->print();

    delete e1;
    delete e2;

    return 0;
}
