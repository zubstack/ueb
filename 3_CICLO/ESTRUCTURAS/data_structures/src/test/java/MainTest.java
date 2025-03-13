import org.testng.annotations.Test;

import static org.testng.Assert.*;
public class MainTest {

    @Test
    public void testAddFive() {
        Main main = new Main();
        int result =main.addFive(5);
        assertEquals(result, 10);
    }
}