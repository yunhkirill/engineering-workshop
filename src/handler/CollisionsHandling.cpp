#include "../src/handler/CollisionsHandling.hpp"
#include <vector>

const double EPSILON = 1;

void CollisionSignalsWithPlanes(std::vector<std::vector<Signal>>& signals_vec, 
                                 std::vector<AbstractAirObject*> flying_objects)
{
    for (auto& signals_vector: signals_vec)
    for (auto& signal: signals_vector)
    for (auto& flyingObject: flying_objects) {
        if ((flyingObject->GetPosition() - signal.position).Length() < flyingObject->GetDetectionSize()) {
            signal.Reflection(flyingObject->GetEPR());
        }
    }
}
                                 
void CollisionSignalWithReciever(std::vector<std::vector<Signal>>& signals_vec, 
                                 RadioDetectionAndRangingModel& rls, double dt)
{
    std::vector<Signal> returned_signals;
    for (auto& signals_vector: signals_vec)
    for (auto& signal: signals_vector) {
        if (((rls.GetPosition() - signal.position).Length() < EPSILON) && signal.reflected) {
            returned_signals.push_back(signal);
        }
    }

    rls.GetReciever().TakeSignal(returned_signals, dt);
}
