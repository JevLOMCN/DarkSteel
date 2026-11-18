// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ad260

UClass * __cdecl UMaterialExpressionMaterialXPlace2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXPlace2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXPlace2D",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXPlace2D.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXPlace2D,0x180,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXPlace2D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXPlace2D>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXPlace2D.InnerSingleton;
}

// UMaterialExpressionMaterialXPlace2D @ 14e6b7830

UMaterialExpressionMaterialXPlace2D * __thiscall
UMaterialExpressionMaterialXPlace2D::UMaterialExpressionMaterialXPlace2D
          (UMaterialExpressionMaterialXPlace2D *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXPlace2D__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->Pivot).OutputIndex = 0;
  (this->Pivot).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Pivot).InputName.Number = 0;
  (this->Pivot).MaskR = 0;
  (this->Pivot).MaskG = 0;
  (this->Pivot).MaskB = 0;
  (this->Pivot).MaskA = 0;
  (this->Pivot).Expression = (UMaterialExpression *)0x0;
  (this->Scale).OutputIndex = 0;
  (this->Scale).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Scale).InputName.Number = 0;
  (this->Scale).MaskR = 0;
  (this->Scale).MaskG = 0;
  (this->Scale).MaskB = 0;
  (this->Scale).MaskA = 0;
  (this->Scale).Expression = (UMaterialExpression *)0x0;
  (this->Offset).OutputIndex = 0;
  (this->Offset).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Offset).InputName.Number = 0;
  (this->Offset).MaskR = 0;
  (this->Offset).MaskG = 0;
  (this->Offset).MaskB = 0;
  (this->Offset).MaskA = 0;
  (this->Offset).Expression = (UMaterialExpression *)0x0;
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

// UMaterialExpressionMaterialXPlace2D @ 14e6b7910

UMaterialExpressionMaterialXPlace2D * __thiscall
UMaterialExpressionMaterialXPlace2D::UMaterialExpressionMaterialXPlace2D
          (UMaterialExpressionMaterialXPlace2D *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXPlace2D__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->Pivot).OutputIndex = 0;
  (this->Pivot).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Pivot).InputName.Number = 0;
  (this->Pivot).MaskR = 0;
  (this->Pivot).MaskG = 0;
  (this->Pivot).MaskB = 0;
  (this->Pivot).MaskA = 0;
  (this->Pivot).Expression = (UMaterialExpression *)0x0;
  (this->Scale).OutputIndex = 0;
  (this->Scale).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Scale).InputName.Number = 0;
  (this->Scale).MaskR = 0;
  (this->Scale).MaskG = 0;
  (this->Scale).MaskB = 0;
  (this->Scale).MaskA = 0;
  (this->Scale).Expression = (UMaterialExpression *)0x0;
  (this->Offset).OutputIndex = 0;
  (this->Offset).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Offset).InputName.Number = 0;
  (this->Offset).MaskR = 0;
  (this->Offset).MaskG = 0;
  (this->Offset).MaskB = 0;
  (this->Offset).MaskA = 0;
  (this->Offset).Expression = (UMaterialExpression *)0x0;
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
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXPlace2D",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXPlace2D::UMaterialExpressionMaterialXPlace2D'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXPlace2D @ 14e6b9e20

void __thiscall
UMaterialExpressionMaterialXPlace2D::~UMaterialExpressionMaterialXPlace2D
          (UMaterialExpressionMaterialXPlace2D *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXPlace2D__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c5dc0

UClass * __cdecl UMaterialExpressionMaterialXPlace2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXPlace2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXPlace2D",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXPlace2D.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXPlace2D,0x180,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXPlace2D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXPlace2D>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXPlace2D.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXPlace2D @ 14e6d2450

void __cdecl
UMaterialExpressionMaterialXPlace2D::StaticRegisterNativesUMaterialExpressionMaterialXPlace2D(void)

{
  return;
}

