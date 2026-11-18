// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FNetworkPredictionData_Server @ 1477f39a0

void __thiscall
FNetworkPredictionData_Server::~FNetworkPredictionData_Server(FNetworkPredictionData_Server *this)

{
  this->_padding_ = (longlong)&___7FNetworkPredictionData_Server__6B_;
  return;
}

// AddStructReferencedObjects @ 1478054c0

void __thiscall
FNetworkPredictionData_Server::AddStructReferencedObjects
          (FNetworkPredictionData_Server *this,FReferenceCollector *param_1)

{
  return;
}

// ResetForcedUpdateState @ 147860cc0

void __thiscall
FNetworkPredictionData_Server::ResetForcedUpdateState(FNetworkPredictionData_Server *this)

{
  undefined1 *puVar1;
  
  this->bTriggeringForcedUpdates = '\0';
  this->bForcedUpdateDurationExceeded = '\0';
  this->ServerTimeBeginningForcedUpdates = 0.0;
  this->ServerTimeLastForcedUpdate = 0.0;
  return;
}

// Serialize @ 1478644f0

void __thiscall
FNetworkPredictionData_Server::Serialize(FNetworkPredictionData_Server *this,FArchive *param_1)

{
  return;
}

