// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ad360

UClass * __cdecl UMaterialExpressionMaterialXRotate2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRotate2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRotate2D",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRotate2D.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRotate2D,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRotate2D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRotate2D>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRotate2D.InnerSingleton;
}

// UMaterialExpressionMaterialXRotate2D @ 14e6b8830

UMaterialExpressionMaterialXRotate2D * __thiscall
UMaterialExpressionMaterialXRotate2D::UMaterialExpressionMaterialXRotate2D
          (UMaterialExpressionMaterialXRotate2D *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRotate2D__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->RotationAngle).OutputIndex = 0;
  (this->RotationAngle).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RotationAngle).InputName.Number = 0;
  (this->RotationAngle).MaskR = 0;
  (this->RotationAngle).MaskG = 0;
  (this->RotationAngle).MaskB = 0;
  (this->RotationAngle).MaskA = 0;
  (this->RotationAngle).Expression = (UMaterialExpression *)0x0;
  this->ConstRotationAngle = 0.0;
  return this;
}

// UMaterialExpressionMaterialXRotate2D @ 14e6b88b0

UMaterialExpressionMaterialXRotate2D * __thiscall
UMaterialExpressionMaterialXRotate2D::UMaterialExpressionMaterialXRotate2D
          (UMaterialExpressionMaterialXRotate2D *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRotate2D__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->RotationAngle).OutputIndex = 0;
  (this->RotationAngle).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RotationAngle).InputName.Number = 0;
  (this->RotationAngle).MaskR = 0;
  (this->RotationAngle).MaskG = 0;
  (this->RotationAngle).MaskB = 0;
  (this->RotationAngle).MaskA = 0;
  (this->RotationAngle).Expression = (UMaterialExpression *)0x0;
  this->ConstRotationAngle = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXRotate2D",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXRotate2D::UMaterialExpressionMaterialXRotate2D'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXRotate2D @ 14e6b9f20

void __thiscall
UMaterialExpressionMaterialXRotate2D::~UMaterialExpressionMaterialXRotate2D
          (UMaterialExpressionMaterialXRotate2D *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRotate2D__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c63c0

UClass * __cdecl UMaterialExpressionMaterialXRotate2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRotate2D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRotate2D",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRotate2D.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRotate2D,0x108,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRotate2D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRotate2D>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRotate2D.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXRotate2D @ 14e6d24d0

void __cdecl
UMaterialExpressionMaterialXRotate2D::StaticRegisterNativesUMaterialExpressionMaterialXRotate2D
          (void)

{
  return;
}

