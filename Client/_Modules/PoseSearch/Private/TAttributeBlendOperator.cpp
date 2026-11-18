// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 12

// Accumulate @ 14a90c370

void __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Accumulate
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,
          FAttributeBlendData *param_1,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Accumulate_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 14a90c3b0

void __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Interpolate
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,void *param_1,void *param_2
          ,float param_3,void *param_4)

{
  UScriptStruct *this_00;
  
  this_00 = FPoseHistoryAnimationAttribute::StaticStruct();
  if (__real_3f000000 < param_3) {
    param_1 = param_2;
  }
  UScriptStruct::CopyScriptStruct(this_00,param_4,param_1,1);
  return;
}

// Override @ 14a90c410

void __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Override
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,
          FAttributeBlendData *param_1,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Override_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// Blend @ 14a90c450

void __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Blend
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,
          FAttributeBlendData *param_1,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Blend_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::Blend_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// BlendPerBone @ 14a90c4d0

void __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::BlendPerBone
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,
          FAttributeBlendData *param_1,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::BlendPerBone_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachAttributeSet<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::BlendPerBone_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// ConvertToAdditive @ 14a90c550

void __thiscall
UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::ConvertToAdditive
          (TAttributeBlendOperator<FPoseHistoryAnimationAttribute> *this,
          FAttributeBlendData *param_1,FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_res18 [2];
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::ConvertToAdditive_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&>
             ::Call;
  local_res18[0] = param_2;
  FAttributeBlendData::ForEachUniqueAttribute<FPoseHistoryAnimationAttribute>
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleIterator<FPoseHistoryAnimationAttribute>_&)>
                      *)&local_18);
  return;
}

// operator() @ 14a91c250

void __thiscall
`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::
Accumulate_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FPoseHistoryAnimationAttribute> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FUniqueAttribute *pFVar11;
  UScriptStruct *pUVar12;
  uchar *puVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  float fVar17;
  
  iVar9 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar9;
  fVar7 = __real_3f000000;
  if (iVar9 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      puVar2 = pFVar11->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar11->Identifier;
      pUVar12 = FPoseHistoryAnimationAttribute::StaticStruct();
      uVar10 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar12);
      if (uVar10 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar10 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar10 * 0x10;
        piVar15 = *(int **)(pFVar5 + lVar16);
        piVar1 = piVar15 + *(int *)(pFVar5 + lVar16 + 8);
        for (; piVar15 != piVar1; piVar15 = piVar15 + 1) {
          if (*piVar15 == pFVar4->Index) {
            uVar14 = 0;
            if ((int)uVar10 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar14 = ~uVar10 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar16),
                               pFVar4);
            goto LAB_14a91c3ae;
          }
        }
      }
      iVar9 = -1;
LAB_14a91c3ae:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar12 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar13 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar12,pFVar4);
      bVar8 = UE::Anim::FAttributeBlendData::HasContainerWeights(param_1->Data);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar17 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar11->WeightIndex);
      if ((iVar9 == -1) || (fVar7 < fVar17)) {
        pUVar12 = FPoseHistoryAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar12,puVar13,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar9 = param_1->CurrentIndex;
    } while (iVar9 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14a91c510

void __thiscall
`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::
Blend_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetIterator<FPoseHistoryAnimationAttribute> *param_1)

{
  int iVar1;
  uint uVar2;
  FAttributeId *pFVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UScriptStruct *pUVar9;
  uchar *puVar10;
  
  pFVar3 = param_1->Collection->Identifier;
  UE::Anim::Attributes::GetAttributeBlendType(pFVar3);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  bVar7 = UE::Anim::FAttributeBlendData::HasContainerWeights(param_1->Data);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.HasContainerWeights()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,200,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = param_1->Collection->HighestWeightedIndex;
  if (((param_1->Collection->DataPtrs).ArrayNum <= iVar1) || (iVar1 < 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,0xc9,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_1->Collection;
  uVar2 = pFVar4->HighestWeightedIndex;
  uVar8 = 0;
  if ((int)uVar2 < (pFVar4->DataPtrs).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar5 = (pFVar4->DataPtrs).AllocatorInstance.Data[(int)uVar2];
  pUVar9 = FPoseHistoryAnimationAttribute::StaticStruct();
  puVar10 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                      (this_00,pUVar9,pFVar3);
  if (puVar10 != (uchar *)0x0) {
    pUVar9 = FPoseHistoryAnimationAttribute::StaticStruct();
    UScriptStruct::CopyScriptStruct(pUVar9,puVar10,puVar5,1);
  }
  return;
}

// operator() @ 14a91c650

void __thiscall
`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::
ConvertToAdditive_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FPoseHistoryAnimationAttribute> *param_1)

{
  int *piVar1;
  uchar *puVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FUniqueAttribute *pFVar10;
  UScriptStruct *pUVar11;
  uchar *puVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  
  iVar8 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar8;
  if (iVar8 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      puVar2 = pFVar10->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar10->Identifier;
      pUVar11 = FPoseHistoryAnimationAttribute::StaticStruct();
      uVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar3,pUVar11);
      if (uVar9 != 0xffffffff) {
        uVar13 = 0;
        if ((int)uVar9 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar13 = ~uVar9 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar15 = (longlong)(int)uVar9 * 0x10;
        piVar14 = *(int **)(pFVar5 + lVar15);
        piVar1 = piVar14 + *(int *)(pFVar5 + lVar15 + 8);
        for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
          if (*piVar14 == pFVar4->Index) {
            uVar13 = 0;
            if ((int)uVar9 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar15),
                               pFVar4);
            goto LAB_14a91c7a7;
          }
        }
      }
      iVar8 = -1;
LAB_14a91c7a7:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar11 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar12 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar11,pFVar4);
      bVar7 = UE::Anim::FAttributeBlendData::HasContainerWeights(param_1->Data);
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1a3,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar10 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar10->WeightIndex);
      if (iVar8 == -1) {
        pUVar11 = FPoseHistoryAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar11,puVar12,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar8 = param_1->CurrentIndex;
    } while (iVar8 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14a91c900

void __thiscall
`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::
Override_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_1>::operator()
          (void *this,TSingleIterator<FPoseHistoryAnimationAttribute> *param_1)

{
  uchar *puVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  
  iVar5 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar5;
  if (iVar5 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      puVar1 = pFVar6->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar6->Identifier;
      pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindOrAdd(this_00,pUVar7,pFVar2);
      pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
      UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar1,1);
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14a91d5e0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::
BlendPerBone_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FPoseHistoryAnimationAttribute> *param_1)

{
  int *piVar1;
  int iVar2;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar3;
  FAttributeId *pFVar4;
  FScriptContainerElement *pFVar5;
  FAttributeBlendData *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FUniqueAttribute *pFVar13;
  UScriptStruct *pUVar14;
  uchar *puVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  float fVar19;
  
  iVar11 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar11;
  fVar9 = __real_3727c5ac;
  if (iVar11 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1be,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar13->Identifier;
      pUVar14 = FPoseHistoryAnimationAttribute::StaticStruct();
      uVar12 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindTypeIndex(pTVar3,pUVar14);
      if (uVar12 != 0xffffffff) {
        uVar16 = 0;
        if ((int)uVar12 < (pTVar3->UniqueTypedBoneIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (pTVar3->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar12 * 0x10;
        piVar17 = *(int **)(pFVar5 + lVar18);
        piVar1 = piVar17 + *(int *)(pFVar5 + lVar18 + 8);
        for (; piVar17 != piVar1; piVar17 = piVar17 + 1) {
          if (*piVar17 == pFVar4->Index) {
            uVar16 = 0;
            if ((int)uVar12 < (pTVar3->AttributeIdentifiers).ArrayNum) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                     IndexOfByKey<UE::Anim::FAttributeId>
                               ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                                ((pTVar3->AttributeIdentifiers).AllocatorInstance.Data + lVar18),
                                pFVar4);
            goto LAB_14a91d6fc;
          }
        }
      }
      iVar11 = -1;
LAB_14a91d6fc:
      bVar10 = UE::Anim::FAttributeBlendData::HasBoneWeights(param_1->Data);
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ab,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,0x1ac,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = param_1->Data;
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      iVar2 = pFVar13->Identifier->Index;
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar19 = UE::Anim::FAttributeBlendData::GetBoneWeight(pFVar6,pFVar13->WeightIndex,iVar2);
      if ((fVar9 < fVar19) || (iVar11 == -1)) {
        pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
        pUVar14 = FPoseHistoryAnimationAttribute::StaticStruct();
        puVar15 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                  FindOrAdd(pTVar3,pUVar14,pFVar4);
        if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x19b,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        puVar7 = pFVar13->DataPtr;
        bVar10 = UE::Anim::FAttributeBlendData::HasBoneWeights(param_1->Data);
        if ((!bVar10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasBoneWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b4,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b5,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_1->Data;
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        iVar2 = pFVar13->Identifier->Index;
        if (((iVar2 < 0) || ((pFVar6->HighestBoneWeightedIndices).ArrayNum <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HighestBoneWeightedIndices.IsValidIndex(AttributesView[CurrentIndex].Identifier->GetIndex())"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1b6,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = param_1->Data;
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        uVar12 = pFVar13->Identifier->Index;
        uVar16 = 0;
        if ((int)uVar12 < (pFVar6->HighestBoneWeightedIndices).ArrayNum) {
          uVar16 = ~uVar12 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar2 = (pFVar6->HighestBoneWeightedIndices).AllocatorInstance.Data[(int)uVar12];
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        if ((iVar2 == pFVar13->WeightIndex) || (iVar11 == -1)) {
          pUVar14 = FPoseHistoryAnimationAttribute::StaticStruct();
          UScriptStruct::CopyScriptStruct(pUVar14,puVar15,puVar7,1);
        }
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar11 = param_1->CurrentIndex;
    } while (iVar11 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14a91d9e0

void __thiscall
`UE::Anim::TAttributeBlendOperator<FPoseHistoryAnimationAttribute>::
Blend_Internal<FPoseHistoryAnimationAttribute>'::__l2::<lambda_2>::operator()
          (void *this,TSingleIterator<FPoseHistoryAnimationAttribute> *param_1)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUniqueAttribute *pFVar6;
  UScriptStruct *pUVar7;
  uchar *puVar8;
  
  iVar5 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar5;
  if (iVar5 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar1 = pFVar6->Identifier;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x19b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      puVar2 = pFVar6->DataPtr;
      pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
      puVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                         (this_00,pUVar7,pFVar1);
      if (puVar8 != (uchar *)0x0) {
        pUVar7 = FPoseHistoryAnimationAttribute::StaticStruct();
        UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

