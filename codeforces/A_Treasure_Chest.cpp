#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        // Calculate the distance between Monocarp and the chest.
        int distance_to_chest = abs(x - 0);

        // Calculate the distance between Monocarp and the key.
        int distance_to_key = abs(y - 0);

        // Determine the best strategy for Monocarp to get to the chest and open it.
        int total_time;
        if (distance_to_key > distance_to_chest)
        {
            // Monocarp should pick up the key on his way to the chest.
            total_time = 2 * distance_to_key;
        }
        else if (distance_to_chest > k)
        {
            // Monocarp should put the chest down at some point, pick up the key, and then go back to pick up the chest and open it.
            int distance_to_put_down_chest = distance_to_chest - k;
            total_time = distance_to_put_down_chest + 2 * distance_to_key + (distance_to_chest - distance_to_put_down_chest);
        }
        else
        {
            // Monocarp can carry the chest the entire distance.
            total_time = distance_to_chest;
        }

        // Print the smallest time required for Monocarp to open the chest.
        cout << total_time << endl;
    }

    return 0;
}
