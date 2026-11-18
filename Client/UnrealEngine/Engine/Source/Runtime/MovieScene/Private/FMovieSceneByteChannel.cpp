// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 18

// StaticStruct @ 1460615d0

UScriptStruct * __cdecl FMovieSceneByteChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneByteChannel,(UObject *)pUVar1,
                         L"MovieSceneByteChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneByteChannel.OuterSingleton;
}

// GetKeys @ 146061610

void __thiscall
FMovieSceneByteChannel::GetKeys
          (FMovieSceneByteChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// GetKeyTimes @ 1460616b0

void __thiscall
FMovieSceneByteChannel::GetKeyTimes
          (FMovieSceneByteChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// SetKeyTimes @ 146061750

void __thiscall
FMovieSceneByteChannel::SetKeyTimes
          (FMovieSceneByteChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<unsigned_char> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<unsigned_char>::SetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

// DuplicateKeys @ 1460617f0

void __thiscall
FMovieSceneByteChannel::DuplicateKeys
          (FMovieSceneByteChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<unsigned_char> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<unsigned_char>::DuplicateKeys(&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 146061890

void __thiscall
FMovieSceneByteChannel::DeleteKeys
          (FMovieSceneByteChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<unsigned_char> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<unsigned_char>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 146061920

void __thiscall
FMovieSceneByteChannel::DeleteKeysFrom
          (FMovieSceneByteChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  FFrameTime FVar5;
  FScriptContainerElement FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement local_res8 [8];
  undefined1 local_res20 [8];
  FKeyHandle local_88;
  undefined1 local_84 [4];
  int local_80;
  undefined4 uStack_7c;
  TMovieSceneChannelData<unsigned_char> local_78;
  TMovieSceneChannelData<unsigned_char> local_58;
  
  pTVar2 = &this->Values;
  pTVar1 = &this->Times;
  if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = (this->Times).ArrayNum;
  if (iVar3 < 0) {
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
  else if (0 < iVar3) {
    uStack_7c = 0;
    FVar5.SubFrame = 0.0;
    FVar5.FrameNumber.Value = param_1.Value;
    local_res8[0] = (FScriptContainerElement)0x0;
    local_80 = param_1.Value;
    bVar7 = Evaluate(this,FVar5,(uchar *)local_res8);
    if (bVar7) {
      local_78._padding_ = (longlong)&this->KeyHandles;
      local_78._padding_ = (longlong)pTVar1;
      local_78._padding_ = (longlong)this;
      local_78.Values = pTVar2;
      if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times && Values",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x122,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar6 = local_res8[0];
      uVar8 = FMovieSceneChannelData::FindKey
                        ((FMovieSceneChannelData *)&local_78,param_1,(FFrameNumber)0x0);
      if (uVar8 == 0xffffffff) {
        uVar8 = TMovieSceneChannelData<unsigned_char>::AddKey(&local_78,param_1,(uchar)FVar6);
      }
      else {
        uVar9 = 0;
        if ((int)uVar8 < (this->Values).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pTVar2->AllocatorInstance).Data[(int)uVar8] = FVar6;
      }
      if ((((int)uVar8 < 0) || (*(int *)(local_78._padding_ + 8) <= (int)uVar8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times->IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                             ,0x69,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((FKeyHandleLookupTable *)local_78._padding_ == (FKeyHandleLookupTable *)0x0) {
        local_res20[0] = 0;
        `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res20);
        FKeyHandle::FKeyHandle(&local_88);
      }
      else {
        FKeyHandleLookupTable::FindOrAddKeyHandle
                  ((FKeyHandleLookupTable *)local_78._padding_,(int)local_84);
      }
    }
  }
  local_58._padding_ = (longlong)&this->KeyHandles;
  local_58._padding_ = (longlong)pTVar1;
  local_58._padding_ = (longlong)this;
  local_58.Values = pTVar2;
  if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TMovieSceneChannelData<unsigned_char>::DeleteKeysFrom(&local_58,param_1,param_2);
  return;
}

// RemapTimes @ 146061bf0

void __thiscall
FMovieSceneByteChannel::RemapTimes(FMovieSceneByteChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<unsigned_char> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<unsigned_char>::RemapTimes(&local_28,param_1);
  return;
}

// ComputeEffectiveRange @ 146061c70

TRange<FFrameNumber> * __thiscall
FMovieSceneByteChannel::ComputeEffectiveRange
          (FMovieSceneByteChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

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
     (this == (FMovieSceneByteChannel *)0xffffffffffffff78)) {
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

// GetNumKeys @ 146061e20

int __thiscall FMovieSceneByteChannel::GetNumKeys(FMovieSceneByteChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 146061e30

void __thiscall FMovieSceneByteChannel::Reset(FMovieSceneByteChannel *this)

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

// Offset @ 146061ec0

void __thiscall FMovieSceneByteChannel::Offset(FMovieSceneByteChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_28.Times = &this->Times;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
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

// Optimize @ 146061f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneByteChannel::Optimize(FMovieSceneByteChannel *this,FKeyDataOptimizationParams *param_1)

{
  FScriptContainerElement FVar1;
  FFrameNumber FVar2;
  FScriptContainerElement *pFVar3;
  TRangeBound<FFrameNumber> TVar4;
  code *pcVar5;
  FFrameTime FVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement aFStackX_18 [8];
  uint uStackX_20;
  undefined4 uStackX_24;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> TStack_68;
  TMovieSceneChannelData<unsigned_char> TStack_58;
  
  TStack_58._padding_ = (longlong)&this->KeyHandles;
  TStack_58._padding_ = (longlong)&this->Times;
  TStack_58.Values = &this->Values;
  TStack_58._padding_ = (longlong)this;
  if ((((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_ ==
        (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (TStack_58.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)(TStack_58._padding_ + 8) < 0) {
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
  else if (1 < *(int *)(TStack_58._padding_ + 8)) {
    uVar14 = *(int *)(TStack_58._padding_ + 8);
    pFVar3 = ((ForAnyElementType *)TStack_58._padding_)->Data;
    if (((int)uVar14 < 0) &&
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
    uVar13 = uVar9;
    if ((TVar4.Type.Value.Value != '\x02') &&
       (uVar16 = uVar14, uVar11 = uVar9, uVar13 = 0, 0 < (int)uVar14)) {
      do {
        uVar15 = uVar16 >> 1;
        uVar13 = uVar11;
        if (*(int *)(pFVar3 + (longlong)(int)(uVar15 + uVar11) * 4) < TVar4.Value.Value.Value) {
          uVar13 = uVar15 + uVar11 + (uVar16 & 1);
        }
        uVar16 = uVar15;
        uVar11 = uVar13;
      } while (uVar15 != 0);
    }
    TVar4 = (param_1->Range).UpperBound;
    if ((TVar4.Type.Value.Value != '\x02') &&
       (bVar8 = 0 < (int)uVar14, uVar16 = uVar14, uVar14 = 0, bVar8)) {
      do {
        uVar11 = uVar16 >> 1;
        uVar14 = uVar9;
        if (*(int *)(pFVar3 + (longlong)(int)(uVar11 + uVar9) * 4) <= TVar4.Value.Value.Value) {
          uVar14 = uVar11 + uVar9 + (uVar16 & 1);
        }
        uVar16 = uVar11;
        uVar9 = uVar14;
      } while (uVar11 != 0);
    }
    for (lVar12 = (longlong)(int)uVar13; lVar12 < (int)uVar14; lVar12 = lVar12 + 1) {
      iVar10 = ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)TStack_58._padding_)->ArrayNum;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iVar10 <= (int)uVar13) {
        return;
      }
      iVar10 = *(int *)(TStack_58._padding_ + 8);
      pFVar3 = ((ForAnyElementType *)TStack_58._padding_)->Data;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2.Value = *(int *)(pFVar3 + lVar12 * 4);
      iVar10 = (TStack_58.Values)->ArrayNum;
      pFVar3 = ((TStack_58.Values)->AllocatorInstance).Data;
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
      if ((int)uVar13 < iVar10) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = pFVar3[lVar12];
      if ((((int)uVar13 < 0) || (*(int *)(TStack_58._padding_ + 8) <= (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times->IsValidIndex(KeyIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x1fc,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((FMovieSceneByteChannel *)TStack_58._padding_ != (FMovieSceneByteChannel *)0x0) &&
         (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             (TStack_58._padding_ + 0x28)), lVar7 = TStack_58._padding_, bVar8)) {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)(TStack_58._padding_ + 8)) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStackX_24 = *(undefined4 *)(((ForAnyElementType *)lVar7)->Data + lVar12 * 4);
        TStack_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_68.ArrayNum = 0;
        TStack_68.ArrayMax = 0;
        uStackX_20 = uVar13;
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&TStack_68.AllocatorInstance,&TStack_68.ArrayMax);
        TStack_68.ArrayNum = iVar10 + 1;
        *(ulonglong *)(TStack_68.AllocatorInstance.Data + (longlong)iVar10 * 8) =
             CONCAT44(uStackX_24,uStackX_20);
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
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::RemoveAt(TStack_58.Values,uVar13,No);
      if ((FKeyHandleLookupTable *)TStack_58._padding_ != (FKeyHandleLookupTable *)0x0) {
        FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)TStack_58._padding_,uVar13)
        ;
      }
      FVar6.SubFrame = 0.0;
      FVar6.FrameNumber.Value = FVar2.Value;
      aFStackX_18[0] = (FScriptContainerElement)0x0;
      bVar8 = Evaluate(this,FVar6,(uchar *)aFStackX_18);
      if ((bVar8) && (aFStackX_18[0] == FVar1)) {
        uVar13 = uVar13 - 1;
        lVar12 = lVar12 + -1;
      }
      else {
        TMovieSceneChannelData<unsigned_char>::AddKey(&TStack_58,FVar2,(uchar)FVar1);
      }
      uVar13 = uVar13 + 1;
    }
  }
  return;
}

// ClearDefault @ 146061f50

void __thiscall FMovieSceneByteChannel::ClearDefault(FMovieSceneByteChannel *this)

{
  this->bHasDefaultValue = false;
  return;
}

// FMovieSceneByteChannel @ 1460931e0

FMovieSceneByteChannel * __thiscall
FMovieSceneByteChannel::FMovieSceneByteChannel(FMovieSceneByteChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneByteChannel__6B_;
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
  this->DefaultValue = '\0';
  this->bHasDefaultValue = false;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->PreInfinityExtrap = '\x04';
  this->PostInfinityExtrap = '\x04';
  *(undefined8 *)&(this->KeyHandles).field_0x10 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x18 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x48 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x50 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x70 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x80 = 0;
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
  return this;
}

// ~FMovieSceneByteChannel @ 1460978b0

void __thiscall FMovieSceneByteChannel::~FMovieSceneByteChannel(FMovieSceneByteChannel *this)

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

// Evaluate @ 1460c2700

bool __thiscall
FMovieSceneByteChannel::Evaluate(FMovieSceneByteChannel *this,FFrameTime param_1,uchar *param_2)

{
  uchar uVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FFrameNumber FVar4;
  FFrameNumber FVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  FFrameNumber FVar12;
  uint uVar13;
  uint uVar14;
  float fStackX_24;
  FCycleParams local_68 [2];
  
  iVar3 = (this->Times).ArrayNum;
  if (iVar3 == 0) {
    if (this->bHasDefaultValue == false) {
      return false;
    }
    *param_2 = this->DefaultValue;
    return true;
  }
  if ((iVar3 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar3 = (this->Times).ArrayNum;
  uVar11 = iVar3 - 1;
  FVar4.Value = *(int *)(this->Times).AllocatorInstance.Data;
  uVar10 = 0;
  uVar14 = uVar10;
  if ((int)uVar11 < iVar3) {
    uVar14 = ~uVar11 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  FVar5.Value = *(int *)((this->Times).AllocatorInstance.Data +
                        (longlong)(this->Times).ArrayNum * 4 + -4);
  FVar12 = param_1.FrameNumber.Value;
  fStackX_24 = param_1.SubFrame;
  if ((FVar12.Value < FVar4.Value) || ((FVar12.Value == FVar4.Value && (fStackX_24 < 0.0)))) {
    uVar1 = (this->PreInfinityExtrap).Value;
    if (uVar1 == '\x05') {
      return false;
    }
    if ((byte)(uVar1 - 3) < 2) {
      if (((this->Values).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      *param_2 = (uchar)*(this->Values).AllocatorInstance.Data;
      return true;
    }
  }
  else if ((FVar5.Value < FVar12.Value) || ((FVar12.Value == FVar5.Value && (0.0 < fStackX_24)))) {
    uVar1 = (this->PostInfinityExtrap).Value;
    if (uVar1 == '\x05') {
      return false;
    }
    if ((byte)(uVar1 - 3) < 2) {
      iVar3 = (this->Values).ArrayNum;
      uVar14 = iVar3 - 1;
      if ((int)uVar14 < iVar3) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      *param_2 = (uchar)(this->Values).AllocatorInstance.Data
                        [(longlong)(this->Values).ArrayNum + -1];
      return true;
    }
  }
  UE::MovieScene::CycleTime(local_68,FVar4,FVar5,param_1);
  if (((this->Values).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar3 = (this->Values).ArrayNum;
  FVar2 = *(this->Values).AllocatorInstance.Data;
  uVar11 = iVar3 - 1;
  uVar14 = uVar10;
  if ((int)uVar11 < iVar3) {
    uVar14 = ~uVar11 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((FVar12.Value < FVar4.Value) || ((FVar12.Value == FVar4.Value && (fStackX_24 < 0.0)))) {
    uVar1 = (this->PreInfinityExtrap).Value;
  }
  else {
    if ((FVar12.Value <= FVar5.Value) && ((FVar12.Value != FVar5.Value || (fStackX_24 <= 0.0))))
    goto LAB_1460c29f8;
    uVar1 = (this->PostInfinityExtrap).Value;
  }
  if (uVar1 == '\x01') {
    local_68[0].ValueOffset =
         ((double)(byte)(this->Values).AllocatorInstance.Data
                        [(longlong)(this->Values).ArrayNum + -1] - (double)(byte)FVar2) *
         (double)local_68[0].CycleCount;
  }
  else if (uVar1 == '\x02') {
    UE::MovieScene::FCycleParams::Oscillate(local_68,FVar4.Value,FVar5.Value);
  }
LAB_1460c29f8:
  uVar14 = (this->Times).ArrayNum;
  uVar11 = 0;
  if (0 < (int)uVar14) {
    fStackX_24 = local_68[0].Time.SubFrame;
    do {
      iVar3 = (uVar14 >> 1) + uVar10;
      iVar6 = *(int *)((this->Times).AllocatorInstance.Data + (longlong)iVar3 * 4);
      if ((local_68[0].Time.FrameNumber.Value.Value < iVar6) ||
         ((uVar13 = uVar11, local_68[0].Time.FrameNumber.Value.Value == iVar6 && (fStackX_24 < 0.0))
         )) {
        uVar13 = 1;
      }
      if (uVar13 == 0) {
        uVar10 = iVar3 + (uVar14 & 1);
      }
      uVar13 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar13 != 0);
  }
  uVar14 = uVar10 - 1;
  if ((int)(uVar10 - 1) < 0) {
    uVar14 = 0;
  }
  if ((int)uVar14 < (this->Values).ArrayNum) {
    uVar11 = ~uVar14 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  *param_2 = (char)(int)(local_68[0].ValueOffset + __real_3fe0000000000000) +
             (char)(this->Values).AllocatorInstance.Data[(int)uVar14];
  return true;
}

// SerializeFromMismatchedTag @ 1460f4f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMovieSceneByteChannel::SerializeFromMismatchedTag
          (FMovieSceneByteChannel *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_02;
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
    this->DefaultValue = (uchar)local_50;
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
LAB_1460f50e7:
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
    local_108[0] = (pTVar5->AllocatorInstance).Data[lVar14 * 8 + 4];
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
LAB_1460f5365:
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
      goto LAB_1460f50e7;
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
      goto LAB_1460f5365;
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
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Insert
                    (this_02,(uchar *)local_108,uVar13 + 1);
          local_e8.Index = local_e8.Index + 1;
          iVar12 = local_f8;
          goto LAB_1460f50e7;
        }
        lVar14 = lVar14 + -4;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::Insert(this_00,local_100,0);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Insert(this_02,(uchar *)local_108,0);
    local_e8.Index = local_e8.Index + 1;
    iVar12 = local_f8;
  } while( true );
}

