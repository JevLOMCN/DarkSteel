// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 18

// StaticStruct @ 1460650a0

UScriptStruct * __cdecl FMovieSceneAudioTriggerChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioTriggerChannel,(UObject *)pUVar1,
                         L"MovieSceneAudioTriggerChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneAudioTriggerChannel.OuterSingleton;
}

// GetKeys @ 146065180

void __thiscall
FMovieSceneAudioTriggerChannel::GetKeys
          (FMovieSceneAudioTriggerChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 146065220

void __thiscall
FMovieSceneAudioTriggerChannel::GetKeyTimes
          (FMovieSceneAudioTriggerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// SetKeyTimes @ 1460652c0

void __thiscall
FMovieSceneAudioTriggerChannel::SetKeyTimes
          (FMovieSceneAudioTriggerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<bool> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<bool>::SetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

// DuplicateKeys @ 146065360

void __thiscall
FMovieSceneAudioTriggerChannel::DuplicateKeys
          (FMovieSceneAudioTriggerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<bool> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<bool>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 146065400

void __thiscall
FMovieSceneAudioTriggerChannel::DeleteKeys
          (FMovieSceneAudioTriggerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<bool> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<bool>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 146065480

void __thiscall
FMovieSceneAudioTriggerChannel::DeleteKeysFrom
          (FMovieSceneAudioTriggerChannel *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<bool> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<bool>::DeleteKeysFrom(&local_28,param_1,param_2);
  return;
}

// RemapTimes @ 146065510

void __thiscall
FMovieSceneAudioTriggerChannel::RemapTimes
          (FMovieSceneAudioTriggerChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<bool> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<bool>::RemapTimes(&local_28,param_1);
  return;
}

// ComputeEffectiveRange @ 146065590

TRange<FFrameNumber> * __thiscall
FMovieSceneAudioTriggerChannel::ComputeEffectiveRange
          (FMovieSceneAudioTriggerChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TRange<FFrameNumber> *pTVar3;
  TMovieSceneChannelData<bool_const_> local_18;
  
  local_18.Times = &this->Times;
  local_18.Values = &this->Values;
  if ((local_18.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_18.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRange<FFrameNumber> *)(*pcVar1)();
      return pTVar3;
    }
  }
  TMovieSceneChannelData<bool_const_>::GetTotalRange(&local_18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNumKeys @ 146065600

int __thiscall FMovieSceneAudioTriggerChannel::GetNumKeys(FMovieSceneAudioTriggerChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 146065610

void __thiscall FMovieSceneAudioTriggerChannel::Reset(FMovieSceneAudioTriggerChannel *this)

{
  (this->Times).ArrayNum = 0;
  if ((this->Times).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Times).AllocatorInstance,0,&(this->Times).ArrayMax);
  }
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Values).AllocatorInstance,0,&(this->Values).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return;
}

// Offset @ 1460656a0

void __thiscall
FMovieSceneAudioTriggerChannel::Offset(FMovieSceneAudioTriggerChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_28.Times = &this->Times;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// Optimize @ 146065720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneAudioTriggerChannel::Optimize
          (FMovieSceneAudioTriggerChannel *this,FKeyDataOptimizationParams *param_1)

{
  FScriptContainerElement FVar1;
  FFrameNumber FVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  TRangeBound<FFrameNumber> TVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_68;
  TMovieSceneChannelData<bool> TStack_58;
  
  TStack_58._padding_ = (longlong)&this->Times;
  TStack_58._padding_ = (longlong)&this->KeyHandles;
  TStack_58.Values = &this->Values;
  TStack_58._padding_ = (longlong)this;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (TStack_58.Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)(TStack_58._padding_ + 8) < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (1 < *(int *)(TStack_58._padding_ + 8)) {
    uVar14 = *(int *)(TStack_58._padding_ + 8);
    pFVar4 = ((ForAnyElementType *)TStack_58._padding_)->Data;
    if (((int)uVar14 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar5 = (param_1->Range).LowerBound;
    uVar9 = 0;
    uVar13 = uVar9;
    if ((TVar5.Type.Value.Value != '\x02') &&
       (uVar12 = uVar14, uVar11 = uVar9, uVar13 = 0, 0 < (int)uVar14)) {
      do {
        uVar15 = uVar12 >> 1;
        uVar13 = uVar11;
        if (*(int *)(pFVar4 + (longlong)(int)(uVar15 + uVar11) * 4) < TVar5.Value.Value.Value) {
          uVar13 = uVar15 + uVar11 + (uVar12 & 1);
        }
        uVar12 = uVar15;
        uVar11 = uVar13;
      } while (uVar15 != 0);
    }
    TVar5 = (param_1->Range).UpperBound;
    if ((TVar5.Type.Value.Value != '\x02') &&
       (bVar8 = 0 < (int)uVar14, uVar12 = uVar14, uVar14 = 0, bVar8)) {
      do {
        uVar11 = uVar12 >> 1;
        uVar14 = uVar9;
        if (*(int *)(pFVar4 + (longlong)(int)(uVar11 + uVar9) * 4) <= TVar5.Value.Value.Value) {
          uVar14 = uVar11 + uVar9 + (uVar12 & 1);
        }
        uVar12 = uVar11;
        uVar9 = uVar14;
      } while (uVar11 != 0);
    }
    for (lVar16 = (longlong)(int)uVar13; lVar16 < (int)uVar14; lVar16 = lVar16 + 1) {
      iVar10 = ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_)->ArrayNum;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (iVar10 <= (int)uVar13) {
        return;
      }
      iVar10 = *(int *)(TStack_58._padding_ + 8);
      pFVar4 = ((ForAnyElementType *)TStack_58._padding_)->Data;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2.Value = *(int *)(pFVar4 + lVar16 * 4);
      iVar10 = (TStack_58.Values)->ArrayNum;
      pFVar4 = ((TStack_58.Values)->AllocatorInstance).Data;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar1 = pFVar4[lVar16];
      if ((((int)uVar13 < 0) || (*(int *)(TStack_58._padding_ + 8) <= (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times->IsValidIndex(KeyIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x1fc,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((FMovieSceneAudioTriggerChannel *)TStack_58._padding_ !=
           (FMovieSceneAudioTriggerChannel *)0x0) &&
         (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             (TStack_58._padding_ + 0x28)), lVar7 = TStack_58._padding_, bVar8)) {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(TStack_58._padding_ + 8)) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)(((ForAnyElementType *)lVar7)->Data + lVar16 * 4);
        TStack_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_68.ArrayNum = 0;
        TStack_68.ArrayMax = 0;
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&TStack_68.AllocatorInstance,&TStack_68.ArrayMax);
        TStack_68.ArrayNum = iVar10 + 1;
        *(ulonglong *)(TStack_68.AllocatorInstance.Data + (longlong)iVar10 * 8) =
             CONCAT44(uVar3,uVar13);
        TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                     *)(TStack_58._padding_ + 0x28),(FMovieSceneChannel *)TStack_58._padding_,
                    &TStack_68);
        if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_68.AllocatorInstance.Data);
        }
      }
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_,uVar13,No);
      TArray<bool,TSizedDefaultAllocator<32>_>::RemoveAt(TStack_58.Values,uVar13,No);
      if ((FKeyHandleLookupTable *)TStack_58._padding_ != (FKeyHandleLookupTable *)0x0) {
        FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)TStack_58._padding_,uVar13)
        ;
      }
      TMovieSceneChannelData<bool>::AddKey(&TStack_58,FVar2,(bool)FVar1);
      uVar13 = uVar13 + 1;
    }
  }
  return;
}

// GetHandle @ 146065730

FKeyHandle __thiscall
FMovieSceneAudioTriggerChannel::GetHandle(FMovieSceneAudioTriggerChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetIndex @ 1460657c0

int __thiscall
FMovieSceneAudioTriggerChannel::GetIndex(FMovieSceneAudioTriggerChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  if ((this == (FMovieSceneAudioTriggerChannel *)0xffffffffffffff98) ||
     (this == (FMovieSceneAudioTriggerChannel *)0xffffffffffffff88)) {
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
  if (&this->KeyHandles == (FMovieSceneKeyHandleMap *)0x0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
    return -1;
  }
  iVar3 = FKeyHandleLookupTable::GetIndex((FKeyHandleLookupTable *)&this->KeyHandles,param_1);
  return iVar3;
}

// FMovieSceneAudioTriggerChannel @ 146093010

FMovieSceneAudioTriggerChannel * __thiscall
FMovieSceneAudioTriggerChannel::FMovieSceneAudioTriggerChannel(FMovieSceneAudioTriggerChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneAudioTriggerChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = 0;
  (this->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
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

// ~FMovieSceneAudioTriggerChannel @ 1460977a0

void __thiscall
FMovieSceneAudioTriggerChannel::~FMovieSceneAudioTriggerChannel
          (FMovieSceneAudioTriggerChannel *this)

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

// EvaluatePossibleTriggers @ 1460c4290

bool __thiscall
FMovieSceneAudioTriggerChannel::EvaluatePossibleTriggers
          (FMovieSceneAudioTriggerChannel *this,FMovieSceneContext *param_1,
          FMoveSceneAudioTriggerState *param_2,bool *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  FFrameTime FVar5;
  code *pcVar6;
  FFrameTime FVar7;
  bool bVar8;
  undefined1 uVar9;
  FFrameNumber FVar10;
  FFrameNumber FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float fStackX_c;
  float fStackX_14;
  FFrameTime local_30;
  
  local_30.FrameNumber.Value = *(uint *)((longlong)&param_1->_padding_ + 4);
  plVar1 = &param_1->_padding_;
  if (local_30.FrameNumber.Value == 0x80000000) {
    if ((int)*plVar1 == 0) {
      param_1 = (FMovieSceneContext *)((longlong)&param_1->_padding_ + 4);
      cVar3 = (char)param_1->_padding_;
    }
    else {
      cVar3 = (char)param_1->_padding_;
    }
    if ((cVar3 == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    local_30 = *(FFrameTime *)((longlong)&param_1->_padding_ + 4);
    FVar11.Value = local_30.FrameNumber.Value;
  }
  else {
    local_30.SubFrame = 0.0;
    FVar11.Value = local_30.FrameNumber.Value;
  }
  FVar7 = local_30;
  if ((this->Times).ArrayNum == 0) {
    return false;
  }
  bVar8 = (param_2->PreviousUpdateTime).bIsSet;
  if (bVar8 == false) {
LAB_1460c4349:
    if ((int)*plVar1 != 1) goto LAB_1460c4361;
  }
  else {
    FVar5 = (param_2->PreviousUpdateTime).TypedValue;
    FVar10 = FVar5.FrameNumber.Value;
    if (FVar10.Value <= FVar11.Value) {
      if (FVar10.Value == FVar11.Value) {
        fStackX_c = FVar5.SubFrame;
        fStackX_14 = local_30.SubFrame;
        if (fStackX_14 < fStackX_c) goto LAB_1460c434f;
      }
      goto LAB_1460c4349;
    }
  }
LAB_1460c434f:
  if ((param_2->PreviousIndex).bIsSet != false) {
    (param_2->PreviousIndex).bIsSet = false;
  }
  if (bVar8 != false) {
    (param_2->PreviousUpdateTime).bIsSet = false;
  }
LAB_1460c4361:
  if ((int)*plVar1 == 0) {
    uVar4 = (this->Times).ArrayNum;
    iVar12 = 0;
    uVar13 = uVar4;
    if (0 < (int)uVar4) {
      do {
        iVar2 = (uVar13 >> 1) + iVar12;
        if (*(int *)((this->Times).AllocatorInstance.Data + (longlong)iVar2 * 4) <= FVar11.Value) {
          iVar12 = iVar2 + (uVar13 & 1);
        }
        uVar14 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar14 != 0);
    }
    uVar13 = iVar12 - 1;
    if ((int)uVar13 < 0) {
      uVar13 = 0;
    }
    if ((-1 < (int)uVar13) && ((int)uVar13 < (this->Times).ArrayNum)) {
      uVar14 = 0;
      if ((int)uVar13 < (int)uVar4) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)((this->Times).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) < FVar11.Value)
      {
        if ((param_2->PreviousIndex).bIsSet == false) {
          bVar8 = true;
        }
        else {
          bVar8 = (param_2->PreviousIndex).TypedValue < (int)uVar13;
        }
        *param_3 = bVar8;
        if ((FMoveSceneAudioTriggerState *)&stack0xffffffffffffffc8 != param_2) {
          (param_2->PreviousIndex).TypedValue = uVar13;
          (param_2->PreviousIndex).bIsSet = true;
        }
        if ((TOptional<FFrameTime> *)&local_30 != &param_2->PreviousUpdateTime) {
          (param_2->PreviousUpdateTime).TypedValue = FVar7;
          (param_2->PreviousUpdateTime).bIsSet = true;
        }
        return true;
      }
    }
  }
  return false;
}

