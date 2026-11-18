// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0e8d0

UClass * __cdecl UMaterialExpressionSubstrateUnlitBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateUnlitBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateUnlitBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateUnlitBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateUnlitBSDF,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateUnlitBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateUnlitBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateUnlitBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateUnlitBSDF @ 147f2d650

UMaterialExpressionSubstrateUnlitBSDF * __thiscall
UMaterialExpressionSubstrateUnlitBSDF::UMaterialExpressionSubstrateUnlitBSDF
          (UMaterialExpressionSubstrateUnlitBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUnlitBSDF__6B_;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateUnlitBSDF @ 147f2d6f0

UMaterialExpressionSubstrateUnlitBSDF * __thiscall
UMaterialExpressionSubstrateUnlitBSDF::UMaterialExpressionSubstrateUnlitBSDF
          (UMaterialExpressionSubstrateUnlitBSDF *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUnlitBSDF__6B_;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->TransmittanceColor).OutputIndex = 0;
  (this->TransmittanceColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TransmittanceColor).InputName.Number = 0;
  (this->TransmittanceColor).MaskR = 0;
  (this->TransmittanceColor).MaskG = 0;
  (this->TransmittanceColor).MaskB = 0;
  (this->TransmittanceColor).MaskA = 0;
  (this->TransmittanceColor).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateUnlitBSDF::UMaterialExpressionSubstrateUnlitBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateUnlitBSDF @ 147f2f190

void __thiscall
UMaterialExpressionSubstrateUnlitBSDF::~UMaterialExpressionSubstrateUnlitBSDF
          (UMaterialExpressionSubstrateUnlitBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f43150

UClass * __cdecl UMaterialExpressionSubstrateUnlitBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateUnlitBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateUnlitBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateUnlitBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateUnlitBSDF,0x128,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateUnlitBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateUnlitBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateUnlitBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateUnlitBSDF @ 147f52c00

void __cdecl
UMaterialExpressionSubstrateUnlitBSDF::StaticRegisterNativesUMaterialExpressionSubstrateUnlitBSDF
          (void)

{
  return;
}

