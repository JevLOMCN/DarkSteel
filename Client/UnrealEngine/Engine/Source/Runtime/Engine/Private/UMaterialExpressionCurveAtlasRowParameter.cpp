// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147296720

UClass * __cdecl UMaterialExpressionCurveAtlasRowParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCurveAtlasRowParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCurveAtlasRowParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCurveAtlasRowParameter>,local_res8,
               UMaterialExpressionScalarParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.InnerSingleton;
}

// UMaterialExpressionCurveAtlasRowParameter @ 14729cbc0

UMaterialExpressionCurveAtlasRowParameter * __thiscall
UMaterialExpressionCurveAtlasRowParameter::UMaterialExpressionCurveAtlasRowParameter
          (UMaterialExpressionCurveAtlasRowParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionScalarParameter::UMaterialExpressionScalarParameter
            ((UMaterialExpressionScalarParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCurveAtlasRowParameter__6B_;
  (this->Curve).field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  (this->Atlas).field0_0x0.DebugPtr = (UCurveLinearColorAtlas *)0x0;
  (this->InputTime).OutputIndex = 0;
  (this->InputTime).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputTime).InputName.Number = 0;
  (this->InputTime).MaskR = 0;
  (this->InputTime).MaskG = 0;
  (this->InputTime).MaskB = 0;
  (this->InputTime).MaskA = 0;
  (this->InputTime).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionCurveAtlasRowParameter @ 14729da60

void __thiscall
UMaterialExpressionCurveAtlasRowParameter::~UMaterialExpressionCurveAtlasRowParameter
          (UMaterialExpressionCurveAtlasRowParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCurveAtlasRowParameter__6B_;
  UMaterialExpressionScalarParameter::~UMaterialExpressionScalarParameter
            ((UMaterialExpressionScalarParameter *)this);
  return;
}

// CanReferenceTexture @ 14729f150

bool __thiscall
UMaterialExpressionCurveAtlasRowParameter::CanReferenceTexture
          (UMaterialExpressionCurveAtlasRowParameter *this)

{
  return true;
}

// GetPrivateStaticClass @ 1472a0a10

UClass * __cdecl UMaterialExpressionCurveAtlasRowParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCurveAtlasRowParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCurveAtlasRowParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCurveAtlasRowParameter>,local_res8,
               UMaterialExpressionScalarParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.InnerSingleton;
}

// IsUsedAsAtlasPosition @ 1472a1a10

bool __thiscall
UMaterialExpressionCurveAtlasRowParameter::IsUsedAsAtlasPosition
          (UMaterialExpressionCurveAtlasRowParameter *this)

{
  return true;
}

// StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter @ 1472a1d90

void __cdecl
UMaterialExpressionCurveAtlasRowParameter::
StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter(void)

{
  return;
}

// UMaterialExpressionCurveAtlasRowParameter @ 148afb3b0

UMaterialExpressionCurveAtlasRowParameter * __thiscall
UMaterialExpressionCurveAtlasRowParameter::UMaterialExpressionCurveAtlasRowParameter
          (UMaterialExpressionCurveAtlasRowParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionScalarParameter__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FUtf8String::Reset((FUtf8String *)&this->_padding_,0);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionCurveAtlasRowParameter__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  (this->Curve).field0_0x0.DebugPtr = (UCurveLinearColor *)0x0;
  (this->Atlas).field0_0x0.DebugPtr = (UCurveLinearColorAtlas *)0x0;
  (this->InputTime).OutputIndex = 0;
  (this->InputTime).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputTime).InputName.Number = 0;
  (this->InputTime).MaskR = 0;
  (this->InputTime).MaskG = 0;
  (this->InputTime).MaskB = 0;
  (this->InputTime).MaskA = 0;
  (this->InputTime).Expression = (UMaterialExpression *)0x0;
  return this;
}

// GetReferencedTexture @ 148b02310

UObject * __thiscall
UMaterialExpressionCurveAtlasRowParameter::GetReferencedTexture
          (UMaterialExpressionCurveAtlasRowParameter *this)

{
  return (UObject *)(this->Atlas).field0_0x0.DebugPtr;
}

