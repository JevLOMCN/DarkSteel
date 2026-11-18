// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 3

// StaticStruct @ 146ac3390

UScriptStruct * __cdecl FGameplayTagNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNode,(UObject *)pUVar1,
                         L"GameplayTagNode");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagNode.OuterSingleton;
}

// FGameplayTagNode @ 146acb660

FGameplayTagNode * __thiscall
FGameplayTagNode::FGameplayTagNode
          (FGameplayTagNode *this,FName param_1,FName param_2,
          TSharedPtr<FGameplayTagNode,1> *param_3,bool param_4,bool param_5,bool param_6)

{
  TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  FGameplayTagNode *pFVar11;
  longlong lVar12;
  FName local_48;
  FGameplayTagContainer local_40;
  
  this->Tag = param_1;
  (this->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CompleteTagWithParents).GameplayTags.ArrayNum = 0;
  (this->CompleteTagWithParents).GameplayTags.ArrayMax = 0;
  (this->CompleteTagWithParents).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteTagWithParents).ParentTags.ArrayNum = 0;
  (this->CompleteTagWithParents).ParentTags.ArrayMax = 0;
  (this->ChildTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildTags).ArrayNum = 0;
  (this->ChildTags).ArrayMax = 0;
  (this->ParentNode).Object = param_3->Object;
  pTVar4 = (param_3->SharedReferenceCount).ReferenceController;
  (this->ParentNode).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->NetIndex = 0xffff;
  pFVar5 = (FName *)(this->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data;
  local_48 = param_2;
  if ((pFVar5 <= &local_48) &&
     (&local_48 < pFVar5 + (this->CompleteTagWithParents).GameplayTags.ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FGameplayTagNode *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar10 = (this->CompleteTagWithParents).GameplayTags.ArrayNum;
  if (iVar10 == (this->CompleteTagWithParents).GameplayTags.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&this->CompleteTagWithParents,
                        &(this->CompleteTagWithParents).GameplayTags.ArrayMax);
  }
  (this->CompleteTagWithParents).GameplayTags.ArrayNum = iVar10 + 1;
  *(FName *)((this->CompleteTagWithParents).GameplayTags.AllocatorInstance.Data +
            (longlong)iVar10 * 8) = local_48;
  pFVar11 = (this->ParentNode).Object;
  if ((pFVar11 != (FGameplayTagNode *)0x0) && (pFVar11->Tag != (FName)0x0)) {
    local_40.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.GameplayTags.ArrayNum = 0;
    local_40.GameplayTags.ArrayMax = 0;
    local_40.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ParentTags.ArrayNum = 0;
    local_40.ParentTags.ArrayMax = 0;
    FGameplayTagContainer::operator=(&local_40,&pFVar11->CompleteTagWithParents);
    pTVar1 = &(this->CompleteTagWithParents).ParentTags;
    if (local_40.GameplayTags.ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FGameplayTagNode *)(*pcVar7)();
        return pFVar11;
      }
    }
    FVar8.Data = local_40.GameplayTags.AllocatorInstance.Data;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar6 <= local_40.GameplayTags.AllocatorInstance.Data) &&
       (local_40.GameplayTags.AllocatorInstance.Data <
        pFVar6 + (longlong)(this->CompleteTagWithParents).ParentTags.ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FGameplayTagNode *)(*pcVar7)();
        return pFVar11;
      }
    }
    iVar10 = (this->CompleteTagWithParents).ParentTags.ArrayNum;
    piVar2 = &(this->CompleteTagWithParents).ParentTags.ArrayNum;
    piVar3 = &(this->CompleteTagWithParents).ParentTags.ArrayMax;
    if (iVar10 == (this->CompleteTagWithParents).ParentTags.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar1->AllocatorInstance,piVar3);
    }
    *piVar2 = iVar10 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
         *(undefined8 *)FVar8.Data;
    if (pTVar1 == &local_40.ParentTags) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FGameplayTagNode *)(*pcVar7)();
        return pFVar11;
      }
    }
    lVar12 = (longlong)local_40.ParentTags.ArrayNum;
    if (local_40.ParentTags.ArrayNum != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,4,local_40.ParentTags.ArrayNum,&pTVar1->AllocatorInstance,piVar2,piVar3)
      ;
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8,
             local_40.ParentTags.AllocatorInstance.Data,lVar12 << 3);
    }
    if (local_40.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.ParentTags.AllocatorInstance.Data);
    }
    if (local_40.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.GameplayTags.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// ResetNode @ 146aec930

void __thiscall FGameplayTagNode::ResetNode(FGameplayTagNode *this)

{
  TArray<TSharedPtr<FGameplayTagNode,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  uVar9 = 0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  iVar3 = (this->CompleteTagWithParents).GameplayTags.ArrayMax;
  (this->CompleteTagWithParents).GameplayTags.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->CompleteTagWithParents,0,
               &(this->CompleteTagWithParents).GameplayTags.ArrayMax);
  }
  iVar3 = (this->CompleteTagWithParents).ParentTags.ArrayMax;
  (this->CompleteTagWithParents).ParentTags.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CompleteTagWithParents).ParentTags.AllocatorInstance,0,
               &(this->CompleteTagWithParents).ParentTags.ArrayMax);
  }
  pTVar1 = &this->ChildTags;
  this->NetIndex = 0xffff;
  uVar10 = uVar9;
  if (0 < (this->ChildTags).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < (this->ChildTags).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar4 + uVar10) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ResetNode(*(FGameplayTagNode **)(pFVar4 + uVar10));
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < (this->ChildTags).ArrayNum);
  }
  DestructItems<TSharedPtr<FGameplayTagNode,1>,int>
            ((TSharedPtr<FGameplayTagNode,1> *)(pTVar1->AllocatorInstance).Data,
             (this->ChildTags).ArrayNum);
  piVar2 = &(this->ChildTags).ArrayMax;
  (this->ChildTags).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ParentNode != (TSharedPtr<FGameplayTagNode,1> *)&local_28) {
    (this->ParentNode).Object = (FGameplayTagNode *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParentNode).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return;
}

