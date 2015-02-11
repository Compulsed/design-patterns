package net.dalesalter;

/**
 * Source from http://en.wikipedia.org/wiki/Visitor_pattern
 */
class Engine implements ICarElement {
    public void accept(ICarElementVisitor visitor) {
        visitor.visit(this);
    }
}
