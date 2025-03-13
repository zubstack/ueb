import java.util.Scanner;

public class Main {
    static Scanner scan = new Scanner(System.in);
    static LinkedList list = new LinkedList();

    public static void main(String[] args) {
        int result = 0;

        list.insert(10);
        list.insert(20);
        list.insert(30);

        String[] options = {"insert", "extract", "display", "empty", "exit"};
        String[] second_options = {"head", "tail", "value", "reference", "exit"};

        while (result != options.length) {
            System.out.println("\n==LINKED LIST==");
            displayOptions(options);
            System.out.print("Option: ");
            result = scan.nextInt();
            switch (result) {
                case 1:
                    displayOptions(second_options);
                    System.out.print("Option: ");
                    result = scan.nextInt();
                    displayInsertMenu(result);
                    break;
                case 2:
                    displayOptions(second_options);
                    System.out.print("Option: ");
                    result = scan.nextInt();
                    displayExtractMenu(result);
                    break;
                case 3:
                    list.display();
                    break;
                case 4:
                    // list.empty
                    break;
            }
        }
    }

    static void displayInsertMenu(int option) {
        switch (option) {
            case 1:
                list.insertHead();
                break;
            case 2:
                list.insertTail();
                break;
            case 3:
                list.insertValue();
                break;
            case 4:
                list.insertReference();
                break;
        }
    }

    static void displayExtractMenu(int option) {
        Node n;
        switch (option) {
            case 1:
                list.extractHead();
                break;
            case 2:
                list.extractTail();
                break;
            case 3:
                n = list.extractValue(20);
                System.out.println("Extracted: " + n.data);
                break;
            case 4:
                int value = scan.nextInt();
                n = new Node(value);
                list.extractReference(n);
                break;
        }
    }

    static void displayOptions(String[] options) {
        for (int i = 0; i < options.length; i++) {
            System.out.println("(" + (i + 1) + ")." + options[i]);
        }
    }
}
