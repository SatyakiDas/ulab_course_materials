package template_method;

public class GoldTravelPackage extends TravelPackage {
    @Override
    protected void transportBetweenPlaces() {
        System.out.println("Using AC coach for transportation");
    }

    @Override
    protected void stayInRoom() {
        System.out.println("Staying in AC room with TV");
    }

    @Override
    protected void eatFood() {
        System.out.println("Eating Fish, Meat and Rice");
    }
}
