// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f0a0c0

UClass * __cdecl UMaterialExpressionSubstrateVerticalLayering::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateVerticalLayering.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateVerticalLayering",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateVerticalLayering.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateVerticalLayering,
               0x130,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateVerticalLayering>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateVerticalLayering>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateVerticalLayering.InnerSingleton;
}

// UMaterialExpressionSubstrateVerticalLayering @ 147f2d860

UMaterialExpressionSubstrateVerticalLayering * __thiscall
UMaterialExpressionSubstrateVerticalLayering::UMaterialExpressionSubstrateVerticalLayering
          (UMaterialExpressionSubstrateVerticalLayering *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateVerticalLayering__6B_;
  (this->Top).OutputIndex = 0;
  (this->Top).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Top).InputName.Number = 0;
  (this->Top).MaskR = 0;
  (this->Top).MaskG = 0;
  (this->Top).MaskB = 0;
  (this->Top).MaskA = 0;
  (this->Top).Expression = (UMaterialExpression *)0x0;
  (this->Base).OutputIndex = 0;
  (this->Base).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Base).InputName.Number = 0;
  (this->Base).MaskR = 0;
  (this->Base).MaskG = 0;
  (this->Base).MaskB = 0;
  (this->Base).MaskA = 0;
  (this->Base).Expression = (UMaterialExpression *)0x0;
  (this->Thickness).OutputIndex = 0;
  (this->Thickness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Thickness).InputName.Number = 0;
  (this->Thickness).MaskR = 0;
  (this->Thickness).MaskG = 0;
  (this->Thickness).MaskB = 0;
  (this->Thickness).MaskA = 0;
  (this->Thickness).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateVerticalLayering @ 147f2d900

UMaterialExpressionSubstrateVerticalLayering * __thiscall
UMaterialExpressionSubstrateVerticalLayering::UMaterialExpressionSubstrateVerticalLayering
          (UMaterialExpressionSubstrateVerticalLayering *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->bUseParameterBlending = 0;
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateVerticalLayering__6B_;
  (this->Top).OutputIndex = 0;
  (this->Top).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Top).InputName.Number = 0;
  (this->Top).MaskR = 0;
  (this->Top).MaskG = 0;
  (this->Top).MaskB = 0;
  (this->Top).MaskA = 0;
  (this->Top).Expression = (UMaterialExpression *)0x0;
  (this->Base).OutputIndex = 0;
  (this->Base).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Base).InputName.Number = 0;
  (this->Base).MaskR = 0;
  (this->Base).MaskG = 0;
  (this->Base).MaskB = 0;
  (this->Base).MaskA = 0;
  (this->Base).Expression = (UMaterialExpression *)0x0;
  (this->Thickness).OutputIndex = 0;
  (this->Thickness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Thickness).InputName.Number = 0;
  (this->Thickness).MaskR = 0;
  (this->Thickness).MaskG = 0;
  (this->Thickness).MaskB = 0;
  (this->Thickness).MaskA = 0;
  (this->Thickness).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate Ops",L"Substrate Operators");
      atexit(`UMaterialExpressionSubstrateVerticalLayering::
             UMaterialExpressionSubstrateVerticalLayering'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateVerticalLayering @ 147f2f1d0

void __thiscall
UMaterialExpressionSubstrateVerticalLayering::~UMaterialExpressionSubstrateVerticalLayering
          (UMaterialExpressionSubstrateVerticalLayering *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f432d0

UClass * __cdecl UMaterialExpressionSubstrateVerticalLayering::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateVerticalLayering.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateVerticalLayering",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateVerticalLayering.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateVerticalLayering,
               0x130,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateVerticalLayering>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateVerticalLayering>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateVerticalLayering.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateVerticalLayering @ 147f52c20

void __cdecl
UMaterialExpressionSubstrateVerticalLayering::
StaticRegisterNativesUMaterialExpressionSubstrateVerticalLayering(void)

{
  return;
}

