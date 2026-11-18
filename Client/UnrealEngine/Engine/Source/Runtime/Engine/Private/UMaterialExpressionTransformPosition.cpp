// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472db370

UClass * __cdecl UMaterialExpressionTransformPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTransformPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTransformPosition,0x140,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTransformPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTransformPosition>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.InnerSingleton;
}

// UMaterialExpressionTransformPosition @ 1472e2730

UMaterialExpressionTransformPosition * __thiscall
UMaterialExpressionTransformPosition::UMaterialExpressionTransformPosition
          (UMaterialExpressionTransformPosition *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstPeriodicWorldTileSize = 32.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTransformPosition__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->TransformSourceType = '\0';
  this->TransformType = '\0';
  (this->PeriodicWorldTileSize).OutputIndex = 0;
  (this->PeriodicWorldTileSize).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PeriodicWorldTileSize).InputName.Number = 0;
  (this->PeriodicWorldTileSize).MaskR = 0;
  (this->PeriodicWorldTileSize).MaskG = 0;
  (this->PeriodicWorldTileSize).MaskB = 0;
  (this->PeriodicWorldTileSize).MaskA = 0;
  (this->PeriodicWorldTileSize).Expression = (UMaterialExpression *)0x0;
  (this->FirstPersonInterpolationAlpha).OutputIndex = 0;
  (this->FirstPersonInterpolationAlpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FirstPersonInterpolationAlpha).InputName.Number = 0;
  (this->FirstPersonInterpolationAlpha).MaskR = 0;
  (this->FirstPersonInterpolationAlpha).MaskG = 0;
  (this->FirstPersonInterpolationAlpha).MaskB = 0;
  (this->FirstPersonInterpolationAlpha).MaskA = 0;
  (this->FirstPersonInterpolationAlpha).Expression = (UMaterialExpression *)0x0;
  this->bUsesPeriodicWorldPosition = false;
  this->bUsesFirstPersonInterpolationAlpha = false;
  this->ConstFirstPersonInterpolationAlpha = 1.0;
  return this;
}

// UMaterialExpressionTransformPosition @ 1472e27f0

UMaterialExpressionTransformPosition * __thiscall
UMaterialExpressionTransformPosition::UMaterialExpressionTransformPosition
          (UMaterialExpressionTransformPosition *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstPeriodicWorldTileSize = 32.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTransformPosition__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->TransformSourceType = '\0';
  this->TransformType = '\0';
  (this->PeriodicWorldTileSize).OutputIndex = 0;
  (this->PeriodicWorldTileSize).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PeriodicWorldTileSize).InputName.Number = 0;
  (this->PeriodicWorldTileSize).MaskR = 0;
  (this->PeriodicWorldTileSize).MaskG = 0;
  (this->PeriodicWorldTileSize).MaskB = 0;
  (this->PeriodicWorldTileSize).MaskA = 0;
  (this->PeriodicWorldTileSize).Expression = (UMaterialExpression *)0x0;
  (this->FirstPersonInterpolationAlpha).OutputIndex = 0;
  (this->FirstPersonInterpolationAlpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FirstPersonInterpolationAlpha).InputName.Number = 0;
  (this->FirstPersonInterpolationAlpha).MaskR = 0;
  (this->FirstPersonInterpolationAlpha).MaskG = 0;
  (this->FirstPersonInterpolationAlpha).MaskB = 0;
  (this->FirstPersonInterpolationAlpha).MaskA = 0;
  (this->FirstPersonInterpolationAlpha).Expression = (UMaterialExpression *)0x0;
  this->bUsesPeriodicWorldPosition = false;
  this->bUsesFirstPersonInterpolationAlpha = false;
  this->ConstFirstPersonInterpolationAlpha = 1.0;
  return this;
}

// ~UMaterialExpressionTransformPosition @ 1472e36a0

void __thiscall
UMaterialExpressionTransformPosition::~UMaterialExpressionTransformPosition
          (UMaterialExpressionTransformPosition *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTransformPosition__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e64e0

UClass * __cdecl UMaterialExpressionTransformPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTransformPosition",
               &Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTransformPosition,0x140,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTransformPosition>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTransformPosition>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTransformPosition.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTransformPosition @ 1472e7920

void __cdecl
UMaterialExpressionTransformPosition::StaticRegisterNativesUMaterialExpressionTransformPosition
          (void)

{
  return;
}

