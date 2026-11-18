// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 147314b40

UClass * __cdecl UParticleModuleTypeDataBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataBase",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleTypeDataBase>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataBase.InnerSingleton;
}

// UParticleModuleTypeDataBase @ 147318d40

UParticleModuleTypeDataBase * __thiscall
UParticleModuleTypeDataBase::UParticleModuleTypeDataBase
          (UParticleModuleTypeDataBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleTypeDataBase__6B_;
  return this;
}

// ~UParticleModuleTypeDataBase @ 147319820

void __thiscall
UParticleModuleTypeDataBase::~UParticleModuleTypeDataBase(UParticleModuleTypeDataBase *this)

{
  *(undefined ***)this = &___7UParticleModuleTypeDataBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// Build @ 14731b050

void __thiscall
UParticleModuleTypeDataBase::Build
          (UParticleModuleTypeDataBase *this,FParticleEmitterBuildInfo *param_1)

{
  return;
}

// CacheModuleInfo @ 14731b060

void __thiscall
UParticleModuleTypeDataBase::CacheModuleInfo
          (UParticleModuleTypeDataBase *this,UParticleEmitter *param_1)

{
  return;
}

// CollectPSOPrecacheData @ 14731b0a0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
UParticleModuleTypeDataBase::CollectPSOPrecacheData
          (UParticleModuleTypeDataBase *this,UParticleEmitter *param_1,FPSOPrecacheParams *param_2)

{
  return;
}

// GetModuleType @ 14731b360

EModuleType __thiscall UParticleModuleTypeDataBase::GetModuleType(UParticleModuleTypeDataBase *this)

{
  return EPMT_TypeData;
}

// GetPrimitiveType @ 14731b380

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

EPrimitiveType __thiscall
UParticleModuleTypeDataBase::GetPrimitiveType(UParticleModuleTypeDataBase *this)

{
  return PT_TriangleList;
}

// GetPrivateStaticClass @ 14731bef0

UClass * __cdecl UParticleModuleTypeDataBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTypeDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTypeDataBase",
               &Z_Registration_Info_UClass_UParticleModuleTypeDataBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleTypeDataBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleTypeDataBase>,
               InternalVTableHelperCtorCaller<UParticleModuleTypeDataBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTypeDataBase.InnerSingleton;
}

// GetVertexFactoryType @ 14731ce10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
UParticleModuleTypeDataBase::GetVertexFactoryType(UParticleModuleTypeDataBase *this)

{
  return (FVertexFactoryType *)0x0;
}

// IsAMeshEmitter @ 14731ce20

bool __thiscall UParticleModuleTypeDataBase::IsAMeshEmitter(UParticleModuleTypeDataBase *this)

{
  return false;
}

// IsMotionBlurEnabled @ 14731ce40

bool __thiscall UParticleModuleTypeDataBase::IsMotionBlurEnabled(UParticleModuleTypeDataBase *this)

{
  return false;
}

// RequiresBuild @ 14731ceb0

bool __thiscall UParticleModuleTypeDataBase::RequiresBuild(UParticleModuleTypeDataBase *this)

{
  return false;
}

// StaticRegisterNativesUParticleModuleTypeDataBase @ 14731d030

void __cdecl UParticleModuleTypeDataBase::StaticRegisterNativesUParticleModuleTypeDataBase(void)

{
  return;
}

// SupportsSpecificScreenAlignmentFlags @ 14731d170

bool __thiscall
UParticleModuleTypeDataBase::SupportsSpecificScreenAlignmentFlags(UParticleModuleTypeDataBase *this)

{
  return false;
}

// SupportsSubUV @ 14731d190

bool __thiscall UParticleModuleTypeDataBase::SupportsSubUV(UParticleModuleTypeDataBase *this)

{
  return false;
}

// UParticleModuleTypeDataBase @ 14815e7d0

UParticleModuleTypeDataBase * __thiscall
UParticleModuleTypeDataBase::UParticleModuleTypeDataBase
          (UParticleModuleTypeDataBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  *(undefined ***)this = &___7UParticleModuleTypeDataBase__6B_;
  this->field_0x28 = this->field_0x28 & 0x14 | 0x80;
  return this;
}

// CreateInstance @ 14816dcc0

FParticleEmitterInstance * __thiscall
UParticleModuleTypeDataBase::CreateInstance
          (UParticleModuleTypeDataBase *this,UParticleEmitter *param_1,
          IParticleEmitterInstanceOwner *param_2)

{
  return (FParticleEmitterInstance *)0x0;
}

