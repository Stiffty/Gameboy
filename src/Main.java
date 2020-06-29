import com.fazecast.jSerialComm.SerialPort;

import java.awt.*;
import java.awt.event.KeyEvent;
import java.io.IOException;

public class Main {
    public Main() {
        try {
            Thread.sleep(100);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        SerialPort sp = SerialPort.getCommPort("COM5");
        if(sp.isOpen()) {
            sp.setComPortParameters(9600, 8, 1, 0);
            sp.openPort();

            StringBuilder s = new StringBuilder();
            while (true) {
                try {
                    while (sp.getInputStream().available() > 0)
                        s.append((char) sp.getInputStream().read());


                    if (s.length() != 0 && sp.getInputStream().available() == 0) {
                        String out = s.toString();
                        System.out.println(out);
                        Keys(out);
                        s = new StringBuilder();
                    }
                    Thread.sleep(10);
                } catch (IOException | AWTException | InterruptedException e) {
                    e.printStackTrace();
                    sp.closePort();
                    new Main();
                    System.exit(-1);
                }
            }
        }
    }

    public void Keys(String in) throws AWTException, InterruptedException {
        Robot robot = new Robot();
        switch (in){
            case "a":
                robot.keyPress(KeyEvent.VK_A);
                break;
            case "b":
                robot.keyPress(KeyEvent.VK_B);
                break;
            case "u":
                robot.keyPress(KeyEvent.VK_U);
                break;
            case "d":
                robot.keyPress(KeyEvent.VK_D);
                break;
            case "l":
                robot.keyPress(KeyEvent.VK_L);
                break;
            case "r":
                robot.keyPress(KeyEvent.VK_R);
                break;
            case "s":
                robot.keyPress(KeyEvent.VK_S);
                break;
            case "c":
                robot.keyPress(KeyEvent.VK_C);
                break;
            case "q":
                robot.keyPress(KeyEvent.VK_Q);
                break;
            case "e":
                robot.keyPress(KeyEvent.VK_E);
                break;


            case "ar":
                robot.keyRelease(KeyEvent.VK_A);
                break;
            case "br":
                robot.keyRelease(KeyEvent.VK_B);
                break;
            case "ur":
                robot.keyRelease(KeyEvent.VK_U);
                break;
            case "dr":
                robot.keyRelease(KeyEvent.VK_D);
                break;
            case "lr":
                robot.keyRelease(KeyEvent.VK_L);
                break;
            case "rr":
                robot.keyRelease(KeyEvent.VK_R);
                break;
            case "sr":
                robot.keyRelease(KeyEvent.VK_S);
                break;
            case "cr":
                robot.keyRelease(KeyEvent.VK_C);
                break;
            case "qr":
                robot.keyRelease(KeyEvent.VK_Q);
                break;
            case "er":
                robot.keyRelease(KeyEvent.VK_E);
                break;
        }
    }

    public static void main(String[] args) {
        new Main();
    }
}
