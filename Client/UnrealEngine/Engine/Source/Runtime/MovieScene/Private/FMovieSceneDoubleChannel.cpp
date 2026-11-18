// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 43

// StaticStruct @ 14605f6b0

UScriptStruct * __cdecl FMovieSceneDoubleChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoubleChannel,(UObject *)pUVar1,
                         L"MovieSceneDoubleChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDoubleChannel.OuterSingleton;
}

// GetKeys @ 14605f6f0

void __thiscall
FMovieSceneDoubleChannel::GetKeys
          (FMovieSceneDoubleChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 14605f790

void __thiscall
FMovieSceneDoubleChannel::GetKeyTimes
          (FMovieSceneDoubleChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// SetKeyTimes @ 14605f830

void __thiscall
FMovieSceneDoubleChannel::SetKeyTimes
          (FMovieSceneDoubleChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneDoubleValue>::SetKeyTimes(&local_28,&local_38,&local_48);
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// DuplicateKeys @ 14605f8f0

void __thiscall
FMovieSceneDoubleChannel::DuplicateKeys
          (FMovieSceneDoubleChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneDoubleValue>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 14605f990

void __thiscall
FMovieSceneDoubleChannel::DeleteKeys
          (FMovieSceneDoubleChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeys(&local_28,&local_38);
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// DeleteKeysFrom @ 14605fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneDoubleChannel::DeleteKeysFrom
          (FMovieSceneDoubleChannel *this,FFrameNumber param_1,bool param_2)

{
  code *pcVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  bool bVar4;
  int iVar5;
  FCachedInterpolation *this_00;
  undefined1 auStackY_f8 [32];
  double local_c0;
  FMovieSceneTangentData local_b8;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_a0;
  FCachedInterpolation local_80;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a0._padding_ = (longlong)&this->KeyHandles;
  local_a0._padding_ = (longlong)&this->Times;
  local_a0.Values = &this->Values;
  local_a0._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_a0._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_a0.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = (this->Times).ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < iVar5) {
    iVar5 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_a0,param_1,(FFrameNumber)0x0);
    if (iVar5 == -1) {
      FVar2.SubFrame = 0.0;
      FVar2.FrameNumber.Value = param_1.Value;
      local_c0 = 0.0;
      this_00 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                          (&local_80,this,(FTimeEvaluationCache *)0x0,FVar2);
      FVar3.SubFrame = 0.0;
      FVar3.FrameNumber.Value = param_1.Value;
      bVar4 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this_00,FVar3,&local_c0)
      ;
      if (bVar4) {
        local_b8.UnserializedPaddingBytes[0] = '\0';
        local_b8.UnserializedPaddingBytes[1] = '\0';
        local_b8.UnserializedPaddingBytes[2] = '\0';
        local_b8.TangentWeightMode.Value = '\0';
        local_b8.ArriveTangent = 0.0;
        local_b8.LeaveTangent = 0.0;
        local_b8.ArriveTangentWeight = 0.0;
        local_b8.LeaveTangentWeight = 0.0;
        TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AddCubicKey
                  (this,param_1,local_c0,RCTM_Auto,&local_b8);
      }
    }
  }
  TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeysFrom(&local_a0,param_1,param_2);
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// RemapTimes @ 14605fbe0

void __thiscall
FMovieSceneDoubleChannel::RemapTimes(FMovieSceneDoubleChannel *this,IRetimingInterface *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  TMovieSceneChannelData<FMovieSceneDoubleValue> TStack_38;
  
  pTVar2 = &this->Values;
  pTVar1 = &this->Times;
  if ((this->Times).ArrayNum != (this->Values).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel->Times.Num() == InChannel->Values.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                       ,0x361,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar9 = (double)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  TStack_38._padding_ = (longlong)&this->KeyHandles;
  TStack_38._padding_ = (longlong)pTVar1;
  TStack_38._padding_ = (longlong)this;
  TStack_38.Values = pTVar2;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar2 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneDoubleValue>::RemapTimes(&TStack_38,param_1);
  uVar7 = 0;
  if (0 < (this->Times).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Values).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uVar7 = uVar7 + 1;
      *(float *)(pFVar3 + lVar8 + 8) = (float)((double)*(float *)(pFVar3 + lVar8 + 8) * dVar9);
      *(float *)(pFVar3 + lVar8 + 0xc) = (float)((double)*(float *)(pFVar3 + lVar8 + 0xc) * dVar9);
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (this->Times).ArrayNum);
  }
  return;
}

// ComputeEffectiveRange @ 14605fbf0

TRange<FFrameNumber> * __thiscall
FMovieSceneDoubleChannel::ComputeEffectiveRange
          (FMovieSceneDoubleChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

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
     (this == (FMovieSceneDoubleChannel *)0xffffffffffffff80)) {
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

// GetNumKeys @ 14605fda0

int __thiscall FMovieSceneDoubleChannel::GetNumKeys(FMovieSceneDoubleChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 14605fdb0

void __thiscall FMovieSceneDoubleChannel::Reset(FMovieSceneDoubleChannel *this)

{
  (this->Times).ArrayNum = 0;
  if ((this->Times).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Times).AllocatorInstance,0,&(this->Times).ArrayMax);
  }
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->Values).AllocatorInstance,0,&(this->Values).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->bHasDefaultValue = false;
  return;
}

// Offset @ 14605fe50

void __thiscall
FMovieSceneDoubleChannel::Offset(FMovieSceneDoubleChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_28.Times = &this->Times;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// Optimize @ 14605fee0

void __thiscall
FMovieSceneDoubleChannel::Optimize
          (FMovieSceneDoubleChannel *this,FKeyDataOptimizationParams *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FFrameRate FVar6;
  code *pcVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  ForAnyElementType FStack_168;
  int iStack_160;
  int iStack_15c;
  uint uStack_158;
  uint uStack_154;
  FScriptContainerElement *pFStack_150;
  uint uStack_148;
  void *pvStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  uint uStack_12c;
  TMovieSceneChannelData<FMovieSceneDoubleValue> TStack_128;
  longlong lStack_108;
  void *pvStack_100;
  undefined8 uStack_f8;
  FScriptContainerElement *pFStack_f0;
  longlong lStack_e8;
  FScriptContainerElement *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<FKeyHandle_const_,int> aTStack_c8 [8];
  
  TStack_128._padding_ = (longlong)&this->Times;
  TStack_128._padding_ = (longlong)&this->KeyHandles;
  TStack_128.Values = &this->Values;
  TStack_128._padding_ = (longlong)this;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_128._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (TStack_128.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pvStack_100 = (void *)0x0;
  uStack_f8 = 0;
  pvStack_140 = (void *)0x0;
  uStack_138 = 0;
  (**(code **)(this->_padding_ + 8))(this,&param_1->Range,&pvStack_100,&pvStack_140);
  dVar11 = __real_3fd5555555555555;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  if (2 < (int)uStack_138) {
    uStack_154 = 0;
    FStack_168.Data = (FScriptContainerElement *)0x0;
    iStack_160 = 0;
    iStack_15c = 0;
    uStack_148 = 1;
    if (1 < (int)uStack_138 + -1) {
      lStack_108 = 4;
      do {
        lVar18 = lStack_108;
        uVar14 = uStack_148;
        uStack_130 = ~uStack_148 >> 0x1f;
        uVar13 = 0;
        uVar16 = uVar13;
        if ((int)uStack_148 < (int)uStack_138) {
          uVar16 = uStack_130;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((FKeyHandleLookupTable *)TStack_128._padding_ == (FKeyHandleLookupTable *)0x0) {
          auStackX_18[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(auStackX_18);
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)TStack_128._padding_,
                              (FKeyHandle)*(uint *)(lVar18 + (longlong)pvStack_140));
        }
        uStack_12c = uVar14 + 1;
        uVar14 = uVar13;
        if ((int)uStack_12c < (int)uStack_138) {
          uVar14 = ~uStack_12c >> 0x1f;
        }
        uStack_158 = uVar16;
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lStack_e8 = lVar18 + 4;
        if ((FKeyHandleLookupTable *)TStack_128._padding_ == (FKeyHandleLookupTable *)0x0) {
          auStackX_20[0] = 0;
          `FMovieSceneChannelData::GetIndex'::__l2::<lambda_1>::operator()(auStackX_20);
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = FKeyHandleLookupTable::GetIndex
                             ((FKeyHandleLookupTable *)TStack_128._padding_,
                              (FKeyHandle)*(uint *)(lStack_e8 + (longlong)pvStack_140));
        }
        iVar3 = (TStack_128.Values)->ArrayNum;
        pFVar17 = ((TStack_128.Values)->AllocatorInstance).Data;
        if ((iVar3 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = uVar13;
        if ((int)uVar16 < iVar3) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar1 = *(double *)(pFVar17 + (longlong)(int)uVar16 * 0x20);
        FVar6 = param_1->DisplayRate;
        iVar3 = *(int *)(TStack_128._padding_ + 8);
        pFVar17 = ((ForAnyElementType *)TStack_128._padding_)->Data;
        if ((iVar3 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = uVar13;
        if ((int)uStack_158 < iVar3) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar3 = *(int *)(pFVar17 + (longlong)(int)uVar16 * 4);
        iVar4 = *(int *)(TStack_128._padding_ + 8);
        pFStack_150 = ((ForAnyElementType *)TStack_128._padding_)->Data;
        if ((iVar4 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((int)uVar14 < iVar4) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar4 = (TStack_128.Values)->ArrayNum;
        pFVar17 = ((TStack_128.Values)->AllocatorInstance).Data;
        iVar5 = *(int *)(pFStack_150 + (longlong)(int)uVar14 * 4);
        pFStack_150 = pFVar17;
        if ((iVar4 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar16 = 0;
        if ((int)uVar14 < iVar4) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = pFStack_150 + (longlong)(int)uVar14 * 0x20;
        iVar4 = *(int *)(TStack_128._padding_ + 8);
        pFStack_150 = ((ForAnyElementType *)TStack_128._padding_)->Data;
        if ((iVar4 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = (longlong)(int)uStack_154;
        uVar16 = ~uStack_154;
        uVar14 = 0;
        if ((int)uStack_154 < iVar4) {
          uVar14 = uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFStack_f0 = ((TStack_128.Values)->AllocatorInstance).Data;
        iVar4 = *(int *)(pFStack_150 + lVar18 * 4);
        pFStack_150 = (FScriptContainerElement *)
                      CONCAT44(pFStack_150._4_4_,(TStack_128.Values)->ArrayNum);
        if (((TStack_128.Values)->ArrayNum < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = 0;
        if ((int)uStack_154 < (int)pFStack_150) {
          uVar14 = uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = pFStack_f0 + lVar18 * 0x20;
        dVar23 = (double)FVar6.Numerator / (double)FVar6.Denominator;
        dVar22 = (double)(iVar5 - iVar4) * (dVar8 / dVar23);
        if (dVar22 <= 0.0) {
LAB_1460dd1dd:
          dVar21 = *(double *)pFVar19;
        }
        else if (pFVar19[0x1c] == (FScriptContainerElement)0x1) {
          if (iVar3 < iVar5) goto LAB_1460dd1dd;
          dVar21 = *(double *)pFVar17;
        }
        else {
          dVar21 = *(double *)pFVar19;
          dVar2 = *(double *)pFVar17;
          dVar20 = ((double)(iVar3 - iVar4) * (dVar8 / dVar23)) / dVar22;
          if ((pFVar19[0x1c] == (FScriptContainerElement)0x0) &&
             ((GSequencerLinearCubicInterpolation == 0 ||
              (pFVar17[0x1c] != (FScriptContainerElement)0x2)))) {
            dVar21 = (dVar2 - dVar21) * dVar20 + dVar21;
          }
          else {
            dVar21 = UE::Curves::BezierInterp<double>
                               (dVar21,(double)*(float *)(pFVar19 + 0xc) * dVar23 * dVar22 * dVar11
                                       + dVar21,
                                dVar2 - (double)*(float *)(pFVar17 + 8) * dVar23 * dVar22 * dVar11,
                                dVar2,(float)dVar20);
          }
        }
        dVar21 = dVar21 - dVar1;
        if ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar10,SUB84(dVar21,0) & uVar9) <=
            (double)param_1->Tolerance) {
          uVar14 = 0;
          if ((int)uStack_148 < (int)uStack_138) {
            uVar14 = uStack_130;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar17 = (FScriptContainerElement *)(lStack_108 + (longlong)pvStack_140);
          if (((FStack_168.Data <= pFVar17) &&
              (pFVar17 < FStack_168.Data + (longlong)iStack_15c * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (iStack_160 == iStack_15c) {
            iStack_160 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&FStack_168,&iStack_15c);
          }
          *(undefined4 *)(FStack_168.Data + (longlong)iStack_160 * 4) = *(undefined4 *)pFVar17;
          iStack_160 = iStack_160 + 1;
        }
        else {
          uStack_154 = uStack_158;
        }
        uStack_148 = uStack_12c;
        lStack_108 = lStack_e8;
      } while ((int)uStack_12c < (int)uStack_138 + -1);
    }
    iVar3 = iStack_160;
    pFStack_d8 = FStack_168.Data;
    if ((iStack_160 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    aTStack_c8[0]._12_4_ = uStack_cc;
    aTStack_c8[0].ArrayNum = iVar3;
    aTStack_c8[0].DataPtr = (FKeyHandle *)pFStack_d8;
    iStack_d0 = iVar3;
    TMovieSceneChannelData<FMovieSceneDoubleValue>::DeleteKeys(&TStack_128,aTStack_c8);
    if (param_1->bAutoSetInterpolation != false) {
      TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
    }
    if (FStack_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.Data);
    }
  }
  if (pvStack_140 != (void *)0x0) {
    FMemory::Free(pvStack_140);
  }
  if (pvStack_100 != (void *)0x0) {
    FMemory::Free(pvStack_100);
  }
  return;
}

// ClearDefault @ 14605fef0

void __thiscall FMovieSceneDoubleChannel::ClearDefault(FMovieSceneDoubleChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// PostEditChange @ 14605ff00

void __thiscall FMovieSceneDoubleChannel::PostEditChange(FMovieSceneDoubleChannel *this)

{
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// GetHandle @ 14605ff10

FKeyHandle __thiscall
FMovieSceneDoubleChannel::GetHandle(FMovieSceneDoubleChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetIndex @ 14605ffa0

int __thiscall FMovieSceneDoubleChannel::GetIndex(FMovieSceneDoubleChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  if ((this == (FMovieSceneDoubleChannel *)0xffffffffffffff90) ||
     (this == (FMovieSceneDoubleChannel *)0xffffffffffffff80)) {
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

// FMovieSceneDoubleChannel @ 1460934c0

FMovieSceneDoubleChannel * __thiscall
FMovieSceneDoubleChannel::FMovieSceneDoubleChannel(FMovieSceneDoubleChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
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
  this->DefaultValue = 0.0;
  this->bHasDefaultValue = false;
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
  (this->TickResolution).Numerator = 60000;
  (this->TickResolution).Denominator = 1;
  return this;
}

// ~FMovieSceneDoubleChannel @ 1460979d0

void __thiscall FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel(FMovieSceneDoubleChannel *this)

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

// operator= @ 146099ad0

FMovieSceneDoubleChannel * __thiscall
FMovieSceneDoubleChannel::operator=
          (FMovieSceneDoubleChannel *this,FMovieSceneDoubleChannel *param_1)

{
  int *piVar1;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
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
  (this->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (this->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=(&this->Times,&param_1->Times);
  pTVar2 = &this->Values;
  if (pTVar2 != &param_1->Values) {
    iVar3 = (this->Values).ArrayMax;
    piVar1 = &(this->Values).ArrayMax;
    _Src = (param_1->Values).AllocatorInstance.Data;
    iVar4 = (param_1->Values).ArrayNum;
    (this->Values).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
      }
    }
  }
  this->DefaultValue = param_1->DefaultValue;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->TickResolution = param_1->TickResolution;
  return this;
}

// operator() @ 14609bd90

bool __thiscall
`FMovieSceneDoubleChannel::InverseEvaluate'::__l2::<lambda_1>::operator()
          (void *this,FFrameTime param_1)

{
  byte bVar1;
  undefined8 uVar2;
  int *piVar3;
  FFrameTime *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FCycleParams *pFVar8;
  FFrameNumber FVar9;
  int iVar10;
  int iVar11;
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  float fVar13;
  double dVar14;
  float fStackX_c;
  FFrameTime local_res10;
  undefined8 local_res18;
  int local_58 [2];
  FCycleParams local_50;
  
  bVar1 = *(byte *)this;
  FVar9 = param_1.FrameNumber.Value;
  fStackX_c = param_1.SubFrame;
  if ((((bVar1 & 4) != 0) ||
      (uVar2 = *(undefined8 *)((longlong)this + 4), local_res18 = uVar2, FVar9.Value != (int)uVar2))
     || (local_res18._4_4_ = (float)((ulonglong)uVar2 >> 0x20),
        bVar6 = fStackX_c != local_res18._4_4_, bVar6)) {
    if ((bVar1 & 2) == 0) {
      uVar2 = *(undefined8 *)((longlong)this + 4);
      if (FVar9.Value < (int)uVar2) {
        return false;
      }
      local_res18 = uVar2;
      if ((FVar9.Value == (int)uVar2) &&
         (local_res18._4_4_ = (float)((ulonglong)uVar2 >> 0x20),
         bVar6 = fStackX_c < local_res18._4_4_, bVar6)) {
        return false;
      }
    }
    if ((bVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)((longlong)this + 4);
      if ((int)uVar2 < FVar9.Value) {
        return false;
      }
      local_res18 = uVar2;
      if ((FVar9.Value == (int)uVar2) &&
         (local_res18._4_4_ = (float)((ulonglong)uVar2 >> 0x20),
         bVar6 = local_res18._4_4_ < fStackX_c, bVar6)) {
        return false;
      }
    }
    pFVar8 = UE::MovieScene::CycleTime
                       (&local_50,(FFrameNumber)*(int *)((longlong)this + 0x10),
                        (FFrameNumber)*(int *)((longlong)this + 0x14),param_1);
    if (((*(byte *)this & 8) != 0) || (pFVar8->CycleCount == *(int *)((longlong)this + 0xc))) {
      iVar11 = pFVar8->CycleCount - *(int *)((longlong)this + 0xc);
      uVar2 = *(undefined8 *)((longlong)this + 4);
      local_res18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      auVar12 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - local_res18._4_4_)),1);
      fVar13 = (fStackX_c - local_res18._4_4_) - auVar12._0_4_;
      if (::FFrameTime::MaxSubframe <= fVar13) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      iVar10 = -iVar11;
      if (iVar10 < 0) {
        iVar10 = iVar11;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      dVar14 = (double)((int)auVar12._0_4_ + (FVar9.Value - (int)uVar2)) + (double)fVar13;
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (*(char *)(*(longlong *)((longlong)this + 0x18) + 8) != '\0') {
        piVar3 = *(int **)((longlong)this + 0x28);
        if (((char)piVar3[1] == '\0') &&
           (local_res18 = uVar2,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (*piVar3 < iVar10) {
          return false;
        }
        if (**(double **)((longlong)this + 0x20) <= dVar14 &&
            dVar14 != **(double **)((longlong)this + 0x20)) {
          return false;
        }
      }
      pFVar4 = *(FFrameTime **)((longlong)this + 0x18);
      if (&local_res10 != pFVar4) {
        *pFVar4 = param_1;
        *(undefined1 *)&pFVar4[1].FrameNumber.Value = 1;
      }
      **(double **)((longlong)this + 0x20) = dVar14;
      piVar3 = *(int **)((longlong)this + 0x28);
      if (local_58 != piVar3) {
        *piVar3 = iVar10;
        *(undefined1 *)(piVar3 + 1) = 1;
      }
      return true;
    }
  }
  return false;
}

// AddConstantKey @ 1460a6590

int __thiscall
FMovieSceneDoubleChannel::AddConstantKey
          (FMovieSceneDoubleChannel *this,FFrameNumber param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::InsertKeyInternal(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  *(double *)(pFVar1 + (longlong)(int)uVar4 * 0x20) = param_2;
  pFVar1[(longlong)(int)uVar4 * 0x20 + 0x1c] = (FScriptContainerElement)0x1;
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return uVar4;
}

// AddCubicKey @ 1460a6880

int __thiscall
FMovieSceneDoubleChannel::AddCubicKey
          (FMovieSceneDoubleChannel *this,FFrameNumber param_1,double param_2,
          ERichCurveTangentMode param_3,FMovieSceneTangentData *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar5 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::InsertKeyInternal(this,param_1);
  uVar7 = 0;
  if ((int)uVar5 < (this->Values).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5 * 0x20;
  *(double *)(pFVar1 + lVar8) = param_2;
  pFVar1[lVar8 + 0x1c] = (FScriptContainerElement)0x2;
  pFVar1[lVar8 + 0x1d] = SUB41(param_3,0);
  uVar3 = *(undefined8 *)&param_4->ArriveTangentWeight;
  *(undefined8 *)(pFVar1 + lVar8 + 8) = *(undefined8 *)param_4;
  *(undefined8 *)(pFVar1 + lVar8 + 8 + 8) = uVar3;
  *(undefined4 *)(pFVar1 + lVar8 + 0x18) = *(undefined4 *)&param_4->TangentWeightMode;
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return uVar5;
}

// AddKeys @ 1460a7880

void __thiscall
FMovieSceneDoubleChannel::AddKeys
          (FMovieSceneDoubleChannel *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneDoubleChannel.cpp"
                         ,0x2d9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->Times).ArrayNum;
  pTVar1 = &this->Times;
  piVar2 = &(this->Times).ArrayNum;
  if ((pTVar1 == param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,&pTVar1->AllocatorInstance,piVar2,&(this->Times).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4,(param_1->AllocatorInstance).Data,
           (longlong)iVar4 << 2);
  }
  pTVar3 = &this->Values;
  if ((pTVar3 == param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar4,&pTVar3->AllocatorInstance,&(this->Values).ArrayNum,
                       &(this->Values).ArrayMax);
    memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x20,
           (param_2->AllocatorInstance).Data,(longlong)iVar4 << 5);
  }
  if (iVar8 < *piVar2) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&this->KeyHandles,(int)local_res8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *piVar2);
  }
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// AddLinearKey @ 1460a7d00

int __thiscall
FMovieSceneDoubleChannel::AddLinearKey
          (FMovieSceneDoubleChannel *this,FFrameNumber param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::InsertKeyInternal(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar1 = (this->Values).AllocatorInstance.Data;
  *(double *)(pFVar1 + (longlong)(int)uVar4 * 0x20) = param_2;
  pFVar1[(longlong)(int)uVar4 * 0x20 + 0x1c] = (FScriptContainerElement)0x0;
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return uVar4;
}

// AsPiecewiseCurve @ 1460ab450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPiecewiseCurve * __thiscall
FMovieSceneDoubleChannel::AsPiecewiseCurve
          (FMovieSceneDoubleChannel *this,FPiecewiseCurve *__return_storage_ptr__,bool param_1)

{
  int *piVar1;
  FCachedInterpolation *pFVar2;
  code *pcVar3;
  FFrameTime FVar4;
  FFrameTime FVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FPiecewiseCurve *pFVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_258 [32];
  undefined1 local_208;
  char local_207;
  undefined1 local_206 [6];
  longlong local_200;
  uint local_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1c8;
  uint uStack_1c4;
  FCachedInterpolation local_1c0;
  double local_160;
  longlong local_158;
  FScriptContainerElement local_110;
  undefined8 local_108;
  FCachedInterpolation local_100;
  FCachedInterpolation local_a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  piVar1 = &(__return_storage_ptr__->Values).ArrayMax;
  (__return_storage_ptr__->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Values).ArrayNum = 0;
  *piVar1 = 0;
  iVar8 = (this->Times).ArrayNum;
  local_207 = param_1;
  if (iVar8 == 0) {
    if (this->bHasDefaultValue != false) {
      local_160 = this->DefaultValue;
      local_1c8 = 0;
      local_158 = (ulonglong)uStack_1c4 << 0x20;
      local_108 = 0x7fffffff80000000;
      local_110 = (FScriptContainerElement)0x1;
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
      uVar15 = (ulonglong)(byte)local_110;
      pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
      (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
      pFVar14[0x50] = local_110;
      if ((7 < (byte)local_110) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x105,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
        return pFVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar15])(pFVar14,&local_160);
      *(undefined8 *)(pFVar14 + 0x58) = local_108;
    }
  }
  else {
    if ((param_1) && ((this->PreInfinityExtrap).Value != '\x05')) {
      local_100.Data.TypeIndex = '\0';
      local_100.Range.Start.Value = 0;
      local_100.Range.End.Value = -1;
      if ((iVar8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
        return pFVar11;
      }
      uStack_1f4 = 0;
      local_1f8 = *(int *)(this->Times).AllocatorInstance.Data - 1;
      FVar4.SubFrame = 0.0;
      FVar4.FrameNumber.Value = local_1f8;
      bVar7 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CacheExtrapolation
                        (this,FVar4,&local_100);
      if (bVar7) {
        iVar8 = (__return_storage_ptr__->Values).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
        }
        uVar15 = (ulonglong)local_100.Data.TypeIndex;
        (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
        pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
        pFVar14[0x50] = (FScriptContainerElement)local_100.Data.TypeIndex;
        if ((7 < local_100.Data.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
          return pFVar11;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar15])(pFVar14,&local_100);
        *(FCachedInterpolationRange *)(pFVar14 + 0x58) = local_100.Range;
      }
      else {
        local_208 = 0;
        `FMovieSceneDoubleChannel::AsPiecewiseCurve'::__l16::<lambda_1>::operator()(&local_208);
      }
    }
    uVar15 = 0;
    uVar16 = (this->Times).ArrayNum;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (*piVar1 < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar16,(ForAnyElementType *)__return_storage_ptr__,
                 (__return_storage_ptr__->Values).ArrayNum,piVar1);
    }
    iVar8 = (this->Times).ArrayNum;
    if (0 < iVar8 + -1) {
      local_200 = 0;
      uVar18 = uVar15;
      do {
        uVar16 = (uint)uVar15;
        if (uVar16 == iVar8 - 1U) {
LAB_1460ab8ee:
          uVar12 = 0;
          if ((int)uVar16 < (this->Times).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          iVar8 = *(int *)((this->Times).AllocatorInstance.Data + uVar18);
          iVar9 = iVar8 + 1;
          if (0x7ffffffe < iVar8) {
            iVar9 = iVar8;
          }
          uVar12 = 0;
          if ((int)uVar16 < (this->Values).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          local_1e0 = *(undefined8 *)((this->Values).AllocatorInstance.Data + local_200);
          iVar10 = (__return_storage_ptr__->Values).ArrayNum;
          iStack_1d8 = iVar8;
          if (iVar10 == (__return_storage_ptr__->Values).ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x860,(ForAnyElementType *)__return_storage_ptr__,
                                &(__return_storage_ptr__->Values).ArrayMax);
          }
          (__return_storage_ptr__->Values).ArrayNum = iVar10 + 1;
          pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data;
          lVar13 = (longlong)iVar10 * 0x60;
          uVar15 = (ulonglong)(uVar16 + 1);
          uVar18 = uVar18 + 4;
          *(undefined8 *)(pFVar14 + lVar13) = local_1e0;
          *(ulonglong *)(pFVar14 + lVar13 + 8) = CONCAT44(uStack_1d4,iStack_1d8);
          pFVar14[lVar13 + 0x50] = (FScriptContainerElement)0x1;
          *(ulonglong *)(pFVar14 + lVar13 + 0x58) = CONCAT44(iVar9,iVar8);
        }
        else {
          uVar17 = uVar16 + 1;
          uVar12 = 0;
          if ((int)uVar17 < iVar8) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          local_1f0 = uVar18 + 4;
          iVar8 = *(int *)((this->Times).AllocatorInstance.Data + local_1f0);
          uVar12 = 0;
          if ((int)uVar16 < (this->Times).ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
            return pFVar11;
          }
          if (*(int *)((this->Times).AllocatorInstance.Data + uVar18) == iVar8) goto LAB_1460ab8ee;
          TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForKey
                    (&local_1c0,this,uVar16,(FCycleParams *)0x0);
          uVar18 = local_1f0;
          if (local_1c0.Range.Start.Value < local_1c0.Range.End.Value) {
            pFVar2 = (FCachedInterpolation *)(__return_storage_ptr__->Values).AllocatorInstance.Data
            ;
            piVar1 = &(__return_storage_ptr__->Values).ArrayMax;
            if (((pFVar2 <= &local_1c0) && (&local_1c0 < pFVar2 + *piVar1)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
              return pFVar11;
            }
            iVar8 = (__return_storage_ptr__->Values).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x860,(ForAnyElementType *)__return_storage_ptr__,piVar1);
            }
            uVar6 = local_1c0.Data._80_8_;
            (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
            pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data +
                      (longlong)iVar8 * 0x60;
            pFVar14[0x50] = local_1c0.Data.TypeIndex;
            if ((7 < (byte)local_1c0.Data.TypeIndex) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x105,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
              return pFVar11;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[uVar6 & 0xff])(pFVar14,&local_1c0);
            *(ulonglong *)(pFVar14 + 0x58) =
                 CONCAT44(local_1c0.Range.End.Value,local_1c0.Range.Start.Value);
            uVar15 = (ulonglong)uVar17;
            uVar18 = local_1f0;
          }
          else {
            uVar15 = (ulonglong)uVar17;
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4380896066740944258>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneDoubleChannel.cpp"
                               ,0x27e,"Interp.IsValid()");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
              return pFVar11;
            }
          }
        }
        iVar8 = (this->Times).ArrayNum;
        local_200 = local_200 + 0x20;
      } while ((int)uVar15 < iVar8 + -1);
    }
    if ((local_207 != '\0') && ((this->PostInfinityExtrap).Value != '\x05')) {
      iVar8 = (this->Times).ArrayNum;
      local_a0.Data.TypeIndex = '\0';
      local_a0.Range.Start.Value = 0;
      local_a0.Range.End.Value = -1;
      uVar12 = iVar8 - 1;
      uVar16 = 0;
      if ((int)uVar12 < iVar8) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
        return pFVar11;
      }
      uStack_1e4 = 0;
      local_1e8 = *(int *)((this->Times).AllocatorInstance.Data +
                          (longlong)(this->Times).ArrayNum * 4 + -4) + 1;
      FVar5.SubFrame = 0.0;
      FVar5.FrameNumber.Value = local_1e8;
      bVar7 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CacheExtrapolation
                        (this,FVar5,&local_a0);
      if (bVar7) {
        iVar8 = (__return_storage_ptr__->Values).ArrayNum;
        if (iVar8 == (__return_storage_ptr__->Values).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x860,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->Values).ArrayMax);
        }
        uVar15 = (ulonglong)local_a0.Data.TypeIndex;
        (__return_storage_ptr__->Values).ArrayNum = iVar8 + 1;
        pFVar14 = (__return_storage_ptr__->Values).AllocatorInstance.Data + (longlong)iVar8 * 0x60;
        pFVar14[0x50] = (FScriptContainerElement)local_a0.Data.TypeIndex;
        if ((7 < local_a0.Data.TypeIndex) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FPiecewiseCurve *)(*pcVar3)();
          return pFVar11;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar15])(pFVar14,&local_a0);
        *(FCachedInterpolationRange *)(pFVar14 + 0x58) = local_a0.Range;
      }
      else {
        `FMovieSceneDoubleChannel::AsPiecewiseCurve'::__l34::<lambda_2>::operator()(local_206);
      }
    }
  }
  return __return_storage_ptr__;
}

// AutoSetTangents @ 1460ae060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMovieSceneDoubleChannel::AutoSetTangents(FMovieSceneDoubleChannel *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  int iStackX_18;
  uint uStackX_20;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_118;
  
  dVar5 = __real_3f1a36e2e0000000;
  if (1 < (this->Values).ArrayNum) {
    pFVar18 = (this->Values).AllocatorInstance.Data;
    if (pFVar18[0x1c] == (FScriptContainerElement)0x0) {
      pFVar18[0x18] = (FScriptContainerElement)0x0;
      if (((this->Values).ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      if (((this->Times).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Times).AllocatorInstance.Data;
      if (((this->Times).ArrayNum < 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar21 = (double)(*(int *)((this->Times).AllocatorInstance.Data + 4) - *(int *)pFVar2);
      if (dVar21 <= dVar5) {
        dVar21 = dVar5;
      }
      *(float *)(pFVar18 + 0xc) =
           (float)((*(double *)(pFVar1 + 0x20) - *(double *)pFVar18) / dVar21);
    }
    else if ((pFVar18[0x1c] == (FScriptContainerElement)0x2) &&
            ((pFVar18[0x1d] == (FScriptContainerElement)0x0 ||
             (pFVar18[0x1d] == (FScriptContainerElement)0x4)))) {
      *(double *)(pFVar18 + 8) = 0.0;
      pFVar18[0x18] = (FScriptContainerElement)0x0;
    }
    iVar12 = (this->Values).ArrayNum;
    uVar13 = iVar12 - 1;
    uVar8 = 0;
    if ((int)uVar13 < iVar12) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar18 = (this->Values).AllocatorInstance.Data;
    lVar16 = (longlong)(this->Values).ArrayNum * 0x20;
    if (pFVar18[lVar16 + -4] == (FScriptContainerElement)0x0) {
      pFVar18[lVar16 + -8] = (FScriptContainerElement)0x0;
      iVar12 = (this->Values).ArrayNum;
      uVar19 = iVar12 - 1;
      uVar8 = iVar12 - 2;
      uVar13 = 0;
      if ((int)uVar8 < iVar12) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Values).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar19 < (this->Times).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Times).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar8 < (this->Times).ArrayNum) {
        uVar13 = ~uVar8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar21 = (double)(*(int *)(pFVar2 + (longlong)(int)uVar19 * 4) -
                       *(int *)((this->Times).AllocatorInstance.Data + (longlong)(int)uVar8 * 4));
      if (dVar21 <= dVar5) {
        dVar21 = dVar5;
      }
      *(float *)(pFVar18 + lVar16 + -0x18) =
           (float)((*(double *)(pFVar18 + lVar16 + -0x20) -
                   *(double *)(pFVar1 + (longlong)(int)uVar8 * 0x20)) / dVar21);
    }
    else if ((pFVar18[lVar16 + -4] == (FScriptContainerElement)0x2) &&
            ((pFVar18[lVar16 + -3] == (FScriptContainerElement)0x0 ||
             (pFVar18[lVar16 + -3] == (FScriptContainerElement)0x4)))) {
      *(undefined8 *)(pFVar18 + lVar16 + -0x18) = 0;
      pFVar18[lVar16 + -8] = (FScriptContainerElement)0x0;
    }
    dVar6 = __real_401aaaaaaaaaaaaa;
    dVar21 = __real_3feb333333333333;
    fVar4 = __real_3a83126f;
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar19 = 0;
    iVar12 = (this->Values).ArrayNum;
    uVar13 = 1;
    iStackX_18 = 0;
    if (1 < iVar12 + -1) {
      lStack_138 = 1;
      uStackX_20 = 2;
      lStack_128 = 0x20;
      lStack_130 = 0;
      lStack_118 = 0;
      uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      do {
        fVar20 = 0.0;
        uVar14 = ~uVar19 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar19 < iVar12) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar25 = *(double *)((this->Values).AllocatorInstance.Data + lStack_118);
        uVar17 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < (this->Values).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar18 = (this->Values).AllocatorInstance.Data + lStack_128;
        if (pFVar18[0x1c] == (FScriptContainerElement)0x2) {
          if ((pFVar18[0x1d] == (FScriptContainerElement)0x0) ||
             (pFVar18[0x1d] == (FScriptContainerElement)0x4)) {
            uVar15 = ~uStackX_20 >> 0x1f;
            uVar9 = 0;
            if ((int)uStackX_20 < (this->Values).ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar23 = *(double *)((this->Values).AllocatorInstance.Data + lStack_128 + 0x20);
            uVar9 = 0;
            if ((int)uStackX_20 < (this->Times).ArrayNum) {
              uVar9 = uVar15;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = (this->Times).AllocatorInstance.Data;
            uVar9 = 0;
            if ((int)uVar19 < (this->Times).ArrayNum) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            dVar26 = (double)(*(int *)(pFVar1 + lStack_138 * 4 + 4) -
                             *(int *)((this->Times).AllocatorInstance.Data + lStack_130));
            if (dVar26 <= dVar5) {
              dVar26 = dVar5;
            }
            if (pFVar18[0x1d] == (FScriptContainerElement)0x4) {
              fVar20 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CalcSmartTangent
                                 (this,uVar13);
              if (((((float)((uint)*(float *)(pFVar18 + 8) & uVar8) <= fVar4) ||
                   ((float)((uint)(*(float *)(pFVar18 + 8) - fVar20) & uVar8) <= fVar4)) ||
                  (9 < iStackX_18)) || ((int)uVar13 < 2)) {
                iStackX_18 = 0;
              }
              else {
                iStackX_18 = iStackX_18 + 1;
                uVar19 = uVar19 - 2;
                lStack_128 = lStack_128 + -0x40;
                lStack_138 = lStack_138 + -2;
                lStack_118 = lStack_118 + -0x40;
                uVar13 = uVar13 - 2;
                uStackX_20 = uStackX_20 - 2;
                lStack_130 = lStack_130 + -8;
              }
            }
            else if (GCachedSequencerAutoTangentInterpolation == 0) {
              fVar20 = (float)((double)(float)(((dVar23 - *(double *)pFVar18) +
                                               (*(double *)pFVar18 - dVar25)) *
                                              (double)(__real_3f800000 - param_1)) / dVar26);
            }
            else if ((0 < GCachedSequencerAutoTangentInterpolation) &&
                    (((dVar22 = *(double *)pFVar18, dVar25 < dVar22 && (dVar22 < dVar23)) ||
                     ((dVar22 < dVar25 && (dVar23 < dVar22)))))) {
              dVar24 = dVar22 - dVar25;
              fVar20 = (float)((double)(float)(((dVar23 - dVar22) + dVar24) *
                                              (double)(__real_3f800000 - param_1)) / dVar26);
              if (GCachedSequencerAutoTangentInterpolation < 2) {
                dVar25 = (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar27,
                                          SUB84(dVar24,0) & uVar10) /
                         (double)CONCAT44((uint)((ulonglong)(dVar23 - dVar25) >> 0x20) & uVar27,
                                          SUB84(dVar23 - dVar25,0) & uVar10);
                if (dVar25 <= dVar21) {
                  if (dVar25 < ___real_3fc3333333333334) {
                    fVar20 = (float)(dVar25 * dVar6 * (double)fVar20);
                  }
                }
                else {
                  fVar20 = (float)((__real_3ff0000000000000 - (dVar25 - dVar21) * dVar6) *
                                  (double)fVar20);
                }
              }
              else if (GCachedSequencerAutoTangentInterpolation == 2) {
                uVar10 = 0;
                if ((int)uVar19 < (this->Times).ArrayNum) {
                  uVar10 = uVar14;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar1 = (this->Times).AllocatorInstance.Data;
                uVar10 = 0;
                if ((int)uVar13 < (this->Times).ArrayNum) {
                  uVar10 = uVar17;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                dVar26 = (double)(*(int *)((this->Times).AllocatorInstance.Data + lStack_138 * 4) -
                                 *(int *)(pFVar1 + lStack_130));
                uVar10 = 0;
                if ((int)uVar13 < (this->Times).ArrayNum) {
                  uVar10 = uVar17;
                }
                if (dVar26 <= dVar5) {
                  dVar26 = dVar5;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar1 = (this->Times).AllocatorInstance.Data;
                uVar10 = 0;
                if ((int)uStackX_20 < (this->Times).ArrayNum) {
                  uVar10 = uVar15;
                }
                if ((uVar10 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                dVar26 = (*(double *)pFVar18 - dVar25) * (__real_3ff8000000000000 / dVar26);
                dVar25 = (double)(*(int *)((this->Times).AllocatorInstance.Data + lStack_138 * 4 + 4
                                          ) - *(int *)(pFVar1 + lStack_138 * 4));
                if (dVar25 <= dVar5) {
                  dVar25 = dVar5;
                }
                dVar22 = (double)fVar20;
                dVar25 = (__real_3ff8000000000000 / dVar25) * (dVar23 - *(double *)pFVar18);
                iVar12 = 1;
                if (0.0 < dVar25) {
                  iVar12 = -1;
                }
                iVar11 = 1;
                if (0.0 < dVar26) {
                  iVar11 = -1;
                }
                if (iVar11 == iVar12) {
                  iVar11 = 1;
                  if (0.0 < dVar22) {
                    iVar11 = -1;
                  }
                  if (iVar11 != iVar12) goto LAB_1460acfeb;
                  if (dVar25 < 0.0) {
                    if (dVar22 <= dVar25) {
                      dVar22 = dVar25;
                    }
                    if (dVar22 <= dVar26) {
                      dVar22 = dVar26;
                    }
                  }
                  else {
                    if (dVar25 <= dVar22) {
                      dVar22 = dVar25;
                    }
                    if (dVar26 <= dVar22) {
                      dVar22 = dVar26;
                    }
                  }
                }
                else {
LAB_1460acfeb:
                  dVar22 = 0.0;
                }
                fVar20 = (float)dVar22;
                uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              }
            }
            *(float *)(pFVar18 + 8) = fVar20;
            *(float *)(pFVar18 + 0xc) = fVar20;
            pFVar18[0x18] = (FScriptContainerElement)0x0;
          }
        }
        else if (pFVar18[0x1c] == (FScriptContainerElement)0x0) {
          pFVar18[0x18] = (FScriptContainerElement)0x0;
          uVar9 = 0;
          if ((int)uStackX_20 < (this->Values).ArrayNum) {
            uVar9 = ~uStackX_20 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->Values).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar13 < (this->Times).ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->Times).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar19 < (this->Times).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar23 = (double)(*(int *)(pFVar2 + lStack_138 * 4) -
                           *(int *)((this->Times).AllocatorInstance.Data + lStack_130));
          if (dVar23 <= dVar5) {
            dVar23 = dVar5;
          }
          *(float *)(pFVar18 + 8) = (float)((*(double *)pFVar18 - dVar25) / dVar23);
          uVar9 = 0;
          if ((int)uStackX_20 < (this->Times).ArrayNum) {
            uVar9 = ~uStackX_20 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->Times).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar13 < (this->Times).ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar25 = (double)(*(int *)(pFVar2 + lStack_138 * 4 + 4) -
                           *(int *)((this->Times).AllocatorInstance.Data + lStack_138 * 4));
          if (dVar25 <= dVar5) {
            dVar25 = dVar5;
          }
          *(float *)(pFVar18 + 0xc) =
               (float)((*(double *)(pFVar1 + lStack_128 + 0x20) - *(double *)pFVar18) / dVar25);
        }
        uVar19 = uVar19 + 1;
        uStackX_20 = uStackX_20 + 1;
        iVar12 = (this->Values).ArrayNum;
        lStack_138 = lStack_138 + 1;
        lStack_128 = lStack_128 + 0x20;
        lStack_130 = lStack_130 + 4;
        lStack_118 = lStack_118 + 0x20;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar12 + -1);
    }
  }
  return;
}

// ComputeExtents @ 1460b6b20

FInterpolationExtents * __thiscall
FMovieSceneDoubleChannel::ComputeExtents
          (FMovieSceneDoubleChannel *this,FInterpolationExtents *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2)

{
  double dVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  FInterpolationExtents *pFVar4;
  FDoubleChannelPiecewiseData local_res8 [4];
  FInterpolationExtents local_28;
  
  local_res8[0].Channel = this;
  pFVar4 = UE::MovieScene::Interpolation::
           ComputePiecewiseExtents<UE::MovieScene::Interpolation::FDoubleChannelPiecewiseData>
                     (&local_28,local_res8,param_1,param_2);
  dVar1 = pFVar4->MaxValue;
  FVar2 = pFVar4->MinValueTime;
  FVar3 = pFVar4->MaxValueTime;
  __return_storage_ptr__->MinValue = pFVar4->MinValue;
  __return_storage_ptr__->MaxValue = dVar1;
  __return_storage_ptr__->MinValueTime = FVar2;
  __return_storage_ptr__->MaxValueTime = FVar3;
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDoubleChannel::Evaluate(FMovieSceneDoubleChannel *this,FFrameTime param_1,float *param_2)

{
  bool bVar1;
  FCachedInterpolation *this_00;
  undefined1 auStack_98 [32];
  double local_78;
  FCachedInterpolation local_70;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = 0.0;
  this_00 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                      (&local_70,this,(FTimeEvaluationCache *)0x0,param_1);
  bVar1 = UE::MovieScene::Interpolation::FCachedInterpolation::Evaluate(this_00,param_1,&local_78);
  *param_2 = (float)local_78;
  return bVar1;
}

// Evaluate @ 1460c2c20

bool __thiscall
FMovieSceneDoubleChannel::Evaluate
          (FMovieSceneDoubleChannel *this,FFrameTime param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::EvaluateCached
                    (this,(FTimeEvaluationCache *)0x0,param_1,param_2);
  return bVar1;
}

// GetCycleCount @ 1460c96a0

int __thiscall
FMovieSceneDoubleChannel::GetCycleCount(FMovieSceneDoubleChannel *this,FFrameTime param_1)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FCycleParams *pFVar6;
  uint uVar7;
  FFrameNumber FVar8;
  int *piVar9;
  float fStackX_24;
  FCycleParams local_40;
  
  iVar4 = (this->Times).ArrayNum;
  if (iVar4 == 0) {
    return 0;
  }
  if ((iVar4 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = *(int *)(this->Times).AllocatorInstance.Data;
  FVar8 = param_1.FrameNumber.Value;
  if ((FVar8.Value < iVar4) ||
     ((fStackX_24 = param_1.SubFrame, FVar8.Value == iVar4 && (fStackX_24 < 0.0)))) {
    uVar1 = (this->PreInfinityExtrap).Value;
    if ((uVar1 == '\x03') || ((uVar1 == '\x04' || (uVar1 == '\x05')))) {
      return -1;
    }
  }
  else {
    iVar4 = (this->Times).ArrayNum;
    uVar7 = iVar4 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar4) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = *(int *)((this->Times).AllocatorInstance.Data +
                    (longlong)(this->Times).ArrayNum * 4 + -4);
    if (((iVar4 < FVar8.Value) || ((FVar8.Value == iVar4 && (0.0 < fStackX_24)))) &&
       ((uVar1 = (this->PostInfinityExtrap).Value, uVar1 == '\x03' ||
        ((uVar1 == '\x04' || (uVar1 == '\x05')))))) {
      return 1;
    }
  }
  piVar9 = &(this->Times).ArrayNum;
  iVar4 = *piVar9;
  uVar7 = iVar4 - 1;
  uVar5 = 0;
  if ((int)uVar7 < iVar4) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = *piVar9;
  FVar8.Value = *(int *)((this->Times).AllocatorInstance.Data + (longlong)iVar4 * 4 + -4);
  if ((iVar4 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar6 = UE::MovieScene::CycleTime
                     (&local_40,(FFrameNumber)*(int *)(this->Times).AllocatorInstance.Data,FVar8,
                      param_1);
  return pFVar6->CycleCount;
}

// GetCycleRange @ 1460c98f0

TRange<FFrameNumber> * __thiscall
FMovieSceneDoubleChannel::GetCycleRange
          (FMovieSceneDoubleChannel *this,TRange<FFrameNumber> *__return_storage_ptr__,int param_1)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  FFrameNumber FVar4;
  int iVar5;
  code *pcVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  TRangeBound<FFrameNumber> TVar10;
  TRangeBound<FFrameNumber> TVar11;
  TRangeBound<FFrameNumber> TVar12;
  TRangeBound<FFrameNumber> TVar13;
  TRangeBound<FFrameNumber> TVar14;
  TRangeBound<FFrameNumber> TVar15;
  bool bVar16;
  bool bVar17;
  TRange<FFrameNumber> *pTVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  uint local_res8;
  uint local_res20;
  uint local_58;
  undefined4 local_50;
  undefined4 local_48;
  uint local_40;
  uint local_38;
  uint local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  iVar3 = (this->Times).ArrayNum;
  if (iVar3 < 1) {
    local_res8 = CONCAT31(local_res8._1_3_,2);
    TVar7.Value.Value = 0;
    TVar7._0_4_ = local_res8;
    __return_storage_ptr__->LowerBound = TVar7;
    local_res20 = CONCAT31(local_res20._1_3_,2);
    TVar8.Value.Value = 0;
    TVar8._0_4_ = local_res20;
    __return_storage_ptr__->UpperBound = TVar8;
    return __return_storage_ptr__;
  }
  uVar1 = (this->PreInfinityExtrap).Value;
  if ((uVar1 == '\0') || ((byte)(uVar1 - 1) < 2)) {
    bVar17 = true;
  }
  else {
    bVar17 = false;
  }
  uVar2 = (this->PostInfinityExtrap).Value;
  if ((uVar2 == '\0') || ((byte)(uVar2 - 1) < 2)) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  if (((param_1 != 0) && ((-1 < param_1 || (!bVar17)))) && ((param_1 < 1 || (!bVar16)))) {
    if (param_1 < 0) {
      if ((byte)(uVar1 - 3) < 2) {
        local_58 = CONCAT31(local_58._1_3_,2);
        local_50 = CONCAT31(local_50._1_3_,1);
        FVar4.Value = *(int *)(this->Times).AllocatorInstance.Data;
        TVar9.Value.Value = 0;
        TVar9._0_4_ = local_58;
        __return_storage_ptr__->LowerBound = TVar9;
        TVar10.Value.Value = FVar4.Value;
        TVar10._0_4_ = local_50;
        __return_storage_ptr__->UpperBound = TVar10;
        return __return_storage_ptr__;
      }
    }
    else if ((byte)(uVar2 - 3) < 2) {
      local_40 = CONCAT31(local_40._1_3_,2);
      uVar19 = 0;
      if ((int)(iVar3 - 1U) < iVar3) {
        uVar19 = ~(iVar3 - 1U) >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        pTVar18 = (TRange<FFrameNumber> *)(*pcVar6)();
        return pTVar18;
      }
      __return_storage_ptr__->LowerBound =
           (TRangeBound<FFrameNumber>)
           (CONCAT44(*(undefined4 *)
                      ((this->Times).AllocatorInstance.Data +
                      (longlong)(this->Times).ArrayNum * 4 + -4),local_48) & 0xffffffffffffff00);
      TVar11.Value.Value = 0;
      TVar11._0_4_ = local_40;
      __return_storage_ptr__->UpperBound = TVar11;
      return __return_storage_ptr__;
    }
    local_30 = local_30 & 0xffffff00;
    local_38 = local_38 & 0xffffff00;
    TVar12.Value.Value = 0;
    TVar12._0_4_ = local_38;
    __return_storage_ptr__->LowerBound = TVar12;
    TVar13.Value.Value = 0;
    TVar13._0_4_ = local_30;
    __return_storage_ptr__->UpperBound = TVar13;
    return __return_storage_ptr__;
  }
  iVar3 = (this->Times).ArrayNum;
  uVar20 = iVar3 - 1;
  iVar5 = *(int *)(this->Times).AllocatorInstance.Data;
  uVar19 = 0;
  if ((int)uVar20 < iVar3) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar6 = (code *)swi(3);
    pTVar18 = (TRange<FFrameNumber> *)(*pcVar6)();
    return pTVar18;
  }
  local_28 = CONCAT31(local_28._1_3_,1);
  iVar3 = *(int *)((this->Times).AllocatorInstance.Data + (longlong)(this->Times).ArrayNum * 4 + -4)
  ;
  local_20 = CONCAT31(local_20._1_3_,1);
  auVar22._0_8_ = (double)(iVar3 - iVar5) * (double)param_1;
  auVar22._8_8_ = 0;
  auVar22 = roundpd(ZEXT416((uint)(float)param_1),auVar22,1);
  dVar21 = auVar22._0_8_;
  if (__real_41dfffffffc00000 <= auVar22._0_8_) {
    dVar21 = __real_41dfffffffc00000;
  }
  if (dVar21 <= __real_c1e0000000000000) {
    dVar21 = __real_c1e0000000000000;
  }
  TVar14.Value.Value = (int)dVar21 + iVar5;
  TVar14._0_4_ = local_28;
  __return_storage_ptr__->LowerBound = TVar14;
  TVar15.Value.Value = iVar3 + (int)dVar21;
  TVar15._0_4_ = local_20;
  __return_storage_ptr__->UpperBound = TVar15;
  return __return_storage_ptr__;
}

// GetInterpolationForTime @ 1460ccda0

FCachedInterpolation * __thiscall
FMovieSceneDoubleChannel::GetInterpolationForTime
          (FMovieSceneDoubleChannel *this,FCachedInterpolation *__return_storage_ptr__,
          FFrameTime param_1)

{
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
            (__return_storage_ptr__,this,(FTimeEvaluationCache *)0x0,param_1);
  return __return_storage_ptr__;
}

// InverseEvaluate @ 1460d78c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FFrameTime> * __thiscall
FMovieSceneDoubleChannel::InverseEvaluate
          (FMovieSceneDoubleChannel *this,TOptional<FFrameTime> *__return_storage_ptr__,
          double param_1,FFrameTime param_2,EInverseEvaluateFlags param_3)

{
  int iVar1;
  FFrameNumber FVar2;
  FFrameNumber FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FFrameTime FVar6;
  FFrameTime FVar7;
  bool bVar8;
  uint uVar9;
  TOptional<FFrameTime> *pTVar10;
  FCycleParams *pFVar11;
  uint uVar12;
  FFrameTime *pFVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  uint local_358;
  FFrameTime local_350;
  int local_348;
  undefined4 uStack_344;
  FFrameTime local_340;
  bool local_338;
  uint local_328;
  undefined4 uStack_324;
  uint local_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined1 local_310 [4];
  undefined1 local_30c;
  TOptional<FFrameTime> *local_308;
  EInverseEvaluateFlags local_300 [4];
  FFrameTime local_2fc;
  undefined4 local_2f4;
  int local_2f0;
  int local_2ec;
  FFrameTime *local_2e8;
  undefined8 *local_2e0;
  undefined1 *local_2d8;
  FCycleParams local_2d0;
  FCachedInterpolation local_2b0;
  FCachedInterpolation local_250;
  FCachedInterpolation local_1f0;
  FCachedInterpolation local_190;
  FCachedInterpolation local_130;
  FCachedInterpolation local_d0;
  FFrameTime local_70 [4];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_388;
  iVar1 = (this->Values).ArrayNum;
  if (iVar1 == 0) {
    if ((this->bHasDefaultValue != false) && (param_1 == this->DefaultValue)) {
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).FrameNumber = 0;
      (__return_storage_ptr__->TypedValue).SubFrame = 0.0;
      return __return_storage_ptr__;
    }
  }
  else {
    if (iVar1 == 1) {
      dVar17 = *(double *)(this->Values).AllocatorInstance.Data;
      __return_storage_ptr__->bIsSet = false;
      if (param_1 != dVar17) {
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->bIsSet = true;
      (__return_storage_ptr__->TypedValue).FrameNumber = 0;
      (__return_storage_ptr__->TypedValue).SubFrame = 0.0;
      return __return_storage_ptr__;
    }
    iVar16 = 0;
    iVar15 = (this->Times).ArrayNum * 2;
    local_358 = (uint)param_3;
    local_308 = __return_storage_ptr__;
    if (((param_3 & Cycle) != 0) &&
       (((this->PreInfinityExtrap).Value == '\x01' || ((this->PostInfinityExtrap).Value == '\x01')))
       ) {
      if (iVar1 < 1) {
        local_368 = 0;
        local_360 = (longlong)iVar1;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TOptional<FFrameTime> *)(*pcVar5)();
          return pTVar10;
        }
      }
      iVar1 = (this->Values).ArrayNum;
      pFVar4 = (this->Values).AllocatorInstance.Data;
      uVar12 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar12 < iVar1) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_368 = (longlong)(int)uVar12;
        local_360 = (longlong)iVar1;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TOptional<FFrameTime> *)(*pcVar5)();
          return pTVar10;
        }
      }
      dVar17 = *(double *)
                ((this->Values).AllocatorInstance.Data +
                (longlong)(this->Values).ArrayNum * 0x20 + -0x20) - *(double *)pFVar4;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        iVar15 = 1000;
      }
    }
    iVar1 = (this->Times).ArrayNum;
    if (iVar1 < 1) {
      local_368 = 0;
      local_360 = (longlong)iVar1;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOptional<FFrameTime> *)(*pcVar5)();
        return pTVar10;
      }
    }
    iVar1 = (this->Times).ArrayNum;
    uVar12 = iVar1 - 1;
    FVar2.Value = *(int *)(this->Times).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar12 < iVar1) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_368 = (longlong)(int)uVar12;
      local_360 = (longlong)iVar1;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOptional<FFrameTime> *)(*pcVar5)();
        return pTVar10;
      }
    }
    FVar3.Value = *(int *)((this->Times).AllocatorInstance.Data +
                          (longlong)(this->Times).ArrayNum * 4 + -4);
    pFVar11 = UE::MovieScene::CycleTime(&local_2d0,FVar2,FVar3,param_2);
    _local_348 = CONCAT44(uStack_344,pFVar11->CycleCount);
    TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
              (&local_2b0,this,(FTimeEvaluationCache *)0x0,param_2);
    if (local_2b0.Range.Start.Value < local_2b0.Range.End.Value) {
      if ((local_358 & 2) == 0) {
        local_1f0.Data.TypeIndex = '\0';
        local_1f0.Range.Start.Value = 0;
        local_1f0.Range.End.Value = -1;
        local_350 = (FFrameTime)&local_1f0;
      }
      else {
        local_350.SubFrame = 0.0;
        local_350.FrameNumber.Value = local_2b0.Range.Start.Value - 1;
        TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                  (&local_190,this,(FTimeEvaluationCache *)0x0,local_350);
        local_350 = (FFrameTime)&local_190;
      }
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
      ::
      TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                (&local_250.Data,
                 (TVariant<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>
                  *)local_350);
      uVar9 = local_358;
      local_318 = __real_7fefffffffffffff;
      local_70[0].FrameNumber.Value = 0;
      local_70[0].SubFrame = 0.0;
      local_250.Range =
           *(FCachedInterpolationRange *)
            &((FCachedInterpolationRange *)((longlong)local_350 + 0x58))->Start;
      local_300[0] = param_3;
      local_2f4 = local_348;
      local_2e8 = &local_340;
      local_2e0 = &local_318;
      local_2d8 = local_310;
      local_70[1].FrameNumber.Value = 0;
      local_70[1].SubFrame = 0.0;
      local_70[2].FrameNumber.Value = 0;
      local_70[2].SubFrame = 0.0;
      local_70[3].FrameNumber.Value = 0;
      local_70[3].SubFrame = 0.0;
      local_338 = false;
      local_30c = 0;
      local_2fc = param_2;
      local_2f0 = FVar2.Value;
      local_2ec = FVar3.Value;
      if (local_2b0.Range.Start.Value < local_2b0.Range.End.Value) {
        while (__return_storage_ptr__ = local_308, iVar16 < iVar15) {
          iVar16 = iVar16 + 1;
          uVar12 = UE::MovieScene::Interpolation::FCachedInterpolation::InverseEvaluate
                             (&local_2b0,param_1,local_70);
          if (0 < (int)uVar12) {
            pFVar13 = local_70;
            uVar14 = (ulonglong)uVar12;
            do {
              `FMovieSceneDoubleChannel::InverseEvaluate'::__l2::<lambda_1>::operator()
                        (local_300,*pFVar13);
              pFVar13 = pFVar13 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          __return_storage_ptr__ = local_308;
          if (((local_338 != false) || ((uVar9 & 1) == 0)) ||
             (0x7ffffffe < local_2b0.Range.End.Value)) break;
          local_328 = local_2b0.Range.End.Value + 1;
          uStack_324 = 0;
          FVar6.SubFrame = 0.0;
          FVar6.FrameNumber.Value = local_328;
          TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                    (&local_130,this,(FTimeEvaluationCache *)0x0,FVar6);
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(&local_2b0,&local_130);
          __return_storage_ptr__ = local_308;
          if (local_2b0.Range.End.Value <= local_2b0.Range.Start.Value) break;
        }
      }
      if (local_250.Range.Start.Value < local_250.Range.End.Value) {
        while (iVar16 < iVar15) {
          iVar16 = iVar16 + 1;
          uVar9 = UE::MovieScene::Interpolation::FCachedInterpolation::InverseEvaluate
                            (&local_250,param_1,local_70);
          if (0 < (int)uVar9) {
            pFVar13 = local_70;
            uVar14 = (ulonglong)uVar9;
            do {
              `FMovieSceneDoubleChannel::InverseEvaluate'::__l2::<lambda_1>::operator()
                        (local_300,*pFVar13);
              pFVar13 = pFVar13 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if ((local_338 != false) || (local_250.Range.Start.Value.Value < -0x7fffffff)) break;
          local_320 = local_250.Range.Start.Value.Value - 1;
          uStack_31c = 0;
          FVar7.SubFrame = 0.0;
          FVar7.FrameNumber.Value = local_320;
          TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                    (&local_d0,this,(FTimeEvaluationCache *)0x0,FVar7);
          UE::MovieScene::Interpolation::FCachedInterpolation::operator=(&local_250,&local_d0);
          if (local_250.Range.End.Value <= local_250.Range.Start.Value) break;
        }
      }
      __return_storage_ptr__->bIsSet = local_338;
      if (local_338 == false) {
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->TypedValue = local_340;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// InverseEvaluateBetween @ 1460d8190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDoubleChannel::InverseEvaluateBetween
          (FMovieSceneDoubleChannel *this,double param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  code *pcVar1;
  FFrameTime FVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  FFrameNumber FVar18;
  longlong lVar19;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 local_240;
  uint local_238;
  undefined4 uStack_234;
  uint local_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  ulonglong local_218;
  ulonglong local_210;
  FFrameTime local_208;
  FCachedInterpolation local_200;
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  longlong lStack_188;
  longlong local_180;
  longlong lStack_178;
  longlong local_170;
  longlong lStack_168;
  longlong local_160;
  longlong lStack_158;
  ulonglong local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  byte local_f8;
  undefined7 uStack_f7;
  FCachedInterpolation local_f0;
  ulonglong local_90 [11];
  
  local_90[4] = __security_cookie.value ^ (ulonglong)auStack_268;
  iVar17 = (this->Values).ArrayNum;
  if (iVar17 == 0) {
    if ((this->bHasDefaultValue != false) && (param_1 == this->DefaultValue)) {
      local_248 = 0;
      local_228 = 0;
      uVar14 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_228);
      return (bool)uVar14;
    }
  }
  else if (iVar17 == 1) {
    if (param_1 == *(double *)(this->Values).AllocatorInstance.Data) {
      local_240 = 0;
      local_220 = 0;
      uVar14 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_220);
      return (bool)uVar14;
    }
  }
  else {
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
              (&local_200,this,(FTimeEvaluationCache *)0x0,param_2);
    if (local_200.Range.Start.Value < local_200.Range.End.Value) {
      do {
        iVar17 = UE::MovieScene::Interpolation::FCachedInterpolation::InverseEvaluate
                           (&local_200,param_1,(FFrameTime *)local_90);
        lVar19 = 0;
        if (0 < iVar17) {
          do {
            local_218 = local_90[lVar19];
            cVar15 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_218);
            if (cVar15 == '\0') {
              return false;
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < iVar17);
        }
        lVar11 = lStack_158;
        lVar10 = local_160;
        lVar9 = lStack_168;
        lVar8 = local_170;
        lVar7 = lStack_178;
        lVar6 = local_180;
        lVar5 = lStack_188;
        lVar4 = local_190;
        lVar3 = lStack_198;
        lVar19 = local_1a0;
        FVar18 = local_200.Range.End.Value;
        if (FVar18.Value == 0x7fffffff) {
LAB_1460d83f0:
          local_150 = local_150 & 0xffffffffffffff00;
          uVar12 = local_150;
          local_200.Range.Start.Value = 0;
          local_200.Range.End.Value = -1;
          FVar18.Value = -1;
          local_1a0 = local_200.Data._padding_;
          lStack_198 = local_200.Data._padding_;
          local_190 = local_200.Data._padding_;
          lStack_188 = local_200.Data._padding_;
          local_180 = local_200.Data._padding_;
          lStack_178 = local_200.Data._padding_;
          local_170 = local_200.Data._padding_;
          lStack_168 = local_200.Data._padding_;
          local_160 = local_200.Data._padding_;
          lStack_158 = local_200.Data._padding_;
          local_150 = local_200.Data._80_8_;
          local_200.Data._padding_ = lVar19;
          local_200.Data._padding_ = lVar3;
          local_200.Data._padding_ = lVar4;
          local_200.Data._padding_ = lVar5;
          local_200.Data._padding_ = lVar6;
          local_200.Data._padding_ = lVar7;
          local_200.Data._padding_ = lVar8;
          local_200.Data._padding_ = lVar9;
          local_200.Data._padding_ = lVar10;
          local_200.Data._padding_ = lVar11;
          local_200.Data._80_8_ = uVar12;
        }
        else {
          uStack_234 = 0;
          local_210 = (ulonglong)(uint)FVar18.Value;
          local_238 = FVar18.Value;
          local_208 = param_3;
          if ((param_3.FrameNumber.Value.Value <= FVar18.Value) &&
             ((FVar18.Value != param_3.FrameNumber.Value.Value ||
              (local_208.SubFrame = param_3.SubFrame, bVar16 = local_208.SubFrame <= 0.0, bVar16))))
          goto LAB_1460d83f0;
          local_230 = FVar18.Value + 1;
          uStack_22c = 0;
          FVar2.SubFrame = 0.0;
          FVar2.FrameNumber.Value = local_230;
          TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::GetInterpolationForTime
                    (&local_f0,this,(FTimeEvaluationCache *)0x0,FVar2);
          uVar13 = local_f0.Data._80_8_;
          local_f8 = local_f0.Data.TypeIndex;
          if ((7 < local_f8) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x105,L""), bVar16)) {
            pcVar1 = (code *)swi(3);
            uVar14 = (*pcVar1)();
            return (bool)uVar14;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar13 & 0xff])(&local_148,&local_f0);
          local_200.Data._padding_ = local_148;
          local_200.Data._padding_ = lStack_140;
          FVar18 = local_f0.Range.End.Value;
          local_200.Data._padding_ = local_138;
          local_200.Data._padding_ = lStack_130;
          local_200.Data._padding_ = local_128;
          local_200.Data._padding_ = lStack_120;
          local_200.Data._padding_ = local_118;
          local_200.Data._padding_ = lStack_110;
          local_200.Data._80_8_ = CONCAT71(uStack_f7,local_f8);
          local_200.Data._padding_ = local_108;
          local_200.Data._padding_ = lStack_100;
          local_200.Range = local_f0.Range;
        }
      } while (local_200.Range.Start.Value.Value < FVar18.Value);
    }
  }
  return true;
}

// PopulateCurvePoints @ 1460de4a0

void __thiscall
FMovieSceneDoubleChannel::PopulateCurvePoints
          (FMovieSceneDoubleChannel *this,double param_1,double param_2,double param_3,
          double param_4,FFrameRate param_5,
          TArray<TTuple<double,double>,TSizedDefaultAllocator<32>_> *param_6)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  double local_res8;
  double local_b8;
  double local_b0;
  FFrameRate local_a8;
  FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
  local_a0;
  
  if (this != (FMovieSceneDoubleChannel *)0x0) {
    uVar1 = (this->PreInfinityExtrap).Value;
    uVar2 = (this->PostInfinityExtrap).Value;
    iVar3 = (this->Times).ArrayNum;
    local_b8 = param_4;
    local_a8 = param_5;
    local_res8 = param_1;
    param_5 = (FFrameRate)param_2;
    local_b0 = param_3;
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = (this->Values).ArrayNum;
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((uVar1 == '\0') || (uVar1 == '\x01')) || (uVar1 == '\x02')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (((uVar2 == '\0') || (uVar2 == '\x01')) || (uVar2 == '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((bVar7) || (bVar6)) && ((1 < iVar3 && (1 < iVar4)))) {
      UE::MovieScene::Private::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>::
      FMovieSceneDrawInfiniteBezierCurve<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                (&local_a0,this,&local_a8,&local_b0,&local_b8,&local_res8,(double *)&param_5,param_6
                );
    }
    else {
      UE::MovieScene::Private::
      PopulateCurvePoints<FMovieSceneDoubleChannel,FMovieSceneDoubleValue,double>
                (this,&local_a8,local_b0,local_b8,local_res8,(double)param_5,param_6);
    }
  }
  return;
}

// Serialize @ 1460f3c20

bool __thiscall
FMovieSceneDoubleChannel::Serialize(FMovieSceneDoubleChannel *this,FArchive *param_1)

{
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  FFrameRate *pFVar3;
  undefined1 *puVar4;
  uchar *puVar5;
  longlong *plVar6;
  double *pdVar7;
  int *piVar8;
  int *piVar9;
  ulonglong *puVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  int iStackX_20;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if ((iVar11 < 0xc) &&
     (iVar11 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
     iVar11 < 0x35)) {
    return false;
  }
  iVar11 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  iStackX_20 = iVar11;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PreInfinityExtrap,1);
  }
  else {
    (this->PreInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar5 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PostInfinityExtrap,1);
  }
  else {
    (this->PostInfinityExtrap).Value = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) goto LAB_1460f3311;
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_18[0] = 4;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    puVar4 = &param_1->field_0x2a;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Times).ArrayNum << 2,(longlong)(this->Times).ArrayMax << 2);
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_10[0] = (this->Times).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (0 < (int)auStackX_10[0]) {
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->Times).AllocatorInstance.Data,
                 (longlong)(int)(auStackX_10[0] * auStackX_18[0]));
    }
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Values).ArrayNum << 5,(longlong)(this->Values).ArrayMax << 5
              );
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_18[0] = 0x20;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_10[0] = (this->Values).ArrayNum;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((*puVar4 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    iVar11 = iStackX_20;
    if ((int)auStackX_10[0] < 1) goto LAB_1460f3311;
    iVar11 = auStackX_10[0] * auStackX_18[0];
    pFVar12 = (this->Values).AllocatorInstance.Data;
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_10[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((auStackX_10[0] == 4) && ((param_1->field_0x2a & 1) == 0)) {
      piVar8 = &(this->Times).ArrayMax;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)(this->Times).ArrayNum << 2,(longlong)(this->Times).ArrayMax << 2
                );
      plVar6 = *(longlong **)&param_1->field_0x8;
      auStackX_18[0] = 0;
      if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
        }
      }
      else {
        auStackX_18[0] = *(uint *)*plVar6;
        *plVar6 = *plVar6 + 4;
      }
      if ((int)auStackX_18[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)auStackX_18[0]);
      }
      (this->Times).ArrayNum = 0;
      if (*piVar8 != auStackX_18[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,auStackX_18[0],&(this->Times).AllocatorInstance,0,piVar8);
      }
      if (0 < (int)auStackX_18[0]) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,auStackX_18[0],&(this->Times).AllocatorInstance,&(this->Times).ArrayNum,
                   piVar8);
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(this->Times).AllocatorInstance.Data,
                   (longlong)(int)(auStackX_18[0] * auStackX_10[0]));
      }
    }
    else {
      TArrayPrivateFriend::Serialize<FFrameNumber,TSizedDefaultAllocator<32>_>(param_1,&this->Times)
      ;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
      }
    }
    else {
      auStackX_10[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((auStackX_10[0] != 0x20) || ((param_1->field_0x2a & 1) != 0)) {
      TArrayPrivateFriend::Serialize<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_>
                (param_1,&this->Values);
      iVar11 = iStackX_20;
      goto LAB_1460f3311;
    }
    pTVar1 = &this->Values;
    piVar8 = &(this->Values).ArrayMax;
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Values).ArrayNum << 5,(longlong)(this->Values).ArrayMax << 5
              );
    plVar6 = *(longlong **)&param_1->field_0x8;
    auStackX_18[0] = 0;
    if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if ((int)auStackX_18[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)auStackX_18[0]);
    }
    piVar9 = &(this->Values).ArrayNum;
    *piVar9 = 0;
    if (*piVar8 != auStackX_18[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,auStackX_18[0],&pTVar1->AllocatorInstance,0,piVar8);
    }
    iVar11 = iStackX_20;
    if ((int)auStackX_18[0] < 1) goto LAB_1460f3311;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,auStackX_18[0],&pTVar1->AllocatorInstance,piVar9,piVar8);
    iVar11 = auStackX_18[0] * auStackX_10[0];
    pFVar12 = (pTVar1->AllocatorInstance).Data;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar12,(longlong)iVar11);
  iVar11 = iStackX_20;
LAB_1460f3311:
  pdVar2 = &this->DefaultValue;
  pdVar7 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar2);
    }
  }
  else {
    *pdVar2 = *pdVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  piVar8 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar8 + 1) {
    auStackX_10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      auStackX_10[0] = (uint)(this->bHasDefaultValue != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
    if (1 < auStackX_10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      this->bHasDefaultValue = auStackX_10[0] != 0;
    }
  }
  else {
    this->bHasDefaultValue = *piVar8 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = &this->TickResolution;
  piVar8 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar8 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar3);
    }
  }
  else {
    pFVar3->Numerator = *piVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar8 = &(this->TickResolution).Denominator;
  piVar9 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar9 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar8);
    }
  }
  else {
    *piVar8 = *piVar9;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (0x34 < iVar11) {
    puVar10 = *(ulonglong **)&param_1->field_0x8;
    if (puVar10[1] < *puVar10 + 4) {
      auStackX_10[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_10,4);
      if (1 < auStackX_10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    else {
      *puVar10 = *puVar10 + 4;
    }
  }
  return true;
}

// SerializeFromMismatchedTag @ 1460f5510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMovieSceneDoubleChannel::SerializeFromMismatchedTag
          (FMovieSceneDoubleChannel *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  undefined1 auStack_178 [32];
  FPropertyTypeName local_158 [2];
  undefined1 local_150 [208];
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_80;
  void *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::SerializeFromRichCurve
                    (this,param_1,param_2);
  if (!bVar1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&FloatChannelName,"MovieSceneFloatChannel");
      _Init_thread_footer(&::_TSS0);
    }
    local_158[0].Index = (param_1->TypeName).Index;
    bVar1 = UE::FPropertyTypeName::IsStruct(local_158,FloatChannelName);
    if (!bVar1) {
      return false;
    }
    FMovieSceneFloatChannel::FMovieSceneFloatChannel((FMovieSceneFloatChannel *)local_150);
    TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::CopyChannel<FMovieSceneDoubleChannel>
              (this,(FMovieSceneFloatChannel *)local_150);
    if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_MovieScene();
      Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannel,(UObject *)pUVar2,
                           L"MovieSceneFloatChannel");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FMovieSceneFloatChannel.OuterSingleton,param_2,
               local_150,(void *)0x0);
    TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::CopyChannel<FMovieSceneFloatChannel>
              ((FMovieSceneFloatChannel *)local_150,this);
    local_150._0_8_ = &___7FMovieSceneFloatChannel__6B_;
    local_38 = 0;
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_80);
    TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
    ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
              ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)(local_150 + 0x98));
    if ((FScriptContainerElement *)local_150._128_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._128_8_);
    }
    if ((FScriptContainerElement *)local_150._112_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_150._112_8_);
    }
    local_150._0_8_ = &___7FMovieSceneChannel__6B_;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_150._80_8_,
               local_150._88_4_);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_150._80_8_ !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free((void *)local_150._80_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_150 + 0x48));
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_150._48_8_,
               local_150._56_4_);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_150._48_8_ !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free((void *)local_150._48_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_150 + 0x28));
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_150._16_8_,
               local_150._24_4_);
    if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_150._16_8_ !=
        (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free((void *)local_150._16_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_150 + 8));
  }
  return true;
}

// Set @ 1460f6b70

void __thiscall
FMovieSceneDoubleChannel::Set
          (FMovieSceneDoubleChannel *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  iVar3 = param_2->ArrayNum;
  iVar7 = 0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar3);
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&local_38,iVar3,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,pFVar4,(longlong)iVar3 << 5);
  }
  iVar3 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar3);
  if (iVar3 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&local_48,iVar3,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pFVar4,(longlong)iVar3 << 2);
  }
  if (((int)local_40 != (int)local_30) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneCurveChannelImpl.cpp"
                         ,0x84,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->Times;
  if (pTVar1 != (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&local_48) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_48.Data;
    (this->Times).ArrayNum = (int)local_40;
    (this->Times).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &this->Values;
  if (pTVar2 != (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)&local_38) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = local_38.Data;
    (this->Values).ArrayNum = (int)local_30;
    (this->Values).ArrayMax = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  if (0 < (this->Times).ArrayNum) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&this->KeyHandles,(int)local_res8);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->Times).ArrayNum);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// SetKeysOnly @ 1460f7e00

void __thiscall
FMovieSceneDoubleChannel::SetKeysOnly
          (FMovieSceneDoubleChannel *this,TArrayView<FFrameNumber,int> *param_1,
          TArrayView<FMovieSceneDoubleValue,int> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  
  iVar2 = param_2->ArrayNum;
  if (param_1->ArrayNum != iVar2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTimes.Num() == InValues.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneDoubleChannel.cpp"
                       ,0xbb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  iVar4 = (this->Times).ArrayMax;
  piVar1 = &(this->Times).ArrayMax;
  (this->Times).ArrayNum = iVar3;
  if ((iVar3 == 0) && (iVar4 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,iVar4,&(this->Times).AllocatorInstance,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Times).AllocatorInstance.Data,param_1->DataPtr,(longlong)iVar3 << 2);
    }
  }
  iVar3 = (this->Values).ArrayMax;
  piVar1 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,iVar3,&(this->Values).AllocatorInstance,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->Values).AllocatorInstance.Data,param_2->DataPtr,(longlong)iVar2 << 5);
    }
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return;
}

// UpdateOrAddKeys @ 1460febd0

void __thiscall
FMovieSceneDoubleChannel::UpdateOrAddKeys
          (FMovieSceneDoubleChannel *this,TArrayView<FFrameNumber_const_,int> *param_1,
          TArrayView<FMovieSceneDoubleValue,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FMovieSceneDoubleValue,int> local_48;
  TArrayView<FFrameNumber_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_28;
  
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28._padding_ = (longlong)&this->Times;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneDoubleValue>::UpdateOrAddKeys(&local_28,&local_38,&local_48);
  TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents(this,0.0);
  return;
}

// operator() @ 1504e2c20

bool __thiscall
`FMovieSceneDoubleChannel::AsPiecewiseCurve'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4380896066740944280>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4380896066740944280>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2fa0

bool __thiscall
`FMovieSceneDoubleChannel::AsPiecewiseCurve'::__l34::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4380896066740944242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4380896066740944242>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

