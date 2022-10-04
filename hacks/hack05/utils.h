/**
 * converts degreese to radians
 */
double degreesToRadians(double degree);

/**
 * Computes the air distance between two locations
 * by their longitude and latitude
 */
double getAirDistance(double originLatitude,
                      double originLongitude,
                      double destinationLatitude,
                      double destinationLongitude);

/**
 * Calculates time dilation relative to a stationary object
 * expressed by the Lorentz Equation
 */
double lorentzTimeDilation(double t, double percentC);