// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FNamePoolShardBase @ 141a72c60

void __thiscall FNamePoolShardBase::~FNamePoolShardBase(FNamePoolShardBase *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  FMemory::Free(this->Slots);
  this->UsedSlots = 0;
  this->CapacityMask = 0;
  this->Slots = (FNameSlot *)0x0;
  LOCK();
  this->NumCreatedEntries = (atomic<unsigned_int>)0x0;
  UNLOCK();
  LOCK();
  this->NumCreatedWideEntries = (atomic<unsigned_int>)0x0;
  UNLOCK();
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141a72c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

