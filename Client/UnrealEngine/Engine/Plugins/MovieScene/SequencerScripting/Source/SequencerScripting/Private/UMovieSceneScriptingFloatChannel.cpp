// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 32

// StaticClass @ 14c680c00

UClass * __cdecl UMovieSceneScriptingFloatChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingFloatChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingFloatChannel,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingFloatChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton;
}

// UMovieSceneScriptingFloatChannel @ 14c6842c0

UMovieSceneScriptingFloatChannel * __thiscall
UMovieSceneScriptingFloatChannel::UMovieSceneScriptingFloatChannel
          (UMovieSceneScriptingFloatChannel *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->DoubleChannelHandle);
  return this;
}

// UMovieSceneScriptingFloatChannel @ 14c684310

UMovieSceneScriptingFloatChannel * __thiscall
UMovieSceneScriptingFloatChannel::UMovieSceneScriptingFloatChannel
          (UMovieSceneScriptingFloatChannel *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->DoubleChannelHandle);
  return this;
}

// ~UMovieSceneScriptingFloatChannel @ 14c684700

void __thiscall
UMovieSceneScriptingFloatChannel::~UMovieSceneScriptingFloatChannel
          (UMovieSceneScriptingFloatChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingFloatChannel__6B_;
  plVar3 = *(longlong **)&(this->DoubleChannelHandle).field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)&(this->FloatChannelHandle).field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel((UMovieSceneScriptingChannel *)this);
  return;
}

// AddKey @ 14c6851b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingFloatKey * __thiscall
UMovieSceneScriptingFloatChannel::AddKey
          (UMovieSceneScriptingFloatChannel *this,FFrameNumber *param_1,float param_2,float param_3,
          EMovieSceneTimeUnit param_4,EMovieSceneKeyInterpolation param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  bool bVar4;
  FKeyHandle FVar5;
  FMovieSceneChannel *pFVar6;
  UObject *pUVar7;
  UMovieSceneScriptingActualFloatKey *pUVar8;
  FFrameRate FVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FWeakObjectPtr FVar10;
  EMovieSceneKeyInterpolation in_R9B;
  undefined4 in_XMM2_Db;
  FFrameRate local_res8;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  undefined1 local_58 [16];
  FMovieSceneChannelHandle local_48;
  
  pFVar6 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  uVar3 = param_1->Value;
  local_60 = (this->OwningSection).WeakPtr;
  local_68 = (this->OwningSequence).WeakPtr;
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    local_48.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    if (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_48.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_48.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_48.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
    pFVar6 = FMovieSceneChannelHandle::Get(&local_48);
    if (pFVar6 == (FMovieSceneChannel *)0x0) {
      local_res8.Numerator = 0;
      local_res8.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
                 (FName)0x0);
      if (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        return (UMovieSceneScriptingFloatKey *)0x0;
      }
      LOCK();
      paVar1 = &(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 != (atomic<int>)0x1) {
        return (UMovieSceneScriptingFloatKey *)0x0;
      }
      (**(code **)((local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      return (UMovieSceneScriptingFloatKey *)0x0;
    }
    pUVar7 = GetTransientPackageAsObject();
    pUVar8 = (UMovieSceneScriptingActualFloatKey *)
             NewObject<UMovieSceneScriptingDoubleAsFloatKey>(pUVar7);
    if (param_4 == DisplayRate) {
      FWeakObjectPtr::Get(&local_68);
      FVar9 = UMovieSceneSequenceExtensions::GetTickResolution
                        ((UMovieSceneSequence *)(local_58 + 8));
      in_R9B = (EMovieSceneKeyInterpolation)*(undefined8 *)FVar9;
      FWeakObjectPtr::Get(&local_68);
      FVar9 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)local_58);
      local_res8.Denominator = 0;
      local_res8.Numerator = uVar3;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,*(FFrameRate *)FVar9);
    }
    bVar4 = FWeakObjectPtr::IsValid(&local_60);
    if (bVar4) {
      FWeakObjectPtr::Get(&local_60);
    }
    FVar5 = AddKeyToChannel((FMovieSceneDoubleChannel *)&local_res8,(FFrameNumber)(int)pFVar6,
                            (double)CONCAT44(in_XMM2_Db,param_2),in_R9B);
    *(undefined4 *)&((UMovieSceneScriptingDoubleAsFloatKey *)pUVar8)->field_0x28 =
         *(undefined4 *)CONCAT44(extraout_var_00,FVar5.Index);
    TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
              ((TMovieSceneChannelHandle<FMovieSceneChannel> *)
               &((UMovieSceneScriptingDoubleAsFloatKey *)pUVar8)->field_0x40,
               (TMovieSceneChannelHandle<FMovieSceneChannel> *)&local_48);
    *(int *)&((UMovieSceneScriptingDoubleAsFloatKey *)pUVar8)->field_0x34 = local_60.ObjectIndex;
    *(int *)&((UMovieSceneScriptingDoubleAsFloatKey *)pUVar8)->field_0x38 =
         local_60.ObjectSerialNumber;
    FVar10 = local_68;
  }
  else {
    local_48.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
    local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
    if (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_48.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10
    ;
    local_48.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
    local_48.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
    FVar10 = local_68;
    local_68 = local_60;
    local_60 = FVar10;
    pFVar6 = FMovieSceneChannelHandle::Get(&local_48);
    if (pFVar6 == (FMovieSceneChannel *)0x0) {
      pUVar8 = (UMovieSceneScriptingActualFloatKey *)0x0;
      local_res8.Numerator = 0;
      local_res8.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
                 (FName)0x0);
      goto LAB_14c685425;
    }
    pUVar7 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UMovieSceneScriptingActualFloatKey>(pUVar7);
    if (param_4 == DisplayRate) {
      FWeakObjectPtr::Get(&local_60);
      FVar9 = UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_58);
      in_R9B = (EMovieSceneKeyInterpolation)*(undefined8 *)FVar9;
      FWeakObjectPtr::Get(&local_60);
      FVar9 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_58 + 8));
      local_res8.Denominator = 0;
      local_res8.Numerator = uVar3;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,*(FFrameRate *)FVar9);
    }
    bVar4 = FWeakObjectPtr::IsValid(&local_68);
    if (bVar4) {
      FWeakObjectPtr::Get(&local_68);
    }
    FVar5 = AddKeyToChannel((FMovieSceneFloatChannel *)&local_res8,(FFrameNumber)(int)pFVar6,param_2
                            ,in_R9B);
    *(undefined4 *)&pUVar8->field_0x28 = *(undefined4 *)CONCAT44(extraout_var,FVar5.Index);
    TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
              ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar8->field_0x40,
               (TMovieSceneChannelHandle<FMovieSceneChannel> *)&local_48);
    *(int *)&pUVar8->field_0x34 = local_68.ObjectIndex;
    *(int *)&pUVar8->field_0x38 = local_68.ObjectSerialNumber;
    FVar10 = local_60;
  }
  *(int *)&pUVar8->field_0x2c = FVar10.ObjectIndex;
  *(int *)&pUVar8->field_0x30 = FVar10.ObjectSerialNumber;
LAB_14c685425:
  if (local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_48.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return (UMovieSceneScriptingFloatKey *)pUVar8;
}

// ComputeEffectiveRange @ 14c685bc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSequencerScriptingRange * __thiscall
UMovieSceneScriptingFloatChannel::ComputeEffectiveRange
          (UMovieSceneScriptingFloatChannel *this,FSequencerScriptingRange *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  FFrameNumber FVar4;
  FMovieSceneChannel *pFVar5;
  FFrameRate FVar6;
  char *pcVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar8;
  TRange<FFrameNumber> local_res8;
  FWeakObjectPtr local_res18 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  FMovieSceneChannelHandle local_50;
  
  pFVar5 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  local_res18[0] = (this->OwningSequence).WeakPtr;
  if (pFVar5 == (FMovieSceneChannel *)0x0) {
    local_50.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    if (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_50.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_50.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_50.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
  }
  else {
    local_50.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
    local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
    if (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_50.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10
    ;
    local_50.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
    local_50.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
  }
  __return_storage_ptr__->bHasStart = '\0';
  __return_storage_ptr__->bHasEnd = '\0';
  bVar8 = 0;
  __return_storage_ptr__->InclusiveStart = 0;
  __return_storage_ptr__->ExclusiveEnd = 0;
  (__return_storage_ptr__->InternalRate).Numerator = 60000;
  (__return_storage_ptr__->InternalRate).Denominator = 1;
  pFVar5 = FMovieSceneChannelHandle::Get(&local_50);
  if (pFVar5 == (FMovieSceneChannel *)0x0) {
    local_res8.LowerBound.Type.Value = '\0';
    local_res8.LowerBound._1_3_ = 0;
    local_res8.LowerBound.Value.Value = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get effective range."
               ,Error,(FName)0x0);
  }
  else {
    FWeakObjectPtr::Get(local_res18);
    FVar6 = UMovieSceneSequenceExtensions::GetTickResolution
                      ((UMovieSceneSequence *)(local_res18 + 1));
    uVar3 = *(undefined8 *)FVar6;
    pcVar7 = (char *)(**(code **)(pFVar5->_padding_ + 0x48))(pFVar5,local_78);
    uStack_64 = 0;
    if (pcVar7[8] != '\x02') {
      bVar8 = 2;
    }
    local_68 = CONCAT31(local_68._1_3_,bVar8 | *pcVar7 != '\x02' | (byte)local_68 & 0xfc);
    uStack_5c = uVar3;
    if (*pcVar7 != '\x02') {
      FVar4 = UE::MovieScene::DiscreteInclusiveLower(&local_res8);
      uStack_64 = CONCAT44(uStack_64._4_4_,*(undefined4 *)CONCAT44(extraout_var,FVar4.Value));
    }
    if (bVar8 != 0) {
      FVar4 = UE::MovieScene::DiscreteExclusiveUpper(&local_res8);
      uStack_64 = CONCAT44(*(undefined4 *)CONCAT44(extraout_var_00,FVar4.Value),(int)uStack_64);
    }
    *(undefined4 *)__return_storage_ptr__ = local_68;
    __return_storage_ptr__->InclusiveStart = (int)uStack_64;
    __return_storage_ptr__->ExclusiveEnd = uStack_64._4_4_;
    (__return_storage_ptr__->InternalRate).Numerator = (int)uStack_5c;
    (__return_storage_ptr__->InternalRate).Denominator = uStack_5c._4_4_;
  }
  if (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// EvaluateKeys @ 14c685de0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingFloatChannel::EvaluateKeys
          (UMovieSceneScriptingFloatChannel *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSequencerScriptingRange *param_1,FFrameRate param_2)

{
  FScriptContainerElement *pFVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneChannel *pFVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  float local_c8 [2];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TArray<double,TSizedDefaultAllocator<32>_> local_b0;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> local_a0;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> local_80;
  FSequencerScriptingRange local_58;
  FSequencerScriptingRange local_38;
  
  pFVar6 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  FVar2 = (this->OwningSequence).WeakPtr;
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    local_80._0_8_ = *(undefined8 *)&this->DoubleChannelHandle;
    local_80._8_8_ = *(undefined8 *)&(this->DoubleChannelHandle).field_0x8;
    if (local_80._8_8_ != 0) {
      LOCK();
      *(int *)(local_80._8_8_ + 0xc) = *(int *)(local_80._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_80._16_8_ = *(undefined8 *)&(this->DoubleChannelHandle).field_0x10;
    local_38._0_4_ = *(undefined4 *)&param_1->field_0x0;
    local_38.InclusiveStart = param_1->InclusiveStart;
    local_38.ExclusiveEnd = param_1->ExclusiveEnd;
    local_38.InternalRate.Numerator = (param_1->InternalRate).Numerator;
    local_80._24_4_ = *(undefined4 *)&(this->DoubleChannelHandle).field_0x18;
    local_38.InternalRate.Denominator = (param_1->InternalRate).Denominator;
    TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>
    ::EvaluateKeysInChannel
              (&local_b0,&local_80,(TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
               &local_38,param_2);
    iVar9 = 0;
    iVar8 = local_b0.ArrayNum;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    pFVar1 = local_b0.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar10.Data = local_b0.AllocatorInstance.Data;
    while( true ) {
      if (local_b0.ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar9 = (int)local_b8;
      }
      if (FVar10.Data == pFVar1) break;
      local_c8[0] = (float)*(double *)FVar10.Data;
      iVar5 = iVar9;
      if ((local_c0.Data <= (FScriptContainerElement *)local_c8) &&
         ((FScriptContainerElement *)local_c8 < local_c0.Data + (longlong)local_b8._4_4_ * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar5 = (int)local_b8;
      }
      if (iVar5 == local_b8._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_c0,(int *)((longlong)&local_b8 + 4));
      }
      iVar9 = iVar5 + 1;
      FVar10.Data = FVar10.Data + 8;
      local_b8 = CONCAT44(local_b8._4_4_,iVar9);
      *(float *)(local_c0.Data + (longlong)iVar5 * 4) = local_c8[0];
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_c0.Data;
    __return_storage_ptr__->ArrayMax = local_b8._4_4_;
    local_b8 = 0;
    local_c0.Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = iVar9;
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
  }
  else {
    local_a0._0_8_ = *(undefined8 *)&this->FloatChannelHandle;
    local_a0._8_8_ = *(undefined8 *)&(this->FloatChannelHandle).field_0x8;
    if (local_a0._8_8_ != 0) {
      LOCK();
      *(int *)(local_a0._8_8_ + 0xc) = *(int *)(local_a0._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_a0._16_8_ = *(undefined8 *)&(this->FloatChannelHandle).field_0x10;
    local_58._0_4_ = *(undefined4 *)&param_1->field_0x0;
    local_58.InclusiveStart = param_1->InclusiveStart;
    local_58.ExclusiveEnd = param_1->ExclusiveEnd;
    local_58.InternalRate.Numerator = (param_1->InternalRate).Numerator;
    local_a0._24_4_ = *(undefined4 *)&(this->FloatChannelHandle).field_0x18;
    local_58.InternalRate.Denominator = (param_1->InternalRate).Denominator;
    TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
    EvaluateKeysInChannel
              (__return_storage_ptr__,&local_a0,
               (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,&local_58,param_2);
  }
  return __return_storage_ptr__;
}

// GetDefault @ 14c686dd0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UMovieSceneScriptingFloatChannel::GetDefault(UMovieSceneScriptingFloatChannel *this)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  double dVar4;
  FMovieSceneChannel *pFVar5;
  FMovieSceneChannelHandle local_38;
  
  pFVar5 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  if (pFVar5 == (FMovieSceneChannel *)0x0) {
    local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_38.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_38.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_38.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
    pFVar5 = FMovieSceneChannelHandle::Get(&local_38);
    if (pFVar5 == (FMovieSceneChannel *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                 ,Error,(FName)0x0);
    }
    else if (pFVar5[1].KeyDeletedEvent.field_0x8 != '\0') {
      dVar4 = *(double *)&pFVar5[1].KeyDeletedEvent;
      if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                  WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                      + 8))(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
        }
      }
      return (float)dVar4;
    }
    if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    return 0.0;
  }
  local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
  local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
  if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10;
  local_38.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
  local_38.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
  pFVar5 = FMovieSceneChannelHandle::Get(&local_38);
  if (pFVar5 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
  }
  else if (pFVar5[1].KeyDeletedEvent.field_0x4 != '\0') {
    fVar2 = *(float *)&pFVar5[1].KeyDeletedEvent;
    if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      return fVar2;
    }
    LOCK();
    paVar1 = &(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<int>)0x1) {
      return fVar2;
    }
    (**(code **)((local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8))
              (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    return fVar2;
  }
  if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return 0.0;
}

// GetKeys @ 14c687180

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingFloatChannel::GetKeys
          (UMovieSceneScriptingFloatChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  FMovieSceneChannel *pFVar3;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> local_28;
  
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  FVar1 = (this->OwningSection).WeakPtr;
  FVar2 = (this->OwningSequence).WeakPtr;
  if (pFVar3 != (FMovieSceneChannel *)0x0) {
    local_28._0_8_ = *(undefined8 *)&this->FloatChannelHandle;
    local_28._8_8_ = *(undefined8 *)&(this->FloatChannelHandle).field_0x8;
    if (local_28._8_8_ != 0) {
      LOCK();
      *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_28._16_8_ = *(undefined8 *)&(this->FloatChannelHandle).field_0x10;
    local_28._24_4_ = *(undefined4 *)&(this->FloatChannelHandle).field_0x18;
    TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
    GetKeysInChannel(__return_storage_ptr__,&local_28,
                     (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                     (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
    return __return_storage_ptr__;
  }
  local_28._0_8_ = *(undefined8 *)&this->DoubleChannelHandle;
  local_28._8_8_ = *(undefined8 *)&(this->DoubleChannelHandle).field_0x8;
  if (local_28._8_8_ != 0) {
    LOCK();
    *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_28._16_8_ = *(undefined8 *)&(this->DoubleChannelHandle).field_0x10;
  local_28._24_4_ = *(undefined4 *)&(this->DoubleChannelHandle).field_0x18;
  TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>
  ::GetKeysInChannel(__return_storage_ptr__,
                     (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)&local_28,
                     (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                     (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c687370

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingFloatChannel::GetKeysByIndex
          (UMovieSceneScriptingFloatChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  FMovieSceneChannel *pFVar3;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> local_28;
  
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  FVar1 = (this->OwningSection).WeakPtr;
  FVar2 = (this->OwningSequence).WeakPtr;
  if (pFVar3 == (FMovieSceneChannel *)0x0) {
    local_28._0_8_ = *(undefined8 *)&this->DoubleChannelHandle;
    local_28._8_8_ = *(undefined8 *)&(this->DoubleChannelHandle).field_0x8;
    if (local_28._8_8_ != 0) {
      LOCK();
      *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_28._16_8_ = *(undefined8 *)&(this->DoubleChannelHandle).field_0x10;
    local_28._24_4_ = *(undefined4 *)&(this->DoubleChannelHandle).field_0x18;
    TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>
    ::GetKeysInChannelByIndex
              (__return_storage_ptr__,
               (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)&local_28,
               (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
               (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  }
  else {
    local_28._0_8_ = *(undefined8 *)&this->FloatChannelHandle;
    local_28._8_8_ = *(undefined8 *)&(this->FloatChannelHandle).field_0x8;
    if (local_28._8_8_ != 0) {
      LOCK();
      *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_28._16_8_ = *(undefined8 *)&(this->FloatChannelHandle).field_0x10;
    local_28._24_4_ = *(undefined4 *)&(this->FloatChannelHandle).field_0x18;
    TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
    GetKeysInChannelByIndex
              (__return_storage_ptr__,&local_28,
               (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
               (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c689400

UClass * __cdecl UMovieSceneScriptingFloatChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingFloatChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingFloatChannel,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingFloatChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.InnerSingleton;
}

// HasDefault @ 14c68a5b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMovieSceneScriptingFloatChannel::HasDefault(UMovieSceneScriptingFloatChannel *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  FMovieSceneChannel *pFVar4;
  FMovieSceneChannelHandle local_28;
  
  pFVar4 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_28.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_28.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
    pFVar4 = FMovieSceneChannelHandle::Get(&local_28);
    if (pFVar4 == (FMovieSceneChannel *)0x0) goto LAB_14c68a692;
    cVar3 = pFVar4[1].KeyDeletedEvent.field_0x8;
  }
  else {
    local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
    local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10
    ;
    local_28.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
    local_28.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
    pFVar4 = FMovieSceneChannelHandle::Get(&local_28);
    if (pFVar4 == (FMovieSceneChannel *)0x0) {
LAB_14c68a692:
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
                 ,Error,(FName)0x0);
      if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        return false;
      }
      LOCK();
      paVar1 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
        return false;
      }
      return false;
    }
    cVar3 = pFVar4[1].KeyDeletedEvent.field_0x4;
  }
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      return cVar3 != '\0';
    }
  }
  return cVar3 != '\0';
}

// RemoveDefault @ 14c68ace0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingFloatChannel::RemoveDefault(UMovieSceneScriptingFloatChannel *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FMovieSceneChannel *pFVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FMovieSceneChannelHandle local_28;
  
  pFVar4 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  local_res8 = (this->OwningSection).WeakPtr;
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_28.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_28.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
    pFVar4 = FMovieSceneChannelHandle::Get(&local_28);
    if (pFVar4 != (FMovieSceneChannel *)0x0) {
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        FWeakObjectPtr::Get(&local_res8);
      }
      pFVar4[1].KeyDeletedEvent.field_0x8 = 0;
      goto LAB_14c68ade1;
    }
  }
  else {
    local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
    local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10
    ;
    local_28.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
    local_28.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
    pFVar4 = FMovieSceneChannelHandle::Get(&local_28);
    if (pFVar4 != (FMovieSceneChannel *)0x0) {
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        FWeakObjectPtr::Get(&local_res8);
      }
      pFVar4[1].KeyDeletedEvent.field_0x4 = 0;
      goto LAB_14c68ade1;
    }
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
             ,Error,(FName)0x0);
LAB_14c68ade1:
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// RemoveKey @ 14c68af40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingFloatChannel::RemoveKey
          (UMovieSceneScriptingFloatChannel *this,UMovieSceneScriptingKey *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FMovieSceneChannel *pFVar4;
  FKeyHandle *local_38;
  undefined4 uStack_30;
  FMovieSceneChannelHandle local_28;
  
  pFVar4 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_28.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_28.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
  }
  else {
    local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
    local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10
    ;
    local_28.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
    local_28.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
  }
  if (param_1 != (UMovieSceneScriptingKey *)0x0) {
    pFVar4 = FMovieSceneChannelHandle::Get(&local_28);
    if (pFVar4 == (FMovieSceneChannel *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove key.",
                 Error,(FName)0x0);
    }
    else {
      bVar3 = FWeakObjectPtr::IsValid(&(param_1->OwningSection).WeakPtr);
      if (bVar3) {
        FWeakObjectPtr::Get(&(param_1->OwningSection).WeakPtr);
      }
      local_38 = &param_1->KeyHandle;
      uStack_30 = 1;
      (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,&local_38);
    }
  }
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// SetDefault @ 14c68b5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingFloatChannel::SetDefault(UMovieSceneScriptingFloatChannel *this,float param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FMovieSceneChannel *pFVar4;
  FWeakObjectPtr local_res8;
  FMovieSceneChannelHandle local_38;
  
  pFVar4 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->FloatChannelHandle);
  local_res8 = (this->OwningSection).WeakPtr;
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->DoubleChannelHandle;
    local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->DoubleChannelHandle).field_0x8;
    if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_38.ChannelTypeName.ComparisonIndex.Value =
         *(uint *)&(this->DoubleChannelHandle).field_0x10;
    local_38.ChannelTypeName.Number = *(uint *)&(this->DoubleChannelHandle).field_0x14;
    local_38.ChannelIndex = *(int *)&(this->DoubleChannelHandle).field_0x18;
    pFVar4 = FMovieSceneChannelHandle::Get(&local_38);
    if (pFVar4 != (FMovieSceneChannel *)0x0) {
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        FWeakObjectPtr::Get(&local_res8);
      }
      pFVar4[1].KeyDeletedEvent.field_0x8 = 1;
      *(double *)&pFVar4[1].KeyDeletedEvent = (double)param_1;
      goto LAB_14c68b6d3;
    }
  }
  else {
    local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->FloatChannelHandle;
    local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&(this->FloatChannelHandle).field_0x8;
    if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                 WeakReferenceCount + 1);
      UNLOCK();
    }
    local_38.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->FloatChannelHandle).field_0x10
    ;
    local_38.ChannelTypeName.Number = *(uint *)&(this->FloatChannelHandle).field_0x14;
    local_38.ChannelIndex = *(int *)&(this->FloatChannelHandle).field_0x18;
    pFVar4 = FMovieSceneChannelHandle::Get(&local_38);
    if (pFVar4 != (FMovieSceneChannel *)0x0) {
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        FWeakObjectPtr::Get(&local_res8);
      }
      *(float *)&pFVar4[1].KeyDeletedEvent = param_1;
      pFVar4[1].KeyDeletedEvent.field_0x4 = 1;
      goto LAB_14c68b6d3;
    }
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value.",
             Error,(FName)0x0);
LAB_14c68b6d3:
  if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneScriptingFloatChannel @ 14c68c520

void __cdecl
UMovieSceneScriptingFloatChannel::StaticRegisterNativesUMovieSceneScriptingFloatChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c68da90

void __cdecl
UMovieSceneScriptingFloatChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneScriptingFloatKey *pUVar2;
  FFrameNumber *pFVar3;
  EMovieSceneKeyInterpolation local_res10 [8];
  EMovieSceneTimeUnit local_res18 [8];
  FFrameNumber local_res20 [2];
  float local_38;
  float local_34 [3];
  
  local_res20[0].Value = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_34[0] = 0.0;
  pFVar3 = local_res20;
  if ((FFrameNumber *)param_2->MostRecentPropertyAddress != (FFrameNumber *)0x0) {
    pFVar3 = (FFrameNumber *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_34,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_34);
  }
  local_38 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = DisplayRate;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Auto;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = AddKey((UMovieSceneScriptingFloatChannel *)param_1,pFVar3,local_34[0],local_38,
                  local_res18[0],local_res10[0]);
  *(UMovieSceneScriptingFloatKey **)param_3 = pUVar2;
  return;
}

// execComputeEffectiveRange @ 14c68e010

void __cdecl
UMovieSceneScriptingFloatChannel::execComputeEffectiveRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FSequencerScriptingRange *pFVar2;
  FSequencerScriptingRange local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = ComputeEffectiveRange((UMovieSceneScriptingFloatChannel *)param_1,&local_28);
  uVar1 = *(undefined8 *)&pFVar2->ExclusiveEnd;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(int *)((longlong)param_3 + 0x10) = (pFVar2->InternalRate).Denominator;
  return;
}

// execEvaluateKeys @ 14c68e050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingFloatChannel::execEvaluateKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10;
  int iStackX_14;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  uint local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  FSequencerScriptingRange local_28;
  
  local_48 = local_48 & 0xfffffffc;
  iStack_44 = (int)___xmm_000000010000ea600000000000000000;
  iStack_40 = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
  iStack_3c = (int)_UNK_1528a8c88;
  iStack_38 = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = 60000;
  iStackX_14 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.InclusiveStart = iStack_44;
  local_28._0_4_ = local_48;
  local_28.InternalRate.Numerator = iStack_3c;
  local_28.ExclusiveEnd = iStack_40;
  FVar2.Denominator = iStackX_14;
  FVar2.Numerator = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.InternalRate.Denominator = iStack_38;
  pTVar3 = EvaluateKeys((UMovieSceneScriptingFloatChannel *)param_1,&local_58,&local_28,FVar2);
  if (param_3 != pTVar3) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar3->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetDefault @ 14c68e3b0

void __cdecl
UMovieSceneScriptingFloatChannel::execGetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetDefault((UMovieSceneScriptingFloatChannel *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetKeys @ 14c68e600

void __cdecl
UMovieSceneScriptingFloatChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetKeysByIndex @ 14c68e8c0

void __cdecl
UMovieSceneScriptingFloatChannel::execGetKeysByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar3 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_18,ppvVar3);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetNumKeys @ 14c68ec70

void __cdecl
UMovieSceneScriptingFloatChannel::execGetNumKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FMovieSceneChannel *pFVar2;
  FMovieSceneChannelHandle *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar2 == (FMovieSceneChannel *)0x0) {
    pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[2].field_0x10);
    if (pFVar2 == (FMovieSceneChannel *)0x0) {
      *(undefined4 *)param_3 = 0;
      return;
    }
    this = (FMovieSceneChannelHandle *)&param_1[2].field_0x10;
  }
  else {
    this = (FMovieSceneChannelHandle *)&param_1[1].field_0x18;
  }
  pFVar2 = FMovieSceneChannelHandle::Get(this);
  uVar1 = (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2);
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetPostInfinityExtrapolation @ 14c68ed70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingFloatChannel::execGetPostInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneChannel *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar1 == (FMovieSceneChannel *)0x0) {
    pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[2].field_0x10);
    if (pFVar1 == (FMovieSceneChannel *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get post-infinity extrapolation."
                 ,Error,(FName)0x0);
      *(undefined1 *)param_3 = 5;
      return;
    }
  }
  *(undefined1 *)param_3 = *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 1);
  return;
}

// execGetPreInfinityExtrapolation @ 14c68edf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingFloatChannel::execGetPreInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneChannel *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar1 == (FMovieSceneChannel *)0x0) {
    pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[2].field_0x10);
    if (pFVar1 == (FMovieSceneChannel *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get pre-infinity extrapolation."
                 ,Error,(FName)0x0);
      *(undefined1 *)param_3 = 5;
      return;
    }
  }
  *(char *)param_3 = (char)pFVar1[1]._padding_;
  return;
}

// execHasDefault @ 14c68f3d0

void __cdecl
UMovieSceneScriptingFloatChannel::execHasDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = HasDefault((UMovieSceneScriptingFloatChannel *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execRemoveDefault @ 14c68f510

void __cdecl
UMovieSceneScriptingFloatChannel::execRemoveDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveDefault((UMovieSceneScriptingFloatChannel *)param_1);
  return;
}

// execRemoveKey @ 14c68f720

void __cdecl
UMovieSceneScriptingFloatChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8);
  return;
}

// execSetDefault @ 14c68f9f0

void __cdecl
UMovieSceneScriptingFloatChannel::execSetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDefault((UMovieSceneScriptingFloatChannel *)param_1,local_res10[0]);
  return;
}

// execSetPostInfinityExtrapolation @ 14c68fed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingFloatChannel::execSetPostInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  FMovieSceneChannel *local_res10;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (local_res10 == (FMovieSceneChannel *)0x0) {
    local_res10 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[2].field_0x10);
    if (local_res10 == (FMovieSceneChannel *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set post-infinity extrapolation."
                 ,Error,(FName)0x0);
      return;
    }
  }
  *(undefined1 *)((longlong)&local_res10[1]._padding_ + 1) = uVar2;
  return;
}

// execSetPreInfinityExtrapolation @ 14c68ff90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingFloatChannel::execSetPreInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  FMovieSceneChannel *local_res10;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (local_res10 == (FMovieSceneChannel *)0x0) {
    local_res10 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[2].field_0x10);
    if (local_res10 == (FMovieSceneChannel *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set pre-infinity extrapolation."
                 ,Error,(FName)0x0);
      return;
    }
  }
  *(undefined1 *)&local_res10[1]._padding_ = uVar2;
  return;
}

// execTransform @ 14c690fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingFloatChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EMovieSceneTimeUnit EVar6;
  FFrameNumber FVar7;
  FFrameNumber FVar8;
  double dVar9;
  int iVar10;
  FMovieSceneChannel *pFVar11;
  EMovieSceneTimeUnit local_res8 [8];
  FFrameNumber local_res10 [4];
  FFrameNumber local_res20 [2];
  double local_b8;
  uint local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  FSequencerScriptingRange local_98;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> local_78 [2];
  
  local_res20[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_b8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_b0 = local_b0 & 0xfffffffc;
  iStack_ac = (int)___xmm_000000010000ea600000000000000000;
  iStack_a8 = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
  iStack_a4 = (int)_UNK_1528a8c88;
  iStack_a0 = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res8[0] = DisplayRate;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar10 = iStack_a0;
  dVar9 = local_b8;
  FVar8.Value = local_res20[0].Value;
  FVar7.Value = local_res10[0].Value;
  EVar6 = local_res8[0];
  uVar4._4_4_ = iStack_ac;
  uVar4._0_4_ = local_b0;
  uVar5._4_4_ = iStack_a4;
  uVar5._0_4_ = iStack_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar11 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x10;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_98._0_8_ = uVar4;
  local_98._8_8_ = uVar5;
  if (pFVar11 == (FMovieSceneChannel *)0x0) {
    local_78[0]._0_8_ = *(undefined8 *)&param_1[2].field_0x10;
    local_78[0]._8_8_ = *(undefined8 *)&param_1[2].field_0x18;
    if (local_78[0]._8_8_ != 0) {
      LOCK();
      *(int *)(local_78[0]._8_8_ + 0xc) = *(int *)(local_78[0]._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_78[0]._16_8_ = *(undefined8 *)&param_1[2].field_0x20;
    local_78[0]._24_4_ = *(undefined4 *)(param_1 + 3);
    local_98.InternalRate.Denominator = iVar10;
    TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>
    ::TransformKeysInChannel
              ((TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_78,TVar3,TVar2,FVar8,
               dVar9,FVar7,&local_98,EVar6);
  }
  else {
    local_78[0]._0_8_ = *(undefined8 *)&param_1[1].field_0x18;
    local_78[0]._8_8_ = *(undefined8 *)&param_1[1].field_0x20;
    if (local_78[0]._8_8_ != 0) {
      LOCK();
      *(int *)(local_78[0]._8_8_ + 0xc) = *(int *)(local_78[0]._8_8_ + 0xc) + 1;
      UNLOCK();
    }
    local_78[0]._16_8_ = *(undefined8 *)(param_1 + 2);
    local_78[0]._24_4_ = *(undefined4 *)&param_1[2].field_0x8;
    local_98.InternalRate.Denominator = iVar10;
    TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
    TransformKeysInChannel(local_78,TVar3,TVar2,FVar8,dVar9,FVar7,&local_98,EVar6);
  }
  return;
}

