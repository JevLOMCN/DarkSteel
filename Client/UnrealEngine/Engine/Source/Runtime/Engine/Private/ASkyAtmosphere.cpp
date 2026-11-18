// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147996160

UClass * __cdecl ASkyAtmosphere::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASkyAtmosphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyAtmosphere",
               &Z_Registration_Info_UClass_ASkyAtmosphere.InnerSingleton,
               StaticRegisterNativesASkyAtmosphere,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASkyAtmosphere>,
               InternalVTableHelperCtorCaller<ASkyAtmosphere>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkyAtmosphere.InnerSingleton;
}

// ASkyAtmosphere @ 1479a2ee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ASkyAtmosphere * __thiscall
ASkyAtmosphere::ASkyAtmosphere(ASkyAtmosphere *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ASkyAtmosphere__6B_;
  (this->SkyAtmosphereComponent).field0_0x0.DebugPtr = (USkyAtmosphereComponent *)0x0;
  return this;
}

// ASkyAtmosphere @ 1479a2f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASkyAtmosphere * __thiscall
ASkyAtmosphere::ASkyAtmosphere(ASkyAtmosphere *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USkyAtmosphereComponent *pUVar5;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7ASkyAtmosphere__6B_;
  (this->SkyAtmosphereComponent).field0_0x0.DebugPtr = (USkyAtmosphereComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"SkyAtmosphereComponent");
  FVar2 = *pFVar3;
  pUVar4 = USkyAtmosphereComponent::StaticClass();
  pUVar5 = (USkyAtmosphereComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USkyAtmosphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SkyAtmosphereComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USkyAtmosphereComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->SkyAtmosphereComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// ~ASkyAtmosphere @ 1479a8d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ASkyAtmosphere::~ASkyAtmosphere(ASkyAtmosphere *this)

{
  this->_padding_ = (longlong)&___7ASkyAtmosphere__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 1479cd8d0

UClass * __cdecl ASkyAtmosphere::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASkyAtmosphere.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyAtmosphere",
               &Z_Registration_Info_UClass_ASkyAtmosphere.InnerSingleton,
               StaticRegisterNativesASkyAtmosphere,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASkyAtmosphere>,
               InternalVTableHelperCtorCaller<ASkyAtmosphere>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkyAtmosphere.InnerSingleton;
}

// StaticRegisterNativesASkyAtmosphere @ 1479edde0

void __cdecl ASkyAtmosphere::StaticRegisterNativesASkyAtmosphere(void)

{
  return;
}

