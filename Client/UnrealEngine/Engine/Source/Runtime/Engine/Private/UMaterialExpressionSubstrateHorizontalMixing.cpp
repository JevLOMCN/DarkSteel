// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f09f70

UClass * __cdecl UMaterialExpressionSubstrateHorizontalMixing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateHorizontalMixing.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateHorizontalMixing",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateHorizontalMixing.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateHorizontalMixing,
               0x130,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateHorizontalMixing>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateHorizontalMixing>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateHorizontalMixing.InnerSingleton;
}

// UMaterialExpressionSubstrateHorizontalMixing @ 147f2b3e0

UMaterialExpressionSubstrateHorizontalMixing * __thiscall
UMaterialExpressionSubstrateHorizontalMixing::UMaterialExpressionSubstrateHorizontalMixing
          (UMaterialExpressionSubstrateHorizontalMixing *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHorizontalMixing__6B_;
  (this->Background).OutputIndex = 0;
  (this->Background).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Background).InputName.Number = 0;
  (this->Background).MaskR = 0;
  (this->Background).MaskG = 0;
  (this->Background).MaskB = 0;
  (this->Background).MaskA = 0;
  (this->Background).Expression = (UMaterialExpression *)0x0;
  (this->Foreground).OutputIndex = 0;
  (this->Foreground).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Foreground).InputName.Number = 0;
  (this->Foreground).MaskR = 0;
  (this->Foreground).MaskG = 0;
  (this->Foreground).MaskB = 0;
  (this->Foreground).MaskA = 0;
  (this->Foreground).Expression = (UMaterialExpression *)0x0;
  (this->Mix).OutputIndex = 0;
  (this->Mix).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mix).InputName.Number = 0;
  (this->Mix).MaskR = 0;
  (this->Mix).MaskG = 0;
  (this->Mix).MaskB = 0;
  (this->Mix).MaskA = 0;
  (this->Mix).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateHorizontalMixing @ 147f2b480

UMaterialExpressionSubstrateHorizontalMixing * __thiscall
UMaterialExpressionSubstrateHorizontalMixing::UMaterialExpressionSubstrateHorizontalMixing
          (UMaterialExpressionSubstrateHorizontalMixing *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->bUseParameterBlending = 0;
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHorizontalMixing__6B_;
  (this->Background).OutputIndex = 0;
  (this->Background).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Background).InputName.Number = 0;
  (this->Background).MaskR = 0;
  (this->Background).MaskG = 0;
  (this->Background).MaskB = 0;
  (this->Background).MaskA = 0;
  (this->Background).Expression = (UMaterialExpression *)0x0;
  (this->Foreground).OutputIndex = 0;
  (this->Foreground).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Foreground).InputName.Number = 0;
  (this->Foreground).MaskR = 0;
  (this->Foreground).MaskG = 0;
  (this->Foreground).MaskB = 0;
  (this->Foreground).MaskA = 0;
  (this->Foreground).Expression = (UMaterialExpression *)0x0;
  (this->Mix).OutputIndex = 0;
  (this->Mix).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Mix).InputName.Number = 0;
  (this->Mix).MaskR = 0;
  (this->Mix).MaskG = 0;
  (this->Mix).MaskB = 0;
  (this->Mix).MaskA = 0;
  (this->Mix).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Ops",L"Substrate Operators");
      atexit(`UMaterialExpressionSubstrateHorizontalMixing::
             UMaterialExpressionSubstrateHorizontalMixing'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateHorizontalMixing @ 147f2f010

void __thiscall
UMaterialExpressionSubstrateHorizontalMixing::~UMaterialExpressionSubstrateHorizontalMixing
          (UMaterialExpressionSubstrateHorizontalMixing *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42850

UClass * __cdecl UMaterialExpressionSubstrateHorizontalMixing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateHorizontalMixing.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateHorizontalMixing",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateHorizontalMixing.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateHorizontalMixing,
               0x130,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateHorizontalMixing>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateHorizontalMixing>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateHorizontalMixing.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateHorizontalMixing @ 147f52b40

void __cdecl
UMaterialExpressionSubstrateHorizontalMixing::
StaticRegisterNativesUMaterialExpressionSubstrateHorizontalMixing(void)

{
  return;
}

