// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cdd80

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureReplace,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureReplace>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.InnerSingleton;
}

// UMaterialExpressionRuntimeVirtualTextureReplace @ 1472d2070

UMaterialExpressionRuntimeVirtualTextureReplace * __thiscall
UMaterialExpressionRuntimeVirtualTextureReplace::UMaterialExpressionRuntimeVirtualTextureReplace
          (UMaterialExpressionRuntimeVirtualTextureReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->VirtualTextureOutput).OutputIndex = 0;
  (this->VirtualTextureOutput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VirtualTextureOutput).InputName.Number = 0;
  (this->VirtualTextureOutput).MaskR = 0;
  (this->VirtualTextureOutput).MaskG = 0;
  (this->VirtualTextureOutput).MaskB = 0;
  (this->VirtualTextureOutput).MaskA = 0;
  (this->VirtualTextureOutput).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionRuntimeVirtualTextureReplace @ 1472d20e0

UMaterialExpressionRuntimeVirtualTextureReplace * __thiscall
UMaterialExpressionRuntimeVirtualTextureReplace::UMaterialExpressionRuntimeVirtualTextureReplace
          (UMaterialExpressionRuntimeVirtualTextureReplace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->VirtualTextureOutput).OutputIndex = 0;
  (this->VirtualTextureOutput).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VirtualTextureOutput).InputName.Number = 0;
  (this->VirtualTextureOutput).MaskR = 0;
  (this->VirtualTextureOutput).MaskG = 0;
  (this->VirtualTextureOutput).MaskB = 0;
  (this->VirtualTextureOutput).MaskA = 0;
  (this->VirtualTextureOutput).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionRuntimeVirtualTextureReplace @ 1472d42d0

void __thiscall
UMaterialExpressionRuntimeVirtualTextureReplace::~UMaterialExpressionRuntimeVirtualTextureReplace
          (UMaterialExpressionRuntimeVirtualTextureReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRuntimeVirtualTextureReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d61b0

UClass * __cdecl UMaterialExpressionRuntimeVirtualTextureReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionRuntimeVirtualTextureReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureReplace,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionRuntimeVirtualTextureReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionRuntimeVirtualTextureReplace>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureReplace @ 1472d87d0

void __cdecl
UMaterialExpressionRuntimeVirtualTextureReplace::
StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureReplace(void)

{
  return;
}

