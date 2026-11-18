// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 18

// StaticClass @ 14c6940a0

UClass * __cdecl UMovieSceneScriptingStringChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingStringChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingStringChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingStringChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingStringChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton;
}

// UMovieSceneScriptingStringChannel @ 14c698960

UMovieSceneScriptingStringChannel * __thiscall
UMovieSceneScriptingStringChannel::UMovieSceneScriptingStringChannel
          (UMovieSceneScriptingStringChannel *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingStringChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMovieSceneScriptingStringChannel @ 14c6989b0

UMovieSceneScriptingStringChannel * __thiscall
UMovieSceneScriptingStringChannel::UMovieSceneScriptingStringChannel
          (UMovieSceneScriptingStringChannel *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingChannel::UMovieSceneScriptingChannel
            ((UMovieSceneScriptingChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingStringChannel__6B_;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMovieSceneScriptingStringChannel @ 14c698e40

void __thiscall
UMovieSceneScriptingStringChannel::~UMovieSceneScriptingStringChannel
          (UMovieSceneScriptingStringChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingStringChannel__6B_;
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

// GetKeys @ 14c69efb0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingStringChannel::GetKeys
          (UMovieSceneScriptingStringChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneStringChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
  GetKeysInChannel(__return_storage_ptr__,&local_28,
                   (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                   (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c69f0d0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingStringChannel::GetKeysByIndex
          (UMovieSceneScriptingStringChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneStringChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
  GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6a1f90

UClass * __cdecl UMovieSceneScriptingStringChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingStringChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingStringChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingStringChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingStringChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.InnerSingleton;
}

// RemoveKey @ 14c6a4b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingStringChannel::RemoveKey
          (UMovieSceneScriptingStringChannel *this,UMovieSceneScriptingKey *param_1)

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

// StaticRegisterNativesUMovieSceneScriptingStringChannel @ 14c6a7260

void __cdecl
UMovieSceneScriptingStringChannel::StaticRegisterNativesUMovieSceneScriptingStringChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c6a90f0

void __cdecl
UMovieSceneScriptingStringChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FFrameNumber FVar1;
  FProperty *pFVar2;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar3;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar4;
  EMovieSceneTimeUnit EVar5;
  float fVar6;
  void *_Src;
  UMovieSceneScriptingStringKey *pUVar7;
  longlong lVar8;
  int *piVar9;
  EMovieSceneTimeUnit local_res8 [8];
  int local_res10 [2];
  float local_res18 [2];
  FString local_88;
  void *local_78;
  undefined8 local_70;
  TMovieSceneChannelHandle<FMovieSceneStringChannel> local_68;
  
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
  local_78 = (void *)0x0;
  local_70 = 0;
  piVar9 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar9 = (int *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  _Src = local_78;
  fVar6 = local_res18[0];
  EVar5 = local_res8[0];
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_70;
  local_88.Data.ArrayNum = (int)local_70;
  if ((int)local_70 == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,(ForAnyElementType *)&local_88,(int)local_70,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  local_68._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
  FVar1.Value = *piVar9;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[2].field_0x8;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
  TVar4.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x8;
  TVar4.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0xc;
  local_68._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
  if (local_68._8_8_ != 0) {
    LOCK();
    *(int *)(local_68._8_8_ + 0xc) = *(int *)(local_68._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_68._16_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_68._24_4_ = *(undefined4 *)(param_1 + 2);
  pUVar7 = TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>
           ::AddKeyInChannel(&local_68,TVar4,TVar3,FVar1,&local_88,fVar6,EVar5,Auto);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(UMovieSceneScriptingStringKey **)param_3 = pUVar7;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// execGetDefault @ 14c6ae090

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UMovieSceneScriptingStringChannel::execGetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 _Src;
  void **ppvVar5;
  ForAnyElementType FVar6;
  ForAnyElementType local_78;
  int local_70;
  int iStack_6c;
  TOptional<FString>_u_0 local_68;
  TMovieSceneChannelHandle<FMovieSceneStringChannel> local_58;
  undefined1 local_38 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
  local_58._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
  if (local_58._8_8_ != 0) {
    LOCK();
    *(int *)(local_58._8_8_ + 0xc) = *(int *)(local_58._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_58._16_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_58._24_4_ = *(undefined4 *)(param_1 + 2);
  TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
  GetDefaultFromChannel((TOptional<FString> *)&local_68.TypedValue,&local_58);
  _Src = local_68.TypedValue.Data.AllocatorInstance.Data;
  FVar6.Data = (FScriptContainerElement *)0x0;
  if (local_68.TypedValue.Data.ArrayMax == -1) {
    local_58._8_8_ = 0;
    ppvVar5 = (void **)&local_58;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = local_68.TypedValue.Data.ArrayNum;
    if (local_68.TypedValue.Data.ArrayNum == 0) {
      iStack_6c = 0;
      ppvVar5 = &local_78.Data;
      bVar4 = true;
      bVar3 = false;
      FVar6.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.TypedValue.Data.ArrayNum,0,&local_78,local_68.TypedValue.Data.ArrayNum
                 ,&iStack_6c);
      memcpy(local_78.Data,(void *)_Src,(longlong)local_68.TypedValue.Data.ArrayNum * 2);
      ppvVar5 = &local_78.Data;
      bVar4 = true;
      bVar3 = false;
      FVar6.Data = local_78.Data;
    }
  }
  *ppvVar5 = (void *)0x0;
  uVar1 = *(undefined4 *)(ppvVar5 + 1);
  uVar2 = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  ppvVar5[1] = (void *)0x0;
  if (bVar3) {
    if ((void *)local_58._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  if ((bVar4) && (local_78.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data);
  }
  if ((local_68.TypedValue.Data.ArrayMax != -1) &&
     (local_68.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.TypedValue.Data.AllocatorInstance.Data);
  }
  if (param_3 != local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar6.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar1;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
    FVar6.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// execGetKeys @ 14c6aed40

void __cdecl
UMovieSceneScriptingStringChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c6aef70

void __cdecl
UMovieSceneScriptingStringChannel::execGetKeysByIndex
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

// execHasDefault @ 14c6b3410

void __cdecl
UMovieSceneScriptingStringChannel::execHasDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  TOptional<FString> *pTVar2;
  TOptional<FString>_u_0 local_38;
  TMovieSceneChannelHandle<FMovieSceneStringChannel> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
  local_28._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
  if (local_28._8_8_ != 0) {
    LOCK();
    *(int *)(local_28._8_8_ + 0xc) = *(int *)(local_28._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_28._16_8_ = *(undefined8 *)&param_1[1].field_0x20;
  local_28._24_4_ = *(undefined4 *)(param_1 + 2);
  pTVar2 = TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>
           ::GetDefaultFromChannel((TOptional<FString> *)&local_38.TypedValue,&local_28);
  iVar1 = *(int *)((longlong)&pTVar2->field0_0x0 + 0xc);
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = iVar1 != -1;
  return;
}

// execRemoveDefault @ 14c6b4db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingStringChannel::execRemoveDefault(UObject *param_1,FFrame *param_2,void *param_3)

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
    pFVar4[1].KeyDeletedEvent.field_0x8 = 0;
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

// execRemoveKey @ 14c6b4fe0

void __cdecl
UMovieSceneScriptingStringChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c6b5c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingStringChannel::execSetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  bool bVar6;
  FMovieSceneChannel *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  int iVar10;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  FMovieSceneChannelHandle local_38;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  _Src = local_58;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_50;
  local_68.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_res8.ObjectIndex = *(int *)&param_1[2].field_0x8;
  local_res8.ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
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
  pFVar7 = FMovieSceneChannelHandle::Get(&local_38);
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
    pFVar8 = ::FString::FString(&local_48,&local_68);
    pFVar7[1].KeyDeletedEvent.field_0x8 = 1;
    iVar3 = (pFVar8->Data).ArrayNum;
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange
              ((FString *)&pFVar7[1].KeyAddedEvent.field_0x18,
               (wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar10);
    pFVar5 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
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
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execTransform @ 14c6ba190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingStringChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneChannelHandle<FMovieSceneStringChannel> local_38;
  
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
  TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
  TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

