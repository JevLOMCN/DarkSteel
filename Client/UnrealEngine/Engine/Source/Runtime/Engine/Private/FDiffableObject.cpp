// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDiffableObject @ 1488ae0e0

FDiffableObject * __thiscall
UE::Transaction::FDiffableObject::FDiffableObject(FDiffableObject *this,FDiffableObject *param_1)

{
  EObjectFlags EVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  
  uVar2 = *(undefined8 *)&(param_1->ObjectInfo).field_0x8;
  *(undefined8 *)&this->ObjectInfo = *(undefined8 *)&param_1->ObjectInfo;
  *(undefined8 *)&(this->ObjectInfo).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(param_1->ObjectInfo).field_0x18;
  *(undefined8 *)&(this->ObjectInfo).field_0x10 = *(undefined8 *)&(param_1->ObjectInfo).field_0x10;
  *(undefined8 *)&(this->ObjectInfo).field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&(param_1->ObjectInfo).field_0x28;
  *(undefined8 *)&(this->ObjectInfo).field_0x20 = *(undefined8 *)&(param_1->ObjectInfo).field_0x20;
  *(undefined8 *)&(this->ObjectInfo).field_0x28 = uVar2;
  uVar3 = *(undefined3 *)&(param_1->ObjectInfo).field_0x31;
  (this->ObjectInfo).bIsPendingKill = (param_1->ObjectInfo).bIsPendingKill;
  *(undefined3 *)&(this->ObjectInfo).field_0x31 = uVar3;
  FPersistentObjectRef::FPersistentObjectRef(&this->ObjectArchetype,&param_1->ObjectArchetype);
  EVar1 = param_1->ObjectFlags;
  (this->SerializedData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ObjectFlags = EVar1;
  (this->SerializedData).Data.AllocatorInstance.Data =
       (param_1->SerializedData).Data.AllocatorInstance.Data;
  (param_1->SerializedData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedData).Data.ArrayNum = (param_1->SerializedData).Data.ArrayNum;
  (this->SerializedData).Data.ArrayMax = (param_1->SerializedData).Data.ArrayMax;
  (param_1->SerializedData).Data.ArrayNum = 0;
  (param_1->SerializedData).Data.ArrayMax = 0;
  (this->SerializedTaggedData).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedTaggedData).Pairs.AllocatorInstance.Data =
       (param_1->SerializedTaggedData).Pairs.AllocatorInstance.Data;
  (param_1->SerializedTaggedData).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedTaggedData).Pairs.ArrayNum = (param_1->SerializedTaggedData).Pairs.ArrayNum;
  (this->SerializedTaggedData).Pairs.ArrayMax = (param_1->SerializedTaggedData).Pairs.ArrayMax;
  (param_1->SerializedTaggedData).Pairs.ArrayNum = 0;
  (param_1->SerializedTaggedData).Pairs.ArrayMax = 0;
  return this;
}

// SetObject @ 1488de000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Transaction::FDiffableObject::SetObject(FDiffableObject *this,UObject *param_1)

{
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *_Dst_00;
  ForElementType<FName> FVar1;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar2;
  bool bVar3;
  UObject *pUVar4;
  FPersistentObjectRef *pFVar5;
  undefined1 auStack_c8 [32];
  FPersistentObjectRef local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FTransactionObjectId::SetObject((FTransactionObjectId *)this,param_1);
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  (this->ObjectInfo).bIsPendingKill = bVar3;
  pUVar4 = UObject::GetArchetype(param_1);
  pFVar5 = FPersistentObjectRef::FPersistentObjectRef(&local_a8,pUVar4);
  (this->ObjectArchetype).ReferenceType = pFVar5->ReferenceType;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (pFVar5->RootObject).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar4);
  }
  _Dst = &(this->ObjectArchetype).SubObjectHierarchyIDs;
  (this->ObjectArchetype).RootObject.field0_0x0 = (pFVar5->RootObject).field0_0x0;
  if (_Dst != &pFVar5->SubObjectHierarchyIDs) {
    if ((pFVar5->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData ==
        (ForElementType<FName>)0x0) {
      memmove(_Dst,&pFVar5->SubObjectHierarchyIDs,0x20);
    }
    FVar1 = (this->ObjectArchetype).SubObjectHierarchyIDs.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->ObjectArchetype).SubObjectHierarchyIDs.AllocatorInstance.SecondaryData =
         (pFVar5->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
    (pFVar5->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
    (this->ObjectArchetype).SubObjectHierarchyIDs.ArrayNum =
         (pFVar5->SubObjectHierarchyIDs).ArrayNum;
    (this->ObjectArchetype).SubObjectHierarchyIDs.ArrayMax =
         (pFVar5->SubObjectHierarchyIDs).ArrayMax;
    (pFVar5->SubObjectHierarchyIDs).ArrayNum = 0;
    (pFVar5->SubObjectHierarchyIDs).ArrayMax = 4;
  }
  _Dst_00 = &(this->ObjectArchetype).CachedSubObjectHierarchy;
  (this->ObjectArchetype).CachedRootObject.WeakPtr = (pFVar5->CachedRootObject).WeakPtr;
  if (_Dst_00 != &pFVar5->CachedSubObjectHierarchy) {
    if ((pFVar5->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData ==
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      memmove(_Dst_00,&pFVar5->CachedSubObjectHierarchy,0x20);
    }
    FVar2 = (this->ObjectArchetype).CachedSubObjectHierarchy.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    (this->ObjectArchetype).CachedSubObjectHierarchy.AllocatorInstance.SecondaryData =
         (pFVar5->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
    (pFVar5->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData =
         (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
    (this->ObjectArchetype).CachedSubObjectHierarchy.ArrayNum =
         (pFVar5->CachedSubObjectHierarchy).ArrayNum;
    (this->ObjectArchetype).CachedSubObjectHierarchy.ArrayMax =
         (pFVar5->CachedSubObjectHierarchy).ArrayMax;
    (pFVar5->CachedSubObjectHierarchy).ArrayNum = 0;
    (pFVar5->CachedSubObjectHierarchy).ArrayMax = 4;
  }
  if (local_a8.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_a8.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData);
  }
  if (local_a8.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0)
  {
    FMemory::Free((void *)local_a8.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData);
  }
  this->ObjectFlags = *(EObjectFlags *)&param_1->field_0x8;
  return;
}

