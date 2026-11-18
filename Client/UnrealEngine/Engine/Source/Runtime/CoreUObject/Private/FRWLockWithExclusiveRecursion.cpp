// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// LoadWriteLockOwnerThreadIdRelaxed @ 141fd6a90

uint __thiscall
FCoreRedirectsContext::FRWLockWithExclusiveRecursion::LoadWriteLockOwnerThreadIdRelaxed
          (FRWLockWithExclusiveRecursion *this)

{
  return (uint)this->WriteLockOwnerThreadId;
}

// ReadLock @ 141fd9790

void __thiscall
FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadLock(FRWLockWithExclusiveRecursion *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  
  aVar1 = this->WriteLockOwnerThreadId;
  if (aVar1 != (atomic<unsigned_int>)0x0) {
    aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar1 == aVar2) {
      this->RecursionCount = this->RecursionCount + 1;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141fd97c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared((PSRWLOCK)this);
  return;
}

// ReadUnlock @ 141fda580

void __thiscall
FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock
          (FRWLockWithExclusiveRecursion *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  undefined1 local_res8 [8];
  
  if (0 < this->RecursionCount) {
    aVar1 = this->WriteLockOwnerThreadId;
    aVar2 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar1 != aVar2) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    this->RecursionCount = this->RecursionCount + -1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141fda5be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)this);
  return;
}

// StoreWriteLockOwnerThreadId @ 141fe9c40

/* WARNING: Enum "memory_order": Some values do not have unique names */

void __thiscall
FCoreRedirectsContext::FRWLockWithExclusiveRecursion::StoreWriteLockOwnerThreadId
          (FRWLockWithExclusiveRecursion *this,uint param_1,memory_order param_2)

{
  if ((param_2 != memory_order_relaxed) && (param_2 != memory_order_release)) {
    LOCK();
    this->WriteLockOwnerThreadId = (atomic<unsigned_int>)param_1;
    UNLOCK();
    return;
  }
  this->WriteLockOwnerThreadId = (atomic<unsigned_int>)param_1;
  return;
}

// WriteLock @ 141fecad0

void __thiscall
FCoreRedirectsContext::FRWLockWithExclusiveRecursion::WriteLock(FRWLockWithExclusiveRecursion *this)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (this->WriteLockOwnerThreadId != aVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)this);
    LOCK();
    this->WriteLockOwnerThreadId = aVar1;
    UNLOCK();
  }
  this->RecursionCount = this->RecursionCount + 1;
  return;
}

// WriteUnlock @ 141fecb40

void __thiscall
FCoreRedirectsContext::FRWLockWithExclusiveRecursion::WriteUnlock
          (FRWLockWithExclusiveRecursion *this)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  
  aVar2 = this->WriteLockOwnerThreadId;
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar2 != aVar5) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8878926057831399629>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirectsContext.cpp"
                       ,0xcd,
                       "LoadWriteLockOwnerThreadIdRelaxed() == FPlatformTLS::GetCurrentThreadId()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->RecursionCount < 1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8878926057831399630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirectsContext.cpp"
                       ,0xce,"RecursionCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &this->RecursionCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    this->WriteLockOwnerThreadId = (atomic<unsigned_int>)0x0;
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return;
}

// operator() @ 150484290

bool __thiscall
`FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8878926057831399644>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8878926057831399644>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

