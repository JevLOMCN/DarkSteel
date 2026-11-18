// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~FScopeCoreRedirectsReadLockedContext @ 141fbfdb0

void __thiscall
FScopeCoreRedirectsReadLockedContext::~FScopeCoreRedirectsReadLockedContext
          (FScopeCoreRedirectsReadLockedContext *this)

{
  int *piVar1;
  atomic<unsigned_int> aVar2;
  FCoreRedirectsContext *pFVar3;
  atomic<unsigned_int> aVar4;
  undefined1 local_res8 [8];
  
  if (this->NeedsUnlock == false) {
    return;
  }
  pFVar3 = this->Context;
  if (0 < (pFVar3->RWLock).RecursionCount) {
    aVar2 = (pFVar3->RWLock).WriteLockOwnerThreadId;
    aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar2 != aVar4) {
      `FCoreRedirectsContext::FRWLockWithExclusiveRecursion::ReadUnlock'::__l5::<lambda_1>::
      operator()(local_res8);
    }
    piVar1 = &(pFVar3->RWLock).RecursionCount;
    *piVar1 = *piVar1 + -1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141fbfe0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&pFVar3->RWLock);
  return;
}

