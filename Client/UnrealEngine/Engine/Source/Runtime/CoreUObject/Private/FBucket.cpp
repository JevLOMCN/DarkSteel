// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FBucket @ 141f20a40

FBucket * __thiscall
TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
::FBucket::FBucket(FBucket *this)

{
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  return this;
}

// ~FBucket @ 141f23640

void __thiscall
TStripedMapBase<32,TMap<FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>_>,FPackageId,FPackageStoreEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FPackageStoreEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
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
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141f23685. Too many branches */
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

// FBucket @ 1423086f0

FBucket * __thiscall
TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
::FBucket::FBucket(FBucket *this)

{
  (this->Lock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->Map = 0;
  *(undefined8 *)&(this->Map).field_0x8 = 0;
  *(undefined8 *)&(this->Map).field_0x20 = 0;
  *(undefined4 *)&(this->Map).field_0x28 = 0;
  *(undefined4 *)&(this->Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Map).field_0x34 = 0;
  *(undefined4 *)&(this->Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Map).field_0x40 = 0;
  *(undefined4 *)&(this->Map).field_0x48 = 0;
  return this;
}

// ~FBucket @ 14230a600

void __thiscall
TStripedMapBase<32,TMap<FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>_>,FPackageId,FAsyncPackage2_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FAsyncPackage2_*,0>,FTransactionallySafeStripedMapLockingPolicy>
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
  TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FAsyncPackage2_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014230a645. Too many branches */
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

