// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147295b60

UClass * __cdecl UMaterialExpressionDepthOfFieldFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDepthOfFieldFunction",
               &Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDepthOfFieldFunction>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDepthOfFieldFunction>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.InnerSingleton;
}

// UMaterialExpressionDepthOfFieldFunction @ 14729d050

UMaterialExpressionDepthOfFieldFunction * __thiscall
UMaterialExpressionDepthOfFieldFunction::UMaterialExpressionDepthOfFieldFunction
          (UMaterialExpressionDepthOfFieldFunction *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDepthOfFieldFunction__6B_;
  (this->Depth).OutputIndex = 0;
  (this->Depth).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Depth).InputName.Number = 0;
  (this->Depth).MaskR = 0;
  (this->Depth).MaskG = 0;
  (this->Depth).MaskB = 0;
  (this->Depth).MaskA = 0;
  (this->Depth).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionDepthOfFieldFunction @ 14729dcb0

void __thiscall
UMaterialExpressionDepthOfFieldFunction::~UMaterialExpressionDepthOfFieldFunction
          (UMaterialExpressionDepthOfFieldFunction *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDepthOfFieldFunction__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a13d0

UClass * __cdecl UMaterialExpressionDepthOfFieldFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDepthOfFieldFunction",
               &Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDepthOfFieldFunction>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDepthOfFieldFunction>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDepthOfFieldFunction.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction @ 1472a1e90

void __cdecl
UMaterialExpressionDepthOfFieldFunction::
StaticRegisterNativesUMaterialExpressionDepthOfFieldFunction(void)

{
  return;
}

// UMaterialExpressionDepthOfFieldFunction @ 148afbb90

UMaterialExpressionDepthOfFieldFunction * __thiscall
UMaterialExpressionDepthOfFieldFunction::UMaterialExpressionDepthOfFieldFunction
          (UMaterialExpressionDepthOfFieldFunction *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDepthOfFieldFunction__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Depth).OutputIndex = 0;
  (this->Depth).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Depth).InputName.Number = 0;
  (this->Depth).MaskR = 0;
  (this->Depth).MaskG = 0;
  (this->Depth).MaskB = 0;
  (this->Depth).MaskA = 0;
  (this->Depth).Expression = (UMaterialExpression *)0x0;
  return this;
}

