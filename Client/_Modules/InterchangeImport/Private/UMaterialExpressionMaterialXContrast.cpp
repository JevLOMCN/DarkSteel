// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ab260

UClass * __cdecl UMaterialExpressionMaterialXContrast::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXContrast.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXContrast",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXContrast.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXContrast,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXContrast>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXContrast>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXContrast.InnerSingleton;
}

// UMaterialExpressionMaterialXContrast @ 14e6b5f40

UMaterialExpressionMaterialXContrast * __thiscall
UMaterialExpressionMaterialXContrast::UMaterialExpressionMaterialXContrast
          (UMaterialExpressionMaterialXContrast *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstAmount = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXContrast__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Amount).OutputIndex = 0;
  (this->Amount).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Amount).InputName.Number = 0;
  (this->Amount).MaskR = 0;
  (this->Amount).MaskG = 0;
  (this->Amount).MaskB = 0;
  (this->Amount).MaskA = 0;
  (this->Amount).Expression = (UMaterialExpression *)0x0;
  (this->Pivot).OutputIndex = 0;
  (this->Pivot).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Pivot).InputName.Number = 0;
  (this->Pivot).MaskR = 0;
  (this->Pivot).MaskG = 0;
  (this->Pivot).MaskB = 0;
  (this->Pivot).MaskA = 0;
  (this->Pivot).Expression = (UMaterialExpression *)0x0;
  this->ConstPivot = 0.5;
  return this;
}

// UMaterialExpressionMaterialXContrast @ 14e6b5ff0

UMaterialExpressionMaterialXContrast * __thiscall
UMaterialExpressionMaterialXContrast::UMaterialExpressionMaterialXContrast
          (UMaterialExpressionMaterialXContrast *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXContrast__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Amount).OutputIndex = 0;
  (this->Amount).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Amount).InputName.Number = 0;
  (this->Amount).MaskR = 0;
  (this->Amount).MaskG = 0;
  (this->Amount).MaskB = 0;
  (this->Amount).MaskA = 0;
  (this->Amount).Expression = (UMaterialExpression *)0x0;
  (this->Pivot).OutputIndex = 0;
  (this->Pivot).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Pivot).InputName.Number = 0;
  (this->Pivot).MaskR = 0;
  (this->Pivot).MaskG = 0;
  (this->Pivot).MaskB = 0;
  (this->Pivot).MaskA = 0;
  (this->Pivot).Expression = (UMaterialExpression *)0x0;
  pvVar1 = ThreadLocalStoragePointer;
  this->ConstAmount = 1.0;
  this->ConstPivot = 0.5;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXContrast",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXContrast::UMaterialExpressionMaterialXContrast'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXContrast @ 14e6b9c60

void __thiscall
UMaterialExpressionMaterialXContrast::~UMaterialExpressionMaterialXContrast
          (UMaterialExpressionMaterialXContrast *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXContrast__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c5340

UClass * __cdecl UMaterialExpressionMaterialXContrast::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXContrast.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXContrast",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXContrast.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXContrast,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXContrast>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXContrast>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXContrast.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXContrast @ 14e6d2370

void __cdecl
UMaterialExpressionMaterialXContrast::StaticRegisterNativesUMaterialExpressionMaterialXContrast
          (void)

{
  return;
}

