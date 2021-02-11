public class TimeDoorAdaptor implements TimerClient {
    @Override
    public void timeout() {
        System.out.println("Starting timeout");
        System.out.println("Timeout complete");
    }
}
