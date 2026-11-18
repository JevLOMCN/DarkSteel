// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ca720

UClass * __cdecl UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereLightIlluminance",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance
               ,0xf8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereLightIlluminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereLightIlluminance>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.InnerSingleton;
}

// UMaterialExpressionSkyAtmosphereLightIlluminance @ 1472d30e0

UMaterialExpressionSkyAtmosphereLightIlluminance * __thiscall
UMaterialExpressionSkyAtmosphereLightIlluminance::UMaterialExpressionSkyAtmosphereLightIlluminance
          (UMaterialExpressionSkyAtmosphereLightIlluminance *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightIlluminance__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// UMaterialExpressionSkyAtmosphereLightIlluminance @ 1472d3140

UMaterialExpressionSkyAtmosphereLightIlluminance * __thiscall
UMaterialExpressionSkyAtmosphereLightIlluminance::UMaterialExpressionSkyAtmosphereLightIlluminance
          (UMaterialExpressionSkyAtmosphereLightIlluminance *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightIlluminance__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// ~UMaterialExpressionSkyAtmosphereLightIlluminance @ 1472d4680

void __thiscall
UMaterialExpressionSkyAtmosphereLightIlluminance::~UMaterialExpressionSkyAtmosphereLightIlluminance
          (UMaterialExpressionSkyAtmosphereLightIlluminance *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSkyAtmosphereLightIlluminance__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472d75f0

UClass * __cdecl UMaterialExpressionSkyAtmosphereLightIlluminance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSkyAtmosphereLightIlluminance",
               &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance
               ,0xf8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSkyAtmosphereLightIlluminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSkyAtmosphereLightIlluminance>,
               local_res8,UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance @ 1472d8980

void __cdecl
UMaterialExpressionSkyAtmosphereLightIlluminance::
StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance(void)

{
  return;
}

