// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a240

UClass * __cdecl UMaterialExpressionSubstrateWeight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateWeight.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateWeight",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateWeight.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateWeight,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateWeight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateWeight>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateWeight.InnerSingleton;
}

// UMaterialExpressionSubstrateWeight @ 147f2dc10

UMaterialExpressionSubstrateWeight * __thiscall
UMaterialExpressionSubstrateWeight::UMaterialExpressionSubstrateWeight
          (UMaterialExpressionSubstrateWeight *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateWeight__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->Weight).OutputIndex = 0;
  (this->Weight).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Weight).InputName.Number = 0;
  (this->Weight).MaskR = 0;
  (this->Weight).MaskG = 0;
  (this->Weight).MaskB = 0;
  (this->Weight).MaskA = 0;
  (this->Weight).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateWeight @ 147f2dc80

UMaterialExpressionSubstrateWeight * __thiscall
UMaterialExpressionSubstrateWeight::UMaterialExpressionSubstrateWeight
          (UMaterialExpressionSubstrateWeight *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateWeight__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->Weight).OutputIndex = 0;
  (this->Weight).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Weight).InputName.Number = 0;
  (this->Weight).MaskR = 0;
  (this->Weight).MaskG = 0;
  (this->Weight).MaskB = 0;
  (this->Weight).MaskA = 0;
  (this->Weight).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Ops",L"Substrate Operators");
      atexit(`UMaterialExpressionSubstrateWeight::UMaterialExpressionSubstrateWeight'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateWeight @ 147f2f210

void __thiscall
UMaterialExpressionSubstrateWeight::~UMaterialExpressionSubstrateWeight
          (UMaterialExpressionSubstrateWeight *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f43450

UClass * __cdecl UMaterialExpressionSubstrateWeight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateWeight.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateWeight",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateWeight.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateWeight,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateWeight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateWeight>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateWeight.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateWeight @ 147f52c40

void __cdecl
UMaterialExpressionSubstrateWeight::StaticRegisterNativesUMaterialExpressionSubstrateWeight(void)

{
  return;
}

