// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b8520

UClass * __cdecl UMaterialExpressionNaniteReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNaniteReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNaniteReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNaniteReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNaniteReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.InnerSingleton;
}

// UMaterialExpressionNaniteReplace @ 1472c02c0

UMaterialExpressionNaniteReplace * __thiscall
UMaterialExpressionNaniteReplace::UMaterialExpressionNaniteReplace
          (UMaterialExpressionNaniteReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNaniteReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Nanite).OutputIndex = 0;
  (this->Nanite).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Nanite).InputName.Number = 0;
  (this->Nanite).MaskR = 0;
  (this->Nanite).MaskG = 0;
  (this->Nanite).MaskB = 0;
  (this->Nanite).MaskA = 0;
  (this->Nanite).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionNaniteReplace @ 1472c0330

UMaterialExpressionNaniteReplace * __thiscall
UMaterialExpressionNaniteReplace::UMaterialExpressionNaniteReplace
          (UMaterialExpressionNaniteReplace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNaniteReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Nanite).OutputIndex = 0;
  (this->Nanite).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Nanite).InputName.Number = 0;
  (this->Nanite).MaskR = 0;
  (this->Nanite).MaskG = 0;
  (this->Nanite).MaskB = 0;
  (this->Nanite).MaskA = 0;
  (this->Nanite).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionNaniteReplace @ 1472c20d0

void __thiscall
UMaterialExpressionNaniteReplace::~UMaterialExpressionNaniteReplace
          (UMaterialExpressionNaniteReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionNaniteReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4ab0

UClass * __cdecl UMaterialExpressionNaniteReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNaniteReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNaniteReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNaniteReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNaniteReplace>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNaniteReplace @ 1472c74b0

void __cdecl
UMaterialExpressionNaniteReplace::StaticRegisterNativesUMaterialExpressionNaniteReplace(void)

{
  return;
}

