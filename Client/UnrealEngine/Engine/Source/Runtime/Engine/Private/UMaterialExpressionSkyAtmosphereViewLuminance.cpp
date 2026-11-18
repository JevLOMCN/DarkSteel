// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cac20

UClass * __cdecl UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereViewLuminance",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance,
               0xe8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereViewLuminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereViewLuminance>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.InnerSingleton;
}

// UMaterialExpressionSkyAtmosphereViewLuminance @ 1472d3200

UMaterialExpressionSkyAtmosphereViewLuminance * __thiscall
UMaterialExpressionSkyAtmosphereViewLuminance::UMaterialExpressionSkyAtmosphereViewLuminance
          (UMaterialExpressionSkyAtmosphereViewLuminance *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereViewLuminance__6B_;
  (this->WorldDirection).OutputIndex = 0;
  (this->WorldDirection).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldDirection).InputName.Number = 0;
  (this->WorldDirection).MaskR = 0;
  (this->WorldDirection).MaskG = 0;
  (this->WorldDirection).MaskB = 0;
  (this->WorldDirection).MaskA = 0;
  (this->WorldDirection).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSkyAtmosphereViewLuminance @ 1472d3250

UMaterialExpressionSkyAtmosphereViewLuminance * __thiscall
UMaterialExpressionSkyAtmosphereViewLuminance::UMaterialExpressionSkyAtmosphereViewLuminance
          (UMaterialExpressionSkyAtmosphereViewLuminance *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereViewLuminance__6B_;
  (this->WorldDirection).OutputIndex = 0;
  (this->WorldDirection).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldDirection).InputName.Number = 0;
  (this->WorldDirection).MaskR = 0;
  (this->WorldDirection).MaskG = 0;
  (this->WorldDirection).MaskB = 0;
  (this->WorldDirection).MaskA = 0;
  (this->WorldDirection).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionSkyAtmosphereViewLuminance @ 1472d46c0

void __thiscall
UMaterialExpressionSkyAtmosphereViewLuminance::~UMaterialExpressionSkyAtmosphereViewLuminance
          (UMaterialExpressionSkyAtmosphereViewLuminance *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereViewLuminance__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d7770

UClass * __cdecl UMaterialExpressionSkyAtmosphereViewLuminance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereViewLuminance",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance,
               0xe8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereViewLuminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereViewLuminance>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance @ 1472d89a0

void __cdecl
UMaterialExpressionSkyAtmosphereViewLuminance::
StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance(void)

{
  return;
}

