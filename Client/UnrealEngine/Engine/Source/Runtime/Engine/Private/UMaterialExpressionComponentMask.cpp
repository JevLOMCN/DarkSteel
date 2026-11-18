// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147297340

UClass * __cdecl UMaterialExpressionComponentMask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionComponentMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionComponentMask",
               &Z_Registration_Info_UClass_UMaterialExpressionComponentMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionComponentMask,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionComponentMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionComponentMask>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionComponentMask.InnerSingleton;
}

// UMaterialExpressionComponentMask @ 14729c740

UMaterialExpressionComponentMask * __thiscall
UMaterialExpressionComponentMask::UMaterialExpressionComponentMask
          (UMaterialExpressionComponentMask *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionComponentMask__6B_;
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

// UMaterialExpressionComponentMask @ 14729c790

UMaterialExpressionComponentMask * __thiscall
UMaterialExpressionComponentMask::UMaterialExpressionComponentMask
          (UMaterialExpressionComponentMask *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionComponentMask__6B_;
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

// ~UMaterialExpressionComponentMask @ 14729d8b0

void __thiscall
UMaterialExpressionComponentMask::~UMaterialExpressionComponentMask
          (UMaterialExpressionComponentMask *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionComponentMask__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0290

UClass * __cdecl UMaterialExpressionComponentMask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionComponentMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionComponentMask",
               &Z_Registration_Info_UClass_UMaterialExpressionComponentMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionComponentMask,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionComponentMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionComponentMask>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionComponentMask.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionComponentMask @ 1472a1cf0

void __cdecl
UMaterialExpressionComponentMask::StaticRegisterNativesUMaterialExpressionComponentMask(void)

{
  return;
}

