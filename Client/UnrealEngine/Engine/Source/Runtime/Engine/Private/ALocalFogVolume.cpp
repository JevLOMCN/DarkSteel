// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472861e0

UClass * __cdecl ALocalFogVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALocalFogVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalFogVolume",
               &Z_Registration_Info_UClass_ALocalFogVolume.InnerSingleton,
               StaticRegisterNativesALocalFogVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALocalFogVolume>,
               InternalVTableHelperCtorCaller<ALocalFogVolume>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALocalFogVolume.InnerSingleton;
}

// ALocalFogVolume @ 14728b720

ALocalFogVolume * __thiscall
ALocalFogVolume::ALocalFogVolume(ALocalFogVolume *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ALocalFogVolume__6B_;
  (this->LocalFogVolumeVolume).field0_0x0.DebugPtr = (ULocalFogVolumeComponent *)0x0;
  return this;
}

// ~ALocalFogVolume @ 14728d1f0

void __thiscall ALocalFogVolume::~ALocalFogVolume(ALocalFogVolume *this)

{
  this->_padding_ = (longlong)&___7ALocalFogVolume__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 14728f140

UClass * __cdecl ALocalFogVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALocalFogVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalFogVolume",
               &Z_Registration_Info_UClass_ALocalFogVolume.InnerSingleton,
               StaticRegisterNativesALocalFogVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALocalFogVolume>,
               InternalVTableHelperCtorCaller<ALocalFogVolume>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALocalFogVolume.InnerSingleton;
}

// StaticRegisterNativesALocalFogVolume @ 1472911f0

void __cdecl ALocalFogVolume::StaticRegisterNativesALocalFogVolume(void)

{
  return;
}

// ALocalFogVolume @ 1478a5b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALocalFogVolume * __thiscall
ALocalFogVolume::ALocalFogVolume(ALocalFogVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  ULocalFogVolumeComponent *pUVar5;
  FName local_res8;
  
  pFVar3 = ::FName::FName(&local_res8,L"NewLocalFogVolumeComponent");
  FVar2 = *pFVar3;
  pUVar4 = ULocalFogVolumeComponent::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar4,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ALocalFogVolume__6B_;
  (this->LocalFogVolumeVolume).field0_0x0.DebugPtr = (ULocalFogVolumeComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"LocalFogVolumeComponent");
  FVar2 = *pFVar3;
  pUVar4 = ULocalFogVolumeComponent::StaticClass();
  pUVar5 = (ULocalFogVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (ULocalFogVolumeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->LocalFogVolumeVolume).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (ULocalFogVolumeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->LocalFogVolumeVolume).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

