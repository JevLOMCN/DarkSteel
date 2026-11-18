// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// Construct @ 14d59c2c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Cameras::IPriorityQueueEntry_*>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14d65e160

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Cameras::FCameraDebugClock::FAngleValue>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14d65e170

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Cameras::FCameraDebugClock::FVectorValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

