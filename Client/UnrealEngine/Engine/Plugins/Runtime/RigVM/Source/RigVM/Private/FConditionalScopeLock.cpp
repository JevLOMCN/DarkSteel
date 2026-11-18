// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// FConditionalScopeLock @ 14a079530

FConditionalScopeLock * __thiscall
FRigVMRegistry_RWLock::FConditionalScopeLock::FConditionalScopeLock
          (FConditionalScopeLock *this,FRigVMRegistry_RWLock *param_1,ELockType param_2,bool param_3
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FConditionalScopeLock *pFVar7;
  
  FRigVMRegistryHandle::FRigVMRegistryHandle
            ((FRigVMRegistryHandle *)this,(FRigVMRegistry_NoLock *)param_1);
  *(bool *)&this->_padding_ = param_3;
  this->Registry = param_1;
  this->DesiredLockType = param_2;
  if (param_3) {
    if (param_2 == LockType_Read) {
      aVar6 = param_1->WriteLockOwnerThread;
      aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar6 != aVar5) {
        AcquireSRWLockShared((PSRWLOCK)&this->Registry->Lock);
      }
    }
    else if (param_2 == LockType_Write) {
      AcquireSRWLockExclusive((PSRWLOCK)&param_1->Lock);
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      LOCK();
      this->Registry->WriteLockOwnerThread = aVar6;
      UNLOCK();
    }
    LOCK();
    paVar1 = &this->Registry->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      LOCK();
      this->Registry->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)this->DesiredLockType;
      UNLOCK();
    }
    else if (this->DesiredLockType == LockType_Write) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4767296351463538103>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                         ,0x249,"DesiredLockType != LockType_Write");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FConditionalScopeLock *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  return this;
}

// ~FConditionalScopeLock @ 14a07b790

void __thiscall
FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(FConditionalScopeLock *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  
  if ((char)this->_padding_ != '\0') {
    LOCK();
    paVar1 = &this->Registry->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      this->Registry->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (this->DesiredLockType == LockType_Read) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aVar3 = this->Registry->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
                    /* WARNING: Could not recover jumptable at 0x00014a07b832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockShared((PSRWLOCK)&this->Registry->Lock);
        return;
      }
    }
    else if (this->DesiredLockType == LockType_Write) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LOCK();
      this->Registry->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&this->Registry->Lock);
    }
  }
  return;
}

