// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ab900

UClass * __cdecl UMaterialExpressionMaterialXDisjointOver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXDisjointOver.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXDisjointOver",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXDisjointOver.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXDisjointOver,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXDisjointOver>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXDisjointOver>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXDisjointOver.InnerSingleton;
}

// UMaterialExpressionMaterialXDisjointOver @ 14e6b62d0

UMaterialExpressionMaterialXDisjointOver * __thiscall
UMaterialExpressionMaterialXDisjointOver::UMaterialExpressionMaterialXDisjointOver
          (UMaterialExpressionMaterialXDisjointOver *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstAlpha = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXDisjointOver__6B_;
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
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXDisjointOver @ 14e6b6370

UMaterialExpressionMaterialXDisjointOver * __thiscall
UMaterialExpressionMaterialXDisjointOver::UMaterialExpressionMaterialXDisjointOver
          (UMaterialExpressionMaterialXDisjointOver *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXDisjointOver__6B_;
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
  (this->Alpha).OutputIndex = 0;
  (this->Alpha).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Alpha).InputName.Number = 0;
  (this->Alpha).MaskR = 0;
  (this->Alpha).MaskG = 0;
  (this->Alpha).MaskB = 0;
  (this->Alpha).MaskA = 0;
  (this->Alpha).Expression = (UMaterialExpression *)0x0;
  pvVar1 = ThreadLocalStoragePointer;
  this->ConstAlpha = 1.0;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXDisjointOver",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXDisjointOver::UMaterialExpressionMaterialXDisjointOver'::
             __l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXDisjointOver @ 14e6b9ca0

void __thiscall
UMaterialExpressionMaterialXDisjointOver::~UMaterialExpressionMaterialXDisjointOver
          (UMaterialExpressionMaterialXDisjointOver *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXDisjointOver__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c54c0

UClass * __cdecl UMaterialExpressionMaterialXDisjointOver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXDisjointOver.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXDisjointOver",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXDisjointOver.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXDisjointOver,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXDisjointOver>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXDisjointOver>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXDisjointOver.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXDisjointOver @ 14e6d2390

void __cdecl
UMaterialExpressionMaterialXDisjointOver::
StaticRegisterNativesUMaterialExpressionMaterialXDisjointOver(void)

{
  return;
}

