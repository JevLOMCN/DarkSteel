// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 6

// StaticClass @ 14de3baf0

UClass * __cdecl UKawaiiPhysicsLimitsDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsLimitsDataAsset",
               &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton,
               StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKawaiiPhysicsLimitsDataAsset>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsLimitsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton;
}

// UKawaiiPhysicsLimitsDataAsset @ 14de3da00

UKawaiiPhysicsLimitsDataAsset * __thiscall
UKawaiiPhysicsLimitsDataAsset::UKawaiiPhysicsLimitsDataAsset
          (UKawaiiPhysicsLimitsDataAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UKawaiiPhysicsLimitsDataAsset__6B_;
  (this->SphericalLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphericalLimits).ArrayNum = 0;
  (this->SphericalLimits).ArrayMax = 0;
  (this->CapsuleLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapsuleLimits).ArrayNum = 0;
  (this->CapsuleLimits).ArrayMax = 0;
  (this->PlanarLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlanarLimits).ArrayNum = 0;
  (this->PlanarLimits).ArrayMax = 0;
  return this;
}

// UKawaiiPhysicsLimitsDataAsset @ 14de3da50

UKawaiiPhysicsLimitsDataAsset * __thiscall
UKawaiiPhysicsLimitsDataAsset::UKawaiiPhysicsLimitsDataAsset
          (UKawaiiPhysicsLimitsDataAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UKawaiiPhysicsLimitsDataAsset__6B_;
  (this->SphericalLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphericalLimits).ArrayNum = 0;
  (this->SphericalLimits).ArrayMax = 0;
  (this->CapsuleLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapsuleLimits).ArrayNum = 0;
  (this->CapsuleLimits).ArrayMax = 0;
  (this->PlanarLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlanarLimits).ArrayNum = 0;
  (this->PlanarLimits).ArrayMax = 0;
  return this;
}

// ~UKawaiiPhysicsLimitsDataAsset @ 14de3de30

void __thiscall
UKawaiiPhysicsLimitsDataAsset::~UKawaiiPhysicsLimitsDataAsset(UKawaiiPhysicsLimitsDataAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UKawaiiPhysicsLimitsDataAsset__6B_;
  pFVar1 = (this->PlanarLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapsuleLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphericalLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14de43990

UClass * __cdecl UKawaiiPhysicsLimitsDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/KawaiiPhysics",L"KawaiiPhysicsLimitsDataAsset",
               &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton,
               StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKawaiiPhysicsLimitsDataAsset>,
               InternalVTableHelperCtorCaller<UKawaiiPhysicsLimitsDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.InnerSingleton;
}

// StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset @ 14de467f0

void __cdecl UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset(void)

{
  return;
}

