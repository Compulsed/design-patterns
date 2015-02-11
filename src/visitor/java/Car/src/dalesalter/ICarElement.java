package net.dalesalter;

/**
 * Source from http://en.wikipedia.org/wiki/Visitor_pattern
 */
interface ICarElement {
    void accept(ICarElementVisitor visitor); // CarElements have to provide accept().
}
