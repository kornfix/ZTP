package com.company;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class TASK_663 {
    public class Point {
        String name;
        int x;
        int y;

        Point(String n, int _x, int _y) {
            name = n;
            x = _x;
            y = _y;
        }

        double getDistance() {
            return Math.sqrt(x*x+y*y);
        }
    }

    void execute() {
        Scanner scan = new Scanner(System.in);

        String  line;
        String[] strings;
        int m;
        int n;
        m = scan.nextInt();

        List<Point> listOfPoints;
        for (int i = 0; i < m; i++) {
            listOfPoints = new ArrayList<>();
            n = scan.nextInt();
            scan.nextLine();
            for (int j = 0; j < n; j++) {

                line = scan.nextLine();
                strings = line.split(" ");

                String name = strings[0];
                int first = Integer.parseInt(strings[1]);
                int second = Integer.parseInt(strings[2]);

                listOfPoints.add(new Point(name, first, second));
            }
            listOfPoints.sort(Comparator.comparing(Point::getDistance));
            System.out.println();
            for (Point p: listOfPoints)
                System.out.println(p.name + " " + p.x + " " + p.y);
        }
    }


}
