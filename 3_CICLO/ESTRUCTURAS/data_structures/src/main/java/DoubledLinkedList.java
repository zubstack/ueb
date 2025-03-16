import java.util.Scanner;

public class DoubledLinkedList {
    Node head;

    static class Node {
        int data;
        Node next;
        Node prev;

        Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }

    public Node getHead() {
        return this.head;
    }

    public void setHead(int data) {
        this.head.data = data;
    }

    public int getLength() {

        return 0;
    }

    public void insertHead(Node node) {
        if (this.head != null) {
            node.next = this.head;
            this.head.prev = node;
        }
        this.head = node;
    }

    public void display() {
        Node temp = this.head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public void displayReverse() {
        Node temp = this.head;
        while (temp.next != null) {
            temp = temp.next;
        }
        // Here temp is the last node
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.prev;
        }
        System.out.println("null");
    }

    public static void main() {
        Scanner scan = new Scanner(System.in);

        Node currentNode;
        DoubledLinkedList doubledLinkedList = new DoubledLinkedList();
        doubledLinkedList.insertHead(new Node(3));
        doubledLinkedList.insertHead(new Node(4));
        doubledLinkedList.insertHead(new Node(5));
        doubledLinkedList.display();
        doubledLinkedList.displayReverse();

        int response = 0;
        currentNode = doubledLinkedList.getHead();

        while (response != 3) {

            if (currentNode != null) {
                System.out.println("Current node: " + currentNode.data);
            } else {
                System.out.println("Current node: NULL");
            }

            System.out.print("1. Avanzar\n2. Retroceder \n3. Salir\nOption: ");
            response = scan.nextInt();

            switch (response) {
                case 1:
                    if (currentNode != null && currentNode.next != null) {
                        currentNode = currentNode.next;
                    }
                    break;
                case 2:
                    if (currentNode != null && currentNode.prev != null) {
                        currentNode = currentNode.prev;
                    }
                    break;
            }
        }

    }

}
