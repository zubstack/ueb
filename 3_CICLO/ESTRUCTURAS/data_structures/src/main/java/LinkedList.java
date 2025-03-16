class LinkedList {

    public Node head;

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    public void insertHead(int value) {
        Node newNode = new Node(value);
        newNode.next = head;
        head = newNode;
    }

    public void insertTail(int value) {
        Node newNode = new Node(value);
        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
    }

    public void insertValue(int afterValue, int newValue) {
        Node temp = head;
        while (temp != null && temp.data != afterValue) {
            temp = temp.next;
        }
        if (temp == null) {
            System.out.println("Value " + afterValue + " not found in the list.");
            return;
        }
        Node newNode = new Node(newValue);
        newNode.next = temp.next;
        temp.next = newNode;
    }

    public void insertReference(Node node, int newValue) {
        if (node == null) {
            System.out.println("Given node reference is null.");
            return;
        }
        Node newNode = new Node(newValue);
        newNode.next = node.next;
        node.next = newNode;
    }

    public Node extractHead() {
        if (head == null) return null;
        Node temp = head;
        head = head.next;
        temp.next = null; // Avoid memory leaks
        return temp;
    }

    public Node extractTail() {
        if (head == null) return null;

        if (head.next == null) {
            Node tail = head;
            head = null;
            return tail;
        }

        Node temp1 = head;
        Node temp2 = null;
        while (temp1.next != null) {
            temp2 = temp1;
            temp1 = temp1.next;
        }

        temp2.next = null;
        return temp1;
    }

    public Node extractValue(int value) {
        if (head == null) return null;

        if (head.data == value) {
            Node temp = head;
            head = head.next;
            temp.next = null; // Avoid memory leaks
            return temp;
        }

        Node temp = head;
        while (temp.next != null && temp.next.data != value) {
            temp = temp.next;
        }

        if (temp.next == null) return null; // Value not found

        Node nodeToRemove = temp.next;
        temp.next = nodeToRemove.next;
        nodeToRemove.next = null; // Avoid memory leaks
        return nodeToRemove;
    }

    public Node extractReference(Node node) {
        if (head == null || node == null) return null;

        if (head == node) {
            head = head.next;
            node.next = null; // Avoid memory leaks
            return node;
        }

        Node temp = head;
        while (temp.next != null && temp.next != node) {
            temp = temp.next;
        }

        if (temp.next == null) return null; // Node not found

        temp.next = node.next;
        node.next = null; // Avoid memory leaks
        return node;
    }

    public void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int getLength() {
        int count = 0;
        Node temp = head;
        while (temp != null) {
            count++;
            temp = temp.next;
        }
        return count;
    }

    public void clear() {
        this.head = null;
    }
}
