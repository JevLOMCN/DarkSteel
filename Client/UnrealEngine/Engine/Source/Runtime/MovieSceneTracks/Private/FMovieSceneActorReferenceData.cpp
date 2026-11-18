// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 19

// StaticStruct @ 14658aca0

UScriptStruct * __cdecl FMovieSceneActorReferenceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData,(UObject *)pUVar1,
                         L"MovieSceneActorReferenceData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton;
}

// FMovieSceneActorReferenceData @ 14660fa20

FMovieSceneActorReferenceData * __thiscall
FMovieSceneActorReferenceData::FMovieSceneActorReferenceData(FMovieSceneActorReferenceData *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneActorReferenceData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->KeyTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyTimes).ArrayNum = 0;
  (this->KeyTimes).ArrayMax = 0;
  (this->DefaultValue).Object.Guid.A = 0;
  (this->DefaultValue).Object.Guid.B = 0;
  (this->DefaultValue).Object.Guid.C = 0;
  (this->DefaultValue).Object.Guid.D = 0;
  (this->DefaultValue).Object.SequenceID = 0;
  (this->DefaultValue).ComponentName.ComparisonIndex = 0;
  (this->DefaultValue).ComponentName.Number = 0;
  (this->DefaultValue).SocketName.ComparisonIndex = 0;
  (this->DefaultValue).SocketName.Number = 0;
  (this->KeyValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyValues).ArrayNum = 0;
  (this->KeyValues).ArrayMax = 0;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  (this->DefaultValue).Object.ResolveParentIndex = -1;
  *(undefined4 *)&(this->KeyHandles).field_0x28 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x34 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x38 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x40 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x58 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x60 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x64 = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x6c = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x78 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  return this;
}

// ~FMovieSceneActorReferenceData @ 146620af0

void __thiscall
FMovieSceneActorReferenceData::~FMovieSceneActorReferenceData(FMovieSceneActorReferenceData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  pvVar1 = *(void **)&(this->KeyHandles).field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->KeyHandles).field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->KeyHandles);
  pFVar2 = (this->KeyValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KeyTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this);
  return;
}

// operator= @ 146622310

FMovieSceneActorReferenceData * __thiscall
FMovieSceneActorReferenceData::operator=
          (FMovieSceneActorReferenceData *this,FMovieSceneActorReferenceData *param_1)

{
  int *piVar1;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=(&this->KeyTimes,&param_1->KeyTimes);
  uVar5 = (param_1->DefaultValue).Object.Guid.B;
  uVar6 = (param_1->DefaultValue).Object.Guid.C;
  uVar7 = (param_1->DefaultValue).Object.Guid.D;
  pTVar2 = &this->KeyValues;
  (this->DefaultValue).Object.Guid.A = (param_1->DefaultValue).Object.Guid.A;
  (this->DefaultValue).Object.Guid.B = uVar5;
  (this->DefaultValue).Object.Guid.C = uVar6;
  (this->DefaultValue).Object.Guid.D = uVar7;
  iVar3 = (param_1->DefaultValue).Object.ResolveParentIndex;
  FVar4 = (param_1->DefaultValue).ComponentName;
  (this->DefaultValue).Object.SequenceID = (param_1->DefaultValue).Object.SequenceID;
  (this->DefaultValue).Object.ResolveParentIndex = iVar3;
  (this->DefaultValue).ComponentName = FVar4;
  (this->DefaultValue).SocketName = (param_1->DefaultValue).SocketName;
  if (pTVar2 != &param_1->KeyValues) {
    iVar3 = (param_1->KeyValues).ArrayNum;
    piVar1 = &(this->KeyValues).ArrayMax;
    _Src = (param_1->KeyValues).AllocatorInstance.Data;
    (this->KeyValues).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x28);
      }
    }
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return this;
}

// ClearDefault @ 14664e3d0

void __thiscall FMovieSceneActorReferenceData::ClearDefault(FMovieSceneActorReferenceData *this)

{
  (this->DefaultValue).Object.Guid.A = 0;
  (this->DefaultValue).Object.Guid.B = 0;
  (this->DefaultValue).Object.Guid.C = 0;
  (this->DefaultValue).Object.Guid.D = 0;
  (this->DefaultValue).Object.SequenceID = 0;
  (this->DefaultValue).Object.ResolveParentIndex = -1;
  (this->DefaultValue).ComponentName.ComparisonIndex = 0;
  (this->DefaultValue).ComponentName.Number = 0;
  (this->DefaultValue).SocketName.ComparisonIndex = 0;
  (this->DefaultValue).SocketName.Number = 0;
  return;
}

// ComputeEffectiveRange @ 146651170

TRange<FFrameNumber> * __thiscall
FMovieSceneActorReferenceData::ComputeEffectiveRange
          (FMovieSceneActorReferenceData *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  bool bVar10;
  TRange<FFrameNumber> *pTVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined2 uStackX_d;
  undefined1 uStackX_f;
  uint local_res10;
  uint local_res18;
  undefined4 uStackX_21;
  undefined2 uStackX_25;
  undefined1 uStackX_27;
  
  pTVar1 = &this->KeyTimes;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (this == (FMovieSceneActorReferenceData *)0xffffffffffffff60)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Times && Values",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                        ,0x2f3,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
      return pTVar11;
    }
  }
  iVar2 = (this->KeyTimes).ArrayNum;
  if (iVar2 != 0) {
    uVar13 = iVar2 - 1;
    uVar12 = 0;
    if ((int)uVar13 < iVar2) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
        return pTVar11;
      }
    }
    local_res8 = CONCAT31(local_res8._1_3_,1);
    uVar3 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 4);
    if ((this->KeyTimes).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
        return pTVar11;
      }
    }
    uVar4 = *(undefined4 *)(pTVar1->AllocatorInstance).Data;
    uStackX_21._3_1_ = (undefined1)uVar4;
    uStackX_25 = (undefined2)((uint)uVar4 >> 8);
    uStackX_27 = (undefined1)((uint)uVar4 >> 0x18);
    local_resc = (undefined1)uVar3;
    uStackX_d = (undefined2)((uint)uVar3 >> 8);
    uStackX_f = (undefined1)((uint)uVar3 >> 0x18);
    TVar6._1_4_ = uStackX_21;
    TVar6.Type.Value = 1;
    TVar6.Value.Value._1_2_ = uStackX_25;
    TVar6.Value.Value._3_1_ = uStackX_27;
    TVar7.Value.Value._0_1_ = local_resc;
    TVar7._0_4_ = local_res8;
    TVar7.Value.Value._1_2_ = uStackX_d;
    TVar7.Value.Value._3_1_ = uStackX_f;
    __return_storage_ptr__->LowerBound = TVar6;
    __return_storage_ptr__->UpperBound = TVar7;
    return __return_storage_ptr__;
  }
  local_res10 = local_res10 & 0xffffff00;
  local_res18 = local_res18 & 0xffffff00;
  TVar8.Value.Value = 0;
  TVar8._0_4_ = local_res10;
  TVar9.Value.Value = 0;
  TVar9._0_4_ = local_res18;
  __return_storage_ptr__->LowerBound = TVar8;
  __return_storage_ptr__->UpperBound = TVar9;
  return __return_storage_ptr__;
}

// DeleteKeys @ 146655fa0

void __thiscall
FMovieSceneActorReferenceData::DeleteKeys
          (FMovieSceneActorReferenceData *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 146656fc0

void __thiscall
FMovieSceneActorReferenceData::DeleteKeysFrom
          (FMovieSceneActorReferenceData *this,FFrameNumber param_1,bool param_2)

{
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  FMovieSceneActorReferenceKey local_f8;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_d0;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_c8;
  FMovieSceneChannelData local_a8;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_90;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_88 [2];
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_a8,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  pTVar1 = &this->KeyValues;
  local_90 = pTVar1;
  if (((local_a8.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (local_a8.Times)->ArrayNum;
  if ((iVar2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (0 < iVar2) {
    FVar5.SubFrame = 0.0;
    FVar5.FrameNumber.Value = param_1.Value;
    local_f8.Object.Guid.A = 0;
    local_f8.Object.Guid.B = 0;
    local_f8.Object.Guid.C = 0;
    local_f8.Object.Guid.D = 0;
    local_f8.Object.SequenceID = 0;
    local_f8.Object.ResolveParentIndex = -1;
    local_f8.ComponentName.ComparisonIndex.Value = 0;
    local_f8.ComponentName.Number = 0;
    local_f8.SocketName.ComparisonIndex.Value = 0;
    local_f8.SocketName.Number = 0;
    Evaluate(this,FVar5,&local_f8);
    FMovieSceneChannelData::FMovieSceneChannelData
              ((FMovieSceneChannelData *)&local_c8,(FMovieSceneChannel *)this,&this->KeyTimes,
               (FKeyHandleLookupTable *)&this->KeyHandles);
    local_c8.Values = pTVar1;
    if (((local_c8._padding_ == 0) ||
        (pTVar1 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = FMovieSceneChannelData::FindKey
                       ((FMovieSceneChannelData *)&local_c8,param_1,(FFrameNumber)0x0);
    FVar10 = local_f8.SocketName;
    FVar9 = local_f8.ComponentName;
    uVar8 = local_f8.Object.Guid._8_8_;
    uVar7 = local_f8.Object.Guid._0_8_;
    lVar14 = (longlong)(int)uVar12;
    if (uVar12 == 0xffffffff) {
      TMovieSceneChannelData<FMovieSceneActorReferenceKey>::AddKey(&local_c8,param_1,&local_f8);
    }
    else {
      local_d0 = local_c8.Values;
      uVar6 = CONCAT44(local_f8.Object.ResolveParentIndex,local_f8.Object.SequenceID);
      uVar13 = 0;
      if ((int)uVar12 < (local_c8.Values)->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (local_d0->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar14 * 0x28) = uVar7;
      *(undefined8 *)(pFVar3 + lVar14 * 0x28 + 8) = uVar8;
      *(undefined8 *)(pFVar3 + lVar14 * 0x28 + 0x10) = uVar6;
      *(FName *)(pFVar3 + lVar14 * 0x28 + 0x10 + 8) = FVar9;
      *(FName *)(pFVar3 + lVar14 * 0x28 + 0x20) = FVar10;
    }
    FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_c8,(int)local_res8);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)local_88,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_88[0].Values = pTVar1;
  if (((local_88[0]._padding_ == 0) ||
      (pTVar1 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TMovieSceneChannelData<FMovieSceneActorReferenceKey>::DeleteKeysFrom(local_88,param_1,param_2);
  return;
}

// DuplicateKeys @ 146667bc0

void __thiscall
FMovieSceneActorReferenceData::DuplicateKeys
          (FMovieSceneActorReferenceData *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey>::DuplicateKeys(&local_28,&local_38,&local_48)
  ;
  return;
}

// Evaluate @ 146668720

bool __thiscall
FMovieSceneActorReferenceData::Evaluate
          (FMovieSceneActorReferenceData *this,FFrameTime param_1,
          FMovieSceneActorReferenceKey *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar11 = (this->KeyTimes).ArrayNum;
  if (uVar11 == 0) {
    uVar11 = (this->DefaultValue).Object.Guid.B;
    uVar13 = (this->DefaultValue).Object.Guid.C;
    uVar7 = (this->DefaultValue).Object.Guid.D;
    (param_2->Object).Guid.A = (this->DefaultValue).Object.Guid.A;
    (param_2->Object).Guid.B = uVar11;
    (param_2->Object).Guid.C = uVar13;
    (param_2->Object).Guid.D = uVar7;
    iVar12 = (this->DefaultValue).Object.ResolveParentIndex;
    FVar6 = (this->DefaultValue).ComponentName;
    (param_2->Object).SequenceID = (this->DefaultValue).Object.SequenceID;
    (param_2->Object).ResolveParentIndex = iVar12;
    param_2->ComponentName = FVar6;
    param_2->SocketName = (this->DefaultValue).SocketName;
    return true;
  }
  iVar12 = 0;
  if (0 < (int)uVar11) {
    do {
      iVar1 = (uVar11 >> 1) + iVar12;
      if (*(int *)((this->KeyTimes).AllocatorInstance.Data + (longlong)iVar1 * 4) <=
          param_1.FrameNumber.Value.Value) {
        iVar12 = iVar1 + (uVar11 & 1);
      }
      uVar13 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar13 != 0);
  }
  uVar11 = iVar12 - 1;
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  uVar13 = 0;
  if ((int)uVar11 < (this->KeyValues).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  lVar10 = (longlong)(int)uVar11;
  pFVar2 = (this->KeyValues).AllocatorInstance.Data;
  uVar4 = *(undefined8 *)(pFVar2 + lVar10 * 0x28);
  uVar5 = *(undefined8 *)(pFVar2 + lVar10 * 0x28 + 8);
  (param_2->Object).Guid.A = (int)uVar4;
  (param_2->Object).Guid.B = (int)((ulonglong)uVar4 >> 0x20);
  (param_2->Object).Guid.C = (int)uVar5;
  (param_2->Object).Guid.D = (int)((ulonglong)uVar5 >> 0x20);
  uVar4 = *(undefined8 *)(pFVar2 + lVar10 * 0x28 + 0x10);
  FVar6 = *(FName *)(pFVar2 + lVar10 * 0x28 + 0x10 + 8);
  (param_2->Object).SequenceID = (int)uVar4;
  (param_2->Object).ResolveParentIndex = (int)((ulonglong)uVar4 >> 0x20);
  param_2->ComponentName = FVar6;
  param_2->SocketName = *(FName *)(pFVar2 + lVar10 * 0x28 + 0x20);
  return true;
}

// GetHandle @ 14668a1f0

FKeyHandle __thiscall
FMovieSceneActorReferenceData::GetHandle(FMovieSceneActorReferenceData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  FMovieSceneChannelData::GetHandle(&local_28,param_1);
  return (FKeyHandle)param_1;
}

// GetIndex @ 14668a340

int __thiscall
FMovieSceneActorReferenceData::GetIndex(FMovieSceneActorReferenceData *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FMovieSceneChannelData::GetIndex(&local_28,param_1);
  return iVar3;
}

// GetKeyTimes @ 14668bf00

void __thiscall
FMovieSceneActorReferenceData::GetKeyTimes
          (FMovieSceneActorReferenceData *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FMovieSceneChannelData::GetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

// GetKeys @ 14668c060

void __thiscall
FMovieSceneActorReferenceData::GetKeys
          (FMovieSceneActorReferenceData *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMovieSceneChannelData::GetKeys(&local_28,param_1,param_2,param_3);
  return;
}

// GetNumKeys @ 14668cba0

int __thiscall FMovieSceneActorReferenceData::GetNumKeys(FMovieSceneActorReferenceData *this)

{
  return (this->KeyTimes).ArrayNum;
}

// Offset @ 1466a87f0

void __thiscall
FMovieSceneActorReferenceData::Offset(FMovieSceneActorReferenceData *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMovieSceneChannelData::Offset(&local_28,param_1);
  return;
}

// RemapTimes @ 1466d3560

void __thiscall
FMovieSceneActorReferenceData::RemapTimes
          (FMovieSceneActorReferenceData *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneActorReferenceKey>::RemapTimes(&local_28,param_1);
  return;
}

// Reset @ 1466d9530

void __thiscall FMovieSceneActorReferenceData::Reset(FMovieSceneActorReferenceData *this)

{
  (this->KeyTimes).ArrayNum = 0;
  if ((this->KeyTimes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->KeyTimes).AllocatorInstance,0,&(this->KeyTimes).ArrayMax);
  }
  (this->KeyValues).ArrayNum = 0;
  if ((this->KeyValues).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,&(this->KeyValues).AllocatorInstance,0,&(this->KeyValues).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  (this->DefaultValue).Object.Guid.A = 0;
  (this->DefaultValue).Object.Guid.B = 0;
  (this->DefaultValue).Object.Guid.C = 0;
  (this->DefaultValue).Object.Guid.D = 0;
  (this->DefaultValue).Object.SequenceID = 0;
  (this->DefaultValue).Object.ResolveParentIndex = -1;
  (this->DefaultValue).ComponentName.ComparisonIndex = 0;
  (this->DefaultValue).ComponentName.Number = 0;
  (this->DefaultValue).SocketName.ComparisonIndex = 0;
  (this->DefaultValue).SocketName.Number = 0;
  return;
}

// SetKeyTimes @ 1466f91b0

void __thiscall
FMovieSceneActorReferenceData::SetKeyTimes
          (FMovieSceneActorReferenceData *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey>::SetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

