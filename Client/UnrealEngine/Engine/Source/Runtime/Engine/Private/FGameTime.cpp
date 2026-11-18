// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetTimeSinceAppStart @ 1489eee50

FGameTime * __cdecl FGameTime::GetTimeSinceAppStart(FGameTime *__return_storage_ptr__)

{
  double dVar1;
  float fVar2;
  
  fVar2 = (float)(double)FApp::DeltaTime;
  dVar1 = (double)FApp::CurrentTime - GStartTime;
  __return_storage_ptr__->DeltaRealTimeSeconds = fVar2;
  __return_storage_ptr__->DeltaWorldTimeSeconds = fVar2;
  __return_storage_ptr__->RealTimeSeconds = dVar1;
  __return_storage_ptr__->WorldTimeSeconds = dVar1;
  return __return_storage_ptr__;
}

