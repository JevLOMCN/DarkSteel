// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticStruct @ 146590640

UScriptStruct * __cdecl FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel,
                         (UObject *)pUVar1,L"MovieSceneCameraShakeSourceTriggerChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel.OuterSingleton
  ;
}

// GetKeys @ 1465906e0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::GetKeys
          (FMovieSceneCameraShakeSourceTriggerChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 1465907e0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::GetKeyTimes
          (FMovieSceneCameraShakeSourceTriggerChannel *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// SetKeyTimes @ 1465908d0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::SetKeyTimes
          (FMovieSceneCameraShakeSourceTriggerChannel *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FFrameNumber *pFVar8;
  FKeyHandle *pFVar9;
  <lambda_1> local_res8 [8];
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> local_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_48,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_48.Values = &this->KeyValues;
  if (((local_48._padding_ == 0) ||
      (local_48.Values ==
       (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar8 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  pFVar9 = param_1->DataPtr;
  iVar7 = (int)*(undefined8 *)&param_1->ArrayNum;
  if ((iVar7 != iVar2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = 0;
  if (0 < iVar7) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar7) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)&local_48,(FKeyHandle)pFVar9->Index);
      if (iVar5 != -1) {
        uVar4 = 0;
        if ((int)uVar6 < iVar2) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::
        MoveKey<_TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::MoveKey_::__l2::<lambda_1>_>
                  (&local_48,iVar5,(FFrameNumber)pFVar8->Value,false,local_res8);
      }
      uVar6 = uVar6 + 1;
      pFVar9 = pFVar9 + 1;
      pFVar8 = pFVar8 + 1;
    } while ((int)uVar6 < iVar7);
  }
  return;
}

// DuplicateKeys @ 146590ad0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::DuplicateKeys
          (FMovieSceneCameraShakeSourceTriggerChannel *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::DuplicateKeys
            (&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 146590bc0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::DeleteKeys
          (FMovieSceneCameraShakeSourceTriggerChannel *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 146590c50

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::DeleteKeysFrom
          (FMovieSceneCameraShakeSourceTriggerChannel *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::DeleteKeysFrom
            (&local_28,param_1,param_2);
  return;
}

// RemapTimes @ 146590cf0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::RemapTimes
          (FMovieSceneCameraShakeSourceTriggerChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneCameraShakeSourceTrigger>::RemapTimes(&local_28,param_1);
  return;
}

// ComputeEffectiveRange @ 146590d80

TRange<FFrameNumber> * __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::ComputeEffectiveRange
          (FMovieSceneCameraShakeSourceTriggerChannel *this,
          TRange<FFrameNumber> *__return_storage_ptr__)

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
     (this == (FMovieSceneCameraShakeSourceTriggerChannel *)0xffffffffffffff88)) {
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

// GetNumKeys @ 146590f70

int __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::GetNumKeys
          (FMovieSceneCameraShakeSourceTriggerChannel *this)

{
  return (this->KeyTimes).ArrayNum;
}

// Reset @ 146590f80

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::Reset(FMovieSceneCameraShakeSourceTriggerChannel *this)

{
  (this->KeyTimes).ArrayNum = 0;
  if ((this->KeyTimes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->KeyTimes).AllocatorInstance,0,&(this->KeyTimes).ArrayMax);
  }
  (this->KeyValues).ArrayNum = 0;
  if ((this->KeyValues).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->KeyValues).AllocatorInstance,0,&(this->KeyValues).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return;
}

// Offset @ 1465910c0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::Offset
          (FMovieSceneCameraShakeSourceTriggerChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// FMovieSceneCameraShakeSourceTriggerChannel @ 146610290

FMovieSceneCameraShakeSourceTriggerChannel * __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::FMovieSceneCameraShakeSourceTriggerChannel
          (FMovieSceneCameraShakeSourceTriggerChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneCameraShakeSourceTriggerChannel__6B_;
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
  (this->KeyValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyValues).ArrayNum = 0;
  (this->KeyValues).ArrayMax = 0;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
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

// ~FMovieSceneCameraShakeSourceTriggerChannel @ 146620ba0

void __thiscall
FMovieSceneCameraShakeSourceTriggerChannel::~FMovieSceneCameraShakeSourceTriggerChannel
          (FMovieSceneCameraShakeSourceTriggerChannel *this)

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

