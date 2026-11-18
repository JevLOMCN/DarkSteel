// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b9cd0

UClass * __cdecl UMaterialExpressionPostVolumeUserFlagTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPostVolumeUserFlagTest",
               &Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPostVolumeUserFlagTest,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPostVolumeUserFlagTest>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPostVolumeUserFlagTest>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.InnerSingleton;
}

// UMaterialExpressionPostVolumeUserFlagTest @ 1472c12e0

UMaterialExpressionPostVolumeUserFlagTest * __thiscall
UMaterialExpressionPostVolumeUserFlagTest::UMaterialExpressionPostVolumeUserFlagTest
          (UMaterialExpressionPostVolumeUserFlagTest *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPostVolumeUserFlagTest__6B_;
  (this->BitIndex).OutputIndex = 0;
  (this->BitIndex).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BitIndex).InputName.Number = 0;
  (this->BitIndex).MaskR = 0;
  (this->BitIndex).MaskG = 0;
  (this->BitIndex).MaskB = 0;
  (this->BitIndex).MaskA = 0;
  (this->BitIndex).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPostVolumeUserFlagTest @ 1472c2590

void __thiscall
UMaterialExpressionPostVolumeUserFlagTest::~UMaterialExpressionPostVolumeUserFlagTest
          (UMaterialExpressionPostVolumeUserFlagTest *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPostVolumeUserFlagTest__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c65b0

UClass * __cdecl UMaterialExpressionPostVolumeUserFlagTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPostVolumeUserFlagTest",
               &Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPostVolumeUserFlagTest,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPostVolumeUserFlagTest>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPostVolumeUserFlagTest>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPostVolumeUserFlagTest.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPostVolumeUserFlagTest @ 1472c76f0

void __cdecl
UMaterialExpressionPostVolumeUserFlagTest::
StaticRegisterNativesUMaterialExpressionPostVolumeUserFlagTest(void)

{
  return;
}

// UMaterialExpressionPostVolumeUserFlagTest @ 148afdb20

UMaterialExpressionPostVolumeUserFlagTest * __thiscall
UMaterialExpressionPostVolumeUserFlagTest::UMaterialExpressionPostVolumeUserFlagTest
          (UMaterialExpressionPostVolumeUserFlagTest *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPostVolumeUserFlagTest__6B_;
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
  (this->BitIndex).OutputIndex = 0;
  (this->BitIndex).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BitIndex).InputName.Number = 0;
  (this->BitIndex).MaskR = 0;
  (this->BitIndex).MaskG = 0;
  (this->BitIndex).MaskB = 0;
  (this->BitIndex).MaskA = 0;
  (this->BitIndex).Expression = (UMaterialExpression *)0x0;
  return this;
}

