#include "PreDeConMeasure.h"

double preDeConMeasures::euclideanDistance(Point * p1, Point * p2) {

	double sum = 0.0;

	for(int i = 0; i < p1->getAttrsNumber(); ++i) {
		double coord1 = p1->coordinates[i];
		double coord2 = p2->coordinates[i];
		double difference = (coord1-coord2);
		sum += difference*difference;
	}

	return sqrt(sum);
}

