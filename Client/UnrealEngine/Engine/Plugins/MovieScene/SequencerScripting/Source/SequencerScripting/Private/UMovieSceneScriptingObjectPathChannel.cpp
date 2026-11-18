// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 19

// StaticClass @ 14c6806c0

UClass * __cdecl UMovieSceneScriptingObjectPathChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingObjectPathChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingObjectPathChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingObjectPathChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton;
}

// UMovieSceneScriptingObjectPathChannel @ 14c6844c0

UMovieSceneScriptingObjectPathChannel * __thiscall
UMovieSceneScriptingObjectPathChannel::UMovieSceneScriptingObjectPathChannel
          (UMovieSceneScriptingObjectPathChannel *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// UMovieSceneScriptingObjectPathChannel @ 14c684500

UMovieSceneScriptingObjectPathChannel * __thiscall
UMovieSceneScriptingObjectPathChannel::UMovieSceneScriptingObjectPathChannel
          (UMovieSceneScriptingObjectPathChannel *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// ~UMovieSceneScriptingObjectPathChannel @ 14c684830

void __thiscall
UMovieSceneScriptingObjectPathChannel::~UMovieSceneScriptingObjectPathChannel
          (UMovieSceneScriptingObjectPathChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingObjectPathChannel__6B_;
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

// GetDefault @ 14c686fa0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UMovieSceneScriptingObjectPathChannel::GetDefault(UMovieSceneScriptingObjectPathChannel *this)

{
  FMovieSceneChannel *pFVar1;
  UObject *pUVar2;
  undefined1 local_38 [40];
  TObjectPtr<UObject>_u_0 local_10;
  
  pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->ChannelHandle);
  if (pFVar1 != (FMovieSceneChannel *)0x0) {
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
              ((TPersistentObjectPtr<FSoftObjectPath> *)local_38,
               (TPersistentObjectPtr<FSoftObjectPath> *)&pFVar1[1].KeyDeletedEvent);
    local_10 = (TObjectPtr<UObject>_u_0)
               *(TObjectPtr<UObject>_u_0 *)&pFVar1[1].KeyMovedEvent.field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_10.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_10.DebugPtr);
    }
    pUVar2 = FMovieSceneObjectPathChannelKeyValue::Get
                       ((FMovieSceneObjectPathChannelKeyValue *)local_38);
    if ((FScriptContainerElement *)local_38._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._24_8_);
    }
    return pUVar2;
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value.",
             Error,(FName)0x0);
  return (UObject *)0x0;
}

// GetKeys @ 14c6872b0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingObjectPathChannel::GetKeys
          (UMovieSceneScriptingObjectPathChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
  ::GetKeysInChannel(__return_storage_ptr__,&local_28,
                     (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                     (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c6874a0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingObjectPathChannel::GetKeysByIndex
          (UMovieSceneScriptingObjectPathChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
  ::GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c689700

UClass * __cdecl UMovieSceneScriptingObjectPathChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingObjectPathChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingObjectPathChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingObjectPathChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathChannel.InnerSingleton;
}

// RemoveKey @ 14c68b1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingObjectPathChannel::RemoveKey
          (UMovieSceneScriptingObjectPathChannel *this,UMovieSceneScriptingKey *param_1)

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

// StaticRegisterNativesUMovieSceneScriptingObjectPathChannel @ 14c68c620

void __cdecl
UMovieSceneScriptingObjectPathChannel::StaticRegisterNativesUMovieSceneScriptingObjectPathChannel
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c68de40

void __cdecl
UMovieSceneScriptingObjectPathChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar3;
  EMovieSceneTimeUnit EVar4;
  float fVar5;
  FFrameNumber FVar6;
  UMovieSceneScriptingObjectPathKey *pUVar7;
  EMovieSceneTimeUnit local_res8 [8];
  float local_res10 [2];
  FFrameNumber local_res18 [2];
  UObject *local_res20;
  TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> local_88;
  undefined1 local_68 [64];
  
  local_res18[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  FVar6.Value = local_res18[0].Value;
  fVar5 = local_res10[0];
  EVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMovieSceneObjectPathChannelKeyValue::FMovieSceneObjectPathChannelKeyValue
            ((FMovieSceneObjectPathChannelKeyValue *)local_68,local_res20);
  local_88._0_8_ = *(undefined8 *)&param_1[1].field_0x18;
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x10;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_88._8_8_ = *(undefined8 *)&param_1[1].field_0x20;
  if (local_88._8_8_ != 0) {
    LOCK();
    *(int *)(local_88._8_8_ + 0xc) = *(int *)(local_88._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_88._16_8_ = *(undefined8 *)(param_1 + 2);
  local_88._24_4_ = *(undefined4 *)&param_1[2].field_0x8;
  pUVar7 = TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
           ::AddKeyInChannel(&local_88,TVar3,TVar2,FVar6,
                             (FMovieSceneObjectPathChannelKeyValue *)local_68,fVar5,EVar4,Auto);
  if ((void *)local_68._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._24_8_);
  }
  *(UMovieSceneScriptingObjectPathKey **)param_3 = pUVar7;
  return;
}

// execGetDefault @ 14c68e4b0

void __cdecl
UMovieSceneScriptingObjectPathChannel::execGetDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetDefault((UMovieSceneScriptingObjectPathChannel *)param_1);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetKeys @ 14c68e720

void __cdecl
UMovieSceneScriptingObjectPathChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c68eae0

void __cdecl
UMovieSceneScriptingObjectPathChannel::execGetKeysByIndex
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

// execHasDefault @ 14c68f4d0

void __cdecl
UMovieSceneScriptingObjectPathChannel::execHasDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetDefault((UMovieSceneScriptingObjectPathChannel *)param_1);
  *(bool *)param_3 = pUVar1 != (UObject *)0x0;
  return;
}

// execRemoveDefault @ 14c68f600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingObjectPathChannel::execRemoveDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FMovieSceneChannel *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[1].field_0x10);
  if (bVar1) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].field_0x10);
  }
  pFVar2 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar2 != (FMovieSceneChannel *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00014c68f658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
             ,Error,(FName)0x0);
  return;
}

// execRemoveKey @ 14c68f840

void __cdecl
UMovieSceneScriptingObjectPathChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c68fbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingObjectPathChannel::execSetDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FMovieSceneChannel *pFVar3;
  UObject *local_res8;
  undefined8 local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar3 != (FMovieSceneChannel *)0x0) {
    FMovieSceneObjectPathChannelKeyValue::operator=
              ((FMovieSceneObjectPathChannelKeyValue *)&pFVar3[1].KeyDeletedEvent,pUVar2);
    return;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value.",
             Error,(FName)0x0);
  return;
}

// execTransform @ 14c691450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingObjectPathChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> local_38;
  
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
  TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
  ::TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

