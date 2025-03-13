class LinkedList {
    Node head;

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

        Node temp = head;
        Node temp2;

        if (head.data == value) {
            head = head.next;
            return temp;
        }

        while (temp.next != null && temp.next.data != value) {
            temp = temp.next;
        }
        temp2 = temp.next;
        return temp2;
    }

    public Node extractReference(Node node) {
        if (head == null || node == null) return null;

        if (head == node) {
            head = head.next;
            return node;
        }

        Node temp = head;
        while (temp.next != null && temp.next != node) {
            temp = temp.next;
        }

        temp.next = node.next;
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
}
