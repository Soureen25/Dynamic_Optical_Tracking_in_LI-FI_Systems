# Working Principle

The system uses multiple LDR sensors to detect variations
in received light intensity from the Li-Fi transmitter.

The Arduino continuously reads all sensor values and
determines the direction of maximum optical intensity.

Based on this comparison, the servo motor adjusts
the transmitter alignment to maintain optimal communication.

This feedback loop runs continuously, enabling
real-time dynamic optical tracking.
