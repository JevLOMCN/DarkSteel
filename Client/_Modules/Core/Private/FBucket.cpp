// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Dequeue @ 141490fd0

FThread * __thiscall UE::ParkingLot::Private::FBucket::Dequeue(FBucket *this)

{
  FThread *pFVar1;
  
  pFVar1 = this->Head;
  if (pFVar1 != (FThread *)0x0) {
    this->Head = pFVar1->Next;
    pFVar1->Next = (FThread *)0x0;
    if (this->Tail == pFVar1) {
      this->Tail = (FThread *)0x0;
    }
  }
  return pFVar1;
}

// Enqueue @ 141493210

void __thiscall UE::ParkingLot::Private::FBucket::Enqueue(FBucket *this,FThread *param_1)

{
  if (this->Tail != (FThread *)0x0) {
    this->Tail->Next = param_1;
    this->Tail = param_1;
    return;
  }
  this->Head = param_1;
  this->Tail = param_1;
  return;
}

// FBucket @ 141733e90

FBucket * __thiscall
TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
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

// ~FBucket @ 1417391c0

void __thiscall
TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
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
  TSparseArray<TSparseSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextId,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Map);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)this);
  if (BVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141739205. Too many branches */
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

