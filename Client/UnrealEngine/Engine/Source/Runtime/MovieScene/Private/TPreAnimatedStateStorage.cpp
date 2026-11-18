// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> @ 146183c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Traits).field_0x8);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>_>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// ~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> @ 146183d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
~TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddReferencedObjects @ 14618f0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
          FReferenceCollector *param_1)

{
  return;
}

// AddReferencedObjects @ 14618f0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,
          FReferenceCollector *param_1)

{
  return;
}

// DiscardPreAnimatedStateStorage @ 14619f5d0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  int iVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  TTuple<FObjectKey,FMovieSceneAnimTypeID> local_28;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    cVar7 = (*pcVar4)(pIVar3);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    puVar1 = (undefined8 *)((longlong)param_1.Value * 0x40 + *(longlong *)this_00);
    local_28._0_8_ = *puVar1;
    local_28._8_8_ = puVar1[1];
    TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_28);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    EVar6 = None;
  }
  else {
    if ((param_2 != Transient) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    iVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar8 == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pbVar2 = (byte *)((longlong)param_1.Value * 0x40 + 0x38 + *(longlong *)this_00);
      *pbVar2 = *pbVar2 | 2;
    }
    EVar6 = Persistent;
  }
  return EVar6;
}

// DiscardPreAnimatedStateStorage @ 14619f7c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  byte *pbVar1;
  IRestoreMask *pIVar2;
  code *pcVar3;
  bool bVar4;
  EPreAnimatedStorageRequirement EVar5;
  char cVar6;
  int iVar7;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FMovieSceneAnimTypeID local_res8;
  FPreAnimatedStorageIndex local_res10 [2];
  
  pIVar2 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar2 != (IRestoreMask *)0x0) {
    pcVar3 = *(code **)((longlong)*pIVar2 + 8);
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    cVar6 = (*pcVar3)(pIVar2);
    if (cVar6 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 != Persistent) {
    if ((param_2 != Transient) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    iVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar7 == 0) {
      if ((param_1.Value == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      pbVar1 = (byte *)((longlong)param_1.Value * 0x38 + 0x30 + *(longlong *)this_00);
      *pbVar1 = *pbVar1 | 2;
    }
    return Persistent;
  }
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  local_res8.ID = *(ulong64 *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
  if (*(int *)&(this->KeyToStorageIndex).field_0x8 != *(int *)&(this->KeyToStorageIndex).field_0x34)
  {
    TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
    ::RemoveImpl<FMovieSceneAnimTypeID>
              ((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                *)&this->KeyToStorageIndex,(int)(local_res8.ID >> 0x20) * 0x17 + (int)local_res8.ID,
               &local_res8);
  }
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  ::RemoveAt(this_00,param_1.Value,1);
  TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
  ::Remove(&this->TransientPreAnimatedStorage,local_res10);
  return None;
}

// GetOrCreateStorageIndex @ 1461b2100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageIndex __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
GetOrCreateStorageIndex
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
          TTuple<FObjectKey,FMovieSceneAnimTypeID> *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  byte bVar6;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar7;
  TTuple<FObjectKey,FMovieSceneAnimTypeID> *in_R8;
  undefined1 auStackY_b8 [32];
  FSparseArrayAllocationInfo local_88;
  TPairInitializer<TTuple<FObjectKey,FMovieSceneAnimTypeID>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_78;
  undefined8 uStack_68;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *local_60 [4];
  byte local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar5 = TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,in_R8);
  if (pTVar5 == (TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>
                 *)0x0) {
    *(undefined4 *)param_1 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)&pTVar5->field_0x10;
    *(int *)param_1 = iVar1;
    if (iVar1 != -1) goto LAB_1461b22b5;
  }
  local_78.Value = *(FPreAnimatedStorageIndex **)in_R8;
  uStack_68 = *(undefined8 *)&in_R8->field_0x8;
  local_38 = local_38 & 0xfc;
  iVar1 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_40 = local_40 & 0xfe | 2;
  if (iVar1 == 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar4 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    lVar3 = *(longlong *)&this->PreAnimatedStorage;
    iVar2 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar3);
    iVar1 = iVar1 + -1;
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar2;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<64,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             &local_88,iVar4);
  if (local_88.Pointer != (undefined8 *)0x0) {
    *(FPreAnimatedStorageIndex **)local_88.Pointer = local_78.Value;
    *(undefined8 *)((longlong)local_88.Pointer + 8) = uStack_68;
    *(byte *)((longlong)local_88.Pointer + 0x30) =
         *(byte *)((longlong)local_88.Pointer + 0x30) & 0xfe;
    *(byte *)((longlong)local_88.Pointer + 0x30) = *(byte *)((longlong)local_88.Pointer + 0x30) | 2;
    TInlineValue<IMovieScenePreAnimatedToken,32,8>::operator=
              ((TInlineValue<IMovieScenePreAnimatedToken,32,8> *)((longlong)local_88.Pointer + 0x10)
               ,(TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_60);
    bVar6 = (*(byte *)((longlong)local_88.Pointer + 0x38) ^ local_38) & 1 ^
            *(byte *)((longlong)local_88.Pointer + 0x38);
    *(byte *)((longlong)local_88.Pointer + 0x38) = bVar6;
    *(byte *)((longlong)local_88.Pointer + 0x38) = (bVar6 ^ local_38) & 2 ^ bVar6;
  }
  *(int *)param_1 = local_88.Index;
  if ((local_40 & 1) != 0) {
    pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar7 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(pTVar7->Data).Pad)->Data).Pad
    )(pTVar7,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  local_88.Pointer = param_1;
  TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FMovieSceneAnimTypeID>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_78,(bool *)&local_88);
LAB_1461b22b5:
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// GetOrCreateStorageIndex @ 1461b22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageIndex __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
GetOrCreateStorageIndex
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,
          FMovieSceneAnimTypeID *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar5;
  byte bVar6;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar7;
  FMovieSceneAnimTypeID *in_R8;
  undefined1 auStackY_b8 [32];
  FSparseArrayAllocationInfo local_88;
  TPairInitializer<FMovieSceneAnimTypeID_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_78;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *local_68 [4];
  byte local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar5 = TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,in_R8);
  if (pTVar5 == (TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    *(undefined4 *)&param_1->ID = 0xffffffff;
  }
  else {
    iVar1 = *(int *)&pTVar5->field_0x8;
    *(int *)&param_1->ID = iVar1;
    if (iVar1 != -1) goto LAB_1461b2486;
  }
  local_78.Value = (FPreAnimatedStorageIndex *)in_R8->ID;
  local_40 = local_40 & 0xfc;
  iVar1 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_48 = local_48 & 0xfe | 2;
  if (iVar1 == 0) {
    iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar4 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->PreAnimatedStorage;
    iVar2 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar3);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar2;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<56,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             &local_88,iVar4);
  if (local_88.Pointer != (ulong64 *)0x0) {
    *(FPreAnimatedStorageIndex **)local_88.Pointer = local_78.Value;
    *(byte *)((longlong)local_88.Pointer + 0x28) =
         (byte)*(ulong64 *)((longlong)local_88.Pointer + 0x28) & 0xfe;
    *(byte *)((longlong)local_88.Pointer + 0x28) =
         (byte)*(ulong64 *)((longlong)local_88.Pointer + 0x28) | 2;
    TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>::operator=
              ((TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)
               ((longlong)local_88.Pointer + 8),
               (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_68);
    bVar6 = ((byte)*(ulong64 *)((longlong)local_88.Pointer + 0x30) ^ local_40) & 1 ^
            (byte)*(ulong64 *)((longlong)local_88.Pointer + 0x30);
    *(byte *)((longlong)local_88.Pointer + 0x30) = bVar6;
    *(byte *)((longlong)local_88.Pointer + 0x30) = (bVar6 ^ local_40) & 2 ^ bVar6;
  }
  *(int *)&param_1->ID = local_88.Index;
  if ((local_48 & 1) != 0) {
    pTVar7 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_68;
    if ((local_48 & 2) == 0) {
      pTVar7 = local_68[0];
    }
    local_48 = local_48 & 0xfe;
    (**(code **)((*(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(pTVar7->Data).Pad)->
                Data).Pad)(pTVar7,0);
    if ((local_48 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  local_88.Pointer = param_1;
  TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneAnimTypeID_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_78,(bool *)&local_88);
LAB_1461b2486:
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// GetStorageType @ 1461b4340

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// GetStorageType @ 1461b4360

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// Initialize @ 1461b58c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::Initialize
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
          FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *pTVar1;
  TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> local_18;
  
  (this->StorageID).TypeID = param_1.TypeID;
  this->ParentExtension = param_2;
  pTVar1 = FPreAnimatedStateExtension::
           GetOrCreateGroupManager<UE::MovieScene::FPreAnimatedObjectGroupManager>
                     (param_2,&local_18);
  if ((TSharedPtr<UE::MovieScene::FPreAnimatedObjectGroupManager,1> *)&this->Traits != pTVar1) {
    *(FPreAnimatedObjectGroupManager **)&(this->Traits).field_0x0 = pTVar1->Object;
    pTVar1->Object = (FPreAnimatedObjectGroupManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Traits).field_0x8,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// Initialize @ 1461b5920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::Initialize
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,
          FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  return;
}

// OnObjectReplaced @ 1461bfa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
                FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<TTuple<FObjectKey,FMovieSceneAnimTypeID>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  FObjectKey local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  FObjectKey *local_28;
  FPreAnimatedStorageIndex **local_20;
  TTuple<FObjectKey,FMovieSceneAnimTypeID> local_18;
  
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_40 = *(undefined8 *)
               ((longlong)param_1.Value * 0x40 + *(longlong *)&this->PreAnimatedStorage + 8);
  local_48 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = (undefined8 *)
           ((longlong)local_res8.Value._0_4_ * 0x40 + *(longlong *)&this->PreAnimatedStorage);
  local_18._0_8_ = *puVar1;
  local_18._8_8_ = puVar1[1];
  local_38 = local_48.ObjectIndex;
  iStack_34 = local_48.ObjectSerialNumber;
  iStack_30 = (int)uStack_40;
  iStack_2c = uStack_40._4_4_;
  if ((local_res8.Value._0_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar2 = (int *)((longlong)local_res8.Value._0_4_ * 0x40 + *(longlong *)&this->PreAnimatedStorage)
  ;
  *piVar2 = local_38;
  piVar2[1] = iStack_34;
  piVar2[2] = iStack_30;
  piVar2[3] = iStack_2c;
  TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  ::Remove((TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
            *)&this->KeyToStorageIndex,&local_18);
  local_28 = &local_48;
  local_20 = &local_res8.Value;
  TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FMovieSceneAnimTypeID>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_28);
  return;
}

// OnObjectReplaced @ 1461bfbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,
                FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  ulong64 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TPairInitializer<FMovieSceneAnimTypeID_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  undefined8 local_28;
  FMovieSceneAnimTypeID local_20;
  undefined8 *local_18;
  FPreAnimatedStorageIndex **local_10;
  
  if (param_1.Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28 = *(undefined8 *)
              ((longlong)param_1.Value * 0x38 + *(longlong *)&this->PreAnimatedStorage);
  local_res8.Value._0_4_ = param_1.Value;
  if (param_1.Value == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = local_28;
  uVar1 = *(ulong64 *)
           ((longlong)local_res8.Value._0_4_ * 0x38 + *(longlong *)&this->PreAnimatedStorage);
  local_20.ID = uVar1;
  if (local_res8.Value._0_4_ == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                       ,0x45,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)((longlong)local_res8.Value._0_4_ * 0x38 + *(longlong *)&this->PreAnimatedStorage)
       = uVar3;
  if (*(int *)&(this->KeyToStorageIndex).field_0x8 != *(int *)&(this->KeyToStorageIndex).field_0x34)
  {
    TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
    ::RemoveImpl<FMovieSceneAnimTypeID>
              ((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                *)&this->KeyToStorageIndex,(int)(uVar1 >> 0x20) * 0x17 + (int)uVar1,&local_20);
  }
  local_18 = &local_28;
  local_10 = &local_res8.Value;
  TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneAnimTypeID_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_18);
  return;
}

// RestorePreAnimatedStateStorage @ 1461cecf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::
RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  IRestoreMask *pIVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  char cVar5;
  UObject *pUVar6;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar7;
  TTuple<FObjectKey,FMovieSceneAnimTypeID> *pTVar8;
  undefined8 *puVar9;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  undefined1 auStackY_108 [32];
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  code *local_c8;
  TTuple<FObjectKey,FMovieSceneAnimTypeID> local_c0;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *local_b0 [4];
  byte local_90;
  byte local_88;
  TTuple<FObjectKey,FMovieSceneAnimTypeID> local_80;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *local_70 [4];
  byte local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pIVar1 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar1 != (IRestoreMask *)0x0) {
    local_c8 = *(code **)((longlong)*pIVar1 + 8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    cVar5 = (*local_c8)(pIVar1);
    if (cVar5 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if (param_3 != None) {
      if ((param_3 != NoChange) &&
         (bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352038>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar8 = (TTuple<FObjectKey,FMovieSceneAnimTypeID> *)
               ((longlong)param_1.Value * 0x40 + *(longlong *)&this->PreAnimatedStorage);
      if ((pTVar8[3].field_0x8 & 1) != 0) {
        FPreAnimatedObjectTokenTraits::RestorePreAnimatedValue
                  (pTVar8,(TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(pTVar8 + 1),param_4);
      }
      return NoChange;
    }
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    local_90 = local_90 & 0xfe | 2;
    puVar9 = (undefined8 *)((longlong)param_1.Value * 0x40 + *(longlong *)this_00);
    local_c0._0_8_ = *puVar9;
    local_c0._8_8_ = puVar9[1];
    TInlineValue<IMovieScenePreAnimatedToken,32,8>::operator=
              ((TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_b0,
               (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(puVar9 + 2));
    local_88 = *(byte *)(puVar9 + 7) & 1 | local_88 & 0xfe;
    local_88 = (local_88 ^ *(byte *)(puVar9 + 7)) & 2 ^ local_88;
    TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_c0);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((local_88 & 1) != 0) {
      local_d8.ObjectIndex = local_c0._0_4_;
      local_d8.ObjectSerialNumber = local_c0._4_4_;
      pUVar6 = FWeakObjectPtr::Get(&local_d8);
      if (pUVar6 != (UObject *)0x0) {
        if (((local_90 & 1) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_b0;
        if ((local_90 & 2) == 0) {
          pTVar7 = local_b0[0];
        }
        (**(code **)(((*(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(pTVar7->Data).Pad)->Data
                     ).Pad + 8))(pTVar7,pUVar6,param_4);
      }
    }
    if ((local_90 & 1) != 0) {
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_b0;
      if ((local_90 & 2) == 0) {
        pTVar7 = local_b0[0];
      }
      local_90 = local_90 & 0xfe;
      (**(code **)((*(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(pTVar7->Data).Pad)->Data).
                  Pad)(pTVar7,0);
      if ((local_90 & 2) == 0) {
        FMemory::Free(local_b0[0]);
        return None;
      }
    }
    return None;
  }
  if ((param_2 != Transient) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352050>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pTVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           ::Find(&this->TransientPreAnimatedStorage,local_res10);
  if (pTVar7 != (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)0x0) {
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    FPreAnimatedObjectTokenTraits::RestorePreAnimatedValue
              ((TTuple<FObjectKey,FMovieSceneAnimTypeID> *)
               ((longlong)param_1.Value * 0x40 + *(longlong *)&this->PreAnimatedStorage),pTVar7,
               param_4);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pTVar8 = (TTuple<FObjectKey,FMovieSceneAnimTypeID> *)
             ((longlong)param_1.Value * 0x40 + *(longlong *)this_00);
    if ((pTVar8[3].field_0x8 & 2) == 0) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      local_50 = local_50 & 0xfe | 2;
      puVar9 = (undefined8 *)
               ((longlong)param_1.Value * 0x40 + *(longlong *)&this->PreAnimatedStorage);
      local_80._0_8_ = *puVar9;
      local_80._8_8_ = puVar9[1];
      TInlineValue<IMovieScenePreAnimatedToken,32,8>::operator=
                ((TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_70,
                 (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(puVar9 + 2));
      local_48 = *(byte *)(puVar9 + 7) & 1 | local_48 & 0xfe;
      local_48 = (local_48 ^ *(byte *)(puVar9 + 7)) & 2 ^ local_48;
      TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
      ::Remove((TMapBase<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FMovieSceneAnimTypeID>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
                *)&this->KeyToStorageIndex,&local_80);
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedObjectTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
      ::RemoveAt(this_00,param_1.Value,1);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      if ((local_48 & 1) != 0) {
        local_d0.ObjectIndex = local_80._0_4_;
        local_d0.ObjectSerialNumber = local_80._4_4_;
        pUVar6 = FWeakObjectPtr::Get(&local_d0);
        if (pUVar6 != (UObject *)0x0) {
          if (((local_50 & 1) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            EVar4 = (*pcVar2)();
            return EVar4;
          }
          pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_70;
          if ((local_50 & 2) == 0) {
            pTVar7 = local_70[0];
          }
          (**(code **)(((*(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(pTVar7->Data).Pad)->
                       Data).Pad + 8))(pTVar7,pUVar6,param_4);
        }
      }
      if ((local_50 & 1) == 0) {
        return None;
      }
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)local_70;
      if ((local_50 & 2) == 0) {
        pTVar7 = local_70[0];
      }
      local_50 = local_50 & 0xfe;
      (**(code **)((*(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(pTVar7->Data).Pad)->Data).
                  Pad)(pTVar7,0);
      if ((local_50 & 2) != 0) {
        return None;
      }
      FMemory::Free(local_70[0]);
      return None;
    }
    if ((pTVar8[3].field_0x8 & 1) == 0) {
      return Persistent;
    }
  }
  else {
    if (param_3 != Persistent) {
      return Persistent;
    }
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pTVar8 = (TTuple<FObjectKey,FMovieSceneAnimTypeID> *)
             ((longlong)param_1.Value * 0x40 + *(longlong *)&this->PreAnimatedStorage);
    if ((pTVar8[3].field_0x8 & 1) == 0) {
      return Persistent;
    }
    pTVar8[3].field_0x8 = pTVar8[3].field_0x8 | 2;
  }
  FPreAnimatedObjectTokenTraits::RestorePreAnimatedValue
            (pTVar8,(TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(pTVar8 + 1),param_4);
  return Persistent;
}

// RestorePreAnimatedStateStorage @ 1461cf2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::
RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits> *this,
          FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  byte bVar1;
  IRestoreMask *pIVar2;
  code *pcVar3;
  bool bVar4;
  EPreAnimatedStorageRequirement EVar5;
  char cVar6;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  ulong64 *puVar10;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  undefined1 auStackY_e8 [32];
  FMovieSceneAnimTypeID local_b0;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *local_a8 [4];
  byte local_88;
  byte local_80;
  FMovieSceneAnimTypeID local_78;
  TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *local_70 [4];
  byte local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pIVar2 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar2 != (IRestoreMask *)0x0) {
    pcVar3 = *(code **)((longlong)*pIVar2 + 8);
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    cVar6 = (*pcVar3)(pIVar2);
    if (cVar6 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if (param_3 != None) {
      if ((param_3 != NoChange) &&
         (bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3111672766223352038>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                             ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      if ((param_1.Value == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      lVar9 = (longlong)param_1.Value * 0x38;
      lVar8 = *(longlong *)&this->PreAnimatedStorage;
      if ((*(byte *)(lVar9 + 0x30 + lVar8) & 1) != 0) {
        FPreAnimatedRootTokenTraits::RestorePreAnimatedValue
                  ((FMovieSceneAnimTypeID)*(ulong64 *)(lVar9 + lVar8),
                   (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(lVar8 + 8 + lVar9),
                   param_4);
      }
      return NoChange;
    }
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    puVar10 = (ulong64 *)((longlong)param_1.Value * 0x38 + *(longlong *)this_00);
    local_b0.ID = *puVar10;
    local_88 = local_88 & 0xfe | 2;
    TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>::operator=
              ((TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_a8,
               (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(puVar10 + 1));
    local_80 = (byte)puVar10[6] & 1 | local_80 & 0xfe;
    local_80 = (local_80 ^ (byte)puVar10[6]) & 2 ^ local_80;
    if (*(int *)&(this->KeyToStorageIndex).field_0x8 !=
        *(int *)&(this->KeyToStorageIndex).field_0x34) {
      TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMovieSceneAnimTypeID>
                ((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                  *)&this->KeyToStorageIndex,(int)(local_b0.ID >> 0x20) * 0x17 + (int)local_b0.ID,
                 &local_b0);
    }
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((local_80 & 1) != 0) {
      if (((local_88 & 1) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_a8;
      if ((local_88 & 2) == 0) {
        pTVar7 = local_a8[0];
      }
      (**(code **)(((*(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(pTVar7->Data).Pad)->
                   Data).Pad + 8))(pTVar7,param_4);
    }
    if ((local_88 & 1) != 0) {
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_a8;
      if ((local_88 & 2) == 0) {
        pTVar7 = local_a8[0];
      }
      local_88 = local_88 & 0xfe;
      (**(code **)((*(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(pTVar7->Data).Pad)->
                  Data).Pad)(pTVar7,0);
      if ((local_88 & 2) == 0) {
        FMemory::Free(local_a8[0]);
        return None;
      }
    }
    return None;
  }
  if ((param_2 != Transient) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352050>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  pTVar7 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
           ::Find(&this->TransientPreAnimatedStorage,local_res10);
  if (pTVar7 != (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)0x0) {
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    FPreAnimatedRootTokenTraits::RestorePreAnimatedValue
              ((FMovieSceneAnimTypeID)
               *(ulong64 *)((longlong)param_1.Value * 0x38 + *(longlong *)&this->PreAnimatedStorage)
               ,pTVar7,param_4);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    lVar9 = (longlong)param_1.Value * 0x38;
    lVar8 = *(longlong *)this_00;
    bVar1 = *(byte *)(lVar9 + 0x30 + lVar8);
    if ((bVar1 & 2) == 0) {
      if ((param_1.Value == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      puVar10 = (ulong64 *)((longlong)param_1.Value * 0x38 + *(longlong *)&this->PreAnimatedStorage)
      ;
      local_78.ID = *puVar10;
      local_50 = local_50 & 0xfe | 2;
      TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>::operator=
                ((TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_70,
                 (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(puVar10 + 1));
      local_48 = (byte)puVar10[6] & 1 | local_48 & 0xfe;
      local_48 = (local_48 ^ (byte)puVar10[6]) & 2 ^ local_48;
      if (*(int *)&(this->KeyToStorageIndex).field_0x8 !=
          *(int *)&(this->KeyToStorageIndex).field_0x34) {
        TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
        ::RemoveImpl<FMovieSceneAnimTypeID>
                  ((TSet<TTuple<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                    *)&this->KeyToStorageIndex,(int)(local_78.ID >> 0x20) * 0x17 + (int)local_78.ID,
                   &local_78);
      }
      if ((param_1.Value == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedRootTokenTraits>::FCachedData,FDefaultSparseArrayAllocator>
      ::RemoveAt(this_00,param_1.Value,1);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      if ((local_48 & 1) != 0) {
        if (((local_50 & 1) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        pTVar7 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_70;
        if ((local_50 & 2) == 0) {
          pTVar7 = local_70[0];
        }
        (**(code **)(((*(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(pTVar7->Data).Pad)
                     ->Data).Pad + 8))(pTVar7,param_4);
      }
      if ((local_50 & 1) == 0) {
        return None;
      }
      pTVar7 = (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)local_70;
      if ((local_50 & 2) == 0) {
        pTVar7 = local_70[0];
      }
      local_50 = local_50 & 0xfe;
      (**(code **)((*(TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> **)(pTVar7->Data).Pad)->
                  Data).Pad)(pTVar7,0);
      if ((local_50 & 2) != 0) {
        return None;
      }
      FMemory::Free(local_70[0]);
      return None;
    }
    if ((bVar1 & 1) == 0) {
      return Persistent;
    }
  }
  else {
    if (param_3 != Persistent) {
      return Persistent;
    }
    if ((param_1.Value == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    lVar9 = (longlong)param_1.Value * 0x38;
    lVar8 = *(longlong *)&this->PreAnimatedStorage;
    bVar1 = *(byte *)(lVar9 + 0x30 + lVar8);
    if ((bVar1 & 1) == 0) {
      return Persistent;
    }
    *(byte *)(lVar9 + 0x30 + lVar8) = bVar1 | 2;
  }
  FPreAnimatedRootTokenTraits::RestorePreAnimatedValue
            ((FMovieSceneAnimTypeID)*(ulong64 *)(lVar9 + lVar8),
             (TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8> *)(lVar8 + 8 + lVar9),param_4);
  return Persistent;
}

