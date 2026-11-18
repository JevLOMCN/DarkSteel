// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// StaticStruct @ 14dc67230

UScriptStruct * __cdecl FMovieGraphEvaluatedBranchConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluatedBranchConfig,
                         (UObject *)pUVar1,L"MovieGraphEvaluatedBranchConfig");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluatedBranchConfig.OuterSingleton;
}

// GetNodeByClassExactMatch @ 14dc808a0

UMovieGraphNode * __thiscall
FMovieGraphEvaluatedBranchConfig::GetNodeByClassExactMatch
          (FMovieGraphEvaluatedBranchConfig *this,TSubclassOf<UMovieGraphNode> *param_1,
          FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FMovieGraphEvaluatedSettingsStack *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar5 = TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
           ::Find((TMapBase<FString,FMovieGraphEvaluatedSettingsStack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>_>
                   *)this,param_2);
  if (pFVar5 != (FMovieGraphEvaluatedSettingsStack *)0x0) {
    pFVar8 = (pFVar5->NodeInstances).AllocatorInstance.Data;
    iVar2 = (pFVar5->NodeInstances).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar5->NodeInstances).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      if (*(longlong *)pFVar8 != 0) {
        pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
        if ((pUVar7 == (UClass *)0x0) ||
           (pUVar6 = Z_Construct_UClass_UMovieGraphNode_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14dc8092c:
          pUVar7 = (UClass *)0x0;
        }
        else {
          iVar3 = (int)pUVar6->_padding_;
          if (((int)pUVar7->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_14dc8092c;
          pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
        }
        if ((UClass *)(*(UMovieGraphNode **)pFVar8)->_padding_ == pUVar7) {
          return *(UMovieGraphNode **)pFVar8;
        }
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return (UMovieGraphNode *)0x0;
}

// GetNodes @ 14dc80a30

TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> * __thiscall
FMovieGraphEvaluatedBranchConfig::GetNodes
          (FMovieGraphEvaluatedBranchConfig *this,
          TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->NamedNodes).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = *(int *)&(this->NamedNodes).field_0x28;
  uVar6 = 1;
  iVar12 = 0;
  iVar14 = 0;
  iVar7 = iVar12;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->NamedNodes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc80add;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dc80add:
  uVar11 = *(uint *)&(this->NamedNodes).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NamedNodes).field_0x8 -
                       *(int *)&(this->NamedNodes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(this->NamedNodes).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->NamedNodes).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14dc80bdd;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar11 = local_res18 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14dc80bdd:
  while( true ) {
    if (*(int *)&(this->NamedNodes).field_0x8 - *(int *)&(this->NamedNodes).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pTVar8 = (TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&this->NamedNodes + ((longlong)TStack_60.CurrentBitIndex * 5 + 2) * 8);
    if ((__return_storage_ptr__ == pTVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    iVar3 = pTVar8->ArrayNum;
    if (iVar3 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar3,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      ConstructItems<TObjectPtr<UMovieGraphNode>,TObjectPtr<UMovieGraphNode>,int>
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar14 * 8,
                 (TObjectPtr<UMovieGraphNode> *)(pTVar8->AllocatorInstance).Data,iVar3);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

