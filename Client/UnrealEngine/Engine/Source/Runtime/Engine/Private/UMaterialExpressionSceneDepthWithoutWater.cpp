// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc330

UClass * __cdecl UMaterialExpressionSceneDepthWithoutWater::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneDepthWithoutWater",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneDepthWithoutWater,0xf8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneDepthWithoutWater>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneDepthWithoutWater>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.InnerSingleton;
}

// UMaterialExpressionSceneDepthWithoutWater @ 1472d2790

UMaterialExpressionSceneDepthWithoutWater * __thiscall
UMaterialExpressionSceneDepthWithoutWater::UMaterialExpressionSceneDepthWithoutWater
          (UMaterialExpressionSceneDepthWithoutWater *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->FallbackDepth = 1e+06;
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneDepthWithoutWater__6B_;
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

// ~UMaterialExpressionSceneDepthWithoutWater @ 1472d4450

void __thiscall
UMaterialExpressionSceneDepthWithoutWater::~UMaterialExpressionSceneDepthWithoutWater
          (UMaterialExpressionSceneDepthWithoutWater *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneDepthWithoutWater__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d69f0

UClass * __cdecl UMaterialExpressionSceneDepthWithoutWater::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneDepthWithoutWater",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneDepthWithoutWater,0xf8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneDepthWithoutWater>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneDepthWithoutWater>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSceneDepthWithoutWater @ 1472d8880

void __cdecl
UMaterialExpressionSceneDepthWithoutWater::
StaticRegisterNativesUMaterialExpressionSceneDepthWithoutWater(void)

{
  return;
}

// UMaterialExpressionSceneDepthWithoutWater @ 148afe660

UMaterialExpressionSceneDepthWithoutWater * __thiscall
UMaterialExpressionSceneDepthWithoutWater::UMaterialExpressionSceneDepthWithoutWater
          (UMaterialExpressionSceneDepthWithoutWater *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->FallbackDepth = 1e+06;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneDepthWithoutWater__6B_;
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
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->ConstInput).field0_0x0._s_0.X = 0.0;
  (this->ConstInput).field0_0x0._s_0.Y = 0.0;
  return this;
}

