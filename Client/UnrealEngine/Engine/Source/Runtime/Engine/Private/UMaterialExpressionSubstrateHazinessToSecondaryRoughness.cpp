// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a770

UClass * __cdecl UMaterialExpressionSubstrateHazinessToSecondaryRoughness::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateHazinessToSecondaryRoughness.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateHazinessToSecondaryRoughness",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateHazinessToSecondaryRoughness.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateHazinessToSecondaryRoughness,0x100,8
               ,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateHazinessToSecondaryRoughness>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateHazinessToSecondaryRoughness>
               ,local_res8,UMaterialExpressionSubstrateUtilityBase::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateHazinessToSecondaryRoughness.
         InnerSingleton;
}

// UMaterialExpressionSubstrateHazinessToSecondaryRoughness @ 147f2b280

UMaterialExpressionSubstrateHazinessToSecondaryRoughness * __thiscall
UMaterialExpressionSubstrateHazinessToSecondaryRoughness::
UMaterialExpressionSubstrateHazinessToSecondaryRoughness
          (UMaterialExpressionSubstrateHazinessToSecondaryRoughness *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHazinessToSecondaryRoughness__6B_;
  (this->BaseRoughness).OutputIndex = 0;
  (this->BaseRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseRoughness).InputName.Number = 0;
  (this->BaseRoughness).MaskR = 0;
  (this->BaseRoughness).MaskG = 0;
  (this->BaseRoughness).MaskB = 0;
  (this->BaseRoughness).MaskA = 0;
  (this->BaseRoughness).Expression = (UMaterialExpression *)0x0;
  (this->Haziness).OutputIndex = 0;
  (this->Haziness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Haziness).InputName.Number = 0;
  (this->Haziness).MaskR = 0;
  (this->Haziness).MaskG = 0;
  (this->Haziness).MaskB = 0;
  (this->Haziness).MaskA = 0;
  (this->Haziness).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateHazinessToSecondaryRoughness @ 147f2b2f0

UMaterialExpressionSubstrateHazinessToSecondaryRoughness * __thiscall
UMaterialExpressionSubstrateHazinessToSecondaryRoughness::
UMaterialExpressionSubstrateHazinessToSecondaryRoughness
          (UMaterialExpressionSubstrateHazinessToSecondaryRoughness *this,
          FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHazinessToSecondaryRoughness__6B_;
  (this->BaseRoughness).OutputIndex = 0;
  (this->BaseRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseRoughness).InputName.Number = 0;
  (this->BaseRoughness).MaskR = 0;
  (this->BaseRoughness).MaskG = 0;
  (this->BaseRoughness).MaskB = 0;
  (this->BaseRoughness).MaskA = 0;
  (this->BaseRoughness).Expression = (UMaterialExpression *)0x0;
  (this->Haziness).OutputIndex = 0;
  (this->Haziness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Haziness).InputName.Number = 0;
  (this->Haziness).MaskR = 0;
  (this->Haziness).MaskG = 0;
  (this->Haziness).MaskB = 0;
  (this->Haziness).MaskA = 0;
  (this->Haziness).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Helpers",L"Substrate Helpers");
      atexit(`UMaterialExpressionSubstrateHazinessToSecondaryRoughness::
             UMaterialExpressionSubstrateHazinessToSecondaryRoughness'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateHazinessToSecondaryRoughness @ 147f2eff0

void __thiscall
UMaterialExpressionSubstrateHazinessToSecondaryRoughness::
~UMaterialExpressionSubstrateHazinessToSecondaryRoughness
          (UMaterialExpressionSubstrateHazinessToSecondaryRoughness *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateUtilityBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42790

UClass * __cdecl
UMaterialExpressionSubstrateHazinessToSecondaryRoughness::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateHazinessToSecondaryRoughness.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateHazinessToSecondaryRoughness",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateHazinessToSecondaryRoughness.
                InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateHazinessToSecondaryRoughness,0x100,8
               ,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateHazinessToSecondaryRoughness>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateHazinessToSecondaryRoughness>
               ,local_res8,UMaterialExpressionSubstrateUtilityBase::StaticClass,UObject::StaticClass
              );
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateHazinessToSecondaryRoughness.
         InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateHazinessToSecondaryRoughness @ 147f52b30

void __cdecl
UMaterialExpressionSubstrateHazinessToSecondaryRoughness::
StaticRegisterNativesUMaterialExpressionSubstrateHazinessToSecondaryRoughness(void)

{
  return;
}

