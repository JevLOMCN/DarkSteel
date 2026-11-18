// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// operator= @ 141ed5da0

void __thiscall
TPersistentObjectPtr<FUniqueObjectGuid>::operator=
          (TPersistentObjectPtr<FUniqueObjectGuid> *this,FObjectPtr param_1)

{
  UObject *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FUniqueObjectGuid *pFVar6;
  FUObjectItem *pFVar7;
  UObject *local_res10;
  FUniqueObjectGuid local_18;
  
  local_res10 = *(UObject **)param_1.field0_0x0;
  if (local_res10 == (UObject *)0x0) {
    (this->WeakPtr).ObjectIndex = 0;
    (this->WeakPtr).ObjectSerialNumber = 0;
    (this->ObjectID).Guid.C = 0;
    (this->ObjectID).Guid.D = 0;
    (this->ObjectID).Guid.A = 0;
    (this->ObjectID).Guid.B = 0;
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar6 = FUniqueObjectGuid::GetOrCreateIDForObject(&local_18,(FObjectPtr)&local_res10);
  uVar2 = (pFVar6->Guid).B;
  uVar3 = (pFVar6->Guid).C;
  uVar4 = (pFVar6->Guid).D;
  (this->ObjectID).Guid.A = (pFVar6->Guid).A;
  (this->ObjectID).Guid.B = uVar2;
  (this->ObjectID).Guid.C = uVar3;
  (this->ObjectID).Guid.D = uVar4;
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  bVar5 = (*IsInAsyncLoadingThread)();
  if ((bVar5) && (pUVar1 != (UObject *)0x0)) {
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar1->field_0xc);
    if (((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0) {
      (this->WeakPtr).ObjectIndex = 0;
      (this->WeakPtr).ObjectSerialNumber = 0;
      return;
    }
  }
  local_res10 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&this->WeakPtr,(FObjectPtr)&local_res10);
  return;
}

// CanCacheObjectPointer @ 141f2a600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TPersistentObjectPtr<FUniqueObjectGuid>::CanCacheObjectPointer
          (TPersistentObjectPtr<FUniqueObjectGuid> *this,FObjectPtr param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FUObjectItem *pFVar5;
  
  bVar3 = (*IsInAsyncLoadingThread)();
  if ((!bVar3) || (*(longlong *)param_1.field0_0x0 == 0)) {
    return true;
  }
  iVar1 = *(int *)(*(longlong *)param_1.field0_0x0 + 0xc);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    return ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0;
  }
  return (_DAT_00000000 >> 0x20 & 0x8400000U) == 0;
}

// Get @ 142179000

UObject * __thiscall
TPersistentObjectPtr<FSoftObjectPath>::Get(TPersistentObjectPtr<FSoftObjectPath> *this)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(&this->WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    return pUVar2;
  }
  if ((this->ObjectID).AssetPath.PackageName == (FName)0x0) {
    return (UObject *)0x0;
  }
  pUVar2 = FSoftObjectPath::ResolveObject(&this->ObjectID);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  bVar1 = (*IsInAsyncLoadingThread)();
  if (((bVar1) && (pUVar2 != (UObject *)0x0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
     ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421790a9:
    bVar1 = true;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) goto LAB_1421790b9;
  }
  else {
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&this->WeakPtr,(FObjectPtr)&local_res8);
    if (pUVar2 != (UObject *)0x0) goto LAB_1421790a9;
  }
  bVar1 = false;
LAB_1421790b9:
  pUVar4 = (UObject *)0x0;
  if (bVar1) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

// Get @ 1421790e0

UObject * __thiscall
TPersistentObjectPtr<FUniqueObjectGuid>::Get(TPersistentObjectPtr<FUniqueObjectGuid> *this)

{
  bool bVar1;
  UObject *pUVar2;
  FUObjectItem *pFVar3;
  UObject *pUVar4;
  UObject *local_res8;
  
  pUVar2 = FWeakObjectPtr::Get(&this->WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    return pUVar2;
  }
  if ((((this->ObjectID).Guid.D == 0 && (this->ObjectID).Guid.C == 0) &&
      (this->ObjectID).Guid.B == 0) && (this->ObjectID).Guid.A == 0) {
    return (UObject *)0x0;
  }
  pUVar2 = FUniqueObjectGuid::ResolveObject(&this->ObjectID);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  bVar1 = (*IsInAsyncLoadingThread)();
  if (((bVar1) && (pUVar2 != (UObject *)0x0)) &&
     (pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
     ((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_142179190:
    bVar1 = true;
    if ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0) goto LAB_1421791a0;
  }
  else {
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&this->WeakPtr,(FObjectPtr)&local_res8);
    if (pUVar2 != (UObject *)0x0) goto LAB_142179190;
  }
  bVar1 = false;
LAB_1421791a0:
  pUVar4 = (UObject *)0x0;
  if (bVar1) {
    pUVar4 = pUVar2;
  }
  return pUVar4;
}

