// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147285450

UClass * __cdecl UMaterialExpressionArctangent2::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArctangent2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArctangent2",
               &Z_Registration_Info_UClass_UMaterialExpressionArctangent2.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArctangent2,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArctangent2>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArctangent2>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArctangent2.InnerSingleton;
}

// UMaterialExpressionArctangent2 @ 14728c6c0

UMaterialExpressionArctangent2 * __thiscall
UMaterialExpressionArctangent2::UMaterialExpressionArctangent2
          (UMaterialExpressionArctangent2 *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent2__6B_;
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
  (this->Y).OutputIndex = 0;
  (this->Y).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Y).InputName.Number = 0;
  (this->Y).MaskR = 0;
  (this->Y).MaskG = 0;
  (this->Y).MaskB = 0;
  (this->Y).MaskA = 0;
  (this->Y).Expression = (UMaterialExpression *)0x0;
  (this->X).OutputIndex = 0;
  (this->X).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->X).InputName.Number = 0;
  (this->X).MaskR = 0;
  (this->X).MaskG = 0;
  (this->X).MaskB = 0;
  (this->X).MaskA = 0;
  (this->X).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionArctangent2 @ 14728c780

UMaterialExpressionArctangent2 * __thiscall
UMaterialExpressionArctangent2::UMaterialExpressionArctangent2
          (UMaterialExpressionArctangent2 *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent2__6B_;
  (this->Y).OutputIndex = 0;
  (this->Y).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Y).InputName.Number = 0;
  (this->Y).MaskR = 0;
  (this->Y).MaskG = 0;
  (this->Y).MaskB = 0;
  (this->Y).MaskA = 0;
  (this->Y).Expression = (UMaterialExpression *)0x0;
  (this->X).OutputIndex = 0;
  (this->X).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->X).InputName.Number = 0;
  (this->X).MaskR = 0;
  (this->X).MaskG = 0;
  (this->X).MaskB = 0;
  (this->X).MaskA = 0;
  (this->X).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionArctangent2 @ 14728d730

void __thiscall
UMaterialExpressionArctangent2::~UMaterialExpressionArctangent2
          (UMaterialExpressionArctangent2 *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent2__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472906d0

UClass * __cdecl UMaterialExpressionArctangent2::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArctangent2.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArctangent2",
               &Z_Registration_Info_UClass_UMaterialExpressionArctangent2.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArctangent2,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArctangent2>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArctangent2>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArctangent2.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionArctangent2 @ 147291450

void __cdecl
UMaterialExpressionArctangent2::StaticRegisterNativesUMaterialExpressionArctangent2(void)

{
  return;
}

