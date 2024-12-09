import java.util.PriorityQueue;

class Solution {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        if (hand.length % groupSize != 0) {
            return false;
        }

        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int card : hand) {
            pq.offer(card);
        }

        while (!pq.isEmpty()) {
            int start = pq.poll();
            for (int i = 1; i < groupSize; i++) {
                if (!pq.remove(start + i)) {
                    return false;
                }
            }
        }

        return true;
    }
}
