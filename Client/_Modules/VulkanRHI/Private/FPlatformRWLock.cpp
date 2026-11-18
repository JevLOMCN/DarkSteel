// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FPlatformRWLock @ 145b002c0

FPlatformRWLock * __thiscall UE::FPlatformRWLock::FPlatformRWLock(FPlatformRWLock *this)

{
  (this->Mutex).Mutex.Ptr = (void *)0x0;
  return this;
}

// ~FPlatformRWLock @ 145b05000

void __thiscall UE::FPlatformRWLock::~FPlatformRWLock(FPlatformRWLock *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145b0501b. Too many branches */
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

