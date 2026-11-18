// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6ac250

UClass * __cdecl UMaterialExpressionMaterialXSplitLeftRight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitLeftRight.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXSplitLeftRight",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitLeftRight.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMaterialXSplitLeftRight,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXSplitLeftRight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXSplitLeftRight>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitLeftRight.InnerSingleton;
}

// UMaterialExpressionMaterialXSplitLeftRight @ 14e6b8b60

UMaterialExpressionMaterialXSplitLeftRight * __thiscall
UMaterialExpressionMaterialXSplitLeftRight::UMaterialExpressionMaterialXSplitLeftRight
          (UMaterialExpressionMaterialXSplitLeftRight *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSplitLeftRight__6B_;
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

// UMaterialExpressionMaterialXSplitLeftRight @ 14e6b8c20

UMaterialExpressionMaterialXSplitLeftRight * __thiscall
UMaterialExpressionMaterialXSplitLeftRight::UMaterialExpressionMaterialXSplitLeftRight
          (UMaterialExpressionMaterialXSplitLeftRight *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSplitLeftRight__6B_;
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
      atexit(`UMaterialExpressionMaterialXSplitLeftRight::
             UMaterialExpressionMaterialXSplitLeftRight'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXSplitLeftRight @ 14e6b9f60

void __thiscall
UMaterialExpressionMaterialXSplitLeftRight::~UMaterialExpressionMaterialXSplitLeftRight
          (UMaterialExpressionMaterialXSplitLeftRight *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXSplitLeftRight__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6540

UClass * __cdecl UMaterialExpressionMaterialXSplitLeftRight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitLeftRight.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXSplitLeftRight",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitLeftRight.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMaterialXSplitLeftRight,0x158,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXSplitLeftRight>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXSplitLeftRight>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXSplitLeftRight.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXSplitLeftRight @ 14e6d24f0

void __cdecl
UMaterialExpressionMaterialXSplitLeftRight::
StaticRegisterNativesUMaterialExpressionMaterialXSplitLeftRight(void)

{
  return;
}

