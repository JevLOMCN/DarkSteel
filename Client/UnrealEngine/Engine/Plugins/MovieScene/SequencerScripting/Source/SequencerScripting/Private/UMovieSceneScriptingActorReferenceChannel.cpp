// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 18

// StaticClass @ 14c671990

UClass * __cdecl UMovieSceneScriptingActorReferenceChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingActorReferenceChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingActorReferenceChannel,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingActorReferenceChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingActorReferenceChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.InnerSingleton;
}

// UMovieSceneScriptingActorReferenceChannel @ 14c6756c0

UMovieSceneScriptingActorReferenceChannel * __thiscall
UMovieSceneScriptingActorReferenceChannel::UMovieSceneScriptingActorReferenceChannel
          (UMovieSceneScriptingActorReferenceChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneScriptingActorReferenceChannel__6B_;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// UMovieSceneScriptingActorReferenceChannel @ 14c675700

UMovieSceneScriptingActorReferenceChannel * __thiscall
UMovieSceneScriptingActorReferenceChannel::UMovieSceneScriptingActorReferenceChannel
          (UMovieSceneScriptingActorReferenceChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneScriptingActorReferenceChannel__6B_;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// ~UMovieSceneScriptingActorReferenceChannel @ 14c675c40

void __thiscall
UMovieSceneScriptingActorReferenceChannel::~UMovieSceneScriptingActorReferenceChannel
          (UMovieSceneScriptingActorReferenceChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingActorReferenceChannel__6B_;
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
  this->_padding_ = (longlong)&___7UMovieSceneScriptingChannel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetKeys @ 14c677800

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingActorReferenceChannel::GetKeys
          (UMovieSceneScriptingActorReferenceChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneActorReferenceData> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
  ::GetKeysInChannel(__return_storage_ptr__,&local_28,
                     (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                     (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c6779c0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingActorReferenceChannel::GetKeysByIndex
          (UMovieSceneScriptingActorReferenceChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneActorReferenceData> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
  ::GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c679080

UClass * __cdecl UMovieSceneScriptingActorReferenceChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingActorReferenceChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingActorReferenceChannel,0x60,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingActorReferenceChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingActorReferenceChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingActorReferenceChannel.InnerSingleton;
}

// RemoveKey @ 14c67a2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingActorReferenceChannel::RemoveKey
          (UMovieSceneScriptingActorReferenceChannel *this,UMovieSceneScriptingKey *param_1)

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

// StaticRegisterNativesUMovieSceneScriptingActorReferenceChannel @ 14c67a8e0

void __cdecl
UMovieSceneScriptingActorReferenceChannel::
StaticRegisterNativesUMovieSceneScriptingActorReferenceChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c67b930

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execAddKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar3;
  UMovieSceneScriptingActorReferenceKey *pUVar4;
  EMovieSceneTimeUnit local_res8 [8];
  float local_res10 [2];
  FFrameNumber local_res18 [4];
  FGuid local_88;
  int local_78;
  int iStack_74;
  TMovieSceneChannelHandle<FMovieSceneActorReferenceData> local_70;
  FMovieSceneActorReferenceKey local_50;
  
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
  local_88.A = 0;
  local_88.B = 0;
  local_88.C = 0;
  local_88.D = 0;
  local_78 = 0;
  iStack_74 = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
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
  local_50.Object.ResolveParentIndex = iStack_74;
  local_50.Object.SequenceID = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70._0_8_ = *(undefined8 *)&param_1[1].field_0x18;
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x10;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_70._8_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_50.ComponentName.ComparisonIndex.Value = 0;
  local_50.ComponentName.Number = 0;
  local_50.SocketName.ComparisonIndex.Value = 0;
  local_50.SocketName.Number = 0;
  local_50.Object.Guid.A = local_88.A;
  local_50.Object.Guid.B = local_88.B;
  local_50.Object.Guid.C = local_88.C;
  local_50.Object.Guid.D = local_88.D;
  if (local_70._8_8_ != 0) {
    LOCK();
    *(int *)(local_70._8_8_ + 0xc) = *(int *)(local_70._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_70._16_8_ = *(undefined8 *)(param_1 + 2);
  local_70._24_4_ = *(undefined4 *)&param_1[2].field_0x8;
  pUVar4 = TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
           ::AddKeyInChannel(&local_70,TVar3,TVar2,local_res18[0],&local_50,local_res10[0],
                             local_res8[0],Auto);
  *(UMovieSceneScriptingActorReferenceKey **)param_3 = pUVar4;
  return;
}

// execGetDefault @ 14c67c6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execGetDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FMovieSceneChannel *pFVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar3 != (FMovieSceneChannel *)0x0) {
    uVar2 = *(undefined8 *)&pFVar3[1].KeyAddedEvent.field_0x10;
    uVar1 = *(undefined8 *)&pFVar3[1].KeyAddedEvent.field_0x18;
    *(undefined8 *)param_3 = *(undefined8 *)&pFVar3[1].KeyAddedEvent.field_0x8;
    *(undefined8 *)((longlong)param_3 + 8) = uVar2;
    *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value.",
             Error,(FName)0x0);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0xffffffff00000000;
  return;
}

// execGetKeys @ 14c67ca40

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execGetKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c67cc80

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execGetKeysByIndex
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

// execHasDefault @ 14c67dac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execHasDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  int iVar2;
  FMovieSceneChannel *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int iStack_24;
  
  local_28 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar3 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
    iStack_24 = -1;
    iVar5 = local_28;
    iVar2 = local_28;
    iVar6 = local_28;
    iVar4 = local_28;
  }
  else {
    uVar1 = *(undefined8 *)&pFVar3[1].KeyAddedEvent.field_0x18;
    iStack_24 = (int)((ulonglong)uVar1 >> 0x20);
    local_28 = (int)uVar1;
    iVar5 = *(int *)&pFVar3[1].KeyAddedEvent.field_0x10;
    iVar2 = *(int *)&pFVar3[1].KeyAddedEvent.field_0x14;
    iVar6 = *(int *)&pFVar3[1].KeyAddedEvent.field_0xc;
    iVar4 = *(int *)&pFVar3[1].KeyAddedEvent.field_0x8;
  }
  if (((((iVar2 == 0 && iVar5 == 0) && iVar6 == 0) && iVar4 == 0) && (local_28 == 0)) &&
     (iStack_24 == -1)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveDefault @ 14c67ddd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execRemoveDefault
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
                    /* WARNING: Could not recover jumptable at 0x00014c67de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to remove default value."
             ,Error,(FName)0x0);
  return;
}

// execRemoveKey @ 14c67e0d0

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execRemoveKey
          (UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c67e510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execSetDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  FMovieSceneChannel *pFVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  FMovieSceneChannelHandle local_60;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  uVar5 = uStack_70;
  uVar4 = local_78;
  uStack_28 = 0;
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x18;
  local_res8.ObjectIndex = *(int *)&param_1[1].field_0x10;
  local_res8.ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x20;
  local_30 = CONCAT44(uStack_64,local_68);
  if (local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x0;
  local_60.ChannelTypeName.Number = *(uint *)&param_1[2].field_0x4;
  local_60.ChannelIndex = *(int *)&param_1[2].field_0x8;
  pFVar7 = FMovieSceneChannelHandle::Get(&local_60);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
               ,Error,(FName)0x0);
  }
  else {
    bVar6 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar6) {
      FWeakObjectPtr::Get(&local_res8);
    }
    *(undefined8 *)&pFVar7[1].KeyAddedEvent.field_0x8 = uVar4;
    *(undefined8 *)&pFVar7[1].KeyAddedEvent.field_0x10 = uVar5;
    *(undefined4 *)&pFVar7[1].KeyAddedEvent.field_0x18 = (undefined4)local_30;
    *(undefined4 *)&pFVar7[1].KeyAddedEvent.field_0x1c = local_30._4_4_;
    *(undefined4 *)&pFVar7[1].KeyDeletedEvent = (undefined4)uStack_28;
    *(undefined4 *)&pFVar7[1].KeyDeletedEvent.field_0x4 = uStack_28._4_4_;
    *(undefined8 *)&pFVar7[1].KeyDeletedEvent.field_0x8 = local_20;
  }
  if (local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// execTransform @ 14c67fe00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingActorReferenceChannel::execTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneChannelHandle<FMovieSceneActorReferenceData> local_38;
  
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
  TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
  ::TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

