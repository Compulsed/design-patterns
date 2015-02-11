package net.dalesalter;

/**
 * Source from http://en.wikipedia.org/wiki/Visitor_pattern
 */
public class VisitorDemo {

        public static void main(String[] args) {
            ICarElement car = new Car();
            car.accept(new CarElementPrintVisitor());
            car.accept(new CarElementDoVisitor());
        }

}
