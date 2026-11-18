// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 22

// StaticClass @ 14c681ce0

UClass * __cdecl UMovieSceneScriptingIntegerChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingIntegerChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingIntegerChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingIntegerChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton;
}

// UMovieSceneScriptingIntegerChannel @ 14c6843c0

UMovieSceneScriptingIntegerChannel * __thiscall
UMovieSceneScriptingIntegerChannel::UMovieSceneScriptingIntegerChannel
          (UMovieSceneScriptingIntegerChannel *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMovieSceneScriptingIntegerChannel @ 14c684410

UMovieSceneScriptingIntegerChannel * __thiscall
UMovieSceneScriptingIntegerChannel::UMovieSceneScriptingIntegerChannel
          (UMovieSceneScriptingIntegerChannel *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMovieSceneScriptingIntegerChannel @ 14c684790

void __thiscall
UMovieSceneScriptingIntegerChannel::~UMovieSceneScriptingIntegerChannel
          (UMovieSceneScriptingIntegerChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingIntegerChannel__6B_;
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

// GetKeys @ 14c687250

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingIntegerChannel::GetKeys
          (UMovieSceneScriptingIntegerChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneIntegerChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
  GetKeysInChannel(__return_storage_ptr__,&local_28,
                   (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                   (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c687440

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingIntegerChannel::GetKeysByIndex
          (UMovieSceneScriptingIntegerChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneIntegerChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
  GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c689580

UClass * __cdecl UMovieSceneScriptingIntegerChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingIntegerChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingIntegerChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingIntegerChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingIntegerChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingIntegerChannel.InnerSingleton;
}

// RemoveKey @ 14c68b080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingIntegerChannel::RemoveKey
          (UMovieSceneScriptingIntegerChannel *this,UMovieSceneScriptingKey *param_1)

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

// StaticRegisterNativesUMovieSceneScriptingIntegerChannel @ 14c68c5a0

void __cdecl
UMovieSceneScriptingIntegerChannel::StaticRegisterNativesUMovieSceneScriptingIntegerChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c68dc60

void __cdecl
UMovieSceneScriptingIntegerChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameNumber FVar1;
  FProperty *pFVar2;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar3;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar4;
  UMovieSceneScriptingIntegerKey *pUVar5;
  int *piVar6;
  EMovieSceneTimeUnit local_res8 [8];
  int local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  int local_58 [2];
  TMovieSceneChannelHandle<FMovieSceneIntegerChannel> local_50;
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  piVar6 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar6 = (int *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[2].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
  TVar4.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar4.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_58[0] = local_res20[0];
  local_50._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
  local_50._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
  if (local_50._8_8_ != 0) {
    LOCK();
    *(int *)(local_50._8_8_ + 0xc) = *(int *)(local_50._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_50._16_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_50._24_4_ = *(undefined4 *)(param_1 + 2);
  pUVar5 = TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>
           ::AddKeyInChannel(&local_50,TVar4,TVar3,FVar1,local_58,local_res18[0],local_res8[0],Auto)
  ;
  *(UMovieSceneScriptingIntegerKey **)param_3 = pUVar5;
  return;
}

// execEvaluateKeys @ 14c68e1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingIntegerChannel::execEvaluateKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar2;
  FFrameRate FVar3;
  int local_res8;
  int iStackX_c;
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  uint local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  FSequencerScriptingRange local_58;
  TMovieSceneChannelHandle<FMovieSceneIntegerChannel> local_38;
  
  local_78 = local_78 & 0xfffffffc;
  iStack_74 = (int)___xmm_000000010000ea600000000000000000;
  iStack_70 = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
  iStack_6c = (int)_UNK_1528a8c88;
  iStack_68 = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8 = 60000;
  iStackX_c = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_58.InclusiveStart = iStack_74;
  local_58._0_4_ = local_78;
  local_58.InternalRate.Numerator = iStack_6c;
  local_58.ExclusiveEnd = iStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
  FVar3.Denominator = iStackX_c;
  FVar3.Numerator = local_res8;
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_38._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
  if (local_38._8_8_ != 0) {
    LOCK();
    *(int *)(local_38._8_8_ + 0xc) = *(int *)(local_38._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_38._16_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_38._24_4_ = *(undefined4 *)(param_1 + 2);
  local_58.InternalRate.Denominator = iStack_68;
  TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
  EvaluateKeysInChannel(&local_88,&local_38,TVar2,&local_58,FVar3);
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_88.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execGetDefault @ 14c68e3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingIntegerChannel::execGetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMovieSceneChannel *pFVar3;
  undefined4 uVar4;
  FMovieSceneChannelHandle local_28;
  
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x20;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[1].field_0x24;
  local_28.ChannelIndex = *(int *)(param_1 + 2);
  pFVar3 = FMovieSceneChannelHandle::Get(&local_28);
  if (pFVar3 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
  }
  else if (pFVar3[1].KeyAddedEvent.field_0x14 != '\0') {
    uVar4 = *(undefined4 *)&pFVar3[1].KeyAddedEvent.field_0x10;
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
  *(undefined4 *)param_3 = uVar4;
  return;
}

// execGetInterpolateLinearKeys @ 14c68e4f0

void __cdecl
UMovieSceneScriptingIntegerChannel::execGetInterpolateLinearKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneChannel *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  *(undefined1 *)param_3 = *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 2);
  return;
}

// execGetKeys @ 14c68e690

void __cdecl
UMovieSceneScriptingIntegerChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c68e9d0

void __cdecl
UMovieSceneScriptingIntegerChannel::execGetKeysByIndex
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

// execGetNumKeys @ 14c68ed00

void __cdecl
UMovieSceneScriptingIntegerChannel::execGetNumKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FMovieSceneChannel *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  if (pFVar2 != (FMovieSceneChannel *)0x0) {
    pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
    uVar1 = (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2);
    *(undefined4 *)param_3 = uVar1;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execHasDefault @ 14c68f410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingIntegerChannel::execHasDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMovieSceneChannel *pFVar3;
  undefined1 uVar4;
  FMovieSceneChannelHandle local_28;
  
  uVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x20;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[1].field_0x24;
  local_28.ChannelIndex = *(int *)(param_1 + 2);
  pFVar3 = FMovieSceneChannelHandle::Get(&local_28);
  if (pFVar3 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
  }
  else if (pFVar3[1].KeyAddedEvent.field_0x14 != '\0') {
    uVar4 = 1;
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
  *(undefined1 *)param_3 = uVar4;
  return;
}

// execRemoveDefault @ 14c68f530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingIntegerChannel::execRemoveDefault
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
  local_res8.ObjectIndex = *(int *)&param_1[2].field_0x8;
  local_res8.ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
  local_28.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_28.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x20;
  local_28.ChannelTypeName.Number = *(uint *)&param_1[1].field_0x24;
  local_28.ChannelIndex = *(int *)(param_1 + 2);
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
    pFVar4[1].KeyAddedEvent.field_0x14 = 0;
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

// execRemoveKey @ 14c68f7b0

void __cdecl
UMovieSceneScriptingIntegerChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c68fa80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingIntegerChannel::execSetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  FMovieSceneChannel *pFVar6;
  undefined4 local_res8 [2];
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  FMovieSceneChannelHandle local_38;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_res10[0].ObjectIndex = *(int *)&param_1[2].field_0x8;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
  local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
  if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x20;
  local_38.ChannelTypeName.Number = *(uint *)&param_1[1].field_0x24;
  local_38.ChannelIndex = *(int *)(param_1 + 2);
  pFVar6 = FMovieSceneChannelHandle::Get(&local_38);
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
               ,Error,(FName)0x0);
  }
  else {
    bVar5 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar5) {
      FWeakObjectPtr::Get(local_res10);
    }
    pFVar6[1].KeyAddedEvent.field_0x14 = 1;
    *(undefined4 *)&pFVar6[1].KeyAddedEvent.field_0x10 = uVar4;
  }
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

// execSetInterpolateLinearKeys @ 14c68fc80

void __cdecl
UMovieSceneScriptingIntegerChannel::execSetInterpolateLinearKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieSceneChannel *pFVar2;
  bool bVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  *(bool *)((longlong)&pFVar2[1]._padding_ + 2) = bVar3;
  return;
}

// execTransform @ 14c691250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingIntegerChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneChannelHandle<FMovieSceneIntegerChannel> local_38;
  
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
  local_38._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[2].field_0x8;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_38._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
  if (local_38._8_8_ != 0) {
    LOCK();
    *(int *)(local_38._8_8_ + 0xc) = *(int *)(local_38._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_38._16_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_38._24_4_ = *(undefined4 *)(param_1 + 2);
  local_58.InternalRate.Denominator = iStack_60;
  TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
  TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

