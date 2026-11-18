// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FAsyncLoadingSyncLoadContext @ 1423073e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FAsyncLoadingSyncLoadContext * __thiscall
FAsyncLoadingSyncLoadContext::FAsyncLoadingSyncLoadContext
          (FAsyncLoadingSyncLoadContext *this,TArrayView<int_const_,int> *param_1,
          FAsyncPackage2 *param_2)

{
  int *piVar1;
  int iVar2;
  atomic<int> aVar3;
  int *piVar4;
  atomic<unsigned___int64> aVar5;
  int iVar6;
  ForElementType<int> _Dst;
  ForElementType<FAsyncPackage2_*> FVar7;
  bool bVar8;
  
  iVar2 = param_1->ArrayNum;
  piVar4 = param_1->DataPtr;
  piVar1 = &(this->RequestIDs).ArrayMax;
  (this->RequestIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->RequestIDs).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->RequestIDs).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->RequestIDs).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->RequestIDs;
    }
    memcpy((void *)_Dst,piVar4,(longlong)iVar2 << 2);
  }
  this->bHasFoundRequestedPackages = (atomic<bool>)0x0;
  this->DoneEvent = (atomic<unsigned_char>)0x0;
  piVar1 = &(this->RequestedPackages).ArrayNum;
  (this->RequestedPackages).AllocatorInstance.SecondaryData = (ForElementType<FAsyncPackage2_*>)0x0;
  piVar4 = &(this->RequestedPackages).ArrayMax;
  *piVar1 = 0;
  *piVar4 = 4;
  this->RequestingPackage = (FAsyncPackage2 *)0x0;
  this->RefCount = (atomic<int>)0x1;
  if (param_2 != (FAsyncPackage2 *)0x0) {
    aVar3 = param_2->RefCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      bVar8 = aVar3 == param_2->RefCount;
      if (bVar8) {
        param_2->RefCount = (atomic<int>)((int)aVar3 + 1);
      }
      UNLOCK();
      if (bVar8) {
        this->RequestingPackage = param_2;
        break;
      }
      aVar3 = param_2->RefCount;
    }
  }
  iVar2 = (this->RequestIDs).ArrayNum;
  iVar6 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage2_*>_>
                    (8,8,iVar2,&(this->RequestedPackages).AllocatorInstance,piVar1,piVar4);
  FVar7 = (this->RequestedPackages).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FAsyncPackage2_*>)0x0) {
    FVar7 = (ForElementType<FAsyncPackage2_*>)&this->RequestedPackages;
  }
  memset((void *)((longlong)FVar7 + (longlong)iVar6 * 8),0,(longlong)iVar2 << 3);
  LOCK();
  UNLOCK();
  aVar5 = (atomic<unsigned___int64>)((longlong)NextContextId + 1);
  this->ContextId = (ulong64)NextContextId;
  NextContextId = aVar5;
  if (NextContextId == (atomic<unsigned___int64>)0x0) {
    LOCK();
    NextContextId = (atomic<unsigned___int64>)0x1;
    UNLOCK();
  }
  return this;
}

