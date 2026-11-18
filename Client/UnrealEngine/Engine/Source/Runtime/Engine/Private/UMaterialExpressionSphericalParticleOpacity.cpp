// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc3f0

UClass * __cdecl UMaterialExpressionSphericalParticleOpacity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSphericalParticleOpacity",
               &Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity,0xf0
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSphericalParticleOpacity>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSphericalParticleOpacity>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.InnerSingleton;
}

// UMaterialExpressionSphericalParticleOpacity @ 1472d3be0

UMaterialExpressionSphericalParticleOpacity * __thiscall
UMaterialExpressionSphericalParticleOpacity::UMaterialExpressionSphericalParticleOpacity
          (UMaterialExpressionSphericalParticleOpacity *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->ConstantDensity = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSphericalParticleOpacity__6B_;
  (this->Density).OutputIndex = 0;
  (this->Density).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Density).InputName.Number = 0;
  (this->Density).MaskR = 0;
  (this->Density).MaskG = 0;
  (this->Density).MaskB = 0;
  (this->Density).MaskA = 0;
  (this->Density).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSphericalParticleOpacity @ 1472d4820

void __thiscall
UMaterialExpressionSphericalParticleOpacity::~UMaterialExpressionSphericalParticleOpacity
          (UMaterialExpressionSphericalParticleOpacity *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSphericalParticleOpacity__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7fb0

UClass * __cdecl UMaterialExpressionSphericalParticleOpacity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSphericalParticleOpacity",
               &Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity,0xf0
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSphericalParticleOpacity>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSphericalParticleOpacity>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSphericalParticleOpacity.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity @ 1472d8a50

void __cdecl
UMaterialExpressionSphericalParticleOpacity::
StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity(void)

{
  return;
}

// UMaterialExpressionSphericalParticleOpacity @ 148afecf0

UMaterialExpressionSphericalParticleOpacity * __thiscall
UMaterialExpressionSphericalParticleOpacity::UMaterialExpressionSphericalParticleOpacity
          (UMaterialExpressionSphericalParticleOpacity *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->ConstantDensity = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSphericalParticleOpacity__6B_;
  (this->Density).OutputIndex = 0;
  (this->Density).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Density).InputName.Number = 0;
  (this->Density).MaskR = 0;
  (this->Density).MaskG = 0;
  (this->Density).MaskB = 0;
  (this->Density).MaskA = 0;
  (this->Density).Expression = (UMaterialExpression *)0x0;
  return this;
}

