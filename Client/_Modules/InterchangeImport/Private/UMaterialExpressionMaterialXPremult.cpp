// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ab160

UClass * __cdecl UMaterialExpressionMaterialXPremult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXPremult.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXPremult",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXPremult.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXPremult,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXPremult>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXPremult>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXPremult.InnerSingleton;
}

// UMaterialExpressionMaterialXPremult @ 14e6b7c30

UMaterialExpressionMaterialXPremult * __thiscall
UMaterialExpressionMaterialXPremult::UMaterialExpressionMaterialXPremult
          (UMaterialExpressionMaterialXPremult *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXPremult__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXPremult @ 14e6b7c80

UMaterialExpressionMaterialXPremult * __thiscall
UMaterialExpressionMaterialXPremult::UMaterialExpressionMaterialXPremult
          (UMaterialExpressionMaterialXPremult *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXPremult__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXPremult",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXPremult::UMaterialExpressionMaterialXPremult'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXPremult @ 14e6b9e60

void __thiscall
UMaterialExpressionMaterialXPremult::~UMaterialExpressionMaterialXPremult
          (UMaterialExpressionMaterialXPremult *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXPremult__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c5f40

UClass * __cdecl UMaterialExpressionMaterialXPremult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXPremult.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXPremult",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXPremult.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXPremult,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXPremult>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXPremult>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXPremult.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXPremult @ 14e6d2470

void __cdecl
UMaterialExpressionMaterialXPremult::StaticRegisterNativesUMaterialExpressionMaterialXPremult(void)

{
  return;
}

