// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ac6a0

UClass * __cdecl UMaterialExpressionMaterialXLuminance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXLuminance",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXLuminance,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXLuminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXLuminance>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.InnerSingleton;
}

// UMaterialExpressionMaterialXLuminance @ 14e6b6ae0

/* WARNING: Enum "EMaterialXLuminanceMode": Some values do not have unique names */

UMaterialExpressionMaterialXLuminance * __thiscall
UMaterialExpressionMaterialXLuminance::UMaterialExpressionMaterialXLuminance
          (UMaterialExpressionMaterialXLuminance *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXLuminance__6B_;
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

// UMaterialExpressionMaterialXLuminance @ 14e6b6b30

/* WARNING: Enum "EMaterialXLuminanceMode": Some values do not have unique names */

UMaterialExpressionMaterialXLuminance * __thiscall
UMaterialExpressionMaterialXLuminance::UMaterialExpressionMaterialXLuminance
          (UMaterialExpressionMaterialXLuminance *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXLuminance__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->LuminanceMode = ACEScg;
  pvVar2 = ThreadLocalStoragePointer;
  (this->LuminanceFactors).field0_0x0._s_0.R = 0.2722287;
  (this->LuminanceFactors).field0_0x0._s_0.G = 0.6740818;
  (this->LuminanceFactors).field0_0x0._s_0.B = 0.0536895;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  (this->LuminanceFactors).field0_0x0._s_0.A = 1.0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXLuminance",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXLuminance::UMaterialExpressionMaterialXLuminance'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXLuminance @ 14e6b9d20

/* WARNING: Enum "EMaterialXLuminanceMode": Some values do not have unique names */

void __thiscall
UMaterialExpressionMaterialXLuminance::~UMaterialExpressionMaterialXLuminance
          (UMaterialExpressionMaterialXLuminance *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXLuminance__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c57c0

UClass * __cdecl UMaterialExpressionMaterialXLuminance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXLuminance",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXLuminance,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXLuminance>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXLuminance>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXLuminance.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXLuminance @ 14e6d23d0

void __cdecl
UMaterialExpressionMaterialXLuminance::StaticRegisterNativesUMaterialExpressionMaterialXLuminance
          (void)

{
  return;
}

