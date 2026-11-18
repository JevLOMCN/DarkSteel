// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 26

// StaticClass @ 14c671f20

UClass * __cdecl UMovieSceneScriptingDoubleChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingDoubleChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingDoubleChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingDoubleChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.InnerSingleton;
}

// UMovieSceneScriptingDoubleChannel @ 14c675a80

UMovieSceneScriptingDoubleChannel * __thiscall
UMovieSceneScriptingDoubleChannel::UMovieSceneScriptingDoubleChannel
          (UMovieSceneScriptingDoubleChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingDoubleChannel__6B_;
  this->_padding_ = 0;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMovieSceneScriptingDoubleChannel @ 14c675ad0

UMovieSceneScriptingDoubleChannel * __thiscall
UMovieSceneScriptingDoubleChannel::UMovieSceneScriptingDoubleChannel
          (UMovieSceneScriptingDoubleChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneScriptingDoubleChannel__6B_;
  this->_padding_ = 0;
  (this->OwningSequence).WeakPtr = (FWeakObjectPtr)0x0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)&this->ChannelHandle);
  (this->OwningSection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMovieSceneScriptingDoubleChannel @ 14c675ea0

void __thiscall
UMovieSceneScriptingDoubleChannel::~UMovieSceneScriptingDoubleChannel
          (UMovieSceneScriptingDoubleChannel *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UMovieSceneScriptingDoubleChannel__6B_;
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

// AddKey @ 14c676a60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingDoubleKey * __thiscall
UMovieSceneScriptingDoubleChannel::AddKey
          (UMovieSceneScriptingDoubleChannel *this,FFrameNumber *param_1,double param_2,
          float param_3,EMovieSceneTimeUnit param_4,EMovieSceneKeyInterpolation param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  bool bVar4;
  FKeyHandle FVar5;
  FMovieSceneChannel *pFVar6;
  UObject *pUVar7;
  UMovieSceneScriptingDoubleKey *pUVar8;
  FFrameRate FVar9;
  undefined4 extraout_var;
  EMovieSceneKeyInterpolation EVar10;
  FFrameRate local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_68;
  undefined1 local_60 [16];
  FMovieSceneChannelHandle local_50;
  
  local_50.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&this->ChannelHandle;
  uVar3 = param_1->Value;
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
  pFVar6 = FMovieSceneChannelHandle::Get(&local_50);
  EVar10 = (EMovieSceneKeyInterpolation)this;
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    pUVar8 = (UMovieSceneScriptingDoubleKey *)0x0;
    local_res8.Numerator = 0;
    local_res8.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
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
  }
  else {
    pUVar7 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UMovieSceneScriptingDoubleKey>(pUVar7);
    if (param_4 == DisplayRate) {
      FWeakObjectPtr::Get(&local_68);
      FVar9 = UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_60);
      EVar10 = (EMovieSceneKeyInterpolation)*(undefined8 *)FVar9;
      FWeakObjectPtr::Get(&local_68);
      FVar9 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_60 + 8));
      local_res8.Denominator = 0;
      local_res8.Numerator = uVar3;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,*(FFrameRate *)FVar9);
    }
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      FWeakObjectPtr::Get(&local_res10);
    }
    FVar5 = AddKeyToChannel((FMovieSceneDoubleChannel *)&local_res8,(FFrameNumber)(int)pFVar6,
                            param_2,EVar10);
    *(undefined4 *)&pUVar8->field_0x28 = *(undefined4 *)CONCAT44(extraout_var,FVar5.Index);
    TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
              ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar8->field_0x40,
               (TMovieSceneChannelHandle<FMovieSceneChannel> *)&local_50);
    *(int *)&pUVar8->field_0x34 = local_res10.ObjectIndex;
    *(int *)&pUVar8->field_0x38 = local_res10.ObjectSerialNumber;
    *(int *)&pUVar8->field_0x2c = local_68.ObjectIndex;
    *(int *)&pUVar8->field_0x30 = local_68.ObjectSerialNumber;
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
  }
  return pUVar8;
}

// GetKeys @ 14c677960

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingDoubleChannel::GetKeys
          (UMovieSceneScriptingDoubleChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
  GetKeysInChannel(__return_storage_ptr__,&local_28,
                   (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
                   (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1);
  return __return_storage_ptr__;
}

// GetKeysByIndex @ 14c677b20

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneScriptingDoubleChannel::GetKeysByIndex
          (UMovieSceneScriptingDoubleChannel *this,
          TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> local_28;
  
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
  TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
  GetKeysInChannelByIndex
            (__return_storage_ptr__,&local_28,
             (TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr>)FVar2,
             (TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr>)FVar1,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6795b0

UClass * __cdecl UMovieSceneScriptingDoubleChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingDoubleChannel",
               &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingDoubleChannel,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingDoubleChannel>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingDoubleChannel>,local_res8,
               UMovieSceneScriptingChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.InnerSingleton;
}

// RemoveKey @ 14c67a650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneScriptingDoubleChannel::RemoveKey
          (UMovieSceneScriptingDoubleChannel *this,UMovieSceneScriptingKey *param_1)

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

// StaticRegisterNativesUMovieSceneScriptingDoubleChannel @ 14c67aa70

void __cdecl
UMovieSceneScriptingDoubleChannel::StaticRegisterNativesUMovieSceneScriptingDoubleChannel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddKey @ 14c67be50

void __cdecl
UMovieSceneScriptingDoubleChannel::execAddKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneScriptingDoubleKey *pUVar2;
  FFrameNumber *pFVar3;
  EMovieSceneKeyInterpolation local_res10 [8];
  EMovieSceneTimeUnit local_res18 [8];
  FFrameNumber local_res20 [2];
  float local_38 [2];
  double local_30;
  
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
  local_30 = 0.0;
  pFVar3 = local_res20;
  if ((FFrameNumber *)param_2->MostRecentPropertyAddress != (FFrameNumber *)0x0) {
    pFVar3 = (FFrameNumber *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
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
  pUVar2 = AddKey((UMovieSceneScriptingDoubleChannel *)param_1,pFVar3,local_30,local_38[0],
                  local_res18[0],local_res10[0]);
  *(UMovieSceneScriptingDoubleKey **)param_3 = pUVar2;
  return;
}

// execComputeEffectiveRange @ 14c67c190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execComputeEffectiveRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FFrameNumber FVar6;
  FMovieSceneChannel *pFVar7;
  FFrameRate FVar8;
  char *pcVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar10;
  TRange<FFrameNumber> local_res8 [2];
  undefined1 local_88 [16];
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  FMovieSceneChannelHandle local_60;
  
  bVar10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8[0].UpperBound.Type.Value = param_1[1].field_0x8;
  local_res8[0].UpperBound._1_3_ = *(undefined3 *)&param_1[1].field_0x9;
  local_res8[0].UpperBound.Value.Value = *(int *)&param_1[1].field_0xc;
  local_60.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[1].field_0x18;
  if (local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  local_60.ChannelTypeName.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x20;
  local_60.ChannelTypeName.Number = *(uint *)&param_1[1].field_0x24;
  local_78 = local_78 & 0xfffffffc;
  local_60.ChannelIndex = *(int *)(param_1 + 2);
  uStack_74 = (undefined4)___xmm_000000010000ea600000000000000000;
  uStack_70 = (undefined4)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
  uStack_6c = (undefined4)_UNK_1528a8c88;
  uStack_68 = (undefined4)((ulonglong)_UNK_1528a8c88 >> 0x20);
  pFVar7 = FMovieSceneChannelHandle::Get(&local_60);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    local_res8[0].LowerBound.Type.Value = '\0';
    local_res8[0].LowerBound._1_3_ = 0;
    local_res8[0].LowerBound.Value.Value = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get effective range."
               ,Error,(FName)0x0);
  }
  else {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8[0].UpperBound);
    FVar8 = UMovieSceneSequenceExtensions::GetTickResolution
                      ((UMovieSceneSequence *)(local_res8 + 1));
    uVar3 = *(undefined8 *)FVar8;
    pcVar9 = (char *)(**(code **)(pFVar7->_padding_ + 0x48))(pFVar7,local_88);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = (undefined4)uVar3;
    uStack_68 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (pcVar9[8] != '\x02') {
      bVar10 = 2;
    }
    local_78 = CONCAT31(local_78._1_3_,bVar10 | *pcVar9 != '\x02' | (byte)local_78 & 0xfc);
    if (*pcVar9 != '\x02') {
      FVar6 = UE::MovieScene::DiscreteInclusiveLower(local_res8);
      uStack_74 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
    }
    if (bVar10 != 0) {
      FVar6 = UE::MovieScene::DiscreteExclusiveUpper(local_res8);
      uStack_70 = *(undefined4 *)CONCAT44(extraout_var_00,FVar6.Value);
    }
  }
  uVar5 = uStack_68;
  uVar3 = CONCAT44(uStack_74,local_78);
  uVar4 = CONCAT44(uStack_6c,uStack_70);
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
  *(undefined8 *)param_3 = uVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar5;
  return;
}

// execEvaluateKeys @ 14c67c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingDoubleChannel::execEvaluateKeys(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar2;
  FFrameRate FVar3;
  int local_res8;
  int iStackX_c;
  TArray<double,TSizedDefaultAllocator<32>_> local_88;
  uint local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  FSequencerScriptingRange local_58;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> local_38;
  
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
  TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
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

// execGetDefault @ 14c67c8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execGetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  FMovieSceneChannel *pFVar4;
  FMovieSceneChannelHandle local_38;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
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
  pFVar4 = FMovieSceneChannelHandle::Get(&local_38);
  if (pFVar4 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
  }
  else if (pFVar4[1].KeyDeletedEvent.field_0x8 != '\0') {
    uVar3 = *(undefined8 *)&pFVar4[1].KeyDeletedEvent;
    if (local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_38.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    *(undefined8 *)param_3 = uVar3;
    return;
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
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetKeys @ 14c67cbf0

void __cdecl
UMovieSceneScriptingDoubleChannel::execGetKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetKeysByIndex @ 14c67cfb0

void __cdecl
UMovieSceneScriptingDoubleChannel::execGetKeysByIndex
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

// execGetNumKeys @ 14c67d1f0

void __cdecl
UMovieSceneScriptingDoubleChannel::execGetNumKeys(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetPostInfinityExtrapolation @ 14c67d260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execGetPostInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneChannel *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  if (pFVar1 != (FMovieSceneChannel *)0x0) {
    *(undefined1 *)param_3 = *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 1);
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get post-infinity extrapolation."
             ,Error,(FName)0x0);
  *(undefined1 *)param_3 = 5;
  return;
}

// execGetPreInfinityExtrapolation @ 14c67d2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execGetPreInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneChannel *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  if (pFVar1 != (FMovieSceneChannel *)0x0) {
    *(char *)param_3 = (char)pFVar1[1]._padding_;
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get pre-infinity extrapolation."
             ,Error,(FName)0x0);
  *(undefined1 *)param_3 = 5;
  return;
}

// execHasDefault @ 14c67dd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execHasDefault(UObject *param_1,FFrame *param_2,void *param_3)

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
  else if (pFVar3[1].KeyDeletedEvent.field_0x8 != '\0') {
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

// execRemoveDefault @ 14c67e000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execRemoveDefault(UObject *param_1,FFrame *param_2,void *param_3)

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

// execRemoveKey @ 14c67e280

void __cdecl
UMovieSceneScriptingDoubleChannel::execRemoveKey(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetDefault @ 14c67e8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execSetDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  FMovieSceneChannel *pFVar6;
  undefined8 local_res8;
  FWeakObjectPtr local_res10;
  FMovieSceneChannelHandle local_38;
  
  local_res8 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.WeakChannelProxy.Object = *(FMovieSceneChannelProxy **)&param_1[1].field_0x10;
  local_res10.ObjectIndex = *(int *)&param_1[2].field_0x8;
  local_res10.ObjectSerialNumber = *(int *)&param_1[2].field_0xc;
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
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set default value."
               ,Error,(FName)0x0);
  }
  else {
    bVar5 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar5) {
      FWeakObjectPtr::Get(&local_res10);
    }
    *(undefined8 *)&pFVar6[1].KeyDeletedEvent = uVar4;
    pFVar6[1].KeyDeletedEvent.field_0x8 = 1;
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

// execSetPostInfinityExtrapolation @ 14c67ed10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execSetPostInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FMovieSceneChannel *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
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
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  if (pFVar3 != (FMovieSceneChannel *)0x0) {
    *(undefined1 *)((longlong)&pFVar3[1]._padding_ + 1) = uVar2;
    return;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set post-infinity extrapolation."
             ,Error,(FName)0x0);
  return;
}

// execSetPreInfinityExtrapolation @ 14c67edd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingDoubleChannel::execSetPreInfinityExtrapolation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FMovieSceneChannel *pFVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
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
  pFVar3 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x10);
  if (pFVar3 != (FMovieSceneChannel *)0x0) {
    *(undefined1 *)&pFVar3[1]._padding_ = uVar2;
    return;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage
            (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to set pre-infinity extrapolation."
             ,Error,(FName)0x0);
  return;
}

// execTransform @ 14c680400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieSceneScriptingDoubleChannel::execTransform(UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> local_38;
  
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
  TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
  TransformKeysInChannel
            (&local_38,TVar3,TVar2,local_res20[0],local_78,local_res10[0],&local_58,local_res8[0]);
  return;
}

