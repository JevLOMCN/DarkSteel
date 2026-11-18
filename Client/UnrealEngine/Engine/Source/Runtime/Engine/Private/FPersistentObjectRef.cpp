// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FPersistentObjectRef @ 1488ae2c0

FPersistentObjectRef * __thiscall
UE::Transaction::FPersistentObjectRef::FPersistentObjectRef
          (FPersistentObjectRef *this,FPersistentObjectRef *param_1)

{
  UObject *pUVar1;
  ForElementType<FName> FVar2;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar3;
  
  this->ReferenceType = param_1->ReferenceType;
  pUVar1 = (param_1->RootObject).field0_0x0.DebugPtr;
  (this->RootObject).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  if ((param_1->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData == (ForElementType<FName>)0x0
     ) {
    memmove(&this->SubObjectHierarchyIDs,&param_1->SubObjectHierarchyIDs,0x20);
  }
  FVar2 = (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData =
       (param_1->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
  (param_1->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->SubObjectHierarchyIDs).ArrayNum = (param_1->SubObjectHierarchyIDs).ArrayNum;
  (this->SubObjectHierarchyIDs).ArrayMax = (param_1->SubObjectHierarchyIDs).ArrayMax;
  (param_1->SubObjectHierarchyIDs).ArrayNum = 0;
  (param_1->SubObjectHierarchyIDs).ArrayMax = 4;
  (this->CachedRootObject).WeakPtr = (param_1->CachedRootObject).WeakPtr;
  (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  if ((param_1->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData ==
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    memmove(&this->CachedSubObjectHierarchy,&param_1->CachedSubObjectHierarchy,0x20);
  }
  FVar3 = (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData =
       (param_1->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
  (param_1->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  (this->CachedSubObjectHierarchy).ArrayNum = (param_1->CachedSubObjectHierarchy).ArrayNum;
  (this->CachedSubObjectHierarchy).ArrayMax = (param_1->CachedSubObjectHierarchy).ArrayMax;
  (param_1->CachedSubObjectHierarchy).ArrayNum = 0;
  (param_1->CachedSubObjectHierarchy).ArrayMax = 4;
  return this;
}

// FPersistentObjectRef @ 1488ae3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPersistentObjectRef * __thiscall
UE::Transaction::FPersistentObjectRef::FPersistentObjectRef
          (FPersistentObjectRef *this,UObject *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  ForElementType<FName> FVar7;
  FPersistentObjectRef *pFVar8;
  UActorComponent *pUVar9;
  undefined8 *puVar10;
  byte bVar11;
  UActorComponent *pUVar12;
  ForElementType<FName> FVar13;
  uint uVar14;
  bool bVar15;
  undefined8 local_38 [2];
  
  this->ReferenceType = Unknown;
  pUVar12 = (UActorComponent *)0x0;
  (this->RootObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->SubObjectHierarchyIDs).ArrayNum = 0;
  *(undefined8 *)&(this->SubObjectHierarchyIDs).ArrayMax = 4;
  (this->CachedRootObject).WeakPtr.ObjectSerialNumber = 0;
  (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  (this->CachedSubObjectHierarchy).ArrayNum = 0;
  (this->CachedSubObjectHierarchy).ArrayMax = 4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  while ((this->RootObject).field0_0x0.DebugPtr = param_1,
        (UActorComponent *)param_1 != (UActorComponent *)0x0) {
    uVar14 = (uint)((UActorComponent *)param_1)->_padding_ >> 4;
    pUVar9 = pUVar12;
    if ((uVar14 & 1) != 0) {
      pUVar9 = (UActorComponent *)param_1;
    }
    if (pUVar9 == (UActorComponent *)0x0) {
      bVar15 = false;
    }
    else {
      bVar15 = *(UActorComponent **)(pUVar9->_padding_ + 0x110) == pUVar9;
    }
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(((UActorComponent *)param_1)->_padding_ + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UActorComponent *)param_1)->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) {
      bVar11 = (byte)((uint)((UActorComponent *)param_1)->_padding_ >> 0x12) & 1;
LAB_1488ae4ad:
      bVar3 = false;
    }
    else {
      bVar11 = (byte)((uint)((UActorComponent *)param_1)->_padding_ >> 0x12) & 1;
      bVar3 = UActorComponent::IsCreatedByConstructionScript((UActorComponent *)param_1);
      if (!bVar3) goto LAB_1488ae4ad;
      bVar3 = true;
    }
    if (((((uVar14 & 1) == 0) || (!bVar15)) && (bVar11 == 0)) && (!bVar3)) break;
    FVar13 = (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
    local_38[0] = *(undefined8 *)&((this->RootObject).field0_0x0.DebugPtr)->field_0x18;
    FVar7 = (ForElementType<FName>)&this->SubObjectHierarchyIDs;
    if (FVar13 != (ForElementType<FName>)0x0) {
      FVar7 = FVar13;
    }
    if ((ulonglong)FVar7 <= local_38) {
      FVar7 = (ForElementType<FName>)&this->SubObjectHierarchyIDs;
      if (FVar13 != (ForElementType<FName>)0x0) {
        FVar7 = FVar13;
      }
      if ((local_38 <
           (undefined8 *)((longlong)FVar7 + (longlong)(this->SubObjectHierarchyIDs).ArrayMax * 8))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar15)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FPersistentObjectRef *)(*pcVar2)();
        return pFVar8;
      }
    }
    iVar4 = (this->SubObjectHierarchyIDs).ArrayNum;
    if (iVar4 == (this->SubObjectHierarchyIDs).ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,&(this->SubObjectHierarchyIDs).AllocatorInstance,
                         &(this->SubObjectHierarchyIDs).ArrayMax);
    }
    (this->SubObjectHierarchyIDs).ArrayNum = iVar4 + 1;
    FVar13 = (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FName>)&this->SubObjectHierarchyIDs;
    if (FVar13 != (ForElementType<FName>)0x0) {
      FVar7 = FVar13;
    }
    *(undefined8 *)((longlong)FVar7 + (longlong)iVar4 * 8) = local_38[0];
    param_1 = *(UObject **)&((this->RootObject).field0_0x0.DebugPtr)->field_0x20;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UActorComponent *)param_1 != (UActorComponent *)0x0)) {
      GC::MarkAsReachable(param_1);
    }
  }
  if (((this->RootObject).field0_0x0.DebugPtr == (UObject *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("RootObject",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TransactionCommon.cpp"
                          ,0x2b,L""), bVar15)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FPersistentObjectRef *)(*pcVar2)();
    return pFVar8;
  }
  if ((this->SubObjectHierarchyIDs).ArrayNum < 1) {
    this->ReferenceType = RootObject;
  }
  else {
    this->ReferenceType = SubObject;
    FVar13 = (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
    iVar4 = (this->SubObjectHierarchyIDs).ArrayNum;
    if (FVar13 == (ForElementType<FName>)0x0) {
      FVar13 = (ForElementType<FName>)&this->SubObjectHierarchyIDs;
    }
    iVar5 = iVar4 / 2;
    if (0 < iVar5) {
      puVar10 = (undefined8 *)((longlong)FVar13 + (longlong)(iVar4 + -1) * 8);
      do {
        uVar1 = *(undefined8 *)((longlong)FVar13 + (longlong)pUVar12 * 8);
        *(undefined8 *)((longlong)FVar13 + (longlong)pUVar12 * 8) = *puVar10;
        pUVar12 = (UActorComponent *)((longlong)&pUVar12->_padding_ + 1);
        *puVar10 = uVar1;
        puVar10 = puVar10 + -1;
      } while ((longlong)pUVar12 < (longlong)iVar5);
      return this;
    }
  }
  return this;
}

// AddReferencedObjects @ 1488b8f30

void __thiscall
UE::Transaction::FPersistentObjectRef::AddReferencedObjects
          (FPersistentObjectRef *this,FReferenceCollector *param_1)

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar1;
  int iVar2;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->RootObject);
  if (this->ReferenceType == SubObject) {
    iVar2 = (this->CachedSubObjectHierarchy).ArrayNum;
    FVar3 = (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FVar3 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
              &this->CachedSubObjectHierarchy;
    }
    FVar1 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
            ((longlong)FVar3 + (longlong)iVar2 * 8);
    while( true ) {
      if ((this->CachedSubObjectHierarchy).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar3 == FVar1) break;
      FReferenceCollector::AddReferencedObject
                (param_1,(FWeakObjectPtr *)FVar3,(UObject *)0x0,(FProperty *)0x0);
      FVar3 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)((longlong)FVar3 + 8);
    }
  }
  return;
}

// Get @ 1488c15e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall UE::Transaction::FPersistentObjectRef::Get(FPersistentObjectRef *this)

{
  int *piVar1;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar2;
  ForElementType<FName> FVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar12;
  uint uVar13;
  ForElementType<FName> FVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  UObject *local_res18;
  FWeakObjectPtr local_48 [2];
  
  if (this->ReferenceType != SubObject) {
    return (this->RootObject).field0_0x0.DebugPtr;
  }
  if (((this->SubObjectHierarchyIDs).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubObjectHierarchyIDs.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TransactionCommon.cpp"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (UObject *)(*pcVar5)();
    return pUVar9;
  }
  if ((((this->CachedRootObject).WeakPtr.ObjectIndex != 0) ||
      ((this->CachedRootObject).WeakPtr.ObjectSerialNumber != 0)) &&
     ((this->SubObjectHierarchyIDs).ArrayNum == (this->CachedSubObjectHierarchy).ArrayNum)) {
    pUVar10 = FWeakObjectPtr::GetEvenIfUnreachable(&(this->CachedRootObject).WeakPtr);
    pUVar9 = (this->RootObject).field0_0x0.DebugPtr;
    if (pUVar9 == (UObject *)0x0) {
      bVar6 = pUVar10 == (UObject *)0x0;
    }
    else {
      bVar6 = pUVar9 == pUVar10;
    }
    pUVar9 = (UObject *)0x0;
    if (bVar6) {
      pUVar9 = pUVar10;
    }
    uVar13 = 0;
    if (pUVar9 != (UObject *)0x0) {
      lVar17 = 0;
      do {
        if ((this->SubObjectHierarchyIDs).ArrayNum <= (int)uVar13) {
          if (pUVar9 != (UObject *)0x0) {
            return pUVar9;
          }
          break;
        }
        uVar7 = 0;
        if ((int)uVar13 < (this->CachedSubObjectHierarchy).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar9 = (UObject *)(*pcVar5)();
          return pUVar9;
        }
        FVar2 = (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                 &this->CachedSubObjectHierarchy;
        if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
          FVar12 = FVar2;
        }
        pUVar9 = FWeakObjectPtr::GetEvenIfUnreachable
                           ((FWeakObjectPtr *)((longlong)FVar12 + (longlong)(int)uVar13 * 8));
        if (pUVar9 != (UObject *)0x0) {
          uVar7 = 0;
          if ((int)uVar13 < (this->SubObjectHierarchyIDs).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pUVar9 = (UObject *)(*pcVar5)();
            return pUVar9;
          }
          FVar3 = (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<FName>)&this->SubObjectHierarchyIDs;
          if (FVar3 != (ForElementType<FName>)0x0) {
            FVar14 = FVar3;
          }
          if (*(longlong *)&pUVar9->field_0x18 != *(longlong *)(lVar17 + (longlong)FVar14)) break;
        }
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 8;
      } while (pUVar9 != (UObject *)0x0);
    }
  }
  (this->CachedRootObject).WeakPtr = (FWeakObjectPtr)0x0;
  piVar1 = &(this->CachedSubObjectHierarchy).ArrayMax;
  uVar15 = 0;
  (this->CachedSubObjectHierarchy).ArrayNum = 0;
  if ((this->CachedSubObjectHierarchy).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,0,&(this->CachedSubObjectHierarchy).AllocatorInstance,0,piVar1);
  }
  pUVar9 = (this->RootObject).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar9 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar9);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar9);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar9;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pUVar9 = (this->RootObject).field0_0x0.DebugPtr;
  (this->CachedRootObject).WeakPtr = local_res8;
  uVar18 = uVar15;
  if (pUVar9 != (UObject *)0x0) {
    do {
      iVar16 = (int)uVar15;
      if ((this->SubObjectHierarchyIDs).ArrayNum <= iVar16) break;
      if ((iVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UObject *)(*pcVar5)();
        return pUVar9;
      }
      FVar3 = (this->SubObjectHierarchyIDs).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<FName>)&this->SubObjectHierarchyIDs;
      if (FVar3 != (ForElementType<FName>)0x0) {
        FVar14 = FVar3;
      }
      FVar4 = *(FName *)(uVar18 + (longlong)FVar14);
      pUVar11 = Z_Construct_UClass_UObject_NoRegister();
      pUVar9 = StaticFindObjectFast(pUVar11,pUVar9,FVar4,None,RF_NoFlags,Borrowed);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar9);
      }
      local_48[0].ObjectIndex = 0;
      local_48[0].ObjectSerialNumber = 0;
      local_res18 = pUVar9;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(local_48,(FObjectPtr)&local_res18);
      FVar2 = (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
               &this->CachedSubObjectHierarchy;
      if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        FVar12 = FVar2;
      }
      if ((ulonglong)FVar12 <= local_48) {
        FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                 &this->CachedSubObjectHierarchy;
        if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
          FVar12 = FVar2;
        }
        if ((local_48 <
             (FWeakObjectPtr *)
             ((longlong)FVar12 + (longlong)(this->CachedSubObjectHierarchy).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar9 = (UObject *)(*pcVar5)();
          return pUVar9;
        }
      }
      iVar8 = (this->CachedSubObjectHierarchy).ArrayNum;
      if (iVar8 == (this->CachedSubObjectHierarchy).ArrayMax) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                          (0x408,&(this->CachedSubObjectHierarchy).AllocatorInstance,piVar1);
      }
      (this->CachedSubObjectHierarchy).ArrayNum = iVar8 + 1;
      FVar2 = (this->CachedSubObjectHierarchy).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
               &this->CachedSubObjectHierarchy;
      if (FVar2 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        FVar12 = FVar2;
      }
      uVar15 = (ulonglong)(iVar16 + 1);
      *(FWeakObjectPtr *)((longlong)FVar12 + (longlong)iVar8 * 8) = local_48[0];
      uVar18 = uVar18 + 8;
    } while (pUVar9 != (UObject *)0x0);
    if (pUVar9 != (UObject *)0x0) {
      if ((((this->CachedRootObject).WeakPtr.ObjectIndex != 0) ||
          ((this->CachedRootObject).WeakPtr.ObjectSerialNumber != 0)) &&
         ((this->SubObjectHierarchyIDs).ArrayNum == (this->CachedSubObjectHierarchy).ArrayNum)) {
        return pUVar9;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CachedRootObject.IsExplicitlyNull() && SubObjectHierarchyIDs.Num() == CachedSubObjectHierarchy.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TransactionCommon.cpp"
                         ,0x6c,L"");
      if (!bVar6) {
        return pUVar9;
      }
      pcVar5 = (code *)swi(3);
      pUVar9 = (UObject *)(*pcVar5)();
      return pUVar9;
    }
  }
  (this->CachedRootObject).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedSubObjectHierarchy).ArrayNum = 0;
  if ((this->CachedSubObjectHierarchy).ArrayMax < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,0,&(this->CachedSubObjectHierarchy).AllocatorInstance,0,piVar1);
  }
  return (UObject *)0x0;
}

