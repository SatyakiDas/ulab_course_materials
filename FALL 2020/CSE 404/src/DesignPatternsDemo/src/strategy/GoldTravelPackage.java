package strategy;

public class GoldTravelPackage implements TravelPackage {
    @Override
    public void transportStrategy() {
        System.out.println("Travel by AC coach");
    }

    @Override
    public void roomStrategy() {
        System.out.println("AC and TV");
    }

    @Override
    public void foodStrategy() {
        System.out.println("Fish, Meat, Rice");
    }
}
