// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&> @ 1468e39d0

TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
* __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::AllocateMemoryForEmplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FKeyForward local_res8;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if (((iVar3 < 0) || ((this->Pairs).ArrayNum < iVar3)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((-1 < iVar3) && (iVar3 < (this->Pairs).ArrayNum)) {
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    pFVar6 = (this->Pairs).AllocatorInstance.Data;
    lVar7 = (longlong)iVar3 * 0x58;
    if ((param_1->Value == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    iVar4 = param_1->Value;
    if ((*(int *)(pFVar6 + lVar7) == -1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
                *)(*pcVar1)();
      return pTVar5;
    }
    if (*(int *)(pFVar6 + lVar7) <= iVar4) {
      pTVar5 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
                *)((this->Pairs).AllocatorInstance.Data + lVar7);
      DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,int>
                (pTVar5,1);
      return pTVar5;
    }
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,1,(ForAnyElementType *)this,&(this->Pairs).ArrayNum,
                     &(this->Pairs).ArrayMax);
  lVar7 = (longlong)iVar3 * 0x58;
  pFVar6 = (this->Pairs).AllocatorInstance.Data + lVar7;
  memmove(pFVar6 + 0x58,pFVar6,(longlong)(iVar4 - iVar3) * 0x58);
  return (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>
          *)((this->Pairs).AllocatorInstance.Data + lVar7);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateMargin_const_&> @ 1468e7460

FIntermediateMargin * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateMargin_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FIntermediateMargin *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  FIntermediateMargin *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar1 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x28) < param_1->Value)
      {
        iVar10 = iVar1 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FIntermediateMargin *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_1468e74f8;
  }
  else {
LAB_1468e74f8:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FIntermediateMargin *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 0x28;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 0x28) <= param_1->Value) goto LAB_1468e7574;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x28;
LAB_1468e7574:
  *(int *)pFVar9 = param_1->Value;
  dVar6 = param_2->Top;
  ((FIntermediateMargin *)(pFVar9 + 8))->Left = param_2->Left;
  *(double *)(pFVar9 + 0x10) = dVar6;
  dVar6 = param_2->Bottom;
  *(double *)(pFVar9 + 0x18) = param_2->Right;
  *(double *)(pFVar9 + 0x20) = dVar6;
  return (FIntermediateMargin *)(pFVar9 + 8);
}

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateWidgetTransform_const_&> @ 1468e75b0

FIntermediateWidgetTransform * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::
Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateWidgetTransform_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FIntermediateWidgetTransform *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  FIntermediateWidgetTransform *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar2) {
    uVar10 = uVar2;
    do {
      iVar1 = (uVar10 >> 1) + iVar9;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar1 * 0x40) < param_1->Value)
      {
        iVar9 = iVar1 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar2 < iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FIntermediateWidgetTransform *)(*pcVar3)();
      return pFVar7;
    }
    if (-1 < iVar9) goto LAB_1468e764a;
  }
  else {
LAB_1468e764a:
    if (iVar9 < (this->Pairs).ArrayNum) {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FIntermediateWidgetTransform *)(*pcVar3)();
        return pFVar7;
      }
      pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x40;
      if (*(int *)pFVar8 <= param_1->Value) goto LAB_1468e76c3;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar9,1);
  pFVar8 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x40;
LAB_1468e76c3:
  *(int *)pFVar8 = param_1->Value;
  dVar5 = param_2->TranslationY;
  ((FIntermediateWidgetTransform *)(pFVar8 + 8))->TranslationX = param_2->TranslationX;
  *(double *)(pFVar8 + 0x10) = dVar5;
  dVar5 = param_2->ScaleX;
  *(double *)(pFVar8 + 0x18) = param_2->Rotation;
  *(double *)(pFVar8 + 0x20) = dVar5;
  dVar5 = param_2->ShearX;
  *(double *)(pFVar8 + 0x28) = param_2->ScaleY;
  *(double *)(pFVar8 + 0x30) = dVar5;
  *(double *)(pFVar8 + 0x38) = param_2->ShearY;
  return (FIntermediateWidgetTransform *)(pFVar8 + 8);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_> @ 1468e7710

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *pTVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
  *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(*pcVar3)();
      return pTVar7;
    }
    if (-1 < iVar6) goto LAB_1468e777c;
  }
  else {
LAB_1468e777c:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(*pcVar3)();
          return pTVar7;
        }
      }
      pFVar2 = (this->Pairs).AllocatorInstance.Data;
      lVar9 = (longlong)iVar6 * 0x40;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar1 = param_1->Value;
      if (*(int *)(pFVar2 + lVar9) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (*(int *)(pFVar2 + lVar9) <= iVar1) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,int>
                  (pTVar8,1);
        goto LAB_1468e786d;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x40);
LAB_1468e786d:
  *(int *)pTVar8 = param_1->Value;
  dVar4 = (param_2->Data).Top;
  *(double *)&pTVar8->field_0x8 = (param_2->Data).Left;
  *(double *)&pTVar8->field_0x10 = dVar4;
  dVar4 = (param_2->Data).Bottom;
  *(double *)&pTVar8->field_0x18 = (param_2->Data).Right;
  *(double *)&pTVar8->field_0x20 = dVar4;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
            ((TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              *)&pTVar8->field_0x28,&param_2->Binding);
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)&pTVar8->field_0x8;
}

// Find @ 146919b40

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40 + 8);
}

// Find @ 146919be0

TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x58 + 8);
}

// Remove @ 14693b070

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40;
    FVar2 = _Dst[0x38];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x28);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x40,(longlong)iVar7 << 6);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

// Remove @ 14693b1a0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar6 = 0;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < (this->Pairs).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x58;
    FVar2 = _Dst[0x50];
    if (2 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(_Dst + 0x40);
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x58,(longlong)iVar7 * 0x58);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

