#include <iostream>
#include <vector>
using namespace std;

class nonWithdrawableAccount
{
public:
    virtual void deposit(double amount) = 0;
};

class withdrawableAccount : public nonWithdrawableAccount
{
public:
    virtual void withdraw(double amount) = 0;
};

class savingsAccount : public withdrawableAccount
{
    double blance;

    void deposit(double amount) override
    {
        blance += amount;
        cout << "deposited : " << amount << "Current : " << blance << endl;
    }

    void withdraw(double amount) override
    {
        blance -= amount;
        cout << "Withdrawn : " << amount << "Current : " << blance << endl;
    }
};

class currentAccount : public withdrawableAccount
{
    double blance;

    void deposit(double amount) override
    {
        blance += amount;
        cout << "deposited : " << amount << "Current : " << blance << endl;
    }

    void withdraw(double amount) override
    {
        blance -= amount;
        cout << "Withdrawn : " << amount << "Current : " << blance << endl;
    }
};

class FixedDepositeAccount : public nonWithdrawableAccount
{
    double blance;

    void deposit(double amount) override
    {
        blance += amount;
        cout << "deposited : " << amount << "Current : " << blance << endl;
    }
};

class BankClient
{
    vector<nonWithdrawableAccount *> nonWithdrawableAccounts;
    vector<withdrawableAccount *> withdrawableAccounts;

public:
    BankClient(vector<nonWithdrawableAccount *> nonWithdrawableAccounts, vector<withdrawableAccount *> withdrawableAccounts)
    {
        this->nonWithdrawableAccounts = nonWithdrawableAccounts;
        this->withdrawableAccounts = withdrawableAccounts;
    }

    void ProcessTransactions()
    {
        for (nonWithdrawableAccount *account : nonWithdrawableAccounts)
        {
            account->deposit(1000);
        }

        for (withdrawableAccount *account : withdrawableAccounts)
        {
            account->deposit(600);
            account->withdraw(1000);
        }
    }
};

int main()
{

    vector<nonWithdrawableAccount *> list1;
    list1.push_back(new FixedDepositeAccount);
    list1.push_back(new FixedDepositeAccount);

    vector<withdrawableAccount *> list2;
    list2.push_back(new currentAccount);
    list2.push_back(new currentAccount);
    list2.push_back(new savingsAccount);
    list2.push_back(new savingsAccount);

    BankClient *client = new BankClient(list1, list2);
    client->ProcessTransactions();

    return 0;
};