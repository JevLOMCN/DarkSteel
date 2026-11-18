// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147307380

UClass * __cdecl UParticleModuleMeshMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshMaterial",
               &Z_Registration_Info_UClass_UParticleModuleMeshMaterial.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshMaterial,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshMaterial>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshMaterial>,local_res8,
               UParticleModuleMaterialBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshMaterial.InnerSingleton;
}

// UParticleModuleMeshMaterial @ 14730ac90

UParticleModuleMeshMaterial * __thiscall
UParticleModuleMeshMaterial::UParticleModuleMeshMaterial
          (UParticleModuleMeshMaterial *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleMeshMaterial__6B_;
  (this->MeshMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshMaterials).ArrayNum = 0;
  (this->MeshMaterials).ArrayMax = 0;
  return this;
}

// ~UParticleModuleMeshMaterial @ 14730bb70

void __thiscall
UParticleModuleMeshMaterial::~UParticleModuleMeshMaterial(UParticleModuleMeshMaterial *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleMeshMaterial__6B_;
  pFVar1 = (this->MeshMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleMaterialBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e960

UClass * __cdecl UParticleModuleMeshMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshMaterial",
               &Z_Registration_Info_UClass_UParticleModuleMeshMaterial.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshMaterial,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshMaterial>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshMaterial>,local_res8,
               UParticleModuleMaterialBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshMaterial.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleMeshMaterial @ 14730fe70

void __cdecl UParticleModuleMeshMaterial::StaticRegisterNativesUParticleModuleMeshMaterial(void)

{
  return;
}

// UParticleModuleMeshMaterial @ 14815d4d0

UParticleModuleMeshMaterial * __thiscall
UParticleModuleMeshMaterial::UParticleModuleMeshMaterial
          (UParticleModuleMeshMaterial *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleMeshMaterial__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  (this->MeshMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshMaterials).ArrayNum = 0;
  (this->MeshMaterials).ArrayMax = 0;
  return this;
}

// RequiredBytesPerInstance @ 148191950

uint __thiscall
UParticleModuleMeshMaterial::RequiredBytesPerInstance(UParticleModuleMeshMaterial *this)

{
  return 0;
}

// Spawn @ 14819ce30

void __thiscall
UParticleModuleMeshMaterial::Spawn(UParticleModuleMeshMaterial *this,FSpawnContext *param_1)

{
  return;
}

