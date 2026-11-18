// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a7080

UClass * __cdecl UMaterialExpressionFrac::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFrac.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFrac",
               &Z_Registration_Info_UClass_UMaterialExpressionFrac.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFrac,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFrac>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFrac>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFrac.InnerSingleton;
}

// UMaterialExpressionFrac @ 1472ad490

UMaterialExpressionFrac * __thiscall
UMaterialExpressionFrac::UMaterialExpressionFrac
          (UMaterialExpressionFrac *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFrac__6B_;
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

// UMaterialExpressionFrac @ 1472ad4e0

UMaterialExpressionFrac * __thiscall
UMaterialExpressionFrac::UMaterialExpressionFrac
          (UMaterialExpressionFrac *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFrac__6B_;
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

// ~UMaterialExpressionFrac @ 1472af850

void __thiscall UMaterialExpressionFrac::~UMaterialExpressionFrac(UMaterialExpressionFrac *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFrac__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2960

UClass * __cdecl UMaterialExpressionFrac::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFrac.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFrac",
               &Z_Registration_Info_UClass_UMaterialExpressionFrac.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFrac,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFrac>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFrac>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFrac.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFrac @ 1472b45b0

void __cdecl UMaterialExpressionFrac::StaticRegisterNativesUMaterialExpressionFrac(void)

{
  return;
}

