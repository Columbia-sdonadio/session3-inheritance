### 📝 Steps to Create the File

1. Open your terminal and navigate to your project folder:
   ```bash
   cd exchange_events
   ```

2. Create the file:
   ```bash
   touch README.md
   ```

3. Open it in your preferred editor (e.g., VS Code, nano, or TextEdit), and paste the following content:

```markdown
# 🧩 C++ Inheritance Exercise: Modeling Exchange Events in HFT

Welcome to your first hands-on C++ assignment in the context of high-frequency trading (HFT)! In this exercise, you'll use object-oriented programming to model different types of exchange events using inheritance and polymorphism.

---

## 🎯 Objective

Build a simple class hierarchy to represent exchange events like trades and quotes. You'll implement a base class and two derived classes, then demonstrate polymorphism by printing event details.

---

## 📁 File Overview

| File            | Purpose                                                  |
|-----------------|----------------------------------------------------------|
| `events.hpp`    | Contains class definitions for `ExchangeEvent`, `TradeEvent`, and `QuoteEvent` |
| `main.cpp`      | Entry point for manual testing of your implementation    |
| `test.cpp`      | Contains automated tests for CI validation               |
| `.github/workflows/ci.yml` | GitHub Actions workflow for automated testing |

---

## 🛠️ Instructions

1. **Clone the repository**  
   ```bash
   git clone https://github.com/YOUR_ORG/cpp-hft-inheritance-exercise.git
   cd cpp-hft-inheritance-exercise
   ```

2. **Compile and run manually**  
   ```bash
   g++ -std=c++17 main.cpp -o main
   ./main
   ```

3. **Run automated tests**  
   ```bash
   g++ -std=c++17 test.cpp -o test
   ./test
   ```

4. **Push your changes**  
   GitHub Actions will automatically run the tests and show results in the "Actions" tab.

---

## 🧪 What You’ll Implement

- A base class `ExchangeEvent` with:
  - `symbol` (string)
  - `timestamp` (long)
  - A virtual `print()` method

- A derived class `TradeEvent` with:
  - `price` (double)
  - `quantity` (int)
  - Overridden `print()` method

- A derived class `QuoteEvent` with:
  - `bid` and `ask` (double)
  - Overridden `print()` method

- Demonstrate polymorphism using base class pointers.

---

## 🧩 Optional Extensions

- Add a virtual method `getLatency()` to simulate event timing.
- Store events in a `std::vector<ExchangeEvent*>` and iterate through them.
- Create a `MarketDataFeed` class to dispatch events dynamically.

---

## ✅ Expected Output

```
Trade: AAPL @ 187.25 x 100 at 1694900000  
Quote: AAPL bid 187.2, ask 187.3 at 1694900001  
All tests passed.
```

---

## 🧠 Tips

- Use `std::ostringstream` in `test.cpp` to capture and validate output.
- Make sure all class methods are fully defined—missing implementations will cause linker errors.
- If you're on Apple Silicon (M1/M2), compile with `-arch arm64` if needed.

---

Happy coding! If you get stuck, check the comments in each file or ask for help in the classroom discussion thread.
```

Once pasted, save the file and commit it to your repo:

```bash
git add README.md
git commit -m "Add assignment README"
git push
```

