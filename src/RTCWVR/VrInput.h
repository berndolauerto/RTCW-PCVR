
#if !defined(vrinput_h)
#define vrinput_h

#include "VrCommon.h"
#include "../Oculus/Include/OVR_Platform.h"
#include "../Oculus/Include/OVR_CAPI.h"

//New control scheme definitions to be defined L1VR_SurfaceView.c enumeration
enum control_scheme;

#define SCOPE_ENGAGE_DISTANCE   0.25
#define BINOCULAR_ENGAGE_DISTANCE   0.25
#define VELOCITY_TRIGGER        1.6

ovrInputState  leftTrackedRemoteState_old;
//ovrInputStateRemote leftTrackedRemoteState_new;
ovrInputState leftTrackedRemoteState_new;
//ovrTracking leftRemoteTracking_new;
ovrTrackingState leftRemoteTracking_new;

//ovrInputStateTrackedRemote rightTrackedRemoteState_old;
//ovrInputStateTrackedRemote rightTrackedRemoteState_new;
//ovrTracking rightRemoteTracking_new;

ovrInputState rightTrackedRemoteState_old;
ovrInputState rightTrackedRemoteState_new;
ovrTrackingState rightRemoteTracking_new;

//ovrDeviceID controllerIDs[2];

float remote_movementSideways;
float remote_movementForward;
float remote_movementUp;
float positional_movementSideways;
float positional_movementForward;
float snapTurn;

void sendButtonAction(const char* action, long buttonDown);
void sendButtonActionSimple(const char* action);

//void acquireTrackedRemotesData(const ovrplatform *Ovr, double displayTime);

void HandleInput_Default( ovrInputState *pDominantTrackedRemoteNew, ovrInputState*pDominantTrackedRemoteOld, ovrTrackingState* pDominantTracking,
    ovrInputState*pOffTrackedRemoteNew, ovrInputState*pOffTrackedRemoteOld, ovrInputState* pOffTracking,
                          int domButton1, int domButton2, int offButton1, int offButton2 );

void HandleInput_WeaponAlign(ovrInputState*pDominantTrackedRemoteNew, ovrInputState*pDominantTrackedRemoteOld, ovrTrackingState* pDominantTracking,
    ovrInputState*pOffTrackedRemoteNew, ovrInputState*pOffTrackedRemoteOld, ovrTrackingState* pOffTracking,
                          int domButton1, int domButton2, int offButton1, int offButton2 );



void updateScopeAngles();

#endif //vrinput_h