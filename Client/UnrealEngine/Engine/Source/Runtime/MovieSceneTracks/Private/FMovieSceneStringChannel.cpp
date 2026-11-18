// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 23

// StaticStruct @ 14658eeb0

UScriptStruct * __cdecl FMovieSceneStringChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel,(UObject *)pUVar1,
                         L"MovieSceneStringChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton;
}

// FMovieSceneStringChannel @ 146611140

FMovieSceneStringChannel * __thiscall
FMovieSceneStringChannel::FMovieSceneStringChannel
          (FMovieSceneStringChannel *this,FMovieSceneStringChannel *param_1)

{
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  this->_padding_ = (longlong)&___7FMovieSceneStringChannel__6B_;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).AllocatorInstance.Data = (param_1->Times).AllocatorInstance.Data;
  (param_1->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = (param_1->Times).ArrayNum;
  (this->Times).ArrayMax = (param_1->Times).ArrayMax;
  (param_1->Times).ArrayNum = 0;
  (param_1->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).AllocatorInstance.Data = (param_1->Values).AllocatorInstance.Data;
  (param_1->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = (param_1->Values).ArrayNum;
  (this->Values).ArrayMax = (param_1->Values).ArrayMax;
  (param_1->Values).ArrayNum = 0;
  (param_1->Values).ArrayMax = 0;
  (this->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.AllocatorInstance.Data =
       (param_1->DefaultValue).Data.AllocatorInstance.Data;
  (param_1->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.ArrayNum = (param_1->DefaultValue).Data.ArrayNum;
  (this->DefaultValue).Data.ArrayMax = (param_1->DefaultValue).Data.ArrayMax;
  (param_1->DefaultValue).Data.ArrayNum = 0;
  (param_1->DefaultValue).Data.ArrayMax = 0;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
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

// FMovieSceneStringChannel @ 146611290

FMovieSceneStringChannel * __thiscall
FMovieSceneStringChannel::FMovieSceneStringChannel(FMovieSceneStringChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneStringChannel__6B_;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = 0;
  (this->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  (this->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.ArrayNum = 0;
  (this->DefaultValue).Data.ArrayMax = 0;
  this->bHasDefaultValue = false;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
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

// ~FMovieSceneStringChannel @ 146620ec0

void __thiscall FMovieSceneStringChannel::~FMovieSceneStringChannel(FMovieSceneStringChannel *this)

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
  pFVar2 = (this->DefaultValue).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  pFVar2 = (this->Values).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Times).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this);
  return;
}

// ClearDefault @ 14664e430

void __thiscall FMovieSceneStringChannel::ClearDefault(FMovieSceneStringChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// ComputeEffectiveRange @ 146651320

TRange<FFrameNumber> * __thiscall
FMovieSceneStringChannel::ComputeEffectiveRange
          (FMovieSceneStringChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

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
  
  pTVar1 = &this->Times;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (this == (FMovieSceneStringChannel *)0xffffffffffffff88)) {
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
  iVar2 = (this->Times).ArrayNum;
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
    if ((this->Times).ArrayNum < 1) {
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

// DeleteKeys @ 146656030

void __thiscall
FMovieSceneStringChannel::DeleteKeys
          (FMovieSceneStringChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FString> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->Values;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FString>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 146657290

void __thiscall
FMovieSceneStringChannel::DeleteKeysFrom
          (FMovieSceneStringChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  FFrameTime FVar4;
  FScriptContainerElement *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  FString local_a8;
  TMovieSceneChannelData<FString> local_98;
  FMovieSceneChannelData local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_60;
  TMovieSceneChannelData<FString> local_58;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_78,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  pTVar1 = &this->Values;
  local_60 = pTVar1;
  if (((local_78.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_78.Times)->ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if ((0 < (local_78.Times)->ArrayNum) &&
          (FVar4.SubFrame = 0.0, FVar4.FrameNumber.Value = param_1.Value,
          pFVar10 = Evaluate(this,FVar4), pFVar10 != (FString *)0x0)) {
    local_b0 = (pFVar10->Data).ArrayNum;
    lVar12 = (longlong)local_b0;
    pFVar13 = (pFVar10->Data).AllocatorInstance.Data;
    local_b8.Data = (FScriptContainerElement *)0x0;
    if (local_b0 == 0) {
      local_ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b0,0,&local_b8,local_b0,&local_ac);
      memcpy(local_b8.Data,pFVar13,lVar12 * 2);
    }
    FMovieSceneChannelData::FMovieSceneChannelData
              ((FMovieSceneChannelData *)&local_98,(FMovieSceneChannel *)this,&this->Times,
               (FKeyHandleLookupTable *)&this->KeyHandles);
    local_98.Values = pTVar1;
    if (((local_98._padding_ == 0) || (pTVar1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)
        ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Times && Values",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                 ,0x122,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0 != 0) {
      FVar11.Data = local_b8.Data;
    }
    ::FString::FString(&local_a8,(wchar_t *)FVar11.Data);
    uVar8 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_98,param_1,(FFrameNumber)0x0);
    pTVar6 = local_98.Values;
    if (uVar8 == 0xffffffff) {
      TMovieSceneChannelData<FString>::AddKey(&local_98,param_1,&local_a8);
    }
    else {
      uVar9 = 0;
      if ((int)uVar8 < (local_98.Values)->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar11.Data = local_a8.Data.AllocatorInstance.Data;
      pFVar13 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
      if (pFVar13 != (FScriptContainerElement *)&local_a8) {
        pFVar5 = pFVar13 + 0xc;
        iVar2 = *(int *)pFVar5;
        *(int *)&pFVar13[8].field_0x0 = local_a8.Data.ArrayNum;
        if ((local_a8.Data.ArrayNum == 0) && (iVar2 == 0)) {
          *(int *)pFVar5 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a8.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar13,
                     local_a8.Data.ArrayNum,(int *)pFVar5);
          if (local_a8.Data.ArrayNum != 0) {
            memcpy(*(void **)&pFVar13->field_0x0,FVar11.Data,(longlong)local_a8.Data.ArrayNum * 2);
          }
        }
      }
    }
    FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_98,(int)local_res8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_58,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_58.Values = pTVar1;
  if (((local_58._padding_ == 0) || (pTVar1 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TMovieSceneChannelData<FString>::DeleteKeysFrom(&local_58,param_1,param_2);
  return;
}

// DuplicateKeys @ 146667c70

void __thiscall
FMovieSceneStringChannel::DuplicateKeys
          (FMovieSceneStringChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FString> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->Values;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FString>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// Evaluate @ 146668b80

FString * __thiscall
FMovieSceneStringChannel::Evaluate(FMovieSceneStringChannel *this,FFrameTime param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FString *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (this->Times).ArrayNum;
  if (uVar6 == 0) {
    pFVar5 = &this->DefaultValue;
    if (this->bHasDefaultValue == false) {
      pFVar5 = (FString *)0x0;
    }
    return pFVar5;
  }
  uVar8 = 0;
  uVar7 = uVar8;
  if (0 < (int)uVar6) {
    do {
      iVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)((this->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) <=
          param_1.FrameNumber.Value.Value) {
        uVar7 = iVar1 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  uVar6 = uVar7 - 1;
  if ((int)(uVar7 - 1) < 0) {
    uVar6 = 0;
  }
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  return (FString *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
}

// GetDefault @ 146689c20

TOptional<FString> * __thiscall
FMovieSceneStringChannel::GetDefault
          (FMovieSceneStringChannel *this,TOptional<FString> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  TOptional<FString> *pTVar6;
  ForAnyElementType FVar7;
  FString *pFVar8;
  FString local_28;
  FString local_18;
  
  FVar7.Data = (FScriptContainerElement *)0x0;
  if (this->bHasDefaultValue == false) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8 = &local_28;
    local_28.Data.ArrayMax = -1;
    bVar4 = false;
    bVar5 = true;
  }
  else {
    ::FString::FString(&local_18,&this->DefaultValue);
    if (local_18.Data.ArrayMax == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TOptional<FString> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pFVar8 = &local_18;
    bVar4 = true;
    bVar5 = false;
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = (pFVar8->Data).ArrayMax;
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  if (iVar1 != -1) {
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data = FVar7.Data;
    iVar2 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar2;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar1;
  }
  if (((bVar5) && (local_28.Data.ArrayMax != -1)) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((bVar4) && (local_18.Data.ArrayMax != -1)) &&
     (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHandle @ 14668a290

FKeyHandle __thiscall
FMovieSceneStringChannel::GetHandle(FMovieSceneStringChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetIndex @ 14668a3d0

int __thiscall FMovieSceneStringChannel::GetIndex(FMovieSceneStringChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 14668bfb0

void __thiscall
FMovieSceneStringChannel::GetKeyTimes
          (FMovieSceneStringChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeys @ 14668c110

void __thiscall
FMovieSceneStringChannel::GetKeys
          (FMovieSceneStringChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetNumKeys @ 14668cbb0

int __thiscall FMovieSceneStringChannel::GetNumKeys(FMovieSceneStringChannel *this)

{
  return (this->Times).ArrayNum;
}

// Offset @ 1466a8880

void __thiscall
FMovieSceneStringChannel::Offset(FMovieSceneStringChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// Optimize @ 1466aad10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneStringChannel::Optimize
          (FMovieSceneStringChannel *this,FKeyDataOptimizationParams *param_1)

{
  FFrameNumber FVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  TRangeBound<FFrameNumber> TVar4;
  void *_Src;
  code *pcVar5;
  FFrameTime FVar6;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lStackX_18;
  FString FStack_90;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_80;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_70;
  FMovieSceneChannelData FStack_60;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTStack_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&FStack_60,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  pTStack_48 = &this->Values;
  if (((FStack_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTStack_48 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((FStack_60.Times)->ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (1 < (FStack_60.Times)->ArrayNum) {
    uVar16 = (FStack_60.Times)->ArrayNum;
    pFVar3 = ((FStack_60.Times)->AllocatorInstance).Data;
    if (((int)uVar16 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar4 = (param_1->Range).LowerBound;
    uVar9 = 0;
    uVar15 = uVar9;
    if ((TVar4.Type.Value.Value != '\x02') &&
       (uVar14 = uVar16, uVar13 = uVar9, uVar15 = 0, 0 < (int)uVar16)) {
      do {
        uVar17 = uVar14 >> 1;
        uVar15 = uVar13;
        if (*(int *)(pFVar3 + (longlong)(int)(uVar17 + uVar13) * 4) < TVar4.Value.Value.Value) {
          uVar15 = (uVar14 & 1) + uVar17 + uVar13;
        }
        uVar14 = uVar17;
        uVar13 = uVar15;
      } while (uVar17 != 0);
    }
    TVar4 = (param_1->Range).UpperBound;
    if ((TVar4.Type.Value.Value != '\x02') &&
       (bVar8 = 0 < (int)uVar16, uVar14 = uVar16, uVar16 = 0, bVar8)) {
      do {
        uVar13 = uVar14 >> 1;
        uVar16 = uVar9;
        if (*(int *)(pFVar3 + (longlong)(int)(uVar13 + uVar9) * 4) <= TVar4.Value.Value.Value) {
          uVar16 = uVar13 + uVar9 + (uVar14 & 1);
        }
        uVar14 = uVar13;
        uVar9 = uVar16;
      } while (uVar13 != 0);
    }
    lVar19 = (longlong)(int)uVar15;
    if (lVar19 < (int)uVar16) {
      lStackX_18 = lVar19 << 4;
      do {
        iVar10 = (FStack_60.Times)->ArrayNum;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar10 <= (int)uVar15) {
          return;
        }
        iVar10 = (FStack_60.Times)->ArrayNum;
        pFVar3 = ((FStack_60.Times)->AllocatorInstance).Data;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar1.Value = *(int *)(pFVar3 + lVar19 * 4);
        iVar10 = pTStack_48->ArrayNum;
        pFVar3 = (pTStack_48->AllocatorInstance).Data;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FStack_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_90.Data.ArrayNum = *(int *)(pFVar3 + lStackX_18 + 8);
        lVar18 = (longlong)FStack_90.Data.ArrayNum;
        _Src = *(void **)(pFVar3 + lStackX_18);
        if (FStack_90.Data.ArrayNum == 0) {
          FStack_90.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FStack_90.Data.ArrayNum,0,(ForAnyElementType *)&FStack_90,
                     FStack_90.Data.ArrayNum,&FStack_90.Data.ArrayMax);
          memcpy(FStack_90.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
        }
        if ((((int)uVar15 < 0) || ((FStack_60.Times)->ArrayNum <= (int)uVar15)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(KeyIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x1fc,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((FStack_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(FStack_60.OwningChannel)->KeyDeletedEvent),
           pTVar7 = FStack_60.Times, bVar8)) {
          uVar9 = 0;
          if ((int)uVar15 < (FStack_60.Times)->ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(undefined4 *)((pTVar7->AllocatorInstance).Data + lVar19 * 4);
          TStack_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_80.ArrayNum = 0;
          TStack_80.ArrayMax = 0;
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&TStack_80.AllocatorInstance,&TStack_80.ArrayMax);
          TStack_80.ArrayNum = iVar10 + 1;
          *(ulonglong *)(TStack_80.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(uVar2,uVar15);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(FStack_60.OwningChannel)->KeyDeletedEvent,FStack_60.OwningChannel,&TStack_80
                     );
          if (TStack_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_80.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt(FStack_60.Times,uVar15,No);
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(pTStack_48,uVar15,No);
        if (FStack_60.KeyHandles != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle(FStack_60.KeyHandles,uVar15);
        }
        FVar6.SubFrame = 0.0;
        FVar6.FrameNumber.Value = FVar1.Value;
        pFVar12 = Evaluate(this,FVar6);
        if (pFVar12 == (FString *)0x0) {
LAB_1465f2cc6:
          iVar10 = FMovieSceneChannelData::AddKeyInternal(&FStack_60,FVar1);
          TArray<FString,TSizedDefaultAllocator<32>_>::Insert(pTStack_48,&FStack_90,iVar10);
          if ((FStack_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
             (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 &(FStack_60.OwningChannel)->KeyAddedEvent), bVar8)) {
            TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_70.ArrayNum = 0;
            TStack_70.ArrayMax = 0;
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&TStack_70.AllocatorInstance,&TStack_70.ArrayMax);
            TStack_70.ArrayNum = iVar11 + 1;
            *(ulonglong *)(TStack_70.AllocatorInstance.Data + (longlong)iVar11 * 8) =
                 CONCAT44(FVar1.Value,iVar10);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&(FStack_60.OwningChannel)->KeyAddedEvent,FStack_60.OwningChannel,&TStack_70
                       );
            if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TStack_70.AllocatorInstance.Data);
            }
          }
        }
        else {
          iVar10 = (pFVar12->Data).ArrayNum;
          if (FStack_90.Data.ArrayNum == iVar10) {
            if (1 < FStack_90.Data.ArrayNum) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)FStack_90.Data.AllocatorInstance.Data,
                                  (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
              bVar8 = iVar10 == 0;
              goto LAB_1465f2cad;
            }
          }
          else {
            bVar8 = FStack_90.Data.ArrayNum + iVar10 == 1;
LAB_1465f2cad:
            if (!bVar8) goto LAB_1465f2cc6;
          }
          uVar15 = uVar15 - 1;
          lVar19 = lVar19 + -1;
          lStackX_18 = lStackX_18 + -0x10;
        }
        if (FStack_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_90.Data.AllocatorInstance.Data);
        }
        lStackX_18 = lStackX_18 + 0x10;
        uVar15 = uVar15 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uVar16);
    }
  }
  return;
}

// RemapTimes @ 1466d35f0

void __thiscall
FMovieSceneStringChannel::RemapTimes(FMovieSceneStringChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FString> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->Values;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FString>::RemapTimes(&local_28,param_1);
  return;
}

// Reset @ 1466d9600

void __thiscall FMovieSceneStringChannel::Reset(FMovieSceneStringChannel *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->Times).ArrayNum = 0;
  if ((this->Times).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Times).AllocatorInstance,0,&(this->Times).ArrayMax);
  }
  pFVar3 = (this->Values).AllocatorInstance.Data;
  piVar1 = &(this->Values).ArrayMax;
  iVar2 = (this->Values).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->Values).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Values).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->Values).ArrayNum = 0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->bHasDefaultValue = false;
  return;
}

// SerializeFromMismatchedTag @ 1466f7b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMovieSceneStringChannel::SerializeFromMismatchedTag
          (FMovieSceneStringChannel *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_01;
  FString *pFVar2;
  code *pcVar3;
  int iVar4;
  ForAnyElementType _Src;
  undefined8 uVar5;
  void *_Src_00;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  UScriptStruct *this_02;
  ulong64 uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FStringCurveKey *pFVar17;
  double in_XMM2_Qa;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [8];
  FFrameNumber local_130 [2];
  int local_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  FString local_110;
  FPropertyTypeName local_100;
  undefined1 local_fc [36];
  undefined **local_d8;
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d0;
  void *local_90;
  undefined4 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  ulonglong local_68;
  FStringCurveKey *local_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&StringCurveName,"StringCurve");
    _Init_thread_footer(&::_TSS0);
  }
  local_100.Index = (param_1->TypeName).Index;
  bVar6 = UE::FPropertyTypeName::IsStruct(&local_100,StringCurveName);
  if (bVar6) {
    local_d0._0_8_ = 0;
    local_d0._8_8_ = 0;
    local_d0._32_8_ = 0;
    local_90 = (void *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = (FStringCurveKey *)0x0;
    local_58 = 0;
    local_d0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_d0._48_8_ = _UNK_150631d98;
    local_d8 = &___7FStringCurve__6B_;
    this_02 = FStringCurve::StaticStruct();
    UScriptStruct::SerializeItem(this_02,param_2,&local_d8,(void *)0x0);
    _Src_00 = local_70;
    lVar14 = (longlong)(int)local_68;
    local_120.Data = (FScriptContainerElement *)0x0;
    local_118 = CONCAT44(local_118._4_4_,(int)local_68);
    if ((int)local_68 == 0) {
      local_118 = local_68 & 0xffffffff;
      iVar11 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_68,0,&local_120,(int)local_68,(int *)((longlong)&local_118 + 4));
      memcpy(local_120.Data,_Src_00,lVar14 * 2);
      iVar11 = (int)local_118;
    }
    iVar9 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar9 = 0;
    }
    if (iVar9 != 0) {
      pFVar2 = &this->DefaultValue;
      this->bHasDefaultValue = true;
      if (pFVar2 != (FString *)&local_120) {
        pFVar15 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
          iVar11 = (int)local_118;
        }
        (pFVar2->Data).AllocatorInstance.Data = local_120.Data;
        (this->DefaultValue).Data.ArrayMax = local_118._4_4_;
        local_118 = 0;
        local_120.Data = (FScriptContainerElement *)0x0;
        (this->DefaultValue).Data.ArrayNum = iVar11;
      }
    }
    GetLegacyConversionFrameRate();
    uVar12 = local_58 & 0xffffffff;
    this_00 = &this->Times;
    if ((int)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    piVar1 = &(this->Times).ArrayMax;
    if (*piVar1 < (int)local_58) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_58,&this_00->AllocatorInstance,(this->Times).ArrayNum,piVar1);
      uVar12 = local_58 & 0xffffffff;
    }
    this_01 = &this->Values;
    iVar11 = (int)uVar12;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
    if ((this->Values).ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar11,&this_01->AllocatorInstance,(this->Values).ArrayNum,
                 &(this->Values).ArrayMax);
      uVar12 = local_58 & 0xffffffff;
    }
    local_fc._4_4_ = (undefined4)uVar12;
    uVar16 = (ulonglong)(int)local_fc._4_4_;
    local_128 = 0;
    local_fc._12_8_ = 0;
    local_fc._28_8_ = local_60 + uVar16;
    pFVar17 = local_60;
    while( true ) {
      uVar5 = local_fc._28_8_;
      iVar11 = local_128;
      iVar9 = (int)uVar12;
      if ((int)uVar12 != (int)uVar16) {
        local_138[0] = 0;
        `TCheckedPointerIterator<FStringCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_138);
        iVar9 = (int)local_58;
      }
      if (pFVar17 == (FStringCurveKey *)uVar5) break;
      UpgradeLegacyMovieSceneTime((UObject *)local_fc,(FFrameRate)0x0,in_XMM2_Qa);
      local_110.Data.ArrayNum = (pFVar17->Value).Data.ArrayNum;
      lVar14 = (longlong)local_110.Data.ArrayNum;
      pFVar15 = (pFVar17->Value).Data.AllocatorInstance.Data;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_110.Data.ArrayNum == 0) {
        local_110.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)&local_110,
                   local_110.Data.ArrayNum,&local_110.Data.ArrayMax);
        memcpy(local_110.Data.AllocatorInstance.Data,pFVar15,lVar14 * 2);
      }
      uVar5 = local_fc._12_8_;
      iVar4 = local_128;
      iVar8 = local_128 + 1;
      iVar9 = (this->Times).ArrayNum;
      lVar14 = local_fc._12_8_ + 1;
      local_130[0].Value = local_fc._0_4_;
      if ((longlong)local_fc._12_8_ < 1) {
        local_128 = iVar8;
        local_fc._12_8_ = lVar14;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this_00->AllocatorInstance,piVar1);
        }
LAB_1466f7ffb:
        (this->Times).ArrayNum = iVar9 + 1;
        *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_130[0].Value;
        iVar11 = (this->Values).ArrayNum;
        if (iVar11 == (this->Values).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&this_01->AllocatorInstance,&(this->Values).ArrayMax);
        }
        _Src.Data = local_110.Data.AllocatorInstance.Data;
        pFVar15 = (this_01->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        (this->Values).ArrayNum = iVar11 + 1;
        *(undefined8 *)&pFVar15->field_0x0 = 0;
        lVar14 = (longlong)local_110.Data.ArrayNum;
        *(int *)&pFVar15[8].field_0x0 = local_110.Data.ArrayNum;
        if (local_110.Data.ArrayNum == 0) {
          *(int *)(pFVar15 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                     local_110.Data.ArrayNum,(int *)(pFVar15 + 0xc));
          memcpy(*(void **)&pFVar15->field_0x0,_Src.Data,lVar14 * 2);
        }
      }
      else {
        uVar13 = 0;
        if (local_128 + -1 < iVar9) {
          uVar13 = (uint)-iVar11 >> 0x1f;
        }
        local_128 = iVar8;
        local_fc._12_8_ = lVar14;
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        if (*(int *)((this_00->AllocatorInstance).Data + uVar5 * 4 + -4) <= local_130[0].Value) {
          iVar9 = (this->Times).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&this_00->AllocatorInstance,piVar1);
          }
          goto LAB_1466f7ffb;
        }
        uVar13 = iVar4 - 2;
        if (-1 < (int)uVar13) {
          lVar14 = uVar5 * 4 + -8;
          do {
            uVar10 = 0;
            if ((int)uVar13 < (this->Times).ArrayNum) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            if (*(int *)((this_00->AllocatorInstance).Data + lVar14) <= local_130[0].Value) {
              TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_130,uVar13 + 1)
              ;
              TArray<FString,TSizedDefaultAllocator<32>_>::Insert(this_01,&local_110,uVar13 + 1);
              goto LAB_1466f8083;
            }
            lVar14 = lVar14 + -4;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_130,0);
        TArray<FString,TSizedDefaultAllocator<32>_>::Insert(this_01,&local_110,0);
      }
LAB_1466f8083:
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      uVar12 = local_58 & 0xffffffff;
      pFVar17 = pFVar17 + 1;
      uVar16 = (ulonglong)(uint)local_fc._4_4_;
    }
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
      iVar9 = (int)local_58;
    }
    local_d8 = &___7FStringCurve__6B_;
    DestructItems<FStringCurveKey,int>(local_60,iVar9);
    if (local_60 != (FStringCurveKey *)0x0) {
      FMemory::Free(local_60);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    local_d8 = &___7FIndexedCurve__6B_;
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d0);
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// SetDefault @ 1466f8a30

void __thiscall
FMovieSceneStringChannel::SetDefault(FMovieSceneStringChannel *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  this->bHasDefaultValue = true;
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->DefaultValue,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetKeyTimes @ 1466f9260

void __thiscall
FMovieSceneStringChannel::SetKeyTimes
          (FMovieSceneStringChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

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
  TMovieSceneChannelData<FString> local_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_48,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_48.Values = &this->Values;
  if (((local_48._padding_ == 0) ||
      (local_48.Values == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) &&
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
        TMovieSceneChannelData<FString>::
        MoveKey<_TMovieSceneChannelData<FString>::MoveKey_::__l2::<lambda_1>_>
                  (&local_48,iVar5,(FFrameNumber)pFVar8->Value,false,local_res8);
      }
      uVar6 = uVar6 + 1;
      pFVar9 = pFVar9 + 1;
      pFVar8 = pFVar8 + 1;
    } while ((int)uVar6 < iVar7);
  }
  return;
}

