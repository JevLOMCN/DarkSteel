// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 19

// StaticClass @ 14c6734a0

UClass * __cdecl UMovieSceneScriptingByteChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingByteChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingByteChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingByteChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingByteChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.InnerSingleton;
}

// UMovieSceneScriptingByteChannel @ 14c675900

UMovieSceneScriptingByteChannel * __thiscall
UMovieSceneScriptingByteChannel::UMovieSceneScriptingByteChannel
          (UMovieSceneScriptingByteChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneScriptingByteChannel__6B_;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// UMovieSceneScriptingByteChannel @ 14c675940

UMovieSceneScriptingByteChannel * __thiscall
UMovieSceneScriptingByteChannel::UMovieSceneScriptingByteChannel
          (UMovieSceneScriptingByteChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7UMovieSceneScriptingByteChannel__6B_;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  return this;
}

// ~UMovieSceneScriptingByteChannel @ 14c675dc0

void __thiscall
UMovieSceneScriptingByteChannel::~UMovieSceneScriptingByteChannel
          (UMovieSceneScriptingByteChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingByteChannel__6B_;
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

// AddKey @ 14c676890

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingByteKey * __thiscall
UMovieSceneScriptingByteChannel::AddKey
          (UMovieSceneScriptingByteChannel *this,FFrameNumber *param_1,uchar param_2,float param_3,
          EMovieSceneTimeUnit param_4,EMovieSceneKeyInterpolation param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  bool bVar3;
  FKeyHandle FVar4;
  FMovieSceneChannel *pFVar5;
  UObject *pUVar6;
  UMovieSceneScriptingByteKey *pUVar7;
  FFrameRate FVar8;
  undefined4 extraout_var;
  uint uVar9;
  FFrameRate local_res8;
  FWeakObjectPtr local_res10;
  uchar local_res18 [16];
  FWeakObjectPtr local_68;
  undefined1 local_60 [16];
  FMovieSceneChannelHandle local_50;
  
  local_50.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->ChannelHandle;
  uVar9 = param_1->Value;
  local_68 = (this->OwningSequence).WeakPtr;
  local_res10 = (this->OwningSection).WeakPtr;
  local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(this->ChannelHandle).field_0x8;
  if (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_50.ChannelTypeName.ComparisonIndex.Value = *(uint *)&(this->ChannelHandle).field_0x10;
  local_50.ChannelTypeName.Number = *(uint *)&(this->ChannelHandle).field_0x14;
  local_50.ChannelIndex = *(int *)&(this->ChannelHandle).field_0x18;
  local_res18[0] = param_2;
  pFVar5 = FMovieSceneChannelHandle::Get(&local_50);
  if (pFVar5 != (FMovieSceneChannel *)0x0) {
    pUVar6 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UMovieSceneScriptingByteKey>(pUVar6);
    if (param_4 == DisplayRate) {
      FWeakObjectPtr::Get(&local_68);
      UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_60);
      FWeakObjectPtr::Get(&local_68);
      FVar8 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_60 + 8));
      local_res8.Denominator = 0;
      local_res8.Numerator = uVar9;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,*(FFrameRate *)FVar8);
      uVar9 = local_res8.Numerator;
      if (__real_3f000000 <= (float)local_res8.Denominator) {
        uVar9 = local_res8.Numerator + 1;
      }
    }
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      FWeakObjectPtr::Get(&local_res10);
    }
    FVar4 = UE::MovieScene::AddKeyToChannel<FMovieSceneByteChannel,unsigned_char_&>
                      ((FMovieSceneByteChannel *)&local_res8,(FFrameNumber)(int)pFVar5,
                       (uchar *)(ulonglong)uVar9,(EMovieSceneKeyInterpolation)local_res18);
    *(undefined4 *)&pUVar7->field_0x28 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Index);
    TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
              ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar7->field_0x40,
               (TMovieSceneChannelHandle<FMovieSceneChannel> *)&local_50);
    *(int *)&pUVar7->field_0x34 = local_res10.ObjectIndex;
    *(int *)&pUVar7->field_0x38 = local_res10.ObjectSerialNumber;
    *(int *)&pUVar7->field_0x2c = local_68.ObjectIndex;
    *(int *)&pUVar7->field_0x30 = local_68.ObjectSerialNumber;
    if (local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_50.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    return pUVar7;
  }
  local_res8.Numerator = 0;
  local_res8.Denominator = 0;
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
             (FName)0x0);
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
  return (UMovieSceneScriptingByteKey *)0x0;
}

// GetKeys @ 14c6778c0

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingByteChannel::GetKeys
          (UMovieSceneScriptingByteChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneByteChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteKey,unsigned_char>::
  GetKeysInChannel(__return_storage_ptr__,&local_28,
                   (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                   (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c677a80

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingByteChannel::GetKeysByIndex
          (UMovieSceneScriptingByteChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneByteChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteKey,unsigned_char>::
  GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c679380

UClass * __cdecl UMovieSceneScriptingByteChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingByteChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingByteChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingByteChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingByteChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingByteChannel.InnerSingleton;
}

// RemoveKey @ 14c67a530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingByteChannel::RemoveKey
          (UMovieSceneScriptingByteChannel *this,UMovieSceneScriptingKey *param_1)

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

// StaticRegisterNativesUMovieSceneScriptingByteChannel @ 14c67a9e0

void __cdecl
UMovieSceneScriptingByteChannel::StaticRegisterNativesUMovieSceneScriptingByteChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c67bc80

void __cdecl
UMovieSceneScriptingByteChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneScriptingByteKey *pUVar2;
  FFrameNumber *pFVar3;
  EMovieSceneKeyInterpolation local_res10 [8];
  EMovieSceneTimeUnit local_res18 [8];
  uchar local_res20 [8];
  FFrameNumber local_38;
  float local_34 [3];
  
  local_38.Value = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = '\0';
  pFVar3 = &local_38;
  if ((FFrameNumber *)param_2->MostRecentPropertyAddress != (FFrameNumber *)0x0) {
    pFVar3 = (FFrameNumber *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_34[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_34,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_34);
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
  pUVar2 = AddKey((UMovieSceneScriptingByteChannel *)param_1,pFVar3,local_res20[0],local_34[0],
                  local_res18[0],local_res10[0]);
  *(UMovieSceneScriptingByteKey **)param_3 = pUVar2;
  return;
}

// execGetDefault @ 14c67c820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteChannel::execGetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMovieSceneChannel *pFVar3;
  undefined1 uVar4;
  FMovieSceneChannelHandle local_28;
  
  uVar4 = 0;
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
  else if (pFVar3[1].KeyAddedEvent.field_0x11 != '\0') {
    uVar4 = pFVar3[1].KeyAddedEvent.field_0x10;
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

// execGetKeys @ 14c67cb60

void __cdecl
UMovieSceneScriptingByteChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c67cea0

void __cdecl
UMovieSceneScriptingByteChannel::execGetKeysByIndex(UObject *param_1,FFrame *param_2,void *param_3)

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

// execHasDefault @ 14c67dc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteChannel::execHasDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FMovieSceneChannel *pFVar3;
  undefined1 uVar4;
  FMovieSceneChannelHandle local_28;
  
  uVar4 = 0;
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
  else if (pFVar3[1].KeyAddedEvent.field_0x11 != '\0') {
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

// execRemoveDefault @ 14c67df30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteChannel::execRemoveDefault(UObject *param_1,FFrame *param_2,void *param_3)

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
    pFVar4[1].KeyAddedEvent.field_0x11 = 0;
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

// execRemoveKey @ 14c67e1f0

void __cdecl
UMovieSceneScriptingByteChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c67e7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteChannel::execSetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  undefined1 uVar4;
  bool bVar5;
  FMovieSceneChannel *pFVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  FMovieSceneChannelHandle local_38;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
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
  local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x18;
  local_res10[0].ObjectIndex = *(int *)&param_1[1].field_0x10;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1[1].field_0x14;
  local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x20;
  if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_38.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[2].field_0x0;
  local_38.ChannelTypeName.Number = *(uint *)&param_1[2].field_0x4;
  local_38.ChannelIndex = *(int *)&param_1[2].field_0x8;
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
    pFVar6[1].KeyAddedEvent.field_0x11 = 1;
    pFVar6[1].KeyAddedEvent.field_0x10 = uVar4;
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

// execTransform @ 14c680200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingByteChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneChannelHandle<FMovieSceneByteChannel> local_38;
  
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
  TMovieSceneScriptingChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteKey,unsigned_char>::
  TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

