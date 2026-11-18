// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// AInfo @ 147cc2ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInfo * __thiscall AInfo::AInfo(AInfo *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AInfo__6B_;
  return this;
}

// AInfo @ 147cc2f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInfo * __thiscall AInfo::AInfo(AInfo *this,FObjectInitializer *param_1)

{
  float fVar1;
  
  AActor::AActor((AActor *)this,param_1);
  fVar1 = __real_41200000;
  this->field_0x32 = this->field_0x32 & 0xfd;
  this->field_0x5a = this->field_0x5a | 1;
  this->field_0x5b = this->field_0x5b & 0xf7;
  *(undefined ***)this = &___7AInfo__6B_;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar1);
  AActor::SetHidden((AActor *)this,true);
  AActor::SetReplicatingMovement((AActor *)this,false);
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->field_0x5b = this->field_0x5b & 0xfe;
  return this;
}

// ~AInfo @ 147cc8480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AInfo::~AInfo(AInfo *this)

{
  *(undefined ***)this = &___7AInfo__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147d0c120

UClass * __cdecl AInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Info",&Z_Registration_Info_UClass_AInfo.InnerSingleton,
               StaticRegisterNativesAInfo,0x2c0,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<AInfo>,
               InternalVTableHelperCtorCaller<AInfo>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInfo.InnerSingleton;
}

// StaticRegisterNativesAInfo @ 147d328a0

void __cdecl AInfo::StaticRegisterNativesAInfo(void)

{
  return;
}

