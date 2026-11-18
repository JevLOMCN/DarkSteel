// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ~FConstraintBase @ 14388ca80

void __thiscall Chaos::FConstraintBase::~FConstraintBase(FConstraintBase *this)

{
  this->_padding_ = (longlong)&___7FConstraintBase_Chaos__6B_;
  return;
}

// FConstraintBase @ 143c42fa0

FConstraintBase * __thiscall
Chaos::FConstraintBase::FConstraintBase(FConstraintBase *this,EConstraintType param_1)

{
  this->Type = param_1;
  this->_padding_ = (longlong)&___7FConstraintBase_Chaos__6B_;
  this->Proxy = (IPhysicsProxyBase *)0x0;
  (this->DirtyFlags).Bits = 0;
  return this;
}

// IsValid @ 143c6b8d0

bool __thiscall Chaos::FConstraintBase::IsValid(FConstraintBase *this)

{
  return this->Proxy != (IPhysicsProxyBase *)0x0;
}

// SetProxy @ 143c75df0

void __thiscall Chaos::FConstraintBase::SetProxy(FConstraintBase *this,IPhysicsProxyBase *param_1)

{
  FPhysicsSolverBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPlatformRWLock *SRWLock;
  
  this->Proxy = param_1;
  if ((param_1 == (IPhysicsProxyBase *)0x0) ||
     (pFVar1 = param_1->Solver, pFVar1 == (FPhysicsSolverBase *)0x0)) {
    return;
  }
  if ((param_1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((param_1->SyncTimestamp).Object)->bDeleted != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyBaseIn->GetMarkedDeleted() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x14b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(pFVar1->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::Add(&((pFVar1->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  FDirtySet::Add(&((pFVar1->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1);
  return;
}

