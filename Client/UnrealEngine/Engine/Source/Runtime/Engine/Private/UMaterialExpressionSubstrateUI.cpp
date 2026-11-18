// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f09d30

UClass * __cdecl UMaterialExpressionSubstrateUI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateUI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateUI",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateUI.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateUI,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateUI>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateUI>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateUI.InnerSingleton;
}

// UMaterialExpressionSubstrateUI @ 147f2d4f0

UMaterialExpressionSubstrateUI * __thiscall
UMaterialExpressionSubstrateUI::UMaterialExpressionSubstrateUI
          (UMaterialExpressionSubstrateUI *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUI__6B_;
  (this->Color).OutputIndex = 0;
  (this->Color).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Color).InputName.Number = 0;
  (this->Color).MaskR = 0;
  (this->Color).MaskG = 0;
  (this->Color).MaskB = 0;
  (this->Color).MaskA = 0;
  (this->Color).Expression = (UMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateUI @ 147f2d560

UMaterialExpressionSubstrateUI * __thiscall
UMaterialExpressionSubstrateUI::UMaterialExpressionSubstrateUI
          (UMaterialExpressionSubstrateUI *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUI__6B_;
  (this->Color).OutputIndex = 0;
  (this->Color).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Color).InputName.Number = 0;
  (this->Color).MaskR = 0;
  (this->Color).MaskG = 0;
  (this->Color).MaskB = 0;
  (this->Color).MaskA = 0;
  (this->Color).Expression = (UMaterialExpression *)0x0;
  (this->Opacity).OutputIndex = 0;
  (this->Opacity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Opacity).InputName.Number = 0;
  (this->Opacity).MaskR = 0;
  (this->Opacity).MaskG = 0;
  (this->Opacity).MaskB = 0;
  (this->Opacity).MaskA = 0;
  (this->Opacity).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Extras",L"Substrate Extras");
      atexit(`UMaterialExpressionSubstrateUI::UMaterialExpressionSubstrateUI'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateUI @ 147f2f170

void __thiscall
UMaterialExpressionSubstrateUI::~UMaterialExpressionSubstrateUI
          (UMaterialExpressionSubstrateUI *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f43090

UClass * __cdecl UMaterialExpressionSubstrateUI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateUI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateUI",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateUI.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateUI,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateUI>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateUI>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateUI.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateUI @ 147f52bf0

void __cdecl
UMaterialExpressionSubstrateUI::StaticRegisterNativesUMaterialExpressionSubstrateUI(void)

{
  return;
}

