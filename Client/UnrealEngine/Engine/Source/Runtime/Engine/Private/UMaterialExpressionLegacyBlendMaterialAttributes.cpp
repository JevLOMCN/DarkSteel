// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472945e0

UClass * __cdecl UMaterialExpressionLegacyBlendMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLegacyBlendMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLegacyBlendMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionLegacyBlendMaterialAttributes.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionLegacyBlendMaterialAttributes
               ,0x1e8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLegacyBlendMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLegacyBlendMaterialAttributes>,
               local_res8,UMaterialExpressionBlendMaterialAttributes::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLegacyBlendMaterialAttributes.InnerSingleton;
}

// UMaterialExpressionLegacyBlendMaterialAttributes @ 14729d590

UMaterialExpressionLegacyBlendMaterialAttributes * __thiscall
UMaterialExpressionLegacyBlendMaterialAttributes::UMaterialExpressionLegacyBlendMaterialAttributes
          (UMaterialExpressionLegacyBlendMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpressionBlendMaterialAttributes::UMaterialExpressionBlendMaterialAttributes
            ((UMaterialExpressionBlendMaterialAttributes *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionLegacyBlendMaterialAttributes__6B_;
  (this->VertexAttribute_UseA).OutputIndex = 0;
  (this->VertexAttribute_UseA).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VertexAttribute_UseA).InputName.Number = 0;
  (this->VertexAttribute_UseA).MaskR = 0;
  (this->VertexAttribute_UseA).MaskG = 0;
  (this->VertexAttribute_UseA).MaskB = 0;
  (this->VertexAttribute_UseA).MaskA = 0;
  (this->VertexAttribute_UseA).Expression = (UMaterialExpression *)0x0;
  (this->VertexAttribute_UseB).OutputIndex = 0;
  (this->VertexAttribute_UseB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VertexAttribute_UseB).InputName.Number = 0;
  (this->VertexAttribute_UseB).MaskR = 0;
  (this->VertexAttribute_UseB).MaskG = 0;
  (this->VertexAttribute_UseB).MaskB = 0;
  (this->VertexAttribute_UseB).MaskA = 0;
  (this->VertexAttribute_UseB).Expression = (UMaterialExpression *)0x0;
  (this->PixelAttribute_UseA).OutputIndex = 0;
  (this->PixelAttribute_UseA).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelAttribute_UseA).InputName.Number = 0;
  (this->PixelAttribute_UseA).MaskR = 0;
  (this->PixelAttribute_UseA).MaskG = 0;
  (this->PixelAttribute_UseA).MaskB = 0;
  (this->PixelAttribute_UseA).MaskA = 0;
  (this->PixelAttribute_UseA).Expression = (UMaterialExpression *)0x0;
  (this->PixelAttribute_UseB).OutputIndex = 0;
  (this->PixelAttribute_UseB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelAttribute_UseB).InputName.Number = 0;
  (this->PixelAttribute_UseB).MaskR = 0;
  (this->PixelAttribute_UseB).MaskG = 0;
  (this->PixelAttribute_UseB).MaskB = 0;
  (this->PixelAttribute_UseB).MaskA = 0;
  (this->PixelAttribute_UseB).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionLegacyBlendMaterialAttributes @ 14729dd90

void __thiscall
UMaterialExpressionLegacyBlendMaterialAttributes::~UMaterialExpressionLegacyBlendMaterialAttributes
          (UMaterialExpressionLegacyBlendMaterialAttributes *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBlendMaterialAttributes__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1910

UClass * __cdecl UMaterialExpressionLegacyBlendMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLegacyBlendMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionLegacyBlendMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionLegacyBlendMaterialAttributes.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionLegacyBlendMaterialAttributes
               ,0x1e8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLegacyBlendMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLegacyBlendMaterialAttributes>,
               local_res8,UMaterialExpressionBlendMaterialAttributes::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLegacyBlendMaterialAttributes.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionLegacyBlendMaterialAttributes @ 1472a1f00

void __cdecl
UMaterialExpressionLegacyBlendMaterialAttributes::
StaticRegisterNativesUMaterialExpressionLegacyBlendMaterialAttributes(void)

{
  return;
}

// UMaterialExpressionLegacyBlendMaterialAttributes @ 148afc8d0

UMaterialExpressionLegacyBlendMaterialAttributes * __thiscall
UMaterialExpressionLegacyBlendMaterialAttributes::UMaterialExpressionLegacyBlendMaterialAttributes
          (UMaterialExpressionLegacyBlendMaterialAttributes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
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
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  (this->VertexAttribute_UseA).OutputIndex = 0;
  (this->VertexAttribute_UseA).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VertexAttribute_UseA).InputName.Number = 0;
  (this->VertexAttribute_UseA).MaskR = 0;
  (this->VertexAttribute_UseA).MaskG = 0;
  (this->VertexAttribute_UseA).MaskB = 0;
  (this->VertexAttribute_UseA).MaskA = 0;
  (this->VertexAttribute_UseA).Expression = (UMaterialExpression *)0x0;
  (this->VertexAttribute_UseB).OutputIndex = 0;
  (this->VertexAttribute_UseB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->VertexAttribute_UseB).InputName.Number = 0;
  (this->VertexAttribute_UseB).MaskR = 0;
  (this->VertexAttribute_UseB).MaskG = 0;
  (this->VertexAttribute_UseB).MaskB = 0;
  (this->VertexAttribute_UseB).MaskA = 0;
  (this->VertexAttribute_UseB).Expression = (UMaterialExpression *)0x0;
  (this->PixelAttribute_UseA).OutputIndex = 0;
  (this->PixelAttribute_UseA).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelAttribute_UseA).InputName.Number = 0;
  (this->PixelAttribute_UseA).MaskR = 0;
  (this->PixelAttribute_UseA).MaskG = 0;
  (this->PixelAttribute_UseA).MaskB = 0;
  (this->PixelAttribute_UseA).MaskA = 0;
  (this->PixelAttribute_UseA).Expression = (UMaterialExpression *)0x0;
  (this->PixelAttribute_UseB).OutputIndex = 0;
  (this->PixelAttribute_UseB).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PixelAttribute_UseB).InputName.Number = 0;
  (this->PixelAttribute_UseB).MaskR = 0;
  (this->PixelAttribute_UseB).MaskG = 0;
  (this->PixelAttribute_UseB).MaskB = 0;
  (this->PixelAttribute_UseB).MaskA = 0;
  (this->PixelAttribute_UseB).Expression = (UMaterialExpression *)0x0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffff3f;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10;
  this->_padding_ = (longlong)&___7UMaterialExpressionLegacyBlendMaterialAttributes__6B_;
  return this;
}

