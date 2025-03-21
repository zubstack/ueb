import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        UIMenu uiMenu = new UIMenu(scanner);
        uiMenu.showMenu();

    }
}

