package net.dalesalter;

/**
 * Source from http://en.wikipedia.org/wiki/Visitor_pattern
 */
class Car implements ICarElement {
    ICarElement[] elements;

    public Car() {
        //create new Array of elements
        this.elements = new ICarElement[] { new Wheel("front left"),
                new Wheel("front right"), new Wheel("back left") ,
                new Wheel("back right"), new Body(), new Engine() };
    }

    public void accept(ICarElementVisitor visitor) {
        for(ICarElement elem : elements) {
            elem.accept(visitor);
        }
        visitor.visit(this);
    }
}
