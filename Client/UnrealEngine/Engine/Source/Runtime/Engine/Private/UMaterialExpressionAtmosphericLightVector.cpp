// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147286030

UClass * __cdecl UMaterialExpressionAtmosphericLightVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAtmosphericLightVector",
               &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAtmosphericLightVector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAtmosphericLightVector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAtmosphericLightVector>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.InnerSingleton;
}

// UMaterialExpressionAtmosphericLightVector @ 14728cba0

UMaterialExpressionAtmosphericLightVector * __thiscall
UMaterialExpressionAtmosphericLightVector::UMaterialExpressionAtmosphericLightVector
          (UMaterialExpressionAtmosphericLightVector *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionAtmosphericLightVector__6B_;
  return this;
}

// UMaterialExpressionAtmosphericLightVector @ 14728cbd0

UMaterialExpressionAtmosphericLightVector * __thiscall
UMaterialExpressionAtmosphericLightVector::UMaterialExpressionAtmosphericLightVector
          (UMaterialExpressionAtmosphericLightVector *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionAtmosphericLightVector__6B_;
  return this;
}

// ~UMaterialExpressionAtmosphericLightVector @ 14728d7f0

void __thiscall
UMaterialExpressionAtmosphericLightVector::~UMaterialExpressionAtmosphericLightVector
          (UMaterialExpressionAtmosphericLightVector *this)

{
  *(undefined ***)this = &___7UMaterialExpressionAtmosphericLightVector__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 147290b50

UClass * __cdecl UMaterialExpressionAtmosphericLightVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAtmosphericLightVector",
               &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAtmosphericLightVector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAtmosphericLightVector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAtmosphericLightVector>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionAtmosphericLightVector @ 1472914b0

void __cdecl
UMaterialExpressionAtmosphericLightVector::
StaticRegisterNativesUMaterialExpressionAtmosphericLightVector(void)

{
  return;
}

