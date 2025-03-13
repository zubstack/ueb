import java.util.Scanner;

public class Main {
    static Scanner scan = new Scanner(System.in);
    static LinkedList list = new LinkedList();

    public static void main(String[] args) {
        int result = 0;

        list.insertHead(10);
        list.insertHead(20);
        list.insertHead(30);

        String[] options = {"Insert", "Extract", "Display", "Empty", "Exit"};
        String[] second_options = {"Head", "Tail", "Value", "Reference", "Back"};

        while (result != options.length) { // Match with "Exit"
            System.out.println("\n== LINKED LIST ==");
            displayOptions(options);
            System.out.print("Option: ");

            if (!scan.hasNextInt()) { // Prevent invalid input errors
                scan.next(); // Discard invalid input
                System.out.println("Invalid input! Please enter a number.");
                continue;
            }

            result = scan.nextInt();
            scan.nextLine(); // Consume newline

            switch (result) {
                case 1: // Insert
                    result = 0; // Reset for new menu
                    displayOptions(second_options);
                    System.out.print("Option: ");
                    if (scan.hasNextInt()) {
                        result = scan.nextInt();
                        scan.nextLine();
                        displayInsertMenu(result);
                    }
                    break;
                case 2: // Extract
                    result = 0;
                    displayOptions(second_options);
                    System.out.print("Option: ");
                    if (scan.hasNextInt()) {
                        result = scan.nextInt();
                        scan.nextLine();
                        displayExtractMenu(result);
                    }
                    break;
                case 3: // Display
                    list.display();
                    break;
                case 4: // Empty List
                    list.clear();
                    System.out.println("The linked list has been emptied.");
                    break;
                case 5: // Exit
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid option! Please select a valid option.");
            }
        }

        scan.close();
    }

    static void displayInsertMenu(int option) {
        int value, value2;
        Node n;

        if (option < 1 || option > 4) return; // Ignore invalid options

        System.out.print("Enter the node value: ");
        if (!scan.hasNextInt()) {
            System.out.println("Invalid input! Please enter an integer.");
            scan.next(); // Clear invalid input
            return;
        }
        value = scan.nextInt();
        scan.nextLine();

        switch (option) {
            case 1:
                list.insertHead(value);
                break;
            case 2:
                list.insertTail(value);
                break;
            case 3:
                System.out.print("Enter the value of the node to insert after: ");
                if (scan.hasNextInt()) {
                    value2 = scan.nextInt();
                    scan.nextLine();
                    list.insertValue(value2, value);
                } else {
                    System.out.println("Invalid input! Please enter an integer.");
                    scan.next(); // Clear invalid input
                }
                break;
            case 4:
                System.out.print("Enter the reference node value: ");
                if (scan.hasNextInt()) {
                    value2 = scan.nextInt();
                    scan.nextLine();
                    n = findNode(value2); // Retrieve an actual reference
                    if (n != null) {
                        list.insertReference(n, value);
                    } else {
                        System.out.println("Node with value " + value2 + " not found.");
                    }
                } else {
                    System.out.println("Invalid input! Please enter an integer.");
                    scan.next(); // Clear invalid input
                }
                break;
        }
    }

    static void displayExtractMenu(int option) {
        Node n;
        int value;

        if (option < 1 || option > 4) return; // Ignore invalid options

        switch (option) {
            case 1:
                n = list.extractHead();
                if (n != null) System.out.println("Extracted: " + n.data);
                else System.out.println("List is empty.");
                break;
            case 2:
                n = list.extractTail();
                if (n != null) System.out.println("Extracted: " + n.data);
                else System.out.println("List is empty.");
                break;
            case 3:
                System.out.print("Enter the value of the node to extract: ");
                if (scan.hasNextInt()) {
                    value = scan.nextInt();
                    scan.nextLine();
                    n = list.extractValue(value);
                    if (n != null) System.out.println("Extracted: " + n.data);
                    else System.out.println("Node not found.");
                } else {
                    System.out.println("Invalid input! Please enter an integer.");
                    scan.next(); // Clear invalid input
                }
                break;
            case 4:
                System.out.print("Enter the reference node value: ");
                if (scan.hasNextInt()) {
                    value = scan.nextInt();
                    scan.nextLine();
                    n = findNode(value); // Retrieve an actual reference
                    if (n != null) {
                        list.extractReference(n);
                        System.out.println("Extracted node with value: " + value);
                    } else {
                        System.out.println("Node with value " + value + " not found.");
                    }
                } else {
                    System.out.println("Invalid input! Please enter an integer.");
                    scan.next(); // Clear invalid input
                }
                break;
        }
    }

    static void displayOptions(String[] options) {
        for (int i = 0; i < options.length; i++) {
            System.out.println("(" + (i + 1) + ") " + options[i]);
        }
    }

    static Node findNode(int value) {
        Node temp = list.head;
        while (temp != null) {
            if (temp.data == value) return temp;
            temp = temp.next;
        }
        return null;
    }
}
