// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b7d50

UClass * __cdecl UMaterialExpressionParticleSubUV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSubUV",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSubUV,0x208,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSubUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSubUV>,local_res8,
               UMaterialExpressionTextureSample::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.InnerSingleton;
}

// UMaterialExpressionParticleSubUV @ 1472c0c90

UMaterialExpressionParticleSubUV * __thiscall
UMaterialExpressionParticleSubUV::UMaterialExpressionParticleSubUV
          (UMaterialExpressionParticleSubUV *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  this->bBlend = 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionParticleSubUV__6B_;
  return this;
}

// UMaterialExpressionParticleSubUV @ 1472c0cc0

UMaterialExpressionParticleSubUV * __thiscall
UMaterialExpressionParticleSubUV::UMaterialExpressionParticleSubUV
          (UMaterialExpressionParticleSubUV *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  this->bBlend = 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionParticleSubUV__6B_;
  return this;
}

// ~UMaterialExpressionParticleSubUV @ 1472c23f0

void __thiscall
UMaterialExpressionParticleSubUV::~UMaterialExpressionParticleSubUV
          (UMaterialExpressionParticleSubUV *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionParticleSubUV__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5cb0

UClass * __cdecl UMaterialExpressionParticleSubUV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParticleSubUV",
               &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParticleSubUV,0x208,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParticleSubUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParticleSubUV>,local_res8,
               UMaterialExpressionTextureSample::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParticleSubUV @ 1472c7630

void __cdecl
UMaterialExpressionParticleSubUV::StaticRegisterNativesUMaterialExpressionParticleSubUV(void)

{
  return;
}

