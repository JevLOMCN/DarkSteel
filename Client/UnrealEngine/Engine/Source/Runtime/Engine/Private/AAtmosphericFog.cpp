// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14758b840

UClass * __cdecl AAtmosphericFog::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AtmosphericFog",
               &Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton,
               StaticRegisterNativesAAtmosphericFog,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAtmosphericFog>,
               InternalVTableHelperCtorCaller<AAtmosphericFog>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton;
}

// AAtmosphericFog @ 1475a3fb0

AAtmosphericFog * __thiscall
AAtmosphericFog::AAtmosphericFog(AAtmosphericFog *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AAtmosphericFog__6B_;
  (this->AtmosphericFogComponent).field0_0x0.DebugPtr = (UAtmosphericFogComponent *)0x0;
  return this;
}

// AAtmosphericFog @ 1475a3ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAtmosphericFog * __thiscall
AAtmosphericFog::AAtmosphericFog(AAtmosphericFog *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UAtmosphericFogComponent *pUVar5;
  FName local_res8;
  
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AAtmosphericFog__6B_;
  (this->AtmosphericFogComponent).field0_0x0.DebugPtr = (UAtmosphericFogComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"AtmosphericFogComponent0");
  FVar2 = *pFVar3;
  pUVar4 = UAtmosphericFogComponent::StaticClass();
  pUVar5 = (UAtmosphericFogComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UAtmosphericFogComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->AtmosphericFogComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UAtmosphericFogComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->AtmosphericFogComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// ~AAtmosphericFog @ 1475a9670

void __thiscall AAtmosphericFog::~AAtmosphericFog(AAtmosphericFog *this)

{
  this->_padding_ = (longlong)&___7AAtmosphericFog__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 1475db200

UClass * __cdecl AAtmosphericFog::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AtmosphericFog",
               &Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton,
               StaticRegisterNativesAAtmosphericFog,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAtmosphericFog>,
               InternalVTableHelperCtorCaller<AAtmosphericFog>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton;
}

// StaticRegisterNativesAAtmosphericFog @ 1475feb80

void __cdecl AAtmosphericFog::StaticRegisterNativesAAtmosphericFog(void)

{
  return;
}

