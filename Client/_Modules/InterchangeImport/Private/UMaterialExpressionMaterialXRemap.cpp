// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6abd80

UClass * __cdecl UMaterialExpressionMaterialXRemap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRemap",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRemap,0x188,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRemap>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRemap>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.InnerSingleton;
}

// UMaterialExpressionMaterialXRemap @ 14e6b85e0

UMaterialExpressionMaterialXRemap * __thiscall
UMaterialExpressionMaterialXRemap::UMaterialExpressionMaterialXRemap
          (UMaterialExpressionMaterialXRemap *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRemap__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->InputLow).OutputIndex = 0;
  (this->InputLow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputLow).InputName.Number = 0;
  (this->InputLow).MaskR = 0;
  (this->InputLow).MaskG = 0;
  (this->InputLow).MaskB = 0;
  (this->InputLow).MaskA = 0;
  (this->InputLow).Expression = (UMaterialExpression *)0x0;
  (this->InputHigh).OutputIndex = 0;
  (this->InputHigh).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputHigh).InputName.Number = 0;
  (this->InputHigh).MaskR = 0;
  (this->InputHigh).MaskG = 0;
  (this->InputHigh).MaskB = 0;
  (this->InputHigh).MaskA = 0;
  (this->InputHigh).Expression = (UMaterialExpression *)0x0;
  (this->TargetLow).OutputIndex = 0;
  (this->TargetLow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TargetLow).InputName.Number = 0;
  (this->TargetLow).MaskR = 0;
  (this->TargetLow).MaskG = 0;
  (this->TargetLow).MaskB = 0;
  (this->TargetLow).MaskA = 0;
  (this->TargetLow).Expression = (UMaterialExpression *)0x0;
  (this->TargetHigh).OutputIndex = 0;
  (this->TargetHigh).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TargetHigh).InputName.Number = 0;
  (this->TargetHigh).MaskR = 0;
  (this->TargetHigh).MaskG = 0;
  (this->TargetHigh).MaskB = 0;
  (this->TargetHigh).MaskA = 0;
  (this->TargetHigh).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXRemap @ 14e6b86c0

UMaterialExpressionMaterialXRemap * __thiscall
UMaterialExpressionMaterialXRemap::UMaterialExpressionMaterialXRemap
          (UMaterialExpressionMaterialXRemap *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRemap__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->InputLow).OutputIndex = 0;
  (this->InputLow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputLow).InputName.Number = 0;
  (this->InputLow).MaskR = 0;
  (this->InputLow).MaskG = 0;
  (this->InputLow).MaskB = 0;
  (this->InputLow).MaskA = 0;
  (this->InputLow).Expression = (UMaterialExpression *)0x0;
  (this->InputHigh).OutputIndex = 0;
  (this->InputHigh).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->InputHigh).InputName.Number = 0;
  (this->InputHigh).MaskR = 0;
  (this->InputHigh).MaskG = 0;
  (this->InputHigh).MaskB = 0;
  (this->InputHigh).MaskA = 0;
  (this->InputHigh).Expression = (UMaterialExpression *)0x0;
  (this->TargetLow).OutputIndex = 0;
  (this->TargetLow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TargetLow).InputName.Number = 0;
  (this->TargetLow).MaskR = 0;
  (this->TargetLow).MaskG = 0;
  (this->TargetLow).MaskB = 0;
  (this->TargetLow).MaskA = 0;
  (this->TargetLow).Expression = (UMaterialExpression *)0x0;
  (this->TargetHigh).OutputIndex = 0;
  (this->TargetHigh).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->TargetHigh).InputName.Number = 0;
  (this->TargetHigh).MaskR = 0;
  (this->TargetHigh).MaskG = 0;
  (this->TargetHigh).MaskB = 0;
  (this->TargetHigh).MaskA = 0;
  (this->TargetHigh).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXRemap",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXRemap::UMaterialExpressionMaterialXRemap'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->InputLowDefault = 0.0;
  this->InputHighDefault = 1.0;
  this->TargetLowDefault = 0.0;
  this->TargetHighDefault = 1.0;
  return this;
}

// ~UMaterialExpressionMaterialXRemap @ 14e6b9f00

void __thiscall
UMaterialExpressionMaterialXRemap::~UMaterialExpressionMaterialXRemap
          (UMaterialExpressionMaterialXRemap *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRemap__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6300

UClass * __cdecl UMaterialExpressionMaterialXRemap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRemap",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRemap,0x188,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRemap>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRemap>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRemap.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXRemap @ 14e6d24c0

void __cdecl
UMaterialExpressionMaterialXRemap::StaticRegisterNativesUMaterialExpressionMaterialXRemap(void)

{
  return;
}

