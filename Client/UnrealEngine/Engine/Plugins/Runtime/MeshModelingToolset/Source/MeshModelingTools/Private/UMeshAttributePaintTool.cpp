// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 55

// StaticClass @ 14cc96050

UClass * __cdecl UMeshAttributePaintTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintTool",
               &Z_Registration_Info_UClass_UMeshAttributePaintTool.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintTool,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintTool>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintTool>,local_res8,
               UDynamicMeshBrushTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintTool.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cc96830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`UMeshAttributePaintTool::EndChange'::__l8::<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  UMeshAttributePaintTool *this;
  
  this = CastChecked<UMeshAttributePaintTool,UObject>(param_1);
  UMeshAttributePaintTool::ExternalUpdateValues(this,*param_2,param_3,param_4);
  return;
}

// <lambda_invoker_cdecl> @ 14cc96920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`UMeshAttributePaintTool::EndChange'::__l8::<lambda_2>::<lambda_invoker_cdecl>
          (UObject *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  UMeshAttributePaintTool *this;
  
  this = CastChecked<UMeshAttributePaintTool,UObject>(param_1);
  UMeshAttributePaintTool::ExternalUpdateValues(this,*param_2,param_3,param_4);
  return;
}

// <lambda_invoker_cdecl> @ 14cc96980

bool __cdecl
`UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l16::<lambda_3>::<lambda_invoker_cdecl>
          (int param_1,int param_2)

{
  return true;
}

// UMeshAttributePaintTool @ 14ccbb980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshAttributePaintTool * __thiscall
UMeshAttributePaintTool::UMeshAttributePaintTool
          (UMeshAttributePaintTool *this,FVTableHelper *param_1)

{
  UDynamicMeshBrushTool::UDynamicMeshBrushTool((UDynamicMeshBrushTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->BrushActionProps).field0_0x0.DebugPtr = (UMeshAttributePaintBrushOperationProperties *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->AttribProps).field0_0x0.DebugPtr = (UMeshAttributePaintToolProperties *)0x0;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  (this->ViewProperties).field0_0x0.DebugPtr = (UMeshAttributePaintToolVisualizationProperties *)0x0
  ;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x3c8 = &___7UMeshAttributePaintTool__6B_;
  *(undefined8 *)&(this->SelectedAttributeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->bInRemoveStroke = false;
  this->bInSmoothStroke = false;
  memset(&(this->StartStamp).HitResult,0,0x100);
  (this->StartStamp).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->StartStamp).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->StartStamp).HitResult.Time = 1.0;
  (this->StartStamp).HitResult.MyItem = -1;
  (this->StartStamp).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->StartStamp).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->StartStamp).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->StartStamp).HitResult.HitObjectHandle.field_0x1d = 0;
  memset(&(this->LastStamp).HitResult,0,0x100);
  (this->LastStamp).HitResult.Time = 1.0;
  (this->LastStamp).HitResult.MyItem = -1;
  (this->LastStamp).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastStamp).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastStamp).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastStamp).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->LastStamp).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastStamp).HitResult.HitObjectHandle.field_0x1d = 0;
  (this->EditedMesh).Ptr = (FMeshDescription *)0x0;
  (this->EditedDynamicMesh).Ptr = (FDynamicMesh3 *)0x0;
  this->bPreferMeshDescription = true;
  UE::Geometry::TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>::
  TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>(&this->VerticesOctree);
  (this->PreviewBrushROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewBrushROI).ArrayNum = 0;
  (this->PreviewBrushROI).ArrayMax = 0;
  (this->ColorMapper).Ptr = (FFloatAttributeColorMapper *)0x0;
  (this->AttributeSource).Ptr = (IMeshVertexAttributeSource *)0x0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  this->bHavePendingAction = false;
  this->bVisibleAttributeValid = false;
  this->PendingNewSelectedIndex = -1;
  (this->ActiveChangeBuilder).Ptr =
       (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0;
  (this->GeometrySelection).bIsSet = false;
  *(undefined8 *)&(this->SelectionTids).Elements = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x20 = 0;
  (this->CurrentValueRange).Min = 3.4028235e+38;
  (this->CurrentValueRange).Max = -3.4028235e+38;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x34 = 0;
  (this->SelectionTids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectionTids).HashSize = 0;
  *(undefined8 *)&(this->SelectionVids).Elements = 0;
  *(undefined8 *)&(this->SelectionVids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectionVids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x30 = 0xffffffff;
  (this->SelectionVids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectionVids).HashSize = 0;
  return this;
}

// UMeshAttributePaintTool @ 14ccbbc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshAttributePaintTool * __thiscall
UMeshAttributePaintTool::UMeshAttributePaintTool(UMeshAttributePaintTool *this)

{
  UDynamicMeshBrushTool::UDynamicMeshBrushTool((UDynamicMeshBrushTool *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->BrushActionProps).field0_0x0.DebugPtr = (UMeshAttributePaintBrushOperationProperties *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->AttribProps).field0_0x0.DebugPtr = (UMeshAttributePaintToolProperties *)0x0;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  (this->ViewProperties).field0_0x0.DebugPtr = (UMeshAttributePaintToolVisualizationProperties *)0x0
  ;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x3c8 = &___7UMeshAttributePaintTool__6B_;
  *(undefined8 *)&(this->SelectedAttributeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  this->bInRemoveStroke = false;
  this->bInSmoothStroke = false;
  memset(&(this->StartStamp).HitResult,0,0x100);
  (this->StartStamp).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->StartStamp).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->StartStamp).HitResult.Time = 1.0;
  (this->StartStamp).HitResult.MyItem = -1;
  (this->StartStamp).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->StartStamp).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->StartStamp).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->StartStamp).HitResult.HitObjectHandle.field_0x1d = 0;
  memset(&(this->LastStamp).HitResult,0,0x100);
  (this->LastStamp).HitResult.Time = 1.0;
  (this->LastStamp).HitResult.MyItem = -1;
  (this->LastStamp).HitResult.HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastStamp).HitResult.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->LastStamp).HitResult.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->LastStamp).HitResult.HitObjectHandle.InstanceIndex = -1;
  (this->LastStamp).HitResult.HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->LastStamp).HitResult.HitObjectHandle.field_0x1d = 0;
  (this->EditedMesh).Ptr = (FMeshDescription *)0x0;
  (this->EditedDynamicMesh).Ptr = (FDynamicMesh3 *)0x0;
  this->bPreferMeshDescription = true;
  UE::Geometry::TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>::
  TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>(&this->VerticesOctree);
  (this->PreviewBrushROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewBrushROI).ArrayNum = 0;
  (this->PreviewBrushROI).ArrayMax = 0;
  (this->ColorMapper).Ptr = (FFloatAttributeColorMapper *)0x0;
  (this->AttributeSource).Ptr = (IMeshVertexAttributeSource *)0x0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  this->bHavePendingAction = false;
  this->bVisibleAttributeValid = false;
  this->PendingNewSelectedIndex = -1;
  (this->ActiveChangeBuilder).Ptr =
       (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0;
  (this->GeometrySelection).bIsSet = false;
  *(undefined8 *)&(this->SelectionTids).Elements = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x20 = 0;
  (this->CurrentValueRange).Min = 3.4028235e+38;
  (this->CurrentValueRange).Max = -3.4028235e+38;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x34 = 0;
  (this->SelectionTids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectionTids).HashSize = 0;
  *(undefined8 *)&(this->SelectionVids).Elements = 0;
  *(undefined8 *)&(this->SelectionVids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectionVids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectionVids).Elements.field_0x30 = 0xffffffff;
  (this->SelectionVids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectionVids).HashSize = 0;
  return this;
}

// ~UMeshAttributePaintTool @ 14ccc37f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::~UMeshAttributePaintTool(UMeshAttributePaintTool *this)

{
  ForElementType<FSetElementId> FVar1;
  TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *pTVar2;
  void *pvVar3;
  FMeshAttributePaintChange *pFVar4;
  FScriptContainerElement *pFVar5;
  IMeshVertexAttributeSource *pIVar6;
  FFloatAttributeColorMapper *pFVar7;
  FDynamicMesh3 *pFVar8;
  FMeshDescription *this_00;
  longlong *plVar9;
  longlong *plVar10;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->SelectionVids).HashSize = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x3c8 = &___7UMeshAttributePaintTool__6B_;
  FVar1 = (this->SelectionVids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectionVids).Elements);
  (this->SelectionTids).HashSize = 0;
  FVar1 = (this->SelectionTids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectionTids).Elements);
  if ((this->GeometrySelection).bIsSet != false) {
    (this->GeometrySelection).TypedValue.Selection.HashSize = 0;
    FVar1 = (this->GeometrySelection).TypedValue.Selection.Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->GeometrySelection).TypedValue.Selection.Elements);
  }
  pTVar2 = (this->ActiveChangeBuilder).Ptr;
  if (pTVar2 != (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0) {
    *(undefined4 *)&(pTVar2->SavedIndices).field_0x48 = 0;
    pvVar3 = *(void **)&(pTVar2->SavedIndices).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar2->SavedIndices);
    pFVar4 = (pTVar2->Change).Ptr;
    if (pFVar4 != (FMeshAttributePaintChange *)0x0) {
      (**(code **)(*(longlong *)pFVar4 + 0x48))(pFVar4,1);
    }
    ::operator_delete(pTVar2,0x58);
  }
  DestructItems<UMeshAttributePaintTool::FAttributeData,int>
            ((FAttributeData *)(this->Attributes).AllocatorInstance.Data,(this->Attributes).ArrayNum
            );
  pFVar5 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pIVar6 = (this->AttributeSource).Ptr;
  if (pIVar6 != (IMeshVertexAttributeSource *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  pFVar7 = (this->ColorMapper).Ptr;
  if (pFVar7 != (FFloatAttributeColorMapper *)0x0) {
    (**(code **)pFVar7->_padding_)(pFVar7,1);
  }
  pFVar5 = (this->PreviewBrushROI).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  UE::Geometry::FSparseDynamicPointOctree3::~FSparseDynamicPointOctree3
            ((FSparseDynamicPointOctree3 *)&this->VerticesOctree);
  pFVar8 = (this->EditedDynamicMesh).Ptr;
  if (pFVar8 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar8->_padding_)(pFVar8,1);
  }
  this_00 = (this->EditedMesh).Ptr;
  if (this_00 != (FMeshDescription *)0x0) {
    FMeshDescription::~FMeshDescription(this_00);
    ::operator_delete(this_00,0x2c0);
  }
  if (*(longlong *)&(this->SelectedAttributeWatcher).OnValueChangedFunc != 0) {
    plVar9 = *(longlong **)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x28;
    plVar10 = (longlong *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)&(this->SelectedAttributeWatcher).GetValueFunc != 0) {
    plVar9 = *(longlong **)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28;
    plVar10 = (longlong *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  *(undefined ***)&this->field_0x3c8 = &___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UDynamicMeshBrushTool::~UDynamicMeshBrushTool((UDynamicMeshBrushTool *)this);
  return;
}

// operator() @ 14ccca440

void __thiscall
`UMeshAttributePaintTool::ApplyStamp'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  TDynamicMeshOverlay<float,4> *this_00;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  FDynamicMeshAttributeSet *pFVar19;
  uint uVar20;
  FDynamicMeshAttributeSet *pFVar21;
  FDynamicMeshAttributeSet *pFVar22;
  undefined1 local_res10 [8];
  longlong local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  FNonManifoldMappingSupport local_98;
  undefined1 local_88 [80];
  
  pFVar19 = (FDynamicMeshAttributeSet *)0x0;
  pFVar22 = (param_1->AttributeSet).Ptr;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pFVar21 = pFVar19;
  if (pFVar22 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar21 = pFVar22;
  }
  this_00 = (TDynamicMeshOverlay<float,4> *)(pFVar21->ColorLayer).Ptr;
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_98,param_1);
  local_res18 = (longlong)*(int *)(*(longlong *)this + 8);
  pFVar22 = pFVar19;
  if (0 < local_res18) {
    do {
      plVar7 = *(longlong **)this;
      uVar20 = (uint)pFVar19;
      uVar17 = ~uVar20 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar20 < (int)plVar7[1]) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar6 = *(int *)(*plVar7 + (longlong)pFVar22 * 4);
      uVar14 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                         (&local_98,iVar6);
      lVar8 = *(longlong *)this;
      uVar13 = 0;
      if ((int)uVar20 < *(int *)(lVar8 + 0x28)) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar9 = *(longlong *)((longlong)this + 8);
      uVar2 = *(undefined4 *)(*(longlong *)(lVar8 + 0x20) + (longlong)pFVar22 * 4);
      uVar13 = 0;
      if ((int)uVar14 < *(int *)(lVar9 + 0x18)) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + (longlong)(int)uVar14 * 4) = uVar2;
      lVar8 = *(longlong *)this;
      plVar7 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x8b0);
      pcVar10 = *(code **)(*plVar7 + 8);
      uVar13 = 0;
      if ((int)uVar20 < *(int *)(lVar8 + 0x28)) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar15 = (undefined4 *)
                (*pcVar10)(plVar7,local_88,
                           *(undefined4 *)(*(longlong *)(lVar8 + 0x20) + (longlong)pFVar22 * 4));
      uVar2 = *puVar15;
      uVar3 = puVar15[1];
      uVar4 = puVar15[2];
      uVar5 = puVar15[3];
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements(this_00,iVar6,&local_a8);
      iVar6 = local_a8.ArrayNum;
      uVar16 = (ulonglong)local_a8.ArrayNum;
      pFVar1 = local_a8.AllocatorInstance.Data + uVar16 * 4;
      FVar18.Data = local_a8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar16 != iVar6) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        uVar11 = local_a8._8_8_;
        if (FVar18.Data == pFVar1) break;
        uVar13 = *(uint *)FVar18.Data;
        uVar17 = uVar13 * 4;
        *(undefined4 *)
         (*(longlong *)
           ((this_00->Elements).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4) = uVar2;
        *(undefined4 *)
         (*(longlong *)
           ((this_00->Elements).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 + 1 & 0x1ff) * 4) =
             uVar3;
        *(undefined4 *)
         (*(longlong *)
           ((this_00->Elements).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 + 2 & 0x1ff) * 4) =
             uVar4;
        FVar18.Data = FVar18.Data + 4;
        *(undefined4 *)
         (*(longlong *)
           ((this_00->Elements).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar17 + 3 & 0x1ff) * 4) =
             uVar5;
        uVar16 = local_a8._8_8_ & 0xffffffff;
      }
      iVar6 = local_a8.ArrayMax;
      local_a8._8_8_ = (ulonglong)(uint)local_a8.ArrayMax << 0x20;
      if (((longlong)uVar11 < 0) && (iVar6 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
      }
      pFVar19 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar20 + 1);
      pFVar22 = (FDynamicMeshAttributeSet *)((longlong)&pFVar22->_padding_ + 1);
    } while ((longlong)pFVar22 < local_res18);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cccbff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UMeshAttributePaintTool::HitTest'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  bool bVar2;
  FDynamicMesh3 *this_00;
  longlong *plVar3;
  int iVar4;
  double local_res8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  TVector<double>_u_0 local_38 [2];
  
  plVar1 = *(longlong **)this;
  if ((*(char *)(plVar1[0x7a] + 0xb0) == '\0') ||
     ((int)plVar1[300] == *(int *)((longlong)plVar1 + 0x98c))) {
LAB_14cccc095:
    if (*(char *)(plVar1[0x25] + 200) == '\0') {
      this_00 = UPreviewMesh::GetMesh((UPreviewMesh *)plVar1[0x5b]);
      if (param_1 == -1) {
        bVar2 = false;
      }
      else {
        local_98 = 0.0;
        dStack_90 = 0.0;
        local_78 = 0;
        uStack_70 = 0;
        local_48 = __real_3ff0000000000000;
        local_88 = 0.0;
        local_68 = ___xmm_3ff00000000000000000000000000000;
        uStack_60 = _UNK_15061cbc8;
        local_58 = 0x42b40000;
        local_54 = 0x42c80000;
        local_50 = 0x3f800000;
        local_4c = 0;
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x2d8))(plVar1);
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_98);
        local_38[0]._s_0.Z = local_88;
        local_38[0]._s_0.X = local_98;
        local_38[0]._s_0.Y = dStack_90;
        UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                  ((TTransformSRT3<double> *)(plVar1 + 0x6e),(TVector<double> *)&local_d0._s_0,
                   (TVector<double> *)&local_38[0]._s_0);
        UE::Geometry::FDynamicMesh3::GetTriInfo
                  (this_00,param_1,(TVector<double> *)&local_b8._s_0,&local_res8,
                   (TVector<double> *)&local_e8._s_0);
        bVar2 = 0.0 <= (local_e8._s_0.X - local_d0._s_0.X) * local_b8._s_0.X +
                       (local_e8._s_0.Y - local_d0._s_0.Y) * local_b8._s_0.Y +
                       (local_e8._s_0.Z - local_d0._s_0.Z) * local_b8._s_0.Z;
      }
      if (bVar2) goto LAB_14cccc1e5;
    }
    bVar2 = true;
  }
  else {
    if ((int)plVar1[300] != *(int *)((longlong)plVar1 + 0x98c)) {
      plVar3 = (longlong *)plVar1[0x133];
      if ((longlong *)plVar1[0x133] == (longlong *)0x0) {
        plVar3 = plVar1 + 0x132;
      }
      iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[0x134] - 1U & param_1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(int *)(plVar1[299] + (longlong)iVar4 * 0xc) == param_1) goto LAB_14cccc08c;
          iVar4 = *(int *)(plVar1[299] + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_14cccc08c:
    if (iVar4 != -1) goto LAB_14cccc095;
LAB_14cccc1e5:
    bVar2 = false;
  }
  return bVar2;
}

// operator() @ 14ccce200

void __thiscall
`UMeshAttributePaintTool::Setup'::__l2::<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong local_58;
  FDynamicMesh3 *local_50;
  code *local_48;
  longlong *local_40;
  code *local_38 [2];
  undefined **local_28;
  longlong local_20;
  undefined8 local_10;
  
  UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::DisablePrimaryColors(pFVar6);
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar1;
  }
  UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar6);
  pFVar1 = (param_1->AttributeSet).Ptr;
  pFVar6 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar1;
  }
  UE::Geometry::TDynamicMeshOverlay<float,4>::CreatePerVertex
            ((TDynamicMeshOverlay<float,4> *)(pFVar6->ColorLayer).Ptr,0.0);
  local_58 = *(longlong *)this;
  if (*(char *)(local_58 + 0x950) != '\0') {
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``UMeshAttributePaintTool::Setup'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
               ::Call;
    local_50 = param_1;
    pFVar5 = UPreviewMesh::GetMesh(*(UPreviewMesh **)(local_58 + 0x2d8));
    lVar2 = *(longlong *)this;
    if (*(char *)(lVar2 + 0x950) == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UE::Geometry::EnumerateSelectionTriangles
              ((FGeometrySelection *)(lVar2 + 0x8f8),pFVar5,
               (TFunctionRef<void___cdecl(int)> *)&local_48,(FPolygroupSet *)0x0);
    local_20 = *(longlong *)this;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``UMeshAttributePaintTool::Setup'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UMeshAttributePaintTool::Setup'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
                  ::Call;
    local_10 = 0;
    UPreviewMesh::EnableSecondaryTriangleBuffers
              (*(UPreviewMesh **)(local_20 + 0x2d8),
               (TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_38);
    UPreviewMesh::SetSecondaryBuffersVisibility
              (*(UPreviewMesh **)(*(longlong *)this + 0x2d8),
               *(char *)(*(longlong *)(*(longlong *)this + 0x3d0) + 0xb0) == '\0');
  }
  return;
}

// operator() @ 14cccf8c0

bool __thiscall
`UMeshAttributePaintTool::CalculateVertexROI'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  char cVar2;
  double *pdVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char local_res8 [8];
  code *local_48;
  longlong *local_40;
  longlong local_30;
  FDynamicMesh3 *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_30 = *(longlong *)this;
  if ((*(char *)(*(longlong *)(local_30 + 0x3d0) + 0xb0) == '\0') ||
     (*(int *)(local_30 + 0x960) == *(int *)(local_30 + 0x98c))) {
LAB_14cccf959:
    bVar4 = true;
  }
  else {
    if (*(int *)(local_30 + 0x9b0) != *(int *)(local_30 + 0x9dc)) {
      lVar6 = *(longlong *)(local_30 + 0x9e8);
      if (*(longlong *)(local_30 + 0x9e8) == 0) {
        lVar6 = local_30 + 0x9e0;
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(local_30 + 0x9f0) - 1U & param_1) * 4);
      if (iVar5 != -1) {
        do {
          if (*(int *)(*(longlong *)(local_30 + 0x9a8) + (longlong)iVar5 * 0xc) == param_1)
          goto LAB_14cccf959;
          iVar5 = *(int *)(*(longlong *)(local_30 + 0x9a8) + 4 + (longlong)iVar5 * 0xc);
        } while (iVar5 != -1);
      }
    }
    bVar4 = false;
  }
  cVar2 = *(char *)(*(longlong *)(local_30 + 0x128) + 200);
  local_res8[0] = cVar2 != '\0';
  if (cVar2 == '\0') {
    local_20 = *(undefined8 *)((longlong)this + 0x20);
    local_28 = *(FDynamicMesh3 **)((longlong)this + 8);
    local_18 = local_res8;
    local_40 = &local_30;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``UMeshAttributePaintTool::CalculateVertexROI'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
               ::Call;
    local_res8[0] = '\x01';
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (local_28,param_1,(TFunctionRef<void___cdecl(int)> *)&local_48);
  }
  if (((bVar4) && (local_res8[0] != '\0')) &&
     (pdVar3 = *(double **)((longlong)this + 0x10),
     lVar6 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) +
              (ulonglong)((uint)param_1 >> 9) * 8),
     pdVar1 = (double *)(lVar6 + (ulonglong)(param_1 & 0x1ff) * 0x18),
     dVar7 = pdVar3[2] - *(double *)(lVar6 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18),
     dVar8 = *pdVar3 - *pdVar1, dVar9 = pdVar3[1] - pdVar1[1],
     dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7 < (double)*(float *)((longlong)this + 0x18))) {
    return true;
  }
  return false;
}

// operator() @ 14cccfc40

void __thiscall
`UMeshAttributePaintTool::UpdateVisibleAttribute'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FDynamicMeshAttributeSet *pFVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FNonManifoldMappingSupport local_38;
  undefined1 local_28 [16];
  
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar11 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar4;
  }
  pTVar5 = (pFVar11->ColorLayer).Ptr;
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_38,param_1);
  uVar15 = *(int *)&pTVar5->field_0x8 * 0x200 + *(int *)&pTVar5->field_0xc;
  uVar14 = 0;
  if ((uVar15 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar5->field_0x10 - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar15) {
      do {
        lVar6 = (*(undefined8 **)&pTVar5->field_0x10)[uVar13 >> 9];
        if ((*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
           (uVar14 = uVar13, *(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
        uVar13 = uVar13 + 1;
        uVar14 = uVar13;
      } while ((int)uVar13 < (int)uVar15);
    }
  }
joined_r0x00014cccfcd8:
  do {
    if (uVar14 == uVar15) {
      return;
    }
    while( true ) {
      uVar10 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                         (&local_38,
                          *(int *)(*(longlong *)
                                    (*(longlong *)&pTVar5->field_0x60 + (ulonglong)(uVar14 >> 9) * 8
                                    ) + (ulonglong)(uVar14 & 0x1ff) * 4));
      lVar6 = *(longlong *)this;
      uVar13 = 0;
      if ((int)uVar10 < *(int *)(lVar6 + 0x18)) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar7 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x8b0);
      puVar12 = (undefined4 *)
                (**(code **)(*plVar7 + 8))
                          (plVar7,local_28,
                           *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar10 * 4))
      ;
      uVar13 = uVar14 * 4;
      uVar10 = uVar14 + 1;
      uVar1 = puVar12[1];
      uVar2 = puVar12[2];
      uVar3 = puVar12[3];
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar5->field_0x48 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 4) = *puVar12;
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar5->field_0x48 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar13 + 1 & 0x1ff) * 4) = uVar1;
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar5->field_0x48 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar13 + 2 & 0x1ff) * 4) = uVar2;
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar5->field_0x48 + (ulonglong)((uVar14 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar13 + 3 & 0x1ff) * 4) = uVar3;
      uVar14 = uVar10;
      if ((int)uVar15 <= (int)uVar10) break;
      while( true ) {
        lVar6 = *(longlong *)(*(longlong *)&pTVar5->field_0x10 + (ulonglong)(uVar14 >> 9) * 8);
        if ((*(short *)(lVar6 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar6 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
        uVar14 = uVar14 + 1;
        if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014cccfcd8;
      }
    }
  } while( true );
}

// operator() @ 14cccfe80

void __thiscall
`UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l9::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_res10 [6];
  
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x960) != *(int *)(lVar1 + 0x98c)) {
    lVar3 = *(longlong *)(lVar1 + 0x998);
    if (*(longlong *)(lVar1 + 0x998) == 0) {
      lVar3 = lVar1 + 0x990;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x9a0) - 1U & param_1) * 4);
    if (iVar2 != -1) {
      while (*(int *)(*(longlong *)(lVar1 + 0x958) + (longlong)iVar2 * 0xc) != param_1) {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x958) + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res10[0] = param_1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
                 local_res8,(bool *)local_res10);
    }
  }
  return;
}

// operator() @ 14cccff10

void __thiscall
`UMeshAttributePaintTool::ExternalUpdateValues'::__l10::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined8 *puVar8;
  TDynamicMeshOverlay<float,4> *this_00;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  uint *puVar12;
  int iVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  FDynamicMeshAttributeSet *pFVar19;
  ForAnyElementType FVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [88];
  
  pFVar7 = (param_1->AttributeSet).Ptr;
  pFVar19 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar19 = pFVar7;
  }
  puVar8 = *(undefined8 **)this;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_res18 = *(uint *)(puVar8 + 1);
  uVar18 = (ulonglong)(int)local_res18;
  puVar21 = (uint *)*puVar8;
  this_00 = (TDynamicMeshOverlay<float,4> *)(pFVar19->ColorLayer).Ptr;
  local_res20 = puVar21 + uVar18;
  while( true ) {
    puVar12 = local_res20;
    if (*(int *)(puVar8 + 1) != (int)uVar18) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar21 == puVar12) break;
    uVar6 = *puVar21;
    lVar9 = *(longlong *)((longlong)this + 0x10);
    plVar10 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x8b0);
    pcVar11 = *(code **)(*plVar10 + 8);
    uVar16 = 0;
    if ((int)uVar6 < *(int *)(lVar9 + 0x18)) {
      uVar16 = ~uVar6 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    puVar17 = (undefined4 *)
              (*pcVar11)(plVar10,local_98,
                         *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + (longlong)(int)uVar6 * 4));
    uVar2 = *puVar17;
    uVar3 = puVar17[1];
    uVar4 = puVar17[2];
    uVar5 = puVar17[3];
    UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements(this_00,uVar6,&local_a8);
    iVar13 = local_a8.ArrayNum;
    uVar18 = (ulonglong)local_a8.ArrayNum;
    pFVar1 = local_a8.AllocatorInstance.Data + uVar18 * 4;
    FVar20.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar18 != iVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      uVar14 = local_a8._8_8_;
      if (FVar20.Data == pFVar1) break;
      uVar6 = *(uint *)FVar20.Data;
      uVar16 = uVar6 * 4;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4) = uVar2;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar16 + 1 & 0x1ff) * 4) = uVar3;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar16 + 2 & 0x1ff) * 4) = uVar4;
      FVar20.Data = FVar20.Data + 4;
      *(undefined4 *)
       (*(longlong *)
         ((this_00->Elements).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar16 + 3 & 0x1ff) * 4) = uVar5;
      uVar18 = local_a8._8_8_ & 0xffffffff;
    }
    iVar13 = local_a8.ArrayMax;
    local_a8._8_8_ = (ulonglong)(uint)local_a8.ArrayMax << 0x20;
    if (((longlong)uVar14 < 0) && (iVar13 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_a8.AllocatorInstance,0,&local_a8.ArrayMax);
    }
    uVar18 = (ulonglong)local_res18;
    puVar21 = puVar21 + 1;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ccd1760

int __thiscall `UMeshAttributePaintTool::Setup'::__l2::<lambda_2>::operator()(void *this)

{
  FString *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  
  lVar2 = *(longlong *)(*(longlong *)this + 0x3d8);
  pFVar1 = (FString *)(lVar2 + 0xb0);
  iVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar2 + 0xc0),pFVar1);
  if (iVar5 == -1) {
    bVar4 = *(int *)(lVar2 + 200) < 1;
    if (bVar4) {
      pFVar6 = ::FString::FString(&local_38,L"");
    }
    else {
      pFVar6 = ::FString::FString(&local_28,*(FString **)(lVar2 + 0xc0));
    }
    if (pFVar1 != pFVar6) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(lVar2 + 0xb8) = (pFVar6->Data).ArrayNum;
      *(int *)(lVar2 + 0xbc) = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (bVar4) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    ((TArray<FString,TSizedDefaultAllocator<32>_> *)
                     (*(longlong *)(*(longlong *)this + 0x3d8) + 0xc0),
                     (FString *)(*(longlong *)(*(longlong *)this + 0x3d8) + 0xb0));
  return iVar5;
}

// ApplyAction @ 14ccde9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::ApplyAction
          (UMeshAttributePaintTool *this,EMeshAttributePaintToolActions param_1)

{
  return;
}

// ApplyStamp @ 14cce12d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::ApplyStamp(UMeshAttributePaintTool *this,FBrushStampData *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  EBrushActionMode EVar3;
  UMeshAttributePaintBrushOperationProperties *pUVar4;
  longlong lVar5;
  TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FDynamicMesh3 *this_01;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FBrushActionData *pFVar13;
  ulonglong uVar14;
  FBrushActionData local_res18;
  FBrushActionData local_res20;
  FStampActionData local_c8;
  FBrushActionData local_98;
  undefined8 local_90;
  undefined4 local_88;
  TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  code *local_68;
  FStampActionData **local_60;
  FStampActionData *local_58;
  FScriptContainerElement *local_50;
  UMeshAttributePaintTool *local_48;
  
  uVar9 = this->CurrentAttributeIndex;
  if ((int)uVar9 < 0) {
    return;
  }
  uVar12 = 0;
  uVar10 = 0;
  if ((int)uVar9 < (this->Attributes).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_70 = (this->Attributes).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
  local_c8.ROIVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ROIVertices.ArrayNum = 0;
  local_c8.ROIVertices.ArrayMax = 0;
  local_c8.ROIBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ROIBefore.ArrayNum = 0;
  local_c8.ROIBefore.ArrayMax = 0;
  local_c8.ROIAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ROIAfter.ArrayNum = 0;
  local_c8.ROIAfter.ArrayMax = 0;
  CalculateVertexROI(this,param_1,&local_c8.ROIVertices);
  pUVar4 = (this->BrushActionProps).field0_0x0.DebugPtr;
  EVar3 = pUVar4->BrushAction;
  if (EVar3 == Paint) {
    local_98.bSmooth = this->bInSmoothStroke;
    pFVar13 = &local_98;
    local_98.BrushValue = pUVar4->BrushValue;
    local_98.bErase = this->bInRemoveStroke;
  }
  else {
    if (EVar3 == FloodFill) {
      if (local_c8.ROIVertices.ArrayNum == 0) {
        uVar9 = (param_1->HitResult).FaceIndex;
        this_01 = UPreviewMesh::GetMesh(*(UPreviewMesh **)&this->field_0x2d8);
        bVar7 = UE::Geometry::FDynamicMesh3::IsTriangle(this_01,uVar9);
        if (bVar7) {
          lVar5 = *(longlong *)
                   ((this_01->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8
                   );
          local_90 = *(undefined8 *)(lVar5 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_88 = *(undefined4 *)(lVar5 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          if (((local_c8.ROIVertices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_90)
              && ((FScriptContainerElement *)&local_90 <
                  local_c8.ROIVertices.AllocatorInstance.Data +
                  (longlong)local_c8.ROIVertices.ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = local_c8.ROIVertices.ArrayNum;
          if (local_c8.ROIVertices.ArrayNum == local_c8.ROIVertices.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)&local_c8,&local_c8.ROIVertices.ArrayMax);
          }
          local_c8.ROIVertices.ArrayNum = iVar8 + 1;
          *(undefined4 *)(local_c8.ROIVertices.AllocatorInstance.Data + (longlong)iVar8 * 4) =
               (undefined4)local_90;
        }
      }
      (**(code **)(*(longlong *)this + 0x4b8))(this,param_1);
      goto LAB_14cce1583;
    }
    if (EVar3 == Erase) {
      local_res20.bErase = this->bInRemoveStroke == false;
      pFVar13 = &local_res20;
      local_res20.BrushValue = pUVar4->BrushValue;
      local_res20.bSmooth = this->bInSmoothStroke;
    }
    else {
      if (EVar3 != Smooth) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_968098766823357698>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshAttributePaintTool.cpp"
                           ,0x2fe,"false");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_14cce1583;
      }
      local_res18.BrushValue = pUVar4->BrushValue;
      pFVar13 = &local_res18;
      local_res18.bErase = this->bInRemoveStroke;
      local_res18.bSmooth = true;
    }
  }
  ApplyStamp_Paint(this,param_1,&local_c8,pFVar13);
LAB_14cce1583:
  this_00 = (this->ActiveChangeBuilder).Ptr;
  local_80 = this_00;
  if (this_00 != (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0) {
    local_78 = (longlong)local_c8.ROIVertices.ArrayNum;
    uVar14 = uVar12;
    if (0 < local_78) {
      do {
        uVar11 = (uint)uVar12;
        uVar10 = ~uVar11 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar11 < local_c8.ROIAfter.ArrayNum) {
          uVar9 = uVar10;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = local_c8.ROIAfter.AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
        uVar9 = 0;
        if ((int)uVar11 < local_c8.ROIBefore.ArrayNum) {
          uVar9 = uVar10;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = local_c8.ROIBefore.AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
        uVar9 = 0;
        if ((int)uVar11 < local_c8.ROIVertices.ArrayNum) {
          uVar9 = uVar10;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange>::UpdateValue
                  (this_00,*(int *)(local_c8.ROIVertices.AllocatorInstance.Data + uVar14 * 4),
                   (float *)pFVar2,(float *)pFVar1);
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < local_78);
    }
  }
  local_58 = &local_c8;
  local_50 = local_70;
  local_60 = &local_58;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshAttributePaintTool::ApplyStamp'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_48 = this;
  UPreviewMesh::DeferredEditMesh
            (*(UPreviewMesh **)&this->field_0x2d8,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_68,false);
  UPreviewMesh::NotifyDeferredEditCompleted
            (*(UPreviewMesh **)&this->field_0x2d8,FastUpdate,VertexColors,false);
  if (local_c8.ROIAfter.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ROIAfter.AllocatorInstance.Data);
  }
  if (local_c8.ROIBefore.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ROIBefore.AllocatorInstance.Data);
  }
  if (local_c8.ROIVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ROIVertices.AllocatorInstance.Data);
  }
  return;
}

// ApplyStamp_FloodFill @ 14cce3540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cce3aff) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014cce3b03 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::ApplyStamp_FloodFill
          (UMeshAttributePaintTool *this,FBrushStampData *param_1,FStampActionData *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FDynamicMesh3 *this_00;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  uint *puVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288;
  undefined1 local_287 [3];
  uint local_284;
  float local_280 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  TArray<int,TSizedDefaultAllocator<32>_> local_268;
  TArray<int,TSizedDefaultAllocator<32>_> local_258;
  uint local_248 [2];
  uint local_240;
  FScriptContainerElement *local_238;
  FDynamicMesh3 *local_230;
  code *local_228;
  code **local_220;
  int local_218;
  int local_214;
  undefined8 *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  UMeshAttributePaintTool *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  UMeshAttributePaintTool *local_1e0;
  undefined1 *local_1d8;
  code *local_1d0;
  UMeshAttributePaintTool **local_1c8;
  code *local_1c0;
  undefined8 **local_1b8;
  FNonManifoldMappingSupport local_1b0;
  undefined1 local_198 [32];
  uint *local_178;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  code *local_148;
  undefined8 uStack_140;
  undefined **local_138;
  UMeshAttributePaintTool *pUStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined ***pppuStack_120;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_c8;
  code *local_78;
  undefined8 uStack_70;
  undefined **local_68;
  code *pcStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar15 = this->CurrentAttributeIndex;
  uVar13 = 0;
  if ((int)uVar15 < (this->Attributes).ArrayNum) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  local_1f8 = this;
  if ((uVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_208 = (this->Attributes).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x30;
  this_00 = UPreviewMesh::GetMesh(*(UPreviewMesh **)&this->field_0x2d8);
  pFVar21 = (param_2->ROIVertices).AllocatorInstance.Data;
  local_198._0_8_ = 0;
  local_198._8_8_ = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_164 = 0;
  local_158 = (ForElementType<FSetElementId>)0x0;
  local_150 = 0;
  iVar10 = (param_2->ROIVertices).ArrayNum;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  pFVar3 = pFVar21 + (longlong)iVar10 * 4;
  local_230 = this_00;
  while( true ) {
    if ((param_2->ROIVertices).ArrayNum != iVar10) {
      local_288 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_288);
    }
    if (pFVar21 == pFVar3) break;
    if ((((this->BrushActionProps).field0_0x0.DebugPtr)->bIsolateGeometrySelection == false) ||
       (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
        *(int *)&(this->SelectionTids).Elements.field_0x34)) {
      local_210 = (undefined8 *)local_198;
      local_1c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l11::<lambda_2>,void,int>
                  ::Call;
      local_1b8 = &local_210;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                (this_00,*(int *)pFVar21,(TFunctionRef<void___cdecl(int)> *)&local_1c0);
      pFVar21 = pFVar21 + 4;
    }
    else {
      local_1d8 = local_198;
      local_1c8 = &local_1e0;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_1e0 = this;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                (this_00,*(int *)pFVar21,(TFunctionRef<void___cdecl(int)> *)&local_1d0);
      pFVar21 = pFVar21 + 4;
    }
  }
  fVar4 = (this->CurrentValueRange).Min;
  local_280[0] = ((this->CurrentValueRange).Max - fVar4) *
                 *(float *)(*(longlong *)&this->field_0x128 + 0xc0);
  if (this->bInRemoveStroke != false) {
    local_280[0] = fVar4;
  }
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_1b0,this_00);
  piVar1 = &(param_2->ROIVertices).ArrayMax;
  (param_2->ROIVertices).ArrayNum = 0;
  if ((param_2->ROIVertices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_2,0,piVar1);
  }
  iVar10 = local_198._8_4_ - local_164;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  local_118.Elements._0_8_ = 0;
  local_118.Elements._8_8_ = 0;
  local_118.Elements._32_8_ = 0;
  local_118.Elements._40_4_ = 0;
  local_118.Elements._44_4_ = 0x80;
  local_118.Elements._48_4_ = 0xffffffff;
  local_118.Elements._52_4_ = 0;
  local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_118.HashSize = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  do {
    if (iVar10 < 1) {
      local_c8.HashSize = 0;
      if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c8.Elements);
      local_118.HashSize = 0;
      if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_118.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_118.Elements);
      if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.AllocatorInstance.Data);
      }
      if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      local_150 = 0;
      if (local_158 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198);
      return;
    }
    iVar14 = 0;
    iVar10 = 0;
    local_268.ArrayNum = 0;
    if ((local_268.ArrayMax < 0) && (local_268.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_268.AllocatorInstance,0,&local_268.ArrayMax);
    }
    local_258.ArrayNum = 0;
    if ((local_258.ArrayMax < 0) && (local_258.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_258.AllocatorInstance,0,&local_258.ArrayMax);
    }
    if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&local_118);
      bVar9 = (longlong)local_118.Elements._8_8_ < 0;
      local_118.Elements._8_8_ = local_118.Elements._8_8_ & 0xffffffff00000000;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&local_118,0,(int *)&local_118.Elements.field_0xc);
      }
      local_118.Elements._48_4_ = 0xffffffff;
      local_118.Elements._52_4_ = 0;
      local_118.Elements._40_4_ = 0;
    }
    bVar9 = (longlong)local_278._8_8_ < 0;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    iVar12 = 0;
    if (bVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_278.AllocatorInstance,0,&local_278.ArrayMax);
      iVar12 = local_278.ArrayNum;
    }
    iVar11 = iVar10;
    if (local_170 != 0) {
      puVar22 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar22 = local_178;
      }
      uVar15 = *puVar22;
      while (uVar15 == 0) {
        lVar18 = (longlong)iVar14;
        iVar10 = iVar10 + 0x20;
        iVar14 = iVar14 + 1;
        iVar11 = local_170;
        if ((int)(local_170 + -1 + (local_170 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14cce396d;
        uVar15 = puVar22[lVar18 + 1];
      }
      uVar20 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_218 = (int)lVar18;
      iVar11 = iVar10 + -1 + local_218;
      if (local_170 < iVar11) {
        iVar11 = local_170;
      }
    }
LAB_14cce396d:
    pFVar3 = (FScriptContainerElement *)(local_198._0_8_ + (longlong)iVar11 * 0xc);
    if ((local_278.AllocatorInstance.Data <= pFVar3) &&
       (pFVar3 < local_278.AllocatorInstance.Data + (longlong)local_278.ArrayMax * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = local_278.ArrayNum;
    }
    if (iVar12 == local_278.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_278.AllocatorInstance,&local_278.ArrayMax);
    }
    uVar8 = uStack_140;
    local_278.ArrayNum = iVar12 + 1;
    *(undefined4 *)(local_278.AllocatorInstance.Data + (longlong)iVar12 * 4) = *(undefined4 *)pFVar3
    ;
    pUStack_130 = (UMeshAttributePaintTool *)
                  `UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l16::<lambda_3>::
                  <lambda_invoker_cdecl>;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>::Call;
    pppuStack_120 = (undefined ***)0x0;
    local_138 = &___7__TFunction_OwnedObject_P6A_NHH_Z_0A__0A__Function_Private_Core_UE__6B_;
    if ((((this->BrushActionProps).field0_0x0.DebugPtr)->bIsolateGeometrySelection != false) &&
       (*(int *)&(this->SelectionTids).Elements.field_0x8 !=
        *(int *)&(this->SelectionTids).Elements.field_0x34)) {
      uVar7 = CONCAT44(uStack_124,local_128);
      local_148 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l19::<lambda_4>,bool,int,int>
                  ::Call;
      uStack_140 = uStack_70;
      local_128 = (undefined4)local_58;
      uStack_124 = local_58._4_4_;
      pppuStack_120 = (undefined ***)0x0;
      local_138 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UMeshAttributePaintTool::ApplyStamp_FloodFill'::`19'::<lambda_4>,0,0>
                   ::_vftable_;
      pUStack_130 = this;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(int,int),bool,int,int>::Call;
      uStack_70 = uVar8;
      local_68 = &___7__TFunction_OwnedObject_P6A_NHH_Z_0A__0A__Function_Private_Core_UE__6B_;
      pcStack_60 = `UMeshAttributePaintTool::ApplyStamp_FloodFill'::__l16::<lambda_3>::
                   <lambda_invoker_cdecl>;
      local_58 = uVar7;
      uStack_50 = 0;
      (*(code *)PTR_Destroy_1528cfdd8)();
    }
    local_228 = (code *)0x0;
    local_220 = (code **)0x0;
    if ((local_148 == (code *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBound(InFunc)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                           ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef"), bVar9))
    {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_220 = &local_148;
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
    UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
              (this_00,&local_278,&local_268,&local_258,&local_118,
               (TFunctionRef<bool___cdecl(int,int)> *)&local_228);
    uVar16 = (ulonglong)local_268.ArrayNum;
    local_240 = local_268.ArrayNum;
    local_200 = local_268.AllocatorInstance.Data + uVar16 * 4;
    uVar20 = uVar16;
    FVar23.Data = local_268.AllocatorInstance.Data;
    while( true ) {
      pFVar3 = local_200;
      local_238 = FVar23.Data;
      if ((int)uVar16 != (int)uVar20) {
        local_287[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_287);
      }
      if (FVar23.Data == pFVar3) break;
      uVar15 = *(uint *)FVar23.Data;
      local_248[0] = uVar15;
      if (local_198._8_4_ != local_164) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,uVar15,
                   (int *)local_248);
      }
      pFVar3 = local_208;
      puVar22 = (uint *)&local_1f0;
      lVar24 = 3;
      lVar18 = *(longlong *)
                ((this_00->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
      local_1f0 = *(undefined8 *)(lVar18 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      local_1e8 = *(undefined4 *)(lVar18 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      do {
        uVar15 = *puVar22;
        if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_c8.Hash;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_c8.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar19 + (ulonglong)(local_c8.HashSize - 1U & uVar15) * 4
                                ); iVar10 != -1;
              iVar10 = *(int *)(local_c8.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
            if (*(uint *)(local_c8.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar15)
            goto LAB_14cce3ebf;
          }
        }
        pFVar21 = (param_2->ROIVertices).AllocatorInstance.Data;
        local_284 = uVar15;
        if (((pFVar21 <= (FScriptContainerElement *)&local_284) &&
            ((FScriptContainerElement *)&local_284 < pFVar21 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (param_2->ROIVertices).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)param_2,piVar1);
        }
        (param_2->ROIVertices).ArrayNum = iVar10 + 1;
        *(uint *)((param_2->ROIVertices).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_284;
        uVar13 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                           (&local_1b0,local_284);
        uVar15 = 0;
        if ((int)uVar13 < *(int *)(pFVar3 + 0x18)) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_2->ROIBefore).AllocatorInstance.Data;
        pFVar21 = (FScriptContainerElement *)
                  (*(longlong *)(pFVar3 + 0x10) + (longlong)(int)uVar13 * 4);
        if (((pFVar5 <= pFVar21) && (pFVar21 < pFVar5 + (longlong)(param_2->ROIBefore).ArrayMax * 4)
            ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (param_2->ROIBefore).ArrayNum;
        piVar2 = &(param_2->ROIBefore).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_2->ROIBefore).AllocatorInstance,piVar2);
        }
        (param_2->ROIBefore).ArrayNum = iVar10 + 1;
        *(undefined4 *)((param_2->ROIBefore).AllocatorInstance.Data + (longlong)iVar10 * 4) =
             *(undefined4 *)pFVar21;
        pFVar21 = (param_2->ROIAfter).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)local_280) &&
            ((FScriptContainerElement *)local_280 <
             pFVar21 + (longlong)(param_2->ROIAfter).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (param_2->ROIAfter).ArrayNum;
        piVar2 = &(param_2->ROIAfter).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_2->ROIAfter).AllocatorInstance,piVar2);
        }
        (param_2->ROIAfter).ArrayNum = iVar10 + 1;
        *(float *)((param_2->ROIAfter).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_280[0]
        ;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_c8,&local_214,(bool *)&local_284);
LAB_14cce3ebf:
        puVar22 = puVar22 + 1;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      uVar16 = (ulonglong)(uint)local_268.ArrayNum;
      FVar23.Data = local_238 + 4;
      uVar20 = (ulonglong)local_240;
      this_00 = local_230;
    }
    if (local_148 != (code *)0x0) {
      pppuVar17 = &local_138;
      if (pppuStack_120 != (undefined ***)0x0) {
        pppuVar17 = pppuStack_120;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    iVar10 = local_198._8_4_ - local_164;
    this = local_1f8;
  } while( true );
}

// ApplyStamp_Paint @ 14cce4000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cce4479) */
/* WARNING: Removing unreachable block (ram,0x00014cce448a) */
/* WARNING: Removing unreachable block (ram,0x00014cce448e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::ApplyStamp_Paint
          (UMeshAttributePaintTool *this,FBrushStampData *param_1,FStampActionData *param_2,
          FBrushActionData *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  FSmallListSet *pFVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  code *pcVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  FDynamicMesh3 *pFVar24;
  undefined8 uVar25;
  undefined ***pppuVar26;
  longlong *plVar27;
  longlong *plVar28;
  code *pcVar29;
  FStampActionData *pFVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auStack_448 [32];
  longlong local_428;
  longlong local_420;
  FStampActionData *local_418;
  uint local_410;
  int local_408 [2];
  longlong local_400;
  FDynamicMesh3 *local_3f8;
  longlong local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  ulonglong local_3b8;
  FNonManifoldMappingSupport local_3b0;
  code *local_398;
  undefined8 uStack_390;
  FFunctionStorage local_388;
  code *local_368;
  longlong local_358 [3];
  longlong *local_340;
  code *local_338;
  longlong local_328 [3];
  longlong *local_310;
  uint local_308;
  undefined4 uStack_304;
  FDynamicMesh3 *pFStack_300;
  code *local_2f8;
  undefined **local_2e8;
  undefined8 local_2e0;
  FDynamicMesh3 *pFStack_2d8;
  undefined ***local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  FSmallListSet *local_2a8;
  uint local_2a0;
  code *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  uchar local_278 [8];
  longlong *plStack_270;
  BaseValueIterator local_268;
  code *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  longlong *plStack_210;
  FSmallListSet *local_208;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f0;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  longlong *plStack_180;
  code *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  longlong *plStack_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_448;
  local_418 = param_2;
  UPreviewMesh::GetTransform(*(UPreviewMesh **)&this->field_0x2d8,&local_148);
  local_2b8 = (param_1->WorldPosition).field0_0x0._s_0.Z;
  local_2c8 = (param_1->WorldPosition).field0_0x0._s_0.X;
  dStack_2c0 = (param_1->WorldPosition).field0_0x0._s_0.Y;
  local_148.Rotation.XY.m128d_f64[0] =
       local_148.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] =
       local_148.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = local_2b8 - local_148.Translation.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[0] =
       local_148.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] =
       local_148.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar48._8_4_ = SUB84(local_148.Rotation.XY.m128d_f64[1],0);
  auVar48._0_8_ = local_148.Rotation.XY.m128d_f64[0];
  auVar48._12_4_ = (int)((ulonglong)local_148.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar42._8_4_ = SUB84(local_148.Rotation.ZW.m128d_f64[1],0);
  auVar42._0_8_ = local_148.Rotation.ZW.m128d_f64[0];
  auVar42._12_4_ = (int)((ulonglong)local_148.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar49 = blendpd(auVar48,auVar42,2);
  local_148.Translation.XY.m128d_f64[0] = local_2c8 - local_148.Translation.XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = dStack_2c0 - local_148.Translation.XY.m128d_f64[1];
  uVar60 = (undefined4)((ulonglong)local_148.Translation.XY.m128d_f64[1] >> 0x20);
  auVar37._8_4_ = SUB84(local_148.Rotation.ZW.m128d_f64[0],0);
  auVar37._0_8_ = local_148.Rotation.XY.m128d_f64[1];
  auVar37._12_4_ = (int)((ulonglong)local_148.Rotation.ZW.m128d_f64[0] >> 0x20);
  auVar64._8_4_ = SUB84(local_148.Translation.XY.m128d_f64[1],0);
  auVar64._0_8_ = local_148.Translation.XY.m128d_f64[0];
  auVar64._12_4_ = uVar60;
  auVar41._8_4_ = SUB84(local_148.Translation.XY.m128d_f64[1],0);
  auVar41._0_8_ = local_148.Translation.XY.m128d_f64[0];
  auVar41._12_4_ = uVar60;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_148.Translation.ZW.m128d_f64[0];
  auVar42 = blendpd(auVar41,auVar9,2);
  auVar65._0_8_ =
       auVar64._8_8_ * local_148.Rotation.XY.m128d_f64[0] -
       local_148.Rotation.XY.m128d_f64[1] * local_148.Translation.XY.m128d_f64[0];
  auVar65._8_8_ =
       local_148.Translation.ZW.m128d_f64[0] * local_148.Rotation.XY.m128d_f64[1] -
       auVar37._8_8_ * local_148.Translation.XY.m128d_f64[1];
  auVar43._0_8_ =
       auVar42._0_8_ * local_148.Rotation.ZW.m128d_f64[0] -
       auVar49._0_8_ * local_148.Translation.ZW.m128d_f64[0];
  auVar43._8_8_ = auVar42._8_8_ * local_148.Rotation.ZW.m128d_f64[1] - auVar49._8_8_ * 0.0;
  dVar47 = auVar65._8_8_ + auVar65._8_8_;
  dVar36 = auVar43._0_8_ + auVar43._0_8_;
  uVar60 = SUB84(dVar36,0);
  uVar61 = (undefined4)((ulonglong)dVar36 >> 0x20);
  auVar42 = blendpd(auVar65,auVar43,2);
  auVar62._8_4_ = uVar60;
  auVar62._0_8_ = dVar47;
  auVar62._12_4_ = uVar61;
  auVar38._8_4_ = uVar60;
  auVar38._0_8_ = dVar47;
  auVar38._12_4_ = uVar61;
  auVar58._8_4_ = uVar60;
  auVar58._0_8_ = dVar47;
  auVar58._12_4_ = uVar61;
  auVar66._0_8_ = auVar42._0_8_ + auVar42._0_8_;
  auVar66._8_8_ = auVar42._8_8_ + auVar42._8_8_;
  auVar51._0_8_ =
       (double)CONCAT44(local_148.Scale3D.XY.m128d_f64[0]._4_4_ &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        local_148.Scale3D.XY.m128d_f64[0]._0_4_ &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar51._8_4_ = local_148.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
  auVar51._12_4_ = local_148.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
  auVar63._0_8_ =
       auVar62._8_8_ * local_148.Rotation.XY.m128d_f64[0] -
       dVar47 * local_148.Rotation.XY.m128d_f64[1];
  auVar63._8_8_ =
       auVar66._0_8_ * local_148.Rotation.XY.m128d_f64[1] -
       auVar38._8_8_ * local_148.Rotation.ZW.m128d_f64[0];
  auVar42 = blendpd(auVar58,auVar66,2);
  auVar39._8_4_ = SUB84(auVar66._8_8_,0);
  auVar39._0_8_ = auVar66._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  auVar59._0_8_ = auVar42._0_8_ * local_148.Rotation.ZW.m128d_f64[0] - auVar66._0_8_ * auVar49._0_8_
  ;
  auVar59._8_8_ = auVar42._8_8_ * local_148.Rotation.ZW.m128d_f64[1] - auVar39._8_8_ * auVar49._8_8_
  ;
  lVar33 = -(ulonglong)(auVar51._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar35 = -(ulonglong)(auVar51._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar10._4_4_ = local_148.Scale3D.XY.m128d_f64[0]._4_4_;
  auVar10._0_4_ = local_148.Scale3D.XY.m128d_f64[0]._0_4_;
  auVar10._8_4_ = local_148.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar10._12_4_ = local_148.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar10);
  lVar34 = -(ulonglong)
            ((double)CONCAT44(local_148.Scale3D.ZW.m128d_f64[0]._4_4_ &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_148.Scale3D.ZW.m128d_f64[0]._0_4_ &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar52._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar33 >> 0x20) & auVar42._4_4_,
                        ~(uint)lVar33 & auVar42._0_4_);
  auVar52._8_4_ = ~(uint)lVar35 & auVar42._8_4_;
  auVar52._12_4_ = ~(uint)((ulonglong)lVar35 >> 0x20) & auVar42._12_4_;
  auVar40._8_4_ = SUB84(auVar63._8_8_,0);
  auVar40._0_8_ = auVar63._0_8_;
  auVar40._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  local_3e8 = auVar52._0_8_ *
              (dVar47 * local_148.Rotation.ZW.m128d_f64[1] + local_148.Translation.XY.m128d_f64[0] +
              auVar40._8_8_);
  dStack_3e0 = auVar52._8_8_ *
               (dVar36 * local_148.Rotation.ZW.m128d_f64[1] + local_148.Translation.XY.m128d_f64[1]
               + auVar59._0_8_);
  iVar4 = (param_2->ROIVertices).ArrayNum;
  auVar49._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar49._0_8_ = local_148.Scale3D.ZW.m128d_f64[0];
  auVar49._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
  auVar49 = blendpd(auVar63,auVar59,2);
  local_3d8 = (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar42._4_4_,
                               ~(uint)lVar34 & auVar42._0_4_) *
              (auVar66._0_8_ * local_148.Rotation.ZW.m128d_f64[1] +
               local_148.Translation.ZW.m128d_f64[0] + auVar49._0_8_);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&param_2->ROIBefore,iVar4,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&param_2->ROIAfter,iVar4,Default);
  uVar31 = this->CurrentAttributeIndex;
  lVar33 = (longlong)(int)uVar31;
  iVar5 = (this->Attributes).ArrayNum;
  uVar22 = 0;
  if ((int)uVar31 < iVar5) {
    uVar22 = ~uVar31 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (local_428 = lVar33, local_420 = (longlong)iVar5,
     bVar21 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar29 = (code *)swi(3);
    (*pcVar29)();
    return;
  }
  pFVar6 = (this->Attributes).AllocatorInstance.Data;
  pFVar24 = UPreviewMesh::GetMesh(*(UPreviewMesh **)&this->field_0x2d8);
  local_3f8 = pFVar24;
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(&local_3b0,pFVar24);
  fVar3 = __real_447a0000;
  fVar2 = __real_38d1b717;
  dVar47 = __real_3ff0000000000000;
  local_3f0 = (longlong)iVar4;
  if (param_3->bSmooth == false) {
    if (param_3->bErase != false) {
      param_3 = (FBrushActionData *)&this->CurrentValueRange;
    }
    fVar2 = (this->CurrentValueRange).Max;
    uVar31 = 0;
    fVar3 = param_3->BrushValue;
    fVar56 = (this->CurrentValueRange).Min;
    fVar57 = *(float *)(*(longlong *)&this->field_0x128 + 0xc0);
    if (0 < iVar4) {
      lVar34 = 0;
      pFVar30 = local_418;
      do {
        iVar4 = (pFVar30->ROIVertices).ArrayNum;
        uVar32 = ~uVar31 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if (uVar22 == 0) {
          local_428 = (longlong)(int)uVar31;
          local_420 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
        }
        uVar22 = *(uint *)((pFVar30->ROIVertices).AllocatorInstance.Data + lVar34 * 4);
        uVar23 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                           (&local_3b0,uVar22);
        lVar35 = *(longlong *)
                  ((local_3f8->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        pdVar1 = (double *)(lVar35 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        local_3c0 = *(double *)(lVar35 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        dVar47 = local_3e8 - *pdVar1;
        dVar36 = dStack_3e0 - pdVar1[1];
        auVar45._0_8_ = (local_3d8 - local_3c0) * (local_3d8 - local_3c0);
        auVar45._8_8_ = 0;
        auVar53._0_8_ = dVar36 * dVar36 + dVar47 * dVar47 + auVar45._0_8_;
        auVar53._8_8_ = 0;
        auVar42 = sqrtpd(auVar45,auVar53);
        dVar47 = CalculateBrushFalloff(this,auVar42._0_8_);
        uVar22 = 0;
        if ((int)uVar23 < *(int *)(pFVar6 + lVar33 * 0x30 + 0x18)) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (local_428 = (longlong)(int)uVar23,
           local_420 = (longlong)*(int *)(pFVar6 + lVar33 * 0x30 + 0x18),
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pFVar30 = local_418;
        uVar60 = *(undefined4 *)
                  (*(longlong *)(pFVar6 + lVar33 * 0x30 + 0x10) + (longlong)(int)uVar23 * 4);
        iVar4 = (local_418->ROIBefore).ArrayNum;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if (uVar22 == 0) {
          local_428 = (longlong)(int)uVar31;
          local_420 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
        }
        *(undefined4 *)((pFVar30->ROIBefore).AllocatorInstance.Data + lVar34 * 4) = uVar60;
        iVar4 = (pFVar30->ROIBefore).ArrayNum;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if (uVar22 == 0) {
          local_428 = (longlong)(int)uVar31;
          local_420 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
        }
        pFVar7 = (pFVar30->ROIBefore).AllocatorInstance.Data;
        fVar55 = (this->CurrentValueRange).Min;
        fVar54 = (fVar3 - *(float *)(pFVar7 + lVar34 * 4)) *
                 (float)dVar47 * (fVar2 - fVar56) * fVar57 + *(float *)(pFVar7 + lVar34 * 4);
        if ((fVar55 <= fVar54) && (fVar55 = (this->CurrentValueRange).Max, fVar54 <= fVar55)) {
          fVar55 = fVar54;
        }
        iVar4 = (pFVar30->ROIAfter).ArrayNum;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_428 = lVar34, local_420 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        uVar31 = uVar31 + 1;
        *(float *)((pFVar30->ROIAfter).AllocatorInstance.Data + lVar34 * 4) = fVar55;
        lVar34 = lVar34 + 1;
      } while (lVar34 < local_3f0);
    }
  }
  else {
    uVar31 = 0;
    if (0 < iVar4) {
      local_400 = 0;
      do {
        lVar34 = local_400;
        pFVar30 = local_418;
        uVar32 = ~uVar31 >> 0x1f;
        iVar4 = (local_418->ROIVertices).ArrayNum;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if (uVar22 == 0) {
          local_428 = (longlong)(int)uVar31;
          local_420 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
        }
        fVar56 = 0.0;
        fVar57 = 0.0;
        uVar22 = *(uint *)((pFVar30->ROIVertices).AllocatorInstance.Data + lVar34 * 4);
        local_3b8 = (ulonglong)uVar22;
        local_2d0 = (undefined ***)0x0;
        local_388.HeapAllocation = (longlong *)0x0;
        lVar34 = *(longlong *)
                  ((pFVar24->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar22 >> 9) * 8)
        ;
        pdVar1 = (double *)(lVar34 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        local_3d0 = *pdVar1;
        dStack_3c8 = pdVar1[1];
        local_3c0 = *(double *)(lVar34 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        local_2e8 = &
                    ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
        ;
        local_2e0 = CONCAT44(uStack_304,uVar22);
        local_2f8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                    ::Call;
        local_398 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                    ::Call;
        local_308 = uVar22;
        pFStack_300 = pFVar24;
        pFStack_2d8 = pFVar24;
        UE::Core::Private::Function::
        TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
        CloneToEmptyStorage(&local_2e8,&local_388);
        auVar18 = local_278;
        uVar15 = uStack_290;
        plStack_270 = local_388.HeapAllocation;
        uVar13 = local_388.InlineAllocation._16_8_;
        local_2a8 = &pFVar24->VertexEdgeLists;
        uVar60 = (undefined4)local_288;
        uVar61 = local_288._4_4_;
        uVar16 = (undefined4)uStack_280;
        uVar17 = uStack_280._4_4_;
        lVar34 = CONCAT44(local_388.InlineAllocation._4_4_,local_388.InlineAllocation._0_4_);
        uVar25 = CONCAT44(local_388.InlineAllocation._12_4_,local_388.InlineAllocation._8_4_);
        local_298 = local_398;
        uStack_290 = uStack_390;
        local_2a0 = uVar22;
        local_288 = lVar34;
        uStack_280 = uVar25;
        local_278[0] = local_388.InlineAllocation[0x10];
        local_278[1] = local_388.InlineAllocation[0x11];
        local_278[2] = local_388.InlineAllocation[0x12];
        local_278[3] = local_388.InlineAllocation[0x13];
        local_278[4] = local_388.InlineAllocation[0x14];
        local_278[5] = local_388.InlineAllocation[0x15];
        local_278[6] = local_388.InlineAllocation[0x16];
        local_278[7] = local_388.InlineAllocation[0x17];
        local_288._0_1_ = (uchar)uVar60;
        local_288._1_1_ = SUB41(uVar60,1);
        local_288._2_1_ = SUB41(uVar60,2);
        local_288._3_1_ = SUB41(uVar60,3);
        local_388.InlineAllocation[0] = (uchar)local_288;
        local_388.InlineAllocation[1] = local_288._1_1_;
        local_388.InlineAllocation[2] = local_288._2_1_;
        local_388.InlineAllocation[3] = local_288._3_1_;
        local_288._4_1_ = (uchar)uVar61;
        local_288._5_1_ = SUB41(uVar61,1);
        local_288._6_1_ = SUB41(uVar61,2);
        local_288._7_1_ = SUB41(uVar61,3);
        local_388.InlineAllocation[4] = local_288._4_1_;
        local_388.InlineAllocation[5] = local_288._5_1_;
        local_388.InlineAllocation[6] = local_288._6_1_;
        local_388.InlineAllocation[7] = local_288._7_1_;
        uStack_280._0_1_ = (uchar)uVar16;
        uStack_280._1_1_ = SUB41(uVar16,1);
        uStack_280._2_1_ = SUB41(uVar16,2);
        uStack_280._3_1_ = SUB41(uVar16,3);
        local_388.InlineAllocation[8] = (uchar)uStack_280;
        local_388.InlineAllocation[9] = uStack_280._1_1_;
        local_388.InlineAllocation[10] = uStack_280._2_1_;
        local_388.InlineAllocation[0xb] = uStack_280._3_1_;
        uStack_280._4_1_ = (uchar)uVar17;
        uStack_280._5_1_ = SUB41(uVar17,1);
        uStack_280._6_1_ = SUB41(uVar17,2);
        uStack_280._7_1_ = SUB41(uVar17,3);
        local_388.InlineAllocation[0xc] = uStack_280._4_1_;
        local_388.InlineAllocation[0xd] = uStack_280._5_1_;
        local_388.InlineAllocation[0xe] = uStack_280._6_1_;
        local_388.InlineAllocation[0xf] = uStack_280._7_1_;
        local_278[0] = auVar18[0];
        local_278[1] = auVar18[1];
        local_278[2] = auVar18[2];
        local_278[3] = auVar18[3];
        local_278[4] = auVar18[4];
        local_278[5] = auVar18[5];
        local_278[6] = auVar18[6];
        local_278[7] = auVar18[7];
        local_388.InlineAllocation[0x10] = local_278[0];
        local_388.InlineAllocation[0x11] = local_278[1];
        local_388.InlineAllocation[0x12] = local_278[2];
        local_388.InlineAllocation[0x13] = local_278[3];
        local_388.InlineAllocation[0x14] = local_278[4];
        local_388.InlineAllocation[0x15] = local_278[5];
        local_388.InlineAllocation[0x16] = local_278[6];
        local_388.InlineAllocation[0x17] = local_278[7];
        local_388.HeapAllocation = (void *)0x0;
        local_388.InlineAllocation[0x10] = (uchar)uVar13;
        local_388.InlineAllocation[0x11] = SUB81(uVar13,1);
        local_388.InlineAllocation[0x12] = SUB81(uVar13,2);
        local_388.InlineAllocation[0x13] = SUB81(uVar13,3);
        local_388.InlineAllocation[0x14] = SUB81(uVar13,4);
        local_388.InlineAllocation[0x15] = SUB81(uVar13,5);
        local_388.InlineAllocation[0x16] = SUB81(uVar13,6);
        local_388.InlineAllocation[0x17] = SUB81(uVar13,7);
        local_278[0] = local_388.InlineAllocation[0x10];
        local_278[1] = local_388.InlineAllocation[0x11];
        local_278[2] = local_388.InlineAllocation[0x12];
        local_278[3] = local_388.InlineAllocation[0x13];
        local_278[4] = local_388.InlineAllocation[0x14];
        local_278[5] = local_388.InlineAllocation[0x15];
        local_278[6] = local_388.InlineAllocation[0x16];
        local_278[7] = local_388.InlineAllocation[0x17];
        auVar19 = local_278;
        local_388.HeapAllocation = (void *)0x0;
        local_278[0] = auVar18[0];
        local_278[1] = auVar18[1];
        local_278[2] = auVar18[2];
        local_278[3] = auVar18[3];
        local_278[4] = auVar18[4];
        local_278[5] = auVar18[5];
        local_278[6] = auVar18[6];
        local_278[7] = auVar18[7];
        local_388.InlineAllocation[0x10] = local_278[0];
        local_388.InlineAllocation[0x11] = local_278[1];
        local_388.InlineAllocation[0x12] = local_278[2];
        local_388.InlineAllocation[0x13] = local_278[3];
        local_388.InlineAllocation[0x14] = local_278[4];
        local_388.InlineAllocation[0x15] = local_278[5];
        local_388.InlineAllocation[0x16] = local_278[6];
        local_388.InlineAllocation[0x17] = local_278[7];
        uStack_280._4_1_ = (uchar)uVar17;
        uStack_280._5_1_ = SUB41(uVar17,1);
        uStack_280._6_1_ = SUB41(uVar17,2);
        uStack_280._7_1_ = SUB41(uVar17,3);
        local_388.InlineAllocation[0xc] = uStack_280._4_1_;
        local_388.InlineAllocation[0xd] = uStack_280._5_1_;
        local_388.InlineAllocation[0xe] = uStack_280._6_1_;
        local_388.InlineAllocation[0xf] = uStack_280._7_1_;
        uStack_280._0_1_ = (uchar)uVar16;
        uStack_280._1_1_ = SUB41(uVar16,1);
        uStack_280._2_1_ = SUB41(uVar16,2);
        uStack_280._3_1_ = SUB41(uVar16,3);
        local_388.InlineAllocation[8] = (uchar)uStack_280;
        local_388.InlineAllocation[9] = uStack_280._1_1_;
        local_388.InlineAllocation[10] = uStack_280._2_1_;
        local_388.InlineAllocation[0xb] = uStack_280._3_1_;
        local_288._4_1_ = (uchar)uVar61;
        local_288._5_1_ = SUB41(uVar61,1);
        local_288._6_1_ = SUB41(uVar61,2);
        local_288._7_1_ = SUB41(uVar61,3);
        local_388.InlineAllocation[4] = local_288._4_1_;
        local_388.InlineAllocation[5] = local_288._5_1_;
        local_388.InlineAllocation[6] = local_288._6_1_;
        local_388.InlineAllocation[7] = local_288._7_1_;
        local_288._0_1_ = (uchar)uVar60;
        local_288._1_1_ = SUB41(uVar60,1);
        local_288._2_1_ = SUB41(uVar60,2);
        local_288._3_1_ = SUB41(uVar60,3);
        local_388.InlineAllocation[0] = (uchar)local_288;
        local_388.InlineAllocation[1] = local_288._1_1_;
        local_388.InlineAllocation[2] = local_288._2_1_;
        local_388.InlineAllocation[3] = local_288._3_1_;
        uStack_390 = uVar15;
        local_398 = (code *)0x0;
        local_278 = auVar19;
        if (local_2f8 != (code *)0x0) {
          pppuVar26 = &local_2e8;
          if (local_2d0 != (undefined ***)0x0) {
            pppuVar26 = local_2d0;
          }
          (*(code *)(*pppuVar26)[2])();
        }
        pFVar14 = local_2a8;
        local_410 = local_2a0;
        local_368 = local_298;
        local_340 = (longlong *)0x0;
        if (local_298 != (code *)0x0) {
          plVar28 = &local_288;
          if (plStack_270 != (longlong *)0x0) {
            plVar28 = plStack_270;
          }
          (**(code **)*plVar28)(plVar28,local_358);
        }
        pcVar29 = local_368;
        UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
                  (&local_268,pFVar14,local_410,false);
        local_1a8 = pcVar29;
        local_238 = (code *)0x0;
        plStack_210 = (longlong *)0x0;
        plStack_180 = (longlong *)0x0;
        if (pcVar29 != (code *)0x0) {
          plVar28 = local_358;
          if (local_340 != (longlong *)0x0) {
            plVar28 = local_340;
          }
          (**(code **)*plVar28)(plVar28,&local_198);
          pcVar29 = local_368;
        }
        plVar28 = plStack_210;
        uVar13 = local_218;
        uVar25 = uStack_230;
        pcVar20 = local_238;
        uVar60 = (undefined4)local_228;
        uVar61 = local_228._4_4_;
        uVar16 = (undefined4)uStack_220;
        uVar17 = uStack_220._4_4_;
        local_238 = local_1a8;
        uStack_230 = uStack_1a0;
        local_218 = local_188;
        plStack_210 = plStack_180;
        local_228 = CONCAT44(uStack_194,local_198);
        uStack_220 = CONCAT44(uStack_18c,uStack_190);
        local_1a8 = pcVar20;
        uStack_1a0 = uVar25;
        local_198 = uVar60;
        uStack_194 = uVar61;
        uStack_190 = uVar16;
        uStack_18c = uVar17;
        local_188 = uVar13;
        plStack_180 = plVar28;
        if (pcVar20 != (code *)0x0) {
          plVar27 = (longlong *)&local_198;
          if (plVar28 != (longlong *)0x0) {
            plVar27 = plVar28;
          }
          (**(code **)(*plVar27 + 0x10))();
          pcVar29 = local_368;
        }
        if (pcVar29 != (code *)0x0) {
          plVar28 = local_358;
          if (local_340 != (longlong *)0x0) {
            plVar28 = local_340;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
        uVar22 = local_2a0;
        pFVar14 = local_2a8;
        local_338 = local_298;
        local_310 = (longlong *)0x0;
        if (local_298 != (code *)0x0) {
          plVar28 = &local_288;
          if (plStack_270 != (longlong *)0x0) {
            plVar28 = plStack_270;
          }
          (**(code **)*plVar28)(plVar28,local_328);
        }
        local_208 = pFVar14;
        local_200 = uVar22;
        local_1fc = 0xffffffff;
        local_1f8 = 0;
        local_1f0 = 0xffffffffffffffff;
        local_1d8 = (code *)0x0;
        plStack_1b0 = (longlong *)0x0;
        local_178 = local_338;
        plStack_150 = (longlong *)0x0;
        if (local_338 != (code *)0x0) {
          plVar28 = local_328;
          if (local_310 != (longlong *)0x0) {
            plVar28 = local_310;
          }
          (**(code **)*plVar28)(plVar28,&local_168);
        }
        plVar28 = plStack_1b0;
        uVar13 = local_1b8;
        uVar25 = uStack_1d0;
        pcVar29 = local_1d8;
        uVar60 = (undefined4)local_1c8;
        uVar61 = local_1c8._4_4_;
        uVar16 = (undefined4)uStack_1c0;
        uVar17 = uStack_1c0._4_4_;
        local_1d8 = local_178;
        uStack_1d0 = uStack_170;
        local_1b8 = local_158;
        plStack_1b0 = plStack_150;
        local_1c8 = CONCAT44(uStack_164,local_168);
        uStack_1c0 = CONCAT44(uStack_15c,uStack_160);
        local_178 = pcVar29;
        uStack_170 = uVar25;
        local_168 = uVar60;
        uStack_164 = uVar61;
        uStack_160 = uVar16;
        uStack_15c = uVar17;
        local_158 = uVar13;
        plStack_150 = plVar28;
        if (pcVar29 != (code *)0x0) {
          plVar27 = (longlong *)&local_168;
          if (plVar28 != (longlong *)0x0) {
            plVar27 = plVar28;
          }
          (**(code **)(*plVar27 + 0x10))();
        }
        dVar36 = local_3c0;
        dVar11 = dStack_3c8;
        dVar12 = local_3d0;
        if (local_338 != (code *)0x0) {
          plVar28 = local_328;
          if (local_310 != (longlong *)0x0) {
            plVar28 = local_310;
          }
          (**(code **)(*plVar28 + 0x10))();
          dVar36 = local_3c0;
          dVar11 = dStack_3c8;
          dVar12 = local_3d0;
        }
        while ((((local_268.ListSet != local_208 || (local_268.ListIndex != local_200)) ||
                (local_268.iCur != (int)local_1f0)) || (local_268.cur_ptr != local_1f0._4_4_))) {
          local_408[0] = local_268.cur_value;
          UE::Core::Private::Function::CheckCallable(local_238);
          pcVar29 = local_238;
          plVar28 = &local_228;
          if (plStack_210 != (longlong *)0x0) {
            plVar28 = plStack_210;
          }
          uVar25 = (**(code **)(*plVar28 + 8))();
          uVar22 = (*pcVar29)(uVar25,local_408);
          uVar23 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                             (&local_3b0,uVar22);
          lVar34 = *(longlong *)
                    ((pFVar24->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar22 >> 9) * 8);
          pdVar1 = (double *)(lVar34 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
          local_3c0 = *(double *)(lVar34 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
          dVar46 = dVar12 - *pdVar1;
          dVar50 = dVar11 - pdVar1[1];
          fVar54 = (float)(dVar47 / (dVar50 * dVar50 + dVar46 * dVar46 +
                                    (dVar36 - local_3c0) * (dVar36 - local_3c0)));
          fVar55 = fVar2;
          if ((fVar2 <= fVar54) && (fVar55 = fVar54, fVar3 <= fVar54)) {
            fVar55 = fVar3;
          }
          uVar22 = 0;
          if ((int)uVar23 < *(int *)(pFVar6 + lVar33 * 0x30 + 0x18)) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (local_428 = (longlong)(int)uVar23,
             local_420 = (longlong)*(int *)(pFVar6 + lVar33 * 0x30 + 0x18),
             bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
          fVar57 = fVar57 + fVar55;
          fVar56 = fVar56 + fVar55 * *(float *)(*(longlong *)(pFVar6 + lVar33 * 0x30 + 0x10) +
                                               (longlong)(int)uVar23 * 4);
          UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_268);
        }
        if (local_1d8 != (code *)0x0) {
          plVar28 = &local_1c8;
          if (plStack_1b0 != (longlong *)0x0) {
            plVar28 = plStack_1b0;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
        if (local_238 != (code *)0x0) {
          plVar28 = &local_228;
          if (plStack_210 != (longlong *)0x0) {
            plVar28 = plStack_210;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
        if (local_298 != (code *)0x0) {
          plVar28 = &local_288;
          if (plStack_270 != (longlong *)0x0) {
            plVar28 = plStack_270;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
        auVar44._0_8_ = (local_3e8 - dVar12) * (local_3e8 - dVar12);
        auVar44._8_8_ = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (dStack_3e0 - dVar11) * (dStack_3e0 - dVar11) + auVar44._0_8_ +
                       (local_3d8 - dVar36) * (local_3d8 - dVar36);
        auVar42 = sqrtpd(auVar44,auVar8);
        dVar36 = CalculateBrushFalloff(this,auVar42._0_8_);
        uVar23 = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                           (&local_3b0,(int)local_3b8);
        lVar34 = (longlong)(int)uVar23;
        fVar55 = (float)dVar36 * __real_3e800000;
        uVar22 = 0;
        if ((int)uVar23 < *(int *)(pFVar6 + lVar33 * 0x30 + 0x18)) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (local_428 = lVar34, local_420 = (longlong)*(int *)(pFVar6 + lVar33 * 0x30 + 0x18),
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        if (0.0 <= fVar55) {
          if (__real_3f800000 <= fVar55) {
            fVar55 = __real_3f800000;
          }
        }
        else {
          fVar55 = 0.0;
        }
        uVar22 = 0;
        if ((int)uVar23 < *(int *)(pFVar6 + lVar33 * 0x30 + 0x18)) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        fVar56 = (__real_3f800000 - fVar55) *
                 *(float *)(*(longlong *)(pFVar6 + lVar33 * 0x30 + 0x10) + lVar34 * 4) +
                 fVar55 * (fVar56 / fVar57);
        if ((uVar22 == 0) &&
           (local_428 = lVar34, local_420 = (longlong)*(int *)(pFVar6 + lVar33 * 0x30 + 0x18),
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        pFVar30 = local_418;
        uVar60 = *(undefined4 *)(*(longlong *)(pFVar6 + lVar33 * 0x30 + 0x10) + lVar34 * 4);
        iVar4 = (local_418->ROIBefore).ArrayNum;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if (uVar22 == 0) {
          local_428 = (longlong)(int)uVar31;
          local_420 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
        }
        lVar34 = local_400;
        *(undefined4 *)((pFVar30->ROIBefore).AllocatorInstance.Data + local_400 * 4) = uVar60;
        fVar57 = (this->CurrentValueRange).Min;
        if ((fVar57 <= fVar56) && (fVar57 = (this->CurrentValueRange).Max, fVar56 <= fVar57)) {
          fVar57 = fVar56;
        }
        iVar4 = (pFVar30->ROIAfter).ArrayNum;
        uVar22 = 0;
        if ((int)uVar31 < iVar4) {
          uVar22 = uVar32;
        }
        if (uVar22 == 0) {
          local_428 = (longlong)(int)uVar31;
          local_420 = (longlong)iVar4;
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar21) {
            pcVar29 = (code *)swi(3);
            (*pcVar29)();
            return;
          }
        }
        uVar31 = uVar31 + 1;
        *(float *)((pFVar30->ROIAfter).AllocatorInstance.Data + lVar34 * 4) = fVar57;
        local_400 = lVar34 + 1;
        pFVar24 = local_3f8;
      } while (local_400 < local_3f0);
    }
  }
  return;
}

// ApplyStamp_Paint @ 14cce4e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::ApplyStamp_Paint
          (UMeshAttributePaintTool *this,FBrushStampData *param_1,FStampActionData *param_2)

{
  FBrushActionData local_res8 [4];
  
  local_res8[0].bSmooth = this->bInSmoothStroke;
  local_res8[0].bErase = this->bInRemoveStroke;
  local_res8[0].BrushValue = 1.0;
  ApplyStamp_Paint(this,param_1,param_2,local_res8);
  return;
}

// BeginChange @ 14cce6450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::BeginChange(UMeshAttributePaintTool *this)

{
  TUniquePtr<TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange>,TDefaultDelete<TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange>_>_>
  *pTVar1;
  void *pvVar2;
  FMeshAttributePaintChange *pFVar3;
  TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *pTVar4;
  FMeshAttributePaintChange *pFVar5;
  FMeshAttributePaintChange *pFVar6;
  UInteractiveToolManager *pUVar7;
  FText *pFVar8;
  FMeshAttributePaintChange *pFVar9;
  longlong local_28;
  undefined1 local_20 [24];
  
  if (this->CurrentAttributeIndex < 0) {
    return;
  }
  pFVar9 = (FMeshAttributePaintChange *)0x0;
  pTVar1 = &this->ActiveChangeBuilder;
  if (pTVar1->Ptr == (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0) {
    pFVar5 = ::operator_new(0x58);
    pFVar6 = pFVar9;
    if (pFVar5 != (FMeshAttributePaintChange *)0x0) {
      ((TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_> *)
      &pFVar5->field_0x0)->Ptr = (FMeshAttributePaintChange *)0x0;
      *(undefined8 *)&pFVar5->field_0x8 = 0;
      *(undefined8 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x8 = 0;
      *(undefined8 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x20 = 0;
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x28 = 0;
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x2c = 0x80;
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x30 = 0xffffffff;
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x34 = 0;
      *(undefined8 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x40 = 0;
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar5->field_0x8)->field_0x48 = 0;
      pFVar6 = pFVar5;
    }
    if (pTVar1 == (TUniquePtr<TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange>,TDefaultDelete<TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange>_>_>
                   *)&local_28) {
      if (pFVar6 != (FMeshAttributePaintChange *)0x0) {
        *(undefined4 *)
         &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
          &pFVar6->field_0x8)->field_0x48 = 0;
        pvVar2 = *(void **)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)&pFVar6->field_0x8)->field_0x40;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar6->field_0x8);
        pFVar3 = ((TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_>
                   *)&pFVar6->field_0x0)->Ptr;
        pFVar5 = pFVar6;
        if (pFVar3 != (FMeshAttributePaintChange *)0x0) {
          (**(code **)(*(longlong *)pFVar3 + 0x48))(pFVar3,1);
        }
        goto LAB_14cce6549;
      }
    }
    else {
      pFVar5 = (FMeshAttributePaintChange *)pTVar1->Ptr;
      pTVar1->Ptr = (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)pFVar6;
      if (pFVar5 != (FMeshAttributePaintChange *)0x0) {
        *(undefined4 *)
         &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
          &pFVar5->field_0x8)->field_0x48 = 0;
        pvVar2 = *(void **)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)&pFVar5->field_0x8)->field_0x40;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar5->field_0x8);
        pFVar6 = ((TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_>
                   *)&pFVar5->field_0x0)->Ptr;
        if (pFVar6 != (FMeshAttributePaintChange *)0x0) {
          (**(code **)(*(longlong *)pFVar6 + 0x48))(pFVar6,1);
        }
LAB_14cce6549:
        ::operator_delete(pFVar5,0x58);
      }
    }
  }
  pTVar4 = pTVar1->Ptr;
  pFVar6 = ::operator_new(0xa0);
  if (pFVar6 != (FMeshAttributePaintChange *)0x0) {
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x30 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x40 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x48 = 0;
    *(undefined8 *)&pFVar6->field_0x58 = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 8) = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x20) = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x28) = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x30) = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x38) = 0;
    *(undefined8 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x8 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x10 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x18 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x20 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x28 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar6->field_0x8)->field_0x38 = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x10) = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x18) = 0;
    *(undefined8 *)(&pFVar6->field_0x58 + 0x40) = 0;
    ((TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_> *)
    &pFVar6->field_0x0)->Ptr = (FMeshAttributePaintChange *)&___7FMeshAttributePaintChange__6B_;
    pFVar9 = pFVar6;
  }
  if (pTVar4 == (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)local_20) {
    if (pFVar9 == (FMeshAttributePaintChange *)0x0) goto LAB_14cce65f8;
    pFVar6 = ((TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_> *)
             &pFVar9->field_0x0)->Ptr;
  }
  else {
    pFVar5 = (pTVar4->Change).Ptr;
    (pTVar4->Change).Ptr = pFVar9;
    if (pFVar5 == (FMeshAttributePaintChange *)0x0) goto LAB_14cce65f8;
    pFVar6 = ((TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_> *)
             &pFVar5->field_0x0)->Ptr;
    pFVar9 = pFVar5;
  }
  (**(code **)&pFVar6->field_0x48)(pFVar9,1);
LAB_14cce65f8:
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &pTVar4->SavedIndices);
  *(int *)&((pTVar1->Ptr->Change).Ptr)->field_0x38 = this->CurrentAttributeIndex;
  pUVar7 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)(local_20 + 8),L"UMeshAttributePaintTool",L"AttributeValuesChange",
                      L"Paint");
  UE::TransactionUtil::FLongTransactionTracker::Open
            ((FLongTransactionTracker *)&this->field_0x3c0,pFVar8,pUVar7);
  return;
}

// CalculateBrushFalloff @ 14cce7cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall
UMeshAttributePaintTool::CalculateBrushFalloff(UMeshAttributePaintTool *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_3ff0000000000000;
  dVar1 = __real_3ff0000000000000 - (double)*(float *)(*(longlong *)&this->field_0x128 + 0xc4);
  if (0.0 <= dVar1) {
    if (__real_3ff0000000000000 <= dVar1) {
      dVar1 = __real_3ff0000000000000;
    }
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = (double)(**(code **)(*(longlong *)this + 0x448))();
  if (dVar1 < param_1 / dVar2) {
    dVar1 = (param_1 / dVar2 - dVar1) / (dVar3 - dVar1);
    dVar2 = 0.0;
    if ((0.0 <= dVar1) && (dVar2 = dVar1, dVar3 <= dVar1)) {
      dVar2 = dVar3;
    }
    dVar3 = dVar3 - dVar2 * dVar2;
    dVar3 = dVar3 * dVar3 * dVar3;
  }
  return dVar3;
}

// CalculateVertexROI @ 14cce8330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::CalculateVertexROI
          (UMeshAttributePaintTool *this,FBrushStampData *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UMeshAttributePaintTool *pUVar4;
  longlong *plVar5;
  TVector<double> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStackY_258 [32];
  undefined1 local_228 [24];
  float local_210;
  double *local_208;
  TVector<double>_u_0 local_200;
  undefined1 local_1e8 [16];
  double local_1d8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined2 local_14c;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  UPreviewMesh::GetTransform(*(UPreviewMesh **)&this->field_0x2d8,&local_118);
  local_118.Rotation.XY.m128d_f64[0] =
       local_118.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] =
       local_118.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_118.Rotation.ZW.m128d_f64[0] =
       local_118.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] =
       local_118.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_118.Translation.ZW.m128d_f64[0] =
       (param_1->WorldPosition).field0_0x0._s_0.Z - local_118.Translation.ZW.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[0] =
       (param_1->WorldPosition).field0_0x0._s_0.X - local_118.Translation.XY.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[1] =
       (param_1->WorldPosition).field0_0x0._s_0.Y - local_118.Translation.XY.m128d_f64[1];
  uVar23 = (undefined4)((ulonglong)local_118.Translation.XY.m128d_f64[1] >> 0x20);
  auVar18._8_4_ = SUB84(local_118.Rotation.XY.m128d_f64[1],0);
  auVar18._0_8_ = local_118.Rotation.XY.m128d_f64[0];
  auVar18._12_4_ = (int)((ulonglong)local_118.Rotation.XY.m128d_f64[1] >> 0x20);
  auVar16._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[1],0);
  auVar16._0_8_ = local_118.Rotation.ZW.m128d_f64[0];
  auVar16._12_4_ = (int)((ulonglong)local_118.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar19 = blendpd(auVar18,auVar16,2);
  auVar27._8_4_ = SUB84(local_118.Translation.XY.m128d_f64[1],0);
  auVar27._0_8_ = local_118.Translation.XY.m128d_f64[0];
  auVar27._12_4_ = uVar23;
  auVar11._8_4_ = SUB84(local_118.Rotation.ZW.m128d_f64[0],0);
  auVar11._0_8_ = local_118.Rotation.XY.m128d_f64[1];
  auVar11._12_4_ = (int)((ulonglong)local_118.Rotation.ZW.m128d_f64[0] >> 0x20);
  auVar15._8_4_ = SUB84(local_118.Translation.XY.m128d_f64[1],0);
  auVar15._0_8_ = local_118.Translation.XY.m128d_f64[0];
  auVar15._12_4_ = uVar23;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_118.Translation.ZW.m128d_f64[0];
  auVar16 = blendpd(auVar15,auVar2,2);
  auVar28._0_8_ =
       auVar27._8_8_ * local_118.Rotation.XY.m128d_f64[0] -
       local_118.Rotation.XY.m128d_f64[1] * local_118.Translation.XY.m128d_f64[0];
  auVar28._8_8_ =
       local_118.Translation.ZW.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[1] -
       auVar11._8_8_ * local_118.Translation.XY.m128d_f64[1];
  auVar17._0_8_ =
       auVar16._0_8_ * local_118.Rotation.ZW.m128d_f64[0] -
       auVar19._0_8_ * local_118.Translation.ZW.m128d_f64[0];
  auVar17._8_8_ = auVar16._8_8_ * local_118.Rotation.ZW.m128d_f64[1] - auVar19._8_8_ * 0.0;
  dVar1 = auVar28._8_8_ + auVar28._8_8_;
  dVar10 = auVar17._0_8_ + auVar17._0_8_;
  uVar23 = SUB84(dVar10,0);
  uVar24 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar16 = blendpd(auVar28,auVar17,2);
  auVar25._8_4_ = uVar23;
  auVar25._0_8_ = dVar1;
  auVar25._12_4_ = uVar24;
  auVar12._8_4_ = uVar23;
  auVar12._0_8_ = dVar1;
  auVar12._12_4_ = uVar24;
  auVar21._8_4_ = uVar23;
  auVar21._0_8_ = dVar1;
  auVar21._12_4_ = uVar24;
  auVar29._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar29._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar26._0_8_ =
       auVar25._8_8_ * local_118.Rotation.XY.m128d_f64[0] -
       dVar1 * local_118.Rotation.XY.m128d_f64[1];
  auVar26._8_8_ =
       auVar29._0_8_ * local_118.Rotation.XY.m128d_f64[1] -
       auVar12._8_8_ * local_118.Rotation.ZW.m128d_f64[0];
  auVar16 = blendpd(auVar21,auVar29,2);
  auVar13._8_4_ = SUB84(auVar29._8_8_,0);
  auVar13._0_8_ = auVar29._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar22._0_8_ = auVar16._0_8_ * local_118.Rotation.ZW.m128d_f64[0] - auVar29._0_8_ * auVar19._0_8_
  ;
  auVar22._8_8_ = auVar16._8_8_ * local_118.Rotation.ZW.m128d_f64[1] - auVar13._8_8_ * auVar19._8_8_
  ;
  lVar7 = -(ulonglong)
           ((double)CONCAT44(local_118.Scale3D.ZW.m128d_f64[0]._4_4_ &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_118.Scale3D.ZW.m128d_f64[0]._0_4_ &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar8 = -(ulonglong)
           ((double)CONCAT44(local_118.Scale3D.XY.m128d_f64[0]._4_4_ &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             local_118.Scale3D.XY.m128d_f64[0]._0_4_ &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar9 = -(ulonglong)
           ((double)CONCAT44(local_118.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                             local_118.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar3._4_4_ = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
  auVar3._0_4_ = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
  auVar3._8_4_ = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
  auVar3._12_4_ = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar3);
  auVar14._8_4_ = SUB84(auVar26._8_8_,0);
  auVar14._0_8_ = auVar26._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  dVar10 = (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar16._12_4_,
                            ~(uint)lVar9 & auVar16._8_4_) *
           (dVar10 * local_118.Rotation.ZW.m128d_f64[1] + local_118.Translation.XY.m128d_f64[1] +
           auVar22._0_8_);
  local_1e8._8_4_ = SUB84(dVar10,0);
  local_1e8._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar16._4_4_,
                        ~(uint)lVar8 & auVar16._0_4_) *
       (dVar1 * local_118.Rotation.ZW.m128d_f64[1] + local_118.Translation.XY.m128d_f64[0] +
       auVar14._8_8_);
  local_1e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar19._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar19._0_8_ = local_118.Scale3D.ZW.m128d_f64[0];
  auVar19._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar19 = blendpd(auVar26,auVar22,2);
  local_1d8 = (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar16._4_4_,
                               ~(uint)lVar7 & auVar16._0_4_) *
              (auVar29._0_8_ * local_118.Rotation.ZW.m128d_f64[1] +
               local_118.Translation.ZW.m128d_f64[0] + auVar19._0_8_);
  dVar10 = (double)(**(code **)(*(longlong *)this + 0x448))(this);
  fVar20 = (float)dVar10;
  pUVar4 = (UMeshAttributePaintTool *)UPreviewMesh::GetMesh(*(UPreviewMesh **)&this->field_0x2d8);
  local_1a8 = (double)fVar20;
  local_1d0._s_0.X = (double)local_1e8._0_8_ - local_1a8;
  local_1d0._s_0.Y = (double)local_1e8._8_8_ - local_1a8;
  local_1b8 = (double)local_1e8._0_8_ + local_1a8;
  local_1b0 = (double)local_1e8._8_8_ + local_1a8;
  local_1d0._s_0.Z = local_1d8 - local_1a8;
  local_1a8 = local_1d8 + local_1a8;
  if (((((this->BrushActionProps).field0_0x0.DebugPtr)->bIsolateGeometrySelection == false) ||
      (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
       *(int *)&(this->SelectionTids).Elements.field_0x34)) &&
     (*(char *)(*(longlong *)&this->field_0x128 + 200) != '\0')) {
    local_228._16_4_ = fVar20 * fVar20;
    local_200._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshAttributePaintTool::CalculateVertexROI'::__l10::<lambda_2>,bool,int>
                 ::Call;
    local_228._0_8_ = pUVar4;
    local_228._8_8_ = (UMeshAttributePaintTool *)local_1e8;
  }
  else {
    if (*(char *)(*(longlong *)&this->field_0x128 + 200) == '\0') {
      local_198 = 0.0;
      dStack_190 = 0.0;
      local_188 = 0.0;
      local_178 = 0;
      uStack_170 = 0;
      local_148 = __real_3ff0000000000000;
      local_168 = ___xmm_3ff00000000000000000000000000000;
      uStack_160 = _UNK_15061cbc8;
      local_158 = 0x42b40000;
      local_154 = 0x42c80000;
      local_150 = 0x3f800000;
      local_14c = 0;
      plVar5 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x398))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_198);
      local_228._16_8_ = local_188;
      local_228._0_8_ = local_198;
      local_228._8_8_ = dStack_190;
      pTVar6 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                         ((TTransformSRT3<double> *)&this->field_0x370,
                          (TVector<double> *)&local_200._s_0,(TVector<double> *)local_228);
      local_138 = (pTVar6->field0_0x0)._s_0.X;
      dStack_130 = (pTVar6->field0_0x0)._s_0.Y;
      local_128 = (pTVar6->field0_0x0)._s_0.Z;
    }
    local_228._16_8_ = local_1e8;
    local_208 = &local_138;
    local_200._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshAttributePaintTool::CalculateVertexROI'::__l5::<lambda_1>,bool,int>
                 ::Call;
    local_228._0_8_ = this;
    local_228._8_8_ = pUVar4;
    local_210 = fVar20 * fVar20;
  }
  local_200._s_0.Y = (double)local_228;
  UE::Geometry::FSparseDynamicPointOctree3::RangeQuery
            ((FSparseDynamicPointOctree3 *)&this->VerticesOctree,
             (TAxisAlignedBox3<double> *)&local_1d0._s_0,
             (TFunctionRef<bool___cdecl(int)> *)&local_200._s_0,param_2,
             (TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *)0x0
            );
  return;
}

// EndChange @ 14ccf8770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_> __thiscall
UMeshAttributePaintTool::EndChange(UMeshAttributePaintTool *this)

{
  TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *pTVar1;
  FMeshAttributePaintChange *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FMeshAttributePaintChange *in_RDX;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar1 = (this->ActiveChangeBuilder).Ptr;
  if (pTVar1 != (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0) {
    pFVar2 = (pTVar1->Change).Ptr;
    (pTVar1->Change).Ptr = (FMeshAttributePaintChange *)0x0;
    if (pFVar2 != (FMeshAttributePaintChange *)0x0) {
      local_58 = *(longlong *)&pFVar2->field_0x40;
      uVar4 = *(undefined8 *)&pFVar2->field_0x48;
      local_48 = *(longlong *)&pFVar2->field_0x50;
      uStack_40 = *(undefined8 *)&pFVar2->field_0x58;
      uVar3 = *(undefined8 *)&pFVar2->field_0x60;
      plStack_30 = *(longlong **)&pFVar2->field_0x68;
      *(code **)&pFVar2->field_0x40 =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&),void,UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
           ::Call;
      *(undefined8 *)&pFVar2->field_0x48 = uStack_50;
      *(undefined4 *)&pFVar2->field_0x50 = 0x52978c00;
      *(undefined4 *)&pFVar2->field_0x54 = 1;
      *(undefined4 *)&pFVar2->field_0x58 = 0x4cc96830;
      *(undefined4 *)&pFVar2->field_0x5c = 1;
      *(undefined4 *)&pFVar2->field_0x60 = (undefined4)local_38;
      *(undefined4 *)&pFVar2->field_0x64 = local_38._4_4_;
      *(undefined4 *)&pFVar2->field_0x68 = 0;
      *(undefined4 *)&pFVar2->field_0x6c = 0;
      local_38 = uVar3;
      uStack_50 = uVar4;
      if (local_58 != 0) {
        plVar5 = &local_48;
        if (plStack_30 != (longlong *)0x0) {
          plVar5 = plStack_30;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_58 = *(longlong *)&pFVar2->field_0x70;
      uVar4 = *(undefined8 *)&pFVar2->field_0x78;
      local_48 = *(longlong *)&pFVar2->field_0x80;
      uStack_40 = *(undefined8 *)&pFVar2->field_0x88;
      uVar3 = *(undefined8 *)&pFVar2->field_0x90;
      plStack_30 = *(longlong **)&pFVar2->field_0x98;
      *(code **)&pFVar2->field_0x70 =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&),void,UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
           ::Call;
      *(undefined8 *)&pFVar2->field_0x78 = uStack_50;
      *(undefined4 *)&pFVar2->field_0x80 = 0x52978c00;
      *(undefined4 *)&pFVar2->field_0x84 = 1;
      *(undefined4 *)&pFVar2->field_0x88 = 0x4cc96920;
      *(undefined4 *)&pFVar2->field_0x8c = 1;
      *(undefined4 *)&pFVar2->field_0x90 = (undefined4)local_38;
      *(undefined4 *)&pFVar2->field_0x94 = local_38._4_4_;
      *(undefined4 *)&pFVar2->field_0x98 = 0;
      *(undefined4 *)&pFVar2->field_0x9c = 0;
      local_38 = uVar3;
      if (local_58 != 0) {
        plVar5 = &local_48;
        if (plStack_30 != (longlong *)0x0) {
          plVar5 = plStack_30;
        }
        uStack_50 = uVar4;
        (**(code **)(*plVar5 + 0x10))();
      }
      *(FMeshAttributePaintChange **)in_RDX = pFVar2;
      return (TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_>)
             in_RDX;
    }
  }
  *(longlong *)in_RDX = 0;
  return (TUniquePtr<FMeshAttributePaintChange,TDefaultDelete<FMeshAttributePaintChange>_>)in_RDX;
}

// ExternalUpdateValues @ 14ccfa190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::ExternalUpdateValues
          (UMeshAttributePaintTool *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  code *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> **local_70;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  UMeshAttributePaintTool *local_60;
  FScriptContainerElement *local_58;
  
  if ((param_1 < 0) || ((this->Attributes).ArrayNum <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_968098766823357394>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshAttributePaintTool.cpp"
                       ,0x42e,"Attributes.IsValidIndex(AttribIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar9 = 0;
    if (param_1 < (this->Attributes).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = param_2->ArrayNum;
    uVar9 = 0;
    pFVar7 = (this->Attributes).AllocatorInstance.Data + (longlong)param_1 * 0x30;
    if (0 < (longlong)iVar2) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < param_3->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(undefined4 *)((param_3->AllocatorInstance).Data + lVar8 * 4);
        uVar5 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((param_2->AllocatorInstance).Data + lVar8 * 4);
        uVar6 = 0;
        if ((int)uVar5 < *(int *)(pFVar7 + 0x18)) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 1;
        *(undefined4 *)(*(longlong *)(pFVar7 + 0x10) + (longlong)(int)uVar5 * 4) = uVar1;
      } while (lVar8 < iVar2);
    }
    if (param_1 == this->CurrentAttributeIndex) {
      local_70 = &local_68;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshAttributePaintTool::ExternalUpdateValues'::__l10::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_68 = param_2;
      local_60 = this;
      local_58 = pFVar7;
      UPreviewMesh::EditMesh
                (*(UPreviewMesh **)&this->field_0x2d8,
                 (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14ccffa80

UClass * __cdecl UMeshAttributePaintTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintTool",
               &Z_Registration_Info_UClass_UMeshAttributePaintTool.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintTool,0xa00,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintTool>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintTool>,local_res8,
               UDynamicMeshBrushTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintTool.InnerSingleton;
}

// HasAccept @ 14cd03430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshAttributePaintTool::HasAccept(UMeshAttributePaintTool *this)

{
  return true;
}

// HasCancel @ 14cd034d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshAttributePaintTool::HasCancel(UMeshAttributePaintTool *this)

{
  return true;
}

// HitTest @ 14cd03890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshAttributePaintTool::HitTest
          (UMeshAttributePaintTool *this,TRay<double> *param_1,FHitResult *param_2)

{
  bool bVar1;
  code *local_68 [2];
  undefined **local_58;
  UMeshAttributePaintTool *local_50;
  undefined8 local_40;
  TVector<double>_u_0 local_38;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_38._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_20 = (param_1->Direction).field0_0x0._s_0.X;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshAttributePaintTool::HitTest'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_18 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_10 = (param_1->Direction).field0_0x0._s_0.Z;
  local_40 = 0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshAttributePaintTool::HitTest'::__l2::<lambda_1>,bool,int>::
                Call;
  local_50 = this;
  bVar1 = UPreviewMesh::FindRayIntersection
                    (*(UPreviewMesh **)&this->field_0x2d8,(TRay<double> *)&local_38._s_0,param_2,
                     (TFunction<bool___cdecl(int)> *)local_68);
  return bVar1;
}

// InitializeAttributes @ 14cd04b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::InitializeAttributes(UMeshAttributePaintTool *this)

{
  int *piVar1;
  TArray<UMeshAttributePaintTool::FAttributeData,TSizedDefaultAllocator<32>_> *this_00;
  UMeshAttributePaintToolProperties *this_01;
  IMeshVertexAttributeSource *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  FText *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined8 *local_res20;
  void *local_98;
  ulonglong local_90;
  void *local_88 [2];
  FText local_78;
  FText local_68 [2];
  
  this_01 = (this->AttribProps).field0_0x0.DebugPtr;
  pIVar2 = (this->AttributeSource).Ptr;
  pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_88);
  UMeshAttributePaintToolProperties::Initialize(this_01,pTVar11,true);
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
  }
  if ((((this->AttribProps).field0_0x0.DebugPtr)->Attributes).ArrayNum == 0) {
    plVar12 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    pcVar3 = *(code **)(*plVar12 + 0x360);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"UMeshAttributePaintTool",L"StartAttribPaintFailed",
                         L"No Float attributes exist for this mesh. Use the Attribute Editor to create one."
                        );
    (*pcVar3)(plVar12,pFVar13,3);
  }
  else {
    plVar12 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar12 + 0x360);
    pFVar13 = FText::FText(local_68);
    (*pcVar3)(plVar12,pFVar13,3);
    local_78.TextData.Reference = local_68[0].TextData.Reference;
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  iVar9 = (**(code **)((longlong)*(this->AttributeSource).Ptr + 0x18))();
  pIVar2 = (this->AttributeSource).Ptr;
  this->AttributeBufferCount = iVar9;
  (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_98);
  this_00 = &this->Attributes;
  iVar9 = (this->Attributes).ArrayNum;
  piVar1 = &(this->Attributes).ArrayNum;
  uVar19 = (uint)local_90;
  if (iVar9 < (int)uVar19) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,uVar19 - iVar9,&this_00->AllocatorInstance,piVar1,
                        &(this->Attributes).ArrayMax);
    DefaultConstructItems<UMeshAttributePaintTool::FAttributeData,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x30,uVar19 - iVar9);
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_90 & 0xffffffff);
    }
    if ((int)uVar19 < iVar9) {
      uVar16 = iVar9 - uVar19;
      if (((int)(uVar16 | uVar19) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar16 != 0) {
        TArray<UMeshAttributePaintTool::FAttributeData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar19,uVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this_00->AllocatorInstance,*piVar1,&(this->Attributes).ArrayMax);
      }
    }
  }
  uVar19 = 0;
  if (0 < (int)local_90) {
    lVar21 = 0;
    lVar20 = 0;
    do {
      uVar22 = ~uVar19 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar19 < (int)local_90) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar16 = uVar22;
      }
      uVar4 = *(undefined8 *)((longlong)local_98 + lVar21 * 8);
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)((this_00->AllocatorInstance).Data + lVar20) = uVar4;
      pIVar2 = (this->AttributeSource).Ptr;
      pcVar3 = *(code **)((longlong)*pIVar2 + 0x10);
      uVar16 = 0;
      if ((int)uVar19 < (int)local_90) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (FScriptContainerElement *)
                (*pcVar3)(pIVar2,&local_res20,*(undefined8 *)((longlong)local_98 + lVar21 * 8));
      uVar16 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (this_00->AllocatorInstance).Data + lVar20 + 8;
      if (pFVar15 != pFVar14) {
        puVar5 = *(undefined8 **)pFVar15;
        *(longlong *)pFVar15 = *(longlong *)pFVar14;
        *(longlong *)pFVar14 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      if (local_res20 != (undefined8 *)0x0) {
        (**(code **)*local_res20)(local_res20,1);
      }
      uVar16 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (this_00->AllocatorInstance).Data;
      iVar9 = *(int *)(pFVar15 + lVar20 + 0x18);
      pFVar14 = pFVar15 + lVar20 + 0x18;
      uVar16 = this->AttributeBufferCount;
      if (iVar9 < (int)uVar16) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar16 - iVar9,(ForAnyElementType *)(pFVar15 + lVar20 + 0x10),
                            (int *)pFVar14,(int *)(pFVar15 + lVar20 + 0x1c));
        memset((void *)(*(longlong *)(pFVar15 + lVar20 + 0x10) + (longlong)iVar10 * 4),0,
               (longlong)(int)(uVar16 - iVar9) << 2);
      }
      else {
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        if ((int)uVar16 < iVar9) {
          uVar18 = iVar9 - uVar16;
          if (((int)(uVar16 | uVar18) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar18 != 0) {
            pvVar6 = (void *)(*(longlong *)(pFVar15 + lVar20 + 0x10) + (longlong)(int)uVar16 * 4);
            iVar9 = (*(int *)pFVar14 - uVar16) - uVar18;
            if (iVar9 != 0) {
              memmove(pvVar6,(void *)((longlong)pvVar6 + (longlong)(int)uVar18 * 4),
                      (longlong)iVar9 << 2);
            }
            *(uint *)pFVar14 = *(int *)pFVar14 - uVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)(pFVar15 + lVar20 + 0x10),*(int *)pFVar14,
                       (int *)(pFVar15 + lVar20 + 0x1c));
          }
        }
      }
      uVar16 = 0;
      if (0 < this->AttributeBufferCount) {
        lVar17 = 0;
        do {
          uVar18 = 0;
          if ((int)uVar19 < *piVar1) {
            uVar18 = uVar22;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar12 = *(longlong **)((this_00->AllocatorInstance).Data + lVar20 + 8);
          uVar23 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar16);
          uVar18 = 0;
          if ((int)uVar19 < *piVar1) {
            uVar18 = uVar22;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (this_00->AllocatorInstance).Data;
          uVar18 = 0;
          if ((int)uVar16 < *(int *)(pFVar14 + lVar20 + 0x18)) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar16 = uVar16 + 1;
          *(undefined4 *)(*(longlong *)(pFVar14 + lVar20 + 0x10) + lVar17) = uVar23;
          lVar17 = lVar17 + 4;
        } while ((int)uVar16 < this->AttributeBufferCount);
      }
      uVar16 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (this_00->AllocatorInstance).Data + lVar20 + 0x10;
      uVar16 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar16 = uVar22;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (this->Attributes).AllocatorInstance.Data + lVar20 + 0x20;
      if (pFVar15 != pFVar14) {
        iVar9 = *(int *)&pFVar14[8].field_0x0;
        pFVar7 = pFVar15 + 0xc;
        pvVar6 = *(void **)&pFVar14->field_0x0;
        iVar10 = *(int *)pFVar7;
        *(int *)&pFVar15[8].field_0x0 = iVar9;
        if ((iVar9 == 0) && (iVar10 == 0)) {
          *(int *)pFVar7 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar9,iVar10,(ForAnyElementType *)pFVar15,iVar9,(int *)pFVar7);
          if (iVar9 != 0) {
            memcpy(*(void **)&pFVar15->field_0x0,pvVar6,(longlong)iVar9 << 2);
          }
        }
      }
      uVar19 = uVar19 + 1;
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x30;
    } while ((int)uVar19 < (int)local_90);
  }
  this->CurrentAttributeIndex = -1;
  this->PendingNewSelectedIndex = -1;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// IsFilteringTrianglesByFrontFacing @ 14cd084d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshAttributePaintTool::IsFilteringTrianglesByFrontFacing(UMeshAttributePaintTool *this)

{
  return *(char *)(*(longlong *)&this->field_0x128 + 200) == '\0';
}

// IsFilteringTrianglesBySelection @ 14cd084f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshAttributePaintTool::IsFilteringTrianglesBySelection(UMeshAttributePaintTool *this)

{
  if ((((this->BrushActionProps).field0_0x0.DebugPtr)->bIsolateGeometrySelection != false) &&
     (*(int *)&(this->SelectionTids).Elements.field_0x8 !=
      *(int *)&(this->SelectionTids).Elements.field_0x34)) {
    return true;
  }
  return false;
}

// IsInputSelectionValidOnOutput @ 14cd086f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshAttributePaintTool::IsInputSelectionValidOnOutput(UMeshAttributePaintTool *this)

{
  return true;
}

// IsTriangleBackFacing @ 14cd08910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshAttributePaintTool::IsTriangleBackFacing
          (UMeshAttributePaintTool *this,int param_1,FDynamicMesh3 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  double local_res20;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  TVector<double>_u_0 local_38 [2];
  
  if (param_1 == -1) {
    bVar1 = false;
  }
  else {
    local_98 = 0.0;
    dStack_90 = 0.0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = __real_3ff0000000000000;
    local_88 = 0.0;
    local_68 = ___xmm_3ff00000000000000000000000000000;
    uStack_60 = _UNK_15061cbc8;
    local_58 = 0x42b40000;
    local_54 = 0x42c80000;
    local_50 = 0x3f800000;
    local_4c = 0;
    plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
    local_38[0]._s_0.Z = local_88;
    local_38[0]._s_0.X = local_98;
    local_38[0]._s_0.Y = dStack_90;
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              ((TTransformSRT3<double> *)&this->field_0x370,(TVector<double> *)&local_d0._s_0,
               (TVector<double> *)&local_38[0]._s_0);
    UE::Geometry::FDynamicMesh3::GetTriInfo
              (param_2,param_1,(TVector<double> *)&local_b8._s_0,&local_res20,
               (TVector<double> *)&local_e8._s_0);
    bVar1 = 0.0 <= (local_e8._s_0.X - local_d0._s_0.X) * local_b8._s_0.X +
                   (local_e8._s_0.Y - local_d0._s_0.Y) * local_b8._s_0.Y +
                   (local_e8._s_0.Z - local_d0._s_0.Z) * local_b8._s_0.Z;
  }
  return bVar1;
}

// OnBeginDrag @ 14cd0e0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::OnBeginDrag(UMeshAttributePaintTool *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FBrushStampData *pFVar9;
  undefined8 *puVar10;
  bool bVar11;
  FBrushStampData *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  
  UBaseBrushTool::OnBeginDrag((UBaseBrushTool *)this,param_1);
  (this->PreviewBrushROI).ArrayNum = 0;
  if ((this->PreviewBrushROI).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PreviewBrushROI).AllocatorInstance,0,&(this->PreviewBrushROI).ArrayMax)
    ;
  }
  bVar11 = (bool)(**(code **)(*(longlong *)this + 0x3f8))(this);
  this->bInRemoveStroke = bVar11;
  bVar11 = (bool)(**(code **)(*(longlong *)this + 1000))(this);
  this->bInSmoothStroke = bVar11;
  BeginChange(this);
  lVar14 = 2;
  lVar15 = 2;
  pFVar9 = &this->StartStamp;
  puVar10 = (undefined8 *)&this->field_0x138;
  do {
    puVar13 = puVar10;
    pFVar12 = pFVar9;
    pFVar9 = (FBrushStampData *)&(pFVar12->HitResult).Normal.field_0x8;
    dVar1 = (double)puVar13[1];
    dVar2 = (double)puVar13[2];
    dVar3 = (double)puVar13[3];
    *(undefined8 *)pFVar12 = *puVar13;
    (pFVar12->WorldPosition).field0_0x0._s_0.X = dVar1;
    dVar1 = (double)puVar13[4];
    dVar4 = (double)puVar13[5];
    (pFVar12->WorldPosition).field0_0x0._s_0.Y = dVar2;
    (pFVar12->WorldPosition).field0_0x0._s_0.Z = dVar3;
    dVar2 = (double)puVar13[6];
    uVar5 = puVar13[7];
    (pFVar12->WorldNormal).field0_0x0._s_0.X = dVar1;
    (pFVar12->WorldNormal).field0_0x0._s_0.Y = dVar4;
    uVar6 = puVar13[8];
    uVar7 = puVar13[9];
    (pFVar12->WorldNormal).field0_0x0._s_0.Z = dVar2;
    (pFVar12->HitResult).FaceIndex = (int)uVar5;
    (pFVar12->HitResult).Time = (float)(int)((ulonglong)uVar5 >> 0x20);
    uVar5 = puVar13[10];
    uVar8 = puVar13[0xb];
    (pFVar12->HitResult).Distance = (float)(int)uVar6;
    (pFVar12->HitResult)._padding_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined8 *)&(pFVar12->HitResult).Location = uVar7;
    uVar6 = puVar13[0xc];
    uVar7 = puVar13[0xd];
    *(undefined8 *)&(pFVar12->HitResult).Location.field_0x8 = uVar5;
    *(undefined8 *)&(pFVar12->HitResult).Location.field_0x10 = uVar8;
    uVar5 = puVar13[0xe];
    uVar8 = puVar13[0xf];
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint = uVar6;
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint.field_0x8 = uVar7;
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint.field_0x10 = uVar5;
    *(undefined8 *)&(pFVar12->HitResult).Normal = uVar8;
    lVar15 = lVar15 + -1;
    puVar10 = puVar13 + 0x10;
  } while (lVar15 != 0);
  uVar5 = puVar13[0x11];
  uVar6 = puVar13[0x12];
  uVar7 = puVar13[0x13];
  *(undefined8 *)pFVar9 = puVar13[0x10];
  *(undefined8 *)&(pFVar12->HitResult).Normal.field_0x10 = uVar5;
  uVar5 = puVar13[0x14];
  uVar8 = puVar13[0x15];
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal = uVar6;
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal.field_0x8 = uVar7;
  uVar6 = puVar13[0x16];
  uVar7 = puVar13[0x17];
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal.field_0x10 = uVar5;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart = uVar8;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart.field_0x8 = uVar6;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart.field_0x10 = uVar7;
  pFVar9 = &this->LastStamp;
  puVar10 = (undefined8 *)&this->field_0x138;
  do {
    puVar13 = puVar10;
    pFVar12 = pFVar9;
    pFVar9 = (FBrushStampData *)&(pFVar12->HitResult).Normal.field_0x8;
    dVar1 = (double)puVar13[1];
    dVar2 = (double)puVar13[2];
    dVar3 = (double)puVar13[3];
    *(undefined8 *)pFVar12 = *puVar13;
    (pFVar12->WorldPosition).field0_0x0._s_0.X = dVar1;
    dVar1 = (double)puVar13[4];
    dVar4 = (double)puVar13[5];
    (pFVar12->WorldPosition).field0_0x0._s_0.Y = dVar2;
    (pFVar12->WorldPosition).field0_0x0._s_0.Z = dVar3;
    dVar2 = (double)puVar13[6];
    uVar5 = puVar13[7];
    (pFVar12->WorldNormal).field0_0x0._s_0.X = dVar1;
    (pFVar12->WorldNormal).field0_0x0._s_0.Y = dVar4;
    uVar6 = puVar13[8];
    uVar7 = puVar13[9];
    (pFVar12->WorldNormal).field0_0x0._s_0.Z = dVar2;
    (pFVar12->HitResult).FaceIndex = (int)uVar5;
    (pFVar12->HitResult).Time = (float)(int)((ulonglong)uVar5 >> 0x20);
    uVar5 = puVar13[10];
    uVar8 = puVar13[0xb];
    (pFVar12->HitResult).Distance = (float)(int)uVar6;
    (pFVar12->HitResult)._padding_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined8 *)&(pFVar12->HitResult).Location = uVar7;
    uVar6 = puVar13[0xc];
    uVar7 = puVar13[0xd];
    *(undefined8 *)&(pFVar12->HitResult).Location.field_0x8 = uVar5;
    *(undefined8 *)&(pFVar12->HitResult).Location.field_0x10 = uVar8;
    uVar5 = puVar13[0xe];
    uVar8 = puVar13[0xf];
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint = uVar6;
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint.field_0x8 = uVar7;
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint.field_0x10 = uVar5;
    *(undefined8 *)&(pFVar12->HitResult).Normal = uVar8;
    lVar14 = lVar14 + -1;
    puVar10 = puVar13 + 0x10;
  } while (lVar14 != 0);
  uVar5 = puVar13[0x10];
  uVar6 = puVar13[0x11];
  this->bStampPending = true;
  uVar7 = puVar13[0x12];
  uVar8 = puVar13[0x13];
  *(undefined8 *)pFVar9 = uVar5;
  *(undefined8 *)&(pFVar12->HitResult).Normal.field_0x10 = uVar6;
  uVar5 = puVar13[0x14];
  uVar6 = puVar13[0x15];
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal = uVar7;
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal.field_0x8 = uVar8;
  uVar7 = puVar13[0x16];
  uVar8 = puVar13[0x17];
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal.field_0x10 = uVar5;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart = uVar6;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart.field_0x8 = uVar7;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart.field_0x10 = uVar8;
  return;
}

// OnEndDrag @ 14cd0fbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::OnEndDrag(UMeshAttributePaintTool *this,TRay<double> *param_1)

{
  TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *pTVar1;
  FMeshAttributePaintChange *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  FText *pFVar7;
  UInteractiveToolManager *pUVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  FMeshAttributePaintChange *local_88;
  FText local_80;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UBaseBrushTool::OnEndDrag((UBaseBrushTool *)this,param_1);
  pTVar1 = (this->ActiveChangeBuilder).Ptr;
  this->bInRemoveStroke = false;
  this->bInSmoothStroke = false;
  this->bStampPending = false;
  if (pTVar1 != (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *)0x0) {
    pFVar2 = (pTVar1->Change).Ptr;
    (pTVar1->Change).Ptr = (FMeshAttributePaintChange *)0x0;
    if (pFVar2 != (FMeshAttributePaintChange *)0x0) {
      local_68 = *(longlong *)&pFVar2->field_0x40;
      uVar5 = *(undefined8 *)&pFVar2->field_0x48;
      local_58 = *(longlong *)&pFVar2->field_0x50;
      uStack_50 = *(undefined8 *)&pFVar2->field_0x58;
      uVar4 = *(undefined8 *)&pFVar2->field_0x60;
      plStack_40 = *(longlong **)&pFVar2->field_0x68;
      *(code **)&pFVar2->field_0x40 =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&),void,UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
           ::Call;
      *(undefined8 *)&pFVar2->field_0x48 = uStack_60;
      *(undefined4 *)&pFVar2->field_0x50 = 0x52978c00;
      *(undefined4 *)&pFVar2->field_0x54 = 1;
      *(undefined4 *)&pFVar2->field_0x58 = 0x4cc96830;
      *(undefined4 *)&pFVar2->field_0x5c = 1;
      *(undefined4 *)&pFVar2->field_0x60 = (undefined4)local_48;
      *(undefined4 *)&pFVar2->field_0x64 = local_48._4_4_;
      *(undefined4 *)&pFVar2->field_0x68 = 0;
      *(undefined4 *)&pFVar2->field_0x6c = 0;
      local_48 = uVar4;
      uStack_60 = uVar5;
      if (local_68 != 0) {
        plVar9 = &local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar9 = plStack_40;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      local_68 = *(longlong *)&pFVar2->field_0x70;
      uVar5 = *(undefined8 *)&pFVar2->field_0x78;
      local_58 = *(longlong *)&pFVar2->field_0x80;
      uStack_50 = *(undefined8 *)&pFVar2->field_0x88;
      uVar4 = *(undefined8 *)&pFVar2->field_0x90;
      plStack_40 = *(longlong **)&pFVar2->field_0x98;
      *(code **)&pFVar2->field_0x70 =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&),void,UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<float,TSizedDefaultAllocator<32>_>_const_&>
           ::Call;
      *(undefined8 *)&pFVar2->field_0x78 = uStack_60;
      *(undefined4 *)&pFVar2->field_0x80 = 0x52978c00;
      *(undefined4 *)&pFVar2->field_0x84 = 1;
      *(undefined4 *)&pFVar2->field_0x88 = 0x4cc96920;
      *(undefined4 *)&pFVar2->field_0x8c = 1;
      *(undefined4 *)&pFVar2->field_0x90 = (undefined4)local_48;
      *(undefined4 *)&pFVar2->field_0x94 = local_48._4_4_;
      *(undefined4 *)&pFVar2->field_0x98 = 0;
      *(undefined4 *)&pFVar2->field_0x9c = 0;
      local_48 = uVar4;
      uStack_60 = uVar5;
      if (local_68 != 0) {
        plVar9 = &local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar9 = plStack_40;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      lVar6 = (**(code **)(*(longlong *)this + 0x2d8))(this);
      pcVar3 = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x20);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_80,L"UMeshAttributePaintTool",L"AttributeValuesChange",L"Paint");
      local_88 = pFVar2;
      (*pcVar3)(lVar6 + 0x28,this,&local_88,pFVar7);
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      pUVar8 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      UE::TransactionUtil::FLongTransactionTracker::Close
                ((FLongTransactionTracker *)&this->field_0x3c0,pUVar8);
    }
  }
  return;
}

// OnShutdown @ 14cd12950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::OnShutdown(UMeshAttributePaintTool *this,EToolShutdownType param_1)

{
  longlong *plVar1;
  code *pcVar2;
  UMeshAttributePaintBrushOperationProperties *pUVar3;
  UMeshAttributePaintToolVisualizationProperties *pUVar4;
  FMeshDescription *pFVar5;
  longlong lVar6;
  FText *pFVar7;
  FCommitMeshParameters local_res8;
  undefined1 local_28 [16];
  
  plVar1 = *(longlong **)&this->field_0x128;
  pcVar2 = *(code **)(*plVar1 + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar2)(plVar1,this,local_28);
  if ((void *)CONCAT44(local_28._4_4_,local_28._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_28._4_4_,local_28._0_4_));
  }
  pUVar3 = (this->BrushActionProps).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar2)(pUVar3,this,local_28);
  if ((void *)CONCAT44(local_28._4_4_,local_28._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_28._4_4_,local_28._0_4_));
  }
  pUVar4 = (this->ViewProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar2)(pUVar4,this,local_28);
  if ((void *)CONCAT44(local_28._4_4_,local_28._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_28._4_4_,local_28._0_4_));
  }
  StoreCurrentAttribute(this);
  if (param_1 == Accept) {
    lVar6 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    pcVar2 = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UMeshAttributePaintTool",L"MeshAttributePaintTool",
                        L"Edit Attributes");
    (*pcVar2)(lVar6 + 0x28,pFVar7);
    if ((longlong *)CONCAT44(local_28._4_4_,local_28._0_4_) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_28._4_4_,local_28._0_4_) + 0x10))();
    }
    pFVar5 = (this->EditedMesh).Ptr;
    if (pFVar5 == (FMeshDescription *)0x0) {
      local_28[0] = true;
      local_28[1] = true;
      local_28[2] = true;
      local_28[3] = false;
      local_28[4] = false;
      local_28[5] = false;
      local_28[6] = true;
      local_28[7] = false;
      local_28[8] = true;
      UE::ToolTarget::CommitDynamicMeshUpdate
                (*(UToolTarget **)&this->field_0xc8,(this->EditedDynamicMesh).Ptr,false,
                 (FConversionToMeshDescriptionOptions *)local_28,(FComponentMaterialSet *)0x0);
    }
    else {
      local_res8.bHaveTargetLOD = false;
      local_res8._1_3_ = 0;
      local_res8.TargetLOD = Default;
      UE::ToolTarget::CommitMeshDescriptionUpdate
                (*(UToolTarget **)&this->field_0xc8,pFVar5,(FComponentMaterialSet *)0x0,&local_res8)
      ;
    }
    lVar6 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
  }
  return;
}

// OnTick @ 14cd137a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::OnTick(UMeshAttributePaintTool *this,float param_1)

{
  code *pcVar1;
  IMeshVertexAttributeSource *pIVar2;
  UMeshAttributePaintToolProperties *pUVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  TInterval1<float> *pTVar10;
  FString *pFVar11;
  longlong *plVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  FName *this_00;
  longlong *plVar15;
  FString *pFVar16;
  uint uVar17;
  int local_res8 [2];
  undefined1 local_res18 [8];
  FName *local_58;
  UMeshAttributePaintTool *local_50;
  code *local_48;
  FName **local_40;
  void *local_38 [2];
  FString local_28;
  
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->SelectedAttributeWatcher).GetValueFunc);
  pcVar1 = *(code **)&(this->SelectedAttributeWatcher).GetValueFunc;
  plVar15 = (longlong *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x10;
  plVar13 = *(longlong **)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28;
  plVar12 = plVar15;
  if (plVar13 != (longlong *)0x0) {
    plVar12 = plVar13;
  }
  uVar8 = (**(code **)(*plVar12 + 8))();
  iVar5 = (*pcVar1)(uVar8);
  if (iVar5 != (this->SelectedAttributeWatcher).CachedValue) {
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->SelectedAttributeWatcher).GetValueFunc);
    plVar13 = *(longlong **)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28;
    pcVar1 = *(code **)&(this->SelectedAttributeWatcher).GetValueFunc;
    if (plVar13 != (longlong *)0x0) {
      plVar15 = plVar13;
    }
    uVar8 = (**(code **)(*plVar15 + 8))(plVar15);
    local_res8[0] = (*pcVar1)(uVar8);
    (this->SelectedAttributeWatcher).CachedValue = local_res8[0];
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->SelectedAttributeWatcher).OnValueChangedFunc);
    pcVar1 = *(code **)&(this->SelectedAttributeWatcher).OnValueChangedFunc;
    plVar15 = *(longlong **)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x28;
    plVar13 = (longlong *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x10;
    if (plVar15 != (longlong *)0x0) {
      plVar13 = plVar15;
    }
    uVar8 = (**(code **)(*plVar13 + 8))();
    (*pcVar1)(uVar8,local_res8);
  }
  if (this->bStampPending != false) {
    (**(code **)(*(longlong *)this + 0x4a8))(this,&this->LastStamp);
    this->bStampPending = false;
  }
  uVar17 = 0;
  if (this->bHavePendingAction != false) {
    (**(code **)(*(longlong *)this + 0x4c0))(this,this->PendingAction);
    this->bHavePendingAction = false;
    this->PendingAction = NoAction;
  }
  uVar7 = this->PendingNewSelectedIndex;
  if (-1 < (int)uVar7) {
    pIVar2 = (this->AttributeSource).Ptr;
    pUVar3 = (this->AttribProps).field0_0x0.DebugPtr;
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_38);
    UMeshAttributePaintToolProperties::Initialize(pUVar3,pTVar9,false);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    pUVar3 = (this->AttribProps).field0_0x0.DebugPtr;
    iVar5 = (pUVar3->Attributes).ArrayNum;
    uVar6 = iVar5 - 1;
    if ((int)uVar7 < (int)uVar6) {
      uVar6 = uVar7;
    }
    uVar7 = 0;
    if (0 < (int)uVar6) {
      uVar7 = uVar6;
    }
    uVar6 = uVar17;
    if ((int)uVar7 < iVar5) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar14 = (pUVar3->Attributes).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    iVar5 = *(int *)(pFVar14 + 8);
    uVar7 = iVar5 - 1;
    if (iVar5 == 0) {
      uVar7 = uVar17;
    }
    ::FString::AssignRange
              (&((this->AttribProps).field0_0x0.DebugPtr)->Attribute,*(wchar_t **)pFVar14,uVar7);
    this->bVisibleAttributeValid = false;
    this->PendingNewSelectedIndex = -1;
  }
  if (this->bVisibleAttributeValid == false) {
    StoreCurrentAttribute(this);
    pUVar3 = (this->AttribProps).field0_0x0.DebugPtr;
    uVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&pUVar3->Attributes,&pUVar3->Attribute);
    this->CurrentAttributeIndex = uVar7;
    if (-1 < (int)uVar7) {
      if ((int)uVar7 < (this->Attributes).ArrayNum) {
        uVar17 = ~uVar7 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FName *)((this->Attributes).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
      pTVar10 = (TInterval1<float> *)
                (**(code **)(*(longlong *)this_00[1] + 0x20))(this_00[1],local_res18);
      local_40 = &local_58;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshAttributePaintTool::UpdateVisibleAttribute'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      this->CurrentValueRange = *pTVar10;
      local_58 = this_00;
      local_50 = this;
      UPreviewMesh::EditMesh
                (*(UPreviewMesh **)&this->field_0x2d8,
                 (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_48);
      pFVar11 = ::FName::ToString(this_00,&local_28);
      pUVar3 = (this->AttribProps).field0_0x0.DebugPtr;
      pFVar16 = &pUVar3->Attribute;
      if (pFVar16 != pFVar11) {
        pFVar14 = (pFVar16->Data).AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        (pFVar16->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pUVar3->Attribute).Data.ArrayNum = (pFVar11->Data).ArrayNum;
        (pUVar3->Attribute).Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    this->bVisibleAttributeValid = true;
  }
  return;
}

// OnUpdateDrag @ 14cd15590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::OnUpdateDrag(UMeshAttributePaintTool *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  FBrushStampData *pFVar10;
  undefined8 *puVar11;
  FBrushStampData *pFVar12;
  longlong lVar13;
  
  UBaseBrushTool::OnUpdateDrag((UBaseBrushTool *)this,param_1);
  lVar13 = 2;
  puVar9 = (undefined8 *)&this->field_0x138;
  pFVar10 = &this->LastStamp;
  do {
    pFVar12 = pFVar10;
    puVar11 = puVar9;
    pFVar10 = (FBrushStampData *)&(pFVar12->HitResult).Normal.field_0x8;
    dVar1 = (double)puVar11[1];
    dVar2 = (double)puVar11[2];
    dVar3 = (double)puVar11[3];
    *(undefined8 *)pFVar12 = *puVar11;
    (pFVar12->WorldPosition).field0_0x0._s_0.X = dVar1;
    dVar1 = (double)puVar11[4];
    dVar4 = (double)puVar11[5];
    (pFVar12->WorldPosition).field0_0x0._s_0.Y = dVar2;
    (pFVar12->WorldPosition).field0_0x0._s_0.Z = dVar3;
    dVar2 = (double)puVar11[6];
    uVar5 = puVar11[7];
    (pFVar12->WorldNormal).field0_0x0._s_0.X = dVar1;
    (pFVar12->WorldNormal).field0_0x0._s_0.Y = dVar4;
    uVar6 = puVar11[8];
    uVar7 = puVar11[9];
    (pFVar12->WorldNormal).field0_0x0._s_0.Z = dVar2;
    (pFVar12->HitResult).FaceIndex = (int)uVar5;
    (pFVar12->HitResult).Time = (float)(int)((ulonglong)uVar5 >> 0x20);
    uVar5 = puVar11[10];
    uVar8 = puVar11[0xb];
    (pFVar12->HitResult).Distance = (float)(int)uVar6;
    (pFVar12->HitResult)._padding_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined8 *)&(pFVar12->HitResult).Location = uVar7;
    uVar6 = puVar11[0xc];
    uVar7 = puVar11[0xd];
    *(undefined8 *)&(pFVar12->HitResult).Location.field_0x8 = uVar5;
    *(undefined8 *)&(pFVar12->HitResult).Location.field_0x10 = uVar8;
    uVar5 = puVar11[0xe];
    uVar8 = puVar11[0xf];
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint = uVar6;
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint.field_0x8 = uVar7;
    *(undefined8 *)&(pFVar12->HitResult).ImpactPoint.field_0x10 = uVar5;
    *(undefined8 *)&(pFVar12->HitResult).Normal = uVar8;
    lVar13 = lVar13 + -1;
    puVar9 = puVar11 + 0x10;
  } while (lVar13 != 0);
  uVar5 = puVar11[0x10];
  uVar6 = puVar11[0x11];
  this->bStampPending = true;
  uVar7 = puVar11[0x12];
  uVar8 = puVar11[0x13];
  *(undefined8 *)pFVar10 = uVar5;
  *(undefined8 *)&(pFVar12->HitResult).Normal.field_0x10 = uVar6;
  uVar5 = puVar11[0x14];
  uVar6 = puVar11[0x15];
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal = uVar7;
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal.field_0x8 = uVar8;
  uVar7 = puVar11[0x16];
  uVar8 = puVar11[0x17];
  *(undefined8 *)&(pFVar12->HitResult).ImpactNormal.field_0x10 = uVar5;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart = uVar6;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart.field_0x8 = uVar7;
  *(undefined8 *)&(pFVar12->HitResult).TraceStart.field_0x10 = uVar8;
  return;
}

// OnUpdateHover @ 14cd157c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshAttributePaintTool::OnUpdateHover(UMeshAttributePaintTool *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  FHitResult local_108;
  
  UBaseBrushTool::OnUpdateHover((UBaseBrushTool *)this,param_1);
  memset(&local_108,0,0x100);
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_108.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_108.HitObjectHandle.InstanceIndex = -1;
  local_108.HitObjectHandle.ResolutionStatus = Invalid;
  local_108.HitObjectHandle._29_3_ = 0;
  local_108.Time = 1.0;
  local_108.MyItem = -1;
  local_108.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  bVar3 = UDynamicMeshBrushTool::HitTest
                    ((UDynamicMeshBrushTool *)
                     &this[-1].GeometrySelection.TypedValue.Selection.Elements.field_0x28,
                     &param_1->WorldRay,&local_108);
  if (bVar3) {
    piVar1 = (int *)((longlong)&(this->VerticesOctree)._padding_ + 4);
    iVar2 = *piVar1;
    *(undefined4 *)&(this->VerticesOctree)._padding_ = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&(this->VerticesOctree)._padding_,0,piVar1);
    }
    CalculateVertexROI((UMeshAttributePaintTool *)
                       &this[-1].GeometrySelection.TypedValue.Selection.Elements.field_0x28,
                       (FBrushStampData *)&this->field_0x60,
                       (TArray<int,TSizedDefaultAllocator<32>_> *)&(this->VerticesOctree)._padding_)
    ;
  }
  return true;
}

// RegisterActions @ 14cd17950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::RegisterActions
          (UMeshAttributePaintTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString FStack_88;
  FText FStack_78;
  FText FStack_68;
  code *apcStack_58 [2];
  undefined **ppuStack_48;
  UMeshAttributePaintTool *pUStack_40;
  undefined8 uStack_30;
  
  ppuStack_48 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_1>,0,0>::
                 _vftable_;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_1>,void>::Call;
  uStack_30 = 0;
  pUStack_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"UBaseBrushTool",L"BrushIncreaseSizeTooltip",
                      L"Press this key to increase brush radius by a percentage of its current size."
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"UBaseBrushTool",L"BrushIncreaseSize",L"Increase Brush Size");
  ::FString::FString(&FStack_88,L"BrushIncreaseSize");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271a,&FStack_88,pFVar2,pFVar1,'\0',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)apcStack_58);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  uStack_30 = 0;
  ppuStack_48 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_2>,0,0>::
                 _vftable_;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_2>,void>::Call;
  pUStack_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"UBaseBrushTool",L"BrushDecreaseSizeTooltip",
                      L"Press this key to decrease brush radius by a percentage of its current size."
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"UBaseBrushTool",L"BrushDecreaseSize",L"Decrease Brush Size");
  ::FString::FString(&FStack_88,L"BrushDecreaseSize");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271b,&FStack_88,pFVar2,pFVar1,'\0',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)apcStack_58);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  uStack_30 = 0;
  ppuStack_48 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_3>,0,0>::
                 _vftable_;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_3>,void>::Call;
  pUStack_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"UBaseBrushTool",L"BrushIncreaseFalloffTooltip",
                      L"Press this key to increase brush falloff by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"UBaseBrushTool",L"BrushIncreaseFalloff",L"Increase Brush Falloff"
                     );
  ::FString::FString(&FStack_88,L"BrushIncreaseFalloff");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271c,&FStack_88,pFVar2,pFVar1,'\x05',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)apcStack_58);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  uStack_30 = 0;
  ppuStack_48 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_4>,0,0>::
                 _vftable_;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_4>,void>::Call;
  pUStack_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"UBaseBrushTool",L"BrushDecreaseFalloffTooltip",
                      L"Press this key to decrease brush falloff by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"UBaseBrushTool",L"BrushDecreaseFalloff",L"Decrease Brush Falloff"
                     );
  ::FString::FString(&FStack_88,L"BrushDecreaseFalloff");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271d,&FStack_88,pFVar2,pFVar1,'\x05',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)apcStack_58);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  uStack_30 = 0;
  ppuStack_48 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_5>,0,0>::
                 _vftable_;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_5>,void>::Call;
  pUStack_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"UBaseBrushTool",L"BrushIncreaseStrengthTooltip",
                      L"Press this key to increase brush strength by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"UBaseBrushTool",L"BrushIncreaseStrength",
                      L"Increase Brush Strength");
  ::FString::FString(&FStack_88,L"BrushIncreaseStrength");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271e,&FStack_88,pFVar2,pFVar1,'\x01',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)apcStack_58);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  uStack_30 = 0;
  ppuStack_48 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UBaseBrushTool::RegisterActions'::`2'::<lambda_6>,0,0>::
                 _vftable_;
  apcStack_58[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UBaseBrushTool::RegisterActions'::__l2::<lambda_6>,void>::Call;
  pUStack_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_78,L"UBaseBrushTool",L"BrushDecreaseStrengthTooltip",
                      L"Press this key to decrease brush strength by a fixed increment.");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_68,L"UBaseBrushTool",L"BrushDecreaseStrength",
                      L"Decrease Brush Strength");
  ::FString::FString(&FStack_88,L"BrushDecreaseStrength");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x271f,&FStack_88,pFVar2,pFVar1,'\x01',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)apcStack_58);
  if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
  }
  if (FStack_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_68.TextData.Reference + 0x10))();
  }
  if (FStack_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_78.TextData.Reference + 0x10))();
  }
  return;
}

// RequestAction @ 14cd1c290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::RequestAction
          (UMeshAttributePaintTool *this,EMeshAttributePaintToolActions param_1)

{
  if (this->bHavePendingAction == false) {
    this->PendingAction = param_1;
    this->bHavePendingAction = true;
  }
  return;
}

// SetColorMap @ 14cd1e270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::SetColorMap
          (UMeshAttributePaintTool *this,
          TUniquePtr<FFloatAttributeColorMapper,TDefaultDelete<FFloatAttributeColorMapper>_> param_1
          )

{
  FFloatAttributeColorMapper *pFVar1;
  undefined8 *puVar2;
  TUniquePtr<FFloatAttributeColorMapper,TDefaultDelete<FFloatAttributeColorMapper>_> *pTVar3;
  
  pTVar3 = &this->ColorMapper;
  if ((FFloatAttributeColorMapper *)pTVar3 != param_1.Ptr) {
    pFVar1 = pTVar3->Ptr;
    pTVar3->Ptr = (FFloatAttributeColorMapper *)(param_1.Ptr)->_padding_;
    (param_1.Ptr)->_padding_ = 0;
    if (pFVar1 != (FFloatAttributeColorMapper *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd1e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}

// SetGeometrySelection @ 14cd1e7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::SetGeometrySelection
          (UMeshAttributePaintTool *this,FGeometrySelection *param_1)

{
  TOptional<UE::Geometry::FGeometrySelection>::operator=(&this->GeometrySelection,param_1);
  return;
}

// SetWorld @ 14cd204c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::SetWorld(UMeshAttributePaintTool *this,UWorld *param_1)

{
  this->TargetWorld = param_1;
  return;
}

// Setup @ 14cd228e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::Setup(UMeshAttributePaintTool *this)

{
  int *piVar1;
  TUniquePtr<FFloatAttributeColorMapper,TDefaultDelete<FFloatAttributeColorMapper>_> *pTVar2;
  TUniquePtr<FMeshDescription,TDefaultDelete<FMeshDescription>_> *pTVar3;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar4;
  code *pcVar5;
  UObjectBaseUtility *pUVar6;
  IMeshVertexAttributeSource *pIVar7;
  FFunctionStorage *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  UClass *pUVar18;
  UMeshAttributePaintBrushOperationProperties *pUVar19;
  UMeshAttributePaintToolVisualizationProperties *pUVar20;
  UMeshAttributePaintToolProperties *pUVar21;
  FDynamicMesh3 *pFVar22;
  FText *pFVar23;
  longlong *plVar24;
  FMeshDescription *pFVar25;
  void *pvVar26;
  FMeshDescription *pFVar27;
  FMeshDescription *pFVar28;
  undefined8 *puVar29;
  FMeshDescription *pFVar30;
  FFunctionStorage *pFVar31;
  longlong *plVar32;
  undefined ***pppuVar33;
  undefined1 auStackY_648 [32];
  FGetMeshParameters local_618;
  FGetMeshParameters local_608;
  UMeshAttributePaintTool *local_5f8 [2];
  code *local_5e8;
  undefined **local_5d8;
  UMeshAttributePaintTool *local_5d0;
  undefined ***local_5c0;
  code *local_5b8;
  undefined **local_5a8;
  UMeshAttributePaintTool *local_5a0;
  undefined ***local_590;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  code *local_548;
  UMeshAttributePaintTool **local_540;
  code *local_538;
  undefined **local_528;
  UMeshAttributePaintTool *local_520;
  undefined ***local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  FText local_4f0;
  FText local_4e0;
  code *local_4c8 [2];
  undefined **local_4b8;
  UMeshAttributePaintTool *local_4b0;
  undefined8 local_4a0;
  code *local_498 [2];
  undefined **local_488;
  UMeshAttributePaintTool *local_480;
  undefined8 local_470;
  code *local_468 [2];
  code *local_458 [3];
  undefined8 local_440;
  FDynamicMesh3 local_438;
  undefined1 local_208 [128];
  undefined1 local_188 [128];
  undefined1 local_108 [128];
  code *local_88;
  undefined8 uStack_80;
  FFunctionStorage local_78;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_648;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = UMeshAttributePaintBrushOperationProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_208,pUVar18);
  local_208._8_8_ = this;
  pUVar19 = (UMeshAttributePaintBrushOperationProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_208);
  if (local_208._64_8_ != 0) {
    plVar24 = (longlong *)(local_208 + 0x50);
    if ((longlong *)local_208._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_208._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UMeshAttributePaintBrushOperationProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->BrushActionProps).field0_0x0.DebugPtr = pUVar19;
  pcVar5 = *(code **)(pUVar19->_padding_ + 0x2b8);
  ::FString::FString(&local_588,L"");
  (*pcVar5)(pUVar19,this,&local_588);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)this + 0x318))(this,(this->BrushActionProps).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = UMeshAttributePaintToolVisualizationProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_188,pUVar18);
  local_188._8_8_ = this;
  pUVar20 = (UMeshAttributePaintToolVisualizationProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_188);
  if (local_188._64_8_ != 0) {
    plVar24 = (longlong *)(local_188 + 0x50);
    if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_188._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UMeshAttributePaintToolVisualizationProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->ViewProperties).field0_0x0.DebugPtr = pUVar20;
  pcVar5 = *(code **)(pUVar20->_padding_ + 0x2b8);
  ::FString::FString(&local_578,L"");
  (*pcVar5)(pUVar20,this,&local_578);
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)this + 0x318))(this);
  this->field_0x318 = 1;
  UDynamicMeshBrushTool::Setup((UDynamicMeshBrushTool *)this);
  if (*(longlong *)&this->field_0x128 == 0) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_968098766823358142>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshAttributePaintTool.cpp"
                        ,0x142,"BrushProperties");
    if (bVar16) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xbc) = 1;
    *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xcb) = 1;
  }
  plVar24 = *(longlong **)&this->field_0x128;
  pcVar5 = *(code **)(*plVar24 + 0x2b8);
  ::FString::FString(&local_568,L"");
  (*pcVar5)(plVar24,this,&local_568);
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = UMeshAttributePaintToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_108,pUVar18);
  local_108._8_8_ = this;
  pUVar21 = (UMeshAttributePaintToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
  if (local_108._64_8_ != 0) {
    plVar24 = (longlong *)(local_108 + 0x50);
    if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
      plVar24 = (longlong *)local_108._104_8_;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar21 != (UMeshAttributePaintToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  (this->AttribProps).field0_0x0.DebugPtr = pUVar21;
  pcVar5 = *(code **)(pUVar21->_padding_ + 0x2b8);
  ::FString::FString(&local_558,L"");
  (*pcVar5)(pUVar21,this,&local_558);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  (**(code **)(*(longlong *)this + 0x318))(this,(this->AttribProps).field0_0x0.DebugPtr);
  UPreviewMesh::SetTangentsMode(*(UPreviewMesh **)&this->field_0x2d8,AutoCalculated);
  UPreviewMesh::SetShadowsEnabled(*(UPreviewMesh **)&this->field_0x2d8,false);
  ((this->BrushActionProps).field0_0x0.DebugPtr)->bToolHasSelection =
       (this->GeometrySelection).bIsSet;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SelectionTids);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SelectionVids);
  local_540 = local_5f8;
  local_548 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
              ::Call;
  local_5f8[0] = this;
  UPreviewMesh::EditMesh
            (*(UPreviewMesh **)&this->field_0x2d8,
             (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_548);
  pFVar22 = UPreviewMesh::GetMesh(*(UPreviewMesh **)&this->field_0x2d8);
  UE::Geometry::TDynamicVerticesOctree3<UE::Geometry::FDynamicMesh3>::Initialize
            (&this->VerticesOctree,pFVar22,true);
  UpdateMaterialMode(this,((this->ViewProperties).field0_0x0.DebugPtr)->MaterialMode);
  UBaseBrushTool::RecalculateBrushRadius((UBaseBrushTool *)this);
  pcVar5 = *(code **)(*(longlong *)this + 0x380);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_4f0,L"UMeshAttributePaintTool",L"ToolName",L"Paint WeightMaps");
  (*pcVar5)(this,pFVar23);
  if (local_4f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4f0.TextData.Reference + 0x10))();
  }
  plVar24 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar5 = *(code **)(*plVar24 + 0x360);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_4e0,L"UMeshAttributePaintTool",L"OnStartAttribPaint",
                       L"Paint per-vertex attribute maps. Ctrl to Erase/Subtract, Shift to Smooth. [/] to change Brush Size."
                      );
  (*pcVar5)(plVar24,pFVar23,2);
  if (local_4e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4e0.TextData.Reference + 0x10))();
  }
  pFVar25 = ::operator_new(0x28);
  pFVar30 = (FMeshDescription *)0x0;
  pFVar27 = pFVar30;
  if (pFVar25 != (FMeshDescription *)0x0) {
    ((TDynamicVector<UE::Math::TVector<double>,512> *)&(pFVar25->Elements).field_0x8)->CurBlock =
         0x3f666666;
    *(undefined ***)&pFVar25->Elements = &___7FFloatAttributeColorMapper__6B_;
    *(uint *)&(pFVar25->Elements).field_0xc = 0x3f666666;
    *(undefined4 *)
     &(((TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
         *)&(pFVar25->Elements).field_0x10)->AllocatorInstance).Data = 0x3f666666;
    *(undefined4 *)&(pFVar25->Elements).field_0x14 = 0x3f800000;
    *(undefined8 *)&(pFVar25->Elements).field_0x18 = 0x3f800000;
    (((FRefCountVector *)&(pFVar25->Elements).field_0x20)->RefCounts).CurBlock = 0;
    *(uint *)&(pFVar25->Elements).field_0x24 = 0x3f800000;
    pFVar27 = pFVar25;
  }
  pTVar2 = &this->ColorMapper;
  if (pTVar2 == (TUniquePtr<FFloatAttributeColorMapper,TDefaultDelete<FFloatAttributeColorMapper>_>
                 *)&local_508) {
    if (pFVar27 != (FMeshDescription *)0x0) {
      puVar29 = *(undefined8 **)&pFVar27->Elements;
      goto LAB_14cd22daf;
    }
  }
  else {
    pFVar25 = (FMeshDescription *)pTVar2->Ptr;
    pTVar2->Ptr = (FFloatAttributeColorMapper *)pFVar27;
    if (pFVar25 != (FMeshDescription *)0x0) {
      puVar29 = *(undefined8 **)&pFVar25->Elements;
      pFVar27 = pFVar25;
LAB_14cd22daf:
      (*(code *)*puVar29)(pFVar27,1);
    }
  }
  if ((this->bPreferMeshDescription != false) &&
     (pUVar6 = *(UObjectBaseUtility **)&this->field_0xc8, pUVar6 != (UObjectBaseUtility *)0x0)) {
    pUVar18 = Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
    pvVar26 = UObjectBaseUtility::GetInterfaceAddress(pUVar6,pUVar18);
    if ((pvVar26 != (void *)0x0) &&
       (pUVar6 = *(UObjectBaseUtility **)&this->field_0xc8, pUVar6 != (UObjectBaseUtility *)0x0)) {
      pUVar18 = Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
      pvVar26 = UObjectBaseUtility::GetInterfaceAddress(pUVar6,pUVar18);
      if (pvVar26 != (void *)0x0) {
        pFVar25 = ::operator_new(0x2c0);
        pFVar27 = pFVar30;
        if (pFVar25 != (FMeshDescription *)0x0) {
          pFVar27 = FMeshDescription::FMeshDescription(pFVar25);
        }
        pTVar3 = &this->EditedMesh;
        if (pTVar3 == (TUniquePtr<FMeshDescription,TDefaultDelete<FMeshDescription>_> *)&local_500)
        {
          if (pFVar27 != (FMeshDescription *)0x0) {
            FMeshDescription::~FMeshDescription(pFVar27);
            goto LAB_14cd22e6c;
          }
        }
        else {
          pFVar25 = pTVar3->Ptr;
          pTVar3->Ptr = pFVar27;
          if (pFVar25 != (FMeshDescription *)0x0) {
            FMeshDescription::~FMeshDescription(pFVar25);
            pFVar27 = pFVar25;
LAB_14cd22e6c:
            ::operator_delete(pFVar27,0x2c0);
          }
        }
        pFVar27 = pTVar3->Ptr;
        pFVar28 = ::operator_new(0x10);
        pFVar25 = pFVar30;
        if (pFVar28 != (FMeshDescription *)0x0) {
          *(FMeshDescription **)&(pFVar28->Elements).field_0x8 = pFVar27;
          *(undefined ***)&pFVar28->Elements = &___7FMeshDescriptionVertexAttributeSource__6B_;
          pFVar25 = pFVar28;
        }
        pIVar7 = (this->AttributeSource).Ptr;
        (this->AttributeSource).Ptr = (IMeshVertexAttributeSource *)pFVar25;
        if (pIVar7 != (IMeshVertexAttributeSource *)0x0) {
          (**(code **)*pIVar7)(pIVar7,1);
        }
        local_618.bHaveRequestLOD = false;
        local_618._1_3_ = 0;
        local_618.RequestLOD = Default;
        local_618.bWantMeshTangents = false;
        local_618._9_3_ = 0;
        pFVar27 = UE::ToolTarget::GetMeshDescription(*(UToolTarget **)&this->field_0xc8,&local_618);
        FMeshDescription::operator=(pTVar3->Ptr,pFVar27);
        goto LAB_14cd22fc1;
      }
    }
  }
  pFVar22 = ::operator_new(0x230);
  pFVar27 = pFVar30;
  if (pFVar22 != (FDynamicMesh3 *)0x0) {
    pFVar27 = (FMeshDescription *)UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar22);
  }
  pTVar4 = &this->EditedDynamicMesh;
  if (pTVar4 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                 *)&local_4f8) {
    if (pFVar27 != (FMeshDescription *)0x0) {
      puVar29 = *(undefined8 **)&pFVar27->Elements;
      goto LAB_14cd22f37;
    }
  }
  else {
    pFVar25 = (FMeshDescription *)pTVar4->Ptr;
    pTVar4->Ptr = (FDynamicMesh3 *)pFVar27;
    if (pFVar25 != (FMeshDescription *)0x0) {
      puVar29 = *(undefined8 **)&pFVar25->Elements;
      pFVar27 = pFVar25;
LAB_14cd22f37:
      (*(code *)*puVar29)(pFVar27,1);
    }
  }
  local_608.bHaveRequestLOD = false;
  local_608.RequestLOD = Default;
  local_608.bWantMeshTangents = true;
  pFVar22 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_438,*(UToolTarget **)&this->field_0xc8,&local_608);
  UE::Geometry::FDynamicMesh3::operator=(pTVar4->Ptr,pFVar22);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_438);
  pFVar22 = pTVar4->Ptr;
  pFVar25 = ::operator_new(0x10);
  pFVar27 = pFVar30;
  if (pFVar25 != (FMeshDescription *)0x0) {
    *(FDynamicMesh3 **)&(pFVar25->Elements).field_0x8 = pFVar22;
    *(undefined ***)&pFVar25->Elements = &___7FDynamicMeshVertexAttributeSource__6B_;
    pFVar27 = pFVar25;
  }
  pIVar7 = (this->AttributeSource).Ptr;
  (this->AttributeSource).Ptr = (IMeshVertexAttributeSource *)pFVar27;
  if (pIVar7 != (IMeshVertexAttributeSource *)0x0) {
    (**(code **)*pIVar7)(pIVar7,1);
  }
LAB_14cd22fc1:
  InitializeAttributes(this);
  pUVar21 = (this->AttribProps).field0_0x0.DebugPtr;
  if (0 < (pUVar21->Attributes).ArrayNum) {
    this->PendingNewSelectedIndex = 0;
  }
  iVar17 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                     (&pUVar21->Attributes,&pUVar21->Attribute);
  local_5c0 = (undefined ***)0x0;
  local_5d8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshAttributePaintTool::Setup'::`2'::<lambda_3>,0,0>::
               _vftable_;
  local_510 = (undefined ***)0x0;
  local_5e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_3>,void,int>::Call;
  local_528 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshAttributePaintTool::Setup'::`2'::<lambda_2>,0,0>::
               _vftable_;
  local_538 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_2>,int>::Call;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_2>,int>::Call;
  local_78.HeapAllocation = (void *)0x0;
  local_5d0 = this;
  local_520 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UMeshAttributePaintTool::Setup'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
            (&local_528,&local_78);
  lVar14 = *(longlong *)&(this->SelectedAttributeWatcher).GetValueFunc;
  uVar13 = *(undefined8 *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x8;
  pFVar8 = *(FFunctionStorage **)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28;
  *(code **)&(this->SelectedAttributeWatcher).GetValueFunc = local_88;
  *(undefined8 *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x8 = uStack_80;
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x10 = local_78.InlineAllocation[0];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x11 = local_78.InlineAllocation[1];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x12 = local_78.InlineAllocation[2];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x13 = local_78.InlineAllocation[3];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x14 = local_78.InlineAllocation[4];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x15 = local_78.InlineAllocation[5];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x16 = local_78.InlineAllocation[6];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x17 = local_78.InlineAllocation[7];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x18 = local_78.InlineAllocation[8];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x19 = local_78.InlineAllocation[9];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x1a = local_78.InlineAllocation[10];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x1b = local_78.InlineAllocation[0xb];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x1c = local_78.InlineAllocation[0xc];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x1d = local_78.InlineAllocation[0xd];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x1e = local_78.InlineAllocation[0xe];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x1f = local_78.InlineAllocation[0xf];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x20 = local_78.InlineAllocation[0x10];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x21 = local_78.InlineAllocation[0x11];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x22 = local_78.InlineAllocation[0x12];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x23 = local_78.InlineAllocation[0x13];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x24 = local_78.InlineAllocation[0x14];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x25 = local_78.InlineAllocation[0x15];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x26 = local_78.InlineAllocation[0x16];
  (this->SelectedAttributeWatcher).GetValueFunc.field_0x27 = local_78.InlineAllocation[0x17];
  *(undefined4 *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x28 =
       local_78.HeapAllocation._0_4_;
  *(undefined4 *)&(this->SelectedAttributeWatcher).GetValueFunc.field_0x2c =
       local_78.HeapAllocation._4_4_;
  local_88 = (code *)lVar14;
  uStack_80 = uVar13;
  local_78.InlineAllocation[0] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x10;
  local_78.InlineAllocation[1] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x11;
  local_78.InlineAllocation[2] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x12;
  local_78.InlineAllocation[3] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x13;
  local_78.InlineAllocation[4] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x14;
  local_78.InlineAllocation[5] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x15;
  local_78.InlineAllocation[6] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x16;
  local_78.InlineAllocation[7] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x17;
  local_78.InlineAllocation[8] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x18;
  local_78.InlineAllocation[9] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x19;
  local_78.InlineAllocation[10] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x1a;
  local_78.InlineAllocation[0xb] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x1b;
  local_78.InlineAllocation[0xc] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x1c;
  local_78.InlineAllocation[0xd] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x1d;
  local_78.InlineAllocation[0xe] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x1e;
  local_78.InlineAllocation[0xf] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x1f;
  local_78.InlineAllocation[0x10] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x20;
  local_78.InlineAllocation[0x11] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x21;
  local_78.InlineAllocation[0x12] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x22;
  local_78.InlineAllocation[0x13] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x23;
  local_78.InlineAllocation[0x14] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x24;
  local_78.InlineAllocation[0x15] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x25;
  local_78.InlineAllocation[0x16] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x26;
  local_78.InlineAllocation[0x17] = (this->SelectedAttributeWatcher).GetValueFunc.field_0x27;
  local_78.HeapAllocation = pFVar8;
  if (lVar14 != 0) {
    pFVar31 = &local_78;
    if (pFVar8 != (FFunctionStorage *)0x0) {
      pFVar31 = pFVar8;
    }
    (**(code **)(*(longlong *)pFVar31->InlineAllocation + 0x10))();
  }
  local_58 = local_5e8;
  uStack_30 = (longlong *)0x0;
  if (local_5e8 != (code *)0x0) {
    pppuVar33 = &local_5d8;
    if (local_5c0 != (undefined ***)0x0) {
      pppuVar33 = local_5c0;
    }
    (*(code *)**pppuVar33)(pppuVar33,&local_48);
  }
  lVar14 = *(longlong *)&(this->SelectedAttributeWatcher).OnValueChangedFunc;
  uVar15 = *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x8;
  uVar9 = *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x10;
  uVar10 = *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x14;
  uVar11 = *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x18;
  uVar12 = *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x1c;
  uVar13 = *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x20;
  plVar24 = *(longlong **)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x28;
  *(code **)&(this->SelectedAttributeWatcher).OnValueChangedFunc = local_58;
  *(undefined8 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x8 = uStack_50;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x10 =
       (undefined4)local_48;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x18 = uStack_40;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x1c = uStack_3c;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x20 =
       (undefined4)local_38;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x28 =
       (undefined4)uStack_30;
  *(undefined4 *)&(this->SelectedAttributeWatcher).OnValueChangedFunc.field_0x2c = uStack_30._4_4_;
  local_58 = (code *)lVar14;
  uStack_50 = uVar15;
  local_48._0_4_ = uVar9;
  local_48._4_4_ = uVar10;
  uStack_40 = uVar11;
  uStack_3c = uVar12;
  local_38 = uVar13;
  uStack_30 = plVar24;
  if (lVar14 != 0) {
    plVar32 = &local_48;
    if (plVar24 != (longlong *)0x0) {
      plVar32 = plVar24;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  (this->SelectedAttributeWatcher).CachedValue = iVar17;
  if (local_538 != (code *)0x0) {
    pppuVar33 = &local_528;
    if (local_510 != (undefined ***)0x0) {
      pppuVar33 = local_510;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  if (local_5e8 != (code *)0x0) {
    pppuVar33 = &local_5d8;
    if (local_5c0 != (undefined ***)0x0) {
      pppuVar33 = local_5c0;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  pUVar19 = (this->BrushActionProps).field0_0x0.DebugPtr;
  local_4b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshAttributePaintTool::Setup'::`2'::<lambda_4>,0,0>::
               _vftable_;
  this->bVisibleAttributeValid = false;
  local_4a0 = 0;
  local_4c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_4>,void,bool_const_&>
                 ::Call;
  local_4b0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->bIsolateGeometrySelection,
             (TFunction<void___cdecl(bool_const_&)> *)local_4c8);
  pUVar20 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_5a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshAttributePaintTool::Setup'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_590 = (undefined ***)0x0;
  local_5b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_5>,void,enum_EMeshAttributePaintMaterialMode_const_&>
              ::Call;
  local_5a0 = this;
  pvVar26 = ::operator_new(0xa0);
  if (pvVar26 != (void *)0x0) {
    local_468[0] = local_5b8;
    local_440 = 0;
    if (local_5b8 != (code *)0x0) {
      pppuVar33 = &local_5a8;
      if (local_590 != (undefined ***)0x0) {
        pppuVar33 = local_590;
      }
      (*(code *)**pppuVar33)(pppuVar33,local_468 + 2);
    }
    pFVar30 = (FMeshDescription *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshAttributePaintMaterialMode>::
              TPropertyWatcher<enum_EMeshAttributePaintMaterialMode><enum_EMeshAttributePaintMaterialMode,void>
                        (pvVar26,&pUVar20->MaterialMode,
                         (TFunction<void___cdecl(EMeshAttributePaintMaterialMode_const_&)> *)
                         local_468);
  }
  iVar17 = (int)pUVar20->_padding_;
  piVar1 = (int *)((longlong)&pUVar20->_padding_ + 4);
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar20->_padding_,piVar1);
  }
  *(int *)&pUVar20->_padding_ = iVar17 + 1;
  *(FMeshDescription **)(pUVar20->_padding_ + (longlong)iVar17 * 8) = pFVar30;
  if (local_5b8 != (code *)0x0) {
    pppuVar33 = &local_5a8;
    if (local_590 != (undefined ***)0x0) {
      pppuVar33 = local_590;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  pUVar20 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_488 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshAttributePaintTool::Setup'::`2'::<lambda_6>,0,0>::
               _vftable_;
  local_470 = 0;
  local_498[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshAttributePaintTool::Setup'::__l2::<lambda_6>,void,bool_const_&>
                 ::Call;
  local_480 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->bFlatShading,
             (TFunction<void___cdecl(bool_const_&)> *)local_498);
  return;
}

// StaticRegisterNativesUMeshAttributePaintTool @ 14cd2ef40

void __cdecl UMeshAttributePaintTool::StaticRegisterNativesUMeshAttributePaintTool(void)

{
  return;
}

// StoreCurrentAttribute @ 14cd2f3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::StoreCurrentAttribute(UMeshAttributePaintTool *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar1 = this->CurrentAttributeIndex;
  if (-1 < (int)uVar1) {
    uVar7 = 0;
    if ((int)uVar1 < (this->Attributes).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = 0;
    pFVar2 = (this->Attributes).AllocatorInstance.Data;
    if (0 < this->AttributeBufferCount) {
      lVar8 = 0;
      do {
        plVar3 = *(longlong **)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 8);
        pcVar4 = *(code **)(*plVar3 + 0x18);
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 0x18)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(plVar3,uVar7,
                  *(undefined4 *)
                   (*(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x30 + 0x10) + lVar8));
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 4;
      } while ((int)uVar7 < this->AttributeBufferCount);
    }
    this->CurrentAttributeIndex = -1;
    (this->CurrentValueRange).Min = 0.0;
    (this->CurrentValueRange).Max = 1.0;
  }
  return;
}

// UpdateFlatShadingSetting @ 14cd34a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::UpdateFlatShadingSetting(UMeshAttributePaintTool *this,bool param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  float fVar2;
  FName local_res8 [4];
  
  this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    fVar2 = __real_3f800000;
    if (!param_1) {
      fVar2 = 0.0;
    }
    pFVar1 = ::FName::FName(local_res8,L"FlatShading");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar1,fVar2);
  }
  return;
}

// UpdateMaterialMode @ 14cd34ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::UpdateMaterialMode
          (UMeshAttributePaintTool *this,EMeshAttributePaintMaterialMode param_1)

{
  UInteractiveToolManager *pUVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  FName *pFVar4;
  float fVar5;
  FName local_res8;
  
  if (param_1 == Shaded) {
    pUVar1 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))();
    pUVar2 = ToolSetupUtil::GetVertexColorSculptMaterial(pUVar1);
    if (pUVar2 != (UMaterialInterface *)0x0) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pUVar3 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar3;
    }
  }
  else if (((param_1 == ColorOnly) && (GEngine != (UEngine *)0x0)) &&
          ((GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr != (UMaterial *)0x0)
          ) {
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    UPreviewMesh::SetOverrideRenderMaterial
              (*(UPreviewMesh **)&this->field_0x2d8,
               (UMaterialInterface *)
               (GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr);
  }
  pUVar3 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    UPreviewMesh::SetOverrideRenderMaterial
              (*(UPreviewMesh **)&this->field_0x2d8,(UMaterialInterface *)pUVar3);
    pUVar3 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
    fVar5 = __real_3f800000;
    if (((this->ViewProperties).field0_0x0.DebugPtr)->bFlatShading == false) {
      fVar5 = 0.0;
    }
    pFVar4 = ::FName::FName(&local_res8,L"FlatShading");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar3,*pFVar4,fVar5);
  }
  UPreviewMesh::SetShadowsEnabled(*(UPreviewMesh **)&this->field_0x2d8,false);
  return;
}

// UpdateSelectedAttribute @ 14cd3a1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshAttributePaintTool::UpdateSelectedAttribute(UMeshAttributePaintTool *this,int param_1)

{
  int iVar1;
  UMeshAttributePaintToolProperties *pUVar2;
  IMeshVertexAttributeSource *pIVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  void *local_18 [2];
  
  pUVar2 = (this->AttribProps).field0_0x0.DebugPtr;
  pIVar3 = (this->AttributeSource).Ptr;
  pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
           (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_18);
  UMeshAttributePaintToolProperties::Initialize(pUVar2,pTVar8,false);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  pUVar2 = (this->AttribProps).field0_0x0.DebugPtr;
  iVar1 = (pUVar2->Attributes).ArrayNum;
  uVar7 = iVar1 - 1;
  if (param_1 < (int)uVar7) {
    uVar7 = param_1;
  }
  uVar10 = 0;
  uVar5 = uVar10;
  if (0 < (int)uVar7) {
    uVar5 = uVar7;
  }
  uVar7 = uVar10;
  if ((int)uVar5 < iVar1) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = (pUVar2->Attributes).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
  iVar1 = *(int *)(pFVar9 + 8);
  uVar7 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar7 = uVar10;
  }
  ::FString::AssignRange
            (&((this->AttribProps).field0_0x0.DebugPtr)->Attribute,*(wchar_t **)pFVar9,uVar7);
  this->bVisibleAttributeValid = false;
  return;
}

// UpdateVisibleAttribute @ 14cd3d0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshAttributePaintTool::UpdateVisibleAttribute(UMeshAttributePaintTool *this)

{
  UMeshAttributePaintToolProperties *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TInterval1<float> *pTVar7;
  FString *pFVar8;
  FName *this_00;
  FString *pFVar9;
  undefined1 local_res8 [8];
  FName *local_38;
  UMeshAttributePaintTool *local_30;
  code *local_28;
  FName **local_20;
  FString local_18;
  
  StoreCurrentAttribute(this);
  pUVar1 = (this->AttribProps).field0_0x0.DebugPtr;
  uVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (&pUVar1->Attributes,&pUVar1->Attribute);
  this->CurrentAttributeIndex = uVar5;
  if (-1 < (int)uVar5) {
    uVar6 = 0;
    if ((int)uVar5 < (this->Attributes).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = (FName *)((this->Attributes).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30);
    pTVar7 = (TInterval1<float> *)
             (**(code **)(*(longlong *)this_00[1] + 0x20))(this_00[1],local_res8);
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshAttributePaintTool::UpdateVisibleAttribute'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    this->CurrentValueRange = *pTVar7;
    local_38 = this_00;
    local_30 = this;
    UPreviewMesh::EditMesh
              (*(UPreviewMesh **)&this->field_0x2d8,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_28);
    pFVar8 = ::FName::ToString(this_00,&local_18);
    pUVar1 = (this->AttribProps).field0_0x0.DebugPtr;
    pFVar9 = &pUVar1->Attribute;
    if (pFVar9 != pFVar8) {
      pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar9->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pUVar1->Attribute).Data.ArrayNum = (pFVar8->Data).ArrayNum;
      (pUVar1->Attribute).Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// _getUObject @ 14cd3f620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall UMeshAttributePaintTool::_getUObject(UMeshAttributePaintTool *this)

{
  return (UObject *)&this[-1].SelectionVids.Elements.field_0x30;
}

// _getUObject`adjustor{928}' @ 14cd3f62c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshAttributePaintTool::_getUObject`adjustor{928}' (void)const __ptr64 */

UObject * __thiscall
UMeshAttributePaintTool::_getUObject_adjustor_928__(UMeshAttributePaintTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshAttributePaintTool *)&this[-1].LastStamp.HitResult.TraceStart);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{152}' @ 14cd3f640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshAttributePaintTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UMeshAttributePaintTool::_getUObject_adjustor_152__(UMeshAttributePaintTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshAttributePaintTool *)&this[-1].SelectionTids.Elements.field_0x10);
  return (UObject *)pUVar1;
}

