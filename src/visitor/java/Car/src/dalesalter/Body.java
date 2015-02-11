package net.dalesalter;

/**
 * Source from http://en.wikipedia.org/wiki/Visitor_pattern
 */
class Body implements ICarElement {
    public void accept(ICarElementVisitor visitor) {
        visitor.visit(this);
    }
}
