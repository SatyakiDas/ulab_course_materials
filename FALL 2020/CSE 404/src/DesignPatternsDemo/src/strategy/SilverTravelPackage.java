package strategy;

public class SilverTravelPackage implements TravelPackage {
    @Override
    public void transportStrategy() {
        System.out.println("Travel by Non-Ac Coach");
    }

    @Override
    public void roomStrategy() {
        System.out.println("Non-AC and No TV");
    }

    @Override
    public void foodStrategy() {
        System.out.println("Eggs, Rice, Vegetables");
    }
}
