// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e6abcc0

UClass * __cdecl UMaterialExpressionMaterialXRange::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRange.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRange",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRange.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRange,0x1e0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRange>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRange>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRange.InnerSingleton;
}

// UMaterialExpressionMaterialXRange @ 14e6b82f0

UMaterialExpressionMaterialXRange * __thiscall
UMaterialExpressionMaterialXRange::UMaterialExpressionMaterialXRange
          (UMaterialExpressionMaterialXRange *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRange__6B_;
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
  (this->Gamma).OutputIndex = 0;
  (this->Gamma).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Gamma).InputName.Number = 0;
  (this->Gamma).MaskR = 0;
  (this->Gamma).MaskG = 0;
  (this->Gamma).MaskB = 0;
  (this->Gamma).MaskA = 0;
  (this->Gamma).Expression = (UMaterialExpression *)0x0;
  (this->Clamp).OutputIndex = 0;
  (this->Clamp).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Clamp).InputName.Number = 0;
  (this->Clamp).MaskR = 0;
  (this->Clamp).MaskG = 0;
  (this->Clamp).MaskB = 0;
  (this->Clamp).MaskA = 0;
  (this->Clamp).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXRange @ 14e6b8410

UMaterialExpressionMaterialXRange * __thiscall
UMaterialExpressionMaterialXRange::UMaterialExpressionMaterialXRange
          (UMaterialExpressionMaterialXRange *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRange__6B_;
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
  (this->Gamma).OutputIndex = 0;
  (this->Gamma).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Gamma).InputName.Number = 0;
  (this->Gamma).MaskR = 0;
  (this->Gamma).MaskG = 0;
  (this->Gamma).MaskB = 0;
  (this->Gamma).MaskA = 0;
  (this->Gamma).Expression = (UMaterialExpression *)0x0;
  (this->Clamp).OutputIndex = 0;
  (this->Clamp).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Clamp).InputName.Number = 0;
  (this->Clamp).MaskR = 0;
  (this->Clamp).MaskG = 0;
  (this->Clamp).MaskB = 0;
  (this->Clamp).MaskA = 0;
  (this->Clamp).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXRange",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXRange::UMaterialExpressionMaterialXRange'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->ConstInputLow = 0.0;
  this->ConstInputHigh = 1.0;
  this->ConstTargetLow = 0.0;
  this->ConstTargetHigh = 1.0;
  this->ConstGamma = 1.0;
  this->bConstClamp = false;
  return this;
}

// ~UMaterialExpressionMaterialXRange @ 14e6b9ee0

void __thiscall
UMaterialExpressionMaterialXRange::~UMaterialExpressionMaterialXRange
          (UMaterialExpressionMaterialXRange *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRange__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c6240

UClass * __cdecl UMaterialExpressionMaterialXRange::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXRange.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXRange",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXRange.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXRange,0x1e0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXRange>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXRange>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXRange.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXRange @ 14e6d24b0

void __cdecl
UMaterialExpressionMaterialXRange::StaticRegisterNativesUMaterialExpressionMaterialXRange(void)

{
  return;
}

// __VTableCtorCaller @ 14e6d7de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMaterialExpressionMaterialXRange::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXRange__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionEditorX = 0;
    this[1].MaterialExpressionEditorY = 0;
    this[1].MaterialExpressionGuid.C = 0;
    this[1].MaterialExpressionGuid.D = 0;
    this[1].Material.field0_0x0.DebugPtr = (UMaterial *)0x0;
    this[1].Function.field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
    this[1].Desc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].MenuCategories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MenuCategories.ArrayNum = 0;
    this[1].MenuCategories.ArrayMax = 0;
    this[1].Desc.Data.ArrayNum = 0;
    this[1].Desc.Data.ArrayMax = 0;
    this[1].Outputs.ArrayNum = 0;
    this[1].Outputs.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[1].Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2]._padding_ = 0;
    this[2].MaterialExpressionEditorX = 0;
    this[2].MaterialExpressionEditorY = 0;
    this[2].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[2].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[2]._padding_ = 0;
    this[2].LastErrorText.Data.ArrayNum = 0;
    this[2].LastErrorText.Data.ArrayMax = 0;
    this[2].MaterialExpressionGuid.A = 0;
    this[2].MaterialExpressionGuid.B = 0;
    this[2].MaterialExpressionGuid.C = 0;
    this[2].MaterialExpressionGuid.D = 0;
    this[2].Material.field0_0x0.DebugPtr = (UMaterial *)0x0;
    this[2].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

