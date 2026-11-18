// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy> @ 14373e750

void __thiscall
TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
::
~TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
          (TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FBucket *SRWLock;
  
  SRWLock = this[1].Buckets;
  lVar6 = 0x20;
  puVar5 = (undefined8 *)&this[1].Buckets[0].Map.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    SRWLock = SRWLock + -1;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
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
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

// ~TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy> @ 14373e810

void __thiscall
TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
::
~TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
          (TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FBucket *SRWLock;
  
  SRWLock = this[1].Buckets;
  lVar6 = 0x20;
  puVar5 = (undefined8 *)&this[1].Buckets[0].Map.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    SRWLock = SRWLock + -1;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
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
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

