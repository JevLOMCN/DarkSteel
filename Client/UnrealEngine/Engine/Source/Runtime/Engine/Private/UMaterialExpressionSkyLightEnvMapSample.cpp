// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472caee0

UClass * __cdecl UMaterialExpressionSkyLightEnvMapSample::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyLightEnvMapSample",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSkyLightEnvMapSample,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyLightEnvMapSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyLightEnvMapSample>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.InnerSingleton;
}

// UMaterialExpressionSkyLightEnvMapSample @ 1472d32a0

UMaterialExpressionSkyLightEnvMapSample * __thiscall
UMaterialExpressionSkyLightEnvMapSample::UMaterialExpressionSkyLightEnvMapSample
          (UMaterialExpressionSkyLightEnvMapSample *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyLightEnvMapSample__6B_;
  (this->Direction).OutputIndex = 0;
  (this->Direction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Direction).InputName.Number = 0;
  (this->Direction).MaskR = 0;
  (this->Direction).MaskG = 0;
  (this->Direction).MaskB = 0;
  (this->Direction).MaskA = 0;
  (this->Direction).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSkyLightEnvMapSample @ 1472d3310

UMaterialExpressionSkyLightEnvMapSample * __thiscall
UMaterialExpressionSkyLightEnvMapSample::UMaterialExpressionSkyLightEnvMapSample
          (UMaterialExpressionSkyLightEnvMapSample *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyLightEnvMapSample__6B_;
  (this->Direction).OutputIndex = 0;
  (this->Direction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Direction).InputName.Number = 0;
  (this->Direction).MaskR = 0;
  (this->Direction).MaskG = 0;
  (this->Direction).MaskB = 0;
  (this->Direction).MaskA = 0;
  (this->Direction).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSkyLightEnvMapSample @ 1472d46e0

void __thiscall
UMaterialExpressionSkyLightEnvMapSample::~UMaterialExpressionSkyLightEnvMapSample
          (UMaterialExpressionSkyLightEnvMapSample *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyLightEnvMapSample__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7830

UClass * __cdecl UMaterialExpressionSkyLightEnvMapSample::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyLightEnvMapSample",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSkyLightEnvMapSample,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyLightEnvMapSample>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyLightEnvMapSample>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyLightEnvMapSample.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSkyLightEnvMapSample @ 1472d89b0

void __cdecl
UMaterialExpressionSkyLightEnvMapSample::
StaticRegisterNativesUMaterialExpressionSkyLightEnvMapSample(void)

{
  return;
}

