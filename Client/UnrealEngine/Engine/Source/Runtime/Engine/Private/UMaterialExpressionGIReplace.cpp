// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a7a80

UClass * __cdecl UMaterialExpressionGIReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionGIReplace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionGIReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionGIReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionGIReplace,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionGIReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionGIReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionGIReplace.InnerSingleton;
}

// UMaterialExpressionGIReplace @ 1472ad790

UMaterialExpressionGIReplace * __thiscall
UMaterialExpressionGIReplace::UMaterialExpressionGIReplace
          (UMaterialExpressionGIReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionGIReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->StaticIndirect).OutputIndex = 0;
  (this->StaticIndirect).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->StaticIndirect).InputName.Number = 0;
  (this->StaticIndirect).MaskR = 0;
  (this->StaticIndirect).MaskG = 0;
  (this->StaticIndirect).MaskB = 0;
  (this->StaticIndirect).MaskA = 0;
  (this->StaticIndirect).Expression = (UMaterialExpression *)0x0;
  (this->DynamicIndirect).OutputIndex = 0;
  (this->DynamicIndirect).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DynamicIndirect).InputName.Number = 0;
  (this->DynamicIndirect).MaskR = 0;
  (this->DynamicIndirect).MaskG = 0;
  (this->DynamicIndirect).MaskB = 0;
  (this->DynamicIndirect).MaskA = 0;
  (this->DynamicIndirect).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionGIReplace @ 1472ad830

UMaterialExpressionGIReplace * __thiscall
UMaterialExpressionGIReplace::UMaterialExpressionGIReplace
          (UMaterialExpressionGIReplace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionGIReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->StaticIndirect).OutputIndex = 0;
  (this->StaticIndirect).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->StaticIndirect).InputName.Number = 0;
  (this->StaticIndirect).MaskR = 0;
  (this->StaticIndirect).MaskG = 0;
  (this->StaticIndirect).MaskB = 0;
  (this->StaticIndirect).MaskA = 0;
  (this->StaticIndirect).Expression = (UMaterialExpression *)0x0;
  (this->DynamicIndirect).OutputIndex = 0;
  (this->DynamicIndirect).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DynamicIndirect).InputName.Number = 0;
  (this->DynamicIndirect).MaskR = 0;
  (this->DynamicIndirect).MaskG = 0;
  (this->DynamicIndirect).MaskB = 0;
  (this->DynamicIndirect).MaskA = 0;
  (this->DynamicIndirect).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionGIReplace @ 1472af910

void __thiscall
UMaterialExpressionGIReplace::~UMaterialExpressionGIReplace(UMaterialExpressionGIReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionGIReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2c60

UClass * __cdecl UMaterialExpressionGIReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionGIReplace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionGIReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionGIReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionGIReplace,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionGIReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionGIReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionGIReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionGIReplace @ 1472b45f0

void __cdecl UMaterialExpressionGIReplace::StaticRegisterNativesUMaterialExpressionGIReplace(void)

{
  return;
}

