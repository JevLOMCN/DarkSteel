// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a300

UClass * __cdecl UMaterialExpressionSubstrateSelect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSelect.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSelect",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSelect.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateSelect,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSelect>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSelect>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSelect.InnerSingleton;
}

// UMaterialExpressionSubstrateSelect @ 147f2b9d0

UMaterialExpressionSubstrateSelect * __thiscall
UMaterialExpressionSubstrateSelect::UMaterialExpressionSubstrateSelect
          (UMaterialExpressionSubstrateSelect *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->bUseParameterBlending = true;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSelect__6B_;
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
  (this->SelectValue).OutputIndex = 0;
  (this->SelectValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SelectValue).InputName.Number = 0;
  (this->SelectValue).MaskR = 0;
  (this->SelectValue).MaskG = 0;
  (this->SelectValue).MaskB = 0;
  (this->SelectValue).MaskA = 0;
  (this->SelectValue).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateSelect @ 147f2ba70

UMaterialExpressionSubstrateSelect * __thiscall
UMaterialExpressionSubstrateSelect::UMaterialExpressionSubstrateSelect
          (UMaterialExpressionSubstrateSelect *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSelect__6B_;
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
  (this->SelectValue).OutputIndex = 0;
  (this->SelectValue).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->SelectValue).InputName.Number = 0;
  (this->SelectValue).MaskR = 0;
  (this->SelectValue).MaskG = 0;
  (this->SelectValue).MaskB = 0;
  (this->SelectValue).MaskA = 0;
  (this->SelectValue).Expression = (UMaterialExpression *)0x0;
  pvVar1 = ThreadLocalStoragePointer;
  this->Threshold = 0.5;
  this->bUseParameterBlending = true;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Ops",L"Substrate Operators");
      atexit(`UMaterialExpressionSubstrateSelect::UMaterialExpressionSubstrateSelect'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateSelect @ 147f2f090

void __thiscall
UMaterialExpressionSubstrateSelect::~UMaterialExpressionSubstrateSelect
          (UMaterialExpressionSubstrateSelect *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42b50

UClass * __cdecl UMaterialExpressionSubstrateSelect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSelect.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSelect",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSelect.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateSelect,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSelect>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSelect>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSelect.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateSelect @ 147f52b80

void __cdecl
UMaterialExpressionSubstrateSelect::StaticRegisterNativesUMaterialExpressionSubstrateSelect(void)

{
  return;
}

