// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FLockStripeData @ 14850b780

FLockStripeData * __thiscall
FShaderCompilerJobTable::FLockStripeData::FLockStripeData(FLockStripeData *this)

{
  (this->Jobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Jobs).ArrayNum = 0;
  (this->Jobs).ArrayMax = 0;
  (this->FreeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).ArrayNum = 0;
  (this->FreeIndices).ArrayMax = 0;
  (this->JobHash).Hash = FHashTable::EmptyHash;
  (this->JobHash).HashSize = 0x400;
  (this->JobHash).HashMask = 0;
  (this->JobHash).IndexSize = 0;
  (this->JobHash).NextIndex = (uint *)0x0;
  (this->StripeLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~FLockStripeData @ 148510a60

void __thiscall FShaderCompilerJobTable::FLockStripeData::~FLockStripeData(FLockStripeData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->StripeLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->StripeLock);
  }
  if ((this->JobHash).IndexSize != 0) {
    (this->JobHash).HashMask = 0;
    (this->JobHash).IndexSize = 0;
    operator_delete__((this->JobHash).Hash);
    (this->JobHash).Hash = FHashTable::EmptyHash;
    operator_delete__((this->JobHash).NextIndex);
    (this->JobHash).NextIndex = (uint *)0x0;
  }
  pFVar1 = (this->FreeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
            ((TRefCountPtr<FShaderCommonCompileJob> *)(this->Jobs).AllocatorInstance.Data,
             (this->Jobs).ArrayNum);
  pFVar1 = (this->Jobs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

