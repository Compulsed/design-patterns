package net.dalesalter;

/**
 * Source from http://en.wikipedia.org/wiki/Visitor_pattern
 */
interface ICarElementVisitor {
    void visit(Wheel wheel);
    void visit(Engine engine);
    void visit(Body body);
    void visit(Car car);
}
