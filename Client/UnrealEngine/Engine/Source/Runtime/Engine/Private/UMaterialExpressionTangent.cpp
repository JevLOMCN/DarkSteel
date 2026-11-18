// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472db430

UClass * __cdecl UMaterialExpressionTangent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTangent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTangent",
               &Z_Registration_Info_UClass_UMaterialExpressionTangent.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTangent,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTangent>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTangent>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTangent.InnerSingleton;
}

// UMaterialExpressionTangent @ 1472e1b70

UMaterialExpressionTangent * __thiscall
UMaterialExpressionTangent::UMaterialExpressionTangent
          (UMaterialExpressionTangent *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTangent__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionTangent @ 1472e1bd0

UMaterialExpressionTangent * __thiscall
UMaterialExpressionTangent::UMaterialExpressionTangent
          (UMaterialExpressionTangent *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->Period = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTangent__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionTangent @ 1472e3360

void __thiscall
UMaterialExpressionTangent::~UMaterialExpressionTangent(UMaterialExpressionTangent *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTangent__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e53a0

UClass * __cdecl UMaterialExpressionTangent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTangent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTangent",
               &Z_Registration_Info_UClass_UMaterialExpressionTangent.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTangent,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTangent>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTangent>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTangent.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTangent @ 1472e77b0

void __cdecl UMaterialExpressionTangent::StaticRegisterNativesUMaterialExpressionTangent(void)

{
  return;
}

