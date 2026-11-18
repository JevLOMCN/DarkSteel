// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 22

// StaticStruct @ 1460601f0

UScriptStruct * __cdecl FMovieSceneBoolChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBoolChannel,(UObject *)pUVar1,
                         L"MovieSceneBoolChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBoolChannel.OuterSingleton;
}

// GetData @ 146060230

TMovieSceneChannelData<bool> * __thiscall
FMovieSceneBoolChannel::GetData
          (FMovieSceneBoolChannel *this,TMovieSceneChannelData<bool> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<bool> *pTVar3;
  
  __return_storage_ptr__->_padding_ = (longlong)this;
  __return_storage_ptr__->_padding_ = (longlong)&this->Times;
  __return_storage_ptr__->_padding_ = (longlong)&this->KeyHandles;
  __return_storage_ptr__->Values = &this->Values;
  if ((&this->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (&this->Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMovieSceneChannelData<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetData @ 1460602a0

TMovieSceneChannelData<bool_const_> * __thiscall
FMovieSceneBoolChannel::GetData
          (FMovieSceneBoolChannel *this,TMovieSceneChannelData<bool_const_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<bool_const_> *pTVar3;
  
  __return_storage_ptr__->Times = &this->Times;
  __return_storage_ptr__->Values = &this->Values;
  if ((&this->Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (&this->Values == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMovieSceneChannelData<bool_const_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// Evaluate @ 146060300

bool __thiscall
FMovieSceneBoolChannel::Evaluate(FMovieSceneBoolChannel *this,FFrameTime param_1,bool *param_2)

{
  uchar uVar1;
  int iVar2;
  FFrameNumber FVar3;
  FFrameNumber FVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  FFrameNumber FVar11;
  uint uVar12;
  uint uVar13;
  float fStackX_24;
  FCycleParams local_58;
  
  iVar2 = (this->Times).ArrayNum;
  if (iVar2 == 0) {
    if (this->bHasDefaultValue == false) {
      return false;
    }
    *param_2 = this->DefaultValue;
    return true;
  }
  if ((iVar2 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar2 = (this->Times).ArrayNum;
  uVar10 = iVar2 - 1;
  FVar3.Value = *(int *)(this->Times).AllocatorInstance.Data;
  uVar9 = 0;
  uVar13 = uVar9;
  if ((int)uVar10 < iVar2) {
    uVar13 = ~uVar10 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  FVar4.Value = *(int *)((this->Times).AllocatorInstance.Data +
                        (longlong)(this->Times).ArrayNum * 4 + -4);
  FVar11 = param_1.FrameNumber.Value;
  fStackX_24 = param_1.SubFrame;
  if ((FVar11.Value < FVar3.Value) || ((FVar11.Value == FVar3.Value && (fStackX_24 < 0.0)))) {
    uVar1 = (this->PreInfinityExtrap).Value;
    if (uVar1 == '\x05') {
      return false;
    }
    if ((byte)(uVar1 - 3) < 2) {
      if (((this->Values).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      *param_2 = (bool)*(this->Values).AllocatorInstance.Data;
      return true;
    }
  }
  else if ((FVar4.Value < FVar11.Value) || ((FVar11.Value == FVar4.Value && (0.0 < fStackX_24)))) {
    uVar1 = (this->PostInfinityExtrap).Value;
    if (uVar1 == '\x05') {
      return false;
    }
    if ((byte)(uVar1 - 3) < 2) {
      iVar2 = (this->Values).ArrayNum;
      uVar13 = iVar2 - 1;
      if ((int)uVar13 < iVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      *param_2 = (bool)(this->Values).AllocatorInstance.Data[(longlong)(this->Values).ArrayNum + -1]
      ;
      return true;
    }
  }
  UE::MovieScene::CycleTime(&local_58,FVar3,FVar4,param_1);
  if ((FVar11.Value < FVar3.Value) || ((FVar11.Value == FVar3.Value && (fStackX_24 < 0.0)))) {
    uVar1 = (this->PreInfinityExtrap).Value;
  }
  else {
    if ((FVar11.Value <= FVar4.Value) && ((FVar11.Value != FVar4.Value || (fStackX_24 <= 0.0))))
    goto LAB_14606050d;
    uVar1 = (this->PostInfinityExtrap).Value;
  }
  if (uVar1 == '\x02') {
    UE::MovieScene::FCycleParams::Oscillate(&local_58,FVar3.Value,FVar4.Value);
  }
LAB_14606050d:
  uVar13 = (this->Times).ArrayNum;
  uVar10 = uVar9;
  if (0 < (int)uVar13) {
    fStackX_24 = local_58.Time.SubFrame;
    do {
      iVar2 = (uVar13 >> 1) + uVar10;
      iVar5 = *(int *)((this->Times).AllocatorInstance.Data + (longlong)iVar2 * 4);
      if ((local_58.Time.FrameNumber.Value.Value < iVar5) ||
         ((uVar12 = uVar9, local_58.Time.FrameNumber.Value.Value == iVar5 && (fStackX_24 < 0.0)))) {
        uVar12 = 1;
      }
      if (uVar12 == 0) {
        uVar10 = iVar2 + (uVar13 & 1);
      }
      uVar12 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar12 != 0);
  }
  uVar13 = uVar10 - 1;
  if ((int)(uVar10 - 1) < 0) {
    uVar13 = 0;
  }
  uVar9 = 0;
  if ((int)uVar13 < (this->Values).ArrayNum) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  *param_2 = (bool)(this->Values).AllocatorInstance.Data[(int)uVar13];
  return true;
}

// GetKeys @ 146060690

void __thiscall
FMovieSceneBoolChannel::GetKeys
          (FMovieSceneBoolChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  FMovieSceneChannelData *this_00;
  undefined1 local_28 [32];
  
  this_00 = (FMovieSceneChannelData *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  FMovieSceneChannelData::GetKeys(this_00,param_1,param_2,param_3);
  return;
}

// GetKeyTimes @ 1460606e0

void __thiscall
FMovieSceneBoolChannel::GetKeyTimes
          (FMovieSceneBoolChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  FMovieSceneChannelData *this_00;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  undefined1 local_28 [32];
  
  this_00 = (FMovieSceneChannelData *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FMovieSceneChannelData::GetKeyTimes(this_00,&local_38,&local_48);
  return;
}

// SetKeyTimes @ 146060740

void __thiscall
FMovieSceneBoolChannel::SetKeyTimes
          (FMovieSceneBoolChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  TMovieSceneChannelData<bool> *this_00;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  undefined1 local_28 [32];
  
  this_00 = (TMovieSceneChannelData<bool> *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<bool>::SetKeyTimes(this_00,&local_38,&local_48);
  return;
}

// DuplicateKeys @ 1460607a0

void __thiscall
FMovieSceneBoolChannel::DuplicateKeys
          (FMovieSceneBoolChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  TMovieSceneChannelData<bool> *this_00;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  undefined1 local_28 [32];
  
  this_00 = (TMovieSceneChannelData<bool> *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<bool>::DuplicateKeys(this_00,&local_38,&local_48);
  return;
}

// DeleteKeys @ 146060800

void __thiscall
FMovieSceneBoolChannel::DeleteKeys
          (FMovieSceneBoolChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  TMovieSceneChannelData<bool> *this_00;
  TArrayView<FKeyHandle_const_,int> local_38;
  undefined1 local_28 [32];
  
  this_00 = (TMovieSceneChannelData<bool> *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<bool>::DeleteKeys(this_00,&local_38);
  return;
}

// DeleteKeysFrom @ 146060840

void __thiscall
FMovieSceneBoolChannel::DeleteKeysFrom
          (FMovieSceneBoolChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  FScriptContainerElement FVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  TMovieSceneChannelData<bool> *pTVar8;
  uint uVar9;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_a0 [4];
  FKeyHandle local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x98))(this,local_98);
  if (*(int *)(*plVar7 + 8) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < *(int *)(*plVar7 + 8)) {
    local_res8[0] = (FScriptContainerElement)0x0;
    cVar5 = (**(code **)(this->_padding_ + 0xa0))(this,param_1.Value,local_res8);
    if (cVar5 != '\0') {
      pTVar8 = (TMovieSceneChannelData<bool> *)(**(code **)(this->_padding_ + 0x98))(this,local_78);
      FVar3 = local_res8[0];
      uVar6 = FMovieSceneChannelData::FindKey
                        ((FMovieSceneChannelData *)pTVar8,param_1,(FFrameNumber)0x0);
      if (uVar6 == 0xffffffff) {
        uVar6 = TMovieSceneChannelData<bool>::AddKey(pTVar8,param_1,(bool)FVar3);
      }
      else {
        pTVar1 = pTVar8->Values;
        uVar9 = 0;
        if ((int)uVar6 < pTVar1->ArrayNum) {
          uVar9 = ~uVar6 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (pTVar1->AllocatorInstance).Data[(int)uVar6] = FVar3;
      }
      if ((((int)uVar6 < 0) || (*(int *)(pTVar8->_padding_ + 8) <= (int)uVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times->IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                             ,0x69,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (pTVar8->_padding_ == 0) {
        `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((FKeyHandleLookupTable *)pTVar8->_padding_ == (FKeyHandleLookupTable *)0x0) {
        FKeyHandle::FKeyHandle(&local_9c);
      }
      else {
        FKeyHandleLookupTable::FindOrAddKeyHandle
                  ((FKeyHandleLookupTable *)pTVar8->_padding_,(int)local_a0);
      }
    }
  }
  pTVar8 = (TMovieSceneChannelData<bool> *)(**(code **)(this->_padding_ + 0x98))(this,local_58);
  TMovieSceneChannelData<bool>::DeleteKeysFrom(pTVar8,param_1,param_2);
  return;
}

// RemapTimes @ 146060a60

void __thiscall
FMovieSceneBoolChannel::RemapTimes(FMovieSceneBoolChannel *this,IRetimingInterface *param_1)

{
  TMovieSceneChannelData<bool> *this_00;
  undefined1 local_28 [32];
  
  this_00 = (TMovieSceneChannelData<bool> *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  TMovieSceneChannelData<bool>::RemapTimes(this_00,param_1);
  return;
}

// ComputeEffectiveRange @ 146060a90

TRange<FFrameNumber> * __thiscall
FMovieSceneBoolChannel::ComputeEffectiveRange
          (FMovieSceneBoolChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TMovieSceneChannelData<bool_const_> *this_00;
  undefined1 local_18 [16];
  
  this_00 = (TMovieSceneChannelData<bool_const_> *)
            (**(code **)(this->_padding_ + 0x90))(this,local_18);
  TMovieSceneChannelData<bool_const_>::GetTotalRange(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNumKeys @ 146060ad0

int __thiscall FMovieSceneBoolChannel::GetNumKeys(FMovieSceneBoolChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 146060ae0

void __thiscall FMovieSceneBoolChannel::Reset(FMovieSceneBoolChannel *this)

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
  this->bHasDefaultValue = false;
  return;
}

// Offset @ 146060b70

void __thiscall FMovieSceneBoolChannel::Offset(FMovieSceneBoolChannel *this,FFrameNumber param_1)

{
  FMovieSceneChannelData *this_00;
  undefined1 local_28 [32];
  
  this_00 = (FMovieSceneChannelData *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  FMovieSceneChannelData::Offset(this_00,param_1);
  return;
}

// Optimize @ 146060ba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneBoolChannel::Optimize(FMovieSceneBoolChannel *this,FKeyDataOptimizationParams *param_1)

{
  FScriptContainerElement FVar1;
  FFrameNumber FVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  TRangeBound<FFrameNumber> TVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_68;
  TMovieSceneChannelData<bool> TStack_58;
  
  (**(code **)(this->_padding_ + 0x98))(this,&TStack_58);
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
    uVar15 = *(int *)(TStack_58._padding_ + 8);
    pFVar4 = ((ForAnyElementType *)TStack_58._padding_)->Data;
    if (((int)uVar15 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar5 = (param_1->Range).LowerBound;
    uVar10 = 0;
    uVar14 = uVar10;
    if ((TVar5.Type.Value.Value != '\x02') &&
       (uVar17 = uVar15, uVar12 = uVar10, uVar14 = 0, 0 < (int)uVar15)) {
      do {
        uVar16 = uVar17 >> 1;
        uVar14 = uVar12;
        if (*(int *)(pFVar4 + (longlong)(int)(uVar16 + uVar12) * 4) < TVar5.Value.Value.Value) {
          uVar14 = uVar16 + uVar12 + (uVar17 & 1);
        }
        uVar17 = uVar16;
        uVar12 = uVar14;
      } while (uVar16 != 0);
    }
    TVar5 = (param_1->Range).UpperBound;
    if ((TVar5.Type.Value.Value != '\x02') &&
       (bVar8 = 0 < (int)uVar15, uVar17 = uVar15, uVar15 = 0, bVar8)) {
      do {
        uVar12 = uVar17 >> 1;
        uVar15 = uVar10;
        if (*(int *)(pFVar4 + (longlong)(int)(uVar12 + uVar10) * 4) <= TVar5.Value.Value.Value) {
          uVar15 = uVar12 + uVar10 + (uVar17 & 1);
        }
        uVar17 = uVar12;
        uVar10 = uVar15;
      } while (uVar12 != 0);
    }
    for (lVar13 = (longlong)(int)uVar14; lVar13 < (int)uVar15; lVar13 = lVar13 + 1) {
      iVar11 = ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_)->ArrayNum;
      if ((iVar11 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (iVar11 <= (int)uVar14) {
        return;
      }
      iVar11 = *(int *)(TStack_58._padding_ + 8);
      pFVar4 = ((ForAnyElementType *)TStack_58._padding_)->Data;
      if ((iVar11 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = ~uVar14 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar14 < iVar11) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2.Value = *(int *)(pFVar4 + lVar13 * 4);
      iVar11 = (TStack_58.Values)->ArrayNum;
      pFVar4 = ((TStack_58.Values)->AllocatorInstance).Data;
      if ((iVar11 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar14 < iVar11) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar1 = pFVar4[lVar13];
      if ((((int)uVar14 < 0) || (*(int *)(TStack_58._padding_ + 8) <= (int)uVar14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times->IsValidIndex(KeyIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x1fc,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((FMovieSceneChannel *)TStack_58._padding_ != (FMovieSceneChannel *)0x0) &&
         (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             (TStack_58._padding_ + 0x28)), lVar7 = TStack_58._padding_, bVar8)) {
        uVar10 = 0;
        if ((int)uVar14 < *(int *)(TStack_58._padding_ + 8)) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)(((ForAnyElementType *)lVar7)->Data + lVar13 * 4);
        TStack_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_68.ArrayNum = 0;
        TStack_68.ArrayMax = 0;
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&TStack_68.AllocatorInstance,&TStack_68.ArrayMax);
        TStack_68.ArrayNum = iVar11 + 1;
        *(ulonglong *)(TStack_68.AllocatorInstance.Data + (longlong)iVar11 * 8) =
             CONCAT44(uVar3,uVar14);
        TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                     *)(TStack_58._padding_ + 0x28),(FMovieSceneChannel *)TStack_58._padding_,
                    &TStack_68);
        if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_68.AllocatorInstance.Data);
        }
      }
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_,uVar14,No);
      TArray<bool,TSizedDefaultAllocator<32>_>::RemoveAt(TStack_58.Values,uVar14,No);
      if ((FKeyHandleLookupTable *)TStack_58._padding_ != (FKeyHandleLookupTable *)0x0) {
        FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)TStack_58._padding_,uVar14)
        ;
      }
      cVar9 = (**(code **)(this->_padding_ + 0xa0))(this,FVar2.Value);
      if ((cVar9 == '\0') || (FVar1 != (FScriptContainerElement)0x0)) {
        TMovieSceneChannelData<bool>::AddKey(&TStack_58,FVar2,(bool)FVar1);
      }
      else {
        uVar14 = uVar14 - 1;
        lVar13 = lVar13 + -1;
      }
      uVar14 = uVar14 + 1;
    }
  }
  return;
}

// ClearDefault @ 146060bb0

void __thiscall FMovieSceneBoolChannel::ClearDefault(FMovieSceneBoolChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// GetHandle @ 146060bc0

FKeyHandle __thiscall FMovieSceneBoolChannel::GetHandle(FMovieSceneBoolChannel *this,int param_1)

{
  FMovieSceneChannelData *this_00;
  undefined1 local_28 [32];
  
  this_00 = (FMovieSceneChannelData *)(**(code **)(this->_padding_ + 0x98))(this,local_28);
  FMovieSceneChannelData::GetHandle(this_00,param_1);
  return (FKeyHandle)param_1;
}

// GetIndex @ 146060c00

int __thiscall FMovieSceneBoolChannel::GetIndex(FMovieSceneBoolChannel *this,FKeyHandle param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_28 [32];
  
  lVar2 = (**(code **)(this->_padding_ + 0x98))(this,local_28);
  if (*(longlong *)(lVar2 + 8) == 0) {
    `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (*(FKeyHandleLookupTable **)(lVar2 + 8) != (FKeyHandleLookupTable *)0x0) {
    iVar1 = FKeyHandleLookupTable::GetIndex(*(FKeyHandleLookupTable **)(lVar2 + 8),param_1);
    return iVar1;
  }
  return -1;
}

// FMovieSceneBoolChannel @ 1460930f0

FMovieSceneBoolChannel * __thiscall
FMovieSceneBoolChannel::FMovieSceneBoolChannel(FMovieSceneBoolChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneBoolChannel__6B_;
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
  this->DefaultValue = false;
  this->bHasDefaultValue = false;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->PreInfinityExtrap = '\x04';
  this->PostInfinityExtrap = '\x04';
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

// ~FMovieSceneBoolChannel @ 146097820

void __thiscall FMovieSceneBoolChannel::~FMovieSceneBoolChannel(FMovieSceneBoolChannel *this)

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

// SerializeFromMismatchedTag @ 1460f4970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMovieSceneBoolChannel::SerializeFromMismatchedTag
          (FMovieSceneBoolChannel *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  TArray<FIntegralKey,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  UScriptStruct *this_01;
  uint uVar13;
  longlong lVar14;
  ulong64 uVar15;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_02;
  double in_XMM2_Qa;
  undefined1 auStackY_138 [32];
  FScriptContainerElement local_108 [8];
  FFrameNumber local_100 [2];
  int local_f8;
  FPropertyTypeName local_f4;
  undefined1 local_f0 [8];
  TIndexedContainerIterator<TArray<FIntegralKey,TSizedDefaultAllocator<32>_>_const_,FIntegralKey_const_,int>
  local_e8;
  longlong local_d8;
  undefined1 local_c8 [40];
  void *local_a0;
  undefined8 local_98;
  longlong lStack_90;
  void *local_80;
  undefined4 local_78;
  void *local_70;
  longlong local_68;
  ForAnyElementType local_60;
  ulonglong local_58;
  int local_50;
  bool local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&IntegralCurveName,"IntegralCurve");
    _Init_thread_footer(&::_TSS0);
  }
  local_f4.Index = (param_1->TypeName).Index;
  bVar7 = UE::FPropertyTypeName::IsStruct(&local_f4,IntegralCurveName);
  if (!bVar7) {
    return false;
  }
  local_98 = ___xmm_00000000ffffffff0000008000000000;
  lStack_90 = _UNK_150631d98;
  local_c8._8_8_ = (void *)0x0;
  local_c8._16_8_ = 0;
  local_a0 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_c8._0_8_ = &___7FIntegralCurve__6B_;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_4c = false;
  local_50 = 0x7fffffff;
  this_01 = FIntegralCurve::StaticStruct();
  UScriptStruct::SerializeItem(this_01,param_2,local_c8,(void *)0x0);
  if (local_50 != 0x7fffffff) {
    this->bHasDefaultValue = true;
    this->DefaultValue = local_50 != 0;
  }
  uVar15 = local_58 & 0xffffffff;
  this_00 = &this->Times;
  if ((int)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  piVar1 = &(this->Times).ArrayMax;
  if ((this->Times).ArrayMax < (int)local_58) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_58,&this_00->AllocatorInstance,(this->Times).ArrayNum,piVar1);
    uVar15 = local_58 & 0xffffffff;
  }
  this_02 = &this->Values;
  iVar12 = (int)uVar15;
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  piVar2 = &(this->Values).ArrayMax;
  if (*piVar2 < iVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar12,&this_02->AllocatorInstance,(this->Values).ArrayNum,piVar2);
  }
  GetLegacyConversionFrameRate();
  local_f8 = 0;
  FIntegralCurve::GetKeyIterator((FIntegralCurve *)local_c8,&local_e8);
  local_d8 = 0;
  iVar12 = 0;
LAB_1460f4b20:
  do {
    if ((local_e8.Index < 0) || ((local_e8.Container)->ArrayNum <= local_e8.Index)) {
      local_c8._0_8_ = &___7FIntegralCurve__6B_;
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      local_c8._0_8_ = &___7FIndexedCurve__6B_;
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      local_78 = 0;
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      iVar12 = SUB84(local_c8._16_8_,4);
      local_c8._16_8_ = local_c8._16_8_ & 0xffffffff00000000;
      if (iVar12 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)(local_c8 + 8),0,(int *)(local_c8 + 0x14));
      }
      uVar13 = local_98._4_4_;
      lStack_90 = 0xffffffff;
      local_98 = (ulonglong)local_98._4_4_ << 0x20;
      if (0x80 < uVar13) {
        local_98 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x18),0);
      }
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      if ((void *)local_c8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
      return true;
    }
    uVar13 = 0;
    if (local_e8.Index < (local_e8.Container)->ArrayNum) {
      uVar13 = (uint)~local_e8.Index >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    UpgradeLegacyMovieSceneTime((UObject *)local_f0,(FFrameRate)0x0,in_XMM2_Qa);
    pTVar5 = local_e8.Container;
    lVar14 = (longlong)local_e8.Index;
    uVar13 = 0;
    if (local_e8.Index < (local_e8.Container)->ArrayNum) {
      uVar13 = (uint)~local_e8.Index >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    lVar6 = local_d8;
    iVar4 = local_f8;
    iVar10 = (this->Times).ArrayNum;
    local_108[0] = (FScriptContainerElement)
                   (*(int *)((pTVar5->AllocatorInstance).Data + lVar14 * 8 + 4) != 0);
    iVar9 = local_f8 + 1;
    lVar14 = local_d8 + 1;
    local_100[0].Value = local_f0._0_4_;
    if (local_d8 < 1) {
      local_f8 = iVar9;
      local_d8 = lVar14;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_00->AllocatorInstance,piVar1);
      }
LAB_1460f4d96:
      (this->Times).ArrayNum = iVar10 + 1;
      *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_100[0].Value;
      iVar12 = (this->Values).ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&this_02->AllocatorInstance,piVar2);
      }
      (this->Values).ArrayNum = iVar12 + 1;
      (this_02->AllocatorInstance).Data[iVar12] = local_108[0];
      local_e8.Index = local_e8.Index + 1;
      iVar12 = local_f8;
      goto LAB_1460f4b20;
    }
    uVar13 = 0;
    if (local_f8 + -1 < iVar10) {
      uVar13 = (uint)-iVar12 >> 0x1f;
    }
    local_f8 = iVar9;
    local_d8 = lVar14;
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    if (*(int *)((this_00->AllocatorInstance).Data + lVar6 * 4 + -4) <= local_100[0].Value) {
      iVar10 = (this->Times).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_00->AllocatorInstance,piVar1);
      }
      goto LAB_1460f4d96;
    }
    uVar13 = iVar4 - 2;
    if (-1 < (int)uVar13) {
      lVar14 = lVar6 * 4 + -8;
      do {
        uVar11 = 0;
        if ((int)uVar13 < (this->Times).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        if (*(int *)((this_00->AllocatorInstance).Data + lVar14) <= local_100[0].Value) {
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_100,uVar13 + 1);
          TArray<bool,TSizedDefaultAllocator<32>_>::Insert(this_02,(bool *)local_108,uVar13 + 1);
          local_e8.Index = local_e8.Index + 1;
          iVar12 = local_f8;
          goto LAB_1460f4b20;
        }
        lVar14 = lVar14 + -4;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_100,0);
    TArray<bool,TSizedDefaultAllocator<32>_>::Insert(this_02,(bool *)local_108,0);
    local_e8.Index = local_e8.Index + 1;
    iVar12 = local_f8;
  } while( true );
}

