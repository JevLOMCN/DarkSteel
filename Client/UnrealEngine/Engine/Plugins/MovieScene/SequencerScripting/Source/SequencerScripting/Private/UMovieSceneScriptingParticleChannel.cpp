// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 23

// StaticClass @ 14c691b20

UClass * __cdecl UMovieSceneScriptingParticleChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingParticleChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingParticleChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingParticleChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton;
}

// UMovieSceneScriptingParticleChannel @ 14c698880

UMovieSceneScriptingParticleChannel * __thiscall
UMovieSceneScriptingParticleChannel::UMovieSceneScriptingParticleChannel
          (UMovieSceneScriptingParticleChannel *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// UMovieSceneScriptingParticleChannel @ 14c6988c0

UMovieSceneScriptingParticleChannel * __thiscall
UMovieSceneScriptingParticleChannel::UMovieSceneScriptingParticleChannel
          (UMovieSceneScriptingParticleChannel *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// ~UMovieSceneScriptingParticleChannel @ 14c698da0

void __thiscall
UMovieSceneScriptingParticleChannel::~UMovieSceneScriptingParticleChannel
          (UMovieSceneScriptingParticleChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingParticleChannel__6B_;
  plVar3 = *(longlong **)&(this->ChannelHandle).field_0x8;
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

// ComputeEffectiveRange @ 14c69aac0

/* WARNING: Enum "Type": Some values do not have unique names */

FSequencerScriptingRange * __thiscall
UMovieSceneScriptingParticleChannel::ComputeEffectiveRange
          (UMovieSceneScriptingParticleChannel *this,
          FSequencerScriptingRange *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FFrameNumber FVar3;
  FMovieSceneChannel *pFVar4;
  UObject *pUVar5;
  char *pcVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar7;
  undefined8 uVar8;
  byte bVar9;
  TRange<FFrameNumber> local_res8;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  FMovieSceneChannelHandle local_40;
  
  local_40.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->ChannelHandle;
  local_res8.UpperBound = *(TRangeBound<FFrameNumber> *)&(this->OwningSequence).WeakPtr;
  local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(this->ChannelHandle).field_0x8;
  if (local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_40.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->ChannelHandle).field_0x10;
  local_40.ChannelTypeName.Number = *(uint *)&(this->ChannelHandle).field_0x14;
  bVar9 = 0;
  local_40.ChannelIndex = *(int *)&(this->ChannelHandle).field_0x18;
  __return_storage_ptr__->bHasStart = '\0';
  __return_storage_ptr__->bHasEnd = '\0';
  __return_storage_ptr__->InclusiveStart = 0;
  __return_storage_ptr__->ExclusiveEnd = 0;
  (__return_storage_ptr__->InternalRate).Numerator = 60000;
  (__return_storage_ptr__->InternalRate).Denominator = 1;
  pFVar4 = FMovieSceneChannelHandle::Get(&local_40);
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    local_res8.LowerBound.Type.Value = '\0';
    local_res8.LowerBound._1_3_ = 0;
    local_res8.LowerBound.Value.Value = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get effective range."
               ,Error,(FName)0x0);
    goto LAB_14c69ac48;
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8.UpperBound);
  if (pUVar5 == (UObject *)0x0) {
    local_res8.LowerBound.Type.Value = '\0';
    local_res8.LowerBound._1_3_ = 0;
    local_res8.LowerBound.Value.Value = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
LAB_14c69ab77:
    uVar8 = 0x10000ea60;
  }
  else {
    lVar7 = (**(code **)(*(longlong *)pUVar5 + 0x2f8))(pUVar5);
    if (lVar7 == 0) goto LAB_14c69ab77;
    uVar8 = *(undefined8 *)(lVar7 + 0x138);
  }
  pcVar6 = (char *)(**(code **)(pFVar4->_padding_ + 0x48))(pFVar4,local_68);
  uStack_54 = 0;
  if (pcVar6[8] != '\x02') {
    bVar9 = 2;
  }
  local_58 = CONCAT31(local_58._1_3_,bVar9 | *pcVar6 != '\x02' | (byte)local_58 & 0xfc);
  uStack_4c = uVar8;
  if (*pcVar6 != '\x02') {
    FVar3 = UE::MovieScene::DiscreteInclusiveLower(&local_res8);
    uStack_54 = CONCAT44(uStack_54._4_4_,*(undefined4 *)CONCAT44(extraout_var,FVar3.Value));
  }
  if (bVar9 != 0) {
    FVar3 = UE::MovieScene::DiscreteExclusiveUpper(&local_res8);
    uStack_54 = CONCAT44(*(undefined4 *)CONCAT44(extraout_var_00,FVar3.Value),(int)uStack_54);
  }
  *(undefined4 *)__return_storage_ptr__ = local_58;
  __return_storage_ptr__->InclusiveStart = (int)uStack_54;
  __return_storage_ptr__->ExclusiveEnd = uStack_54._4_4_;
  (__return_storage_ptr__->InternalRate).Numerator = (int)uStack_4c;
  (__return_storage_ptr__->InternalRate).Denominator = uStack_4c._4_4_;
LAB_14c69ac48:
  if (local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_40.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// EvaluateKeys @ 14c69af60

TArray<EParticleKey,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingParticleChannel::EvaluateKeys
          (UMovieSceneScriptingParticleChannel *this,
          TArray<EParticleKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSequencerScriptingRange *param_1,FFrameRate param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<EParticleKey,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_68;
  FSequencerScriptingRange local_58;
  TMovieSceneChannelHandle<FMovieSceneParticleChannel> local_38;
  
  local_38._0_8_ = *(undefined8 *)&this->ChannelHandle;
  FVar3 = (this->OwningSequence).WeakPtr;
  local_38._8_8_ = *(undefined8 *)&(this->ChannelHandle).field_0x8;
  if (local_38._8_8_ != 0) {
    LOCK();
    *(int *)(local_38._8_8_ + 0xc) = *(int *)(local_38._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_38._16_8_ = *(undefined8 *)&(this->ChannelHandle).field_0x10;
  local_58._0_4_ = *(undefined4 *)&param_1->field_0x0;
  local_58.InclusiveStart = param_1->InclusiveStart;
  local_58.ExclusiveEnd = param_1->ExclusiveEnd;
  local_58.InternalRate.Numerator = (param_1->InternalRate).Numerator;
  local_38._24_4_ = *(undefined4 *)&(this->ChannelHandle).field_0x18;
  local_58.InternalRate.Denominator = (param_1->InternalRate).Denominator;
  TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
  ::EvaluateKeysInChannel
            (&local_68,&local_38,(TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar3,&local_58
             ,param_2);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  __return_storage_ptr__->ArrayMax = 0;
  *piVar1 = 0;
  iVar10 = local_68.ArrayNum;
  if (iVar10 < 1) {
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_68._8_8_ & 0xffffffff);
    }
  }
  else {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar10,&__return_storage_ptr__->AllocatorInstance,piVar1,
                       &__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + iVar6,0,(longlong)iVar10);
  }
  uVar9 = 0;
  if (0 < local_68.ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_68.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<EParticleKey,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      FVar2 = local_68.AllocatorInstance.Data[lVar11];
      uVar7 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<EParticleKey,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      uVar9 = uVar9 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[lVar11] = FVar2;
      lVar11 = lVar11 + 1;
    } while ((int)uVar9 < local_68.ArrayNum);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetKeys @ 14c69ef50

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingParticleChannel::GetKeys
          (UMovieSceneScriptingParticleChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneParticleChannel> local_28;
  
  local_28._0_8_ = *(undefined8 *)&this->ChannelHandle;
  FVar1 = (this->OwningSection).WeakPtr;
  FVar2 = (this->OwningSequence).WeakPtr;
  local_28._8_8_ = *(undefined8 *)&(this->ChannelHandle).field_0x8;
  if (local_28._8_8_ != 0) {
    LOCK();
    *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_28._16_8_ = *(undefined8 *)&(this->ChannelHandle).field_0x10;
  local_28._24_4_ = *(undefined4 *)&(this->ChannelHandle).field_0x18;
  TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
  ::GetKeysInChannel(__return_storage_ptr__,&local_28,
                     (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                     (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c69f070

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingParticleChannel::GetKeysByIndex
          (UMovieSceneScriptingParticleChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneParticleChannel> local_28;
  
  local_28._0_8_ = *(undefined8 *)&this->ChannelHandle;
  FVar1 = (this->OwningSection).WeakPtr;
  FVar2 = (this->OwningSequence).WeakPtr;
  local_28._8_8_ = *(undefined8 *)&(this->ChannelHandle).field_0x8;
  if (local_28._8_8_ != 0) {
    LOCK();
    *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_28._16_8_ = *(undefined8 *)&(this->ChannelHandle).field_0x10;
  local_28._24_4_ = *(undefined4 *)&(this->ChannelHandle).field_0x18;
  TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
  ::GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6a1e10

UClass * __cdecl UMovieSceneScriptingParticleChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingParticleChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingParticleChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingParticleChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingParticleChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingParticleChannel.InnerSingleton;
}

// RemoveKey @ 14c6a4a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingParticleChannel::RemoveKey
          (UMovieSceneScriptingParticleChannel *this,UMovieSceneScriptingKey *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FMovieSceneChannel *pFVar4;
  FKeyHandle *local_38;
  undefined4 uStack_30;
  FMovieSceneChannelHandle local_28;
  
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->ChannelHandle;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(this->ChannelHandle).field_0x8;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->ChannelHandle).field_0x10;
  local_28.ChannelTypeName.Number = *(uint *)&(this->ChannelHandle).field_0x14;
  local_28.ChannelIndex = *(int *)&(this->ChannelHandle).field_0x18;
  if (param_1 == (UMovieSceneScriptingKey *)0x0) {
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
        return;
      }
    }
  }
  else {
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
    if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneScriptingParticleChannel @ 14c6a71e0

void __cdecl
UMovieSceneScriptingParticleChannel::StaticRegisterNativesUMovieSceneScriptingParticleChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingParticleChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c6a8f10

void __cdecl
UMovieSceneScriptingParticleChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameNumber FVar1;
  FProperty *pFVar2;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar3;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar4;
  UMovieSceneScriptingParticleKey *pUVar5;
  int *piVar6;
  EMovieSceneTimeUnit local_res8 [8];
  uchar local_res10 [8];
  uchar local_res18 [8];
  int local_res20 [2];
  float local_58 [2];
  TMovieSceneChannelHandle<FMovieSceneParticleChannel> local_50;
  
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  piVar6 = local_res20;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar6 = (int *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res8[0] = DisplayRate;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.Value = *piVar6;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x10;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  TVar4.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar4.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_res18[0] = local_res10[0];
  local_50._0_8_ = *(undefined8 *)&param_1[1].field_0x18;
  local_50._8_8_ = *(undefined8 *)&param_1[1].field_0x20;
  if (local_50._8_8_ != 0) {
    LOCK();
    *(int *)(local_50._8_8_ + 0xc) = *(int *)(local_50._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_50._16_8_ = *(undefined8 *)(param_1 + 2);
  local_50._24_4_ = *(undefined4 *)&param_1[2].field_0x8;
  pUVar5 = TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
           ::AddKeyInChannel(&local_50,TVar4,TVar3,FVar1,local_res18,local_58[0],local_res8[0],Auto)
  ;
  *(UMovieSceneScriptingParticleKey **)param_3 = pUVar5;
  return;
}

// execComputeEffectiveRange @ 14c6aa550

void __cdecl
UMovieSceneScriptingParticleChannel::execComputeEffectiveRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FSequencerScriptingRange *pFVar2;
  FSequencerScriptingRange local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = ComputeEffectiveRange((UMovieSceneScriptingParticleChannel *)param_1,&local_28);
  uVar1 = *(undefined8 *)&pFVar2->ExclusiveEnd;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(int *)((longlong)param_3 + 0x10) = (pFVar2->InternalRate).Denominator;
  return;
}

// execEvaluateKeys @ 14c6aaaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingParticleChannel::execEvaluateKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  TArray<EParticleKey,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10;
  int iStackX_14;
  TArray<EParticleKey,TSizedDefaultAllocator<32>_> local_58;
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
  pTVar3 = EvaluateKeys((UMovieSceneScriptingParticleChannel *)param_1,&local_58,&local_28,FVar2);
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

// execGetDefault @ 14c6adff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingParticleChannel::execGetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMovieSceneChannel *pFVar3;
  FMovieSceneChannelHandle local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x18;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x20;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x0;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[2].field_0x4;
  local_28.ChannelIndex = *(int *)&param_1[2].field_0x8;
  pFVar3 = FMovieSceneChannelHandle::Get(&local_28);
  if (pFVar3 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
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
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetKeys @ 14c6aecb0

void __cdecl
UMovieSceneScriptingParticleChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c6aee60

void __cdecl
UMovieSceneScriptingParticleChannel::execGetKeysByIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetNumKeys @ 14c6afb40

void __cdecl
UMovieSceneScriptingParticleChannel::execGetNumKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FMovieSceneChannel *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar2 != (FMovieSceneChannel *)0x0) {
    pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
    uVar1 = (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2);
    *(undefined4 *)param_3 = uVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execHasDefault @ 14c6b3370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingParticleChannel::execHasDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMovieSceneChannel *pFVar3;
  FMovieSceneChannelHandle local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x18;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x20;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x0;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[2].field_0x4;
  local_28.ChannelIndex = *(int *)&param_1[2].field_0x8;
  pFVar3 = FMovieSceneChannelHandle::Get(&local_28);
  if (pFVar3 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
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
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveDefault @ 14c6b4ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingParticleChannel::execRemoveDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FMovieSceneChannel *pFVar4;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FMovieSceneChannelHandle local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8.ObjectIndex = *(int *)&param_1[1].field_0x10;
  local_res8.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x18;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x20;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x0;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[2].field_0x4;
  local_28.ChannelIndex = *(int *)&param_1[2].field_0x8;
  pFVar4 = FMovieSceneChannelHandle::Get(&local_28);
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
               ,Error,(FName)0x0);
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      FWeakObjectPtr::Get(&local_res8);
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

// execRemoveKey @ 14c6b4f50

void __cdecl
UMovieSceneScriptingParticleChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c6b5b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingParticleChannel::execSetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  bool bVar4;
  FMovieSceneChannel *pFVar5;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FMovieSceneChannelHandle local_28;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x18;
  local_res10.ObjectIndex = *(int *)&param_1[1].field_0x10;
  local_res10.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x20;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x0;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[2].field_0x4;
  local_28.ChannelIndex = *(int *)&param_1[2].field_0x8;
  pFVar5 = FMovieSceneChannelHandle::Get(&local_28);
  if (pFVar5 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
               ,Error,(FName)0x0);
  }
  else {
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      FWeakObjectPtr::Get(&local_res10);
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

// execTransform @ 14c6b9f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingParticleChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar3;
  EMovieSceneTimeUnit local_res8 [8];
  FFrameNumber local_res10 [2];
  FFrameNumber local_res20 [2];
  double local_78;
  uint local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  FSequencerScriptingRange local_58;
  TMovieSceneChannelHandle<FMovieSceneParticleChannel> local_38;
  
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
  local_78 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  local_70 = local_70 & 0xfffffffc;
  iStack_6c = (int)___xmm_000000010000ea600000000000000000;
  iStack_68 = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
  iStack_64 = (int)_UNK_1528a8c88;
  iStack_60 = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
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
  local_58.InclusiveStart = iStack_6c;
  local_58._0_4_ = local_70;
  local_58.InternalRate.Numerator = iStack_64;
  local_58.ExclusiveEnd = iStack_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._0_8_ = *(undefined8 *)&param_1[1].field_0x18;
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x10;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_38._8_8_ = *(undefined8 *)&param_1[1].field_0x20;
  if (local_38._8_8_ != 0) {
    LOCK();
    *(int *)(local_38._8_8_ + 0xc) = *(int *)(local_38._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_38._16_8_ = *(undefined8 *)(param_1 + 2);
  local_38._24_4_ = *(undefined4 *)&param_1[2].field_0x8;
  local_58.InternalRate.Denominator = iStack_60;
  TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
  ::TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

