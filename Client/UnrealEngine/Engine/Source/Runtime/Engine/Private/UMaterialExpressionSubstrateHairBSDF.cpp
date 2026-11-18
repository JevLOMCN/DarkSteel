// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147f09970

UClass * __cdecl UMaterialExpressionSubstrateHairBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateHairBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateHairBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateHairBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateHairBSDF,0x1c8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateHairBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateHairBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateHairBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateHairBSDF @ 147f2afc0

UMaterialExpressionSubstrateHairBSDF * __thiscall
UMaterialExpressionSubstrateHairBSDF::UMaterialExpressionSubstrateHairBSDF
          (UMaterialExpressionSubstrateHairBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHairBSDF__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Scatter).OutputIndex = 0;
  (this->Scatter).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Scatter).InputName.Number = 0;
  (this->Scatter).MaskR = 0;
  (this->Scatter).MaskG = 0;
  (this->Scatter).MaskB = 0;
  (this->Scatter).MaskA = 0;
  (this->Scatter).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Backlit).OutputIndex = 0;
  (this->Backlit).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Backlit).InputName.Number = 0;
  (this->Backlit).MaskR = 0;
  (this->Backlit).MaskG = 0;
  (this->Backlit).MaskB = 0;
  (this->Backlit).MaskA = 0;
  (this->Backlit).Expression = (UMaterialExpression *)0x0;
  (this->Tangent).OutputIndex = 0;
  (this->Tangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangent).InputName.Number = 0;
  (this->Tangent).MaskR = 0;
  (this->Tangent).MaskG = 0;
  (this->Tangent).MaskB = 0;
  (this->Tangent).MaskA = 0;
  (this->Tangent).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateHairBSDF @ 147f2b0e0

UMaterialExpressionSubstrateHairBSDF * __thiscall
UMaterialExpressionSubstrateHairBSDF::UMaterialExpressionSubstrateHairBSDF
          (UMaterialExpressionSubstrateHairBSDF *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHairBSDF__6B_;
  (this->BaseColor).OutputIndex = 0;
  (this->BaseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BaseColor).InputName.Number = 0;
  (this->BaseColor).MaskR = 0;
  (this->BaseColor).MaskG = 0;
  (this->BaseColor).MaskB = 0;
  (this->BaseColor).MaskA = 0;
  (this->BaseColor).Expression = (UMaterialExpression *)0x0;
  (this->Scatter).OutputIndex = 0;
  (this->Scatter).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Scatter).InputName.Number = 0;
  (this->Scatter).MaskR = 0;
  (this->Scatter).MaskG = 0;
  (this->Scatter).MaskB = 0;
  (this->Scatter).MaskA = 0;
  (this->Scatter).Expression = (UMaterialExpression *)0x0;
  (this->Specular).OutputIndex = 0;
  (this->Specular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Specular).InputName.Number = 0;
  (this->Specular).MaskR = 0;
  (this->Specular).MaskG = 0;
  (this->Specular).MaskB = 0;
  (this->Specular).MaskA = 0;
  (this->Specular).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->Backlit).OutputIndex = 0;
  (this->Backlit).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Backlit).InputName.Number = 0;
  (this->Backlit).MaskR = 0;
  (this->Backlit).MaskG = 0;
  (this->Backlit).MaskB = 0;
  (this->Backlit).MaskA = 0;
  (this->Backlit).Expression = (UMaterialExpression *)0x0;
  (this->Tangent).OutputIndex = 0;
  (this->Tangent).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Tangent).InputName.Number = 0;
  (this->Tangent).MaskR = 0;
  (this->Tangent).MaskG = 0;
  (this->Tangent).MaskB = 0;
  (this->Tangent).MaskA = 0;
  (this->Tangent).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateHairBSDF::UMaterialExpressionSubstrateHairBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateHairBSDF @ 147f2efd0

void __thiscall
UMaterialExpressionSubstrateHairBSDF::~UMaterialExpressionSubstrateHairBSDF
          (UMaterialExpressionSubstrateHairBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f426d0

UClass * __cdecl UMaterialExpressionSubstrateHairBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateHairBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateHairBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateHairBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateHairBSDF,0x1c8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateHairBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateHairBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateHairBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateHairBSDF @ 147f52b20

void __cdecl
UMaterialExpressionSubstrateHairBSDF::StaticRegisterNativesUMaterialExpressionSubstrateHairBSDF
          (void)

{
  return;
}

// __VTableCtorCaller @ 147f57550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMaterialExpressionSubstrateHairBSDF::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateHairBSDF__6B_;
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

