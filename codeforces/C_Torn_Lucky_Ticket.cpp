#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isLuckyTicket(string ticket)
{
    if (ticket.length() % 2 != 0)
    {
        return false;
    }

    int sumOfFirstHalf = 0;
    for (int i = 0; i < ticket.length() / 2; i++)
    {
        sumOfFirstHalf += ticket[i] - '0';
    }

    int sumOfSecondHalf = 0;
    for (int i = ticket.length() / 2; i < ticket.length(); i++)
    {
        sumOfSecondHalf += ticket[i] - '0';
    }

    return sumOfFirstHalf == sumOfSecondHalf;
}

int countLuckyTickets(vector<string> &tickets)
{
    unordered_map<string, int> ticketCountMap;
    for (string ticket : tickets)
    {
        ticketCountMap[ticket]++;
    }

    int count = 0;
    for (int i = 0; i < tickets.size(); i++)
    {
        for (int j = i; j < tickets.size(); j++)
        {
            string combinedTicket = tickets[i] + tickets[j];
            if (isLuckyTicket(combinedTicket))
            {
                int count1 = ticketCountMap[tickets[i]];
                int count2 = ticketCountMap[tickets[j]];

                if (i == j)
                {
                    count += count1 * (count1 - 1) / 2;
                }
                else
                {
                    count += count1 * count2;
                }
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<string> tickets(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tickets[i];
    }

    int count = countLuckyTickets(tickets);
    cout << count << endl;

    return 0;
}
