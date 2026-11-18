// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// ~FWN_StateMachine_ExecutionContext @ 14b865d00

void __thiscall
FWN_StateMachine_ExecutionContext::~FWN_StateMachine_ExecutionContext
          (FWN_StateMachine_ExecutionContext *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StateMachine).SharedReferenceCount.ReferenceController);
  return;
}

// CheckTransition @ 14b86a2d0

bool __thiscall
FWN_StateMachine_ExecutionContext::CheckTransition
          (FWN_StateMachine_ExecutionContext *this,FName param_1,FName param_2,FName param_3,
          float param_4)

{
  return false;
}

// EnterState @ 14b86f3c0

void __thiscall
FWN_StateMachine_ExecutionContext::EnterState
          (FWN_StateMachine_ExecutionContext *this,FName param_1,FName param_2)

{
  return;
}

// EnterTransition @ 14b86f3d0

void __thiscall
FWN_StateMachine_ExecutionContext::EnterTransition
          (FWN_StateMachine_ExecutionContext *this,FName param_1,FName param_2,FName param_3)

{
  return;
}

// LeaveState @ 14b87ee20

void __thiscall
FWN_StateMachine_ExecutionContext::LeaveState
          (FWN_StateMachine_ExecutionContext *this,FName param_1,FName param_2)

{
  return;
}

// LeaveTransition @ 14b87ee30

void __thiscall
FWN_StateMachine_ExecutionContext::LeaveTransition
          (FWN_StateMachine_ExecutionContext *this,FName param_1,FName param_2,FName param_3)

{
  return;
}

// PostExecute @ 14b895250

void __thiscall
FWN_StateMachine_ExecutionContext::PostExecute
          (FWN_StateMachine_ExecutionContext *this,float param_1)

{
  return;
}

// PreExecute @ 14b895760

void __thiscall
FWN_StateMachine_ExecutionContext::PreExecute(FWN_StateMachine_ExecutionContext *this,float param_1)

{
  return;
}

// UpdateState @ 14b8a3950

void __thiscall
FWN_StateMachine_ExecutionContext::UpdateState
          (FWN_StateMachine_ExecutionContext *this,FName param_1,float param_2)

{
  return;
}

