// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// SetBodyInstanceExternalCollisionProfileBodySetup @ 148216190

void __thiscall
Chaos::Private::FInitBodiesHelperBaseInternal::SetBodyInstanceExternalCollisionProfileBodySetup
          (FInitBodiesHelperBaseInternal *this,FBodyInstance *param_1,UBodySetup *param_2)

{
  UBodySetup *local_res10 [3];
  
  local_res10[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=
            (&(param_1->ExternalCollisionProfileBodySetup).WeakPtr,(FObjectPtr)local_res10);
  return;
}

// UpdateBodyInstanceSolverAsyncDeltaTime @ 1482236f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FInitBodiesHelperBaseInternal::UpdateBodyInstanceSolverAsyncDeltaTime
          (FInitBodiesHelperBaseInternal *this,FBodyInstance *param_1)

{
  float fVar1;
  double dVar2;
  FPhysicsSolverBase *this_00;
  float fVar3;
  
  if (param_1->bOverrideSolverAsyncDeltaTime != '\0') {
    if (bEnableOverrideSolverDeltaTime) {
      fVar1 = param_1->SolverAsyncDeltaTime;
      if (0.0 <= fVar1) {
        this_00 = (FPhysicsSolverBase *)param_1->ActorHandle->_padding_;
        if ((ForceDisableAsyncPhysics == 0) && (dVar2 = this_00->AsyncDt, 0.0 <= dVar2)) {
          fVar3 = (float)dVar2;
          if (fVar1 <= fVar3) {
            fVar3 = fVar1;
          }
          FPhysicsSolverBase::EnableAsyncMode(this_00,(double)fVar3);
          return;
        }
        if (2 < (byte)LogPhysics._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
          return;
        }
      }
      else if (1 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
        return;
      }
    }
    else if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      return;
    }
  }
  return;
}

