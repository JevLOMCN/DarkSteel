// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FBucket @ 14373c7d0

FBucket * __thiscall
TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
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

// FBucket @ 14373c810

FBucket * __thiscall
TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
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

// ~FBucket @ 14373ea60

void __thiscall
TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
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
  TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014373eaa5. Too many branches */
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

// ~FBucket @ 14373eaf0

void __thiscall
TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
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
  TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014373eb35. Too many branches */
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

// FBucket @ 143dfa7c0

FBucket * __thiscall
TStripedMapBase<32,TMap<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>_>,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
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

// ~FBucket @ 143dfdf00

void __thiscall
TStripedMapBase<32,TMap<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>_>,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
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
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143dfdf45. Too many branches */
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

