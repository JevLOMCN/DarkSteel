// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy> @ 1417390c0

void __thiscall
TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
::
~TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
          (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
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
    TSparseArray<TSparseSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// Add @ 141741f00

void __thiscall
TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
::Add(TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
      *this,FTextId *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FBucket *SRWLock;
  uint uVar6;
  undefined1 local_res8 [8];
  FTextId *local_28;
  FText *local_20;
  
  uVar3 = ::GetTypeHash(&param_1->Key);
  uVar4 = ::GetTypeHash(&param_1->Namespace);
  uVar6 = uVar4 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  uVar3 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  SRWLock = this->Buckets + (uVar3 & 0x1f);
  if (SRWLock == (FBucket *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_28 = param_1;
  local_20 = param_2;
  TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FTextId_const_&,FText_const_&>_>
            ((TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
              *)&SRWLock->Map,(uint)local_res8,
             (TPairInitializer<FTextId_const_&,FText_const_&> *)(ulonglong)uVar3,(bool *)&local_28);
  if (SRWLock != (FBucket *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

