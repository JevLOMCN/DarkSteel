// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// ReleaseOwnershipChecked @ 142b137a0

void __thiscall
FThreadOwnerSection::ReleaseOwnershipChecked
          (FThreadOwnerSection *this,FCriticalSectionQueryable *param_1)

{
  code *pcVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  atomic<unsigned_int> aVar4;
  
  if (param_1 == (FCriticalSectionQueryable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SynchObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  aVar3 = (atomic<unsigned_int>)GetCurrentThreadId();
  param_1->OwnerThreadId = aVar3;
  aVar3 = this->OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOwnedByCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bHasOwner = false;
  this->OwnerThreadId = (atomic<unsigned_int>)0x0;
  aVar3 = param_1->OwnerThreadId;
  aVar4 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLockedOnCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\CriticalSectionQueryable.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->OwnerThreadId = (atomic<unsigned_int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142b1387a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}

