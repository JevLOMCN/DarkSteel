// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472db610

UClass * __cdecl UMaterialExpressionTruncate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTruncate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTruncate",
               &Z_Registration_Info_UClass_UMaterialExpressionTruncate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTruncate,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTruncate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTruncate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTruncate.InnerSingleton;
}

// UMaterialExpressionTruncate @ 1472e28b0

UMaterialExpressionTruncate * __thiscall
UMaterialExpressionTruncate::UMaterialExpressionTruncate
          (UMaterialExpressionTruncate *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTruncate__6B_;
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

// UMaterialExpressionTruncate @ 1472e2900

UMaterialExpressionTruncate * __thiscall
UMaterialExpressionTruncate::UMaterialExpressionTruncate
          (UMaterialExpressionTruncate *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTruncate__6B_;
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

// ~UMaterialExpressionTruncate @ 1472e36c0

void __thiscall
UMaterialExpressionTruncate::~UMaterialExpressionTruncate(UMaterialExpressionTruncate *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTruncate__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e65a0

UClass * __cdecl UMaterialExpressionTruncate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTruncate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTruncate",
               &Z_Registration_Info_UClass_UMaterialExpressionTruncate.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTruncate,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTruncate>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTruncate>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTruncate.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTruncate @ 1472e7930

void __cdecl UMaterialExpressionTruncate::StaticRegisterNativesUMaterialExpressionTruncate(void)

{
  return;
}

