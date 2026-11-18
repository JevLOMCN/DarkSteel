// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// ~FWN_ISKM_BoidsController @ 14b865ba0

void __thiscall FWN_ISKM_BoidsController::~FWN_ISKM_BoidsController(FWN_ISKM_BoidsController *this)

{
  return;
}

// OnBoidAdded @ 14b884300

void __thiscall
FWN_ISKM_BoidsController::OnBoidAdded
          (FWN_ISKM_BoidsController *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  return;
}

// OnBoidRemoved @ 14b884490

void __thiscall
FWN_ISKM_BoidsController::OnBoidRemoved
          (FWN_ISKM_BoidsController *this,int param_1,FWN_ISKM_BoidInfo *param_2)

{
  return;
}

// OnBoundToActor @ 14b884770

void __thiscall
FWN_ISKM_BoidsController::OnBoundToActor
          (FWN_ISKM_BoidsController *this,AWN_ISKM_BoidsActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_ISKM_BoidsActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->BoidsActor).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->BoidsActor).field0_0x0.DebugPtr = param_1;
  return;
}

// OnUnboundToActor @ 14b894aa0

void __thiscall
FWN_ISKM_BoidsController::OnUnboundToActor
          (FWN_ISKM_BoidsController *this,AWN_ISKM_BoidsActor *param_1)

{
  (this->BoidsActor).field0_0x0.DebugPtr = (AWN_ISKM_BoidsActor *)0x0;
  return;
}

// UpdateActor_PostUpdateBoids @ 14b8a0450

void __thiscall
FWN_ISKM_BoidsController::UpdateActor_PostUpdateBoids(FWN_ISKM_BoidsController *this,float param_1)

{
  return;
}

// UpdateActor_PreUpdateBoids @ 14b8a1ba0

void __thiscall
FWN_ISKM_BoidsController::UpdateActor_PreUpdateBoids(FWN_ISKM_BoidsController *this,float param_1)

{
  return;
}

// UpdateBoid_AnyThread @ 14b8a1d00

void __thiscall
FWN_ISKM_BoidsController::UpdateBoid_AnyThread
          (FWN_ISKM_BoidsController *this,int param_1,FWN_ISKM_BoidInfo *param_2,float param_3)

{
  return;
}

