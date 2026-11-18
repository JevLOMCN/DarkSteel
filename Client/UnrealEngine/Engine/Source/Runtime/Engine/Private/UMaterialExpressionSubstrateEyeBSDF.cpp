// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147f09a30

UClass * __cdecl UMaterialExpressionSubstrateEyeBSDF::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateEyeBSDF.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateEyeBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateEyeBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateEyeBSDF,0x1f8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateEyeBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateEyeBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateEyeBSDF.InnerSingleton;
}

// UMaterialExpressionSubstrateEyeBSDF @ 147f2aca0

UMaterialExpressionSubstrateEyeBSDF * __thiscall
UMaterialExpressionSubstrateEyeBSDF::UMaterialExpressionSubstrateEyeBSDF
          (UMaterialExpressionSubstrateEyeBSDF *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateEyeBSDF__6B_;
  (this->DiffuseColor).OutputIndex = 0;
  (this->DiffuseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiffuseColor).InputName.Number = 0;
  (this->DiffuseColor).MaskR = 0;
  (this->DiffuseColor).MaskG = 0;
  (this->DiffuseColor).MaskB = 0;
  (this->DiffuseColor).MaskA = 0;
  (this->DiffuseColor).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->CorneaNormal).OutputIndex = 0;
  (this->CorneaNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CorneaNormal).InputName.Number = 0;
  (this->CorneaNormal).MaskR = 0;
  (this->CorneaNormal).MaskG = 0;
  (this->CorneaNormal).MaskB = 0;
  (this->CorneaNormal).MaskA = 0;
  (this->CorneaNormal).Expression = (UMaterialExpression *)0x0;
  (this->IrisNormal).OutputIndex = 0;
  (this->IrisNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisNormal).InputName.Number = 0;
  (this->IrisNormal).MaskR = 0;
  (this->IrisNormal).MaskG = 0;
  (this->IrisNormal).MaskB = 0;
  (this->IrisNormal).MaskA = 0;
  (this->IrisNormal).Expression = (UMaterialExpression *)0x0;
  (this->IrisPlaneNormal).OutputIndex = 0;
  (this->IrisPlaneNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisPlaneNormal).InputName.Number = 0;
  (this->IrisPlaneNormal).MaskR = 0;
  (this->IrisPlaneNormal).MaskG = 0;
  (this->IrisPlaneNormal).MaskB = 0;
  (this->IrisPlaneNormal).MaskA = 0;
  (this->IrisPlaneNormal).Expression = (UMaterialExpression *)0x0;
  (this->IrisMask).OutputIndex = 0;
  (this->IrisMask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisMask).InputName.Number = 0;
  (this->IrisMask).MaskR = 0;
  (this->IrisMask).MaskG = 0;
  (this->IrisMask).MaskB = 0;
  (this->IrisMask).MaskA = 0;
  (this->IrisMask).Expression = (UMaterialExpression *)0x0;
  (this->IrisDistance).OutputIndex = 0;
  (this->IrisDistance).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisDistance).InputName.Number = 0;
  (this->IrisDistance).MaskR = 0;
  (this->IrisDistance).MaskG = 0;
  (this->IrisDistance).MaskB = 0;
  (this->IrisDistance).MaskA = 0;
  (this->IrisDistance).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  return this;
}

// UMaterialExpressionSubstrateEyeBSDF @ 147f2adf0

UMaterialExpressionSubstrateEyeBSDF * __thiscall
UMaterialExpressionSubstrateEyeBSDF::UMaterialExpressionSubstrateEyeBSDF
          (UMaterialExpressionSubstrateEyeBSDF *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateEyeBSDF__6B_;
  (this->DiffuseColor).OutputIndex = 0;
  (this->DiffuseColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->DiffuseColor).InputName.Number = 0;
  (this->DiffuseColor).MaskR = 0;
  (this->DiffuseColor).MaskG = 0;
  (this->DiffuseColor).MaskB = 0;
  (this->DiffuseColor).MaskA = 0;
  (this->DiffuseColor).Expression = (UMaterialExpression *)0x0;
  (this->Roughness).OutputIndex = 0;
  (this->Roughness).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Roughness).InputName.Number = 0;
  (this->Roughness).MaskR = 0;
  (this->Roughness).MaskG = 0;
  (this->Roughness).MaskB = 0;
  (this->Roughness).MaskA = 0;
  (this->Roughness).Expression = (UMaterialExpression *)0x0;
  (this->CorneaNormal).OutputIndex = 0;
  (this->CorneaNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CorneaNormal).InputName.Number = 0;
  (this->CorneaNormal).MaskR = 0;
  (this->CorneaNormal).MaskG = 0;
  (this->CorneaNormal).MaskB = 0;
  (this->CorneaNormal).MaskA = 0;
  (this->CorneaNormal).Expression = (UMaterialExpression *)0x0;
  (this->IrisNormal).OutputIndex = 0;
  (this->IrisNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisNormal).InputName.Number = 0;
  (this->IrisNormal).MaskR = 0;
  (this->IrisNormal).MaskG = 0;
  (this->IrisNormal).MaskB = 0;
  (this->IrisNormal).MaskA = 0;
  (this->IrisNormal).Expression = (UMaterialExpression *)0x0;
  (this->IrisPlaneNormal).OutputIndex = 0;
  (this->IrisPlaneNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisPlaneNormal).InputName.Number = 0;
  (this->IrisPlaneNormal).MaskR = 0;
  (this->IrisPlaneNormal).MaskG = 0;
  (this->IrisPlaneNormal).MaskB = 0;
  (this->IrisPlaneNormal).MaskA = 0;
  (this->IrisPlaneNormal).Expression = (UMaterialExpression *)0x0;
  (this->IrisMask).OutputIndex = 0;
  (this->IrisMask).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisMask).InputName.Number = 0;
  (this->IrisMask).MaskR = 0;
  (this->IrisMask).MaskG = 0;
  (this->IrisMask).MaskB = 0;
  (this->IrisMask).MaskA = 0;
  (this->IrisMask).Expression = (UMaterialExpression *)0x0;
  (this->IrisDistance).OutputIndex = 0;
  (this->IrisDistance).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IrisDistance).InputName.Number = 0;
  (this->IrisDistance).MaskR = 0;
  (this->IrisDistance).MaskG = 0;
  (this->IrisDistance).MaskB = 0;
  (this->IrisDistance).MaskA = 0;
  (this->IrisDistance).Expression = (UMaterialExpression *)0x0;
  (this->EmissiveColor).OutputIndex = 0;
  (this->EmissiveColor).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->EmissiveColor).InputName.Number = 0;
  (this->EmissiveColor).MaskR = 0;
  (this->EmissiveColor).MaskG = 0;
  (this->EmissiveColor).MaskB = 0;
  (this->EmissiveColor).MaskA = 0;
  (this->EmissiveColor).Expression = (UMaterialExpression *)0x0;
  (this->SubsurfaceProfile).field0_0x0.DebugPtr = (USubsurfaceProfile *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Substrate,L"MaterialExpressionSubstrate",
                 L"Substrate BSDFs",L"Substrate BSDFs");
      atexit(`UMaterialExpressionSubstrateEyeBSDF::UMaterialExpressionSubstrateEyeBSDF'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionSubstrateEyeBSDF @ 147f2efb0

void __thiscall
UMaterialExpressionSubstrateEyeBSDF::~UMaterialExpressionSubstrateEyeBSDF
          (UMaterialExpressionSubstrateEyeBSDF *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateBSDF__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147f42610

UClass * __cdecl UMaterialExpressionSubstrateEyeBSDF::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSubstrateEyeBSDF.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSubstrateEyeBSDF",
               &Z_Registration_Info_UClass_UMaterialExpressionSubstrateEyeBSDF.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSubstrateEyeBSDF,0x1f8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSubstrateEyeBSDF>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSubstrateEyeBSDF>,local_res8,
               UMaterialExpressionSubstrateBSDF::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSubstrateEyeBSDF.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSubstrateEyeBSDF @ 147f52b10

void __cdecl
UMaterialExpressionSubstrateEyeBSDF::StaticRegisterNativesUMaterialExpressionSubstrateEyeBSDF(void)

{
  return;
}

// __VTableCtorCaller @ 147f57380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMaterialExpressionSubstrateEyeBSDF::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&___7UMaterialExpressionSubstrateEyeBSDF__6B_;
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
    this[2].MenuCategories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

