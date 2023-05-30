CC = g++
CFLAGS = -std=c++17

SRCS = main.cpp BankAccount.cpp SavingsAccount.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = bank_account_management_system

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
