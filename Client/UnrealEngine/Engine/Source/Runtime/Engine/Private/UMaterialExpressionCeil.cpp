// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472959a0

UClass * __cdecl UMaterialExpressionCeil::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCeil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCeil",
               &Z_Registration_Info_UClass_UMaterialExpressionCeil.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCeil,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCeil>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCeil>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCeil.InnerSingleton;
}

// UMaterialExpressionCeil @ 14729c260

UMaterialExpressionCeil * __thiscall
UMaterialExpressionCeil::UMaterialExpressionCeil
          (UMaterialExpressionCeil *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCeil__6B_;
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

// UMaterialExpressionCeil @ 14729c2b0

UMaterialExpressionCeil * __thiscall
UMaterialExpressionCeil::UMaterialExpressionCeil
          (UMaterialExpressionCeil *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCeil__6B_;
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

// ~UMaterialExpressionCeil @ 14729d770

void __thiscall UMaterialExpressionCeil::~UMaterialExpressionCeil(UMaterialExpressionCeil *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCeil__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729fbd0

UClass * __cdecl UMaterialExpressionCeil::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCeil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCeil",
               &Z_Registration_Info_UClass_UMaterialExpressionCeil.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCeil,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCeil>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCeil>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCeil.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCeil @ 1472a1c60

void __cdecl UMaterialExpressionCeil::StaticRegisterNativesUMaterialExpressionCeil(void)

{
  return;
}

