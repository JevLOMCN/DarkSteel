// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// Emplace<UE::MovieScene::FInterrogationChannel_const_&,FCameraFramingZone_const_&> @ 14d5eecd0

FCameraFramingZone * __thiscall
TSortedMap<UE::MovieScene::FInterrogationChannel,FCameraFramingZone,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
::Emplace<UE::MovieScene::FInterrogationChannel_const_&,FCameraFramingZone_const_&>
          (TSortedMap<UE::MovieScene::FInterrogationChannel,FCameraFramingZone,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
           *this,FInterrogationChannel *param_1,FCameraFramingZone *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  double dVar6;
  bool bVar7;
  FCameraFramingZone *pFVar8;
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
      pFVar8 = (FCameraFramingZone *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_14d5eed68;
  }
  else {
LAB_14d5eed68:
    if (iVar10 < (this->Pairs).ArrayNum) {
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCameraFramingZone *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 0x28;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 0x28) <= param_1->Value) goto LAB_14d5eede4;
    }
  }
  TArray<TTuple<UE::MovieScene::FInterrogationChannel,FCameraFramingZone>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar10,1);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 0x28;
LAB_14d5eede4:
  *(int *)pFVar9 = param_1->Value;
  dVar6 = param_2->Top;
  ((FCameraFramingZone *)(pFVar9 + 8))->Left = param_2->Left;
  *(double *)(pFVar9 + 0x10) = dVar6;
  dVar6 = param_2->Bottom;
  *(double *)(pFVar9 + 0x18) = param_2->Right;
  *(double *)(pFVar9 + 0x20) = dVar6;
  return (FCameraFramingZone *)(pFVar9 + 8);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_> @ 14d5eee20

TPreAnimatedPropertyValue<FCameraFramingZone> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,
          TPreAnimatedPropertyValue<FCameraFramingZone> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TPreAnimatedPropertyValue<FCameraFramingZone> *pTVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
  *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
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
      pTVar7 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar3)();
      return pTVar7;
    }
    if (-1 < iVar6) goto LAB_14d5eee8c;
  }
  else {
LAB_14d5eee8c:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar3)();
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
          pTVar7 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar3)();
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
          pTVar7 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (*(int *)(pFVar2 + lVar9) <= iVar1) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
                  *)((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,int>
                  (pTVar8,1);
        goto LAB_14d5eef7d;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x40);
LAB_14d5eef7d:
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
  return (TPreAnimatedPropertyValue<FCameraFramingZone> *)&pTVar8->field_0x8;
}

// Find @ 14d6161e0

TPreAnimatedPropertyValue<FCameraFramingZone> * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TPreAnimatedPropertyValue<FCameraFramingZone> *pTVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (TPreAnimatedPropertyValue<FCameraFramingZone> *)0x0;
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
      pTVar4 = (TPreAnimatedPropertyValue<FCameraFramingZone> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TPreAnimatedPropertyValue<FCameraFramingZone> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x40 + 8);
}

// Remove @ 14d6310a0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
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
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
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

