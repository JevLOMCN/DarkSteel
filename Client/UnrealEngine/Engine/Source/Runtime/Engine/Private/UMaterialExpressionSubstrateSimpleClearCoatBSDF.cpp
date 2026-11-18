// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147f0e750

UClass * __cdecl UMaterialExpressionSubstrateSimpleClearCoatBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSimpleClearCoatBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSimpleClearCoatBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSimpleClearCoatBSDF.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateSimpleClearCoatBSDF,
               0x1f0,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSimpleClearCoatBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSimpleClearCoatBSDF>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSimpleClearCoatBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateSimpleClearCoatBSDF @ 147f2c260

UMaterialExpressionSubstrateSimpleClearCoatBSDF * __thiscall
UMaterialExpressionSubstrateSimpleClearCoatBSDF::UMaterialExpressionSubstrateSimpleClearCoatBSDF
          (UMaterialExpressionSubstrateSimpleClearCoatBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSimpleClearCoatBSDF__6B_;
  (this->DiffuseAlbedo).OutputIndex = 0;
  (this->DiffuseAlbedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiffuseAlbedo).InputName.Number = 0;
  (this->DiffuseAlbedo).MaskR = 0;
  (this->DiffuseAlbedo).MaskG = 0;
  (this->DiffuseAlbedo).MaskB = 0;
  (this->DiffuseAlbedo).MaskA = 0;
  (this->DiffuseAlbedo).Expression = (UMaterialExpression *)0x0;
  (this->F0).OutputIndex = 0;
  (this->F0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F0).InputName.Number = 0;
  (this->F0).MaskR = 0;
  (this->F0).MaskG = 0;
  (this->F0).MaskB = 0;
  (this->F0).MaskA = 0;
  (this->F0).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatCoverage).OutputIndex = 0;
  (this->ClearCoatCoverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatCoverage).InputName.Number = 0;
  (this->ClearCoatCoverage).MaskR = 0;
  (this->ClearCoatCoverage).MaskG = 0;
  (this->ClearCoatCoverage).MaskB = 0;
  (this->ClearCoatCoverage).MaskA = 0;
  (this->ClearCoatCoverage).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatRoughness).OutputIndex = 0;
  (this->ClearCoatRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).InputName.Number = 0;
  (this->ClearCoatRoughness).MaskR = 0;
  (this->ClearCoatRoughness).MaskG = 0;
  (this->ClearCoatRoughness).MaskB = 0;
  (this->ClearCoatRoughness).MaskA = 0;
  (this->ClearCoatRoughness).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->BottomNormal).OutputIndex = 0;
  (this->BottomNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BottomNormal).InputName.Number = 0;
  (this->BottomNormal).MaskR = 0;
  (this->BottomNormal).MaskG = 0;
  (this->BottomNormal).MaskB = 0;
  (this->BottomNormal).MaskA = 0;
  (this->BottomNormal).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionSubstrateSimpleClearCoatBSDF @ 147f2c3b0

UMaterialExpressionSubstrateSimpleClearCoatBSDF * __thiscall
UMaterialExpressionSubstrateSimpleClearCoatBSDF::UMaterialExpressionSubstrateSimpleClearCoatBSDF
          (UMaterialExpressionSubstrateSimpleClearCoatBSDF *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSimpleClearCoatBSDF__6B_;
  (this->DiffuseAlbedo).OutputIndex = 0;
  (this->DiffuseAlbedo).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiffuseAlbedo).InputName.Number = 0;
  (this->DiffuseAlbedo).MaskR = 0;
  (this->DiffuseAlbedo).MaskG = 0;
  (this->DiffuseAlbedo).MaskB = 0;
  (this->DiffuseAlbedo).MaskA = 0;
  (this->DiffuseAlbedo).Expression = (UMaterialExpression *)0x0;
  (this->F0).OutputIndex = 0;
  (this->F0).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->F0).InputName.Number = 0;
  (this->F0).MaskR = 0;
  (this->F0).MaskG = 0;
  (this->F0).MaskB = 0;
  (this->F0).MaskA = 0;
  (this->F0).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatCoverage).OutputIndex = 0;
  (this->ClearCoatCoverage).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatCoverage).InputName.Number = 0;
  (this->ClearCoatCoverage).MaskR = 0;
  (this->ClearCoatCoverage).MaskG = 0;
  (this->ClearCoatCoverage).MaskB = 0;
  (this->ClearCoatCoverage).MaskA = 0;
  (this->ClearCoatCoverage).Expression = (UMaterialExpression *)0x0;
  (this->ClearCoatRoughness).OutputIndex = 0;
  (this->ClearCoatRoughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->ClearCoatRoughness).InputName.Number = 0;
  (this->ClearCoatRoughness).MaskR = 0;
  (this->ClearCoatRoughness).MaskG = 0;
  (this->ClearCoatRoughness).MaskB = 0;
  (this->ClearCoatRoughness).MaskA = 0;
  (this->ClearCoatRoughness).Expression = (UMaterialExpression *)0x0;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->BottomNormal).OutputIndex = 0;
  (this->BottomNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->BottomNormal).InputName.Number = 0;
  (this->BottomNormal).MaskR = 0;
  (this->BottomNormal).MaskG = 0;
  (this->BottomNormal).MaskB = 0;
  (this->BottomNormal).MaskA = 0;
  (this->BottomNormal).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateSimpleClearCoatBSDF::
             UMaterialExpressionSubstrateSimpleClearCoatBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateSimpleClearCoatBSDF @ 147f2f0d0

void __thiscall
UMaterialExpressionSubstrateSimpleClearCoatBSDF::~UMaterialExpressionSubstrateSimpleClearCoatBSDF
          (UMaterialExpressionSubstrateSimpleClearCoatBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42cd0

UClass * __cdecl UMaterialExpressionSubstrateSimpleClearCoatBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateSimpleClearCoatBSDF.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateSimpleClearCoatBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateSimpleClearCoatBSDF.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSubstrateSimpleClearCoatBSDF,
               0x1f0,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateSimpleClearCoatBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateSimpleClearCoatBSDF>,
               local_res8,UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateSimpleClearCoatBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateSimpleClearCoatBSDF @ 147f52ba0

void __cdecl
UMaterialExpressionSubstrateSimpleClearCoatBSDF::
StaticRegisterNativesUMaterialExpressionSubstrateSimpleClearCoatBSDF(void)

{
  return;
}

// __VTableCtorCaller @ 147f57700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
UMaterialExpressionSubstrateSimpleClearCoatBSDF::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateSimpleClearCoatBSDF__6B_;
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
    this[2].Desc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].Desc.Data.ArrayNum = 0;
    this[2].Desc.Data.ArrayMax = 0;
    *(undefined8 *)&this[2].field_0x80 = 0;
    *(undefined8 *)&this[2].field_0x88 = 0;
    this[2].Function.field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

