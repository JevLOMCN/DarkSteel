// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e8bfc0

UClass * __cdecl ULightmassPrimitiveSettingsObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPrimitiveSettingsObject",
               &Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton,
               StaticRegisterNativesULightmassPrimitiveSettingsObject,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULightmassPrimitiveSettingsObject>,
               InternalVTableHelperCtorCaller<ULightmassPrimitiveSettingsObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton;
}

// ULightmassPrimitiveSettingsObject @ 147ea6f40

ULightmassPrimitiveSettingsObject * __thiscall
ULightmassPrimitiveSettingsObject::ULightmassPrimitiveSettingsObject
          (ULightmassPrimitiveSettingsObject *this,FVTableHelper *param_1)

{
  FLightmassPrimitiveSettings *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULightmassPrimitiveSettingsObject__6B_;
  pFVar1->bUseTwoSidedLighting = 0;
  pFVar1->bUseVertexNormalForHemisphereGather = 0;
  pFVar1->bUseEmissiveForStaticLighting = 0;
  pFVar1->bShadowIndirectOnly = 0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  return this;
}

// ULightmassPrimitiveSettingsObject @ 147ea6f90

ULightmassPrimitiveSettingsObject * __thiscall
ULightmassPrimitiveSettingsObject::ULightmassPrimitiveSettingsObject
          (ULightmassPrimitiveSettingsObject *this,FObjectInitializer *param_1)

{
  FLightmassPrimitiveSettings *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULightmassPrimitiveSettingsObject__6B_;
  pFVar1->bUseTwoSidedLighting = 0;
  pFVar1->bUseVertexNormalForHemisphereGather = 0;
  pFVar1->bUseEmissiveForStaticLighting = 0;
  pFVar1->bShadowIndirectOnly = 0;
  (this->LightmassSettings).EmissiveLightFalloffExponent = 8.0;
  (this->LightmassSettings).EmissiveLightExplicitInfluenceRadius = 0.0;
  (this->LightmassSettings).EmissiveBoost = 1.0;
  (this->LightmassSettings).DiffuseBoost = 1.0;
  (this->LightmassSettings).FullyOccludedSamplesFraction = 1.0;
  return this;
}

// ~ULightmassPrimitiveSettingsObject @ 147ea96a0

void __thiscall
ULightmassPrimitiveSettingsObject::~ULightmassPrimitiveSettingsObject
          (ULightmassPrimitiveSettingsObject *this)

{
  this->_padding_ = (longlong)&___7ULightmassPrimitiveSettingsObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147ec4550

UClass * __cdecl ULightmassPrimitiveSettingsObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmassPrimitiveSettingsObject",
               &Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton,
               StaticRegisterNativesULightmassPrimitiveSettingsObject,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULightmassPrimitiveSettingsObject>,
               InternalVTableHelperCtorCaller<ULightmassPrimitiveSettingsObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.InnerSingleton;
}

// StaticRegisterNativesULightmassPrimitiveSettingsObject @ 147edf160

void __cdecl
ULightmassPrimitiveSettingsObject::StaticRegisterNativesULightmassPrimitiveSettingsObject(void)

{
  return;
}

