// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ~FBucket @ 145e43630

void __thiscall
TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
::FBucket::~FBucket(FBucket *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145e43675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)this);
    return;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

