// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ~FPhysicsSolverEvents @ 143a3ac60

void __thiscall Chaos::FPhysicsSolverEvents::~FPhysicsSolverEvents(FPhysicsSolverEvents *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FPhysicsSolverEvents_Chaos__6B_;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(&this->EventTeardown)
  ;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventPreSolve);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventPreBuffer);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventPostSolve);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTeardown);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EventTeardown).field_0x8,*(int *)&(this->EventTeardown).field_0x10);
  pvVar1 = *(void **)&(this->EventTeardown).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventTeardown);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EventPostSolve).field_0x8,*(int *)&(this->EventPostSolve).field_0x10);
  pvVar1 = *(void **)&(this->EventPostSolve).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventPostSolve);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EventPreBuffer).field_0x8,*(int *)&(this->EventPreBuffer).field_0x10);
  pvVar1 = *(void **)&(this->EventPreBuffer).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventPreBuffer);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->EventPreSolve).field_0x8,*(int *)&(this->EventPreSolve).field_0x10);
  pvVar1 = *(void **)&(this->EventPreSolve).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EventPreSolve);
  return;
}

// AddPostAdvanceCallback @ 143b10890

FDelegateHandle __thiscall
Chaos::FPhysicsSolverEvents::AddPostAdvanceCallback
          (FPhysicsSolverEvents *this,
          TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy> *)
             &this->EventPostSolve,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddPreAdvanceCallback @ 143b108d0

FDelegateHandle __thiscall
Chaos::FPhysicsSolverEvents::AddPreAdvanceCallback
          (FPhysicsSolverEvents *this,
          TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy> *)
             &this->EventPreSolve,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddPreBufferCallback @ 143b10910

FDelegateHandle __thiscall
Chaos::FPhysicsSolverEvents::AddPreBufferCallback
          (FPhysicsSolverEvents *this,
          TDelegate<void___cdecl(double),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy> *)
             &this->EventPreBuffer,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddTeardownCallback @ 143b11490

FDelegateHandle __thiscall
Chaos::FPhysicsSolverEvents::AddTeardownCallback
          (FPhysicsSolverEvents *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->EventTeardown,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// RemovePostAdvanceCallback @ 143b35e60

bool __thiscall
Chaos::FPhysicsSolverEvents::RemovePostAdvanceCallback
          (FPhysicsSolverEvents *this,FDelegateHandle param_1)

{
  bool bVar1;
  
  if (param_1.ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventPostSolve,
                       param_1);
    return bVar1;
  }
  return false;
}

// RemovePreAdvanceCallback @ 143b35e80

bool __thiscall
Chaos::FPhysicsSolverEvents::RemovePreAdvanceCallback
          (FPhysicsSolverEvents *this,FDelegateHandle param_1)

{
  bool bVar1;
  
  if (param_1.ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventPreSolve,
                       param_1);
    return bVar1;
  }
  return false;
}

// RemovePreBufferCallback @ 143b35ea0

bool __thiscall
Chaos::FPhysicsSolverEvents::RemovePreBufferCallback
          (FPhysicsSolverEvents *this,FDelegateHandle param_1)

{
  bool bVar1;
  
  if (param_1.ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventPreBuffer,
                       param_1);
    return bVar1;
  }
  return false;
}

// RemoveTeardownCallback @ 143b366b0

bool __thiscall
Chaos::FPhysicsSolverEvents::RemoveTeardownCallback
          (FPhysicsSolverEvents *this,FDelegateHandle param_1)

{
  bool bVar1;
  
  if (param_1.ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->EventTeardown,
                       param_1);
    return bVar1;
  }
  return false;
}

