// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// FCollisionQueryParams @ 1476e7520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCollisionQueryParams * __thiscall
FCollisionQueryParams::FCollisionQueryParams
          (FCollisionQueryParams *this,FName param_1,TStatId *param_2,bool param_3,AActor *param_4)

{
  undefined4 uVar1;
  
  (this->OwnerTag).ComparisonIndex = 0;
  (this->OwnerTag).Number = 0;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->IgnoreComponents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IgnoreComponents).ArrayNum = 0;
  (this->IgnoreComponents).ArrayMax = 8;
  (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IgnoreSourceObjects).ArrayNum = 0;
  (this->IgnoreSourceObjects).ArrayMax = 4;
  this->bTraceComplex = param_3;
  this->MobilityType = Any;
  this->TraceTag = param_1;
  (this->StatId).StatIdPtr = param_2->StatIdPtr;
  this->bFindInitialOverlaps = true;
  this->bReturnFaceIndex = false;
  this->bReturnPhysicalMaterial = false;
  this->bIgnoreBlocks = false;
  this->bComponentListUnique = true;
  this->IgnoreMask = '\0';
  this->bIgnoreTouches = false;
  this->bSkipNarrowPhase = false;
  if (param_4 != (AActor *)0x0) {
    AddIgnoredSourceObject(this,*(uint *)((longlong)&param_4->_padding_ + 4));
    uVar1 = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    (this->OwnerTag).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_4->_padding_;
    (this->OwnerTag).Number = uVar1;
  }
  this->bDebugQuery = false;
  this->bTraceIntoSubComponents = true;
  this->bReplaceHitWithSubComponents = true;
  return this;
}

// AddIgnoredActor @ 1476eb8b0

void __thiscall FCollisionQueryParams::AddIgnoredActor(FCollisionQueryParams *this,uint param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint auStackX_10 [6];
  
  FVar6 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IgnoreSourceObjects;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  auStackX_10[0] = param_1;
  if (((ulonglong)FVar6 <= auStackX_10) &&
     (auStackX_10 < (uint *)((longlong)FVar6 + (longlong)(this->IgnoreSourceObjects).ArrayMax * 4)))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->IgnoreSourceObjects).ArrayNum;
  piVar2 = &(this->IgnoreSourceObjects).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->IgnoreSourceObjects).ArrayNum = iVar5 + 1;
  FVar6 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)((longlong)FVar6 + (longlong)iVar5 * 4) = auStackX_10[0];
  return;
}

// AddIgnoredActor @ 1476eb8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FCollisionQueryParams::AddIgnoredActor(FCollisionQueryParams *this,AActor *param_1)

{
  if (param_1 != (AActor *)0x0) {
    AddIgnoredSourceObject(this,*(uint *)((longlong)&param_1->_padding_ + 4));
    return;
  }
  return;
}

// AddIgnoredActors @ 1476eb8e0

void __thiscall
FCollisionQueryParams::AddIgnoredActors
          (FCollisionQueryParams *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar6);
      if (lVar1 != 0) {
        AddIgnoredSourceObject(this,*(uint *)(lVar1 + 0xc));
      }
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddIgnoredActors @ 1476eb9a0

void __thiscall
FCollisionQueryParams::AddIgnoredActors
          (FCollisionQueryParams *this,TArray<AActor_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar6);
      if (lVar1 != 0) {
        AddIgnoredSourceObject(this,*(uint *)(lVar1 + 0xc));
      }
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddIgnoredActors @ 1476eba60

void __thiscall
FCollisionQueryParams::AddIgnoredActors
          (FCollisionQueryParams *this,
          TArray<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  FWeakObjectPtr local_res10;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar7) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res10 = *(FWeakObjectPtr *)((param_1->AllocatorInstance).Data + lVar6);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if ((bVar2) && (pUVar4 = FWeakObjectPtr::Get(&local_res10), pUVar4 != (UObject *)0x0)) {
        AddIgnoredSourceObject(this,*(uint *)&pUVar4->field_0xc);
      }
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddIgnoredComponent @ 1476ebb40

void __thiscall
FCollisionQueryParams::AddIgnoredComponent
          (FCollisionQueryParams *this,TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&param_1->WeakPtr);
    if (pUVar3 != (UObject *)0x0) {
      iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x5e0))(pUVar3);
      if (((iVar2 - 1U & 0xfffffff9) == 0) && (iVar2 != 7)) {
        Internal_AddIgnoredComponent(this,*(uint *)&pUVar3->field_0xc);
      }
    }
  }
  return;
}

// AddIgnoredComponent @ 1476ebbb0

void __thiscall
FCollisionQueryParams::AddIgnoredComponent
          (FCollisionQueryParams *this,FRemoteObjectReference *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FWeakObjectPtr local_res18 [2];
  
  FRemoteObjectReference::ToWeakPtr(param_1);
  bVar2 = FWeakObjectPtr::IsValid(local_res18);
  if ((bVar2) && (pUVar4 = FWeakObjectPtr::Get(local_res18), pUVar4 != (UObject *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\Collision.cpp"
                         ,0x120,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x5e0))(pUVar4);
      if (((iVar3 - 1U & 0xfffffff9) == 0) && (iVar3 != 7)) {
        Internal_AddIgnoredComponent(this,*(uint *)&pUVar4->field_0xc);
        return;
      }
    }
  }
  return;
}

// AddIgnoredComponent @ 1476ebc80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCollisionQueryParams::AddIgnoredComponent(FCollisionQueryParams *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  
  if (((param_1 != (UPrimitiveComponent *)0x0) &&
      (iVar1 = (**(code **)(*(longlong *)param_1 + 0x5e0))(param_1), (iVar1 - 1U & 0xfffffff9) == 0)
      ) && (iVar1 != 7)) {
    Internal_AddIgnoredComponent(this,*(uint *)&param_1->field_0xc);
  }
  return;
}

// AddIgnoredComponent_LikelyDuplicatedRoot @ 1476ebcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCollisionQueryParams::AddIgnoredComponent_LikelyDuplicatedRoot
          (FCollisionQueryParams *this,UPrimitiveComponent *param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  ForElementType<unsigned_int> FVar7;
  int local_18 [4];
  
  if (((param_1 != (UPrimitiveComponent *)0x0) &&
      (iVar5 = (**(code **)(*(longlong *)param_1 + 0x5e0))(param_1), (iVar5 - 1U & 0xfffffff9) == 0)
      ) && (iVar5 != 7)) {
    local_18[0] = *(int *)&param_1->field_0xc;
    pTVar1 = &this->IgnoreComponents;
    iVar5 = (this->IgnoreComponents).ArrayNum;
    if (iVar5 != 0) {
      if ((iVar5 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar7 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)pTVar1;
      }
      if (*(int *)FVar7 == local_18[0]) {
        return;
      }
    }
    FVar7 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    FVar6 = FVar7;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)pTVar1;
    }
    if ((ulonglong)FVar6 <= local_18) {
      if (FVar7 == (ForElementType<unsigned_int>)0x0) {
        FVar7 = (ForElementType<unsigned_int>)pTVar1;
      }
      if ((local_18 < (int *)((longlong)FVar7 + (longlong)(this->IgnoreComponents).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->IgnoreComponents).ArrayNum;
    piVar2 = &(this->IgnoreComponents).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->IgnoreComponents).ArrayNum = iVar5 + 1;
    FVar7 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)pTVar1;
    }
    *(int *)((longlong)FVar7 + (longlong)iVar5 * 4) = local_18[0];
    this->bComponentListUnique = false;
  }
  return;
}

// AddIgnoredComponents @ 1476ebe50

void __thiscall
FCollisionQueryParams::AddIgnoredComponents
          (FCollisionQueryParams *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    if (plVar3 != (longlong *)0x0) {
      iVar4 = (**(code **)(*plVar3 + 0x5e0))(plVar3);
      if (((iVar4 - 1U & 0xfffffff9) == 0) && (iVar4 != 7)) {
        Internal_AddIgnoredComponent(this,*(uint *)((longlong)plVar3 + 0xc));
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// AddIgnoredComponents @ 1476ebef0

void __thiscall
FCollisionQueryParams::AddIgnoredComponents
          (FCollisionQueryParams *this,
          TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res10;
  
  pFVar6 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar6 == pFVar1) break;
    local_res10 = *pFVar6;
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar5 != (UObject *)0x0) {
        iVar4 = (**(code **)(*(longlong *)pUVar5 + 0x5e0))(pUVar5);
        if (((iVar4 - 1U & 0xfffffff9) == 0) && (iVar4 != 7)) {
          Internal_AddIgnoredComponent(this,*(uint *)&pUVar5->field_0xc);
        }
      }
    }
    pFVar6 = pFVar6 + 1;
  }
  return;
}

// AddIgnoredSourceObject @ 1476ebfb0

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObject
          (FCollisionQueryParams *this,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1->WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    if (pUVar2 != (UObject *)0x0) {
      AddIgnoredSourceObject(this,*(uint *)&pUVar2->field_0xc);
    }
  }
  return;
}

// AddIgnoredSourceObject @ 1476ec000

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObject
          (FCollisionQueryParams *this,FRemoteObjectReference *param_1)

{
  bool bVar1;
  FWeakObjectPtr this_00;
  UObject *pUVar2;
  
  this_00 = FRemoteObjectReference::ToWeakPtr(param_1);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar2 != (UObject *)0x0) {
      AddIgnoredSourceObject(this,*(uint *)&pUVar2->field_0xc);
    }
  }
  return;
}

// AddIgnoredSourceObject @ 1476ec060

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObject(FCollisionQueryParams *this,uint param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint local_res10 [6];
  
  FVar6 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IgnoreSourceObjects;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 < (uint *)((longlong)FVar6 + (longlong)(this->IgnoreSourceObjects).ArrayMax * 4)))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->IgnoreSourceObjects).ArrayNum;
  piVar2 = &(this->IgnoreSourceObjects).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->IgnoreSourceObjects).ArrayNum = iVar5 + 1;
  FVar6 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)((longlong)FVar6 + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// AddIgnoredSourceObject @ 1476ec120

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObject(FCollisionQueryParams *this,UObject *param_1)

{
  if (param_1 != (UObject *)0x0) {
    AddIgnoredSourceObject(this,*(uint *)&param_1->field_0xc);
    return;
  }
  return;
}

// AddIgnoredSourceObjects @ 1476ec140

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObjects
          (FCollisionQueryParams *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar6);
      if (lVar1 != 0) {
        AddIgnoredSourceObject(this,*(uint *)(lVar1 + 0xc));
      }
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddIgnoredSourceObjects @ 1476ec200

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObjects
          (FCollisionQueryParams *this,TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar6);
      if (lVar1 != 0) {
        AddIgnoredSourceObject(this,*(uint *)(lVar1 + 0xc));
      }
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddIgnoredSourceObjects @ 1476ec2c0

void __thiscall
FCollisionQueryParams::AddIgnoredSourceObjects
          (FCollisionQueryParams *this,
          TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  FWeakObjectPtr local_res10;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar7) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res10 = *(FWeakObjectPtr *)((param_1->AllocatorInstance).Data + lVar6);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if ((bVar2) && (pUVar4 = FWeakObjectPtr::Get(&local_res10), pUVar4 != (UObject *)0x0)) {
        AddIgnoredSourceObject(this,*(uint *)&pUVar4->field_0xc);
      }
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// GetIgnoredComponents @ 147707520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> * __thiscall
FCollisionQueryParams::GetIgnoredComponents(FCollisionQueryParams *this)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<unsigned_int> FVar4;
  FIdentityFunctor local_res8 [8];
  
  if (this->bComponentListUnique != false) {
    return &this->IgnoreComponents;
  }
  iVar1 = (this->IgnoreComponents).ArrayNum;
  this_00 = &this->IgnoreComponents;
  this->bComponentListUnique = true;
  if (1 < iVar1) {
    FVar4 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<void>_>_>
              ((uint *)FVar4,iVar1,local_res8[0],(TLess<void> *)local_res8);
    FVar4 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)this_00;
    }
    FVar3 = (ForElementType<unsigned_int>)
            ((longlong)FVar4 + (longlong)(this->IgnoreComponents).ArrayNum * 4);
    FVar2 = FVar4;
    while (FVar2 = (ForElementType<unsigned_int>)((longlong)FVar2 + 4), FVar2 != FVar3) {
      if (*(int *)FVar4 != *(int *)FVar2) {
        FVar4 = (ForElementType<unsigned_int>)((longlong)FVar4 + 4);
        *(int *)FVar4 = *(int *)FVar2;
      }
    }
    FVar3 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<unsigned_int>)0x0) {
      FVar3 = (ForElementType<unsigned_int>)this_00;
    }
    TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (this_00,(int)((longlong)FVar4 - (longlong)FVar3 >> 2) + 1,No);
    return &this->IgnoreComponents;
  }
  return &this->IgnoreComponents;
}

// GetUnknownStatId @ 14770b000

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __cdecl FCollisionQueryParams::GetUnknownStatId(void)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
  FVar2;
  TStatIdData *in_RCX;
  FName local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar1 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar1,L"UnknownSceneQuery","STATGROUP_Collision"
               ,"STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FVar2 = `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
          __l2::StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    FVar2 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                          ::__l2::StatPtr_UnknownSceneQuery,*pFVar1,L"UnknownSceneQuery",
                         "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,
                         true,false,MCR_Invalid);
  }
  in_RCX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RCX;
}

// Internal_AddIgnoredComponent @ 1477145c0

void __thiscall
FCollisionQueryParams::Internal_AddIgnoredComponent(FCollisionQueryParams *this,uint param_1)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint local_res10 [6];
  
  FVar6 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IgnoreComponents;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 < (uint *)((longlong)FVar6 + (longlong)(this->IgnoreComponents).ArrayMax * 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->IgnoreComponents).ArrayNum;
  piVar2 = &(this->IgnoreComponents).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->IgnoreComponents).ArrayNum = iVar5 + 1;
  FVar6 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_int>)0x0) {
    FVar6 = (ForElementType<unsigned_int>)pTVar1;
  }
  *(uint *)((longlong)FVar6 + (longlong)iVar5 * 4) = local_res10[0];
  this->bComponentListUnique = false;
  return;
}

// Internal_AddIgnoredSourceObject @ 147714690

void __thiscall
FCollisionQueryParams::Internal_AddIgnoredSourceObject
          (FCollisionQueryParams *this,FWeakObjectPtr *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(param_1);
    if (pUVar2 != (UObject *)0x0) {
      AddIgnoredSourceObject(this,*(uint *)&pUVar2->field_0xc);
    }
  }
  return;
}

// SetNumIgnoredComponents @ 147728e50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCollisionQueryParams::SetNumIgnoredComponents(FCollisionQueryParams *this,int param_1)

{
  if (param_1 < 1) {
    (this->IgnoreComponents).ArrayNum = 0;
    if ((this->IgnoreComponents).ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,0,&(this->IgnoreComponents).AllocatorInstance,0,
                 &(this->IgnoreComponents).ArrayMax);
    }
    this->bComponentListUnique = true;
  }
  else if (param_1 < (this->IgnoreComponents).ArrayNum) {
    TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
              (&this->IgnoreComponents,param_1,No);
    return;
  }
  return;
}

// FCollisionQueryParams @ 1477eb970

FCollisionQueryParams * __thiscall
FCollisionQueryParams::FCollisionQueryParams(FCollisionQueryParams *this)

{
  TStatId TVar1;
  
  (this->OwnerTag).ComparisonIndex = 0;
  (this->OwnerTag).Number = 0;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->IgnoreComponents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IgnoreComponents).ArrayNum = 0;
  (this->IgnoreComponents).ArrayMax = 8;
  (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IgnoreSourceObjects).ArrayNum = 0;
  (this->IgnoreSourceObjects).ArrayMax = 4;
  this->MobilityType = Any;
  (this->TraceTag).ComparisonIndex = 0;
  (this->TraceTag).Number = 0;
  this->IgnoreMask = '\0';
  this->bIgnoreBlocks = false;
  this->bIgnoreTouches = false;
  this->bSkipNarrowPhase = false;
  this->bTraceComplex = false;
  this->bFindInitialOverlaps = true;
  this->bReturnFaceIndex = false;
  this->bReturnPhysicalMaterial = false;
  this->bComponentListUnique = true;
  TVar1 = GetUnknownStatId();
  (this->StatId).StatIdPtr = (TStatIdData *)(TVar1.StatIdPtr)->Name;
  this->bDebugQuery = false;
  this->bTraceIntoSubComponents = true;
  this->bReplaceHitWithSubComponents = true;
  return this;
}

// ToString @ 147879e30

FString * __thiscall
FCollisionQueryParams::ToString(FCollisionQueryParams *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&this->TraceTag,&local_18);
  ::FName::ToString(&this->OwnerTag,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%s:%s] TraceComplex(%d)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

