// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294420

UClass * __cdecl UMaterialExpressionBlendMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBlendMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes,0x140,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBlendMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBlendMaterialAttributes>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.InnerSingleton;
}

// UMaterialExpressionBlendMaterialAttributes @ 14729bfb0

UMaterialExpressionBlendMaterialAttributes * __thiscall
UMaterialExpressionBlendMaterialAttributes::UMaterialExpressionBlendMaterialAttributes
          (UMaterialExpressionBlendMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBlendMaterialAttributes__6B_;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A).PropertyConnectedMask = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B).PropertyConnectedMask = 0;
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  this->PixelAttributeBlendType = '\0';
  this->VertexAttributeBlendType = '\0';
  return this;
}

// ~UMaterialExpressionBlendMaterialAttributes @ 14729d6b0

void __thiscall
UMaterialExpressionBlendMaterialAttributes::~UMaterialExpressionBlendMaterialAttributes
          (UMaterialExpressionBlendMaterialAttributes *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBlendMaterialAttributes__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729f750

UClass * __cdecl UMaterialExpressionBlendMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBlendMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes,0x140,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBlendMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBlendMaterialAttributes>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributes.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes @ 1472a1c00

void __cdecl
UMaterialExpressionBlendMaterialAttributes::
StaticRegisterNativesUMaterialExpressionBlendMaterialAttributes(void)

{
  return;
}

// UMaterialExpressionBlendMaterialAttributes @ 148afa9c0

UMaterialExpressionBlendMaterialAttributes * __thiscall
UMaterialExpressionBlendMaterialAttributes::UMaterialExpressionBlendMaterialAttributes
          (UMaterialExpressionBlendMaterialAttributes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBlendMaterialAttributes__6B_;
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
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A)._padding_ = 0;
  (this->A).PropertyConnectedMask = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B)._padding_ = 0;
  (this->B).PropertyConnectedMask = 0;
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  this->PixelAttributeBlendType = '\0';
  this->VertexAttributeBlendType = '\0';
  return this;
}

