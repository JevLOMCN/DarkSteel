// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticStruct @ 14658f980

UScriptStruct * __cdecl FMovieSceneTextChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTextChannel,(UObject *)pUVar1,
                         L"MovieSceneTextChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton;
}

// GetKeys @ 14658fa90

void __thiscall
FMovieSceneTextChannel::GetKeys
          (FMovieSceneTextChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 14658fb40

void __thiscall
FMovieSceneTextChannel::GetKeyTimes
          (FMovieSceneTextChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// SetKeyTimes @ 14658fc30

void __thiscall
FMovieSceneTextChannel::SetKeyTimes
          (FMovieSceneTextChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
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
  TMovieSceneChannelData<FText> local_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_48,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_48.Values = &this->Values;
  if (((local_48._padding_ == 0) ||
      (local_48.Values == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) &&
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
        TMovieSceneChannelData<FText>::
        MoveKey<_TMovieSceneChannelData<FText>::MoveKey_::__l2::<lambda_1>_>
                  (&local_48,iVar5,(FFrameNumber)pFVar8->Value,false,local_res8);
      }
      uVar6 = uVar6 + 1;
      pFVar9 = pFVar9 + 1;
      pFVar8 = pFVar8 + 1;
    } while ((int)uVar6 < iVar7);
  }
  return;
}

// DuplicateKeys @ 14658fe30

void __thiscall
FMovieSceneTextChannel::DuplicateKeys
          (FMovieSceneTextChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FText> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->Values;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FText>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 14658fee0

void __thiscall
FMovieSceneTextChannel::DeleteKeys
          (FMovieSceneTextChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FText> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->Values;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FText>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 14658ff70

void __thiscall
FMovieSceneTextChannel::DeleteKeysFrom
          (FMovieSceneTextChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  FFrameTime FVar5;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  FText *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FText local_b0;
  undefined1 local_a0 [8];
  TMovieSceneChannelData<FText> local_98;
  FMovieSceneChannelData local_78;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_60;
  TMovieSceneChannelData<FText> local_58;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_78,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  pTVar1 = &this->Values;
  local_60 = pTVar1;
  if (((local_78.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar1 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_78.Times)->ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((0 < (local_78.Times)->ArrayNum) &&
          (FVar5.SubFrame = 0.0, FVar5.FrameNumber.Value = param_1.Value,
          pFVar9 = Evaluate(this,FVar5), pFVar9 != (FText *)0x0)) {
    local_b0.TextData.Reference = (pFVar9->TextData).Reference;
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 8))
                (local_b0.TextData.Reference,local_res8);
    }
    local_b0.Flags = pFVar9->Flags;
    FMovieSceneChannelData::FMovieSceneChannelData
              ((FMovieSceneChannelData *)&local_98,(FMovieSceneChannel *)this,&this->Times,
               (FKeyHandleLookupTable *)&this->KeyHandles);
    local_98.Values = pTVar1;
    if (((local_98._padding_ == 0) || (pTVar1 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Times && Values",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                              ,0x122,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_98,param_1,(FFrameNumber)0x0);
    pTVar6 = local_98.Values;
    lVar11 = (longlong)(int)uVar8;
    if (uVar8 == 0xffffffff) {
      TMovieSceneChannelData<FText>::AddKey(&local_98,param_1,&local_b0);
    }
    else {
      uVar10 = 0;
      if ((int)uVar8 < (local_98.Values)->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      pIVar3 = *(ITextData **)(pFVar2 + lVar11 * 0x10);
      if (pIVar3 != local_b0.TextData.Reference) {
        *(ITextData **)(pFVar2 + lVar11 * 0x10) = local_b0.TextData.Reference;
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b0.TextData.Reference + 8))
                    (local_b0.TextData.Reference,local_res20);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      *(uint *)(pFVar2 + lVar11 * 0x10 + 8) = local_b0.Flags;
    }
    FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_98,(int)local_a0);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_58,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_58.Values = pTVar1;
  if (((local_58._padding_ == 0) || (pTVar1 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TMovieSceneChannelData<FText>::DeleteKeysFrom(&local_58,param_1,param_2);
  return;
}

// RemapTimes @ 146590240

void __thiscall
FMovieSceneTextChannel::RemapTimes(FMovieSceneTextChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FText> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->Values;
  if ((local_28._padding_ == 0) ||
     (local_28.Values == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FText>::RemapTimes(&local_28,param_1);
  return;
}

// ComputeEffectiveRange @ 1465902d0

TRange<FFrameNumber> * __thiscall
FMovieSceneTextChannel::ComputeEffectiveRange
          (FMovieSceneTextChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

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
     (this == (FMovieSceneTextChannel *)0xffffffffffffff88)) {
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

// GetNumKeys @ 146590480

int __thiscall FMovieSceneTextChannel::GetNumKeys(FMovieSceneTextChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 146590490

void __thiscall FMovieSceneTextChannel::Reset(FMovieSceneTextChannel *this)

{
  int *piVar1;
  int iVar2;
  FText *pFVar3;
  
  (this->Times).ArrayNum = 0;
  if ((this->Times).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Times).AllocatorInstance,0,&(this->Times).ArrayMax);
  }
  pFVar3 = (FText *)(this->Values).AllocatorInstance.Data;
  piVar1 = &(this->Values).ArrayMax;
  iVar2 = (this->Values).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FText,int>(pFVar3,iVar2);
    (this->Values).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Values).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FText,int>(pFVar3,iVar2);
    (this->Values).ArrayNum = 0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->bHasDefaultValue = false;
  return;
}

// Offset @ 146590560

void __thiscall FMovieSceneTextChannel::Offset(FMovieSceneTextChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// Optimize @ 1465905e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneTextChannel::Optimize(FMovieSceneTextChannel *this,FKeyDataOptimizationParams *param_1)

{
  FFrameNumber FVar1;
  FScriptContainerElement *pFVar2;
  TRangeBound<FFrameNumber> TVar3;
  code *pcVar4;
  FFrameTime FVar5;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FText *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStackX_18 [8];
  uint uStackX_20;
  undefined4 uStackX_24;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_90;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_80;
  FText FStack_70;
  FMovieSceneChannelData FStack_60;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTStack_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&FStack_60,(FMovieSceneChannel *)this,&this->Times,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  pTStack_48 = &this->Values;
  if (((FStack_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTStack_48 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((FStack_60.Times)->ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (1 < (FStack_60.Times)->ArrayNum) {
    uVar15 = (FStack_60.Times)->ArrayNum;
    pFVar2 = ((FStack_60.Times)->AllocatorInstance).Data;
    if (((int)uVar15 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar3 = (param_1->Range).LowerBound;
    uVar8 = 0;
    uVar14 = uVar8;
    if ((TVar3.Type.Value.Value != '\x02') &&
       (uVar13 = uVar15, uVar12 = uVar8, uVar14 = 0, 0 < (int)uVar15)) {
      do {
        uVar16 = uVar13 >> 1;
        uVar14 = uVar12;
        if (*(int *)(pFVar2 + (longlong)(int)(uVar16 + uVar12) * 4) < TVar3.Value.Value.Value) {
          uVar14 = (uVar13 & 1) + uVar16 + uVar12;
        }
        uVar13 = uVar16;
        uVar12 = uVar14;
      } while (uVar16 != 0);
    }
    TVar3 = (param_1->Range).UpperBound;
    if ((TVar3.Type.Value.Value != '\x02') &&
       (bVar7 = 0 < (int)uVar15, uVar13 = uVar15, uVar15 = 0, bVar7)) {
      do {
        uVar12 = uVar13 >> 1;
        uVar15 = uVar8;
        if (*(int *)(pFVar2 + (longlong)(int)(uVar12 + uVar8) * 4) <= TVar3.Value.Value.Value) {
          uVar15 = uVar12 + uVar8 + (uVar13 & 1);
        }
        uVar13 = uVar12;
        uVar8 = uVar15;
      } while (uVar12 != 0);
    }
    lVar18 = (longlong)(int)uVar14;
    if (lVar18 < (int)uVar15) {
      lVar17 = lVar18 << 4;
      do {
        iVar9 = (FStack_60.Times)->ArrayNum;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar9 <= (int)uVar14) {
          return;
        }
        iVar9 = (FStack_60.Times)->ArrayNum;
        pFVar2 = ((FStack_60.Times)->AllocatorInstance).Data;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = ~uVar14 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1.Value = *(int *)(pFVar2 + lVar18 * 4);
        iVar9 = pTStack_48->ArrayNum;
        pFVar2 = (pTStack_48->AllocatorInstance).Data;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStack_70.TextData.Reference = *(ITextData **)(pFVar2 + lVar17);
        if (FStack_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_70.TextData.Reference + 8))
                    (FStack_70.TextData.Reference,auStackX_18);
        }
        FStack_70.Flags = *(uint *)(pFVar2 + lVar17 + 8);
        if ((((int)uVar14 < 0) || ((FStack_60.Times)->ArrayNum <= (int)uVar14)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(KeyIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x1fc,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((FStack_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(FStack_60.OwningChannel)->KeyDeletedEvent),
           pTVar6 = FStack_60.Times, bVar7)) {
          uVar8 = 0;
          if ((int)uVar14 < (FStack_60.Times)->ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uStackX_24 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar18 * 4);
          TStack_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_90.ArrayNum = 0;
          TStack_90.ArrayMax = 0;
          uStackX_20 = uVar14;
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&TStack_90.AllocatorInstance,&TStack_90.ArrayMax);
          TStack_90.ArrayNum = iVar9 + 1;
          *(ulonglong *)(TStack_90.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(uStackX_24,uStackX_20);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(FStack_60.OwningChannel)->KeyDeletedEvent,FStack_60.OwningChannel,&TStack_90
                     );
          if (TStack_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_90.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt(FStack_60.Times,uVar14,No);
        TArray<FText,TSizedDefaultAllocator<32>_>::RemoveAt(pTStack_48,uVar14,No);
        if (FStack_60.KeyHandles != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle(FStack_60.KeyHandles,uVar14);
        }
        FVar5.SubFrame = 0.0;
        FVar5.FrameNumber.Value = FVar1.Value;
        pFVar11 = Evaluate(this,FVar5);
        if ((pFVar11 == (FText *)0x0) ||
           (bVar7 = FText::EqualTo(&FStack_70,pFVar11,Default), !bVar7)) {
          iVar9 = FMovieSceneChannelData::AddKeyInternal(&FStack_60,FVar1);
          TArray<FText,TSizedDefaultAllocator<32>_>::Insert(pTStack_48,&FStack_70,iVar9);
          if ((FStack_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
             (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 &(FStack_60.OwningChannel)->KeyAddedEvent), bVar7)) {
            TStack_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_80.ArrayNum = 0;
            TStack_80.ArrayMax = 0;
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&TStack_80.AllocatorInstance,&TStack_80.ArrayMax);
            TStack_80.ArrayNum = iVar10 + 1;
            *(ulonglong *)(TStack_80.AllocatorInstance.Data + (longlong)iVar10 * 8) =
                 CONCAT44(FVar1.Value,iVar9);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&(FStack_60.OwningChannel)->KeyAddedEvent,FStack_60.OwningChannel,&TStack_80
                       );
            if (TStack_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TStack_80.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar14 = uVar14 - 1;
          lVar18 = lVar18 + -1;
          lVar17 = lVar17 + -0x10;
        }
        if (FStack_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_70.TextData.Reference + 0x10))();
        }
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar18 < (int)uVar15);
    }
  }
  return;
}

// ClearDefault @ 1465905f0

void __thiscall FMovieSceneTextChannel::ClearDefault(FMovieSceneTextChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// FMovieSceneTextChannel @ 146611380

FMovieSceneTextChannel * __thiscall
FMovieSceneTextChannel::FMovieSceneTextChannel(FMovieSceneTextChannel *this)

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
  this->_padding_ = (longlong)&___7FMovieSceneTextChannel__6B_;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = 0;
  (this->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  FText::FText(&this->DefaultValue);
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

// ~FMovieSceneTextChannel @ 146620f60

void __thiscall FMovieSceneTextChannel::~FMovieSceneTextChannel(FMovieSceneTextChannel *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
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
  pIVar2 = (this->DefaultValue).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FText,int>((FText *)(this->Values).AllocatorInstance.Data,(this->Values).ArrayNum);
  pFVar3 = (this->Values).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Times).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this);
  return;
}

// Evaluate @ 146668c60

FText * __thiscall FMovieSceneTextChannel::Evaluate(FMovieSceneTextChannel *this,FFrameTime param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FText *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (this->Times).ArrayNum;
  if (uVar6 == 0) {
    pFVar5 = &this->DefaultValue;
    if (this->bHasDefaultValue == false) {
      pFVar5 = (FText *)0x0;
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
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  return (FText *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
}

