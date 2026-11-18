// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 28

// Emplace<FString_const_&,FStringFormatArg> @ 14dc6cc70

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<FString_const_&,FStringFormatArg>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,FString *param_1,FStringFormatArg *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar3);
  if (local_18.Pointer == (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    local_18.Pointer = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  }
  else {
    ::FString::FString(local_18.Pointer,param_1);
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x28) = 0;
    FStringFormatArg::operator=((FStringFormatArg *)((longlong)local_18.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_18.Pointer + 0x30) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  iVar5 = *(int *)&((TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)local_18.Pointer)->
                   field_0x8 + -1;
  if (*(int *)&((TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)local_18.Pointer)->field_0x8
      == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)local_18.Pointer;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,local_18.Pointer,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14dc6df50

FMovieGraphEvaluatedSettingsStack * __thiscall
TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FMovieGraphEvaluatedSettingsStack *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString> @ 14dc6dfd0

FMovieGraphEvaluatedSettingsStack * __thiscall
TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FMovieGraphEvaluatedSettingsStack *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString> @ 14dc6e050

TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14dc6e0d0

void __thiscall
TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14dc6e1b2;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14dc6e1b2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x60 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14dc7e790

FMovieGraphEvaluatedBranchConfig * __thiscall
TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
::Find(TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FName *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = pFVar4 + 1;
          }
          return (FMovieGraphEvaluatedBranchConfig *)pFVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FMovieGraphEvaluatedBranchConfig *)0x0;
}

// Find @ 14dc7e830

FMovieGraphEvaluatedSettingsStack * __thiscall
TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
::Find(TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FMovieGraphEvaluatedSettingsStack *pFVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pFVar6 = (FMovieGraphEvaluatedSettingsStack *)0x0;
    if (lVar1 != 0) {
      pFVar6 = (FMovieGraphEvaluatedSettingsStack *)(lVar1 + 0x10);
    }
    return pFVar6;
  }
  return (FMovieGraphEvaluatedSettingsStack *)0x0;
}

// Find @ 14dc7e8c0

TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TArray<UMovieGraphValueContainer_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// EmplaceByHash<FMovieGraphRenderDataIdentifier_const_&> @ 14dca35e0

TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
TMapBase<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FMovieGraphRenderDataIdentifier_const_&>
          (TMapBase<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer ==
      (TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    local_18.Pointer =
         (TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>
          *)0x0;
  }
  else {
    *(FName *)local_18.Pointer = param_2->RootBranchName;
    ::FString::FString((FString *)((longlong)local_18.Pointer + 8),&param_2->LayerName);
    ::FString::FString((FString *)((longlong)local_18.Pointer + 0x18),&param_2->RendererName);
    ::FString::FString((FString *)((longlong)local_18.Pointer + 0x28),&param_2->SubResourceName);
    ::FString::FString((FString *)((longlong)local_18.Pointer + 0x38),&param_2->CameraName);
    *(undefined8 *)((longlong)local_18.Pointer + 0x48) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x50) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar2 = TSet<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    uVar5 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
    if (uVar5 < 4) {
      iVar3 = 1;
    }
    else {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar3 <= (this->Pairs).HashSize)) {
      uVar5 = (this->Pairs).HashSize - 1U & param_1;
      *(uint *)&((TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>
                  *)local_18.Pointer)->field_0x5c = uVar5;
      FVar6 = (this->Pairs).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
      }
      uVar4 = (longlong)(this->Pairs).HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>
          *)local_18.Pointer)->field_0x58 = *(undefined4 *)((longlong)FVar6 + uVar4 * 4);
      *(int *)((longlong)FVar6 + uVar4 * 4) = local_res8[0];
    }
    else {
      (this->Pairs).HashSize = iVar3;
      TSet<TTuple<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash(&this->Pairs);
    }
  }
  return (TArray<TWeakObjectPtr<UMovieGraphRenderPassNode,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *)(*(longlong *)&(this->Pairs).Elements + 0x48 + lVar7 * 0x60);
}

// FindOrAddImpl<int_const_&> @ 14dca4da0

FRenderTimeStatistics * __thiscall
TMapBase<int,UE::MovieGraph::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UE::MovieGraph::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FRenderTimeStatistics *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UE::MovieGraph::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UE::MovieGraph::FRenderTimeStatistics,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRenderTimeStatistics *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FMovieGraphRenderDataIdentifier_const_&> @ 14dca4e50

FMovieGraphRenderLayerOutputData * __thiscall
TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
::FindOrAddImpl<FMovieGraphRenderDataIdentifier_const_&>
          (TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
           *this,uint param_1,FMovieGraphRenderDataIdentifier *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMovieGraphRenderDataIdentifier *local_res20;
  
  iVar1 = TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieGraphRenderDataIdentifier>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 200 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMovieGraphRenderLayerOutputData *)(lVar2 + 0x48);
  }
  local_res20 = param_2;
  TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMovieGraphRenderLayerOutputData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 200 + 0x48);
}

// FindOrAddImpl<TSoftObjectPtr<UPrimitiveComponent>_> @ 14dca4ef0

TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TSoftObjectPtr<UPrimitiveComponent>_>
          (TMapBase<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TSoftObjectPtr<UPrimitiveComponent> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [2];
  TSoftObjectPtr<UPrimitiveComponent> *local_res20;
  FSoftObjectPath local_70;
  undefined8 local_50;
  FSoftObjectPath local_48;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_50 = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                (&local_48,(FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      lVar3 = (longlong)iVar1 * 0x40;
      FSoftObjectPath::FSoftObjectPath
                (&local_70,(FSoftObjectPath *)(*(longlong *)&(this->Pairs).Elements + lVar3 + 8));
      bVar2 = FSoftObjectPath::operator==(&local_70,&local_48);
      if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        if ((iVar1 != -1) && (lVar3 = *(longlong *)&(this->Pairs).Elements + lVar3, lVar3 != 0)) {
          return (TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>
                  *)(lVar3 + 0x28);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x38 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<UPrimitiveComponent>,TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TSoftObjectPtr<UPrimitiveComponent>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TSoftObjectPtr<UPrimitiveComponent>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TTuple<int,TSoftObjectPtr<UMaterialInterface>_>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x28);
}

// Emplace<UMovieGraphFileOutputNode_const_*_const_&,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_const_&> @ 14dcfc7b0

TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
::
Emplace<UMovieGraphFileOutputNode_const_*_const_&,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_const_&>
          (TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,UMovieGraphFileOutputNode **param_1,
          TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int local_res8 [2];
  TPairInitializer<UMovieGraphFileOutputNode_const_*_const_&,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_const_&>
  local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    TPairInitializer<UMovieGraphFileOutputNode_const_*_const_&,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_const_&>
    ::
    operator<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  uVar6 = ((uint)(*(ulonglong *)local_18.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_18.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar4 = TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  if (!bVar4) {
    TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// EmplaceByHash<UMovieGraphFileOutputNode_const_*> @ 14dcfcbd0

TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<UMovieGraphFileOutputNode_const_*>
          (TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UMovieGraphFileOutputNode **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(UMovieGraphFileOutputNode **)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<int_const_&> @ 14dcfdef0

FLightweightSourceData * __thiscall
TMapBase<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FLightweightSourceData *)(piVar2 + 1);
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderGraph::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FLightweightSourceData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<unsigned_int_const_&> @ 14dcfdfa0

bool * __thiscall
TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>::
FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (bool *)(puVar2 + 1);
          }
          break;
        }
        uVar1 = puVar2[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (bool *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<FMoviePipelinePassIdentifier> @ 14dcfe050

FEncoderParams * __thiscall
TMapBase<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>_>
::FindOrAddImpl<FMoviePipelinePassIdentifier>
          (TMapBase<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>_>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMoviePipelinePassIdentifier *local_res20;
  
  iVar1 = TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMoviePipelinePassIdentifier>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0xd0 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FEncoderParams *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMoviePipelinePassIdentifier_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FEncoderParams *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xd0 + 0x20);
}

// FindOrAddImpl<FMoviePipelinePassIdentifier> @ 14dcfe0f0

FMoviePipelineRenderPassOutputData * __thiscall
TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
::FindOrAddImpl<FMoviePipelinePassIdentifier>
          (TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMoviePipelinePassIdentifier *local_res20;
  
  iVar1 = TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMoviePipelinePassIdentifier>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMoviePipelineRenderPassOutputData *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMoviePipelinePassIdentifier_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMoviePipelineRenderPassOutputData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x20);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14dcfe300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>_>
           *this,TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  FMovieGraphRenderDataIdentifier *pFVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  undefined1 auStackY_228 [32];
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined4 local_190;
  int local_18c;
  int local_188;
  undefined1 local_184 [28];
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  FMovieGraphRenderDataIdentifier local_128;
  FMovieGraphRenderDataIdentifier local_e0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  piVar1 = &param_1->ArrayMax;
  pFVar13 = (FMovieGraphRenderDataIdentifier *)(param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FMovieGraphRenderDataIdentifier,int>(pFVar13,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FMovieGraphRenderDataIdentifier,int>(pFVar13,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar17 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  uVar15 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar10 == 0) goto LAB_14dcfe677;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar10);
  uVar11 = 1;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_190 = (undefined4)lVar8;
    uVar11 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar11 <= (int)local_50)) goto LAB_14dcfe677;
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar10 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_14dcfe473;
      }
    }
    else {
LAB_14dcfe473:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,4);
    }
    if (0 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
      uVar9 = uVar17;
      do {
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        uVar6 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar7.Data + uVar6 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_1d8 = 0;
    uStack_1d4 = 1;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uVar9 = uVar17;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar10 = *(uint *)FVar18;
      uVar16 = uVar17;
      while (uVar10 == 0) {
        uStack_1c0 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_1c0;
        iVar5 = (int)uVar9;
        local_1d8 = iVar5 + 1;
        uVar9 = (ulonglong)local_1d8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1d8)
        goto LAB_14dcfe590;
        uVar10 = ((uint *)((longlong)FVar18 + 4))[iVar5];
      }
      uStack_1d4 = -uVar10 & uVar10;
      uVar9 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_18c = (int)lVar8;
      uStack_1c4 = local_18c + -1 + uStack_1c0;
      uVar9 = (ulonglong)uStack_1c4;
      if ((int)local_70 < (int)uStack_1c4) {
LAB_14dcfe590:
        uVar9 = (ulonglong)local_70;
        uStack_1c4 = local_70;
      }
    }
    local_150 = (longlong *)local_98;
    local_148._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_148.CurrentBitIndex = uStack_1c4;
    local_148.UnvisitedBitMask = 0xffffffff;
    local_148._28_4_ = uStack_1bc;
    local_148.BaseBitIndex = uStack_1c0;
    if ((int)uVar9 < (int)local_70) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar9 * 0x50 + *local_150);
        local_128.RootBranchName = *pFVar12;
        ::FString::FString(&local_128.LayerName,(FString *)(pFVar12 + 1));
        ::FString::FString(&local_128.RendererName,(FString *)(pFVar12 + 3));
        ::FString::FString(&local_128.SubResourceName,(FString *)(pFVar12 + 5));
        ::FString::FString(&local_128.CameraName,(FString *)(pFVar12 + 7));
        uVar10 = ::GetTypeHash(&local_128);
        uVar10 = local_50 - 1 & uVar10;
        pFVar12[9].Number = uVar10;
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        uVar16 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar10;
        pFVar12[9].ComparisonIndex.Value = *(uint *)(FVar7.Data + uVar16 * 4);
        *(int *)(FVar7.Data + uVar16 * 4) = (int)uVar9;
        local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
        uVar9 = (ulonglong)(uint)local_148.CurrentBitIndex;
      } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
    }
  }
LAB_14dcfe677:
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar10 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = uVar17;
  local_160 = uVar15;
  local_184._16_4_ = 1;
  if (uVar10 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar9 = (ulonglong)uVar10;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_1b0.Array;
    }
    uVar11 = *puVar19;
    uVar16 = uVar17;
    while( true ) {
      uVar15 = (uint)uVar17;
      local_160 = (uint)uVar16;
      if (uVar11 != 0) break;
      lVar8 = (longlong)(int)uVar15;
      local_160 = local_160 + 0x20;
      uVar16 = (ulonglong)local_160;
      uVar15 = uVar15 + 1;
      uVar17 = (ulonglong)uVar15;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14dcfe71e;
      uVar11 = puVar19[lVar8 + 1];
    }
    local_184._16_4_ = -uVar11 & uVar11;
    uVar17 = (ulonglong)(uint)local_184._16_4_ * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_188 = (int)lVar8;
    uVar11 = (local_160 - 1) + local_188;
    if ((int)uVar10 < (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar9 = (ulonglong)uVar11;
  }
LAB_14dcfe71e:
  uStack_164 = (uint)uVar9;
  uStack_168 = 0xffffffff;
  TStack_1b0._padding_ = CONCAT44(local_184._16_4_,uVar15);
  TStack_1b0.UnvisitedBitMask = 0xffffffff;
  TStack_1b0._28_4_ = uStack_164;
  TStack_1b0.BaseBitIndex = local_160;
  local_184._4_8_ = this;
  local_184._12_4_ = uVar15;
  local_184._20_8_ = TStack_1b0.Array;
  uStack_15c = uStack_164;
  TStack_1b0.CurrentBitIndex = uStack_164;
  if ((int)uStack_164 < (int)uVar10) {
    do {
      lVar8 = (longlong)(int)uVar9 * 200;
      pFVar13 = (FMovieGraphRenderDataIdentifier *)(*(longlong *)&(this->Pairs).Elements + lVar8);
      local_e0.RootBranchName = pFVar13->RootBranchName;
      ::FString::FString(&local_e0.LayerName,&pFVar13->LayerName);
      ::FString::FString(&local_e0.RendererName,&pFVar13->RendererName);
      ::FString::FString(&local_e0.SubResourceName,&pFVar13->SubResourceName);
      ::FString::FString(&local_e0.CameraName,&pFVar13->CameraName);
      uVar10 = ::GetTypeHash(&local_e0);
      if (local_98._8_4_ != local_64) {
        FVar7.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_58.Data;
        }
        for (iVar5 = *(int *)(FVar7.Data + (ulonglong)(local_50 - 1 & uVar10) * 4); iVar5 != -1;
            iVar5 = *(int *)(local_98._0_8_ + (longlong)iVar5 * 0x50 + 0x48)) {
          bVar4 = FMovieGraphRenderDataIdentifier::operator==
                            ((FMovieGraphRenderDataIdentifier *)
                             (local_98._0_8_ + (longlong)iVar5 * 0x50),pFVar13);
          if (bVar4) goto LAB_14dcfe92f;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar8);
      if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)*piVar1 * 0x48)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x48;
      *(undefined8 *)pFVar2 = *(undefined8 *)pFVar14;
      ::FString::FString((FString *)(pFVar2 + 8),(FString *)(pFVar14 + 8));
      ::FString::FString((FString *)(pFVar2 + 0x18),(FString *)(pFVar14 + 0x18));
      ::FString::FString((FString *)(pFVar2 + 0x28),(FString *)(pFVar14 + 0x28));
      ::FString::FString((FString *)(pFVar2 + 0x38),(FString *)(pFVar14 + 0x38));
      TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
      ::Emplace<FMovieGraphRenderDataIdentifier_const_&>
                ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
                  *)local_98,(FMovieGraphRenderDataIdentifier *)local_184,
                 (bool *)((longlong)TStack_1b0.CurrentBitIndex * 200 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14dcfe92f:
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      uVar9 = (ulonglong)(uint)TStack_1b0.CurrentBitIndex;
    } while (TStack_1b0.CurrentBitIndex < (TStack_1b0.Array)->NumBits);
  }
  iVar5 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar5;
}

// Find @ 14dd1f260

TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieGraphFileOutputNode_const_*,TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_>,0>_>
       *this,UMovieGraphFileOutputNode *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UMovieGraphFileOutputNode *)*plVar2 == param_1) {
          pTVar4 = (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *)
                   0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *
                     )(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TArray<UE::MovieGraph::FMovieGraphSampleState_*,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14dd1f300

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> * __thiscall
TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
::Find(TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
       *this,FMovieGraphRenderDataIdentifier *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  FMovieGraphRenderDataIdentifier local_58;
  
  local_58.RootBranchName = param_1->RootBranchName;
  ::FString::FString(&local_58.LayerName,&param_1->LayerName);
  ::FString::FString(&local_58.RendererName,&param_1->RendererName);
  ::FString::FString(&local_58.SubResourceName,&param_1->SubResourceName);
  ::FString::FString(&local_58.CameraName,&param_1->CameraName);
  uVar3 = ::GetTypeHash(&local_58);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      bVar2 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x58),param_1);
      lVar5 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x58;
      if (bVar2) {
        pTVar4 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)0x0;
        if (lVar5 != 0) {
          pTVar4 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(lVar5 + 0x48);
        }
        return pTVar4;
      }
      iVar1 = *(int *)(lVar5 + 0x50);
    }
  }
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)0x0;
}

// Find @ 14dd1f3f0

FMovieSceneSubSequenceData * __thiscall
TMapBase<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
::Find(TMapBase<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
       *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  FMovieSceneSubSequenceData *pFVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1->Value) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x120 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1->Value) {
          pFVar4 = (FMovieSceneSubSequenceData *)0x0;
          if (puVar2 != (uint *)0x0) {
            pFVar4 = (FMovieSceneSubSequenceData *)(puVar2 + 2);
          }
          return pFVar4;
        }
        uVar1 = puVar2[0x46];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FMovieSceneSubSequenceData *)0x0;
}

// FindChecked @ 14dd1f460

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::FindChecked(TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FStringFormatArg *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FStringFormatArg *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FStringFormatArg *)(lVar8 + 0x10);
}

// FindOrAddImpl<int_const_&> @ 14dd64e90

FLightweightSourceData * __thiscall
TMapBase<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FLightweightSourceData *)(piVar2 + 1);
          }
          break;
        }
        iVar1 = piVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData>,TDefaultMapHashableKeyFuncs<int,MovieRenderPipeline::IVideoCodecWriter::FLightweightSourceData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FLightweightSourceData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// FindOrAddImpl<int_const_&> @ 14dd64f40

FRenderTimeStatistics * __thiscall
TMapBase<int,UMoviePipeline::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UMoviePipeline::FRenderTimeStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FRenderTimeStatistics *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UMoviePipeline::FRenderTimeStatistics>,TDefaultMapHashableKeyFuncs<int,UMoviePipeline::FRenderTimeStatistics,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRenderTimeStatistics *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FMoviePipelinePassIdentifier_const_&> @ 14dd64ff0

FMoviePipelineRenderPassOutputData * __thiscall
TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
::FindOrAddImpl<FMoviePipelinePassIdentifier_const_&>
          (TMapBase<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMoviePipelinePassIdentifier *local_res20;
  
  iVar1 = TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMoviePipelinePassIdentifier>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FMoviePipelineRenderPassOutputData *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMoviePipelinePassIdentifier_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FMoviePipelineRenderPassOutputData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x20);
}

// FindOrAddImpl<FMoviePipelinePassIdentifier_const_&> @ 14dd65080

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> * __thiscall
TMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
::FindOrAddImpl<FMoviePipelinePassIdentifier_const_&>
          (TMapBase<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
           *this,uint param_1,FMoviePipelinePassIdentifier *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMoviePipelinePassIdentifier *local_res20;
  
  iVar1 = TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMoviePipelinePassIdentifier>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_>,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMoviePipelinePassIdentifier_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMoviePipelinePassIdentifier_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)
         (*(longlong *)&(this->Pairs).Elements + 0x20 + (longlong)local_res8[0] * 0x30);
}

// FindChecked @ 14dd82740

TObjectPtr<UMovieGraphConfig> * __thiscall
TMapBase<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
::FindChecked(TMapBase<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>_>
              *this,TObjectPtr<UMovieGraphConfig_const_> param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> *pTVar3;
  TObjectPtr<UMovieGraphConfig> *pTVar4;
  UObject *local_res8 [4];
  
  local_res8[0] = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8[0]);
  }
  pTVar3 = TSet<TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UMovieGraphConfig_const_>)local_res8);
  if (pTVar3 == (TTuple<TObjectPtr<UMovieGraphConfig>,TObjectPtr<UMovieGraphConfig>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TObjectPtr<UMovieGraphConfig> *)(*pcVar1)();
      return pTVar4;
    }
    return (TObjectPtr<UMovieGraphConfig> *)&DAT_00000008;
  }
  return (TObjectPtr<UMovieGraphConfig> *)&pTVar3->field_0x8;
}

