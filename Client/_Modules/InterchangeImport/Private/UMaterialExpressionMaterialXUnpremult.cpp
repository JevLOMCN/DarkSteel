// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6acb20

UClass * __cdecl UMaterialExpressionMaterialXUnpremult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXUnpremult.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXUnpremult",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXUnpremult.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXUnpremult,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXUnpremult>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXUnpremult>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXUnpremult.InnerSingleton;
}

// UMaterialExpressionMaterialXUnpremult @ 14e6b91b0

UMaterialExpressionMaterialXUnpremult * __thiscall
UMaterialExpressionMaterialXUnpremult::UMaterialExpressionMaterialXUnpremult
          (UMaterialExpressionMaterialXUnpremult *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXUnpremult__6B_;
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

// UMaterialExpressionMaterialXUnpremult @ 14e6b9200

UMaterialExpressionMaterialXUnpremult * __thiscall
UMaterialExpressionMaterialXUnpremult::UMaterialExpressionMaterialXUnpremult
          (UMaterialExpressionMaterialXUnpremult *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXUnpremult__6B_;
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
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXUnpremult",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXUnpremult::UMaterialExpressionMaterialXUnpremult'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXUnpremult @ 14e6ba000

void __thiscall
UMaterialExpressionMaterialXUnpremult::~UMaterialExpressionMaterialXUnpremult
          (UMaterialExpressionMaterialXUnpremult *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXUnpremult__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6840

UClass * __cdecl UMaterialExpressionMaterialXUnpremult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXUnpremult.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXUnpremult",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXUnpremult.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXUnpremult,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXUnpremult>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXUnpremult>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXUnpremult.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXUnpremult @ 14e6d2530

void __cdecl
UMaterialExpressionMaterialXUnpremult::StaticRegisterNativesUMaterialExpressionMaterialXUnpremult
          (void)

{
  return;
}

