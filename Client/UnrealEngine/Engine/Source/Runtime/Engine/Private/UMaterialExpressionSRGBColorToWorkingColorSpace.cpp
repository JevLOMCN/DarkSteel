// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc7f0

UClass * __cdecl UMaterialExpressionSRGBColorToWorkingColorSpace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSRGBColorToWorkingColorSpace",
               &Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSRGBColorToWorkingColorSpace,
               0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSRGBColorToWorkingColorSpace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSRGBColorToWorkingColorSpace>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.InnerSingleton;
}

// UMaterialExpressionSRGBColorToWorkingColorSpace @ 1472d22a0

UMaterialExpressionSRGBColorToWorkingColorSpace * __thiscall
UMaterialExpressionSRGBColorToWorkingColorSpace::UMaterialExpressionSRGBColorToWorkingColorSpace
          (UMaterialExpressionSRGBColorToWorkingColorSpace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSRGBColorToWorkingColorSpace__6B_;
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

// UMaterialExpressionSRGBColorToWorkingColorSpace @ 1472d22f0

UMaterialExpressionSRGBColorToWorkingColorSpace * __thiscall
UMaterialExpressionSRGBColorToWorkingColorSpace::UMaterialExpressionSRGBColorToWorkingColorSpace
          (UMaterialExpressionSRGBColorToWorkingColorSpace *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSRGBColorToWorkingColorSpace__6B_;
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

// ~UMaterialExpressionSRGBColorToWorkingColorSpace @ 1472d4330

void __thiscall
UMaterialExpressionSRGBColorToWorkingColorSpace::~UMaterialExpressionSRGBColorToWorkingColorSpace
          (UMaterialExpressionSRGBColorToWorkingColorSpace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSRGBColorToWorkingColorSpace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d63f0

UClass * __cdecl UMaterialExpressionSRGBColorToWorkingColorSpace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSRGBColorToWorkingColorSpace",
               &Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSRGBColorToWorkingColorSpace,
               0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSRGBColorToWorkingColorSpace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSRGBColorToWorkingColorSpace>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSRGBColorToWorkingColorSpace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSRGBColorToWorkingColorSpace @ 1472d8800

void __cdecl
UMaterialExpressionSRGBColorToWorkingColorSpace::
StaticRegisterNativesUMaterialExpressionSRGBColorToWorkingColorSpace(void)

{
  return;
}

