// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 18

// FNavigationOctreeController @ 146d742b0

FNavigationOctreeController * __thiscall
FNavigationOctreeController::FNavigationOctreeController(FNavigationOctreeController *this)

{
  *(undefined8 *)&(this->PendingOctreeUpdates).Elements = 0;
  *(undefined8 *)&(this->PendingOctreeUpdates).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingOctreeUpdates).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingOctreeUpdates).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingOctreeUpdates).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingOctreeUpdates).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingOctreeUpdates).Elements.field_0x30 = 0xffffffff;
  (this->PendingOctreeUpdates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingOctreeUpdates).HashSize = 0;
  *(undefined8 *)&(this->PendingUpdates).Elements = 0;
  *(undefined8 *)&(this->PendingUpdates).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpdates).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x30 = 0xffffffff;
  (this->PendingUpdates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingUpdates).HashSize = 0;
  (this->NavOctree).Object = (FNavigationOctree *)0x0;
  (this->NavOctree).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OctreeChildNodesMap = 0;
  *(undefined8 *)&(this->OctreeChildNodesMap).field_0x8 = 0;
  *(undefined8 *)&(this->OctreeChildNodesMap).field_0x20 = 0;
  *(undefined4 *)&(this->OctreeChildNodesMap).field_0x28 = 0;
  *(undefined4 *)&(this->OctreeChildNodesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OctreeChildNodesMap).field_0x34 = 0;
  *(undefined4 *)&(this->OctreeChildNodesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OctreeChildNodesMap).field_0x40 = 0;
  *(undefined4 *)&(this->OctreeChildNodesMap).field_0x48 = 0;
  this->bNavOctreeLock = '\0';
  *(undefined8 *)&this->OctreeParentChildNodesMap = 0;
  *(undefined8 *)&(this->OctreeParentChildNodesMap).field_0x8 = 0;
  *(undefined8 *)&(this->OctreeParentChildNodesMap).field_0x20 = 0;
  *(undefined4 *)&(this->OctreeParentChildNodesMap).field_0x28 = 0;
  *(undefined4 *)&(this->OctreeParentChildNodesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OctreeParentChildNodesMap).field_0x34 = 0;
  *(undefined4 *)&(this->OctreeParentChildNodesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OctreeParentChildNodesMap).field_0x40 = 0;
  *(undefined4 *)&(this->OctreeParentChildNodesMap).field_0x48 = 0;
  return this;
}

// ~FNavigationOctreeController @ 146d78700

void __thiscall
FNavigationOctreeController::~FNavigationOctreeController(FNavigationOctreeController *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->OctreeParentChildNodesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OctreeParentChildNodesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OctreeParentChildNodesMap);
  *(undefined4 *)&(this->OctreeChildNodesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OctreeChildNodesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OctreeChildNodesMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavOctree).SharedReferenceCount.ReferenceController);
  (this->PendingUpdates).HashSize = 0;
  FVar2 = (this->PendingUpdates).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingUpdates).Elements);
  (this->PendingOctreeUpdates).HashSize = 0;
  FVar2 = (this->PendingOctreeUpdates).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetDataForElement @ 146d9a3b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationOctreeController::GetDataForElement
          (FNavigationOctreeController *this,FNavigationElementHandle *param_1)

{
  FNavigationOctree *pFVar1;
  FOctreeElementId2 FVar2;
  code *pcVar3;
  bool bVar4;
  FOctreeElementId2 *pFVar5;
  FNavigationRelevantData *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
  local_18.SubElementId = param_1->SubElementId;
  pFVar1 = (this->NavOctree).Object;
  if (pFVar1 != (FNavigationOctree *)0x0) {
    pFVar5 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
             ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                     *)&pFVar1->ElementToOctreeId,&local_18);
    if (pFVar5 != (FOctreeElementId2 *)0x0) {
      bVar4 = IsValidElement(this,pFVar5);
      if (bVar4) {
        if ((this->NavOctree).Object == (FNavigationOctree *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FNavigationRelevantData *)(*pcVar3)();
            return pFVar6;
          }
        }
        if (pFVar5->NodeIndex != 0xffffffff) {
          pFVar1 = (this->NavOctree).Object;
          FVar2 = *pFVar5;
          uVar10 = FVar2.NodeIndex;
          uVar7 = 0;
          if ((int)uVar10 < (int)pFVar1->_padding_) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FNavigationRelevantData *)(*pcVar3)();
              return pFVar6;
            }
          }
          uVar9 = FVar2.ElementIndex;
          lVar11 = pFVar1->_padding_ + (longlong)(int)uVar10 * 0x490;
          uVar7 = 0;
          if ((int)uVar9 < *(int *)(lVar11 + 0x488)) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FNavigationRelevantData *)(*pcVar3)();
              return pFVar6;
            }
          }
          lVar8 = *(longlong *)(lVar11 + 0x480);
          if (*(longlong *)(lVar11 + 0x480) == 0) {
            lVar8 = lVar11;
          }
          return *(FNavigationRelevantData **)(lVar8 + 0x38 + (longlong)(int)uVar9 * 0x48);
        }
        return (FNavigationRelevantData *)0x0;
      }
    }
  }
  return (FNavigationRelevantData *)0x0;
}

// GetDataForObject @ 146d9a6d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationOctreeController::GetDataForObject(FNavigationOctreeController *this,UObject *param_1)

{
  FNavigationRelevantData *pFVar1;
  UObject *local_res10 [3];
  FWeakObjectPtr local_28;
  undefined8 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res10[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)local_res10);
  uStack_20 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_28;
  local_18.SubElementId = 0xffffffffffffffff;
  pFVar1 = GetDataForElement(this,&local_18);
  return pFVar1;
}

// GetMutableDataForElement @ 146d9c210

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationOctreeController::GetMutableDataForElement
          (FNavigationOctreeController *this,FNavigationElementHandle *param_1)

{
  FNavigationOctree *pFVar1;
  code *pcVar2;
  bool bVar3;
  FOctreeElementId2 *pFVar4;
  FNavigationRelevantData *pFVar5;
  FNavigationOctreeElement *pFVar6;
  FNavigationElementHandle local_18;
  
  local_18.OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
  local_18.SubElementId = param_1->SubElementId;
  pFVar1 = (this->NavOctree).Object;
  if (pFVar1 != (FNavigationOctree *)0x0) {
    pFVar4 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
             ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                     *)&pFVar1->ElementToOctreeId,&local_18);
    if (pFVar4 != (FOctreeElementId2 *)0x0) {
      bVar3 = IsValidElement(this,pFVar4);
      if (bVar3) {
        if ((this->NavOctree).Object == (FNavigationOctree *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FNavigationRelevantData *)(*pcVar2)();
            return pFVar5;
          }
        }
        if (pFVar4->NodeIndex != 0xffffffff) {
          pFVar6 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                             ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                              &((this->NavOctree).Object)->_padding_,*pFVar4);
          return (pFVar6->Data).Object;
        }
      }
    }
  }
  return (FNavigationRelevantData *)0x0;
}

// GetMutableDataForObject @ 146d9c330

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationOctreeController::GetMutableDataForObject
          (FNavigationOctreeController *this,UObject *param_1)

{
  FNavigationRelevantData *pFVar1;
  UObject *local_res10 [3];
  FWeakObjectPtr local_28;
  undefined8 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res10[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)local_res10);
  uStack_20 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_28;
  local_18.SubElementId = 0xffffffffffffffff;
  pFVar1 = GetMutableDataForElement(this,&local_18);
  return pFVar1;
}

// GetNavOctreeElementData @ 146d9cee0

bool __thiscall
FNavigationOctreeController::GetNavOctreeElementData
          (FNavigationOctreeController *this,UObject *param_1,int *param_2,TBox<double> *param_3)

{
  bool bVar1;
  ENavigationDirtyFlag local_res10 [8];
  UObject *local_res18 [2];
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  FNavigationElementHandle local_28;
  
  local_res10[0] = None;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_res18);
  uStack_30 = 0xffffffffffffffff;
  local_28.OwnerUObject.WeakPtr = local_38;
  local_28.SubElementId = 0xffffffffffffffff;
  bVar1 = GetNavOctreeElementData(this,&local_28,local_res10,param_3);
  *param_2 = (uint)local_res10[0];
  return bVar1;
}

// GetNavOctreeElementData @ 146d9cf90

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FNavigationOctreeController::GetNavOctreeElementData
          (FNavigationOctreeController *this,FNavigationElementHandle *param_1,
          ENavigationDirtyFlag *param_2,TBox<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FNavigationOctree *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  undefined1 uVar13;
  ENavigationDirtyFlag EVar14;
  FOctreeElementId2 *pFVar15;
  FNavigationOctreeElement *pFVar16;
  FNavigationElementHandle local_88 [4];
  undefined7 uStack_47;
  
  local_88[0].OwnerUObject.WeakPtr = (param_1->OwnerUObject).WeakPtr;
  local_88[0].SubElementId = param_1->SubElementId;
  pFVar8 = (this->NavOctree).Object;
  if (((pFVar8 != (FNavigationOctree *)0x0) &&
      (pFVar15 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                 ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                         *)&pFVar8->ElementToOctreeId,local_88), pFVar15 != (FOctreeElementId2 *)0x0
      )) && (bVar12 = IsValidElement(this,pFVar15), bVar12)) {
    if (((this->NavOctree).Object == (FNavigationOctree *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    pFVar16 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                        ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                         &((this->NavOctree).Object)->_padding_,*pFVar15);
    EVar14 = FNavigationRelevantData::GetDirtyFlag((pFVar16->Data).Object);
    *param_2 = EVar14;
    dVar1 = (pFVar16->Bounds).BoxExtent.field0_0x0._s_0.X;
    dVar2 = (pFVar16->Bounds).BoxExtent.field0_0x0._s_0.Y;
    dVar3 = (pFVar16->Bounds).BoxExtent.field0_0x0._s_0.Z;
    dVar4 = (pFVar16->Bounds).Origin.field0_0x0._s_0.Z;
    dVar5 = (pFVar16->Bounds).Origin.field0_0x0._s_0.X;
    dVar6 = (pFVar16->Bounds).Origin.field0_0x0._s_0.Y;
    dVar10 = dVar3 + (pFVar16->Bounds).Origin.field0_0x0._s_0.Z;
    dVar7 = (pFVar16->Bounds).Origin.field0_0x0._s_0.Y;
    (param_3->Min).field0_0x0._s_0.X = (pFVar16->Bounds).Origin.field0_0x0._s_0.X - dVar1;
    (param_3->Min).field0_0x0._s_0.Y = dVar6 - dVar2;
    (param_3->Min).field0_0x0._s_0.Z = dVar4 - dVar3;
    (param_3->Max).field0_0x0._s_0.X = dVar1 + dVar5;
    auVar11._8_4_ = SUB84(dVar10,0);
    auVar11._0_8_ = dVar2 + dVar7;
    auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_3->Max).field0_0x0 + 8) = auVar11;
    param_3->IsValid = 1;
    param_3->Pad[0] = (char)uStack_47;
    param_3->Pad[1] = (char)((uint7)uStack_47 >> 8);
    param_3->Pad[2] = (char)((uint7)uStack_47 >> 0x10);
    param_3->Pad[3] = (char)((uint7)uStack_47 >> 0x18);
    param_3->Pad[4] = (char)((uint7)uStack_47 >> 0x20);
    param_3->Pad[5] = (char)((uint7)uStack_47 >> 0x28);
    param_3->Pad[6] = (char)((uint7)uStack_47 >> 0x30);
    return true;
  }
  return false;
}

// GetObjectsNavOctreeId @ 146d9e800

FOctreeElementId2 * __thiscall
FNavigationOctreeController::GetObjectsNavOctreeId
          (FNavigationOctreeController *this,UObject *param_1)

{
  FNavigationOctree *pFVar1;
  FOctreeElementId2 *pFVar2;
  UObject *local_res8;
  FWeakObjectPtr local_28;
  undefined8 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
  pFVar1 = (this->NavOctree).Object;
  uStack_20 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_28;
  local_18.SubElementId = 0xffffffffffffffff;
  if (pFVar1 != (FNavigationOctree *)0x0) {
    pFVar2 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
             ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                     *)&pFVar1->ElementToOctreeId,&local_18);
    return pFVar2;
  }
  return (FOctreeElementId2 *)0x0;
}

// HasObjectsNavOctreeId @ 146da3560

bool __thiscall
FNavigationOctreeController::HasObjectsNavOctreeId
          (FNavigationOctreeController *this,UObject *param_1)

{
  FNavigationOctree *pFVar1;
  FOctreeElementId2 *pFVar2;
  UObject *local_res8;
  FWeakObjectPtr local_28;
  undefined8 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
  pFVar1 = (this->NavOctree).Object;
  uStack_20 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_28;
  local_18.SubElementId = 0xffffffffffffffff;
  if (pFVar1 != (FNavigationOctree *)0x0) {
    pFVar2 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
             ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                     *)&pFVar1->ElementToOctreeId,&local_18);
    if (pFVar2 != (FOctreeElementId2 *)0x0) {
      return true;
    }
  }
  return false;
}

// HasPendingObjectNavOctreeId @ 146da3620

bool __thiscall
FNavigationOctreeController::HasPendingObjectNavOctreeId
          (FNavigationOctreeController *this,UObject *param_1)

{
  bool bVar1;
  UObject *local_res10 [3];
  FWeakObjectPtr local_28;
  undefined8 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res10[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)local_res10);
  uStack_20 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_28;
  local_18.SubElementId = 0xffffffffffffffff;
  bVar1 = HasPendingUpdateForElement(this,&local_18);
  return bVar1;
}

// HasPendingUpdateForElement @ 146da3750

bool __thiscall
FNavigationOctreeController::HasPendingUpdateForElement
          (FNavigationOctreeController *this,FNavigationElementHandle *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)(param_1->SubElementId >> 0x20) * 0x17 + (int)param_1->SubElementId;
  uVar4 = ((param_1->OwnerUObject).WeakPtr.ObjectSerialNumber ^
          (param_1->OwnerUObject).WeakPtr.ObjectIndex) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  iVar1 = TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
          FindIndexByHash<FNavigationElementHandle>
                    (&this->PendingUpdates,(uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf,param_1);
  return iVar1 != -1;
}

// IsValidElement @ 146da5990

bool __thiscall
FNavigationOctreeController::IsValidElement
          (FNavigationOctreeController *this,FOctreeElementId2 *param_1)

{
  FNavigationOctree *pFVar1;
  FOctreeElementId2 FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  pFVar1 = (this->NavOctree).Object;
  if (pFVar1 != (FNavigationOctree *)0x0) {
    FVar2 = *param_1;
    uVar7 = FVar2.NodeIndex;
    if (uVar7 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar7 < (int)pFVar1->_padding_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (FVar2.ElementIndex < *(int *)((longlong)(int)uVar7 * 0x490 + 0x488 + pFVar1->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// RemoveNode @ 146db5dd0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationOctreeController::RemoveNode
          (FNavigationOctreeController *this,FOctreeElementId2 param_1,
          FNavigationElementHandle *param_2)

{
  int iVar1;
  FNavigationOctree *pFVar2;
  FNavigationRelevantData *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FNavigationOctreeElement *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FName local_res8;
  FName local_res20;
  FStatMessage local_48;
  
  pFVar2 = (this->NavOctree).Object;
  if (pFVar2 != (FNavigationOctree *)0x0) {
    pFVar8 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                       ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                        &pFVar2->_padding_,param_1);
    pFVar3 = (pFVar8->Data).Object;
    iVar13 = *(int *)&(pFVar3->CollisionData).field_0x14;
    iVar1 = *(int *)&(pFVar3->VoxelData).field_0x14;
    uVar7 = FCompositeNavModifier::GetAllocatedSize(&pFVar3->Modifiers);
    iVar13 = iVar1 + uVar7 + iVar13;
    pFVar2->NodesMemory = pFVar2->NodesMemory - iVar13;
    if (iVar13 != 0) {
      FVar10 = StatPtr_STAT_Navigation_CollisionTreeMemory;
      if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_res20,"STAT_Navigation_CollisionTreeMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_Navigation_CollisionTreeMemory,*pFVar9,L"Nav tree memory",
                            "STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",true,false,
                            ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar10;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_48.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar4;
        local_48.StatData.Pad = (uchar  [8])(longlong)iVar13;
        local_48.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_48);
        FStatsTrace::Add(&local_res8,-(longlong)iVar13);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    FNavigationOctree::RemoveElement(pFVar2,param_1);
    if (((this->NavOctree).Object == (FNavigationOctree *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (this->NavOctree).Object;
    if (*(int *)&(pFVar2->ElementToOctreeId).field_0x8 !=
        *(int *)&(pFVar2->ElementToOctreeId).field_0x34) {
      uVar7 = (int)(param_2->SubElementId >> 0x20) * 0x17 + (int)param_2->SubElementId;
      uVar12 = ((param_2->OwnerUObject).WeakPtr.ObjectSerialNumber ^
               (param_2->OwnerUObject).WeakPtr.ObjectIndex) - uVar7 ^ uVar7 >> 0xd;
      uVar11 = (-0x61c88647 - uVar12) - uVar7 ^ uVar12 << 8;
      uVar7 = (uVar7 - uVar11) - uVar12 ^ uVar11 >> 0xd;
      uVar12 = (uVar12 - uVar7) - uVar11 ^ uVar7 >> 0xc;
      uVar11 = (uVar11 - uVar12) - uVar7 ^ uVar12 << 0x10;
      uVar7 = (uVar7 - uVar11) - uVar12 ^ uVar11 >> 5;
      uVar12 = (uVar12 - uVar7) - uVar11 ^ uVar7 >> 3;
      uVar11 = (uVar11 - uVar12) - uVar7 ^ uVar12 << 10;
      TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
      ::RemoveImpl<FNavigationElementHandle>
                ((TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                  *)&pFVar2->ElementToOctreeId,(uVar7 - uVar11) - uVar12 ^ uVar11 >> 0xf,param_2);
    }
  }
  return;
}

// RemoveObjectsNavOctreeId @ 146db60c0

void __thiscall
FNavigationOctreeController::RemoveObjectsNavOctreeId
          (FNavigationOctreeController *this,UObject *param_1)

{
  FNavigationOctree *pFVar1;
  bool bVar2;
  FOctreeElementId2 *pFVar3;
  UObject *local_res8;
  FWeakObjectPtr local_28;
  ulong64 uStack_20;
  FNavigationElementHandle local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_res8);
  pFVar1 = (this->NavOctree).Object;
  uStack_20 = 0xffffffffffffffff;
  local_18.OwnerUObject.WeakPtr = local_28;
  local_18.SubElementId = 0xffffffffffffffff;
  if (pFVar1 != (FNavigationOctree *)0x0) {
    pFVar3 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
             ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                     *)&pFVar1->ElementToOctreeId,&local_18);
    if (pFVar3 != (FOctreeElementId2 *)0x0) {
      bVar2 = IsValidElement(this,pFVar3);
      if (bVar2) {
        local_18.OwnerUObject.WeakPtr = local_28;
        local_18.SubElementId = uStack_20;
        RemoveNode(this,*pFVar3,&local_18);
      }
    }
  }
  return;
}

// Reset @ 146db7a50

void __thiscall FNavigationOctreeController::Reset(FNavigationOctreeController *this)

{
  TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator> *this_00;
  TSharedPtr<FNavigationOctree,1> *pTVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->NavOctree;
  if (pTVar1->Object != (FNavigationOctree *)0x0) {
    TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::Destroy
              ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
               &pTVar1->Object->_padding_);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FNavigationOctree,1> *)&local_18) {
      pTVar1->Object = (FNavigationOctree *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NavOctree).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  this_00 = &this->PendingUpdates;
  for (lVar3 = 0x3f; 0x2fUL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  iVar5 = 1 << ((byte)lVar3 & 0x1f);
  iVar2 = (this->PendingUpdates).HashSize;
  if ((iVar2 < iVar5) || (iVar5 < iVar2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<FNavigationDirtyElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->PendingUpdates).Elements.field_0x8);
  iVar2 = *(int *)&(this->PendingUpdates).Elements.field_0xc;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x8 = 0;
  if (iVar2 != 0x20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0x20,(ForAnyElementType *)this_00,0,
               (int *)&(this->PendingUpdates).Elements.field_0xc);
  }
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->PendingUpdates).Elements.field_0x2c;
  *(undefined4 *)&(this->PendingUpdates).Elements.field_0x28 = 0;
  if ((iVar2 < 0x20) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->PendingUpdates).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingUpdates).Elements.field_0x10,0
              );
  }
  if (bVar4) {
    (this->PendingUpdates).HashSize = iVar5;
    TSet<FNavigationDirtyElement,FNavigationDirtyElementKeyFunctions,FDefaultSetAllocator>::Rehash
              (this_00);
  }
  return;
}

// SetNavigableGeometryStoringMode @ 146db9070

void __thiscall
FNavigationOctreeController::SetNavigableGeometryStoringMode
          (FNavigationOctreeController *this,ENavGeometryStoringMode param_1)

{
  FNavigationOctree *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->NavOctree).Object == (FNavigationOctree *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavOctree.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationOctreeController.cpp"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->NavOctree).Object == (FNavigationOctree *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->NavOctree).Object;
  pFVar1->bGatherGeometry = param_1 == StoreNavGeometry;
  return;
}

// GetNavOctreeIdForElement @ 146e5bd00

FOctreeElementId2 * __thiscall
FNavigationOctreeController::GetNavOctreeIdForElement
          (FNavigationOctreeController *this,FNavigationElementHandle *param_1)

{
  uint uVar1;
  uint uVar2;
  FNavigationOctree *pFVar3;
  FOctreeElementId2 FVar4;
  FOctreeElementId2 *pFVar5;
  uint uVar6;
  FOctreeElementId2 *pFVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  pFVar3 = (this->NavOctree).Object;
  if (pFVar3 == (FNavigationOctree *)0x0) {
    return (FOctreeElementId2 *)0x0;
  }
  FVar4 = (FOctreeElementId2)param_1->SubElementId;
  uVar1 = (param_1->OwnerUObject).WeakPtr.ObjectSerialNumber;
  uVar2 = (param_1->OwnerUObject).WeakPtr.ObjectIndex;
  uVar10 = FVar4.ElementIndex * 0x17 + FVar4.NodeIndex;
  uVar8 = (uVar2 ^ uVar1) - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar10 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  if (*(int *)&(pFVar3->ElementToOctreeId).field_0x8 !=
      *(int *)&(pFVar3->ElementToOctreeId).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar3->ElementToOctreeId).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar3->ElementToOctreeId).field_0x38;
    }
    uVar6 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(pFVar3->ElementToOctreeId).field_0x48 - 1U &
                               ((uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        pFVar5 = (FOctreeElementId2 *)
                 ((longlong)(int)uVar6 * 0x20 + *(longlong *)&pFVar3->ElementToOctreeId);
        if (((pFVar5->NodeIndex == uVar2) && (pFVar5->ElementIndex == uVar1)) &&
           (pFVar5[1] == FVar4)) {
          if (uVar6 != 0xffffffff) goto LAB_146e5be2e;
          break;
        }
        uVar6 = pFVar5[3].NodeIndex;
      } while (uVar6 != 0xffffffff);
    }
  }
  pFVar5 = (FOctreeElementId2 *)0x0;
LAB_146e5be2e:
  pFVar7 = pFVar5 + 2;
  if (pFVar5 == (FOctreeElementId2 *)0x0) {
    pFVar7 = (FOctreeElementId2 *)0x0;
  }
  return pFVar7;
}

