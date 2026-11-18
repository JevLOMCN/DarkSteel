// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147285a90

UClass * __cdecl UMaterialExpressionAtmosphericFogColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAtmosphericFogColor",
               &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAtmosphericFogColor,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAtmosphericFogColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAtmosphericFogColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.InnerSingleton;
}

// UMaterialExpressionAtmosphericFogColor @ 14728cae0

UMaterialExpressionAtmosphericFogColor * __thiscall
UMaterialExpressionAtmosphericFogColor::UMaterialExpressionAtmosphericFogColor
          (UMaterialExpressionAtmosphericFogColor *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionAtmosphericFogColor__6B_;
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

// ~UMaterialExpressionAtmosphericFogColor @ 14728d7b0

void __thiscall
UMaterialExpressionAtmosphericFogColor::~UMaterialExpressionAtmosphericFogColor
          (UMaterialExpressionAtmosphericFogColor *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionAtmosphericFogColor__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472909d0

UClass * __cdecl UMaterialExpressionAtmosphericFogColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAtmosphericFogColor",
               &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAtmosphericFogColor,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAtmosphericFogColor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAtmosphericFogColor>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionAtmosphericFogColor @ 147291490

void __cdecl
UMaterialExpressionAtmosphericFogColor::StaticRegisterNativesUMaterialExpressionAtmosphericFogColor
          (void)

{
  return;
}

// UMaterialExpressionAtmosphericFogColor @ 148afa910

UMaterialExpressionAtmosphericFogColor * __thiscall
UMaterialExpressionAtmosphericFogColor::UMaterialExpressionAtmosphericFogColor
          (UMaterialExpressionAtmosphericFogColor *this,FObjectInitializer *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionAtmosphericFogColor__6B_;
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

