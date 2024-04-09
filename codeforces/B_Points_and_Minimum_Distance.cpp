#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point
{
    int x;
    int y;
};

struct Distance
{
    int point1;
    int point2;
    int distance;
};

bool operator<(const Distance &d1, const Distance &d2)
{
    return d1.distance > d2.distance;
}

vector<Point> formPoints(vector<int> &a)
{
    vector<Point> points;
    for (int i = 0; i < a.size(); i += 2)
    {
        Point point;
        point.x = a[i];
        point.y = a[i + 1];
        points.push_back(point);
    }
    return points;
}

vector<Distance> getDistances(vector<Point> &points)
{
    vector<Distance> distances;
    for (int i = 0; i < points.size(); i++)
    {
        for (int j = i + 1; j < points.size(); j++)
        {
            Distance distance;
            distance.point1 = i;
            distance.point2 = j;
            distance.distance = abs(points[i].x - points[j].x) + abs(points[i].y - points[j].y);
            distances.push_back(distance);
        }
    }
    return distances;
}

vector<int> findPath(vector<Distance> &distances, vector<Point> &points)
{
    priority_queue<Distance> pq;
    for (Distance distance : distances)
    {
        pq.push(distance);
    }

    vector<int> visited(points.size(), false);
    vector<int> path;
    path.push_back(0);
    visited[0] = true;

    while (!pq.empty())
    {
        Distance distance = pq.top();
        pq.pop();

        if (!visited[distance.point2])
        {
            visited[distance.point2] = true;
            path.push_back(distance.point2);
        }
    }

    return path;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }

        vector<Point> points = formPoints(a);
        vector<Distance> distances = getDistances(points);
        vector<int> path = findPath(distances, points);

        // Print the length of the path.
        int length = 0;
        for (int i = 0; i < path.size() - 1; i++)
        {
            length += distances[path[i] * points.size() + path[i + 1]].distance;
        }
        cout << length << endl;

        // Print the coordinates of the points in the path.
        for (int i = 0; i < path.size(); i++)
        {
            cout << points[path[i]].x << " " << points[path[i]].y << endl;
        }
    }

    return 0;
}
