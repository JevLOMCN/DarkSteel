// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6aba00

UClass * __cdecl UMaterialExpressionMaterialXRampTopBottom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRampTopBottom.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRampTopBottom",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRampTopBottom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRampTopBottom,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRampTopBottom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRampTopBottom>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRampTopBottom.InnerSingleton;
}

// UMaterialExpressionMaterialXRampTopBottom @ 14e6b8140

UMaterialExpressionMaterialXRampTopBottom * __thiscall
UMaterialExpressionMaterialXRampTopBottom::UMaterialExpressionMaterialXRampTopBottom
          (UMaterialExpressionMaterialXRampTopBottom *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRampTopBottom__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXRampTopBottom @ 14e6b81e0

UMaterialExpressionMaterialXRampTopBottom * __thiscall
UMaterialExpressionMaterialXRampTopBottom::UMaterialExpressionMaterialXRampTopBottom
          (UMaterialExpressionMaterialXRampTopBottom *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRampTopBottom__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXRampLeftRight",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXRampTopBottom::UMaterialExpressionMaterialXRampTopBottom'
             ::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXRampTopBottom @ 14e6b9ec0

void __thiscall
UMaterialExpressionMaterialXRampTopBottom::~UMaterialExpressionMaterialXRampTopBottom
          (UMaterialExpressionMaterialXRampTopBottom *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRampTopBottom__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6180

UClass * __cdecl UMaterialExpressionMaterialXRampTopBottom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRampTopBottom.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRampTopBottom",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRampTopBottom.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRampTopBottom,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRampTopBottom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRampTopBottom>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRampTopBottom.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXRampTopBottom @ 14e6d24a0

void __cdecl
UMaterialExpressionMaterialXRampTopBottom::
StaticRegisterNativesUMaterialExpressionMaterialXRampTopBottom(void)

{
  return;
}

