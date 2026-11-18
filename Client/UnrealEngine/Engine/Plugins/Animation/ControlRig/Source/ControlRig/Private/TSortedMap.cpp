// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// AllocateMemoryForEmplace<FName_const_&> @ 14a38d470

TTuple<FName,FMovieSceneAnimTypeID> * __thiscall
TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>::
AllocateMemoryForEmplace<FName_const_&>
          (TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess> *this,
          FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  TTuple<FName,FMovieSceneAnimTypeID> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = (this->Pairs).ArrayNum;
  iVar9 = 0;
  pFVar2 = (this->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar1) {
    uVar10 = uVar1;
    do {
      iVar6 = (uVar10 >> 1) + iVar9;
      iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10) - (param_1->ComparisonIndex).Value;
      if (iVar8 == 0) {
        iVar8 = *(int *)(pFVar2 + (longlong)iVar6 * 0x10 + 4) - param_1->Number;
      }
      if (iVar8 < 0) {
        iVar9 = iVar6 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((iVar9 < 0) || ((int)uVar1 < iVar9)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,FMovieSceneAnimTypeID> *)(*pcVar3)();
      return pTVar7;
    }
    if (iVar9 < 0) goto LAB_14a38d571;
  }
  if (iVar9 < (this->Pairs).ArrayNum) {
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTuple<FName,FMovieSceneAnimTypeID> *)(*pcVar3)();
      return pTVar7;
    }
    pTVar7 = (TTuple<FName,FMovieSceneAnimTypeID> *)
             ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
    iVar6 = (param_1->ComparisonIndex).Value - *(int *)pTVar7;
    if (iVar6 == 0) {
      iVar6 = param_1->Number - *(int *)&pTVar7->field_0x4;
    }
    if (-1 < iVar6) {
      return pTVar7;
    }
  }
LAB_14a38d571:
  TArray<TTuple<FName,FMovieSceneAnimTypeID>,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Pairs,iVar9,1);
  return (TTuple<FName,FMovieSceneAnimTypeID> *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
}

// Emplace<FFrameNumber_const_&,FFrameNumber_const_&> @ 14a393a40

FFrameNumber * __thiscall
TSortedMap<FFrameNumber,FFrameNumber,TSizedDefaultAllocator<32>,TLess<FFrameNumber_const_&>_>::
Emplace<FFrameNumber_const_&,FFrameNumber_const_&>
          (TSortedMap<FFrameNumber,FFrameNumber,TSizedDefaultAllocator<32>,TLess<FFrameNumber_const_&>_>
           *this,FFrameNumber *param_1,FFrameNumber *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FFrameNumber *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  iVar10 = 0;
  if (0 < (int)uVar2) {
    uVar11 = uVar2;
    do {
      iVar7 = (uVar11 >> 1) + iVar10;
      if (*(int *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 8) < param_1->Value) {
        iVar10 = iVar7 + (uVar11 & 1);
      }
      uVar5 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar5 != 0);
  }
  if ((iVar10 < 0) || ((int)uVar2 < iVar10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FFrameNumber *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar10) goto LAB_14a393ad6;
  }
  else {
LAB_14a393ad6:
    if (iVar10 < *piVar1) {
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FFrameNumber *)(*pcVar4)();
        return pFVar8;
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      pFVar9 = pFVar3 + (longlong)iVar10 * 8;
      if (*(int *)(pFVar3 + (longlong)iVar10 * 8) <= param_1->Value) goto LAB_14a393b78;
    }
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
  memmove(pFVar9 + 8,pFVar9,(longlong)(iVar7 - iVar10) << 3);
  pFVar9 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar10 * 8;
LAB_14a393b78:
  *(int *)pFVar9 = param_1->Value;
  *(int *)&pFVar9[4].field_0x0 = param_2->Value;
  return (FFrameNumber *)(pFVar9 + 4);
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedControlRigState> @ 14a393bb0

FPreAnimatedControlRigState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedControlRigState>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimatedControlRigState *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPreAnimatedControlRigState *pFVar7;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>
  *pTVar8;
  longlong lVar9;
  FKeyForward local_res8;
  
  iVar6 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar6 < 0) || ((this->Pairs).ArrayNum < iVar6)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPreAnimatedControlRigState *)(*pcVar4)();
      return pFVar7;
    }
    if (-1 < iVar6) goto LAB_14a393c1c;
  }
  else {
LAB_14a393c1c:
    if (iVar6 < (this->Pairs).ArrayNum) {
      if (iVar6 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPreAnimatedControlRigState *)(*pcVar4)();
          return pFVar7;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar9 = (longlong)iVar6 * 0x20;
      if (param_1->Value == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPreAnimatedControlRigState *)(*pcVar4)();
          return pFVar7;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar9) == -1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPreAnimatedControlRigState *)(*pcVar4)();
          return pFVar7;
        }
      }
      if (*(int *)(pFVar3 + lVar9) <= iVar2) {
        pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>
                  *)((this->Pairs).AllocatorInstance.Data + lVar9);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,int>
                  (pTVar8,1);
        goto LAB_14a393d10;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar6,1);
  pTVar8 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar6 * 0x20);
LAB_14a393d10:
  *(int *)pTVar8 = param_1->Value;
  puVar1 = &pTVar8->field_0x8;
  *(undefined8 *)puVar1 = 0;
  *(FScriptContainerElement **)puVar1 =
       (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.Data;
  (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)&pTVar8->field_0x10 =
       (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum;
  *(int *)&pTVar8->field_0x14 =
       (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax;
  (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayNum = 0;
  (param_2->SkeletalMeshRestoreState).SkeletalMeshCompEditorParams.ArrayMax = 0;
  *(Type *)&pTVar8->field_0x18 = param_2->AnimationMode;
  return (FPreAnimatedControlRigState *)puVar1;
}

// Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey> @ 14a393d50

FPreAnimatedParameterKey * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::
Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
          (TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           *this,FPreAnimatedStorageIndex *param_1,FPreAnimatedParameterKey *param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FPreAnimatedParameterKey *pFVar8;
  TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
  *pTVar9;
  FKeyForward local_res8;
  
  iVar7 = AlgoImpl::
          LowerBoundInternal<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>_const_,int,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
                      *)(this->Pairs).AllocatorInstance.Data,(this->Pairs).ArrayNum,param_1,
                     local_res8,(TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8)
  ;
  if ((iVar7 < 0) || ((this->Pairs).ArrayNum < iVar7)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x249,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPreAnimatedParameterKey *)(*pcVar4)();
      return pFVar8;
    }
    if (-1 < iVar7) goto LAB_14a393dbc;
  }
  else {
LAB_14a393dbc:
    if (iVar7 < (this->Pairs).ArrayNum) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FPreAnimatedParameterKey *)(*pcVar4)();
          return pFVar8;
        }
      }
      pFVar3 = (this->Pairs).AllocatorInstance.Data;
      lVar1 = (longlong)iVar7 * 0x28;
      if (param_1->Value == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FPreAnimatedParameterKey *)(*pcVar4)();
          return pFVar8;
        }
      }
      iVar2 = param_1->Value;
      if (*(int *)(pFVar3 + lVar1) == -1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FPreAnimatedParameterKey *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (*(int *)(pFVar3 + lVar1) <= iVar2) {
        pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
                  *)((this->Pairs).AllocatorInstance.Data + lVar1);
        DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,int>
                  (pTVar9,1);
        goto LAB_14a393eb7;
      }
    }
  }
  TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,TSizedDefaultAllocator<32>_>
  ::InsertUninitializedImpl(&this->Pairs,iVar7,1);
  pTVar9 = (TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
            *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28);
LAB_14a393eb7:
  *(int *)pTVar9 = param_1->Value;
  *(FPreAnimatedBufferPairs **)&pTVar9->field_0x8 = (param_2->Buffer).Object;
  *(TReferenceControllerBase<1> **)&pTVar9->field_0x10 =
       (param_2->Buffer).SharedReferenceCount.ReferenceController;
  (param_2->Buffer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_2->Buffer).Object = (FPreAnimatedBufferPairs *)0x0;
  uVar5 = (param_2->ParameterName).Number;
  *(uint *)&pTVar9->field_0x18 = (param_2->ParameterName).ComparisonIndex.Value;
  *(uint *)&pTVar9->field_0x1c = uVar5;
  pTVar9->field_0x20 = param_2->bPersistent;
  return (FPreAnimatedParameterKey *)&pTVar9->field_0x8;
}

// Find @ 14a409f30

FPreAnimatedControlRigState * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedControlRigState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedControlRigState *)0x0;
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
      pFVar4 = (FPreAnimatedControlRigState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedControlRigState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20 + 8);
}

// Find @ 14a409fd0

FPreAnimatedParameterKey * __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Find(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
       *this,FPreAnimatedStorageIndex *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPreAnimatedParameterKey *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FPreAnimatedParameterKey *)0x0;
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
      pFVar4 = (FPreAnimatedParameterKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPreAnimatedParameterKey *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28 + 8);
}

// Remove @ 14a43b7c0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigState,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
    if (*(void **)(_Dst + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(_Dst + 8));
    }
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x20,(longlong)iVar6 << 5);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

// Remove @ 14a43b8b0

int __thiscall
TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
::Remove(TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
         *this,FPreAnimatedStorageIndex *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FKeyForward local_res8;
  
  uVar5 = Algo::
          BinarySearchBy<TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FPreAnimatedStorageIndex,TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>::FKeyForward,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
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
    pFVar2 = (this->Pairs).AllocatorInstance.Data;
    _Dst = pFVar2 + (longlong)(int)uVar5 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar5 * 0x28 + 0x10));
    iVar7 = (this->Pairs).ArrayNum + ~uVar5;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x28,(longlong)iVar7 * 0x28);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar6 = 1;
  }
  return uVar6;
}

