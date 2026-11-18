// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// operator() @ 147539d50

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::Accumulate'::__l2::<lambda_1>::operator()
          (void *this,TSingleRawIterator *param_1)

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
                             ,0x1e3,L""), bVar8)) {
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
                             ,0x206,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar11->Identifier;
      pUVar12 = (UScriptStruct *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
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
            goto LAB_147539eb7;
          }
        }
      }
      iVar9 = -1;
LAB_147539eb7:
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar12 = (UScriptStruct *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      puVar13 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar3,pUVar12,pFVar4);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1ea,L""), bVar8)) {
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
                             ,0x1eb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = param_1->Data;
      pFVar11 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      fVar17 = UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar11->WeightIndex);
      if ((iVar9 == -1) || (fVar7 < fVar17)) {
        pUVar12 = (UScriptStruct *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
        UScriptStruct::CopyScriptStruct(pUVar12,puVar13,puVar2,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar9 = param_1->CurrentIndex;
    } while (iVar9 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753a020

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::Blend'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetRawIterator *param_1)

{
  int iVar1;
  uint uVar2;
  FAttributeId *pFVar3;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeSet *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UScriptStruct *pUVar8;
  uchar *puVar9;
  
  pFVar3 = param_1->Collection->Identifier;
  UE::Anim::Attributes::GetAttributeBlendType(pFVar3);
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pUVar8 = (UScriptStruct *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
  puVar9 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                     (this_00,pUVar8,pFVar3);
  pUVar8 = (UScriptStruct *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
  if ((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.HasContainerWeights()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,0x139,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = param_1->Collection->HighestWeightedIndex;
  if (((param_1->Collection->DataPtrs).ArrayNum <= iVar1) || (iVar1 < 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection.HighestWeightedIndex < Collection.DataPtrs.Num() && Collection.DataPtrs.IsValidIndex(Collection.HighestWeightedIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                       ,0x13a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = param_1->Collection;
  uVar2 = pFVar4->HighestWeightedIndex;
  uVar7 = 0;
  if ((int)uVar2 < (pFVar4->DataPtrs).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UScriptStruct::CopyScriptStruct
            (pUVar8,puVar9,(pFVar4->DataPtrs).AllocatorInstance.Data[(int)uVar2],1);
  return;
}

// operator() @ 14753a170

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::BlendPerBone'::__l2::<lambda_1>::operator()
          (void *this,TAttributeSetRawIterator *param_1)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
  pFVar1 = param_1->Collection->Identifier;
  pUVar2 = (UScriptStruct *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
  puVar3 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::FindOrAdd
                     (this_00,pUVar2,pFVar1);
  pUVar2 = (UScriptStruct *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
  puVar4 = UE::Anim::FAttributeBlendData::TAttributeSetRawIterator::GetHighestBoneWeightedValue
                     (param_1);
  UScriptStruct::CopyScriptStruct(pUVar2,puVar3,puVar4,1);
  return;
}

// operator() @ 14753a200

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::ConvertToAdditive'::__l2::<lambda_1>::operator()
          (void *this,TSingleRawIterator *param_1)

{
  int *piVar1;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar2;
  FAttributeId *pFVar3;
  FScriptContainerElement *pFVar4;
  FAttributeBlendData *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FUniqueAttribute *pFVar9;
  UScriptStruct *pUVar10;
  uchar *puVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  uchar *local_res10;
  
  iVar7 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar7;
  if (iVar7 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1e3,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      local_res10 = pFVar9->DataPtr;
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x206,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar2 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar3 = pFVar9->Identifier;
      pUVar10 = (UScriptStruct *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      uVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
              FindTypeIndex(pTVar2,pUVar10);
      if (uVar8 != 0xffffffff) {
        uVar12 = 0;
        if ((int)uVar8 < (pTVar2->UniqueTypedBoneIndices).ArrayNum) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar2->UniqueTypedBoneIndices).AllocatorInstance.Data;
        lVar14 = (longlong)(int)uVar8 * 0x10;
        piVar13 = *(int **)(pFVar4 + lVar14);
        piVar1 = piVar13 + *(int *)(pFVar4 + lVar14 + 8);
        for (; piVar13 != piVar1; piVar13 = piVar13 + 1) {
          if (*piVar13 == pFVar3->Index) {
            uVar12 = 0;
            if ((int)uVar8 < (pTVar2->AttributeIdentifiers).ArrayNum) {
              uVar12 = ~uVar8 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>::
                    IndexOfByKey<UE::Anim::FAttributeId>
                              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
                               ((pTVar2->AttributeIdentifiers).AllocatorInstance.Data + lVar14),
                               pFVar3);
            goto LAB_14753a367;
          }
        }
      }
      iVar7 = -1;
LAB_14753a367:
      pTVar2 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pUVar10 = (UScriptStruct *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      puVar11 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                FindOrAdd(pTVar2,pUVar10,pFVar3);
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Data.HasContainerWeights()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1ea,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1eb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = param_1->Data;
      pFVar9 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      UE::Anim::FAttributeBlendData::GetContainerWeight(this_00,pFVar9->WeightIndex);
      if (iVar7 == -1) {
        pUVar10 = (UScriptStruct *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
        UScriptStruct::CopyScriptStruct(pUVar10,puVar11,&local_res10,1);
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar7 = param_1->CurrentIndex;
    } while (iVar7 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753c6c0

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::Override'::__l2::<lambda_1>::operator()
          (void *this,TSingleRawIterator *param_1)

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
                             ,0x1e3,L""), bVar4)) {
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
                             ,0x206,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar2 = pFVar6->Identifier;
      pUVar7 = (UScriptStruct *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      puVar8 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
               FindOrAdd(this_00,pUVar7,pFVar2);
      pUVar7 = (UScriptStruct *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      UScriptStruct::CopyScriptStruct(pUVar7,puVar8,puVar1,1);
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar5 = param_1->CurrentIndex;
    } while (iVar5 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753fe10

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::Blend'::__l2::<lambda_2>::operator()
          (void *this,TSingleRawIterator *param_1)

{
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FAttributeId *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FUniqueAttribute *pFVar5;
  UScriptStruct *pUVar6;
  uchar *puVar7;
  
  iVar4 = param_1->CurrentIndex + 1;
  param_1->CurrentIndex = iVar4;
  if (iVar4 < (param_1->AttributesView).ArrayNum) {
    do {
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x206,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      this_00 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar1 = pFVar5->Identifier;
      pUVar6 = (UScriptStruct *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      puVar7 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::Add
                         (this_00,pUVar6,pFVar1);
      pUVar6 = (UScriptStruct *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
      if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
          (param_1->CurrentIndex < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                             ,0x1e3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                         (&param_1->AttributesView,param_1->CurrentIndex);
      UScriptStruct::CopyScriptStruct(pUVar6,puVar7,pFVar5->DataPtr,1);
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar4 = param_1->CurrentIndex;
    } while (iVar4 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// operator() @ 14753ff40

void __thiscall
`UE::Anim::FNonBlendableAttributeBlendOperator::BlendPerBone'::__l2::<lambda_2>::operator()
          (void *this,TSingleRawIterator *param_1)

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
                              ,0x206,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                          (&param_1->AttributesView,param_1->CurrentIndex);
      pTVar3 = *(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> **)this;
      pFVar4 = pFVar13->Identifier;
      pUVar14 = (UScriptStruct *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
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
            goto LAB_147540067;
          }
        }
      }
      iVar11 = -1;
LAB_147540067:
      if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Data.HasBoneWeights()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                              ,499,L""), bVar10)) {
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
                              ,500,L""), bVar10)) {
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
        pUVar14 = (UScriptStruct *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
        puVar15 = UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
                  FindOrAdd(pTVar3,pUVar14,pFVar4);
        if ((((param_1->AttributesView).ArrayNum <= param_1->CurrentIndex) ||
            (param_1->CurrentIndex < 0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentIndex < AttributesView.Num() && AttributesView.IsValidIndex(CurrentIndex)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1e3,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar13 = TArrayView<UE::Anim::FAttributeBlendData::FUniqueAttribute_const_,int>::operator[]
                            (&param_1->AttributesView,param_1->CurrentIndex);
        puVar7 = pFVar13->DataPtr;
        if (((param_1->Data->HighestBoneWeightedIndices).ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data.HasBoneWeights()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AttributeBlendData.h"
                                ,0x1fc,L""), bVar10)) {
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
                                ,0x1fd,L""), bVar10)) {
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
                                ,0x1fe,L""), bVar10)) {
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
          pUVar14 = (UScriptStruct *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)((longlong)this + 8) + 8));
          UScriptStruct::CopyScriptStruct(pUVar14,puVar15,puVar7,1);
        }
      }
      param_1->CurrentIndex = param_1->CurrentIndex + 1;
      iVar11 = param_1->CurrentIndex;
    } while (iVar11 < (param_1->AttributesView).ArrayNum);
  }
  return;
}

// Accumulate @ 147541290

void __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::Accumulate
          (FNonBlendableAttributeBlendOperator *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_28;
  FNonBlendableAttributeBlendOperator *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::Accumulate'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleRawIterator_&>
             ::Call;
  local_28 = param_2;
  local_20 = this;
  FAttributeBlendData::ForEachUniqueAttribute
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleRawIterator_&)>
                      *)&local_18);
  return;
}

// Blend @ 147544710

void __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::Blend
          (FNonBlendableAttributeBlendOperator *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_18._8_8_ = local_28;
  local_18._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::Blend'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetRawIterator_&>
       ::Call;
  local_28._0_8_ = param_2;
  local_28._8_8_ = this;
  FAttributeBlendData::ForEachAttributeSet
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetRawIterator_&)>
                      *)local_18);
  local_28._8_8_ = local_18;
  local_28._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::Blend'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleRawIterator_&>
       ::Call;
  local_18._0_8_ = param_2;
  local_18._8_8_ = this;
  FAttributeBlendData::ForEachUniqueAttribute
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleRawIterator_&)>
                      *)local_28);
  return;
}

// BlendPerBone @ 14754a3e0

void __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::BlendPerBone
          (FNonBlendableAttributeBlendOperator *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_18._8_8_ = local_28;
  local_18._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::BlendPerBone'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TAttributeSetRawIterator_&>
       ::Call;
  local_28._0_8_ = param_2;
  local_28._8_8_ = this;
  FAttributeBlendData::ForEachAttributeSet
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TAttributeSetRawIterator_&)>
                      *)local_18);
  local_28._8_8_ = local_18;
  local_28._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::BlendPerBone'::__l2::<lambda_2>,void,UE::Anim::FAttributeBlendData::TSingleRawIterator_&>
       ::Call;
  local_18._0_8_ = param_2;
  local_18._8_8_ = this;
  FAttributeBlendData::ForEachUniqueAttribute
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleRawIterator_&)>
                      *)local_28);
  return;
}

// ConvertToAdditive @ 14754fa60

void __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::ConvertToAdditive
          (FNonBlendableAttributeBlendOperator *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_28;
  FNonBlendableAttributeBlendOperator *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::ConvertToAdditive'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleRawIterator_&>
             ::Call;
  local_28 = param_2;
  local_20 = this;
  FAttributeBlendData::ForEachUniqueAttribute
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleRawIterator_&)>
                      *)&local_18);
  return;
}

// Interpolate @ 147566650

void __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::Interpolate
          (FNonBlendableAttributeBlendOperator *this,void *param_1,void *param_2,float param_3,
          void *param_4)

{
  UScriptStruct *this_00;
  
  this_00 = (UScriptStruct *)FWeakObjectPtr::Get(&(this->ScriptStructPtr).WeakPtr);
  if (__real_3f000000 < param_3) {
    param_1 = param_2;
  }
  UScriptStruct::CopyScriptStruct(this_00,param_4,param_1,1);
  return;
}

// Override @ 147570c90

void __thiscall
UE::Anim::FNonBlendableAttributeBlendOperator::Override
          (FNonBlendableAttributeBlendOperator *this,FAttributeBlendData *param_1,
          FStackAttributeContainer *param_2)

{
  FStackAttributeContainer *local_28;
  FNonBlendableAttributeBlendOperator *local_20;
  code *local_18;
  FStackAttributeContainer **local_10;
  
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::FNonBlendableAttributeBlendOperator::Override'::__l2::<lambda_1>,void,UE::Anim::FAttributeBlendData::TSingleRawIterator_&>
             ::Call;
  local_28 = param_2;
  local_20 = this;
  FAttributeBlendData::ForEachUniqueAttribute
            (param_1,(TFunctionRef<void___cdecl(UE::Anim::FAttributeBlendData::TSingleRawIterator_&)>
                      *)&local_18);
  return;
}

