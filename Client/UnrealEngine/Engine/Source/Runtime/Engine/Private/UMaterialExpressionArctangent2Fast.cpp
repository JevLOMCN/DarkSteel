// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147285550

UClass * __cdecl UMaterialExpressionArctangent2Fast::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArctangent2Fast",
               &Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArctangent2Fast,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArctangent2Fast>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArctangent2Fast>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.InnerSingleton;
}

// UMaterialExpressionArctangent2Fast @ 14728c7f0

UMaterialExpressionArctangent2Fast * __thiscall
UMaterialExpressionArctangent2Fast::UMaterialExpressionArctangent2Fast
          (UMaterialExpressionArctangent2Fast *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent2Fast__6B_;
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

// UMaterialExpressionArctangent2Fast @ 14728c8b0

UMaterialExpressionArctangent2Fast * __thiscall
UMaterialExpressionArctangent2Fast::UMaterialExpressionArctangent2Fast
          (UMaterialExpressionArctangent2Fast *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent2Fast__6B_;
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

// ~UMaterialExpressionArctangent2Fast @ 14728d750

void __thiscall
UMaterialExpressionArctangent2Fast::~UMaterialExpressionArctangent2Fast
          (UMaterialExpressionArctangent2Fast *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionArctangent2Fast__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147290790

UClass * __cdecl UMaterialExpressionArctangent2Fast::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionArctangent2Fast",
               &Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionArctangent2Fast,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionArctangent2Fast>,
               InternalVTableHelperCtorCaller<UMaterialExpressionArctangent2Fast>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionArctangent2Fast.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionArctangent2Fast @ 147291460

void __cdecl
UMaterialExpressionArctangent2Fast::StaticRegisterNativesUMaterialExpressionArctangent2Fast(void)

{
  return;
}

