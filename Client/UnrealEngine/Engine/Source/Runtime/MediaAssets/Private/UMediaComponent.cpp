// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 11

// StaticClass @ 146c14640

UClass * __cdecl UMediaComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaComponent",
               &Z_Registration_Info_UClass_UMediaComponent.InnerSingleton,
               StaticRegisterNativesUMediaComponent,0xd0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaComponent>,
               InternalVTableHelperCtorCaller<UMediaComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaComponent.InnerSingleton;
}

// UMediaComponent @ 146c1cf00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMediaComponent * __thiscall
UMediaComponent::UMediaComponent(UMediaComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  return this;
}

// UMediaComponent @ 146c1cf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaComponent * __thiscall
UMediaComponent::UMediaComponent(UMediaComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UMediaPlayer *this_00;
  UMediaTexture *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  FName local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->MediaTexture).field0_0x0.DebugPtr = (UMediaTexture *)0x0;
  (this->MediaPlayer).field0_0x0.DebugPtr = (UMediaPlayer *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pFVar3 = ::FName::FName(local_b8,"MediaPlayer");
    FVar2 = *pFVar3;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = UMediaPlayer::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar2;
    this_00 = (UMediaPlayer *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UMediaPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->MediaPlayer).field0_0x0.DebugPtr = this_00;
    UMediaPlayer::SetLooping(this_00,false);
    ((this->MediaPlayer).field0_0x0.DebugPtr)->PlayOnOpen = false;
    pFVar3 = ::FName::FName(local_b8,"MediaTexture");
    FVar2 = *pFVar3;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = UMediaTexture::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar2;
    pUVar5 = (UMediaTexture *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar6 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMediaTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->MediaTexture).field0_0x0.DebugPtr = pUVar5;
  }
  return this;
}

// ~UMediaComponent @ 146c1e870

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaComponent::~UMediaComponent(UMediaComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetMediaPlayer @ 146c2ada0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall UMediaComponent::GetMediaPlayer(UMediaComponent *this)

{
  return (this->MediaPlayer).field0_0x0.DebugPtr;
}

// GetMediaTexture @ 146c2ae00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaTexture * __thiscall UMediaComponent::GetMediaTexture(UMediaComponent *this)

{
  return (this->MediaTexture).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146c2c9b0

UClass * __cdecl UMediaComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaComponent",
               &Z_Registration_Info_UClass_UMediaComponent.InnerSingleton,
               StaticRegisterNativesUMediaComponent,0xd0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaComponent>,
               InternalVTableHelperCtorCaller<UMediaComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaComponent.InnerSingleton;
}

// OnRegister @ 146c302a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMediaComponent::OnRegister(UMediaComponent *this)

{
  UMediaTexture *this_00;
  UMediaPlayer *local_res8;
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  local_18;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  local_res8 = (this->MediaPlayer).field0_0x0.DebugPtr;
  if ((local_res8 != (UMediaPlayer *)0x0) &&
     (this_00 = (this->MediaTexture).field0_0x0.DebugPtr, this_00 != (UMediaTexture *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this_00->CurrentPlayer).WeakPtr,(FObjectPtr)&local_res8);
    local_18.Object =
         (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    UMediaTexture::UpdatePlayerAndQueue(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (**(code **)(((this->MediaTexture).field0_0x0.DebugPtr)->_padding_ + 0x328))();
  }
  return;
}

// StaticRegisterNativesUMediaComponent @ 146c37e80

void __cdecl UMediaComponent::StaticRegisterNativesUMediaComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMediaComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMediaPlayer @ 146c3cd00

void __cdecl UMediaComponent::execGetMediaPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 5);
  return;
}

// execGetMediaTexture @ 146c3cdb0

void __cdecl UMediaComponent::execGetMediaTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[4].field_0x20;
  return;
}

