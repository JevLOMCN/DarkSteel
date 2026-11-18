// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 21

// StaticStruct @ 146062410

UScriptStruct * __cdecl FMovieSceneIntegerChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneIntegerChannel,(UObject *)pUVar1,
                         L"MovieSceneIntegerChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneIntegerChannel.OuterSingleton;
}

// GetKeys @ 146062500

void __thiscall
FMovieSceneIntegerChannel::GetKeys
          (FMovieSceneIntegerChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 1460625a0

void __thiscall
FMovieSceneIntegerChannel::GetKeyTimes
          (FMovieSceneIntegerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// SetKeyTimes @ 146062640

void __thiscall
FMovieSceneIntegerChannel::SetKeyTimes
          (FMovieSceneIntegerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<int> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<int>::SetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

// DuplicateKeys @ 1460626e0

void __thiscall
FMovieSceneIntegerChannel::DuplicateKeys
          (FMovieSceneIntegerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<int> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<int>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 146062780

void __thiscall
FMovieSceneIntegerChannel::DeleteKeys
          (FMovieSceneIntegerChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<int> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<int>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 146062810

void __thiscall
FMovieSceneIntegerChannel::DeleteKeysFrom
          (FMovieSceneIntegerChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  FFrameTime FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double dVar9;
  undefined1 local_res8 [8];
  FKeyHandle local_res20 [2];
  undefined1 local_98 [8];
  int local_90;
  undefined4 uStack_8c;
  double local_88;
  TMovieSceneChannelData<int> local_80;
  TMovieSceneChannelData<int> local_60;
  
  pTVar2 = &this->Values;
  pTVar1 = &this->Times;
  if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar2 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (this->Times).ArrayNum;
  if (iVar8 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (0 < iVar8) {
    uStack_8c = 0;
    FVar4.SubFrame = 0.0;
    FVar4.FrameNumber.Value = param_1.Value;
    local_88 = 0.0;
    local_90 = param_1.Value;
    bVar5 = EvaluateInterp(this,FVar4,&local_88);
    if (bVar5) {
      local_80._padding_ = (longlong)&this->KeyHandles;
      dVar9 = local_88 * __real_4000000000000000 - __real_3fe0000000000000;
      local_80._padding_ = (longlong)pTVar1;
      local_80._padding_ = (longlong)this;
      local_80.Values = pTVar2;
      if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (pTVar2 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times && Values",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x122,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = FMovieSceneChannelData::FindKey
                        ((FMovieSceneChannelData *)&local_80,param_1,(FFrameNumber)0x0);
      iVar8 = (int)((longlong)ROUND(dVar9) >> 1);
      if (uVar6 == 0xffffffff) {
        uVar6 = TMovieSceneChannelData<int>::AddKey(&local_80,param_1,iVar8);
      }
      else {
        uVar7 = 0;
        if ((int)uVar6 < (this->Values).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4) = iVar8;
      }
      if ((((int)uVar6 < 0) || (*(int *)(local_80._padding_ + 8) <= (int)uVar6)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times->IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                             ,0x69,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FKeyHandleLookupTable *)local_80._padding_ == (FKeyHandleLookupTable *)0x0) {
        local_res8[0] = 0;
        `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res8);
        FKeyHandle::FKeyHandle(local_res20);
      }
      else {
        FKeyHandleLookupTable::FindOrAddKeyHandle
                  ((FKeyHandleLookupTable *)local_80._padding_,(int)local_98);
      }
    }
  }
  local_60._padding_ = (longlong)&this->KeyHandles;
  local_60._padding_ = (longlong)pTVar1;
  local_60._padding_ = (longlong)this;
  local_60.Values = pTVar2;
  if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar2 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TMovieSceneChannelData<int>::DeleteKeysFrom(&local_60,param_1,param_2);
  return;
}

// RemapTimes @ 146062af0

void __thiscall
FMovieSceneIntegerChannel::RemapTimes(FMovieSceneIntegerChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<int> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<int>::RemapTimes(&local_28,param_1);
  return;
}

// ComputeEffectiveRange @ 146062b70

TRange<FFrameNumber> * __thiscall
FMovieSceneIntegerChannel::ComputeEffectiveRange
          (FMovieSceneIntegerChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

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
     (this == (FMovieSceneIntegerChannel *)0xffffffffffffff78)) {
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

// GetNumKeys @ 146062d20

int __thiscall FMovieSceneIntegerChannel::GetNumKeys(FMovieSceneIntegerChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 146062d30

void __thiscall FMovieSceneIntegerChannel::Reset(FMovieSceneIntegerChannel *this)

{
  (this->Times).ArrayNum = 0;
  if ((this->Times).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Times).AllocatorInstance,0,&(this->Times).ArrayMax);
  }
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Values).AllocatorInstance,0,&(this->Values).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  this->bHasDefaultValue = false;
  return;
}

// Offset @ 146062dc0

void __thiscall
FMovieSceneIntegerChannel::Offset(FMovieSceneIntegerChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_28.Times = &this->Times;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// Optimize @ 146062e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneIntegerChannel::Optimize
          (FMovieSceneIntegerChannel *this,FKeyDataOptimizationParams *param_1)

{
  int iVar1;
  FFrameNumber FVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  TRangeBound<FFrameNumber> TVar5;
  code *pcVar6;
  FFrameTime FVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  double dStack_a8;
  longlong lStack_a0;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_98;
  TMovieSceneChannelData<int> aTStack_88 [2];
  
  aTStack_88[0]._padding_ = (longlong)&this->KeyHandles;
  aTStack_88[0]._padding_ = (longlong)&this->Times;
  aTStack_88[0].Values = &this->Values;
  aTStack_88[0]._padding_ = (longlong)this;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)aTStack_88[0]._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (aTStack_88[0].Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x122,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)(aTStack_88[0]._padding_ + 8) < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (1 < *(int *)(aTStack_88[0]._padding_ + 8)) {
    uVar12 = *(int *)(aTStack_88[0]._padding_ + 8);
    pFVar4 = ((ForAnyElementType *)aTStack_88[0]._padding_)->Data;
    if (((int)uVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar9 = __real_4000000000000000;
    dVar8 = __real_3fe0000000000000;
    TVar5 = (param_1->Range).LowerBound;
    uVar15 = 0;
    uVar16 = uVar15;
    if ((TVar5.Type.Value.Value != '\x02') &&
       (uVar17 = uVar12, uVar14 = uVar15, uVar16 = 0, 0 < (int)uVar12)) {
      do {
        uVar18 = uVar17 >> 1;
        uVar16 = uVar14;
        if (*(int *)(pFVar4 + (longlong)(int)(uVar18 + uVar14) * 4) < TVar5.Value.Value.Value) {
          uVar16 = uVar18 + uVar14 + (uVar17 & 1);
        }
        uVar17 = uVar18;
        uVar14 = uVar16;
      } while (uVar18 != 0);
    }
    TVar5 = (param_1->Range).UpperBound;
    uVar17 = uVar12;
    if ((TVar5.Type.Value.Value != '\x02') && (uVar17 = 0, 0 < (int)uVar12)) {
      do {
        uVar14 = uVar12 >> 1;
        uVar17 = uVar15;
        if (*(int *)(pFVar4 + (longlong)(int)(uVar14 + uVar15) * 4) <= TVar5.Value.Value.Value) {
          uVar17 = uVar14 + uVar15 + (uVar12 & 1);
        }
        uVar12 = uVar14;
        uVar15 = uVar17;
      } while (uVar14 != 0);
    }
    lStack_a0 = (longlong)(int)uVar17;
    lVar19 = (longlong)(int)uVar16;
    if (lVar19 < lStack_a0) {
      do {
        iVar1 = *(int *)(aTStack_88[0]._padding_ + 8);
        if ((iVar1 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (iVar1 <= (int)uVar16) {
          return;
        }
        iVar1 = *(int *)(aTStack_88[0]._padding_ + 8);
        pFVar4 = ((ForAnyElementType *)aTStack_88[0]._padding_)->Data;
        if ((iVar1 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar15 = ~uVar16 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar16 < iVar1) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2.Value = *(int *)(pFVar4 + lVar19 * 4);
        iVar1 = (aTStack_88[0].Values)->ArrayNum;
        pFVar4 = ((aTStack_88[0].Values)->AllocatorInstance).Data;
        if ((iVar1 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = 0;
        if ((int)uVar16 < iVar1) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar1 = *(int *)(pFVar4 + lVar19 * 4);
        if ((((int)uVar16 < 0) || (*(int *)(aTStack_88[0]._padding_ + 8) <= (int)uVar16)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Times->IsValidIndex(KeyIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                ,0x1fc,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((FMovieSceneIntegerChannel *)aTStack_88[0]._padding_ !=
             (FMovieSceneIntegerChannel *)0x0) &&
           (bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                               ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                (aTStack_88[0]._padding_ + 0x28)), lVar10 = aTStack_88[0]._padding_,
           bVar11)) {
          uVar12 = 0;
          if ((int)uVar16 < *(int *)(aTStack_88[0]._padding_ + 8)) {
            uVar12 = uVar15;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar3 = *(undefined4 *)(((ForAnyElementType *)lVar10)->Data + lVar19 * 4);
          TStack_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_98.ArrayNum = 0;
          TStack_98.ArrayMax = 0;
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&TStack_98.AllocatorInstance,&TStack_98.ArrayMax);
          TStack_98.ArrayNum = iVar13 + 1;
          *(ulonglong *)(TStack_98.AllocatorInstance.Data + (longlong)iVar13 * 8) =
               CONCAT44(uVar3,uVar16);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast((TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                       *)(aTStack_88[0]._padding_ + 0x28),
                      (FMovieSceneChannel *)aTStack_88[0]._padding_,&TStack_98);
          if (TStack_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_98.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)aTStack_88[0]._padding_,
                   uVar16,No);
        TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(aTStack_88[0].Values,uVar16,No);
        if ((FKeyHandleLookupTable *)aTStack_88[0]._padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle
                    ((FKeyHandleLookupTable *)aTStack_88[0]._padding_,uVar16);
        }
        FVar7.SubFrame = 0.0;
        FVar7.FrameNumber.Value = FVar2.Value;
        dStack_a8 = 0.0;
        bVar11 = EvaluateInterp(this,FVar7,&dStack_a8);
        if ((bVar11) && ((int)((longlong)ROUND(dStack_a8 * dVar9 - dVar8) >> 1) == iVar1)) {
          uVar16 = uVar16 - 1;
          lVar19 = lVar19 + -1;
        }
        else {
          TMovieSceneChannelData<int>::AddKey(aTStack_88,FVar2,iVar1);
        }
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar19 < lStack_a0);
    }
  }
  return;
}

// ClearDefault @ 146062e50

void __thiscall FMovieSceneIntegerChannel::ClearDefault(FMovieSceneIntegerChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// GetHandle @ 146062e60

FKeyHandle __thiscall
FMovieSceneIntegerChannel::GetHandle(FMovieSceneIntegerChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetIndex @ 146062ef0

int __thiscall
FMovieSceneIntegerChannel::GetIndex(FMovieSceneIntegerChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  if ((this == (FMovieSceneIntegerChannel *)0xffffffffffffff90) ||
     (this == (FMovieSceneIntegerChannel *)0xffffffffffffff78)) {
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

// FMovieSceneIntegerChannel @ 146093c00

FMovieSceneIntegerChannel * __thiscall
FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(FMovieSceneIntegerChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneIntegerChannel__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bInterpolateLinearKeys = false;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = 0;
  (this->Times).ArrayMax = 0;
  this->DefaultValue = 0;
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

// ~FMovieSceneIntegerChannel @ 146097cf0

void __thiscall
FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(FMovieSceneIntegerChannel *this)

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

// Evaluate @ 1460c2c60

bool __thiscall
FMovieSceneIntegerChannel::Evaluate
          (FMovieSceneIntegerChannel *this,FFrameTime param_1,long64 *param_2)

{
  bool bVar1;
  double local_res18 [2];
  
  local_res18[0] = 0.0;
  bVar1 = EvaluateInterp(this,param_1,local_res18);
  *param_2 = (longlong)ROUND(local_res18[0] * __real_4000000000000000 - __real_3fe0000000000000) >>
             1;
  return bVar1;
}

// EvaluateInterp @ 1460c3760

bool __thiscall
FMovieSceneIntegerChannel::EvaluateInterp
          (FMovieSceneIntegerChannel *this,FFrameTime param_1,double *param_2)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FFrameNumber FVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  float fStackX_24;
  FCycleParams local_88 [2];
  
  iVar2 = (this->Times).ArrayNum;
  if (iVar2 == 0) {
    if (this->bHasDefaultValue == false) {
      return false;
    }
    *param_2 = (double)this->DefaultValue;
    return true;
  }
  uVar16 = 0;
  uVar17 = 0;
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
  uVar11 = iVar2 - 1;
  FVar3.Value = *(int *)(this->Times).AllocatorInstance.Data;
  uVar9 = uVar17;
  if ((int)uVar11 < iVar2) {
    uVar9 = ~uVar11 >> 0x1f;
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
  FVar4.Value = *(int *)((this->Times).AllocatorInstance.Data +
                        (longlong)(this->Times).ArrayNum * 4 + -4);
  FVar15 = param_1.FrameNumber.Value;
  uVar9 = 0;
  fStackX_24 = param_1.SubFrame;
  if ((FVar15.Value < FVar3.Value) || ((FVar15.Value == FVar3.Value && (fStackX_24 < 0.0)))) {
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
      *param_2 = (double)*(int *)(this->Values).AllocatorInstance.Data;
      return true;
    }
  }
  else if ((FVar4.Value < FVar15.Value) || ((FVar15.Value == FVar4.Value && (0.0 < fStackX_24)))) {
    uVar1 = (this->PostInfinityExtrap).Value;
    if (uVar1 == '\x05') {
      return false;
    }
    if ((byte)(uVar1 - 3) < 2) {
      iVar2 = (this->Values).ArrayNum;
      uVar17 = iVar2 - 1;
      if ((int)uVar17 < iVar2) {
        uVar9 = ~uVar17 >> 0x1f;
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
      *param_2 = (double)*(int *)((this->Values).AllocatorInstance.Data +
                                 (longlong)(this->Values).ArrayNum * 4 + -4);
      return true;
    }
  }
  UE::MovieScene::CycleTime(local_88,FVar3,FVar4,param_1);
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
  iVar2 = (this->Values).ArrayNum;
  uVar12 = iVar2 - 1;
  iVar5 = *(int *)(this->Values).AllocatorInstance.Data;
  uVar11 = uVar9;
  if ((int)uVar12 < iVar2) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((FVar15.Value < FVar3.Value) || ((FVar15.Value == FVar3.Value && (fStackX_24 < 0.0)))) {
    uVar1 = (this->PreInfinityExtrap).Value;
  }
  else {
    if ((FVar15.Value <= FVar4.Value) && ((FVar15.Value != FVar4.Value || (fStackX_24 <= 0.0))))
    goto LAB_1460c3a5d;
    uVar1 = (this->PostInfinityExtrap).Value;
  }
  if (uVar1 == '\x01') {
    local_88[0].ValueOffset =
         ((double)*(int *)((this->Values).AllocatorInstance.Data +
                          (longlong)(this->Values).ArrayNum * 4 + -4) - (double)iVar5) *
         (double)local_88[0].CycleCount;
  }
  else if (uVar1 == '\x02') {
    UE::MovieScene::FCycleParams::Oscillate(local_88,FVar3.Value,FVar4.Value);
  }
LAB_1460c3a5d:
  uVar11 = (this->Times).ArrayNum;
  uVar12 = uVar17;
  uVar13 = uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar14 = uVar13 >> 1;
      iVar2 = *(int *)((this->Times).AllocatorInstance.Data + (longlong)(int)(uVar14 + uVar16) * 4);
      if ((local_88[0].Time.FrameNumber.Value < iVar2) ||
         ((uVar10 = uVar9, local_88[0].Time.FrameNumber.Value == iVar2 &&
          (local_88[0].Time.SubFrame < 0.0)))) {
        uVar10 = 1;
      }
      uVar12 = uVar16;
      if (uVar10 == 0) {
        uVar12 = uVar14 + uVar16 + (uVar13 & 1);
      }
      uVar13 = uVar14;
      uVar16 = uVar12;
    } while (uVar14 != 0);
  }
  uVar16 = uVar12 - 1;
  if ((int)(uVar12 - 1) < 0) {
    uVar16 = uVar17;
  }
  if ((this->bInterpolateLinearKeys == false) || ((int)(uVar11 - 1) <= (int)uVar16)) {
    uVar17 = 0;
    if ((int)uVar16 < (this->Values).ArrayNum) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    *param_2 = (double)(*(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar16 * 4)
                       + (int)(local_88[0].ValueOffset + __real_3fe0000000000000));
  }
  else {
    uVar11 = uVar9;
    if ((int)uVar16 < (this->Values).ArrayNum) {
      uVar11 = ~uVar16 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    uVar11 = uVar16 + 1;
    uVar12 = uVar9;
    if ((int)uVar11 < (this->Values).ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    dVar19 = (double)*(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar2 = *(int *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
    if ((int)uVar16 < (this->Times).ArrayNum) {
      uVar9 = ~uVar16 >> 0x1f;
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
    dVar18 = (double)*(int *)((this->Times).AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
    if ((int)uVar11 < (this->Times).ArrayNum) {
      uVar17 = ~uVar11 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    *param_2 = ((((double)local_88[0].Time.FrameNumber.Value + (double)local_88[0].Time.SubFrame) -
                dVar18) /
               ((double)*(int *)((this->Times).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) -
               dVar18)) * ((double)iVar2 - dVar19) + dVar19 + local_88[0].ValueOffset +
               __real_3fe0000000000000;
  }
  return true;
}

// SerializeFromMismatchedTag @ 1460f5740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMovieSceneIntegerChannel::SerializeFromMismatchedTag
          (FMovieSceneIntegerChannel *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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
  TArray<int,TSizedDefaultAllocator<32>_> *this_02;
  double in_XMM2_Qa;
  undefined1 auStackY_138 [32];
  FFrameNumber local_108 [2];
  int local_100;
  int local_fc;
  FPropertyTypeName local_f8;
  undefined1 local_f4 [4];
  TIndexedContainerIterator<TArray<FIntegralKey,TSizedDefaultAllocator<32>_>_const_,FIntegralKey_const_,int>
  local_f0;
  longlong local_e0;
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
  local_f8.Index = (param_1->TypeName).Index;
  bVar7 = UE::FPropertyTypeName::IsStruct(&local_f8,IntegralCurveName);
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
    this->DefaultValue = local_50;
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
              (4,4,iVar12,&this_02->AllocatorInstance,(this->Values).ArrayNum,piVar2);
  }
  GetLegacyConversionFrameRate();
  local_fc = 0;
  FIntegralCurve::GetKeyIterator((FIntegralCurve *)local_c8,&local_f0);
  local_e0 = 0;
  iVar12 = 0;
LAB_1460f58e7:
  do {
    if ((local_f0.Index < 0) || ((local_f0.Container)->ArrayNum <= local_f0.Index)) {
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
    if (local_f0.Index < (local_f0.Container)->ArrayNum) {
      uVar13 = (uint)~local_f0.Index >> 0x1f;
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
    UpgradeLegacyMovieSceneTime((UObject *)local_f4,(FFrameRate)0x0,in_XMM2_Qa);
    pTVar5 = local_f0.Container;
    lVar14 = (longlong)local_f0.Index;
    uVar13 = 0;
    if (local_f0.Index < (local_f0.Container)->ArrayNum) {
      uVar13 = (uint)~local_f0.Index >> 0x1f;
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
    lVar6 = local_e0;
    iVar4 = local_fc;
    iVar10 = (this->Times).ArrayNum;
    local_100 = *(int *)((pTVar5->AllocatorInstance).Data + lVar14 * 8 + 4);
    iVar9 = local_fc + 1;
    lVar14 = local_e0 + 1;
    local_108[0].Value = (int)local_f4;
    if (local_e0 < 1) {
      local_fc = iVar9;
      local_e0 = lVar14;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_00->AllocatorInstance,piVar1);
      }
LAB_1460f5b65:
      (this->Times).ArrayNum = iVar10 + 1;
      *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_108[0].Value;
      iVar12 = (this->Values).ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_02->AllocatorInstance,piVar2);
      }
      (this->Values).ArrayNum = iVar12 + 1;
      *(int *)((this_02->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_100;
      local_f0.Index = local_f0.Index + 1;
      iVar12 = local_fc;
      goto LAB_1460f58e7;
    }
    uVar13 = 0;
    if (local_fc + -1 < iVar10) {
      uVar13 = (uint)-iVar12 >> 0x1f;
    }
    local_fc = iVar9;
    local_e0 = lVar14;
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
    if (*(int *)((this_00->AllocatorInstance).Data + lVar6 * 4 + -4) <= local_108[0].Value) {
      iVar10 = (this->Times).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_00->AllocatorInstance,piVar1);
      }
      goto LAB_1460f5b65;
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
        if (*(int *)((this_00->AllocatorInstance).Data + lVar14) <= local_108[0].Value) {
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_108,uVar13 + 1);
          TArray<int,TSizedDefaultAllocator<32>_>::Insert(this_02,&local_100,uVar13 + 1);
          local_f0.Index = local_f0.Index + 1;
          iVar12 = local_fc;
          goto LAB_1460f58e7;
        }
        lVar14 = lVar14 + -4;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_108,0);
    TArray<int,TSizedDefaultAllocator<32>_>::Insert(this_02,&local_100,0);
    local_f0.Index = local_f0.Index + 1;
    iVar12 = local_fc;
  } while( true );
}

