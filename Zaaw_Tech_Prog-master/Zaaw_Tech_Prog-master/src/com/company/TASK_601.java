package com.company;

import java.util.Scanner;

public class TASK_601 {
    void execute() {
        Scanner scan = new Scanner(System.in);
        int count = Integer.parseInt(scan.nextLine());
        for (int i = 0; i < count; i++) {
            Scanner scanner = new Scanner(System.in);
            String line = scanner.nextLine();  // reads the single input line from the console
            String[] strings = line.split(" ");  // splits the string wherever a space character is encountered, returns the result as a String[]
            int first = Integer.parseInt(strings[0]);
            int second = Integer.parseInt(strings[1]);
            System.out.println(nwd(first, second));
        }
    }

    static int nwd(int a, int b) {
        while(a!=b) {
            if(a>b)
                a-=b;
            else
                b-=a;
        }
        return a;
    }
}
