// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// StaticStruct @ 146066130

UScriptStruct * __cdecl FMovieSceneObjectPathChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel,(UObject *)pUVar1,
                         L"MovieSceneObjectPathChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneObjectPathChannel.OuterSingleton;
}

// GetKeys @ 146066180

void __thiscall
FMovieSceneObjectPathChannel::GetKeys
          (FMovieSceneObjectPathChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
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

// GetKeyTimes @ 146066220

void __thiscall
FMovieSceneObjectPathChannel::GetKeyTimes
          (FMovieSceneObjectPathChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
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

// SetKeyTimes @ 1460662d0

void __thiscall
FMovieSceneObjectPathChannel::SetKeyTimes
          (FMovieSceneObjectPathChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::SetKeyTimes
            (&local_28,&local_38,&local_48);
  return;
}

// DuplicateKeys @ 146066390

void __thiscall
FMovieSceneObjectPathChannel::DuplicateKeys
          (FMovieSceneObjectPathChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::DuplicateKeys
            (&local_28,&local_38,&local_48);
  return;
}

// DeleteKeys @ 146066430

void __thiscall
FMovieSceneObjectPathChannel::DeleteKeys
          (FMovieSceneObjectPathChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::DeleteKeys(&local_28,&local_38);
  return;
}

// DeleteKeysFrom @ 1460664b0

void __thiscall
FMovieSceneObjectPathChannel::DeleteKeysFrom
          (FMovieSceneObjectPathChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FMovieSceneKeyHandleMap *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  TObjectPtr<UObject>_u_0 TVar8;
  bool bVar9;
  uint uVar10;
  TObjectPtr<UObject>_u_0 this_00;
  UClass *pUVar11;
  UObject *pUVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FKeyHandle local_res20 [2];
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_c8;
  undefined1 local_a8 [8];
  FSoftObjectPath local_a0;
  TObjectPtr<UObject>_u_0 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  TObjectPtr<UObject>_u_0 local_68;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_60;
  
  pTVar2 = &this->Values;
  pFVar3 = &this->KeyHandles;
  pTVar1 = &this->Times;
  if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar2 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = (this->Times).ArrayNum;
  if (iVar4 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    goto LAB_14606684a;
  }
  if (iVar4 < 1) goto LAB_14606684a;
  uVar10 = (this->Times).ArrayNum;
  uVar13 = 0;
  if (uVar10 == 0) {
    if (*(longlong *)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x8 == 0) goto LAB_14606684a;
    this_00.DebugPtr = FMovieSceneObjectPathChannelKeyValue::Get(&this->DefaultValue);
    local_c8._padding_ = (longlong)pTVar1;
    local_c8._padding_ = (longlong)pFVar3;
    local_c8._padding_ = (longlong)this;
    local_c8.Values = pTVar2;
    if (pTVar1 != (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14606664f;
LAB_146066654:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar15 = uVar13;
    if (0 < (int)uVar10) {
      do {
        iVar4 = (uVar10 >> 1) + uVar15;
        if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 4) <= param_1.Value) {
          uVar15 = iVar4 + (uVar10 & 1);
        }
        uVar7 = uVar10 >> 1;
        uVar10 = uVar10 >> 1;
      } while (uVar7 != 0);
    }
    uVar10 = uVar15 - 1;
    if ((int)(uVar15 - 1) < 0) {
      uVar10 = 0;
    }
    if ((int)uVar10 < (this->Values).ArrayNum) {
      uVar13 = ~uVar10 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c8._padding_ = (longlong)pTVar1;
    local_c8._padding_ = (longlong)pFVar3;
    local_c8._padding_ = (longlong)this;
    local_c8.Values = pTVar2;
    this_00.DebugPtr =
         FMovieSceneObjectPathChannelKeyValue::Get
                   ((FMovieSceneObjectPathChannelKeyValue *)
                    ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x30));
LAB_14606664f:
    if (pTVar2 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)
    goto LAB_146066654;
  }
  local_a0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.SubPathString.Data.ArrayNum = 0;
  local_a0.SubPathString.Data.ArrayMax = 0;
  local_a8 = (undefined1  [8])0x0;
  local_a0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_a0.AssetPath.AssetName.Number = 0;
  local_a0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_a0.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_a0.SubPathString,0);
  local_70 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_a8,(FObjectPtr)&local_70);
  local_80.DebugPtr = (UObject *)0x0;
  if (this_00.DebugPtr == (UObject *)0x0) {
LAB_1460666e3:
    local_80.DebugPtr = (UObject *)0x0;
    TVar8.DebugPtr = local_80.DebugPtr;
  }
  else {
    pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar12 = UObjectBaseUtility::GetTypedOuter(this_00.DebugPtr,pUVar11);
    if (pUVar12 != (UObject *)0x0) goto LAB_1460666e3;
    TVar8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00.DebugPtr);
    }
  }
  local_80 = TVar8;
  local_68 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00.DebugPtr != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(this_00.DebugPtr);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_a8,(FObjectPtr)&local_68);
  uVar10 = FMovieSceneChannelData::FindKey
                     ((FMovieSceneChannelData *)&local_c8,param_1,(FFrameNumber)0x0);
  if (uVar10 == 0xffffffff) {
    uVar10 = TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::AddKey
                       (&local_c8,param_1,(FMovieSceneObjectPathChannelKeyValue *)local_a8);
  }
  else {
    uVar13 = 0;
    if ((int)uVar10 < (this->Values).ArrayNum) {
      uVar13 = ~uVar10 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    lVar14 = (longlong)(int)uVar10 * 0x30;
    *(undefined1 (*) [8])(pFVar5 + lVar14) = local_a8;
    FSoftObjectPath::operator=((FSoftObjectPath *)(pFVar5 + lVar14 + 8),&local_a0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_80.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_80.DebugPtr);
    }
    ((TObjectPtr<UObject>_u_0 *)(pFVar5 + lVar14 + 0x28))->DebugPtr = (UObject *)local_80;
  }
  if ((((int)uVar10 < 0) || (*(int *)(local_c8._padding_ + 8) <= (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times->IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Channels\\MovieSceneChannelData.cpp"
                         ,0x69,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((FKeyHandleLookupTable *)local_c8._padding_ == (FKeyHandleLookupTable *)0x0) {
    local_res8[0] = 0;
    `FMovieSceneChannelData::GetHandle'::__l2::<lambda_1>::operator()(local_res8);
    FKeyHandle::FKeyHandle(local_res20);
  }
  else {
    FKeyHandleLookupTable::FindOrAddKeyHandle
              ((FKeyHandleLookupTable *)local_c8._padding_,(int)local_78);
  }
  if (local_a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14606684a:
  local_60._padding_ = (longlong)&this->KeyHandles;
  local_60._padding_ = (longlong)pTVar1;
  local_60._padding_ = (longlong)this;
  local_60.Values = pTVar2;
  if (((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar2 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
     && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("Times && Values",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                            ,0x122,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::DeleteKeysFrom
            (&local_60,param_1,param_2);
  return;
}

// RemapTimes @ 1460668d0

void __thiscall
FMovieSceneObjectPathChannel::RemapTimes
          (FMovieSceneObjectPathChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::RemapTimes(&local_28,param_1);
  return;
}

// ComputeEffectiveRange @ 146066950

TRange<FFrameNumber> * __thiscall
FMovieSceneObjectPathChannel::ComputeEffectiveRange
          (FMovieSceneObjectPathChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

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
     (this == (FMovieSceneObjectPathChannel *)0xffffffffffffff80)) {
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

// GetNumKeys @ 146066b00

int __thiscall FMovieSceneObjectPathChannel::GetNumKeys(FMovieSceneObjectPathChannel *this)

{
  return (this->Times).ArrayNum;
}

// Reset @ 146066b10

void __thiscall FMovieSceneObjectPathChannel::Reset(FMovieSceneObjectPathChannel *this)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_28;
  
  local_28._padding_ = (longlong)&this->Times;
  local_28._padding_ = (longlong)&this->KeyHandles;
  local_28.Values = &this->Values;
  local_28._padding_ = (longlong)this;
  if (((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)local_28._padding_ ==
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_28.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
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
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::Reset(&local_28);
  return;
}

// Offset @ 146066b80

void __thiscall
FMovieSceneObjectPathChannel::Offset(FMovieSceneObjectPathChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_28.Times = &this->Times;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
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

// Optimize @ 146066c00

void __thiscall
FMovieSceneObjectPathChannel::Optimize
          (FMovieSceneObjectPathChannel *this,FKeyDataOptimizationParams *param_1)

{
  return;
}

// ClearDefault @ 146066c10

void __thiscall FMovieSceneObjectPathChannel::ClearDefault(FMovieSceneObjectPathChannel *this)

{
  undefined8 local_res8 [4];
  
  (this->DefaultValue).HardPtr.field0_0x0.DebugPtr = (UObject *)0x0;
  local_res8[0] = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&this->DefaultValue,(FObjectPtr)local_res8);
  return;
}

// GetHandle @ 146066c40

FKeyHandle __thiscall
FMovieSceneObjectPathChannel::GetHandle(FMovieSceneObjectPathChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  local_28.Times = &this->Times;
  local_28.KeyHandles = (FKeyHandleLookupTable *)&this->KeyHandles;
  local_10 = &this->Values;
  local_28.OwningChannel = (FMovieSceneChannel *)this;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
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

// GetIndex @ 146066cd0

int __thiscall
FMovieSceneObjectPathChannel::GetIndex(FMovieSceneObjectPathChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  if ((this == (FMovieSceneObjectPathChannel *)0xffffffffffffff90) ||
     (this == (FMovieSceneObjectPathChannel *)0xffffffffffffff80)) {
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

// FMovieSceneObjectPathChannel @ 146093d00

FMovieSceneObjectPathChannel * __thiscall
FMovieSceneObjectPathChannel::FMovieSceneObjectPathChannel(FMovieSceneObjectPathChannel *this)

{
  undefined1 *this_00;
  
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
  this->_padding_ = (longlong)&___7FMovieSceneObjectPathChannel__6B_;
  (this->PropertyClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Times).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Times).ArrayNum = 0;
  (this->Times).ArrayMax = 0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this_00 = &(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultValue).SoftPtr.SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->DefaultValue).HardPtr.field0_0x0.DebugPtr = (UObject *)0x0;
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

// ~FMovieSceneObjectPathChannel @ 146097d80

void __thiscall
FMovieSceneObjectPathChannel::~FMovieSceneObjectPathChannel(FMovieSceneObjectPathChannel *this)

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
  pvVar1 = *(void **)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FMovieSceneObjectPathChannelKeyValue,int>
            ((FMovieSceneObjectPathChannelKeyValue *)(this->Values).AllocatorInstance.Data,
             (this->Values).ArrayNum);
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

// Evaluate @ 1460c2cb0

bool __thiscall
FMovieSceneObjectPathChannel::Evaluate
          (FMovieSceneObjectPathChannel *this,FFrameTime param_1,UObject **param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = (this->Times).ArrayNum;
  if (uVar6 == 0) {
    if (*(longlong *)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x8 != 0) {
      pUVar5 = FMovieSceneObjectPathChannelKeyValue::Get(&this->DefaultValue);
      *param_2 = pUVar5;
      return true;
    }
    return false;
  }
  iVar7 = 0;
  if (0 < (int)uVar6) {
    do {
      iVar1 = (uVar6 >> 1) + iVar7;
      if (*(int *)((this->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) <=
          param_1.FrameNumber.Value.Value) {
        iVar7 = iVar1 + (uVar6 & 1);
      }
      uVar8 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar8 != 0);
  }
  uVar6 = iVar7 - 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->Values).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar5 = FMovieSceneObjectPathChannelKeyValue::Get
                     ((FMovieSceneObjectPathChannelKeyValue *)
                      ((this->Values).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30));
  *param_2 = pUVar5;
  return true;
}

// SetDefault @ 1460f7010

void __thiscall
FMovieSceneObjectPathChannel::SetDefault
          (FMovieSceneObjectPathChannel *this,FMovieSceneObjectPathChannelKeyValue *param_1)

{
  UObject *pUVar1;
  
  *(undefined8 *)&(this->DefaultValue).SoftPtr.SoftObjectPtr =
       *(undefined8 *)&(param_1->SoftPtr).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->DefaultValue).SoftPtr.SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftPtr).SoftObjectPtr.field_0x8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    pUVar1 = (param_1->HardPtr).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      (this->DefaultValue).HardPtr.field0_0x0.DebugPtr = (UObject *)0x0;
      return;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->DefaultValue).HardPtr.field0_0x0 = (param_1->HardPtr).field0_0x0;
  return;
}

