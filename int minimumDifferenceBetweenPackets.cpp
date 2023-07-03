int minimumDifferenceBetweenPackets(std::vector<int>& packets, int m) {
    if (m == 0 || n == 0)
        return 0;

    std::sort(packets.begin(), packets.end());

    int start = 0;
    int end = m - 1;
    int minDifference = packets[end] - packets[start];

    while (end < packets.size()) {
        int difference = packets[end] - packets[start];
        if (difference < minDifference)
            minDifference = difference;

        start++;
        end++;
    }

    return minDifference;
}