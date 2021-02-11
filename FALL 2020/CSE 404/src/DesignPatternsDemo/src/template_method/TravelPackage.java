package template_method;

public abstract class TravelPackage {

    protected void startTour() {
        System.out.println("Tour started.");
    }

    protected abstract void transportBetweenPlaces();

    protected abstract void stayInRoom();

    protected abstract void eatFood();

    protected void endTour() {
        System.out.println("Tour ended.");
    }

    public void travel() {
        startTour();
        transportBetweenPlaces();
        stayInRoom();
        eatFood();
        endTour();
    }
}
