// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FCreateComponentParams @ 14761d390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateComponentParams * __thiscall
FAudioDevice::FCreateComponentParams::FCreateComponentParams
          (FCreateComponentParams *this,FAudioDevice *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UAudioComponent_NoRegister();
  (this->AudioComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  this->World = (UWorld *)0x0;
  this->Actor = (AActor *)0x0;
  this->AudioDevice = param_1;
  CommonInit(this);
  return this;
}

// FCreateComponentParams @ 14761d410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateComponentParams * __thiscall
FAudioDevice::FCreateComponentParams::FCreateComponentParams
          (FCreateComponentParams *this,AActor *param_1)

{
  UClass *pUVar1;
  UWorld *this_00;
  FAudioDevice *pFVar2;
  FAudioDevice *pFVar3;
  
  pUVar1 = Z_Construct_UClass_UAudioComponent_NoRegister();
  (this->AudioComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar3 = (FAudioDevice *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  this->Actor = param_1;
  if (param_1 == (AActor *)0x0) {
    this->World = (UWorld *)0x0;
LAB_14761d49e:
    this->AudioDevice = (FAudioDevice *)0x0;
  }
  else {
    this_00 = AActor::GetWorld(param_1);
    this->World = this_00;
    if (this_00 == (UWorld *)0x0) goto LAB_14761d49e;
    pFVar2 = UWorld::GetAudioDeviceRaw(this_00);
    this->AudioDevice = pFVar2;
    if (pFVar2 != (FAudioDevice *)0x0) goto LAB_14761d4ba;
  }
  if (GEngine != (UEngine *)0x0) {
    pFVar3 = UEngine::GetMainAudioDeviceRaw(GEngine);
  }
  this->AudioDevice = pFVar3;
LAB_14761d4ba:
  CommonInit(this);
  return this;
}

// FCreateComponentParams @ 14761d4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateComponentParams * __thiscall
FAudioDevice::FCreateComponentParams::FCreateComponentParams
          (FCreateComponentParams *this,UWorld *param_1,AActor *param_2)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  FCreateComponentParams *pFVar5;
  FAudioDevice *pFVar6;
  FAudioDevice *pFVar7;
  
  pUVar3 = Z_Construct_UClass_UAudioComponent_NoRegister();
  (this->AudioComponentClass).Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar7 = (FAudioDevice *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  this->World = param_1;
  if (param_2 == (AActor *)0x0) {
    if (param_1 == (UWorld *)0x0) {
      param_2 = (AActor *)0x0;
    }
    else {
      param_2 = (AActor *)UWorld::GetWorldSettings(param_1,false,true);
    }
  }
  else {
    pUVar4 = AActor::GetWorld(param_2);
    if ((pUVar4 != param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InActor->GetWorld() == InWorld",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDevice.cpp"
                           ,0x1970,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FCreateComponentParams *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->Actor = param_2;
  if (this->World == (UWorld *)0x0) {
    this->AudioDevice = (FAudioDevice *)0x0;
  }
  else {
    pFVar6 = UWorld::GetAudioDeviceRaw(this->World);
    this->AudioDevice = pFVar6;
    if (pFVar6 != (FAudioDevice *)0x0) goto LAB_14761d5d6;
  }
  if (GEngine != (UEngine *)0x0) {
    pFVar7 = UEngine::GetMainAudioDeviceRaw(GEngine);
  }
  this->AudioDevice = pFVar7;
LAB_14761d5d6:
  CommonInit(this);
  return this;
}

// FCreateComponentParams @ 14761d600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateComponentParams * __thiscall
FAudioDevice::FCreateComponentParams::FCreateComponentParams(FCreateComponentParams *this)

{
  UClass *pUVar1;
  FAudioDevice *pFVar2;
  
  pUVar1 = Z_Construct_UClass_UAudioComponent_NoRegister();
  (this->AudioComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar2 = (FAudioDevice *)0x0;
  *(undefined8 *)&(this->ConcurrencySet).Elements = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  this->World = (UWorld *)0x0;
  this->Actor = (AActor *)0x0;
  if (GEngine != (UEngine *)0x0) {
    pFVar2 = UEngine::GetMainAudioDeviceRaw(GEngine);
  }
  this->AudioDevice = pFVar2;
  CommonInit(this);
  return this;
}

// CommonInit @ 1476302e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAudioDevice::FCreateComponentParams::CommonInit(FCreateComponentParams *this)

{
  int iVar1;
  undefined8 uVar2;
  
  this->bAutoDestroy = true;
  this->bPlay = false;
  this->AttenuationSettings = (USoundAttenuation *)0x0;
  this->bStopWhenOwnerDestroyed = true;
  this->bLocationSet = false;
  if (*(int *)&(this->ConcurrencySet).Elements.field_0x8 !=
      *(int *)&(this->ConcurrencySet).Elements.field_0x34) {
    TSet<USoundConcurrency_*,DefaultKeyFuncs<USoundConcurrency_*,0>,FDefaultSetAllocator>::
    UnhashElements(&this->ConcurrencySet);
    iVar1 = *(int *)&(this->ConcurrencySet).Elements.field_0xc;
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->ConcurrencySet,0,
                 (int *)&(this->ConcurrencySet).Elements.field_0xc);
    }
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar2;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// SetLocation @ 147660ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAudioDevice::FCreateComponentParams::SetLocation
          (FCreateComponentParams *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (this->World != (UWorld *)0x0) {
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    this->bLocationSet = true;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->Location).field0_0x0._s_0.X = dVar2;
    (this->Location).field0_0x0._s_0.Y = dVar3;
    (this->Location).field0_0x0._s_0.Z = dVar1;
    return;
  }
  if (2 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return;
  }
  return;
}

// ShouldUseAttenuation @ 147663260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAudioDevice::FCreateComponentParams::ShouldUseAttenuation(FCreateComponentParams *this)

{
  FAudioDevice *pFVar1;
  bool bVar2;
  
  pFVar1 = this->AudioDevice;
  if ((pFVar1 != (FAudioDevice *)0x0) && (this->World != (UWorld *)0x0)) {
    bVar2 = UWorld::IsGameWorld(this->World);
    if ((!bVar2) && (pFVar1->bUseAttenuationForNonGameWorlds == '\0')) {
      return false;
    }
  }
  return true;
}

// FCreateComponentParams @ 147c2c3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateComponentParams * __thiscall
FAudioDevice::FCreateComponentParams::FCreateComponentParams
          (FCreateComponentParams *this,FCreateComponentParams *param_1)

{
  TSet<USoundConcurrency_*,DefaultKeyFuncs<USoundConcurrency_*,0>,FDefaultSetAllocator> *pTVar1;
  TSet<USoundConcurrency_*,DefaultKeyFuncs<USoundConcurrency_*,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  UClass *pUVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  double dVar6;
  
  this->AttenuationSettings = param_1->AttenuationSettings;
  pUVar3 = (param_1->AudioComponentClass).Class.field0_0x0.DebugPtr;
  (this->AudioComponentClass).Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pTVar1 = &this->ConcurrencySet;
  *(undefined8 *)&pTVar1->Elements = 0;
  pTVar2 = &param_1->ConcurrencySet;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 = 0;
  (this->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Src = &(param_1->ConcurrencySet).Elements.field_0x10;
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x8 =
         *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x8;
    _Dst = &(this->ConcurrencySet).Elements.field_0x10;
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0xc =
         *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0xc;
    *(undefined8 *)&(param_1->ConcurrencySet).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ConcurrencySet).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->ConcurrencySet).Elements.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->ConcurrencySet).Elements.field_0x20 =
           *(undefined8 *)&(param_1->ConcurrencySet).Elements.field_0x20;
      *(undefined8 *)&(param_1->ConcurrencySet).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x28 =
           *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x28;
      *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x2c =
           *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x2c;
      *(undefined8 *)&(param_1->ConcurrencySet).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x30 =
         *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x30;
    *(undefined4 *)&(this->ConcurrencySet).Elements.field_0x34 =
         *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x34;
    *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ConcurrencySet).Elements.field_0x34 = 0;
  }
  if ((param_1->ConcurrencySet).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->ConcurrencySet).Hash.InlineData =
         *(undefined4 *)(param_1->ConcurrencySet).Hash.InlineData;
  }
  FVar5 = (this->ConcurrencySet).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->ConcurrencySet).Hash.SecondaryData = (param_1->ConcurrencySet).Hash.SecondaryData;
  (param_1->ConcurrencySet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ConcurrencySet).HashSize = (param_1->ConcurrencySet).HashSize;
  (param_1->ConcurrencySet).HashSize = 0;
  this->bAutoDestroy = param_1->bAutoDestroy;
  this->bPlay = param_1->bPlay;
  this->bStopWhenOwnerDestroyed = param_1->bStopWhenOwnerDestroyed;
  this->World = param_1->World;
  this->Actor = param_1->Actor;
  this->AudioDevice = param_1->AudioDevice;
  this->bLocationSet = param_1->bLocationSet;
  dVar6 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar6;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  return this;
}

