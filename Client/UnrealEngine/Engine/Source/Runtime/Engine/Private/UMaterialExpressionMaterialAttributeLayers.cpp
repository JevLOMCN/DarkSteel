// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472a6cc0

UClass * __cdecl UMaterialExpressionMaterialAttributeLayers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialAttributeLayers",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers,0x238,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialAttributeLayers>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialAttributeLayers>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.InnerSingleton;
}

// UMaterialExpressionMaterialAttributeLayers @ 1472aee70

UMaterialExpressionMaterialAttributeLayers * __thiscall
UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers
          (UMaterialExpressionMaterialAttributeLayers *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialAttributeLayers__6B_;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input).PropertyConnectedMask = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers).EditorOnly.LayerStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerStates.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerStates.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.LayerNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerNames.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerNames.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.LayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerGuids.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerGuids.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.LayerLinkStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerLinkStates.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerLinkStates.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
  (this->DefaultLayers).LayerStates_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerStates_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerStates_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).LayerNames_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerNames_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerNames_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).LayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerGuids_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerGuids_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).LayerLinkStates_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerLinkStates_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerLinkStates_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
  (this->LayerCallers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerCallers).ArrayNum = 0;
  (this->LayerCallers).ArrayMax = 0;
  this->NumActiveLayerCallers = 0;
  (this->BlendCallers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendCallers).ArrayNum = 0;
  (this->BlendCallers).ArrayMax = 0;
  this->NumActiveBlendCallers = 0;
  (this->OutputCaller).field0_0x0.DebugPtr = (UMaterialExpressionMaterialFunctionCall *)0x0;
  this->bIsLayerGraphBuilt = false;
  this->ParamLayers = (FMaterialLayersFunctions *)0x0;
  return this;
}

// ~UMaterialExpressionMaterialAttributeLayers @ 1472afc70

void __thiscall
UMaterialExpressionMaterialAttributeLayers::~UMaterialExpressionMaterialAttributeLayers
          (UMaterialExpressionMaterialAttributeLayers *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialAttributeLayers__6B_;
  pFVar1 = (this->BlendCallers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LayerCallers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMaterialLayersFunctions::~FMaterialLayersFunctions(&this->DefaultLayers);
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b3ce0

UClass * __cdecl UMaterialExpressionMaterialAttributeLayers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMaterialAttributeLayers",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers,0x238,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialAttributeLayers>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialAttributeLayers>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers @ 1472b4750

void __cdecl
UMaterialExpressionMaterialAttributeLayers::
StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers(void)

{
  return;
}

// __VTableCtorCaller @ 1472b6e40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
UMaterialExpressionMaterialAttributeLayers::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(undefined4 *)&this[2].Outputs.AllocatorInstance.Data = 0;
    this->_padding_ = (longlong)&___7UMaterialExpressionMaterialAttributeLayers__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].MaterialExpressionEditorX = 0;
    this[1].MaterialExpressionEditorY = 0;
    this[1].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[1].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[1].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LastErrorText.Data.ArrayNum = 0;
    this[1].LastErrorText.Data.ArrayMax = 0;
    this[1].MaterialExpressionGuid.A = 0;
    this[1].MaterialExpressionGuid.B = 0;
    this[1].MaterialExpressionGuid.C = 0;
    this[1].MaterialExpressionGuid.D = 0;
    this[1].Material.field0_0x0.DebugPtr = (UMaterial *)0x0;
    this[1].Function.field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
    this[1].Desc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Desc.Data.ArrayNum = 0;
    this[1].Desc.Data.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].MenuCategories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MenuCategories.ArrayNum = 0;
    this[1].MenuCategories.ArrayMax = 0;
    this[1].Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Outputs.ArrayNum = 0;
    this[1].Outputs.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].MaterialExpressionEditorX = 0;
    this[2].MaterialExpressionEditorY = 0;
    this[2].GraphNode.field0_0x0.DebugPtr = (UEdGraphNode *)0x0;
    this[2].SubgraphExpression.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
    this[2].LastErrorText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].LastErrorText.Data.ArrayNum = 0;
    this[2].LastErrorText.Data.ArrayMax = 0;
    this[2].MaterialExpressionGuid.A = 0;
    this[2].MaterialExpressionGuid.B = 0;
    this[2].MaterialExpressionGuid.C = 0;
    this[2].MaterialExpressionGuid.D = 0;
    this[2].Material.field0_0x0.DebugPtr = (UMaterial *)0x0;
    this[2].Function.field0_0x0.DebugPtr = (UMaterialFunction *)0x0;
    this[2].Desc.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].Desc.Data.ArrayNum = 0;
    this[2].Desc.Data.ArrayMax = 0;
    *(undefined8 *)&this[2].field_0x80 = 0;
    *(undefined8 *)&this[2].field_0x88 = 0;
    this[2].MenuCategories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].MenuCategories.ArrayNum = 0;
    this[2].MenuCategories.ArrayMax = 0;
    this[2].Outputs.ArrayNum = 0;
    this[2].Outputs.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// UMaterialExpressionMaterialAttributeLayers @ 148afcb10

UMaterialExpressionMaterialAttributeLayers * __thiscall
UMaterialExpressionMaterialAttributeLayers::UMaterialExpressionMaterialAttributeLayers
          (UMaterialExpressionMaterialAttributeLayers *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialAttributeLayers__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input)._padding_ = 0;
  (this->Input).PropertyConnectedMask = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers)._padding_ = 0;
  (this->DefaultLayers).EditorOnly.LayerStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerStates.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerStates.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.LayerNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerNames.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerNames.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.RestrictToLayerRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.RestrictToLayerRelatives.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.RestrictToLayerRelatives.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.RestrictToBlendRelatives.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.RestrictToBlendRelatives.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.RestrictToBlendRelatives.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.LayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerGuids.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerGuids.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.LayerLinkStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.LayerLinkStates.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.LayerLinkStates.ArrayMax = 0;
  (this->DefaultLayers).EditorOnly.DeletedParentLayerGuids.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).EditorOnly.DeletedParentLayerGuids.ArrayNum = 0;
  (this->DefaultLayers).EditorOnly.DeletedParentLayerGuids.ArrayMax = 0;
  (this->DefaultLayers).LayerStates_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerStates_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerStates_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).LayerNames_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerNames_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerNames_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).RestrictToLayerRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).RestrictToLayerRelatives_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).RestrictToLayerRelatives_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).RestrictToBlendRelatives_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).RestrictToBlendRelatives_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).RestrictToBlendRelatives_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).LayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerGuids_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerGuids_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).LayerLinkStates_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).LayerLinkStates_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).LayerLinkStates_DEPRECATED.ArrayMax = 0;
  (this->DefaultLayers).DeletedParentLayerGuids_DEPRECATED.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultLayers).DeletedParentLayerGuids_DEPRECATED.ArrayNum = 0;
  (this->DefaultLayers).DeletedParentLayerGuids_DEPRECATED.ArrayMax = 0;
  (this->LayerCallers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayerCallers).ArrayNum = 0;
  (this->LayerCallers).ArrayMax = 0;
  this->NumActiveLayerCallers = 0;
  (this->BlendCallers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendCallers).ArrayNum = 0;
  (this->BlendCallers).ArrayMax = 0;
  this->NumActiveBlendCallers = 0;
  (this->OutputCaller).field0_0x0.DebugPtr = (UMaterialExpressionMaterialFunctionCall *)0x0;
  this->bIsLayerGraphBuilt = false;
  this->ParamLayers = (FMaterialLayersFunctions *)0x0;
  return this;
}

// GetParameterAssociatedFunction @ 148b02200

UMaterialFunctionInterface * __thiscall
UMaterialExpressionMaterialAttributeLayers::GetParameterAssociatedFunction
          (UMaterialExpressionMaterialAttributeLayers *this,
          FMemoryImageMaterialParameterInfo *param_1)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMaterialFunctionInterface *pUVar5;
  FMaterialLayersFunctions *pFVar6;
  
  if (((param_1->Association).Value == '\x02') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParameterInfo.Association != EMaterialParameterAssociation::GlobalParameter"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialExpressions.cpp"
                         ,0x1d3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UMaterialFunctionInterface *)(*pcVar3)();
    return pUVar5;
  }
  uVar1 = (param_1->Association).Value;
  if (uVar1 == '\0') {
    pFVar6 = this->ParamLayers;
    if (this->ParamLayers == (FMaterialLayersFunctions *)0x0) {
      pFVar6 = &this->DefaultLayers;
    }
  }
  else {
    if (uVar1 != '\x01') {
      return (UMaterialFunctionInterface *)0x0;
    }
    pFVar6 = (FMaterialLayersFunctions *)&this->ParamLayers->_padding_;
    if (this->ParamLayers == (FMaterialLayersFunctions *)0x0) {
      pFVar6 = (FMaterialLayersFunctions *)&(this->DefaultLayers)._padding_;
    }
  }
  iVar2 = param_1->Index;
  if ((-1 < iVar2) && (iVar2 < (int)pFVar6->_padding_)) {
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UMaterialFunctionInterface *)(*pcVar3)();
      return pUVar5;
    }
    return *(UMaterialFunctionInterface **)(pFVar6->_padding_ + (longlong)iVar2 * 8);
  }
  return (UMaterialFunctionInterface *)0x0;
}

// PostLoad @ 148b03010

void __thiscall
UMaterialExpressionMaterialAttributeLayers::PostLoad
          (UMaterialExpressionMaterialAttributeLayers *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  puVar3 = (undefined8 *)(this->DefaultLayers)._padding_;
  iVar2 = (int)(this->DefaultLayers)._padding_;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if ((int)(this->DefaultLayers)._padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialFunctionInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    if ((UObject *)*puVar3 != (UObject *)0x0) {
      UObject::ConditionalPostLoad((UObject *)*puVar3);
    }
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined8 *)(this->DefaultLayers)._padding_;
  iVar2 = (int)(this->DefaultLayers)._padding_;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if ((int)(this->DefaultLayers)._padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMaterialFunctionInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    if ((UObject *)*puVar3 != (UObject *)0x0) {
      UObject::ConditionalPostLoad((UObject *)*puVar3);
    }
    puVar3 = puVar3 + 1;
  }
  return;
}

