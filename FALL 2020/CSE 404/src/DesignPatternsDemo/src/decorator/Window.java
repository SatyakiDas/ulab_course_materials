package decorator;

public abstract class Window {
    protected Window wrapee;

    public Window(Window wrapee) {
        this.wrapee = wrapee;
    }

    public abstract void draw();
}
