// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 6

// StaticClass @ 14ac8aad0

UClass * __cdecl UUIParticleAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleAsset",
               &Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton,
               StaticRegisterNativesUUIParticleAsset,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UUIParticleAsset>,
               InternalVTableHelperCtorCaller<UUIParticleAsset>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton;
}

// UUIParticleAsset @ 14ac90190

UUIParticleAsset * __thiscall
UUIParticleAsset::UUIParticleAsset(UUIParticleAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUIParticleAsset__6B_;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  return this;
}

// UUIParticleAsset @ 14ac901d0

UUIParticleAsset * __thiscall
UUIParticleAsset::UUIParticleAsset(UUIParticleAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UUIParticleAsset__6B_;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  this->AutoPlay = false;
  return this;
}

// ~UUIParticleAsset @ 14ac91000

void __thiscall UUIParticleAsset::~UUIParticleAsset(UUIParticleAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UUIParticleAsset__6B_;
  pFVar1 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ac989e0

UClass * __cdecl UUIParticleAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UIParticle",L"UIParticleAsset",
               &Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton,
               StaticRegisterNativesUUIParticleAsset,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UUIParticleAsset>,
               InternalVTableHelperCtorCaller<UUIParticleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIParticleAsset.InnerSingleton;
}

// StaticRegisterNativesUUIParticleAsset @ 14aca03d0

void __cdecl UUIParticleAsset::StaticRegisterNativesUUIParticleAsset(void)

{
  return;
}

