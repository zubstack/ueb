
public class Stack extends LinkedList {
    public void push(Node n) {
        this.insert(n.data);
    }

    public Node pop() {
        Node n = this.extractTail();
        return n;
    }

    public boolean isEmpty() {
        return this.head == null;
    }
}
