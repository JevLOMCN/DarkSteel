// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147891a70

UClass * __cdecl AHeterogeneousVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HeterogeneousVolume",
               &Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton,
               StaticRegisterNativesAHeterogeneousVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AHeterogeneousVolume>,
               InternalVTableHelperCtorCaller<AHeterogeneousVolume>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton;
}

// AHeterogeneousVolume @ 1478a5890

AHeterogeneousVolume * __thiscall
AHeterogeneousVolume::AHeterogeneousVolume(AHeterogeneousVolume *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AHeterogeneousVolume__6B_;
  (this->HeterogeneousVolumeComponent).field0_0x0.DebugPtr = (UHeterogeneousVolumeComponent *)0x0;
  return this;
}

// AHeterogeneousVolume @ 1478a58d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AHeterogeneousVolume * __thiscall
AHeterogeneousVolume::AHeterogeneousVolume(AHeterogeneousVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UHeterogeneousVolumeComponent *pUVar5;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AHeterogeneousVolume__6B_;
  (this->HeterogeneousVolumeComponent).field0_0x0.DebugPtr = (UHeterogeneousVolumeComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"HeterogeneousVolumeComponent");
  FVar2 = *pFVar3;
  pUVar4 = UHeterogeneousVolumeComponent::StaticClass();
  pUVar5 = (UHeterogeneousVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UHeterogeneousVolumeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->HeterogeneousVolumeComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UHeterogeneousVolumeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->HeterogeneousVolumeComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// ~AHeterogeneousVolume @ 1478ab6e0

void __thiscall AHeterogeneousVolume::~AHeterogeneousVolume(AHeterogeneousVolume *this)

{
  this->_padding_ = (longlong)&___7AHeterogeneousVolume__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 1478d8c30

UClass * __cdecl AHeterogeneousVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HeterogeneousVolume",
               &Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton,
               StaticRegisterNativesAHeterogeneousVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AHeterogeneousVolume>,
               InternalVTableHelperCtorCaller<AHeterogeneousVolume>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AHeterogeneousVolume.InnerSingleton;
}

// StaticRegisterNativesAHeterogeneousVolume @ 1478f7d20

void __cdecl AHeterogeneousVolume::StaticRegisterNativesAHeterogeneousVolume(void)

{
  return;
}

