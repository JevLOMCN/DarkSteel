// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ac350

UClass * __cdecl UMaterialExpressionMaterialXSplitTopBottom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitTopBottom.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXSplitTopBottom",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitTopBottom.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMaterialXSplitTopBottom,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXSplitTopBottom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXSplitTopBottom>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitTopBottom.InnerSingleton;
}

// UMaterialExpressionMaterialXSplitTopBottom @ 14e6b8d60

UMaterialExpressionMaterialXSplitTopBottom * __thiscall
UMaterialExpressionMaterialXSplitTopBottom::UMaterialExpressionMaterialXSplitTopBottom
          (UMaterialExpressionMaterialXSplitTopBottom *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSplitTopBottom__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
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
  (this->Center).OutputIndex = 0;
  (this->Center).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Center).InputName.Number = 0;
  (this->Center).MaskR = 0;
  (this->Center).MaskG = 0;
  (this->Center).MaskB = 0;
  (this->Center).MaskA = 0;
  (this->Center).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXSplitTopBottom @ 14e6b8e20

UMaterialExpressionMaterialXSplitTopBottom * __thiscall
UMaterialExpressionMaterialXSplitTopBottom::UMaterialExpressionMaterialXSplitTopBottom
          (UMaterialExpressionMaterialXSplitTopBottom *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSplitTopBottom__6B_;
  (this->Coordinates).OutputIndex = 0;
  (this->Coordinates).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates).InputName.Number = 0;
  (this->Coordinates).MaskR = 0;
  (this->Coordinates).MaskG = 0;
  (this->Coordinates).MaskB = 0;
  (this->Coordinates).MaskA = 0;
  (this->Coordinates).Expression = (UMaterialExpression *)0x0;
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
  (this->Center).OutputIndex = 0;
  (this->Center).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Center).InputName.Number = 0;
  (this->Center).MaskR = 0;
  (this->Center).MaskG = 0;
  (this->Center).MaskB = 0;
  (this->Center).MaskA = 0;
  (this->Center).Expression = (UMaterialExpression *)0x0;
  this->ConstCoordinate = '\0';
  pvVar1 = ThreadLocalStoragePointer;
  this->ConstCenter = 0.5;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXSplitLeftRight",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXSplitTopBottom::
             UMaterialExpressionMaterialXSplitTopBottom'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXSplitTopBottom @ 14e6b9f80

void __thiscall
UMaterialExpressionMaterialXSplitTopBottom::~UMaterialExpressionMaterialXSplitTopBottom
          (UMaterialExpressionMaterialXSplitTopBottom *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSplitTopBottom__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6600

UClass * __cdecl UMaterialExpressionMaterialXSplitTopBottom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitTopBottom.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXSplitTopBottom",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitTopBottom.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMaterialXSplitTopBottom,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXSplitTopBottom>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXSplitTopBottom>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitTopBottom.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXSplitTopBottom @ 14e6d2500

void __cdecl
UMaterialExpressionMaterialXSplitTopBottom::
StaticRegisterNativesUMaterialExpressionMaterialXSplitTopBottom(void)

{
  return;
}

