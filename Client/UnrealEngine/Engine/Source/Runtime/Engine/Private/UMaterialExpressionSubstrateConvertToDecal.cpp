// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f09df0

UClass * __cdecl UMaterialExpressionSubstrateConvertToDecal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertToDecal.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateConvertToDecal",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertToDecal.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionSubstrateConvertToDecal,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateConvertToDecal>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateConvertToDecal>,local_res8
               ,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertToDecal.InnerSingleton;
}

// UMaterialExpressionSubstrateConvertToDecal @ 147f2ab40

UMaterialExpressionSubstrateConvertToDecal * __thiscall
UMaterialExpressionSubstrateConvertToDecal::UMaterialExpressionSubstrateConvertToDecal
          (UMaterialExpressionSubstrateConvertToDecal *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateConvertToDecal__6B_;
  (this->DecalMaterial).OutputIndex = 0;
  (this->DecalMaterial).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DecalMaterial).InputName.Number = 0;
  (this->DecalMaterial).MaskR = 0;
  (this->DecalMaterial).MaskG = 0;
  (this->DecalMaterial).MaskB = 0;
  (this->DecalMaterial).MaskA = 0;
  (this->DecalMaterial).Expression = (UMaterialExpression *)0x0;
  (this->Coverage).OutputIndex = 0;
  (this->Coverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coverage).InputName.Number = 0;
  (this->Coverage).MaskR = 0;
  (this->Coverage).MaskG = 0;
  (this->Coverage).MaskB = 0;
  (this->Coverage).MaskA = 0;
  (this->Coverage).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateConvertToDecal @ 147f2abb0

UMaterialExpressionSubstrateConvertToDecal * __thiscall
UMaterialExpressionSubstrateConvertToDecal::UMaterialExpressionSubstrateConvertToDecal
          (UMaterialExpressionSubstrateConvertToDecal *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateConvertToDecal__6B_;
  (this->DecalMaterial).OutputIndex = 0;
  (this->DecalMaterial).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DecalMaterial).InputName.Number = 0;
  (this->DecalMaterial).MaskR = 0;
  (this->DecalMaterial).MaskG = 0;
  (this->DecalMaterial).MaskB = 0;
  (this->DecalMaterial).MaskA = 0;
  (this->DecalMaterial).Expression = (UMaterialExpression *)0x0;
  (this->Coverage).OutputIndex = 0;
  (this->Coverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coverage).InputName.Number = 0;
  (this->Coverage).MaskR = 0;
  (this->Coverage).MaskG = 0;
  (this->Coverage).MaskB = 0;
  (this->Coverage).MaskA = 0;
  (this->Coverage).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Extras",L"Substrate Extras");
      atexit(`UMaterialExpressionSubstrateConvertToDecal::
             UMaterialExpressionSubstrateConvertToDecal'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateConvertToDecal @ 147f2ef90

void __thiscall
UMaterialExpressionSubstrateConvertToDecal::~UMaterialExpressionSubstrateConvertToDecal
          (UMaterialExpressionSubstrateConvertToDecal *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42550

UClass * __cdecl UMaterialExpressionSubstrateConvertToDecal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertToDecal.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateConvertToDecal",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertToDecal.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionSubstrateConvertToDecal,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateConvertToDecal>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateConvertToDecal>,local_res8
               ,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateConvertToDecal.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateConvertToDecal @ 147f52b00

void __cdecl
UMaterialExpressionSubstrateConvertToDecal::
StaticRegisterNativesUMaterialExpressionSubstrateConvertToDecal(void)

{
  return;
}

