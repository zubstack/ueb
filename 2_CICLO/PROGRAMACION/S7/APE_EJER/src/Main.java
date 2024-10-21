import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ContactManager manager = new ContactManager();

        while (true) {
            System.out.println("1. Add Contact");
            System.out.println("2. List Contacts");
            System.out.println("3. Exit");
            System.out.print("Choose an option: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Limpiar el buffer

            if (choice == 1) {
                System.out.print("Enter name: ");
                String name = scanner.nextLine();
                System.out.print("Enter phone: ");
                String phone = scanner.nextLine();
                System.out.print("Enter email: ");
                String email = scanner.nextLine();

                Contact contact = new Contact(name, phone, email);
                manager.addContact(contact);
                System.out.println("Contact added.");
            } else if (choice == 2) {
                System.out.println("Contacts:");
                manager.listContacts();
            } else if (choice == 3) {
                System.out.println("Exiting...");
                break;
            } else {
                System.out.println("Invalid option.");
            }
        }

        scanner.close();
    }
}
