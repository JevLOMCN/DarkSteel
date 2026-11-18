// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 152

// StaticClass @ 14a1fc260

UClass * __cdecl UControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRig",
               &Z_Registration_Info_UClass_UControlRig.InnerSingleton,
               StaticRegisterNativesUControlRig,0xc50,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRig>,
               InternalVTableHelperCtorCaller<UControlRig>,local_res8,URigVMHost::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRig.InnerSingleton;
}

// UControlRig @ 14a221640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall UControlRig::UControlRig(UControlRig *this,FVTableHelper *param_1)

{
  URigVMHost::URigVMHost((URigVMHost *)this,param_1);
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x18 = 2;
  *(undefined8 *)&this->BeginDestroyEvent = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x10 = 0;
  (this->OverrideAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideAssets).ArrayNum = 0;
  (this->OverrideAssets).ArrayMax = 0;
  this->bSuspendOverrideAssetChangedDelegate = false;
  (this->HierarchySettings).ElementNameDisplayMode = Auto;
  (this->HierarchySettings).ProceduralElementLimit = 2000;
  *(undefined8 *)&this->ControlCustomizations = 0;
  *(undefined8 *)&(this->ControlCustomizations).field_0x8 = 0;
  *(undefined8 *)&(this->ControlCustomizations).field_0x20 = 0;
  *(undefined4 *)&(this->ControlCustomizations).field_0x28 = 0;
  *(undefined4 *)&(this->ControlCustomizations).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlCustomizations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlCustomizations).field_0x34 = 0;
  *(undefined8 *)&(this->ControlCustomizations).field_0x40 = 0;
  *(undefined4 *)&(this->ControlCustomizations).field_0x48 = 0;
  (this->DynamicHierarchy).field0_0x0.DebugPtr = (URigHierarchy *)0x0;
  (this->ShapeLibraries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeLibraries).ArrayNum = 0;
  (this->ShapeLibraries).ArrayMax = 0;
  *(undefined8 *)&this->ShapeLibraryNameMap = 0;
  *(undefined8 *)&(this->ShapeLibraryNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->ShapeLibraryNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->ShapeLibraryNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x48 = 0;
  (this->ObjectBinding).Object = (IControlRigObjectBinding *)0x0;
  (this->ObjectBinding).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext(&this->RigVMExtendedExecuteContext);
  (this->DataSourceRegistry).field0_0x0.DebugPtr = (UAnimationDataSourceRegistry *)0x0;
  *(undefined8 *)&this->PreConstructionForUIEvent = 0;
  *(undefined8 *)&(this->PreConstructionForUIEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreConstructionForUIEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreConstructionForUIEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreConstructionEvent = 0;
  *(undefined8 *)&(this->PreConstructionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreConstructionEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreConstructionEvent).field_0x18 = 2;
  *(undefined8 *)&this->PostConstructionEvent = 0;
  *(undefined8 *)&(this->PostConstructionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostConstructionEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PostConstructionEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreForwardsSolveEvent = 0;
  *(undefined8 *)&(this->PreForwardsSolveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreForwardsSolveEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreForwardsSolveEvent).field_0x18 = 2;
  *(undefined8 *)&this->PostForwardsSolveEvent = 0;
  *(undefined8 *)&(this->PostForwardsSolveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostForwardsSolveEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PostForwardsSolveEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreAdditiveValuesApplicationEvent = 0;
  *(undefined8 *)&(this->PreAdditiveValuesApplicationEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreAdditiveValuesApplicationEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreAdditiveValuesApplicationEvent).field_0x18 = 2;
  *(undefined8 *)&this->RigEventDelegate = 0;
  *(undefined8 *)&(this->RigEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RigEventDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RigEventDelegate).field_0x18 = 2;
  (this->Influences).Maps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Influences).Maps.ArrayNum = 0;
  (this->Influences).Maps.ArrayMax = 0;
  *(undefined8 *)&(this->Influences).EventToIndex = 0;
  *(undefined8 *)&(this->Influences).EventToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Influences).EventToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Influences).EventToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x48 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x10 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x18 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x38 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x48 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x8 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x20 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x28 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x34 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x40 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x8 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x20 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x28 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x34 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x40 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x48 = 0;
  (this->ElementKeyRedirector).Hash = 0xffffffff;
  (this->CombinedAssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CombinedAssetUserData).ArrayNum = 0;
  (this->CombinedAssetUserData).ArrayMax = 0;
  *(undefined8 *)&this->ExternalVariableDataAssetLinks = 0;
  *(undefined8 *)&(this->ExternalVariableDataAssetLinks).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalVariableDataAssetLinks).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalVariableDataAssetLinks).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x48 = 0;
  *(undefined8 *)&this->GetExternalAssetUserDataDelegate = 0;
  *(undefined8 *)&(this->GetExternalAssetUserDataDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetExternalAssetUserDataDelegate).field_0x10 = 0;
  (this->ElementsBeingInteracted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsBeingInteracted).ArrayNum = 0;
  (this->ElementsBeingInteracted).ArrayMax = 0;
  (this->OuterSceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnFilterControl = 0;
  *(undefined8 *)&(this->OnFilterControl).field_0x8 = 0;
  *(undefined8 *)&(this->OnFilterControl).field_0x10 = 0;
  *(undefined8 *)&(this->OnFilterControl).field_0x18 = 2;
  *(undefined8 *)&this->OnControlModified = 0;
  *(undefined8 *)&(this->OnControlModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlModified).field_0x18 = 2;
  *(undefined8 *)&this->OnControlSelected = 0;
  *(undefined8 *)&(this->OnControlSelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlSelected).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlSelected).field_0x18 = 2;
  *(undefined8 *)&this->OnControlUndoBracket = 0;
  *(undefined8 *)&(this->OnControlUndoBracket).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlUndoBracket).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlUndoBracket).field_0x18 = 2;
  *(undefined8 *)&this->OnControlRigBound = 0;
  *(undefined8 *)&(this->OnControlRigBound).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlRigBound).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlRigBound).field_0x18 = 2;
  this->OnControlSelected_BP = (FOnControlSelectedBP)0x0;
  (this->QueuedModifiedControls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedModifiedControls).ArrayNum = 0;
  (this->QueuedModifiedControls).ArrayMax = 0;
  *(undefined8 *)&this->OverrideAssetsChangedDelegate = 0;
  *(undefined8 *)&(this->OverrideAssetsChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OverrideAssetsChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OverrideAssetsChangedDelegate).field_0x18 = 2;
  (this->PoseBeforeBackwardsSolve).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseBeforeBackwardsSolve).Elements.ArrayNum = 0;
  (this->PoseBeforeBackwardsSolve).Elements.ArrayMax = 0;
  (this->PoseBeforeBackwardsSolve).HierarchyTopologyVersion = -1;
  (this->PoseBeforeBackwardsSolve).PoseHash = -1;
  (this->PoseBeforeBackwardsSolve).CachedPoseHash = -1;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex = 0;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x48 = 0;
  (this->ControlsAfterBackwardsSolve).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlsAfterBackwardsSolve).Elements.ArrayNum = 0;
  (this->ControlsAfterBackwardsSolve).Elements.ArrayMax = 0;
  (this->ControlsAfterBackwardsSolve).HierarchyTopologyVersion = -1;
  (this->ControlsAfterBackwardsSolve).PoseHash = -1;
  (this->ControlsAfterBackwardsSolve).CachedPoseHash = -1;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex = 0;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x48 = 0;
  this->bOnlyRunConstruction = false;
  *(undefined8 *)&this->ControlValues = 0;
  *(undefined8 *)&(this->ControlValues).field_0x8 = 0;
  *(undefined8 *)&(this->ControlValues).field_0x20 = 0;
  *(undefined4 *)&(this->ControlValues).field_0x28 = 0;
  *(undefined4 *)&(this->ControlValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlValues).field_0x34 = 0;
  *(undefined8 *)&(this->ControlValues).field_0x40 = 0;
  *(undefined4 *)&(this->ControlValues).field_0x48 = 0;
  *(undefined8 *)&this->SwitchParentValues = 0;
  *(undefined8 *)&(this->SwitchParentValues).field_0x8 = 0;
  *(undefined8 *)&(this->SwitchParentValues).field_0x20 = 0;
  *(undefined4 *)&(this->SwitchParentValues).field_0x28 = 0;
  *(undefined4 *)&(this->SwitchParentValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SwitchParentValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SwitchParentValues).field_0x34 = 0;
  *(undefined8 *)&(this->SwitchParentValues).field_0x40 = 0;
  *(undefined4 *)&(this->SwitchParentValues).field_0x48 = 0;
  *(undefined8 *)&this->PhysicsSimulations = 0;
  *(undefined8 *)&(this->PhysicsSimulations).field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsSimulations).field_0x20 = 0;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x34 = 0;
  *(undefined8 *)&(this->PhysicsSimulations).field_0x40 = 0;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x48 = 0;
  FRigModuleSettings::FRigModuleSettings(&this->RigModuleSettings);
  (this->RigModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigModulePrefix).Data.ArrayNum = 0;
  (this->RigModulePrefix).Data.ArrayMax = 0;
  (this->Replay).field0_0x0.DebugPtr = (UControlRigReplay *)0x0;
  return this;
}

// UControlRig @ 14a221c90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall UControlRig::UControlRig(UControlRig *this,FObjectInitializer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UControlRig *pUVar6;
  undefined8 local_18 [2];
  
  URigVMHost::URigVMHost((URigVMHost *)this,param_1);
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x18 = 2;
  *(undefined8 *)&this->BeginDestroyEvent = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  *(undefined8 *)&(this->BeginDestroyEvent).field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  (this->OverrideAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideAssets).ArrayNum = 0;
  (this->OverrideAssets).ArrayMax = 0;
  this->bSuspendOverrideAssetChangedDelegate = false;
  (this->HierarchySettings).ElementNameDisplayMode = Auto;
  (this->HierarchySettings).ProceduralElementLimit = 2000;
  *(undefined8 *)&this->ControlCustomizations = 0;
  *(undefined8 *)&(this->ControlCustomizations).field_0x8 = 0;
  *(undefined8 *)&(this->ControlCustomizations).field_0x20 = 0;
  *(undefined4 *)&(this->ControlCustomizations).field_0x28 = 0;
  *(undefined4 *)&(this->ControlCustomizations).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlCustomizations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlCustomizations).field_0x34 = 0;
  *(undefined8 *)&(this->ControlCustomizations).field_0x40 = 0;
  *(undefined4 *)&(this->ControlCustomizations).field_0x48 = 0;
  (this->DynamicHierarchy).field0_0x0.DebugPtr = (URigHierarchy *)0x0;
  (this->ShapeLibraries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeLibraries).ArrayNum = 0;
  (this->ShapeLibraries).ArrayMax = 0;
  *(undefined8 *)&this->ShapeLibraryNameMap = 0;
  *(undefined8 *)&(this->ShapeLibraryNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->ShapeLibraryNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->ShapeLibraryNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x48 = 0;
  (this->ObjectBinding).Object = (IControlRigObjectBinding *)0x0;
  (this->ObjectBinding).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext(&this->RigVMExtendedExecuteContext);
  (this->DataSourceRegistry).field0_0x0.DebugPtr = (UAnimationDataSourceRegistry *)0x0;
  *(undefined8 *)&this->PreConstructionForUIEvent = 0;
  *(undefined8 *)&(this->PreConstructionForUIEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreConstructionForUIEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreConstructionForUIEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreConstructionEvent = 0;
  *(undefined8 *)&(this->PreConstructionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreConstructionEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreConstructionEvent).field_0x18 = 2;
  *(undefined8 *)&this->PostConstructionEvent = 0;
  *(undefined8 *)&(this->PostConstructionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostConstructionEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PostConstructionEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreForwardsSolveEvent = 0;
  *(undefined8 *)&(this->PreForwardsSolveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreForwardsSolveEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreForwardsSolveEvent).field_0x18 = 2;
  *(undefined8 *)&this->PostForwardsSolveEvent = 0;
  *(undefined8 *)&(this->PostForwardsSolveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostForwardsSolveEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PostForwardsSolveEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreAdditiveValuesApplicationEvent = 0;
  *(undefined8 *)&(this->PreAdditiveValuesApplicationEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreAdditiveValuesApplicationEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PreAdditiveValuesApplicationEvent).field_0x18 = 2;
  *(undefined8 *)&this->RigEventDelegate = 0;
  *(undefined8 *)&(this->RigEventDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RigEventDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RigEventDelegate).field_0x18 = 2;
  (this->Influences).Maps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Influences).Maps.ArrayNum = 0;
  (this->Influences).Maps.ArrayMax = 0;
  *(undefined8 *)&(this->Influences).EventToIndex = 0;
  *(undefined8 *)&(this->Influences).EventToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->Influences).EventToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->Influences).EventToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x48 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x10 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x18 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x38 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x48 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x8 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x20 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x28 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x34 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x40 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x8 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x20 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x28 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x34 = 0;
  *(undefined8 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x40 = 0;
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x48 = 0;
  (this->ElementKeyRedirector).Hash = 0xffffffff;
  (this->CombinedAssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CombinedAssetUserData).ArrayNum = 0;
  (this->CombinedAssetUserData).ArrayMax = 0;
  *(undefined8 *)&this->ExternalVariableDataAssetLinks = 0;
  *(undefined8 *)&(this->ExternalVariableDataAssetLinks).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalVariableDataAssetLinks).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalVariableDataAssetLinks).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x48 = 0;
  *(undefined8 *)&this->GetExternalAssetUserDataDelegate = 0;
  *(undefined8 *)&(this->GetExternalAssetUserDataDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetExternalAssetUserDataDelegate).field_0x10 = 0;
  this->bCopyHierarchyBeforeConstruction = true;
  this->bResetInitialTransformsBeforeConstruction = true;
  this->bHierarchyInitializedThisFrame = false;
  this->bResetCurrentTransformsAfterConstruction = false;
  this->bManipulationEnabled = false;
  this->PreConstructionBracket = 0;
  this->PostConstructionBracket = 0;
  this->InteractionBracket = 0;
  this->InterRigSyncBracket = 0;
  this->ControlUndoBracketIndex = 0;
  this->InteractionType = '\0';
  this->bEvaluationTriggeredFromInteraction = false;
  (this->ElementsBeingInteracted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsBeingInteracted).ArrayNum = 0;
  (this->ElementsBeingInteracted).ArrayMax = 0;
  this->bInteractionJustBegan = false;
  (this->OuterSceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->OnFilterControl = 0;
  *(undefined8 *)&(this->OnFilterControl).field_0x8 = 0;
  *(undefined8 *)&(this->OnFilterControl).field_0x10 = 0;
  *(undefined8 *)&(this->OnFilterControl).field_0x18 = 2;
  *(undefined8 *)&this->OnControlModified = 0;
  *(undefined8 *)&(this->OnControlModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlModified).field_0x18 = 2;
  *(undefined8 *)&this->OnControlSelected = 0;
  *(undefined8 *)&(this->OnControlSelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlSelected).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlSelected).field_0x18 = 2;
  *(undefined8 *)&this->OnControlUndoBracket = 0;
  *(undefined8 *)&(this->OnControlUndoBracket).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlUndoBracket).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlUndoBracket).field_0x18 = 2;
  *(undefined8 *)&this->OnControlRigBound = 0;
  *(undefined8 *)&(this->OnControlRigBound).field_0x8 = 0;
  *(undefined8 *)&(this->OnControlRigBound).field_0x10 = 0;
  *(undefined8 *)&(this->OnControlRigBound).field_0x18 = 2;
  this->OnControlSelected_BP = (FOnControlSelectedBP)0x0;
  (this->QueuedModifiedControls).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedModifiedControls).ArrayNum = 0;
  (this->QueuedModifiedControls).ArrayMax = 0;
  *(undefined8 *)&this->OverrideAssetsChangedDelegate = 0;
  *(undefined8 *)&(this->OverrideAssetsChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OverrideAssetsChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OverrideAssetsChangedDelegate).field_0x18 = 2;
  this->bIsAdditive = false;
  (this->PoseBeforeBackwardsSolve).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseBeforeBackwardsSolve).Elements.ArrayNum = 0;
  (this->PoseBeforeBackwardsSolve).Elements.ArrayMax = 0;
  (this->PoseBeforeBackwardsSolve).HierarchyTopologyVersion = -1;
  (this->PoseBeforeBackwardsSolve).PoseHash = -1;
  (this->PoseBeforeBackwardsSolve).CachedPoseHash = -1;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex = 0;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x48 = 0;
  (this->ControlsAfterBackwardsSolve).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlsAfterBackwardsSolve).Elements.ArrayNum = 0;
  (this->ControlsAfterBackwardsSolve).Elements.ArrayMax = 0;
  (this->ControlsAfterBackwardsSolve).HierarchyTopologyVersion = -1;
  (this->ControlsAfterBackwardsSolve).PoseHash = -1;
  (this->ControlsAfterBackwardsSolve).CachedPoseHash = -1;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex = 0;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x48 = 0;
  *(undefined8 *)&this->ControlValues = 0;
  *(undefined8 *)&(this->ControlValues).field_0x8 = 0;
  *(undefined8 *)&(this->ControlValues).field_0x20 = 0;
  this->bOnlyRunConstruction = false;
  *(undefined4 *)&(this->ControlValues).field_0x28 = 0;
  *(undefined4 *)&(this->ControlValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlValues).field_0x34 = 0;
  *(undefined8 *)&(this->ControlValues).field_0x40 = 0;
  *(undefined4 *)&(this->ControlValues).field_0x48 = 0;
  *(undefined8 *)&this->SwitchParentValues = 0;
  *(undefined8 *)&(this->SwitchParentValues).field_0x8 = 0;
  *(undefined8 *)&(this->SwitchParentValues).field_0x20 = 0;
  *(undefined4 *)&(this->SwitchParentValues).field_0x28 = 0;
  *(undefined4 *)&(this->SwitchParentValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->SwitchParentValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SwitchParentValues).field_0x34 = 0;
  *(undefined8 *)&(this->SwitchParentValues).field_0x40 = 0;
  *(undefined4 *)&(this->SwitchParentValues).field_0x48 = 0;
  this->DebugBoneRadiusMultiplier = 1.0;
  *(undefined8 *)&this->PhysicsSimulations = 0;
  *(undefined8 *)&(this->PhysicsSimulations).field_0x8 = 0;
  *(undefined8 *)&(this->PhysicsSimulations).field_0x20 = 0;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x28 = 0;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x2c = 0x80;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x34 = 0;
  *(undefined8 *)&(this->PhysicsSimulations).field_0x40 = 0;
  *(undefined4 *)&(this->PhysicsSimulations).field_0x48 = 0;
  FRigModuleSettings::FRigModuleSettings(&this->RigModuleSettings);
  (this->RigModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigModulePrefix).Data.ArrayNum = 0;
  (this->RigModulePrefix).Data.ArrayMax = 0;
  (this->Replay).field0_0x0.DebugPtr = (UControlRigReplay *)0x0;
  plVar2 = &this->_padding_;
  this->ReplayTimeIndex = -1;
  FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
  if (((undefined8 *)*plVar2 <= local_18) &&
     (local_18 < (undefined8 *)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UControlRig *)(*pcVar3)();
      return pUVar6;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(undefined8 *)(*plVar2 + (longlong)iVar5 * 8) = local_18[0];
  this->_padding_ = (longlong)&this->RigVMExtendedExecuteContext;
  return this;
}

// ~UControlRig @ 14a226350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::~UControlRig(UControlRig *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  pFVar1 = (this->RigModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRigModuleSettings::~FRigModuleSettings(&this->RigModuleSettings);
  *(undefined4 *)&(this->PhysicsSimulations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PhysicsSimulations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PhysicsSimulations);
  *(undefined4 *)&(this->SwitchParentValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SwitchParentValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSwitchParentInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSwitchParentInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSwitchParentInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SwitchParentValues);
  *(undefined4 *)&(this->ControlValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlValues);
  *(undefined4 *)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlsAfterBackwardsSolve).KeyToIndex.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ControlsAfterBackwardsSolve).KeyToIndex);
  pFVar1 = (this->ControlsAfterBackwardsSolve).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x48 = 0;
  pvVar2 = *(void **)&(this->PoseBeforeBackwardsSolve).KeyToIndex.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PoseBeforeBackwardsSolve).KeyToIndex);
  pFVar1 = (this->PoseBeforeBackwardsSolve).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OverrideAssetsChangedDelegate).field_0x8,
             *(int *)&(this->OverrideAssetsChangedDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OverrideAssetsChangedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OverrideAssetsChangedDelegate);
  pFVar1 = (this->QueuedModifiedControls).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControlRigBound).field_0x8,*(int *)&(this->OnControlRigBound).field_0x10);
  pvVar2 = *(void **)&(this->OnControlRigBound).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControlRigBound);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControlUndoBracket).field_0x8,
             *(int *)&(this->OnControlUndoBracket).field_0x10);
  pvVar2 = *(void **)&(this->OnControlUndoBracket).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControlUndoBracket);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControlSelected).field_0x8,*(int *)&(this->OnControlSelected).field_0x10);
  pvVar2 = *(void **)&(this->OnControlSelected).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControlSelected);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnControlModified).field_0x8,*(int *)&(this->OnControlModified).field_0x10);
  pvVar2 = *(void **)&(this->OnControlModified).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControlModified);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFilterControl).field_0x8,*(int *)&(this->OnFilterControl).field_0x10);
  pvVar2 = *(void **)&(this->OnFilterControl).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFilterControl);
  pFVar1 = (this->ElementsBeingInteracted).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetExternalAssetUserDataDelegate);
  pvVar2 = *(void **)&(this->GetExternalAssetUserDataDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetExternalAssetUserDataDelegate);
  *(undefined4 *)&(this->ExternalVariableDataAssetLinks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExternalVariableDataAssetLinks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UDataAssetLink>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UDataAssetLink>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UDataAssetLink>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalVariableDataAssetLinks);
  pFVar1 = (this->CombinedAssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ElementKeyRedirector).ExternalKeys.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ElementKeyRedirector).ExternalKeys.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ElementKeyRedirector).ExternalKeys);
  *(undefined4 *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ElementKeyRedirector);
  *(undefined4 *)&(this->Influences).EventToIndex.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Influences).EventToIndex.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Influences).EventToIndex);
  DestructItems<FRigInfluenceMap,int>
            ((FRigInfluenceMap *)(this->Influences).Maps.AllocatorInstance.Data,
             (this->Influences).Maps.ArrayNum);
  pFVar1 = (this->Influences).Maps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RigEventDelegate).field_0x8,*(int *)&(this->RigEventDelegate).field_0x10);
  pvVar2 = *(void **)&(this->RigEventDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RigEventDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreAdditiveValuesApplicationEvent).field_0x8,
             *(int *)&(this->PreAdditiveValuesApplicationEvent).field_0x10);
  pvVar2 = *(void **)&(this->PreAdditiveValuesApplicationEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreAdditiveValuesApplicationEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostForwardsSolveEvent).field_0x8,
             *(int *)&(this->PostForwardsSolveEvent).field_0x10);
  pvVar2 = *(void **)&(this->PostForwardsSolveEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostForwardsSolveEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreForwardsSolveEvent).field_0x8,
             *(int *)&(this->PreForwardsSolveEvent).field_0x10);
  pvVar2 = *(void **)&(this->PreForwardsSolveEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreForwardsSolveEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostConstructionEvent).field_0x8,
             *(int *)&(this->PostConstructionEvent).field_0x10);
  pvVar2 = *(void **)&(this->PostConstructionEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostConstructionEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreConstructionEvent).field_0x8,
             *(int *)&(this->PreConstructionEvent).field_0x10);
  pvVar2 = *(void **)&(this->PreConstructionEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreConstructionEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreConstructionForUIEvent).field_0x8,
             *(int *)&(this->PreConstructionForUIEvent).field_0x10);
  pvVar2 = *(void **)&(this->PreConstructionForUIEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PreConstructionForUIEvent);
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(&this->RigVMExtendedExecuteContext);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ObjectBinding).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ShapeLibraryNameMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ShapeLibraryNameMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ShapeLibraryNameMap);
  DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
            ((TSoftObjectPtr<UControlRigShapeLibrary> *)
             (this->ShapeLibraries).AllocatorInstance.Data,(this->ShapeLibraries).ArrayNum);
  pFVar1 = (this->ShapeLibraries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ControlCustomizations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ControlCustomizations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigControlElementCustomization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigControlElementCustomization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FRigControlElementCustomization>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlCustomizations);
  pFVar1 = (this->OverrideAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BeginDestroyEvent).field_0x8,*(int *)&(this->BeginDestroyEvent).field_0x10);
  pvVar2 = *(void **)&(this->BeginDestroyEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BeginDestroyEvent);
  this->_padding_ = (longlong)&___7IMeshDeformerProducer__6B_;
  this->_padding_ = (longlong)&___7IRigHierarchyProvider__6B_;
  this->_padding_ = (longlong)&___7INodeMappingProviderInterface__6B_;
  URigVMHost::~URigVMHost((URigVMHost *)this);
  return;
}

// operator() @ 14a22b050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRig::GetMappableNodeData'::__l2::<lambda_1>::operator()
          (void *this,FRigBoneElement *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  FName *local_158;
  FName *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_128;
  FRigElementKey local_120 [2];
  FRigElementKey local_108;
  FName local_f8;
  FName FStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar2 = *(ForAnyElementType **)this;
  pFVar4 = (FName *)((longlong)&param_1->_padding_ + 4);
  pFVar3 = (FName *)pFVar2->Data;
  if ((pFVar3 <= pFVar4) &&
     (lVar10 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4), pFVar4 < pFVar3 + lVar10)) {
    local_140 = (longlong)*(int *)&pFVar2[1].Data;
    local_138 = 8;
    local_158 = pFVar4;
    local_150 = pFVar3;
    local_148 = lVar10;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar9 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar9 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar9 * 8) = *pFVar4;
  local_108._0_8_ = param_1->_padding_;
  local_108.Name.Number = (uint)param_1->_padding_;
  URigHierarchy::GetFirstParent
            (*(URigHierarchy **)(*(longlong *)((longlong)this + 0x10) + 0x338),local_120,&local_108)
  ;
  if (local_120[0].Type != Bone) {
    local_128 = 0;
    local_120[0].Name.ComparisonIndex.Value = 0;
    local_120[0].Name.Number = 0;
  }
  URigHierarchy::GetGlobalTransformByIndex
            (*(URigHierarchy **)(*(longlong *)((longlong)this + 0x10) + 0x338),&local_88,
             *(int *)((longlong)&param_1->_padding_ + 4),true);
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  local_e8 = local_88.Rotation.XY.m128d_f64[0];
  dStack_e0 = local_88.Rotation.XY.m128d_f64[1];
  local_d8 = local_88.Rotation.ZW.m128d_f64[0];
  dStack_d0 = local_88.Rotation.ZW.m128d_f64[1];
  local_c8 = local_88.Translation.XY.m128d_f64[0];
  dStack_c0 = local_88.Translation.XY.m128d_f64[1];
  local_b8 = local_88.Translation.ZW.m128d_f64[0];
  dStack_b0 = local_88.Translation.ZW.m128d_f64[1];
  local_f8 = local_120[0].Name;
  local_a8 = local_88.Scale3D.XY.m128d_f64[0];
  dStack_a0 = local_88.Scale3D.XY.m128d_f64[1];
  local_98 = local_88.Scale3D.ZW.m128d_f64[0];
  dStack_90 = local_88.Scale3D.ZW.m128d_f64[1];
  pFVar4 = (FName *)pFVar2->Data;
  if ((pFVar4 <= &local_f8) &&
     (lVar10 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4), &local_f8 < pFVar4 + lVar10 * 0xe)
     ) {
    local_140 = (longlong)*(int *)&pFVar2[1].Data;
    local_138 = 0x70;
    local_158 = &local_f8;
    local_150 = pFVar4;
    local_148 = lVar10;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  iVar9 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar9 + 1;
  lVar10 = (longlong)iVar9 * 0x70;
  pFVar5 = pFVar2->Data;
  *(FName *)(pFVar5 + lVar10) = local_f8;
  ((FName *)(pFVar5 + lVar10))[1] = FStack_f0;
  *(double *)(pFVar5 + lVar10 + 0x10) = local_e8;
  *(double *)(pFVar5 + lVar10 + 0x10 + 8) = dStack_e0;
  *(double *)(pFVar5 + lVar10 + 0x20) = local_d8;
  *(double *)(pFVar5 + lVar10 + 0x20 + 8) = dStack_d0;
  *(double *)(pFVar5 + lVar10 + 0x30) = local_c8;
  *(double *)(pFVar5 + lVar10 + 0x30 + 8) = dStack_c0;
  *(double *)(pFVar5 + lVar10 + 0x40) = local_b8;
  *(double *)(pFVar5 + lVar10 + 0x40 + 8) = dStack_b0;
  *(double *)(pFVar5 + lVar10 + 0x50) = local_a8;
  *(double *)(pFVar5 + lVar10 + 0x50 + 8) = dStack_a0;
  *(double *)(pFVar5 + lVar10 + 0x60) = local_98;
  *(double *)(pFVar5 + lVar10 + 0x60 + 8) = dStack_90;
  return true;
}

// operator() @ 14a22c010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRig::SetBoneInitialTransformsFromCompactPose'::__l2::<lambda_1>::operator()
          (void *this,FRigBoneElement *param_1)

{
  double *pdVar1;
  ushort uVar2;
  longlong *plVar3;
  ushort *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ushort *puVar12;
  int *piVar13;
  longlong *plVar14;
  undefined1 auStackY_d8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((param_1->BoneType == Imported) &&
     (uVar9 = FBoneContainer::GetPoseBoneIndexForBoneName
                        (*(FBoneContainer **)(*(longlong *)((longlong)this + 8) + 0x10),
                         (FName *)((longlong)&param_1->_padding_ + 4)), uVar9 != 0xffffffff)) {
    plVar3 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x10);
    puVar4 = (ushort *)*plVar3;
    for (puVar12 = puVar4; puVar12 != puVar4 + (int)plVar3[1]; puVar12 = puVar12 + 1) {
      if (*puVar12 == uVar9) {
        uVar9 = (uint)((longlong)puVar12 - (longlong)puVar4 >> 1);
        goto LAB_14a22c09c;
      }
    }
    uVar9 = 0xffffffff;
LAB_14a22c09c:
    if (uVar9 != 0xffffffff) {
      lVar5 = plVar3[0x1d];
      if (lVar5 == 0) {
        plVar14 = (longlong *)(plVar3[9] + 0x30);
        piVar13 = (int *)(plVar3[9] + 0x38);
      }
      else {
        plVar14 = (longlong *)(lVar5 + 0x10);
        piVar13 = (int *)(lVar5 + 0x18);
      }
      uVar10 = 0;
      if ((int)uVar9 < (int)plVar3[1]) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar2 = *(ushort *)(*plVar3 + (longlong)(int)uVar9 * 2);
      if ((*piVar13 <= (int)(uint)uVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      lVar5 = *plVar14;
      lVar11 = (ulonglong)uVar2 * 0x60;
      local_98.Rotation.XY.m128d_f64[0] = *(double *)(lVar11 + lVar5);
      local_98.Rotation.XY.m128d_f64[1] = ((double *)(lVar11 + lVar5))[1];
      pdVar1 = (double *)(lVar11 + 0x10 + lVar5);
      local_98.Rotation.ZW.m128d_f64[0] = *pdVar1;
      local_98.Rotation.ZW.m128d_f64[1] = pdVar1[1];
      pdVar1 = (double *)(lVar11 + 0x20 + lVar5);
      local_98.Translation.XY.m128d_f64[0] = *pdVar1;
      local_98.Translation.XY.m128d_f64[1] = pdVar1[1];
      pdVar1 = (double *)(lVar11 + 0x30 + lVar5);
      local_98.Translation.ZW.m128d_f64[0] = *pdVar1;
      local_98.Translation.ZW.m128d_f64[1] = pdVar1[1];
      pdVar1 = (double *)(lVar11 + 0x40 + lVar5);
      local_98.Scale3D.XY.m128d_f64[0] = *pdVar1;
      local_98.Scale3D.XY.m128d_f64[1] = pdVar1[1];
      pdVar1 = (double *)(lVar11 + 0x50 + lVar5);
      local_98.Scale3D.ZW.m128d_f64[0] = *pdVar1;
      local_98.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
      URigHierarchy::SetTransform
                (*(URigHierarchy **)(*(longlong *)this + 0x338),(FRigTransformElement *)param_1,
                 &local_98,InitialLocal,true,false,false,false);
    }
  }
  return true;
}

// operator() @ 14a22c230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRig::SetBoneInitialTransformsFromRefSkeleton'::__l2::<lambda_1>::operator()
          (void *this,FRigBoneElement *param_1)

{
  double *pdVar1;
  uint uVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  TTuple<FName,int> *pTVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStackY_b8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((param_1->BoneType == Imported) &&
     (FVar3 = *(FName *)((longlong)&param_1->_padding_ + 4), FVar3 != (FName)0x0)) {
    pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)((longlong)this + 0x98),FVar3);
    puVar11 = (uint *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,int> *)0x0) {
      puVar11 = (uint *)0x0;
    }
    if (puVar11 != (uint *)0x0) {
      uVar2 = *puVar11;
      if (uVar2 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar2 < *(int *)((longlong)this + 0x40)) {
          uVar9 = ~uVar2 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        lVar4 = *(longlong *)((longlong)this + 0x38);
        lVar10 = (longlong)(int)uVar2 * 0x60;
        local_78.Rotation.XY.m128d_f64[0] = *(double *)(lVar10 + lVar4);
        local_78.Rotation.XY.m128d_f64[1] = ((double *)(lVar10 + lVar4))[1];
        pdVar1 = (double *)(lVar10 + 0x10 + lVar4);
        local_78.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_78.Rotation.ZW.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x20 + lVar4);
        local_78.Translation.XY.m128d_f64[0] = *pdVar1;
        local_78.Translation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x30 + lVar4);
        local_78.Translation.ZW.m128d_f64[0] = *pdVar1;
        local_78.Translation.ZW.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x40 + lVar4);
        local_78.Scale3D.XY.m128d_f64[0] = *pdVar1;
        local_78.Scale3D.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(lVar10 + 0x50 + lVar4);
        local_78.Scale3D.ZW.m128d_f64[0] = *pdVar1;
        local_78.Scale3D.ZW.m128d_f64[1] = pdVar1[1];
        URigHierarchy::SetTransform
                  (*(URigHierarchy **)(*(longlong *)this + 0x338),(FRigTransformElement *)param_1,
                   &local_78,InitialLocal,true,false,false,false);
        URigHierarchy::SetTransform
                  (*(URigHierarchy **)(*(longlong *)this + 0x338),(FRigTransformElement *)param_1,
                   &local_78,CurrentLocal,true,false,false,false);
      }
    }
  }
  return true;
}

// operator() @ 14a22d390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRig::CreateRigControlsForCurveContainer'::__l5::<lambda_1>::operator()
          (void *this,FRigCurveElement *param_1)

{
  float fVar1;
  URigHierarchy *this_00;
  URigHierarchyController *this_01;
  __m128d _Var2;
  __m128d _Var3;
  __m128d _Var4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  int iVar8;
  size_t sVar9;
  float *pfVar10;
  FRigControlSettings *pFVar11;
  wchar_t *_Str;
  ForAnyElementType FVar12;
  undefined1 auStackY_758 [32];
  FRigElementKey local_708;
  FString local_6f8;
  FRigElementKey local_6e8;
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  bool local_658;
  undefined3 uStack_657;
  TTransform<double> local_648;
  TTransform<double> local_5e8 [2];
  undefined4 local_508;
  FRigControlSettings local_4f8;
  FRigControlSettings local_2d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_758;
  ::FName::ToString((FName *)((longlong)&param_1->_padding_ + 4),&local_6f8);
  if (CtrlPrefix.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)CtrlPrefix.Data.AllocatorInstance;
    if (CtrlPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_14a22d6d7;
  }
  sVar9 = wcslen(_Str);
  iVar8 = ::FString::Find(&local_6f8,_Str,(int)sVar9,IgnoreCase,FromStart,-1);
  if (iVar8 != -1) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_6f8.Data.ArrayNum != 0) {
      FVar12.Data = local_6f8.Data.AllocatorInstance.Data;
    }
    this_00 = *(URigHierarchy **)(*(longlong *)this + 0x338);
    ::FName::FName((FName *)&local_6e8,(wchar_t *)FVar12.Data);
    local_708.Name.ComparisonIndex.Value = local_6e8._0_4_;
    local_708.Name.Number = local_6e8.Name.ComparisonIndex.Value;
    local_708.Type = 8;
    iVar8 = URigHierarchy::GetIndex(this_00,&local_708,true);
    if (iVar8 == -1) {
      FRigControlSettings::FRigControlSettings(&local_2d8);
      local_2d8.AnimationType = AnimationChannel;
      local_2d8.ControlType = Float;
      local_508._0_1_ = true;
      local_508._1_3_ = 0;
      local_2d8.bIsCurve = true;
      local_2d8.bDrawLimits = false;
      pfVar10 = FRigCurveElement::Get(param_1);
      _Var7 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      _Var6 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      _Var5 = UE::Math::TTransform<double>::Identity.Translation.ZW;
      _Var4 = UE::Math::TTransform<double>::Identity.Translation.XY;
      _Var3 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      _Var2 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      this_01 = *(URigHierarchyController **)((longlong)this + 8);
      fVar1 = *pfVar10;
      pFVar11 = FRigControlSettings::FRigControlSettings(&local_4f8,&local_2d8);
      local_658 = local_508._0_1_;
      uStack_657 = local_508._1_3_;
      local_708._0_4_ = local_708._0_4_ & 0xffffff00;
      local_648.Rotation.XY.m128d_f64 = _Var2.m128d_f64;
      local_648.Rotation.ZW.m128d_f64 = _Var3.m128d_f64;
      local_648.Translation.XY.m128d_f64 = _Var4.m128d_f64;
      local_648.Translation.ZW.m128d_f64 = _Var5.m128d_f64;
      local_648.Scale3D.XY.m128d_f64 = _Var6.m128d_f64;
      local_648.Scale3D.ZW.m128d_f64 = _Var7.m128d_f64;
      local_5e8[0].Rotation.XY.m128d_f64 = _Var2.m128d_f64;
      local_5e8[0].Rotation.ZW.m128d_f64 = _Var3.m128d_f64;
      local_5e8[0].Translation.XY.m128d_f64 = _Var4.m128d_f64;
      local_5e8[0].Translation.ZW.m128d_f64 = _Var5.m128d_f64;
      local_5e8[0].Scale3D.XY.m128d_f64 = _Var6.m128d_f64;
      local_5e8[0].Scale3D.ZW.m128d_f64 = _Var7.m128d_f64;
      local_6d8 = ZEXT416((uint)fVar1);
      local_6c8._0_4_ = 0.0;
      local_6c8._4_4_ = 0.0;
      uStack_6c0._0_4_ = 0.0;
      uStack_6c0._4_4_ = 0.0;
      local_6b8._0_4_ = 0.0;
      local_6b8._4_4_ = 0.0;
      uStack_6b0._0_4_ = 0.0;
      uStack_6b0._4_4_ = 0.0;
      local_6a8._0_4_ = 0.0;
      local_6a8._4_4_ = 0.0;
      uStack_6a0._0_4_ = 0.0;
      uStack_6a0._4_4_ = 0.0;
      local_698._0_4_ = 0.0;
      local_698._4_4_ = 0.0;
      uStack_690._0_4_ = 0.0;
      uStack_690._4_4_ = 0.0;
      local_688._0_4_ = 0.0;
      local_688._4_4_ = 0.0;
      uStack_680._0_4_ = 0.0;
      uStack_680._4_4_ = 0.0;
      local_678._0_4_ = 0.0;
      local_678._4_4_ = 0.0;
      uStack_670._0_4_ = 0.0;
      uStack_670._4_4_ = 0.0;
      local_668._0_4_ = 0.0;
      local_668._4_4_ = 0.0;
      uStack_660._0_4_ = 0.0;
      uStack_660._4_4_ = 0.0;
      local_708.Name.ComparisonIndex.Value = 0;
      local_708.Name.Number = 0;
      URigHierarchyController::AddControl
                (this_01,&local_6e8,*(FName *)((longlong)&param_1->_padding_ + 4),&local_708,pFVar11
                 ,(FRigControlValue *)local_6d8,local_5e8,&local_648,true,false);
      if (local_2d8.FilteredChannels.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.FilteredChannels.AllocatorInstance.Data);
      }
      if (local_2d8.PreviouslyDrivenControls.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.PreviouslyDrivenControls.AllocatorInstance.Data);
      }
      if (local_2d8.DrivenControls.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.DrivenControls.AllocatorInstance.Data);
      }
      if (local_2d8.Customization.RemovedSpaces.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Customization.RemovedSpaces.AllocatorInstance.Data);
      }
      if (local_2d8.Customization.AvailableSpaces.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Customization.AvailableSpaces.AllocatorInstance.Data);
      }
      if (local_2d8.LimitEnabled.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.LimitEnabled.AllocatorInstance.Data);
      }
    }
  }
LAB_14a22d6d7:
  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 14a22d730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRig::Evaluate_AnyThread'::__l5::<lambda_1>::operator()(void *this,FRigBaseElement *param_1)

{
  char cVar1;
  int iVar2;
  URigHierarchy *this_00;
  bool bVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  FRigElementKey *pFVar6;
  FRigElementKey *pFVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackY_d8 [32];
  FRigElementKey local_98;
  FRigElementKey local_8c;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (param_1 == (FRigBaseElement *)0x0) {
    return true;
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  pUVar5 = FRigControlElement::StaticStruct();
  if (pUVar5 != (UScriptStruct *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar1 = *(char *)((longlong)&param_1[5].CachedNameString.Data.AllocatorInstance.Data + 1);
      if (cVar1 == '\0') {
        return true;
      }
      if ((cVar1 == '\x02') &&
         (lVar4._0_4_ = param_1[9].SubIndex, lVar4._4_4_ = param_1[9].CreatedAtInstructionIndex,
         lVar4 != 0)) {
        return true;
      }
      if (*(char *)&param_1[5].CachedNameString.Data.AllocatorInstance.Data == '\x02') {
        return true;
      }
      pFVar6 = URigHierarchy::GetActiveParent(*(URigHierarchy **)this,&local_98,&param_1->Key,true);
      pFVar7 = URigHierarchy::GetDefaultParentKey(&local_8c);
      if ((pFVar6->Name != pFVar7->Name) || (pFVar6->Type != pFVar7->Type)) {
        URigHierarchy::SwitchToDefaultParent(*(URigHierarchy **)this,param_1,false,true);
      }
      goto LAB_14a22d851;
    }
  }
  lVar4 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  pUVar5 = FRigNullElement::StaticStruct();
  if (pUVar5 == (UScriptStruct *)0x0) {
    return true;
  }
  iVar2 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar5->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return true;
  }
LAB_14a22d851:
  this_00 = *(URigHierarchy **)this;
  pTVar8 = URigHierarchy::GetTransform
                     (this_00,&local_78,(FRigTransformElement *)param_1,InitialLocal);
  URigHierarchy::SetTransform
            (this_00,(FRigTransformElement *)param_1,pTVar8,CurrentLocal,true,false,false,false);
  return true;
}

// operator() @ 14a230e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UControlRig::Execute'::__l244::<lambda_3>::operator()(void *this,FRigControlElement *param_1)

{
  FScriptContainerElement *pFVar1;
  ERigControlAxis EVar2;
  ERigControlType EVar3;
  uint uVar4;
  int iVar5;
  URigHierarchy *this_00;
  FRigControlElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  longlong lVar17;
  UScriptStruct *pUVar18;
  FScriptContainerElement *pFVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_738 [32];
  FScriptContainerElement *local_718;
  FScriptContainerElement *local_710;
  longlong local_708;
  longlong local_700;
  undefined8 local_6f8;
  undefined8 local_6e8;
  float local_6e0;
  undefined8 local_6d8;
  float local_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double local_6b0;
  double dStack_6a8;
  double local_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double local_680;
  double dStack_678;
  double local_670;
  double local_668;
  double dStack_660;
  undefined8 local_658;
  double local_650;
  double dStack_648;
  undefined8 local_640;
  double local_638;
  double dStack_630;
  undefined8 local_628;
  double local_620;
  double dStack_618;
  undefined8 local_610;
  double local_608;
  double dStack_600;
  undefined8 local_5f8;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double local_5c0;
  double dStack_5b8;
  double local_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double local_590;
  double dStack_588;
  double local_580;
  double local_578;
  double dStack_570;
  double local_568;
  double local_560;
  double dStack_558;
  double local_550;
  double local_548;
  double dStack_540;
  double local_538;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double local_470;
  double dStack_468;
  double local_460;
  double local_458;
  double dStack_450;
  double local_448;
  double local_440;
  double dStack_438;
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  double local_410;
  double dStack_408;
  double local_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float local_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float local_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  FRigVMDrawInstruction local_1d8;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_738;
  if ((param_1->Settings).AnimationType == AnimationChannel) {
    return true;
  }
  if ((param_1->Settings).ControlType == Bool) {
    return true;
  }
  if ((param_1->Settings).bShapeVisible == false) {
    return true;
  }
  if ((param_1->Settings).bIsTransientControl != false) {
    return true;
  }
  if ((param_1->Settings).bDrawLimits == false) {
    return true;
  }
  pFVar19 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
  pFVar1 = pFVar19 + (longlong)(param_1->Settings).LimitEnabled.ArrayNum * 2;
  if (pFVar19 == pFVar1) {
    return true;
  }
  while ((*pFVar19 != (FScriptContainerElement)0x1 || (pFVar19[1] != (FScriptContainerElement)0x1)))
  {
    pFVar19 = pFVar19 + 2;
    if (pFVar19 == pFVar1) {
      return true;
    }
  }
  this_00 = *(URigHierarchy **)((longlong)this + 8);
  uVar4 = *(uint *)&param_1->field_0x1c;
  if (((int)uVar4 < 0) || ((this_00->Elements).ArrayNum <= (int)uVar4)) {
LAB_14a231024:
    local_1d8.Transform.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_108.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_108.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    iVar5 = (this_00->Elements).ArrayNum;
    uVar16 = 0;
    if ((int)uVar4 < iVar5) {
      uVar16 = ~uVar4 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_718 = (FScriptContainerElement *)(longlong)(int)uVar4,
       local_710 = (FScriptContainerElement *)(longlong)iVar5,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      uVar15 = (*pcVar7)();
      return (bool)uVar15;
    }
    pFVar6 = *(FRigControlElement **)
              ((this_00->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    if (pFVar6 == (FRigControlElement *)0x0) goto LAB_14a231024;
    lVar17 = (**(code **)(*(longlong *)pFVar6 + 0x10))(pFVar6);
    pUVar18 = FRigControlElement::StaticStruct();
    if (pUVar18 == (UScriptStruct *)0x0) goto LAB_14a231024;
    iVar5 = (int)pUVar18->_padding_;
    if ((*(int *)(lVar17 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar18->_padding_)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (!bVar14) goto LAB_14a231024;
    URigHierarchy::GetControlOffsetTransform(this_00,&local_108,pFVar6,CurrentGlobal);
    local_1d8.Transform.Scale3D.ZW.m128d_f64[0]._0_4_ = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[0]._4_4_ = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_1d8.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[0]._0_4_ =
         local_108.Translation.ZW.m128d_f64[0]._0_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[0]._4_4_ =
         local_108.Translation.ZW.m128d_f64[0]._4_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[1]._0_4_ =
         local_108.Translation.ZW.m128d_f64[1]._0_4_;
    local_1d8.Transform.Translation.ZW.m128d_f64[1]._4_4_ =
         local_108.Translation.ZW.m128d_f64[1]._4_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[0]._0_4_ =
         local_108.Translation.XY.m128d_f64[0]._0_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[0]._4_4_ =
         local_108.Translation.XY.m128d_f64[0]._4_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[1]._0_4_ =
         local_108.Translation.XY.m128d_f64[1]._0_4_;
    local_1d8.Transform.Translation.XY.m128d_f64[1]._4_4_ =
         local_108.Translation.XY.m128d_f64[1]._4_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[0]._0_4_ = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[0]._4_4_ = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[1]._0_4_ = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
    local_1d8.Transform.Rotation.ZW.m128d_f64[1]._4_4_ = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[0]._0_4_ = local_108.Rotation.XY.m128d_f64[0]._0_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[0]._4_4_ = local_108.Rotation.XY.m128d_f64[0]._4_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[1]._0_4_ = local_108.Rotation.XY.m128d_f64[1]._0_4_;
    local_1d8.Transform.Rotation.XY.m128d_f64[1]._4_4_ = local_108.Rotation.XY.m128d_f64[1]._4_4_;
  }
  local_1d8.Color.field0_0x0._0_8_ = *(undefined8 *)&(param_1->Settings).ShapeColor.field0_0x0;
  local_1d8.Color.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(param_1->Settings).ShapeColor.field0_0x0 + 8);
  local_1d8.Name.ComparisonIndex.Value = 0;
  local_1d8.Name.Number = 0;
  local_1d8.PrimitiveType.Value = '\x01';
  local_1d8.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Positions.ArrayNum = 0;
  local_1d8.Positions.ArrayMax = 0;
  local_1d8.Thickness = 0.0;
  local_1d8.DepthPriority.Value = '\x01';
  local_1d8.Lifetime = -1.0;
  local_1d8.MeshVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.MeshVerts.ArrayNum = 0;
  local_1d8.MeshVerts.ArrayMax = 0;
  local_1d8.MeshIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.MeshIndices.ArrayNum = 0;
  local_1d8.MeshIndices.ArrayMax = 0;
  local_1d8.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
  local_1d8.Transform.Scale3D.XY.m128d_f64 = local_108.Scale3D.XY.m128d_f64;
  switch((param_1->Settings).ControlType) {
  case Float:
  case ScaleFloat:
    iVar5 = (param_1->Settings).LimitEnabled.ArrayNum;
    if (iVar5 < 1) {
      local_718 = (FScriptContainerElement *)0x0;
      local_710 = (FScriptContainerElement *)(longlong)iVar5;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
    }
    pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
    if ((*pFVar1 != (FScriptContainerElement)0x0) || (pFVar1[1] != (FScriptContainerElement)0x0)) {
      EVar2 = (param_1->Settings).PrimaryAxis;
      local_6b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_6a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_6c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_6c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_6b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_6a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (EVar2 == X) {
        local_6c8 = (double)(param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_6b0 = (double)(param_1->Settings).MaximumValue.FloatStorage.Float00;
      }
      else if (EVar2 == Y) {
        dStack_6c0 = (double)(param_1->Settings).MinimumValue.FloatStorage.Float00;
        dStack_6a8 = (double)(param_1->Settings).MaximumValue.FloatStorage.Float00;
      }
      else if (EVar2 == Z) {
        local_6b8 = (double)(param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_6a0 = (double)(param_1->Settings).MaximumValue.FloatStorage.Float00;
      }
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6c8) &&
         ((FScriptContainerElement *)&local_6c8 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)local_1d8.Positions.ArrayNum;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_6c8;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      lVar17 = (longlong)local_1d8.Positions.ArrayNum;
      local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18) = local_6c8;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dStack_6c0;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = local_6b8;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6b0) &&
         ((FScriptContainerElement *)&local_6b0 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)local_1d8.Positions.ArrayNum;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_6b0;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_6b0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_6a8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_6a0;
      local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
    }
    goto LAB_14a233fa7;
  case Integer:
    iVar5 = (param_1->Settings).LimitEnabled.ArrayNum;
    if (iVar5 < 1) {
      local_718 = (FScriptContainerElement *)0x0;
      local_710 = (FScriptContainerElement *)(longlong)iVar5;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        uVar15 = (*pcVar7)();
        return (bool)uVar15;
      }
    }
    pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
    if ((*pFVar1 != (FScriptContainerElement)0x0) || (pFVar1[1] != (FScriptContainerElement)0x0)) {
      EVar2 = (param_1->Settings).PrimaryAxis;
      local_688 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_670 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_698 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_690 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_680 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_678 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (EVar2 == X) {
        local_698 = (double)(int)(param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_680 = (double)(int)(param_1->Settings).MaximumValue.FloatStorage.Float00;
      }
      else if (EVar2 == Y) {
        dStack_690 = (double)(int)(param_1->Settings).MinimumValue.FloatStorage.Float00;
        dStack_678 = (double)(int)(param_1->Settings).MaximumValue.FloatStorage.Float00;
      }
      else if (EVar2 == Z) {
        local_688 = (double)(int)(param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_670 = (double)(int)(param_1->Settings).MaximumValue.FloatStorage.Float00;
      }
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_698) &&
         ((FScriptContainerElement *)&local_698 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)local_1d8.Positions.ArrayNum;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_698;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      lVar17 = (longlong)local_1d8.Positions.ArrayNum;
      local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18) = local_698;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dStack_690;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = local_688;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_680) &&
         ((FScriptContainerElement *)&local_680 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)local_1d8.Positions.ArrayNum;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_680;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      lVar17 = (longlong)local_1d8.Positions.ArrayNum * 3;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_680;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_678;
      uVar20 = SUB84(local_670,0);
      uVar21 = (undefined4)((ulonglong)local_670 >> 0x20);
      local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
LAB_14a233fa1:
      *(ulonglong *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 8 + 0x10) =
           CONCAT44(uVar21,uVar20);
    }
LAB_14a233fa7:
    if (0 < local_1d8.Positions.ArrayNum) {
      FRigVMDrawInterface::DrawInstruction
                ((FRigVMDrawInterface *)(*(longlong *)this + 0x170),&local_1d8);
    }
    break;
  case Vector2D:
    if (1 < (param_1->Settings).LimitEnabled.ArrayNum) {
      pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
      if ((*pFVar1 == (FScriptContainerElement)0x0) && (pFVar1[1] == (FScriptContainerElement)0x0))
      {
        iVar5 = (param_1->Settings).LimitEnabled.ArrayNum;
        if (iVar5 < 2) {
          local_718 = (FScriptContainerElement *)&DAT_00000001;
          local_710 = (FScriptContainerElement *)(longlong)iVar5;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
        if ((pFVar1[2] == (FScriptContainerElement)0x0) &&
           (pFVar1[3] == (FScriptContainerElement)0x0)) goto LAB_14a233fa7;
      }
      local_6e8._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float00;
      local_6e8._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float01;
      local_6e0 = (param_1->Settings).MinimumValue.FloatStorage.Float02;
      EVar2 = (param_1->Settings).PrimaryAxis;
      local_6d8._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float00;
      local_6d8._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float01;
      local_6d0 = (param_1->Settings).MaximumValue.FloatStorage.Float02;
      local_1d8.PrimitiveType.Value = '\x02';
      if (EVar2 == X) {
        local_578 = 0.0;
        dVar11 = (double)(float)local_6e8;
        dVar10 = (double)local_6e8._4_4_;
        dStack_570 = dVar11;
        local_568 = dVar10;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_578) &&
           ((FScriptContainerElement *)&local_578 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)local_1d8.Positions.ArrayNum;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_578;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        lVar17 = (longlong)local_1d8.Positions.ArrayNum;
        local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
        local_560 = 0.0;
        dVar12 = (double)(float)local_6d8;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18) = local_578;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dStack_570;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = local_568;
        dStack_558 = dVar12;
        local_550 = dVar10;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_560) &&
           ((FScriptContainerElement *)&local_560 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)local_1d8.Positions.ArrayNum;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_560;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        local_548 = 0.0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_560;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_558;
        dVar13 = (double)local_6d8._4_4_;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_550;
        dStack_540 = dVar12;
        local_538 = dVar13;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_548) &&
           ((FScriptContainerElement *)&local_548 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_548;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        local_530 = 0.0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_548;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_540;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_538;
        dStack_528 = dVar11;
        local_520 = dVar13;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_530) &&
           ((FScriptContainerElement *)&local_530 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_530;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        local_518 = 0.0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_530;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_528;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_520;
        dStack_510 = dVar11;
        local_508 = dVar10;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_518) &&
           ((FScriptContainerElement *)&local_518 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_518;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        lVar17 = (longlong)local_1d8.Positions.ArrayNum * 3;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_518;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_510;
        uVar20 = SUB84(local_508,0);
        uVar21 = (undefined4)((ulonglong)local_508 >> 0x20);
        local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      }
      else if (EVar2 == Y) {
        dStack_5e8 = 0.0;
        dVar11 = (double)(float)local_6e8;
        dVar10 = (double)local_6e8._4_4_;
        local_5f0 = dVar11;
        local_5e0 = dVar10;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5f0) &&
           ((FScriptContainerElement *)&local_5f0 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)local_1d8.Positions.ArrayNum;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_5f0;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        lVar17 = (longlong)local_1d8.Positions.ArrayNum;
        local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
        dStack_5d0 = 0.0;
        dVar12 = (double)(float)local_6d8;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18) = local_5f0;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dStack_5e8;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = local_5e0;
        local_5d8 = dVar12;
        local_5c8 = dVar10;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5d8) &&
           ((FScriptContainerElement *)&local_5d8 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)local_1d8.Positions.ArrayNum;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_5d8;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        dStack_5b8 = 0.0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_5d8;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_5d0;
        dVar13 = (double)local_6d8._4_4_;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_5c8;
        local_5c0 = dVar12;
        local_5b0 = dVar13;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5c0) &&
           ((FScriptContainerElement *)&local_5c0 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_5c0;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        dStack_5a0 = 0.0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_5c0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_5b8;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_5b0;
        local_5a8 = dVar11;
        local_598 = dVar13;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_5a8) &&
           ((FScriptContainerElement *)&local_5a8 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_5a8;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        dStack_588 = 0.0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_5a8;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_5a0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_598;
        local_590 = dVar11;
        local_580 = dVar10;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_590) &&
           ((FScriptContainerElement *)&local_590 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_590;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        lVar17 = (longlong)local_1d8.Positions.ArrayNum * 3;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_590;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_588;
        uVar20 = SUB84(local_580,0);
        uVar21 = (undefined4)((ulonglong)local_580 >> 0x20);
        local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      }
      else {
        if (EVar2 != Z) goto LAB_14a233fa7;
        local_658 = 0;
        dVar11 = (double)(float)local_6e8;
        dVar10 = (double)local_6e8._4_4_;
        local_668 = dVar11;
        dStack_660 = dVar10;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_668) &&
           ((FScriptContainerElement *)&local_668 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)local_1d8.Positions.ArrayNum;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_668;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        lVar17 = (longlong)local_1d8.Positions.ArrayNum;
        local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
        dVar12 = (double)(float)local_6d8;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18) = local_668;
        *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dStack_660;
        *(undefined8 *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) =
             local_658;
        local_640 = 0;
        local_650 = dVar12;
        dStack_648 = dVar10;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_650) &&
           ((FScriptContainerElement *)&local_650 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)local_1d8.Positions.ArrayNum;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_650;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        local_628 = 0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_650;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_648;
        dVar13 = (double)local_6d8._4_4_;
        *(undefined8 *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_640;
        local_638 = dVar12;
        dStack_630 = dVar13;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_638) &&
           ((FScriptContainerElement *)&local_638 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_718 = (FScriptContainerElement *)&local_638;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        local_610 = 0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_638;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_630;
        *(undefined8 *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_628;
        local_620 = dVar11;
        dStack_618 = dVar13;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_620) &&
           ((FScriptContainerElement *)&local_620 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_620;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        iVar5 = local_1d8.Positions.ArrayNum + 1;
        local_5f8 = 0;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_620;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_618;
        *(undefined8 *)
         (local_1d8.Positions.AllocatorInstance.Data +
         (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_610;
        local_608 = dVar11;
        dStack_600 = dVar10;
        local_1d8.Positions.ArrayNum = iVar5;
        if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_608) &&
           ((FScriptContainerElement *)&local_608 <
            local_1d8.Positions.AllocatorInstance.Data +
            (longlong)local_1d8.Positions.ArrayMax * 0x18)) {
          local_700 = (longlong)iVar5;
          local_6f8 = 0x18;
          local_718 = (FScriptContainerElement *)&local_608;
          local_710 = local_1d8.Positions.AllocatorInstance.Data;
          local_708 = (longlong)local_1d8.Positions.ArrayMax;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
          local_1d8.Positions.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax
                         );
        }
        lVar17 = (longlong)local_1d8.Positions.ArrayNum * 3;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         ) = local_608;
        *(double *)
         (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18
         + 8) = dStack_600;
        uVar20 = (undefined4)local_5f8;
        uVar21 = (undefined4)((ulonglong)local_5f8 >> 0x20);
        local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      }
      goto LAB_14a233fa1;
    }
    break;
  case Position:
  case Scale:
  case Transform:
  case TransformNoScale:
  case EulerTransform:
    local_6d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_6e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_6d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_6e0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (2 < (param_1->Settings).LimitEnabled.ArrayNum) {
      pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
      if ((*pFVar1 == (FScriptContainerElement)0x0) && (pFVar1[1] == (FScriptContainerElement)0x0))
      {
        iVar5 = (param_1->Settings).LimitEnabled.ArrayNum;
        if (iVar5 < 2) {
          local_718 = (FScriptContainerElement *)&DAT_00000001;
          local_710 = (FScriptContainerElement *)(longlong)iVar5;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar7 = (code *)swi(3);
            uVar15 = (*pcVar7)();
            return (bool)uVar15;
          }
        }
        pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
        if ((pFVar1[2] == (FScriptContainerElement)0x0) &&
           (pFVar1[3] == (FScriptContainerElement)0x0)) {
          iVar5 = (param_1->Settings).LimitEnabled.ArrayNum;
          if (iVar5 < 3) {
            local_718 = (FScriptContainerElement *)&DAT_00000002;
            local_710 = (FScriptContainerElement *)(longlong)iVar5;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              uVar15 = (*pcVar7)();
              return (bool)uVar15;
            }
          }
          pFVar1 = (param_1->Settings).LimitEnabled.AllocatorInstance.Data;
          if ((pFVar1[4] == (FScriptContainerElement)0x0) &&
             (pFVar1[5] == (FScriptContainerElement)0x0)) goto LAB_14a233fa7;
        }
      }
      EVar3 = (param_1->Settings).ControlType;
      if ((EVar3 == Position) || (EVar3 == Scale)) {
        local_6d8._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_6d8._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float01;
        local_6e8._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float00;
        local_6e8._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float01;
        fVar24 = (param_1->Settings).MinimumValue.FloatStorage.Float02;
        fVar27 = (param_1->Settings).MaximumValue.FloatStorage.Float02;
        fVar23 = local_6d8._4_4_;
        fVar26 = local_6e8._4_4_;
LAB_14a232854:
        fVar22 = (float)local_6d8;
        fVar25 = (float)local_6e8;
      }
      else if (EVar3 == Transform) {
        fVar22 = (param_1->Settings).MinimumValue.FloatStorage.Float10;
        fVar23 = (param_1->Settings).MinimumValue.FloatStorage.Float11;
        fVar24 = (param_1->Settings).MinimumValue.FloatStorage.Float12;
        fStack_21c = (param_1->Settings).MinimumValue.FloatStorage.Float13;
        local_238._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_238._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float01;
        uStack_230._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float02;
        uStack_230._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float03;
        local_218._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float20;
        local_218._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float21;
        uStack_210._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float22;
        uStack_210._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float23;
        local_208._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float00;
        local_208._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float01;
        uStack_200._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float02;
        uStack_200._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float03;
        local_1e8._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float20;
        local_1e8._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float21;
        uStack_1e0._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float22;
        uStack_1e0._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float23;
        fVar25 = (param_1->Settings).MaximumValue.FloatStorage.Float10;
        fVar26 = (param_1->Settings).MaximumValue.FloatStorage.Float11;
        fVar27 = (param_1->Settings).MaximumValue.FloatStorage.Float12;
        fStack_1ec = (param_1->Settings).MaximumValue.FloatStorage.Float13;
        local_228 = fVar22;
        fStack_224 = fVar23;
        fStack_220 = fVar24;
        local_1f8 = fVar25;
        fStack_1f4 = fVar26;
        fStack_1f0 = fVar27;
      }
      else if (EVar3 == TransformNoScale) {
        fVar22 = (param_1->Settings).MinimumValue.FloatStorage.Float10;
        fVar23 = (param_1->Settings).MinimumValue.FloatStorage.Float11;
        fVar24 = (param_1->Settings).MinimumValue.FloatStorage.Float12;
        fStack_25c = (param_1->Settings).MinimumValue.FloatStorage.Float13;
        local_278._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float00;
        local_278._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float01;
        uStack_270._0_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float02;
        uStack_270._4_4_ = (param_1->Settings).MinimumValue.FloatStorage.Float03;
        fVar25 = (param_1->Settings).MaximumValue.FloatStorage.Float10;
        fVar26 = (param_1->Settings).MaximumValue.FloatStorage.Float11;
        fVar27 = (param_1->Settings).MaximumValue.FloatStorage.Float12;
        fStack_23c = (param_1->Settings).MaximumValue.FloatStorage.Float13;
        local_258._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float00;
        local_258._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float01;
        uStack_250._0_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float02;
        uStack_250._4_4_ = (param_1->Settings).MaximumValue.FloatStorage.Float03;
        local_268 = fVar22;
        fStack_264 = fVar23;
        fStack_260 = fVar24;
        local_248 = fVar25;
        fStack_244 = fVar26;
        fStack_240 = fVar27;
      }
      else {
        if (EVar3 != EulerTransform) {
          fVar23 = local_6d8._4_4_;
          fVar24 = local_6d0;
          fVar26 = local_6e8._4_4_;
          fVar27 = local_6e0;
          goto LAB_14a232854;
        }
        fVar23 = (param_1->Settings).MinimumValue.FloatStorage.Float10;
        fVar24 = (param_1->Settings).MinimumValue.FloatStorage.Float11;
        fStack_2a8 = (param_1->Settings).MinimumValue.FloatStorage.Float12;
        fStack_2a4 = (param_1->Settings).MinimumValue.FloatStorage.Float13;
        local_2a0 = (param_1->Settings).MinimumValue.FloatStorage.Float20;
        fVar26 = (param_1->Settings).MaximumValue.FloatStorage.Float10;
        fVar27 = (param_1->Settings).MaximumValue.FloatStorage.Float11;
        fStack_284 = (param_1->Settings).MaximumValue.FloatStorage.Float12;
        fStack_280 = (param_1->Settings).MaximumValue.FloatStorage.Float13;
        local_2c0 = (param_1->Settings).MinimumValue.FloatStorage.Float00;
        fStack_2bc = (param_1->Settings).MinimumValue.FloatStorage.Float01;
        fStack_2b8 = (param_1->Settings).MinimumValue.FloatStorage.Float02;
        fStack_2b4 = (param_1->Settings).MinimumValue.FloatStorage.Float03;
        local_27c = (param_1->Settings).MaximumValue.FloatStorage.Float20;
        local_29c = (param_1->Settings).MaximumValue.FloatStorage.Float00;
        fStack_298 = (param_1->Settings).MaximumValue.FloatStorage.Float01;
        fStack_294 = (param_1->Settings).MaximumValue.FloatStorage.Float02;
        fStack_290 = (param_1->Settings).MaximumValue.FloatStorage.Float03;
        fVar22 = fStack_2b4;
        fVar25 = fStack_290;
        local_2b0 = fVar23;
        fStack_2ac = fVar24;
        local_28c = fVar26;
        fStack_288 = fVar27;
      }
      dVar11 = (double)fVar22;
      dVar10 = (double)fVar23;
      dVar12 = (double)fVar24;
      local_500 = dVar11;
      dStack_4f8 = dVar10;
      local_4f0 = dVar12;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_500) &&
         ((FScriptContainerElement *)&local_500 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)local_1d8.Positions.ArrayNum;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_500;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      lVar17 = (longlong)local_1d8.Positions.ArrayNum;
      dVar13 = (double)fVar25;
      local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18) = local_500;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 8) = dStack_4f8;
      *(double *)(local_1d8.Positions.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = local_4f0;
      local_4e8 = dVar13;
      dStack_4e0 = dVar10;
      local_4d8 = dVar12;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e8) &&
         ((FScriptContainerElement *)&local_4e8 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)local_1d8.Positions.ArrayNum;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_4e8;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      dVar9 = (double)fVar26;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_4e8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_4e0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_4d8;
      local_4d0 = dVar11;
      dStack_4c8 = dVar9;
      local_4c0 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4d0) &&
         ((FScriptContainerElement *)&local_4d0 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_4d0;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_4d0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_4c8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_4c0;
      local_4b8 = dVar13;
      dStack_4b0 = dVar9;
      local_4a8 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4b8) &&
         ((FScriptContainerElement *)&local_4b8 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_4b8;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      dVar8 = (double)fVar27;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_4b8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_4b0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_4a8;
      local_4a0 = dVar11;
      dStack_498 = dVar10;
      local_490 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4a0) &&
         ((FScriptContainerElement *)&local_4a0 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_4a0;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_4a0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_498;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_490;
      local_488 = dVar13;
      dStack_480 = dVar10;
      local_478 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_488) &&
         ((FScriptContainerElement *)&local_488 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_488;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_488;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_480;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_478;
      local_470 = dVar11;
      dStack_468 = dVar9;
      local_460 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_470) &&
         ((FScriptContainerElement *)&local_470 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_470;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_470;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_468;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_460;
      local_458 = dVar13;
      dStack_450 = dVar9;
      local_448 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_458) &&
         ((FScriptContainerElement *)&local_458 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_458;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_458;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_450;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_448;
      local_440 = dVar11;
      dStack_438 = dVar10;
      local_430 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_440) &&
         ((FScriptContainerElement *)&local_440 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_440;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_440;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_438;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_430;
      local_428 = dVar11;
      dStack_420 = dVar9;
      local_418 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_428) &&
         ((FScriptContainerElement *)&local_428 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_428;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_428;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_420;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_418;
      local_410 = dVar13;
      dStack_408 = dVar10;
      local_400 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_410) &&
         ((FScriptContainerElement *)&local_410 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_410;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_410;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_408;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_400;
      local_3f8 = dVar13;
      dStack_3f0 = dVar9;
      local_3e8 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3f8) &&
         ((FScriptContainerElement *)&local_3f8 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_3f8;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_3f8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_3f0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_3e8;
      local_3e0 = dVar11;
      dStack_3d8 = dVar10;
      local_3d0 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3e0) &&
         ((FScriptContainerElement *)&local_3e0 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_3e0;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_3e0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_3d8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_3d0;
      local_3c8 = dVar11;
      dStack_3c0 = dVar9;
      local_3b8 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c8) &&
         ((FScriptContainerElement *)&local_3c8 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_3c8;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_3c8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_3c0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_3b8;
      local_3b0 = dVar13;
      dStack_3a8 = dVar10;
      local_3a0 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3b0) &&
         ((FScriptContainerElement *)&local_3b0 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_3b0;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_3b0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_3a8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_3a0;
      local_398 = dVar13;
      dStack_390 = dVar9;
      local_388 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_398) &&
         ((FScriptContainerElement *)&local_398 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_398;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_398;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_390;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_388;
      local_380 = dVar11;
      dStack_378 = dVar10;
      local_370 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_380) &&
         ((FScriptContainerElement *)&local_380 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_380;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_380;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_378;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_370;
      local_368 = dVar11;
      dStack_360 = dVar10;
      local_358 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_368) &&
         ((FScriptContainerElement *)&local_368 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_368;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_368;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_360;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_358;
      local_350 = dVar13;
      dStack_348 = dVar10;
      local_340 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_350) &&
         ((FScriptContainerElement *)&local_350 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_350;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_350;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_348;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_340;
      local_338 = dVar13;
      dStack_330 = dVar10;
      local_328 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_338) &&
         ((FScriptContainerElement *)&local_338 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_338;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_338;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_330;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_328;
      local_320 = dVar11;
      dStack_318 = dVar9;
      local_310 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_320) &&
         ((FScriptContainerElement *)&local_320 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_320;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_320;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_318;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_310;
      local_308 = dVar11;
      dStack_300 = dVar9;
      local_2f8 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_308) &&
         ((FScriptContainerElement *)&local_308 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_308;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_308;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_300;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_2f8;
      local_2f0 = dVar13;
      dStack_2e8 = dVar9;
      local_2e0 = dVar12;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2f0) &&
         ((FScriptContainerElement *)&local_2f0 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_2f0;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      iVar5 = local_1d8.Positions.ArrayNum + 1;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_2f0;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_2e8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data +
       (longlong)local_1d8.Positions.ArrayNum * 0x18 + 0x10) = local_2e0;
      local_2d8 = dVar13;
      dStack_2d0 = dVar9;
      local_2c8 = dVar8;
      local_1d8.Positions.ArrayNum = iVar5;
      if ((local_1d8.Positions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2d8) &&
         ((FScriptContainerElement *)&local_2d8 <
          local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayMax * 0x18
         )) {
        local_700 = (longlong)iVar5;
        local_6f8 = 0x18;
        local_718 = (FScriptContainerElement *)&local_2d8;
        local_710 = local_1d8.Positions.AllocatorInstance.Data;
        local_708 = (longlong)local_1d8.Positions.ArrayMax;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          uVar15 = (*pcVar7)();
          return (bool)uVar15;
        }
      }
      if (local_1d8.Positions.ArrayNum == local_1d8.Positions.ArrayMax) {
        local_1d8.Positions.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_1d8.Positions.AllocatorInstance,&local_1d8.Positions.ArrayMax);
      }
      lVar17 = (longlong)local_1d8.Positions.ArrayNum * 3;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18)
           = local_2d8;
      *(double *)
       (local_1d8.Positions.AllocatorInstance.Data + (longlong)local_1d8.Positions.ArrayNum * 0x18 +
       8) = dStack_2d0;
      uVar20 = SUB84(local_2c8,0);
      uVar21 = (undefined4)((ulonglong)local_2c8 >> 0x20);
      local_1d8.Positions.ArrayNum = local_1d8.Positions.ArrayNum + 1;
      goto LAB_14a233fa1;
    }
    break;
  case Rotator:
    break;
  default:
    goto switchD_14a23115e_default;
  }
switchD_14a23115e_default:
  if (local_1d8.MeshIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.MeshIndices.AllocatorInstance.Data);
  }
  if (local_1d8.MeshVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.MeshVerts.AllocatorInstance.Data);
  }
  if (local_1d8.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Positions.AllocatorInstance.Data);
  }
  return true;
}

// AdaptEventQueueForEvaluate @ 14a236990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::AdaptEventQueueForEvaluate
          (UControlRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  FName *pFVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  longlong local_res8;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  FName local_90;
  undefined1 local_88 [8];
  FName local_80;
  longlong local_78;
  FName local_70;
  FName local_68;
  FName local_60 [7];
  
  if ((this->ReplayTimeIndex == -1) ||
     ((this->Replay).field0_0x0.DebugPtr == (UControlRigReplay *)0x0)) {
    iVar12 = param_1->ArrayNum;
    uVar14 = 0;
    if (0 < iVar12) {
      lVar15 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar14 < iVar12) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
        if (*(longlong *)(pFVar2 + lVar15) == local_res8) {
          pcVar4 = *(code **)(this->_padding_ + 0x308);
          FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
          cVar8 = (*pcVar4)(this,local_res18);
          if (cVar8 != '\0') {
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
            TArray<FName,TSizedDefaultAllocator<32>_>::Insert(param_1,&local_res20,uVar14);
          }
        }
        uVar11 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
        if (*(longlong *)(pFVar2 + lVar15) == local_a0) {
          pcVar4 = *(code **)(this->_padding_ + 0x308);
          FLazyName::Resolve(&FRigUnit_PreBeginExecution::EventName);
          cVar8 = (*pcVar4)(this,local_98);
          if (cVar8 != '\0') {
            FLazyName::Resolve(&FRigUnit_PreBeginExecution::EventName);
            TArray<FName,TSizedDefaultAllocator<32>_>::Insert(param_1,&local_90,uVar14);
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
          }
          pcVar4 = *(code **)(this->_padding_ + 0x308);
          FLazyName::Resolve(&FRigUnit_PostBeginExecution::EventName);
          cVar8 = (*pcVar4)(this,local_88);
          if (cVar8 != '\0') {
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            FLazyName::Resolve(&FRigUnit_PostBeginExecution::EventName);
            TArray<FName,TSizedDefaultAllocator<32>_>::Insert(param_1,&local_80,uVar14);
          }
        }
        iVar12 = param_1->ArrayNum;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar14 < iVar12);
    }
    if (this->InteractionType != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FLazyName::Resolve(&FRigUnit_InteractionExecution::EventName);
        InteractionEvent = &_S1784;
        _Init_thread_footer(&::_TSS0);
      }
      cVar8 = (**(code **)(this->_padding_ + 0x308))(this,InteractionEvent);
      pFVar5 = InteractionEvent;
      if (cVar8 != '\0') {
        if (param_1->ArrayNum == 0) {
          pFVar3 = (FName *)(param_1->AllocatorInstance).Data;
          if (((pFVar3 <= InteractionEvent) && (InteractionEvent < pFVar3 + param_1->ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == param_1->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar12 + 1;
          *(FName *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = *pFVar5;
        }
        else {
          pFVar13 = (param_1->AllocatorInstance).Data;
          pFVar2 = pFVar13 + (longlong)param_1->ArrayNum * 8;
          for (; InteractionEvent = pFVar5, pFVar13 != pFVar2; pFVar13 = pFVar13 + 8) {
            FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
            if (*(longlong *)pFVar13 == local_78) goto LAB_14a236f23;
            pFVar5 = InteractionEvent;
          }
          pFVar3 = (FName *)(param_1->AllocatorInstance).Data;
          iVar12 = param_1->ArrayNum;
          if (((pFVar3 <= pFVar5) && (pFVar5 < pFVar3 + param_1->ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = param_1->ArrayNum;
          if (iVar9 == param_1->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          param_1->ArrayNum = iVar9 + 1;
          pFVar2 = pFVar2 + (longlong)iVar12 * 8 + -8;
          memmove(pFVar2 + 8,pFVar2,(longlong)((iVar9 - iVar12) + 1) << 3);
          *(FName *)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8 + -8) = *pFVar5;
        }
      }
LAB_14a236f23:
      if ((*(int *)&(this->PhysicsSimulations).field_0x8 !=
           *(int *)&(this->PhysicsSimulations).field_0x34) &&
         (this->bEvaluationTriggeredFromInteraction != false)) {
        FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
        TArray<FName,TSizedDefaultAllocator<32>_>::Remove(param_1,&local_70);
        FLazyName::Resolve(&FRigUnit_PreBeginExecution::EventName);
        TArray<FName,TSizedDefaultAllocator<32>_>::Remove(param_1,&local_68);
        FLazyName::Resolve(&FRigUnit_PostBeginExecution::EventName);
        TArray<FName,TSizedDefaultAllocator<32>_>::Remove(param_1,local_60);
      }
    }
  }
  else {
    iVar9 = FSampleTrackHost::GetNumTimes
                      ((FSampleTrackHost *)&((this->Replay).field0_0x0.DebugPtr)->InputTracks);
    iVar12 = this->ReplayTimeIndex;
    if ((iVar9 <= iVar12) || (iVar12 < 0)) {
      iVar12 = 0;
      this->ReplayTimeIndex = 0;
    }
    fVar16 = FSampleTrackHost::GetAbsoluteTime
                       ((FSampleTrackHost *)&((this->Replay).field0_0x0.DebugPtr)->InputTracks,
                        iVar12);
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar6 = __real_3e45798ee2308c3a;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_1->AllocatorInstance,0,piVar1);
      uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar6 = __real_3e45798ee2308c3a;
    }
    do {
      if (iVar9 <= iVar12) {
        return;
      }
      FControlRigReplayTracks::GetRigVMEvent
                (&((this->Replay).field0_0x0.DebugPtr)->InputTracks,(int)&local_a8);
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_a8;
      if (iVar12 == iVar9 + -1) {
        return;
      }
      iVar12 = iVar12 + 1;
      fVar17 = FSampleTrackHost::GetAbsoluteTime
                         ((FSampleTrackHost *)&((this->Replay).field0_0x0.DebugPtr)->InputTracks,
                          iVar12);
    } while ((double)CONCAT44((uint)((ulonglong)((double)fVar16 - (double)fVar17) >> 0x20) & uVar14,
                              SUB84((double)fVar16 - (double)fVar17,0) & uVar11) <= dVar6);
  }
  return;
}

// AllConnectorsAreResolved @ 14a23db80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRig::AllConnectorsAreResolved(UControlRig *this,FString *param_1,FRigElementKey *param_2)

{
  uint *puVar1;
  ERigElementType *pEVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  URigHierarchy *pUVar9;
  FRigModuleSettings *pFVar10;
  ForElementType<FRigElementKey> FVar11;
  longlong lVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  undefined1 *puVar15;
  ForElementType<FRigElementKey> this_00;
  ForElementType<FRigElementKey> FVar16;
  FRigModuleConnector *pFVar17;
  ERigElementType *pEVar18;
  undefined4 uVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  undefined1 local_137 [7];
  ForAnyElementType local_130;
  uint local_128;
  int local_124;
  FRigElementKey local_120;
  FString local_110;
  FString local_100;
  uint local_f0;
  UControlRig *local_e8;
  FName local_e0;
  FRigModuleConnector *local_d8;
  FRigElementKey *local_d0;
  FString local_c8;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_b8;
  TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_e8 = this;
  local_d0 = param_2;
  pUVar9 = (URigHierarchy *)(**(code **)(this->_padding_ + 0x10))();
  if (pUVar9 != (URigHierarchy *)0x0) {
    pFVar10 = GetRigModuleSettings(this);
    local_130.Data = (FScriptContainerElement *)0x0;
    uVar8 = (pFVar10->ExposedConnectors).ArrayNum;
    pFVar17 = (FRigModuleConnector *)(pFVar10->ExposedConnectors).AllocatorInstance.Data;
    local_128 = uVar8;
    if (uVar8 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar8,0,&local_130,uVar8,&local_124);
      ConstructItems<FRigModuleConnector,FRigModuleConnector,int>(local_130.Data,pFVar17,uVar8);
    }
    uVar13 = (ulonglong)(int)local_128;
    local_98.Pairs.Elements._0_8_ = 0;
    pFVar17 = (FRigModuleConnector *)(local_130.Data + uVar13 * 0x38);
    local_98.Pairs.Elements._8_8_ = 0;
    local_98.Pairs.Elements._32_8_ = 0;
    local_98.Pairs.Elements._40_4_ = 0;
    local_98.Pairs.Elements._44_4_ = 0x80;
    local_98.Pairs.Elements._48_4_ = 0xffffffff;
    local_98.Pairs.Elements._52_4_ = 0;
    local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.Pairs.HashSize = 0;
    local_f0 = local_128;
    FVar20.Data = local_130.Data;
    local_d8 = pFVar17;
    while( true ) {
      if (local_128 != (uint)uVar13) {
        local_138 = 0;
        `TCheckedPointerIterator<FRigModuleConnector_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_138);
      }
      if ((FRigModuleConnector *)FVar20.Data == pFVar17) break;
      if ((((FRigModuleConnector *)FVar20.Data)->Settings).bOptional == false) {
        local_b8.AllocatorInstance.SecondaryData = (ForElementType<FRigElementKey>)0x0;
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 1;
        if ((((FRigModuleConnector *)FVar20.Data)->Name).Data.ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)
                    (((FRigModuleConnector *)FVar20.Data)->Name).Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_e0,pwVar14);
        local_120.Name.ComparisonIndex.Value = local_e0.ComparisonIndex.Value;
        local_120.Name.Number = local_e0.Number;
        local_120.Type = 0x40;
        uVar8 = ::GetTypeHash(local_e0.ComparisonIndex);
        if (*(int *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x8 ==
            *(int *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x34) {
LAB_14a23dfe1:
          if (param_1 != (FString *)0x0) {
            ::FString::PrintfImpl(&local_100,L"Connector \'%s\' is not resolved.");
            if (param_1 != &local_100) {
              pFVar4 = (param_1->Data).AllocatorInstance.Data;
              if (pFVar4 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar4);
              }
              (param_1->Data).AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
              (param_1->Data).ArrayNum = local_100.Data.ArrayNum;
              (param_1->Data).ArrayMax = local_100.Data.ArrayMax;
              local_100.Data.ArrayNum = 0;
              local_100.Data.ArrayMax = 0;
              local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
          }
joined_r0x00014a23dfcf:
          if (local_d0 != (FRigElementKey *)0x0) {
            local_d0->Type = (char)local_120._0_4_;
            *(int3 *)&local_d0->field_0x1 = (int3)((uint)local_120._0_4_ >> 8);
            (local_d0->Name).ComparisonIndex = (FNameEntryId)local_120.Name.ComparisonIndex.Value;
            (local_d0->Name).Number = local_120.Name.Number;
          }
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
            FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          }
          local_98.Pairs.HashSize = 0;
          if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_98);
          DestructItems<FRigModuleConnector,int>((FRigModuleConnector *)local_130.Data,local_128);
          if ((FRigModuleConnector *)local_130.Data != (FRigModuleConnector *)0x0) {
            FMemory::Free(local_130.Data);
          }
          return false;
        }
        puVar3 = *(undefined1 **)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x40;
        puVar15 = &(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar15 = puVar3;
        }
        uVar19 = *(undefined4 *)
                  (puVar15 +
                  (ulonglong)
                  (*(int *)&(this->ElementKeyRedirector).InternalKeyToExternalKey.field_0x48 - 1U &
                  (uVar8 + local_e0.Number) * 10 + (local_120._0_4_ & 0xff)) * 4);
        if (uVar19 == 0xffffffff) goto LAB_14a23dfe1;
        lVar12 = *(longlong *)&(this->ElementKeyRedirector).InternalKeyToExternalKey;
        while ((pEVar2 = (ERigElementType *)(lVar12 + (longlong)(int)uVar19 * 0x48),
               *(longlong *)(lVar12 + 4 + (longlong)(int)uVar19 * 0x48) !=
               CONCAT44(local_120.Name.Number,local_120.Name.ComparisonIndex.Value) ||
               (*pEVar2 != local_120.Type))) {
          uVar19 = *(undefined4 *)(pEVar2 + 0x40);
          if (uVar19 == 0xffffffff) goto LAB_14a23dfe1;
        }
        if (uVar19 == 0xffffffff) goto LAB_14a23dfe1;
        this_00 = (ForElementType<FRigElementKey>)((longlong)pEVar2 + 0x10);
        if (pEVar2 == (ERigElementType *)0x0) {
          this_00 = (ForElementType<FRigElementKey>)0x0;
        }
        if (this_00 == (ForElementType<FRigElementKey>)0x0) goto LAB_14a23dfe1;
        FVar16 = *(ForElementType<FRigElementKey> *)
                  &((FCachedRigElement *)((longlong)this_00 + 0x20))->Key;
        pEVar18 = pEVar2 + 0x38;
        if (FVar16 != (ForElementType<FRigElementKey>)0x0) {
          this_00 = FVar16;
        }
        if (pEVar2 == (ERigElementType *)0x0) {
          pEVar18 = &DAT_00000028;
        }
        uVar19 = *(undefined4 *)pEVar18;
        FVar16 = (ForElementType<FRigElementKey>)((longlong)(int)uVar19 * 0x20 + (longlong)this_00);
        while( true ) {
          if (*(undefined4 *)pEVar18 != uVar19) {
            local_137[0] = 0;
            `TCheckedPointerIterator<FCachedRigElement_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_137);
          }
          if (this_00 == FVar16) break;
          bVar6 = FCachedRigElement::UpdateCache((FCachedRigElement *)this_00,pUVar9);
          if (!bVar6) {
            if (param_1 != (FString *)0x0) {
              FRigElementKey::ToString((FRigElementKey *)this_00,&local_c8);
              GetRigModulePrefix(local_e8);
              ::FString::PrintfImpl(&local_110,L"Connector \'%s%s\' has invalid target \'%s\'.");
              if (param_1 != &local_110) {
                pFVar4 = (param_1->Data).AllocatorInstance.Data;
                if (pFVar4 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar4);
                }
                (param_1->Data).AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
                (param_1->Data).ArrayNum = local_110.Data.ArrayNum;
                (param_1->Data).ArrayMax = local_110.Data.ArrayMax;
                local_110.Data.ArrayNum = 0;
                local_110.Data.ArrayMax = 0;
                local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
            }
            goto joined_r0x00014a23dfcf;
          }
          FVar11 = (ForElementType<FRigElementKey>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
            FVar11 = local_b8.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar11 <= (ulonglong)this_00) {
            FVar11 = (ForElementType<FRigElementKey>)&local_b8;
            if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
              FVar11 = local_b8.AllocatorInstance.SecondaryData;
            }
            if (((ulonglong)this_00 <
                 (ulonglong)((longlong)FVar11 + (longlong)local_b8.ArrayMax * 0xc)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          if (local_b8.ArrayNum == local_b8.ArrayMax) {
            local_b8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                           (0x40c,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
          }
          FVar11 = (ForElementType<FRigElementKey>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
            FVar11 = local_b8.AllocatorInstance.SecondaryData;
          }
          lVar12 = (longlong)local_b8.ArrayNum;
          local_b8.ArrayNum = local_b8.ArrayNum + 1;
          *(undefined8 *)((longlong)FVar11 + lVar12 * 0xc) = *(undefined8 *)this_00;
          puVar1 = (uint *)((longlong)this_00 + 8);
          this_00 = (ForElementType<FRigElementKey>)((longlong)this_00 + 0x20);
          ((uint *)((longlong)FVar11 + 8))[lVar12 * 3] = *puVar1;
        }
        TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
        ::
        Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
                  (&local_98,&local_120,&local_b8);
        this = local_e8;
        pFVar17 = local_d8;
        if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
          FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
          this = local_e8;
          pFVar17 = local_d8;
        }
      }
      uVar13 = (ulonglong)local_f0;
      FVar20.Data = FVar20.Data + 0x38;
    }
    local_98.Pairs.HashSize = 0;
    if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_98);
    DestructItems<FRigModuleConnector,int>((FRigModuleConnector *)local_130.Data,local_128);
    if ((FRigModuleConnector *)local_130.Data != (FRigModuleConnector *)0x0) {
      FMemory::Free(local_130.Data);
    }
  }
  return true;
}

// ApplyElementOverrides @ 14a23ed80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::ApplyElementOverrides(UControlRig *this)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TConsoleVariableData<bool> *pTVar13;
  FControlRigOverrideValue *pFVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  FRigControlElement *pFVar19;
  UScriptStruct *pUVar20;
  FName *pFVar21;
  FProperty *pFVar22;
  FFieldClass *pFVar23;
  FField *pFVar24;
  UObject *pUVar25;
  FProperty *pFVar26;
  UScriptStruct *pUVar27;
  uchar *puVar28;
  TTransform<double> *pTVar29;
  ulonglong uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  FControlRigOverrideValue *this_00;
  FScriptContainerElement *pFVar33;
  FWeakObjectPtr *pFVar34;
  URigHierarchy *this_01;
  undefined1 auStack_248 [32];
  undefined1 local_218;
  undefined1 local_217 [7];
  FRigControlElement *local_210;
  uint local_208;
  uint local_204;
  URigHierarchy *local_200;
  FScriptContainerElement *local_1f8;
  FRigControlElement *local_1f0;
  longlong local_1e8;
  FControlRigOverrideValue *local_1e0;
  UControlRig *local_1d8;
  FScriptContainerElement *local_1d0;
  FRigElementKey local_1c8;
  FName local_1b8 [2];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TSet<FRigControlElement_*,DefaultKeyFuncs<FRigControlElement_*,0>,FDefaultSetAllocator> local_e8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  pTVar13 = CVarControlRigEnableOverrides.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_1d8 = this;
  bVar15 = IsInParallelGameThread();
  if ((bVar15) || (bVar15 = IsInGameThread(), bVar15)) {
    lVar18 = 0;
  }
  else {
    lVar18 = 1;
  }
  if ((pTVar13->ShadowedValue[lVar18] != false) &&
     (this_01 = (this->DynamicHierarchy).field0_0x0.DebugPtr, this_01 != (URigHierarchy *)0x0)) {
    local_204 = (this->OverrideAssets).ArrayNum;
    uVar30 = (ulonglong)(int)local_204;
    pFVar33 = (this->OverrideAssets).AllocatorInstance.Data;
    pFVar32 = pFVar33 + uVar30 * 8;
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    local_200 = this_01;
    local_1d0 = pFVar32;
    while( true ) {
      local_1f8 = pFVar33;
      if ((this->OverrideAssets).ArrayNum != (int)uVar30) {
        local_218 = 0;
        `TCheckedPointerIterator<TObjectPtr<UControlRigOverrideAsset>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_218);
      }
      if (pFVar33 == pFVar32) break;
      local_1e8 = *(longlong *)pFVar33;
      if (local_1e8 != 0) {
        local_208 = *(uint *)(local_1e8 + 0x30);
        uVar30 = (ulonglong)(int)local_208;
        this_00 = *(FControlRigOverrideValue **)(local_1e8 + 0x28);
        local_1e0 = this_00 + uVar30;
        while( true ) {
          pFVar14 = local_1e0;
          if (*(int *)(local_1e8 + 0x30) != (int)uVar30) {
            local_217[0] = 0;
            `TCheckedPointerIterator<FControlRigOverrideValue_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_217);
          }
          pFVar32 = local_1d0;
          this = local_1d8;
          pFVar33 = local_1f8;
          if (this_00 == pFVar14) break;
          local_1c8.Type = Control;
          pFVar21 = &InvalidName;
          if ((this_00->SubjectKey).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
            pFVar21 = (FName *)&this_00->SubjectKey;
          }
          local_1c8.Name = *pFVar21;
          iVar16 = URigHierarchy::GetIndex(this_01,&local_1c8,true);
          pFVar19 = (FRigControlElement *)URigHierarchy::Get(this_01,iVar16);
          if (pFVar19 == (FRigControlElement *)0x0) {
LAB_14a23f291:
            local_210 = (FRigControlElement *)0x0;
LAB_14a23f29a:
            this_00 = this_00 + 1;
            uVar30 = (ulonglong)local_208;
          }
          else {
            lVar18 = (**(code **)(*(longlong *)pFVar19 + 0x10))(pFVar19);
            pUVar20 = FRigControlElement::StaticStruct();
            if (pUVar20 == (UScriptStruct *)0x0) goto LAB_14a23f291;
            iVar16 = (int)pUVar20->_padding_;
            if ((*(int *)(lVar18 + 0x38) < iVar16) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar16 * 8) !=
                &pUVar20->_padding_)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            if (!bVar15) goto LAB_14a23f291;
            local_210 = pFVar19;
            pUVar20 = FRigControlSettings::StaticStruct();
            pFVar21 = ::FName::FName(local_1b8,0xe,L"ShapeTransform",FNAME_Add);
            pFVar22 = UStruct::FindPropertyByName((UStruct *)pUVar20,*pFVar21);
            iVar16 = (this_00->Properties).ArrayNum;
            uVar31 = 0;
            if (0 < iVar16) {
              lVar18 = 0;
              do {
                uVar17 = 0;
                if ((int)uVar31 < iVar16) {
                  uVar17 = ~uVar31 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pFVar34 = (FWeakObjectPtr *)
                          ((this_00->Properties).AllocatorInstance.Data +
                          (longlong)(int)uVar31 * 0x30);
                bVar15 = FWeakObjectPtr::IsValid(pFVar34);
                if (bVar15) {
                  pFVar23 = FProperty::StaticClass();
                  pFVar24 = FFieldPath::GetTyped((FFieldPath *)(pFVar34 + 1),pFVar23,(UStruct *)0x0)
                  ;
                  if (pFVar24 != (FField *)0x0) {
                    uVar17 = 0;
                    if ((int)uVar31 < (this_00->Properties).ArrayNum) {
                      uVar17 = ~uVar31 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    pFVar34 = (FWeakObjectPtr *)
                              ((this_00->Properties).AllocatorInstance.Data + lVar18);
                    pUVar25 = FWeakObjectPtr::Get(pFVar34);
                    if (pUVar25 == (UObject *)0x0) {
                      ((FFieldPath *)(pFVar34 + 1))->ResolvedField = (FField *)0x0;
                      pFVar26 = (FProperty *)0x0;
                    }
                    else {
                      pFVar23 = FProperty::StaticClass();
                      pFVar26 = (FProperty *)
                                FFieldPath::GetTyped
                                          ((FFieldPath *)(pFVar34 + 1),pFVar23,(UStruct *)0x0);
                    }
                    this_01 = local_200;
                    pFVar19 = local_210;
                    if (pFVar26 == pFVar22) {
                      bVar15 = true;
                      pTVar29 = URigHierarchy::GetControlShapeTransform
                                          (local_200,&local_98,local_210,InitialLocal);
                      dVar2 = (pTVar29->Rotation).XY.m128d_f64[1];
                      dVar3 = (pTVar29->Rotation).ZW.m128d_f64[0];
                      dVar4 = (pTVar29->Rotation).ZW.m128d_f64[1];
                      dVar5 = (pTVar29->Translation).XY.m128d_f64[0];
                      dVar6 = (pTVar29->Translation).XY.m128d_f64[1];
                      dVar7 = (pTVar29->Translation).ZW.m128d_f64[0];
                      dVar8 = (pTVar29->Translation).ZW.m128d_f64[1];
                      dVar9 = (pTVar29->Scale3D).XY.m128d_f64[0];
                      dVar10 = (pTVar29->Scale3D).XY.m128d_f64[1];
                      dVar11 = (pTVar29->Scale3D).ZW.m128d_f64[0];
                      dVar12 = (pTVar29->Scale3D).ZW.m128d_f64[1];
                      (pFVar19->Settings).ShapeTransform.Rotation.XY.m128d_f64[0] =
                           (pTVar29->Rotation).XY.m128d_f64[0];
                      (pFVar19->Settings).ShapeTransform.Rotation.XY.m128d_f64[1] = dVar2;
                      (pFVar19->Settings).ShapeTransform.Rotation.ZW.m128d_f64[0] = dVar3;
                      (pFVar19->Settings).ShapeTransform.Rotation.ZW.m128d_f64[1] = dVar4;
                      (pFVar19->Settings).ShapeTransform.Translation.XY.m128d_f64[0] = dVar5;
                      (pFVar19->Settings).ShapeTransform.Translation.XY.m128d_f64[1] = dVar6;
                      (pFVar19->Settings).ShapeTransform.Translation.ZW.m128d_f64[0] = dVar7;
                      (pFVar19->Settings).ShapeTransform.Translation.ZW.m128d_f64[1] = dVar8;
                      (pFVar19->Settings).ShapeTransform.Scale3D.XY.m128d_f64[0] = dVar9;
                      (pFVar19->Settings).ShapeTransform.Scale3D.XY.m128d_f64[1] = dVar10;
                      (pFVar19->Settings).ShapeTransform.Scale3D.ZW.m128d_f64[0] = dVar11;
                      (pFVar19->Settings).ShapeTransform.Scale3D.ZW.m128d_f64[1] = dVar12;
                      goto LAB_14a23f0da;
                    }
                  }
                }
                iVar16 = (this_00->Properties).ArrayNum;
                uVar31 = uVar31 + 1;
                lVar18 = lVar18 + 0x30;
                pFVar19 = local_210;
                this_01 = local_200;
              } while ((int)uVar31 < iVar16);
            }
            bVar15 = false;
LAB_14a23f0da:
            pUVar20 = FRigControlElement::StaticStruct();
            if ((((pUVar20 != (UScriptStruct *)0x0) &&
                 (pFVar22 = FControlRigOverrideValue::GetRootProperty(this_00),
                 pFVar22 != (FProperty *)0x0)) &&
                (pUVar27 = (UScriptStruct *)FField::GetOwnerStruct((FField *)pFVar22),
                pUVar27 != pUVar20)) ||
               ((((this_00->DataArray).ArrayNum == 0 ||
                 (pFVar32 = (this_00->DataArray).AllocatorInstance.Data,
                 pFVar32 == (FScriptContainerElement *)0x0)) ||
                (puVar28 = FControlRigOverrideValue::SubjectPtrToValuePtr(this_00,pFVar19,true),
                puVar28 == (uchar *)0x0)))) goto LAB_14a23f29a;
            FControlRigOverrideValue::CopyValue(this_00,puVar28,pFVar32);
            TSet<FRigControlElement_*,DefaultKeyFuncs<FRigControlElement_*,0>,FDefaultSetAllocator>
            ::Emplace<FRigControlElement_*_const_&>(&local_e8,&local_1f0,(bool *)&local_210);
            if (!bVar15) goto LAB_14a23f29a;
            local_1a8.Rotation.XY.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Rotation.XY.m128d_f64[0];
            local_1a8.Rotation.XY.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Rotation.XY.m128d_f64[1];
            local_1a8.Rotation.ZW.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Rotation.ZW.m128d_f64[0];
            local_1a8.Rotation.ZW.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Rotation.ZW.m128d_f64[1];
            local_1a8.Translation.XY.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Translation.XY.m128d_f64[0];
            local_1a8.Translation.XY.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Translation.XY.m128d_f64[1];
            local_1a8.Translation.ZW.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Translation.ZW.m128d_f64[0];
            local_1a8.Translation.ZW.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Translation.ZW.m128d_f64[1];
            local_1a8.Scale3D.XY.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.XY.m128d_f64[0];
            local_1a8.Scale3D.XY.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.XY.m128d_f64[1];
            local_1a8.Scale3D.ZW.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.ZW.m128d_f64[0];
            local_1a8.Scale3D.ZW.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.ZW.m128d_f64[1];
            URigHierarchy::SetControlShapeTransformByIndex
                      (this_01,*(int *)&pFVar19->field_0x1c,&local_1a8,true,false);
            local_148.Rotation.XY.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Rotation.XY.m128d_f64[0];
            local_148.Rotation.XY.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Rotation.XY.m128d_f64[1];
            local_148.Rotation.ZW.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Rotation.ZW.m128d_f64[0];
            local_148.Rotation.ZW.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Rotation.ZW.m128d_f64[1];
            local_148.Translation.XY.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Translation.XY.m128d_f64[0];
            local_148.Translation.XY.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Translation.XY.m128d_f64[1];
            local_148.Translation.ZW.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Translation.ZW.m128d_f64[0];
            local_148.Translation.ZW.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Translation.ZW.m128d_f64[1];
            local_148.Scale3D.XY.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.XY.m128d_f64[0];
            local_148.Scale3D.XY.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.XY.m128d_f64[1];
            local_148.Scale3D.ZW.m128d_f64[0] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.ZW.m128d_f64[0];
            local_148.Scale3D.ZW.m128d_f64[1] =
                 (pFVar19->Settings).ShapeTransform.Scale3D.ZW.m128d_f64[1];
            URigHierarchy::SetControlShapeTransformByIndex
                      (this_01,*(int *)&pFVar19->field_0x1c,&local_148,false,false);
            this_00 = this_00 + 1;
            uVar30 = (ulonglong)local_208;
          }
        }
      }
      uVar30 = (ulonglong)local_204;
      pFVar33 = pFVar33 + 8;
    }
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FRigControlElement_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FRigControlElement_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
  }
  return;
}

// AvailableControls @ 14a241210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> * __thiscall
UControlRig::AvailableControls
          (UControlRig *this,
          TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  URigHierarchy *this_00;
  
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    URigHierarchy::GetElementsOfType<FRigControlElement>(this_00,__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// BeginDestroy @ 14a2412a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::BeginDestroy(UControlRig *this)

{
  undefined1 *puVar1;
  FMeshDeformerBeginDestroyEvent *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  
  this_00 = &this->BeginDestroyEvent;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_d8);
  puVar1 = &(this->BeginDestroyEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar10 = *(int *)&(this->BeginDestroyEvent).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar7 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->BeginDestroyEvent).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->BeginDestroyEvent).field_0x8;
      if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x68))(), cVar6 == '\0')) {
        bVar7 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->BeginDestroyEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_c0);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  URigVMHost::BeginDestroy((URigVMHost *)this);
  this->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PreConstructionEvent,
             (FWriteAccessScope *)&local_a8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PreConstructionEvent);
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostConstructionEvent,
             (FWriteAccessScope *)&local_90);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PostConstructionEvent);
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PreForwardsSolveEvent,
             (FWriteAccessScope *)&local_78);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PreForwardsSolveEvent);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostForwardsSolveEvent
             ,(FWriteAccessScope *)&local_60);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PostForwardsSolveEvent);
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->PreAdditiveValuesApplicationEvent,(FWriteAccessScope *)&local_48);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->PreAdditiveValuesApplicationEvent);
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar7) {
    pUVar9 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar7 = FTraceFilter::IsObjectTraceable<1>(pUVar9);
    if (!bVar7) {
      return;
    }
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
  return;
}

// CanExecute @ 14a2458f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::CanExecute(UControlRig *this)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = URigVMHost::CanExecute((URigVMHost *)this);
  if (bVar1) {
    lVar2 = (**(code **)(this->_padding_ + 0x10))();
    if (lVar2 != 0) {
      return true;
    }
  }
  return false;
}

// ClearControlSelection @ 14a246010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::ClearControlSelection(UControlRig *this,bool param_1)

{
  URigHierarchy *this_00;
  bool bVar1;
  URigHierarchyController *this_01;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    this_01 = URigHierarchy::GetController(this_00,true);
    if (this_01 != (URigHierarchyController *)0x0) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      bVar1 = URigHierarchyController::SetSelection(this_01,&local_18,false,param_1);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar1;
    }
  }
  return false;
}

// ClearPoseBeforeBackwardsSolve @ 14a246340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::ClearPoseBeforeBackwardsSolve(UControlRig *this)

{
  int iVar1;
  
  iVar1 = (this->PoseBeforeBackwardsSolve).Elements.ArrayMax;
  (this->PoseBeforeBackwardsSolve).Elements.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,(ForAnyElementType *)&this->PoseBeforeBackwardsSolve,0,
               &(this->PoseBeforeBackwardsSolve).Elements.ArrayMax);
  }
  return;
}

// ContainsSimulation @ 14a247ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::ContainsSimulation(UControlRig *this)

{
  return *(int *)&(this->PhysicsSimulations).field_0x8 !=
         *(int *)&(this->PhysicsSimulations).field_0x34;
}

// CopyPoseFromOtherRig @ 14a2498c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::CopyPoseFromOtherRig(UControlRig *this,UControlRig *param_1)

{
  int iVar1;
  URigHierarchy *this_00;
  URigHierarchy *pUVar2;
  FRigTransformElement *pFVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  FRigTransformElement *pFVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [8];
  FScriptContainerElement *local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->DynamicHierarchy).field0_0x0.DebugPtr == (URigHierarchy *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xd7b,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 == (UControlRig *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Subject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xd7c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 == (URigHierarchy *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OtherHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xd7e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar2 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  pFVar11 = (pUVar2->Elements).AllocatorInstance.Data;
  iVar1 = (pUVar2->Elements).ArrayNum;
  local_b0 = pFVar11 + (longlong)iVar1 * 8;
LAB_14a2499a5:
  do {
    pFVar5 = local_b0;
    if ((pUVar2->Elements).ArrayNum != iVar1) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FRigBaseElement_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_b8);
    }
    if (pFVar11 == pFVar5) {
      return;
    }
    pFVar3 = *(FRigTransformElement **)pFVar11;
    iVar7 = URigHierarchy::GetIndex(this_00,(FRigElementKey *)&pFVar3->_padding_,true);
    pFVar8 = (FRigTransformElement *)URigHierarchy::Get(this_00,iVar7);
    if ((pFVar8 != (FRigTransformElement *)0x0) &&
       (((FRigElementKey *)&pFVar8->_padding_)->Type == (ERigElementType)pFVar3->_padding_)) {
      lVar9 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pUVar10 = FRigBoneElement::StaticStruct();
      if (pUVar10 != (UScriptStruct *)0x0) {
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar9 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar9 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
          pUVar10 = FRigBoneElement::StaticStruct();
          if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14a249a77:
            pFVar8 = (FRigTransformElement *)0x0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                               ,0x3f9,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            iVar7 = (int)pUVar10->_padding_;
            if ((*(int *)(lVar9 + 0x38) < iVar7) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar10->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_14a249a77;
          }
          URigHierarchy::GetTransform(this_00,&local_a8,pFVar8,CurrentLocal);
          URigHierarchy::SetTransform
                    ((this->DynamicHierarchy).field0_0x0.DebugPtr,pFVar3,&local_a8,CurrentLocal,true
                     ,false,false,false);
          pFVar11 = pFVar11 + 8;
          goto LAB_14a2499a5;
        }
      }
      lVar9 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pUVar10 = FRigCurveElement::StaticStruct();
      if (pUVar10 != (UScriptStruct *)0x0) {
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar9 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar9 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
          pUVar10 = FRigCurveElement::StaticStruct();
          if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14a249b6d:
            pFVar8 = (FRigTransformElement *)0x0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                               ,0x3f9,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            iVar7 = (int)pUVar10->_padding_;
            if ((*(int *)(lVar9 + 0x38) < iVar7) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar10->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_14a249b6d;
          }
          fVar12 = URigHierarchy::GetCurveValue(this_00,(FRigCurveElement *)pFVar8);
          URigHierarchy::SetCurveValue
                    ((this->DynamicHierarchy).field0_0x0.DebugPtr,(FRigCurveElement *)pFVar3,fVar12,
                     false,false);
        }
      }
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// CreateRigControlsForCurveContainer @ 14a24d590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::CreateRigControlsForCurveContainer(UControlRig *this)

{
  URigHierarchy *this_00;
  int iVar1;
  URigHierarchyController *pUVar2;
  UControlRig *local_28;
  URigHierarchyController *local_20;
  code *local_18;
  UControlRig **ppUStack_10;
  
  iVar1 = (**(code **)(*(longlong *)CVarControlRigCreateFloatControlsForCurves._padding_ + 200))();
  if (((iVar1 != 0) &&
      (this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr, this_00 != (URigHierarchy *)0x0)) &&
     (pUVar2 = URigHierarchy::GetController(this_00,true), pUVar2 != (URigHierarchyController *)0x0)
     ) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&CtrlPrefix,L"CTRL_");
      atexit(`UControlRig::CreateRigControlsForCurveContainer'::__l5::
             _dynamic_atexit_destructor_for__CtrlPrefix__);
      _Init_thread_footer(&::_TSS0);
    }
    ppUStack_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UControlRig::CreateRigControlsForCurveContainer'::__l5::<lambda_1>,bool,FRigCurveElement_*>
               ::Call;
    local_28 = this;
    local_20 = pUVar2;
    URigHierarchy::ForEach<FRigCurveElement>
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,
               (TFunctionRef<bool___cdecl(FRigCurveElement_*)> *)&local_18);
    ppUStack_10 = (UControlRig **)((ulonglong)ppUStack_10 & 0xffffffff00000000);
    local_18 = HandleOnControlModified;
    TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRig>
              ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *)&this->OnControlModified,(UControlRig *)&stack0x00000010,(pmf_60297c5d *)this);
  }
  return;
}

// CreateTransformableControlHandle @ 14a24d8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTransformableControlHandle * __thiscall
UControlRig::CreateTransformableControlHandle(UControlRig *this,FName *param_1)

{
  char cVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  longlong lVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UTransformableControlHandle *pUVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  FName local_b8;
  UControlRig *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar6 = (**(code **)(this->_padding_ + 0x3c8))();
  if (((lVar6 == 0) || (cVar1 = *(char *)(lVar6 + 0x231), cVar1 == '\0')) ||
     (((cVar1 - 1U & 0xf6) == 0 && (cVar1 != '\t')))) {
    pUVar9 = (UTransformableControlHandle *)0x0;
  }
  else {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar7 = GetTransientPackage();
    FVar3 = local_b8;
    if (local_b8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar8 = UTransformableControlHandle::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar8);
    FVar4 = local_b8;
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_b8.ComparisonIndex = FVar3.ComparisonIndex.Value;
    local_b8.Number = FVar3.Number;
    local_a8._16_4_ = local_b8.ComparisonIndex.Value;
    local_a8._20_4_ = local_b8.Number;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_b8 = FVar4;
    local_a8._8_8_ = pUVar7;
    pUVar9 = (UTransformableControlHandle *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar10 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    if (pUVar9 == (UTransformableControlHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CtrlHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xedb,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UTransformableControlHandle *)(*pcVar2)();
        return pUVar9;
      }
    }
    local_b0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FSoftObjectPtr::operator=(&(pUVar9->ControlRig).SoftObjectPtr,(FObjectPtr)&local_b0);
    pUVar9->ControlName = *param_1;
    if (*(FName *)(lVar6 + 0x14) != *param_1) {
      pUVar9->ControlName = *(FName *)(lVar6 + 0x14);
    }
    UTransformableControlHandle::RegisterDelegates(pUVar9);
  }
  return pUVar9;
}

// CurrentControlSelection @ 14a24da70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UControlRig::CurrentControlSelection
          (UControlRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  URigHierarchy *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TArray<FRigBaseElement_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    URigHierarchy::GetSelectedElements(this_00,&local_28,Control);
    iVar7 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar7 * 8;
    FVar8.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigBaseElement_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar8.Data == pFVar1) break;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar9 = (FScriptContainerElement *)(*(longlong *)FVar8.Data + 0x14);
      if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      FVar8.Data = FVar8.Data + 8;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(undefined8 *)pFVar9;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// DisableReplay @ 14a24fab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::DisableReplay(UControlRig *this)

{
  (this->Replay).field0_0x0.DebugPtr = (UControlRigReplay *)0x0;
  return;
}

// EmitPostConstructionEventFinished @ 14a2509f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::EmitPostConstructionEventFinished(UControlRig *this)

{
  bool bVar1;
  FName local_res8;
  
  bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->PostConstructionEvent);
  if (bVar1) {
    this->PostConstructionBracket = this->PostConstructionBracket + 1;
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
               *)&this->PostConstructionEvent,this,&local_res8);
    this->PostConstructionBracket = this->PostConstructionBracket + -1;
  }
  return;
}

// EvaluateSkeletalMeshComponent @ 14a251f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UControlRig::EvaluateSkeletalMeshComponent(UControlRig *this,double param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IControlRigObjectBinding *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  USkeletalMeshComponent *this_00;
  UClass *pUVar7;
  
  pTVar2 = (this->ObjectBinding).SharedReferenceCount.ReferenceController;
  pIVar3 = (this->ObjectBinding).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 == (IControlRigObjectBinding *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  this_00 = (USkeletalMeshComponent *)(**(code **)((longlong)*pIVar3 + 0x28))(pIVar3);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      USkeletalMeshComponent::TickAnimation(this_00,(float)param_1,false);
      (**(code **)(this_00->_padding_ + 0xb88))(this_00);
      USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)this_00);
      USceneComponent::UpdateComponentToWorld((USceneComponent *)this_00,None,None);
      (**(code **)(this_00->_padding_ + 0xbc8))(this_00);
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_00);
      UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this_00);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return false;
}

// Evaluate_AnyThread @ 14a252d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::Evaluate_AnyThread(UControlRig *this)

{
  ERigControlType EVar1;
  TObjectPtr<URigHierarchy>_u_0 this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  TMap<FRigElementKey,UControlRig::FRigSwitchParentInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSwitchParentInfo,0>_>
  *pTVar5;
  TMap<FRigElementKey,UControlRig::FRigSetControlValueInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  FRigPose *pFVar9;
  FRigBaseElement *pFVar10;
  FRigControlElement *pFVar11;
  UScriptStruct *pUVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  FRigControlValueStorage *pFVar18;
  uint *puVar19;
  uint uVar20;
  FRigElementKey *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM4 [16];
  undefined1 auStackY_538 [32];
  uint local_4f8;
  undefined1 local_4f4;
  undefined1 local_4f3 [3];
  undefined8 local_4f0;
  TMap<FRigElementKey,UControlRig::FRigSwitchParentInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSwitchParentInfo,0>_>
  *local_4e8;
  uint uStack_4e0;
  uint uStack_4dc;
  undefined1 *local_4d8;
  undefined4 uStack_4d0;
  uint uStack_4cc;
  uint local_4c8;
  undefined4 uStack_4c4;
  int iStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  FRigElementKeyCollection local_4b0;
  int local_4a0;
  int local_49c;
  int local_498;
  FRigBaseElement *local_490;
  TObjectPtr<URigHierarchy>_u_0 local_488;
  undefined1 local_480 [8];
  FName local_478;
  undefined1 local_470 [8];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  undefined1 local_458 [8];
  TMap<FRigElementKey,UControlRig::FRigSwitchParentInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSwitchParentInfo,0>_>
  *local_450;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_448;
  undefined8 uStack_428;
  TMap<FRigElementKey,UControlRig::FRigSetControlValueInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>_>
  *local_420;
  undefined1 auStack_418 [16];
  uint uStack_408;
  uint uStack_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  TArrayView<FRigElementKey_const_,int> local_3f0;
  IRigDependenciesProvider local_3e0;
  TArrayView<FRigElementKey_const_,int> local_3d0;
  FRigControlValueStorage local_3b8;
  undefined4 local_30c;
  undefined4 local_2ec;
  FRigControlValue local_2e8;
  TTransform<double> local_258;
  undefined1 local_1f8 [96];
  void *local_198;
  undefined4 local_190;
  undefined1 local_188 [96];
  void *local_128;
  undefined4 local_120;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_538;
  if (this->bIsAdditive == false) {
    URigVMHost::Evaluate_AnyThread((URigVMHost *)this);
  }
  else {
    if ((char)this->_padding_ != '\0') {
      URigVMHost::Evaluate_AnyThread((URigVMHost *)this);
    }
    if (this->bOnlyRunConstruction == false) {
      if ((&this->_padding_ == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      this_00 = (TObjectPtr<URigHierarchy>_u_0)(this->DynamicHierarchy).field0_0x0.DebugPtr;
      uVar16 = 0;
      uVar22 = 0;
      uVar15 = 0;
      uVar25 = uVar16;
      uVar24 = uVar16;
      local_488 = this_00;
      if (0 < ((this_00.DebugPtr)->Elements).ArrayNum) {
        do {
          uVar20 = (uint)uVar25;
          uVar23 = uVar15;
          if ((int)uVar20 < ((this_00.DebugPtr)->Elements).ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_490 = *(FRigBaseElement **)
                       (((this_00.DebugPtr)->Elements).AllocatorInstance.Data + uVar24);
          bVar7 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UControlRig::Evaluate_AnyThread'::__l5::<lambda_1>,bool,FRigBaseElement_*>
                  ::Call(&local_488,&local_490);
          if (!bVar7) break;
          uVar25 = (ulonglong)(uVar20 + 1);
          uVar24 = uVar24 + 8;
        } while ((int)(uVar20 + 1) < ((this_00.DebugPtr)->Elements).ArrayNum);
      }
      local_4b8 = 1;
      if ((this->PoseBeforeBackwardsSolve).Elements.ArrayNum == 0) {
        local_3f0.DataPtr = (FRigElementKey *)0x0;
        local_3f0.ArrayNum = 0;
        pFVar9 = URigHierarchy::GetPose
                           (this_00.DebugPtr,(FRigPose *)local_1f8,false,Curve|Bone,&local_3f0,true)
        ;
        FRigPose::operator=(&this->PoseBeforeBackwardsSolve,pFVar9);
        local_190 = 0;
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
        TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_1f8 + 0x20));
      }
      else {
        local_4b0.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b0.Keys.ArrayNum = 0;
        local_4b0.Keys.ArrayMax = 0;
        URigHierarchy::SetPose
                  (this_00.DebugPtr,&this->PoseBeforeBackwardsSolve,CurrentLocal,All,&local_4b0,
                   __real_3f800000);
        local_1f8._0_8_ = local_4b0.Keys.AllocatorInstance.Data;
      }
      if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._0_8_);
      }
      pcVar2 = *(code **)(this->_padding_ + 0x2f0);
      FLazyName::Resolve(&FRigUnit_InverseExecution::EventName);
      (*pcVar2)(this,local_480);
      local_4d8 = &(this->SwitchParentValues).field_0x10;
      uVar23 = *(uint *)&(this->SwitchParentValues).field_0x28;
      local_4e8 = &this->SwitchParentValues;
      local_4c8 = 0;
      iVar8 = 0;
      uStack_4cc = uVar15;
      uStack_4dc = 1;
      if (uVar23 != 0) {
        puVar19 = *(uint **)&(this->SwitchParentValues).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)local_4d8;
        }
        uVar20 = *puVar19;
        uVar25 = uVar16;
        uVar24 = uVar16;
        local_4c8 = uVar22;
        uVar15 = uVar22;
        while (uVar20 == 0) {
          iVar8 = (int)uVar25;
          local_4c8 = (int)uVar24 + 0x20;
          uVar24 = (ulonglong)local_4c8;
          uVar15 = iVar8 + 1;
          uVar25 = (ulonglong)uVar15;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15) {
            iVar8 = *(int *)&(this->SwitchParentValues).field_0x28;
            uStack_4cc = uVar23;
            goto LAB_14a252fe5;
          }
          uVar20 = puVar19[(longlong)iVar8 + 1];
        }
        iVar8 = *(int *)&(this->SwitchParentValues).field_0x28;
        uStack_4dc = -uVar20 & uVar20;
        uVar25 = (ulonglong)uStack_4dc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_4a0 = (int)lVar13;
        uStack_4cc = (local_4c8 - 1) + local_4a0;
        if (iVar8 < (int)uStack_4cc) {
          uStack_4cc = uVar23;
        }
      }
LAB_14a252fe5:
      uStack_4c4 = local_2ec;
      iStack_4c0 = *(int *)&(this->SwitchParentValues).field_0x8 -
                   *(int *)&(this->SwitchParentValues).field_0x34;
      local_4f8 = *(uint *)&(this->SwitchParentValues).field_0x28;
      TStack_448._padding_ = CONCAT44(uStack_4dc,uVar15);
      uStack_4d0 = 0xffffffff;
      TStack_448.CurrentBitIndex = uStack_4cc;
      TStack_448.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)local_4f8 >> 5;
      local_4f0 = (FRigBaseElement *)(CONCAT44(local_4f0._4_4_,local_4f8) & 0xffffffffffffffe0);
      TStack_448._28_4_ = local_2ec;
      TStack_448.BaseBitIndex = local_4c8;
      uStack_428 = CONCAT44(uStack_4bc,iStack_4c0);
      uStack_4e0 = uVar15;
      local_450 = local_4e8;
      TStack_448.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_4d8;
      if (((int)local_4f8 < 0) || (uVar15 = local_4f8 & 0xffffffe0, iVar8 < (int)local_4f8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar15 = (uint)local_4f0;
      }
      uVar23 = *(uint *)&(this->SwitchParentValues).field_0x28;
      if (local_4f8 != uVar23) {
        puVar17 = *(undefined1 **)&(this->SwitchParentValues).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &(this->SwitchParentValues).field_0x10;
        }
        uVar20 = -1 << ((byte)local_4f8 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
        while (uVar20 == 0) {
          lVar13 = (longlong)iVar14;
          uVar15 = uVar15 + 0x20;
          iVar14 = iVar14 + 1;
          local_4f8 = uVar23;
          if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14a253124;
          uVar20 = *(uint *)(puVar17 + lVar13 * 4 + 4);
        }
        uVar25 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_49c = (int)lVar13;
        local_4f8 = (uVar15 - 1) + local_49c;
        if (*(int *)&(this->SwitchParentValues).field_0x28 < (int)local_4f8) {
          local_4f8 = uVar23;
        }
      }
LAB_14a253124:
      while( true ) {
        pTVar5 = local_450;
        if (*(int *)&local_450->field_0x8 - *(int *)&local_450->field_0x34 != (int)uStack_428) {
          local_4f4 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSwitchParentInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4f4);
        }
        if (((TStack_448.CurrentBitIndex == local_4f8) &&
            (TStack_448.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->SwitchParentValues).field_0x10)) &&
           (pTVar5 == &this->SwitchParentValues)) break;
        pFVar21 = (FRigElementKey *)
                  (*(longlong *)pTVar5 + (longlong)TStack_448.CurrentBitIndex * 0x24);
        iVar8 = URigHierarchy::GetIndex(this_00.DebugPtr,pFVar21,true);
        local_4f0 = URigHierarchy::Get(this_00.DebugPtr,iVar8);
        if (local_4f0 != (FRigBaseElement *)0x0) {
          iVar8 = URigHierarchy::GetIndex(this_00.DebugPtr,pFVar21 + 1,true);
          pFVar10 = URigHierarchy::Get(this_00.DebugPtr,iVar8);
          if (pFVar10 != (FRigBaseElement *)0x0) {
            local_3e0.bInteractiveDialogEnabled = false;
            local_3e0._9_7_ = 0;
            local_3e0._padding_ = (longlong)&___7FEmptyRigDependenciesProvider__6B_;
            URigHierarchy::SwitchToParent
                      (this_00.DebugPtr,local_4f0,pFVar10,(bool)pFVar21[2].Type,
                       (bool)pFVar21[2].field_0x1,&local_3e0,(FString *)0x0);
          }
        }
        TStack_448.UnvisitedBitMask = TStack_448.UnvisitedBitMask & ~TStack_448._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_448);
      }
      local_3d0.DataPtr = (FRigElementKey *)0x0;
      local_3d0.ArrayNum = 0;
      pFVar9 = URigHierarchy::GetPose
                         (this_00.DebugPtr,(FRigPose *)local_188,false,Control,&local_3d0,true);
      FRigPose::operator=(&this->ControlsAfterBackwardsSolve,pFVar9);
      local_120 = 0;
      if (local_128 != (void *)0x0) {
        FMemory::Free(local_128);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_188 + 0x20));
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->PreAdditiveValuesApplicationEvent);
      if (bVar7) {
        ::FName::FName(&local_478,L"Additive");
        TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                   *)&this->PreAdditiveValuesApplicationEvent,this,&local_478);
      }
      local_4d8 = &(this->ControlValues).field_0x10;
      uVar15 = *(uint *)&(this->ControlValues).field_0x28;
      local_4e8 = (TMap<FRigElementKey,UControlRig::FRigSwitchParentInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSwitchParentInfo,0>_>
                   *)&this->ControlValues;
      uStack_4cc = uVar22;
      local_4c8 = uVar22;
      if (uVar15 == 0) {
LAB_14a253350:
        uStack_4dc = (uint)local_4b8;
      }
      else {
        puVar19 = *(uint **)&(this->ControlValues).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)local_4d8;
        }
        uStack_4dc = *puVar19;
        uVar25 = uVar16;
        while (uStack_4dc == 0) {
          iVar8 = (int)uVar25;
          local_4c8 = (int)uVar16 + 0x20;
          uVar16 = (ulonglong)local_4c8;
          uVar22 = iVar8 + 1;
          uVar25 = (ulonglong)uVar22;
          uStack_4cc = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
          goto LAB_14a253350;
          uStack_4dc = puVar19[(longlong)iVar8 + 1];
        }
        uStack_4dc = -uStack_4dc & uStack_4dc;
        uVar16 = (ulonglong)uStack_4dc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_498 = (int)lVar13;
        uStack_4cc = (local_4c8 - 1) + local_498;
        if ((int)uVar15 < (int)uStack_4cc) {
          uStack_4cc = uVar15;
        }
      }
      uStack_4c4 = local_30c;
      iStack_4c0 = *(int *)&(this->ControlValues).field_0x8 -
                   *(int *)&(this->ControlValues).field_0x34;
      local_4f8 = *(uint *)&(this->ControlValues).field_0x28;
      uStack_4d0 = 0xffffffff;
      auStack_418._0_8_ = CONCAT44(uStack_4dc,uVar22);
      uVar23 = local_4f8 & 0xffffffe0;
      uStack_408 = 0xffffffff;
      auStack_418._8_8_ = local_4d8;
      uStack_404 = uStack_4cc;
      iVar8 = (int)local_4f8 >> 5;
      local_400._4_4_ = local_30c;
      local_400._0_4_ = local_4c8;
      uStack_3f8 = CONCAT44(uStack_4bc,iStack_4c0);
      uStack_4e0 = uVar22;
      local_420 = (TMap<FRigElementKey,UControlRig::FRigSetControlValueInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>_>
                   *)local_4e8;
      if ((((int)local_4f8 < 0) || ((int)uVar15 < (int)local_4f8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar4 = __real_3e45798ee0000000;
      uVar15 = *(uint *)&(this->ControlValues).field_0x28;
      if (local_4f8 != uVar15) {
        puVar17 = *(undefined1 **)&(this->ControlValues).field_0x20;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &(this->ControlValues).field_0x10;
        }
        uVar22 = -1 << ((byte)local_4f8 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar8 * 4);
        while (uVar22 == 0) {
          lVar13 = (longlong)iVar8;
          uVar23 = uVar23 + 0x20;
          iVar8 = iVar8 + 1;
          local_4f8 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_14a253490;
          uVar22 = *(uint *)(puVar17 + lVar13 * 4 + 4);
        }
        uVar16 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_4f8 = (uVar23 - 1) + (int)lVar13;
        if ((int)uVar15 < (int)local_4f8) {
          local_4f8 = uVar15;
        }
      }
LAB_14a253490:
      while( true ) {
        pTVar6 = local_420;
        if (*(int *)&local_420->field_0x8 - *(int *)&local_420->field_0x34 != (int)uStack_3f8) {
          `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_4f3);
        }
        if (((uStack_404 == local_4f8) &&
            ((undefined1 *)auStack_418._8_8_ == &(this->ControlValues).field_0x10)) &&
           (pTVar6 == &this->ControlValues)) break;
        pFVar21 = (FRigElementKey *)((longlong)(int)uStack_404 * 0xb8 + *(longlong *)pTVar6);
        iVar8 = URigHierarchy::GetIndex(this_00.DebugPtr,pFVar21,true);
        pFVar11 = (FRigControlElement *)URigHierarchy::Get(this_00.DebugPtr,iVar8);
        if (pFVar11 != (FRigControlElement *)0x0) {
          lVar13 = (**(code **)(*(longlong *)pFVar11 + 0x10))(pFVar11);
          pUVar12 = FRigControlElement::StaticStruct();
          if (pUVar12 != (UScriptStruct *)0x0) {
            iVar8 = (int)pUVar12->_padding_;
            if ((*(int *)(lVar13 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar12->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              EVar1 = (pFVar11->Settings).ControlType;
              if ((EVar1 == Bool) ||
                 (((EVar1 == Integer &&
                   ((pFVar11->Settings).ControlEnum.field0_0x0.DebugPtr != (UEnum *)0x0)) ||
                  ((pFVar11->Settings).AnimationType == ProxyControl)))) {
                pFVar18 = (FRigControlValueStorage *)(pFVar21 + 1);
              }
              else {
                URigHierarchy::GetControlValue(this_00.DebugPtr,&local_2e8,pFVar11,Current,false);
                FRigControlValue::GetAsTransform
                          (&local_2e8,&local_118,(pFVar11->Settings).ControlType,
                           (pFVar11->Settings).PrimaryAxis);
                FRigControlValue::GetAsTransform
                          ((FRigControlValue *)(pFVar21 + 1),&local_b8,
                           (pFVar11->Settings).ControlType,(pFVar11->Settings).PrimaryAxis);
                local_258.Rotation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                local_258.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_258.Rotation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                local_258.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_258.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_258.Rotation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                local_258.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_258.Rotation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                local_258.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_258.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_258.Translation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                local_258.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_258.Translation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
                local_258.Scale3D.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                local_258.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_258.Scale3D.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
                UE::Math::TTransform<double>::Multiply(&local_258,&local_b8,&local_118);
                dVar26 = local_258.Rotation.ZW.m128d_f64[0] * local_258.Rotation.ZW.m128d_f64[0] +
                         local_258.Rotation.XY.m128d_f64[0] * local_258.Rotation.XY.m128d_f64[0];
                dVar29 = local_258.Rotation.ZW.m128d_f64[1] * local_258.Rotation.ZW.m128d_f64[1] +
                         local_258.Rotation.XY.m128d_f64[1] * local_258.Rotation.XY.m128d_f64[1];
                dVar3 = dVar29 + dVar26;
                dVar26 = dVar26 + dVar29;
                auVar30._8_4_ = SUB84(dVar26,0);
                auVar30._0_8_ = dVar3;
                auVar30._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
                in_XMM4 = sqrtpd(in_XMM4,auVar30);
                uVar24 = -(ulonglong)(dVar4 <= dVar3);
                uVar25 = -(ulonglong)(dVar4 <= dVar26);
                auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                in_XMM4);
                uVar15 = (uint)(uVar24 >> 0x20);
                uVar22 = (uint)(uVar25 >> 0x20);
                auVar31._0_8_ =
                     uVar24 & (ulonglong)(auVar30._0_8_ * local_258.Rotation.XY.m128d_f64[0]);
                uVar16 = uVar25 & (ulonglong)(auVar30._8_8_ * local_258.Rotation.XY.m128d_f64[1]);
                auVar31._8_4_ = (undefined4)uVar16;
                auVar31._12_4_ = (undefined4)(uVar16 >> 0x20);
                auVar27._0_4_ =
                     ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                auVar27._4_4_ =
                     ~uVar15 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
                auVar27._8_4_ =
                     ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                auVar27._12_4_ =
                     ~uVar22 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                local_258.Rotation.XY.m128d_f64 = (double  [2])(auVar31 | auVar27);
                auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                in_XMM4);
                auVar32._0_4_ =
                     ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                auVar32._4_4_ =
                     ~uVar15 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
                auVar32._8_4_ =
                     ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                auVar32._12_4_ =
                     ~uVar22 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                auVar28._0_8_ =
                     (ulonglong)(auVar30._0_8_ * local_258.Rotation.ZW.m128d_f64[0]) & uVar24;
                uVar25 = (ulonglong)(auVar30._8_8_ * local_258.Rotation.ZW.m128d_f64[1]) & uVar25;
                auVar28._8_4_ = (undefined4)uVar25;
                auVar28._12_4_ = (undefined4)(uVar25 >> 0x20);
                local_258.Rotation.ZW.m128d_f64 = (double  [2])(auVar32 | auVar28);
                local_3b8.Float00 = 0.0;
                local_3b8.Float01 = 0.0;
                local_3b8.Float02 = 0.0;
                local_3b8.Float03 = 0.0;
                local_3b8.Float10 = 0.0;
                local_3b8.Float11 = 0.0;
                local_3b8.Float12 = 0.0;
                local_3b8.Float13 = 0.0;
                local_3b8.Float20 = 0.0;
                local_3b8.Float21 = 0.0;
                local_3b8.Float22 = 0.0;
                local_3b8.Float23 = 0.0;
                local_3b8.Float30 = 0.0;
                local_3b8.Float31 = 0.0;
                local_3b8.Float32 = 0.0;
                local_3b8.Float33 = 0.0;
                local_3b8.Float00_2 = 0.0;
                local_3b8.Float01_2 = 0.0;
                local_3b8.Float02_2 = 0.0;
                local_3b8.Float03_2 = 0.0;
                local_3b8.Float10_2 = 0.0;
                local_3b8.Float11_2 = 0.0;
                local_3b8.Float12_2 = 0.0;
                local_3b8.Float13_2 = 0.0;
                local_3b8.Float20_2 = 0.0;
                local_3b8.Float21_2 = 0.0;
                local_3b8.Float22_2 = 0.0;
                local_3b8.Float23_2 = 0.0;
                local_3b8.Float30_2 = 0.0;
                local_3b8.Float31_2 = 0.0;
                local_3b8.Float32_2 = 0.0;
                local_3b8.Float33_2 = 0.0;
                local_3b8.bValid = false;
                local_3b8._129_3_ = 0;
                FRigControlValue::SetFromTransform
                          ((FRigControlValue *)&local_3b8,&local_258,(pFVar11->Settings).ControlType
                           ,(pFVar11->Settings).PrimaryAxis);
                pFVar18 = &local_3b8;
              }
              URigHierarchy::SetControlValue
                        (this_00.DebugPtr,pFVar11,(FRigControlValue *)pFVar18,Current,false,false,
                         *(bool *)((longlong)&pFVar21[0xe].Name.ComparisonIndex.Value + 1),false);
              if ((pFVar21[0xc].Type != None) &&
                 (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                     &this->OnControlModified), bVar7)) {
                TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                             *)&this->OnControlModified,this,pFVar11,
                            (FRigControlModifiedContext *)&pFVar21[0xc].Name);
                pFVar21[0xc].Type = None;
              }
            }
          }
        }
        uStack_408 = uStack_408 & ~auStack_418._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_418);
      }
      if (this->InteractionType != '\0') {
        pcVar2 = *(code **)(this->_padding_ + 0x2f0);
        FLazyName::Resolve(&FRigUnit_InteractionExecution::EventName);
        (*pcVar2)(this,local_470);
      }
      pcVar2 = *(code **)(this->_padding_ + 0x2f0);
      FLazyName::Resolve(&FRigUnit_PreBeginExecution::EventName);
      (*pcVar2)(this,local_468);
      pcVar2 = *(code **)(this->_padding_ + 0x2f0);
      FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
      (*pcVar2)(this,local_460);
      pcVar2 = *(code **)(this->_padding_ + 0x2f0);
      FLazyName::Resolve(&FRigUnit_PostBeginExecution::EventName);
      (*pcVar2)(this,local_458);
      if (&this->_padding_ != (longlong *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      }
    }
  }
  return;
}

// Execute @ 14a254190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UControlRig::Execute(UControlRig *this,FName *param_1)

{
  int *piVar1;
  TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  FRigVMDrawInstruction *pFVar6;
  URigHierarchy *pUVar7;
  FRigHierarchyKey *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  bool bVar16;
  undefined1 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  UClass *pUVar25;
  UObject *pUVar26;
  FName *pFVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UControlRig::Execute(FName_const_&)_::_2_::FStat_STAT_ControlRig_Execute>
  FVar29;
  FRigVMExtendedExecuteContext *this_00;
  FName FVar30;
  UControlRig *pUVar31;
  UAnimationDataSourceRegistry *pUVar32;
  undefined8 *puVar33;
  ulong64 uVar34;
  USceneComponent *pUVar35;
  IControlRigObjectBinding *pIVar36;
  AActor *pAVar37;
  UWorld *pUVar38;
  longlong *plVar39;
  TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> *pTVar40;
  URigHierarchyController *pUVar41;
  FRigPose *pFVar42;
  URigHierarchyController *this_01;
  FRigElementKey *pFVar43;
  FRigBaseElement *pFVar44;
  FRigComponentKey *pFVar45;
  FRigBaseComponent *pFVar46;
  undefined8 *puVar47;
  undefined ***pppuVar48;
  FScriptContainerElement *pFVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  FName *pFVar52;
  FName *pFVar53;
  FScriptContainerElement *pFVar54;
  ForAnyElementType *pFVar55;
  FName FVar56;
  bool bVar57;
  bool bVar58;
  float fVar59;
  undefined1 auStackY_588 [32];
  undefined1 local_521;
  char local_520;
  undefined1 local_51f;
  undefined1 local_51e;
  char local_51d;
  char local_51c;
  char local_51b;
  FName local_518;
  FName local_510;
  byte local_508;
  FName *local_500;
  TArray<FRigHierarchyKey,TSizedDefaultAllocator<32>_> local_4f8;
  undefined1 local_4e8;
  FWeakObjectPtr local_4e4;
  undefined8 local_4d8 [2];
  URigHierarchy *local_4c8;
  undefined4 uStack_4c0;
  int iStack_4bc;
  FColor_u_0 local_4b8 [2];
  FName local_4b0;
  FRigElementKeyCollection local_4a8;
  FRigElementKeyCollection local_498;
  FRigElementKeyCollection local_488;
  FRigElementKeyCollection local_478;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  UControlRig *local_440;
  UControlRig *local_438;
  UObject *local_430;
  UAssetUserData *local_428;
  FName local_420;
  FName local_418 [2];
  FName local_408;
  FName local_400;
  FName local_3f8;
  URigHierarchy *local_3f0;
  FName local_3e8;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  UControlRig *local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  undefined1 local_3a8 [8];
  FName local_3a0;
  FString local_398;
  FRigEventContext local_388;
  FRigNotificationSubject local_360;
  FRigNotificationSubject local_350;
  FRigNotificationSubject local_340;
  FRigNotificationSubject local_330;
  UControlRig *local_320;
  URigHierarchy *local_318;
  code *local_310;
  UControlRig **local_308;
  FDestructionSentinel local_300;
  undefined1 *local_2e8;
  FDestructionSentinel local_2e0;
  undefined1 *local_2c8;
  FName local_2c0;
  FString local_2b8;
  FName local_2a8 [2];
  undefined1 local_298 [32];
  ForAnyElementType local_278;
  undefined8 local_270;
  TBitArray<FDefaultBitArrayAllocator> local_268;
  undefined4 local_248;
  undefined4 local_244;
  void *local_238;
  undefined4 local_230;
  undefined1 local_228 [32];
  undefined1 local_208 [64];
  void *local_1c8;
  undefined4 local_1c0;
  code *local_1b8 [2];
  undefined **local_1a8;
  UControlRig *local_1a0;
  undefined ***local_190;
  TFunction<void___cdecl(FName_const_&)> *local_188;
  undefined1 local_178 [40];
  longlong *local_150;
  undefined1 local_148 [96];
  void *local_e8;
  undefined4 local_e0;
  FRigPose local_d8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_500 = param_1;
  cVar15 = (**(code **)(this->_padding_ + 0x2b8))();
  if (cVar15 == '\0') {
    return false;
  }
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  if (*param_1 != local_3d0) {
    pUVar25 = StaticClass();
    pUVar26 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar25);
    if (pUVar26 != (UObject *)0x0) {
      local_3c8 = this;
      `UControlRig::Execute'::__l8::<lambda_1>::operator()(&local_3c8);
    }
  }
  if ((char)this->_padding_ != '\0') {
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
    uVar4 = (undefined4)this->_padding_;
    *(undefined4 *)&this->_padding_ = uVar4;
    cVar15 = (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
    *(undefined4 *)&this->_padding_ = uVar4;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
    if (cVar15 == '\0') {
      return false;
    }
  }
  plVar39 = &this->_padding_;
  if ((int)this->_padding_ != 0) {
    plVar39 = &this->_padding_;
  }
  pFVar28 = (FName *)*plVar39;
  iVar23 = (int)plVar39[1];
  if ((iVar23 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    uVar17 = (*pcVar11)();
    return (bool)uVar17;
  }
  if (pFVar28 != pFVar28 + iVar23) {
    pFVar27 = pFVar28;
    do {
      if (*pFVar27 == *param_1) {
        bVar16 = true;
        goto LAB_14a25430a;
      }
      pFVar27 = pFVar27 + 1;
    } while (pFVar27 != pFVar28 + iVar23);
  }
  bVar16 = false;
LAB_14a25430a:
  if (iVar23 == 0) {
LAB_14a254359:
    bVar18 = false;
    if (iVar23 != 0) goto LAB_14a254360;
LAB_14a2543ba:
    bVar19 = false;
  }
  else {
    if ((iVar23 < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return (bool)uVar17;
    }
    if (*pFVar28 != *param_1) goto LAB_14a254359;
    bVar18 = true;
LAB_14a254360:
    uVar51 = iVar23 - 1;
    uVar22 = 0;
    if ((int)uVar51 < iVar23) {
      uVar22 = ~uVar51 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar19)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return (bool)uVar17;
    }
    bVar19 = true;
    if (pFVar28[(int)uVar51] != *param_1) goto LAB_14a2543ba;
  }
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  bVar57 = *param_1 == local_3c0;
  FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
  bVar58 = *param_1 == local_3b8;
  for (pFVar27 = pFVar28; pFVar52 = pFVar28, pFVar53 = pFVar28, pFVar27 != pFVar28 + iVar23;
      pFVar27 = pFVar27 + 1) {
    FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
    if (*pFVar27 == local_3b0) {
      pcVar11 = *(code **)(this->_padding_ + 0x308);
      FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
      cVar15 = (*pcVar11)(this,local_3a8);
      if (cVar15 != '\0') {
        bVar5 = true;
        goto LAB_14a254450;
      }
      break;
    }
  }
  bVar5 = false;
  if (pFVar28 != pFVar28 + iVar23) {
LAB_14a254450:
    do {
      FLazyName::Resolve(&FRigUnit_PreBeginExecution::EventName);
      if (*pFVar52 == local_3a0) {
        bVar21 = true;
        goto LAB_14a254490;
      }
      pFVar52 = pFVar52 + 1;
    } while (pFVar52 != pFVar28 + iVar23);
  }
  bVar21 = false;
  if (pFVar28 != pFVar28 + iVar23) {
LAB_14a254490:
    do {
      FLazyName::Resolve(&FRigUnit_PostBeginExecution::EventName);
      if (*pFVar53 == local_468) {
        bVar12 = true;
        goto LAB_14a2544bb;
      }
      pFVar53 = pFVar53 + 1;
    } while (pFVar53 != pFVar28 + iVar23);
  }
  bVar12 = false;
LAB_14a2544bb:
  FLazyName::Resolve(&FRigUnit_PreBeginExecution::EventName);
  pFVar28 = local_500;
  local_51d = *local_500 == local_420;
  FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
  FVar56 = *pFVar28;
  local_520 = FVar56 == local_460;
  FLazyName::Resolve(&FRigUnit_PostBeginExecution::EventName);
  local_51c = *pFVar28 == local_458;
  FLazyName::Resolve(&FRigUnit_InteractionExecution::EventName);
  local_51b = *pFVar28 == local_450;
  if ((((uint)this->_padding_ >> 4 & 1) != 0) &&
     (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4044058622282433428>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                          ,0x394,"!HasAnyFlags(RF_ClassDefaultObject)"), bVar20)) {
    pcVar11 = (code *)swi(3);
    uVar17 = (*pcVar11)();
    return (bool)uVar17;
  }
  FStatsHierarchical::BeginMeasurement("UControlRig::Execute");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ControlRig_Execute ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UControlRig::Execute(FName_const_&)_::_2_::FStat_STAT_ControlRig_Execute>
         )0x0) {
      pFVar28 = ::FName::FName(&local_2c0,"STAT_ControlRig_Execute");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Execute,*pFVar28,
                 L"STAT_ControlRig_Execute","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar29 = StatPtr_STAT_ControlRig_Execute;
  if (StatPtr_STAT_ControlRig_Execute ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UControlRig::Execute(FName_const_&)_::_2_::FStat_STAT_ControlRig_Execute>
       )0x0) {
    pFVar28 = ::FName::FName(local_2a8,"STAT_ControlRig_Execute");
    FVar29 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UControlRig::Execute(FName_const_&)_::_2_::FStat_STAT_ControlRig_Execute>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Execute,*pFVar28,
                          L"STAT_ControlRig_Execute","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_510.ComparisonIndex.Value = 0;
  local_510.Number = 0;
  local_508 = 0;
  FVar30 = *(FName *)FVar29;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4b8[0]._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      local_508 = local_508 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_4b0.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_4b0.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4b0,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                   ,0x397);
        local_508 = local_508 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_518 = FVar30;
      local_510 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      local_508 = local_508 | 4;
    }
  }
  this_00 = URigVMHost::GetRigVMExtendedExecuteContext((URigVMHost *)this);
  local_1a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UControlRig::Execute'::`2'::<lambda_2>,0,0>::_vftable_;
  local_190 = (undefined ***)0x0;
  local_188 = &this_00->OnExecutionReachedExitCallback;
  local_1b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UControlRig::Execute'::__l2::<lambda_2>,void,FName_const_&>::
                 Call;
  local_178._0_8_ = *(undefined8 *)local_188;
  local_150 = (longlong *)0x0;
  local_1a0 = this;
  if (local_178._0_8_ != 0) {
    puVar33 = *(undefined8 **)&(this_00->OnExecutionReachedExitCallback).field_0x28;
    puVar47 = (undefined8 *)&(this_00->OnExecutionReachedExitCallback).field_0x10;
    if (puVar33 != (undefined8 *)0x0) {
      puVar47 = puVar33;
    }
    (**(code **)*puVar47)(puVar47,local_178 + 0x10);
  }
  TFunction<void___cdecl(FName_const_&)>::operator=
            (local_188,(TFunction<void___cdecl(FName_const_&)> *)local_1b8);
  if (local_1b8[0] != (code *)0x0) {
    pppuVar48 = &local_1a8;
    if (local_190 != (undefined ***)0x0) {
      pppuVar48 = local_190;
    }
    (*(code *)(*pppuVar48)[2])();
  }
  FVar30 = (FName)FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
                            (this_00);
  *(double *)&((FControlRigExecuteContext *)FVar30)->field_0x20 = (double)*(float *)&this->_padding_
  ;
  *(double *)&((FControlRigExecuteContext *)FVar30)->field_0x28 =
       (double)*(float *)((longlong)&this->_padding_ + 4);
  local_518 = FVar30;
  fVar59 = URigVMHost::GetCurrentFramesPerSecond((URigVMHost *)this);
  *(double *)&((FControlRigExecuteContext *)FVar30)->field_0x30 = (double)fVar59;
  if (((!bVar16) || (bVar18)) &&
     ((FLazyName::Resolve(&FRigUnit_InteractionExecution::EventName), *local_500 != local_448 ||
      ((this->bEvaluationTriggeredFromInteraction == false ||
       (*(int *)&(this->PhysicsSimulations).field_0x8 ==
        *(int *)&(this->PhysicsSimulations).field_0x34)))))) {
    FRigVMDrawContainer::Reset((FRigVMDrawContainer *)&this->_padding_);
  }
  *(undefined8 *)&((FControlRigExecuteContext *)FVar30)->field_0x58 = 0;
  (((FControlRigExecuteContext *)FVar30)->UnitContext).AnimAttributeContainer =
       this->ExternalAnimAttributeContainer;
  pUVar31 = UClass::GetDefaultObject<UControlRig>((UClass *)this->_padding_);
  if (pUVar31 != (UControlRig *)0x0) {
    plVar39 = &this->_padding_;
    FVar30 = local_518;
    if (plVar39 != &pUVar31->_padding_) {
      DestructItems<FRigVMDrawInstruction,int>
                ((FRigVMDrawInstruction *)*plVar39,(int)this->_padding_);
      iVar23 = (int)pUVar31->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      pFVar6 = (FRigVMDrawInstruction *)pUVar31->_padding_;
      iVar24 = *piVar1;
      *(int *)&this->_padding_ = iVar23;
      if ((iVar23 == 0) && (iVar24 == 0)) {
        *piVar1 = 0;
        FVar30 = local_518;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,0x10,iVar23,iVar24,(ForAnyElementType *)plVar39,iVar23,piVar1);
        ConstructItems<FRigVMDrawInstruction,FRigVMDrawInstruction,int>
                  ((void *)*plVar39,pFVar6,iVar23);
        FVar30 = local_518;
      }
    }
  }
  *(longlong **)&((FControlRigExecuteContext *)FVar30)->field_0x60 = &this->_padding_;
  pUVar32 = GetDataSourceRegistry(this);
  (((FControlRigExecuteContext *)FVar30)->UnitContext).DataSourceRegistry = pUVar32;
  (((FControlRigExecuteContext *)FVar30)->UnitContext).InteractionType = this->InteractionType;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(((FControlRigExecuteContext *)FVar30)->UnitContext).ElementsBeingInteracted,
             &this->ElementsBeingInteracted);
  ((FControlRigExecuteContext *)FVar30)->Hierarchy =
       (URigHierarchy *)(this->DynamicHierarchy).field0_0x0;
  ((FControlRigExecuteContext *)FVar30)->ControlRig = this;
  (((FControlRigExecuteContext *)FVar30)->UnitContext).HierarchySettings = this->HierarchySettings;
  if ((((FControlRigExecuteContext *)FVar30)->Hierarchy == (URigHierarchy *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PublicContext.Hierarchy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                          ,0x3fb,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    uVar17 = (*pcVar11)();
    return (bool)uVar17;
  }
  uStack_4c0 = 0;
  local_4c8 = (URigHierarchy *)OnAddShapeLibrary;
  iStack_4bc = local_398.Data.ArrayMax;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &((FControlRigExecuteContext *)FVar30)->OnAddShapeLibraryDelegate,
             (FWriteAccessScope *)&local_300);
  local_2e8 = &(((FControlRigExecuteContext *)FVar30)->OnAddShapeLibraryDelegate).field_0x8;
  puVar33 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_2e8);
  if (puVar33 != (undefined8 *)0x0) {
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar34;
    *puVar33 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar33[3] = 0;
    local_440 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar33 + 3),(FObjectPtr)&local_440);
    puVar33[4] = local_4c8;
    puVar33[5] = CONCAT44(iStack_4bc,uStack_4c0);
  }
  if (local_300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
  }
  uStack_4c0 = 0;
  local_4c8 = (URigHierarchy *)OnShapeExists;
  iStack_4bc = local_398.Data.ArrayMax;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &((FControlRigExecuteContext *)FVar30)->OnShapeExistsDelegate,
             (FWriteAccessScope *)&local_2e0);
  local_2c8 = &(((FControlRigExecuteContext *)FVar30)->OnShapeExistsDelegate).field_0x8;
  puVar33 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_2c8);
  if (puVar33 != (undefined8 *)0x0) {
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar34;
    *puVar33 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRig____A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar33[3] = 0;
    local_438 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar33 + 3),(FObjectPtr)&local_438);
    puVar33[4] = local_4c8;
    puVar33[5] = CONCAT44(iStack_4bc,uStack_4c0);
  }
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  if ((((uint)this->_padding_ >> 4 & 1) == 0) &&
     (((FControlRigExecuteContext *)FVar30)->Hierarchy != (URigHierarchy *)0x0)) {
    pUVar25 = (UClass *)this->_padding_;
    if ((pUVar25->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar25);
    }
    pUVar26 = (pUVar25->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar26 != (UObject *)0x0) {
      pUVar25 = StaticClass();
      iVar23 = (int)pUVar25->_padding_;
      if (((iVar23 <= *(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar23 * 8) ==
           &pUVar25->_padding_)) &&
         (pUVar26 = *(UObject **)&pUVar26[0x14].field_0x18, pUVar26 != (UObject *)0x0)) {
        pUVar7 = ((FControlRigExecuteContext *)FVar30)->Hierarchy;
        local_430 = pUVar26;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar26);
        }
        FWeakObjectPtr::operator=(&(pUVar7->DefaultHierarchyPtr).WeakPtr,(FObjectPtr)&local_430);
      }
    }
  }
  if ((bVar57) || (bVar58)) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
  }
  local_4c8 = ((FControlRigExecuteContext *)FVar30)->Hierarchy;
  bVar20 = local_4c8->bIsControllerAvailable;
  local_4c8->bIsControllerAvailable = bVar18;
  pUVar35 = (USceneComponent *)(**(code **)(this->_padding_ + 0x350))(this);
  if (pUVar35 == (USceneComponent *)0x0) {
    FRigVMExecuteContext::SetOwningComponent((FRigVMExecuteContext *)FVar30,(USceneComponent *)0x0);
    if ((this->ObjectBinding).Object != (IControlRigObjectBinding *)0x0) {
      pIVar36 = TSharedPtr<IControlRigObjectBinding,1>::operator->(&this->ObjectBinding);
      pAVar37 = (AActor *)(**(code **)((longlong)*pIVar36 + 0x30))(pIVar36);
      if (pAVar37 == (AActor *)0x0) {
        pIVar36 = TSharedPtr<IControlRigObjectBinding,1>::operator->(&this->ObjectBinding);
        plVar39 = (longlong *)(**(code **)((longlong)*pIVar36 + 0x28))(pIVar36);
        if (plVar39 != (longlong *)0x0) {
          pUVar38 = (UWorld *)(**(code **)(*plVar39 + 0x180))(plVar39);
          FRigVMExecuteContext::SetWorld((FRigVMExecuteContext *)FVar30,pUVar38);
        }
      }
      else {
        FRigVMExecuteContext::SetOwningActor((FRigVMExecuteContext *)FVar30,pAVar37);
      }
    }
    if ((*(longlong *)&((FControlRigExecuteContext *)FVar30)->field_0xe0 == 0) &&
       ((longlong *)this->_padding_ != (longlong *)0x0)) {
      pUVar38 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
      FRigVMExecuteContext::SetWorld((FRigVMExecuteContext *)FVar30,pUVar38);
    }
  }
  else {
    FRigVMExecuteContext::SetOwningComponent((FRigVMExecuteContext *)FVar30,pUVar35);
  }
  pTVar2 = &((FControlRigExecuteContext *)FVar30)->AssetUserData;
  (((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayNum = 0;
  if ((((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,
               &(((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayMax);
  }
  plVar39 = (longlong *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_);
  cVar15 = FVar56 == local_460;
  if (plVar39 != (longlong *)0x0) {
    puVar47 = (undefined8 *)*plVar39;
    lVar13 = plVar39[1];
    puVar33 = puVar47 + (int)lVar13;
    while( true ) {
      if ((int)plVar39[1] != (int)lVar13) {
        local_521 = 0;
        `TCheckedPointerIterator<UAssetUserData_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_521);
      }
      cVar15 = local_520;
      if (puVar47 == puVar33) break;
      local_4d8[0] = *puVar47;
      pFVar54 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar54 <= (FScriptContainerElement *)local_4d8) &&
          ((FScriptContainerElement *)local_4d8 <
           pFVar54 + (longlong)(((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayMax * 8))
         && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar18)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      iVar23 = (((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayNum;
      if (iVar23 == (((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,
                            &(((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayMax);
      }
      puVar47 = puVar47 + 1;
      (((FControlRigExecuteContext *)FVar30)->AssetUserData).ArrayNum = iVar23 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 8) = local_4d8[0];
    }
  }
  FVar56 = local_518;
  local_428 = (UAssetUserData *)0x0;
  TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)local_518 + 0x110),&local_428);
  pUVar7 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (pUVar7 != (URigHierarchy *)0x0) {
    URigHierarchy::UpdateReferences(pUVar7,(FRigVMExecuteContext *)FVar56);
  }
  if ((int)this->_padding_ < 1) {
    if ((bVar57) || (bVar58)) {
      if ((0 < this->PreConstructionBracket) || (0 < this->PostConstructionBracket)) {
        if (2 < (byte)LogControlRig._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_398,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          local_2b8.Data.AllocatorInstance.Data = local_398.Data.AllocatorInstance.Data;
          goto LAB_14a255a7f;
        }
        goto LAB_14a255a89;
      }
      if (!bVar57) goto LAB_14a255910;
      if ((pUVar7 == (URigHierarchy *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Hierarchy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                              ,0x47e,L""), bVar18)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      pTVar40 = URigHierarchy::GetSelectedHierarchyKeys(pUVar7);
      local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar23 = pTVar40->ArrayNum;
      pFVar8 = (FRigHierarchyKey *)(pTVar40->AllocatorInstance).Data;
      local_4f8.ArrayNum = iVar23;
      if (iVar23 == 0) {
        local_4f8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,iVar23,0,&local_4f8.AllocatorInstance,iVar23,&local_4f8.ArrayMax);
        ConstructItems<FRigHierarchyKey,FRigHierarchyKey,int>
                  (local_4f8.AllocatorInstance.Data,pFVar8,iVar23);
      }
      cVar15 = (**(code **)(this->_padding_ + 0x3d8))(this);
      bVar18 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->PreConstructionForUIEvent);
      if (bVar18) {
        this->PreConstructionBracket = this->PreConstructionBracket + 1;
        FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
        TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                   *)&this->PreConstructionForUIEvent,this,&local_3d8);
        this->PreConstructionBracket = this->PreConstructionBracket + -1;
      }
      pUVar41 = URigHierarchy::GetController(pUVar7,true);
      local_298._0_8_ = (FScriptContainerElement *)0x0;
      local_298._8_4_ = 0;
      local_298._12_4_ = 0;
      local_298._16_4_ = -1;
      local_298._20_4_ = -1;
      bVar18 = pUVar41->bSuspendSelectionNotifications;
      pUVar41->bSuspendSelectionNotifications = true;
      local_298._24_4_ = -1;
      local_278.Data = (FScriptContainerElement *)0x0;
      local_270 = 0;
      local_268.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_268.NumBits = 0;
      local_268.MaxBits = 0x80;
      local_248 = 0xffffffff;
      local_244 = 0;
      local_238 = (void *)0x0;
      local_230 = 0;
      if (this->bResetCurrentTransformsAfterConstruction != false) {
        local_4a8.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a8.Keys.ArrayNum = 0;
        local_4a8.Keys.ArrayMax = 0;
        pFVar42 = URigHierarchy::GetPose
                            (pUVar7,(FRigPose *)local_148,false,ToResetAfterConstructionEvent,
                             &local_4a8,true);
        FRigPose::operator=((FRigPose *)local_298,pFVar42);
        local_e0 = 0;
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_148 + 0x20));
        if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._0_8_);
        }
        if (local_4a8.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.Keys.AllocatorInstance.Data);
        }
      }
      fVar59 = __real_3f800000;
      if (this->bHierarchyInitializedThisFrame == false) {
        if ((this->bCopyHierarchyBeforeConstruction != false) ||
           (this->bResetInitialTransformsBeforeConstruction != false)) {
          local_228._0_8_ = (FScriptContainerElement *)0x0;
          local_228._8_4_ = 0;
          local_228._12_4_ = 0;
          local_228._16_4_ = -1;
          local_228._20_4_ = -1;
          local_228._24_4_ = -1;
          local_208._0_8_ = 0;
          local_208._8_8_ = 0;
          local_208._32_8_ = 0;
          local_208._40_4_ = 0;
          local_208._44_4_ = 0x80;
          local_208._48_4_ = 0xffffffff;
          local_208._52_4_ = 0;
          local_1c8 = (void *)0x0;
          local_1c0 = 0;
          if (this->bResetInitialTransformsBeforeConstruction == false) {
            local_498.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_498.Keys.ArrayNum = 0;
            local_498.Keys.ArrayMax = 0;
            pFVar42 = URigHierarchy::GetPose
                                (pUVar7,&local_d8,true,ToResetAfterConstructionEvent,&local_498,true
                                );
            FRigPose::operator=((FRigPose *)local_228,pFVar42);
            FRigPose::~FRigPose(&local_d8);
            if (local_498.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Keys.AllocatorInstance.Data);
            }
          }
          if (this->bCopyHierarchyBeforeConstruction != false) {
            URigHierarchy::ResetToDefault(pUVar7);
          }
          if (0 < (int)local_228._8_4_) {
            bVar21 = pUVar7->bRecordCurveChanges;
            pUVar7->bRecordCurveChanges = false;
            local_488.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_488.Keys.ArrayNum = 0;
            local_488.Keys.ArrayMax = 0;
            URigHierarchy::SetPose(pUVar7,(FRigPose *)local_228,InitialLocal,All,&local_488,fVar59);
            if (local_488.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Keys.AllocatorInstance.Data);
            }
            pUVar7->bRecordCurveChanges = bVar21;
          }
          local_1c0 = 0;
          if (local_1c8 != (void *)0x0) {
            FMemory::Free(local_1c8);
          }
          TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_208);
          if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_228._0_8_);
          }
        }
        URigHierarchy::ResetPoseToInitial(pUVar7,All);
      }
      else {
        this->bHierarchyInitializedThisFrame = false;
      }
      RestoreShapeLibrariesFromCDO(this);
      bVar21 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->PreConstructionEvent);
      if (bVar21) {
        this->PreConstructionBracket = this->PreConstructionBracket + 1;
        FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
        TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                   *)&this->PreConstructionEvent,this,local_418);
        this->PreConstructionBracket = this->PreConstructionBracket + -1;
      }
      pcVar11 = *(code **)(this->_padding_ + 0x300);
      FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
      uVar17 = (*pcVar11)(this);
      if (!bVar5) {
        ApplyElementOverrides(this);
        (**(code **)(this->_padding_ + 0x480))(this);
      }
      if (0 < (int)local_298._8_4_) {
        bVar5 = pUVar7->bRecordCurveChanges;
        local_478.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_478.Keys.ArrayNum = 0;
        local_478.Keys.ArrayMax = 0;
        pUVar7->bRecordCurveChanges = false;
        URigHierarchy::SetPose(pUVar7,(FRigPose *)local_298,CurrentLocal,All,&local_478,fVar59);
        if (local_478.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_478.Keys.AllocatorInstance.Data);
        }
        pUVar7->bRecordCurveChanges = bVar5;
      }
      local_230 = 0;
      if (local_238 != (void *)0x0) {
        FMemory::Free(local_238);
      }
      uVar14 = local_270 >> 0x20;
      local_270 = local_270 & 0xffffffff00000000;
      if ((int)uVar14 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,&local_278,0,(int *)((longlong)&local_270 + 4));
      }
      local_248 = 0xffffffff;
      local_244 = 0;
      local_268.NumBits = 0;
      if (0x80 < (uint)local_268.MaxBits) {
        local_268.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_268,0);
      }
      if (local_268.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_268.AllocatorInstance.SecondaryData);
      }
      if (local_278.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data);
      }
      if ((FScriptContainerElement *)local_298._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_298._0_8_);
      }
      this_01 = URigHierarchy::GetController(pUVar7,true);
      URigHierarchyController::SetHierarchySelection(this_01,&local_4f8,false,false);
      pUVar41->bSuspendSelectionNotifications = bVar18;
      if (cVar15 != '\0') {
        URigHierarchy::ResetPoseToInitial(pUVar7,Bone);
      }
      pTVar40 = URigHierarchy::GetSelectedHierarchyKeys(pUVar7);
      pFVar9 = (pTVar40->AllocatorInstance).Data;
      iVar23 = pTVar40->ArrayNum;
      pFVar54 = pFVar9 + 0x1c;
      while( true ) {
        if (pTVar40->ArrayNum != iVar23) {
          local_51f = 0;
          `TCheckedPointerIterator<FRigHierarchyKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_51f);
        }
        iVar24 = local_4f8.ArrayNum;
        if (pFVar54 + -0x1c == pFVar9 + (longlong)iVar23 * 0x28) break;
        if (local_4f8.AllocatorInstance.Data !=
            local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayNum * 0x28) {
          pFVar49 = local_4f8.AllocatorInstance.Data + 0xc;
          do {
            if ((*pFVar49 == pFVar54[-0x10]) && (pFVar49[0x18] == pFVar54[8])) {
              if (*pFVar49 == (FScriptContainerElement)0x0) {
                if (pFVar49[0x18] == (FScriptContainerElement)0x0) goto LAB_14a255518;
                if ((*(longlong *)(pFVar49 + 0x10) == *(longlong *)pFVar54) &&
                   (*(longlong *)(pFVar49 + 8) == *(longlong *)(pFVar54 + -8))) {
                  bVar18 = pFVar49[4] == pFVar54[-0xc];
                  goto LAB_14a25546a;
                }
LAB_14a255470:
                bVar18 = false;
              }
              else {
                if (*(longlong *)(pFVar49 + -8) != *(longlong *)(pFVar54 + -0x18))
                goto LAB_14a255470;
                bVar18 = pFVar49[-0xc] == pFVar54[-0x1c];
LAB_14a25546a:
                if (!bVar18) goto LAB_14a255470;
                bVar18 = true;
              }
              if (bVar18) goto LAB_14a255518;
            }
            pFVar50 = pFVar49 + 0x1c;
            pFVar49 = pFVar49 + 0x28;
          } while (pFVar50 != local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayNum * 0x28
                  );
        }
        if (pFVar54[-0x10] != (FScriptContainerElement)0x0) {
          pFVar43 = FRigHierarchyKey::GetElement((FRigHierarchyKey *)(pFVar54 + -0x1c));
          iVar24 = URigHierarchy::GetIndex(pUVar7,pFVar43,true);
          pFVar44 = URigHierarchy::Get(pUVar7,iVar24);
          if (pFVar44 != (FRigBaseElement *)0x0) {
            local_360.Component = (FRigBaseComponent *)0x0;
            local_360.Element = pFVar44;
            URigHierarchy::Notify(pUVar7,ElementSelected,&local_360);
          }
        }
        if (pFVar54[8] != (FScriptContainerElement)0x0) {
          pFVar45 = FRigHierarchyKey::GetComponent((FRigHierarchyKey *)(pFVar54 + -0x1c));
          pFVar46 = URigHierarchy::FindComponent(pUVar7,pFVar45);
          if (pFVar46 != (FRigBaseComponent *)0x0) {
            local_350.Element = (FRigBaseElement *)0x0;
            local_350.Component = pFVar46;
            URigHierarchy::Notify(pUVar7,ComponentSelected,&local_350);
          }
        }
LAB_14a255518:
        pFVar54 = pFVar54 + 0x28;
      }
      pFVar54 = local_4f8.AllocatorInstance.Data + 0x1c;
      pFVar9 = local_4f8.AllocatorInstance.Data + (longlong)local_4f8.ArrayNum * 0x28;
      while( true ) {
        if (local_4f8.ArrayNum != iVar24) {
          local_51e = 0;
          `TCheckedPointerIterator<FRigHierarchyKey_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_51e);
        }
        if (pFVar54 + -0x1c == pFVar9) break;
        pFVar50 = (pTVar40->AllocatorInstance).Data;
        pFVar49 = pFVar50 + (longlong)pTVar40->ArrayNum * 0x28;
        if (pFVar50 != pFVar49) {
          do {
            if ((pFVar50[0xc] == pFVar54[-0x10]) && (pFVar50[0x24] == pFVar54[8])) {
              if (pFVar50[0xc] == (FScriptContainerElement)0x0) {
                if (pFVar50[0x24] == (FScriptContainerElement)0x0) goto LAB_14a255664;
                if ((*(longlong *)(pFVar50 + 0x1c) == *(longlong *)pFVar54) &&
                   (*(longlong *)(pFVar50 + 0x14) == *(longlong *)(pFVar54 + -8))) {
                  bVar18 = pFVar50[0x10] == pFVar54[-0xc];
                  goto LAB_14a2555ba;
                }
LAB_14a2555c0:
                bVar18 = false;
              }
              else {
                if (*(longlong *)(pFVar50 + 4) != *(longlong *)(pFVar54 + -0x18))
                goto LAB_14a2555c0;
                bVar18 = *pFVar50 == pFVar54[-0x1c];
LAB_14a2555ba:
                if (!bVar18) goto LAB_14a2555c0;
                bVar18 = true;
              }
              if (bVar18) goto LAB_14a255664;
            }
            pFVar50 = pFVar50 + 0x28;
          } while (pFVar50 != pFVar49);
        }
        if (pFVar54[-0x10] != (FScriptContainerElement)0x0) {
          pFVar43 = FRigHierarchyKey::GetElement((FRigHierarchyKey *)(pFVar54 + -0x1c));
          iVar23 = URigHierarchy::GetIndex(pUVar7,pFVar43,true);
          pFVar44 = URigHierarchy::Get(pUVar7,iVar23);
          if (pFVar44 != (FRigBaseElement *)0x0) {
            local_340.Component = (FRigBaseComponent *)0x0;
            local_340.Element = pFVar44;
            URigHierarchy::Notify(pUVar7,ElementDeselected,&local_340);
          }
        }
        if (pFVar54[8] != (FScriptContainerElement)0x0) {
          pFVar45 = FRigHierarchyKey::GetComponent((FRigHierarchyKey *)(pFVar54 + -0x1c));
          pFVar46 = URigHierarchy::FindComponent(pUVar7,pFVar45);
          if (pFVar46 != (FRigBaseComponent *)0x0) {
            local_330.Element = (FRigBaseElement *)0x0;
            local_330.Component = pFVar46;
            URigHierarchy::Notify(pUVar7,ComponentDeselected,&local_330);
          }
        }
LAB_14a255664:
        pFVar54 = pFVar54 + 0x28;
      }
      pFVar28 = local_500;
      FVar56 = local_518;
      if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4f8.AllocatorInstance.Data);
        pFVar28 = local_500;
        FVar56 = local_518;
      }
    }
    else {
LAB_14a255910:
      bVar18 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
      pFVar28 = local_500;
      if (bVar18) {
        *(int *)&this->_padding_ = (int)this->_padding_ + 1;
        TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                   *)&this->_padding_,(URigVMHost *)this,local_500);
        *(int *)&this->_padding_ = (int)this->_padding_ + -1;
      }
      if (((local_51d != '\0') || ((cVar15 != '\0' && (!bVar21)))) &&
         (bVar18 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                             ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                              &this->PreForwardsSolveEvent), bVar18)) {
        this->PreForwardsSolveBracket = this->PreForwardsSolveBracket + 1;
        FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
        TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                   *)&this->PreForwardsSolveEvent,this,&local_408);
        this->PreForwardsSolveBracket = this->PreForwardsSolveBracket + -1;
      }
      uVar17 = (**(code **)(this->_padding_ + 0x300))(this,pFVar28);
      if (bVar58) {
        ApplyElementOverrides(this);
        (**(code **)(this->_padding_ + 0x480))(this);
      }
      if (((local_51c != '\0') || ((cVar15 != '\0' && (!bVar12)))) &&
         (bVar18 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                             ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                              &this->PostForwardsSolveEvent), bVar18)) {
        this->PostForwardsSolveBracket = this->PostForwardsSolveBracket + 1;
        FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
        TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>::
        Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                   *)&this->PostForwardsSolveEvent,this,&local_400);
        this->PostForwardsSolveBracket = this->PostForwardsSolveBracket + -1;
      }
    }
    if ((!bVar16) || (bVar19)) {
      *(undefined4 *)&this->_padding_ = 0;
    }
    bVar16 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
    if ((bVar16) &&
       ((cVar15 = (**(code **)(this->_padding_ + 0x490))(this), cVar15 == '\0' ||
        (FLazyName::Resolve(&FRigUnit_InverseExecution::EventName), *pFVar28 != local_3f8)))) {
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
      Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                 *)&this->_padding_,(URigVMHost *)this,pFVar28);
      *(int *)&this->_padding_ = (int)this->_padding_ + -1;
    }
    iVar23 = this->ControlUndoBracketIndex;
    while (0 < iVar23) {
      local_388.Key.Type = None;
      local_388.LocalTime = (float)*(double *)&((FControlRigExecuteContext *)FVar56)->field_0x28;
      local_388.Key.Name.ComparisonIndex.Value = 0;
      local_388.Key.Name.Number = 0;
      local_388.Payload = (void *)0x0;
      local_388.SourceEventName = *pFVar28;
      local_388.Event = CloseUndoBracket;
      HandleHierarchyEvent(this,pUVar7,&local_388);
      iVar23 = this->ControlUndoBracketIndex;
    }
    lVar13 = *(longlong *)&((FControlRigExecuteContext *)FVar56)->field_0x58;
    if (((lVar13 != 0) &&
        (lVar10 = *(longlong *)&((FControlRigExecuteContext *)FVar56)->field_0x60, lVar10 != 0)) &&
       (bVar19)) {
      pFVar55 = (ForAnyElementType *)(lVar13 + 8);
      if ((pFVar55 == (ForAnyElementType *)(lVar10 + 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      iVar23 = *(int *)(lVar10 + 0x10);
      if (iVar23 != 0) {
        iVar24 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xd0,0x10,iVar23,pFVar55,(int *)(lVar13 + 0x10),(int *)(lVar13 + 0x14));
        ConstructItems<FRigVMDrawInstruction,FRigVMDrawInstruction,int>
                  (pFVar55->Data + (longlong)iVar24 * 0xd0,
                   (FRigVMDrawInstruction *)((ForAnyElementType *)(lVar10 + 8))->Data,iVar23);
      }
      local_4e8 = 0;
      local_4e4.ObjectIndex = 0;
      local_4e4.ObjectSerialNumber = 0;
      if (pUVar7 != (URigHierarchy *)0x0) {
        local_4e8 = pUVar7->bEnableCacheValidityCheck;
        pUVar7->bEnableCacheValidityCheck = false;
        local_3f0 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FWeakObjectPtr::operator=(&local_4e4,(FObjectPtr)&local_3f0);
      }
      local_308 = &local_320;
      local_310 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UControlRig::Execute'::__l244::<lambda_3>,bool,FRigControlElement_*>
                  ::Call;
      local_320 = this;
      local_318 = pUVar7;
      URigHierarchy::ForEach<FRigControlElement>
                (pUVar7,(TFunctionRef<bool___cdecl(FRigControlElement_*)> *)&local_310);
      bVar16 = FWeakObjectPtr::IsValid(&local_4e4);
      if (bVar16) {
        pUVar26 = FWeakObjectPtr::Get(&local_4e4);
        pUVar26[0x20].field_0x18 = local_4e8;
      }
    }
    if (local_51b != '\0') {
      this->bInteractionJustBegan = false;
    }
    if (bVar57) {
      FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
      URigVMHost::RemoveRunOnceEvent((URigVMHost *)this,&local_3e8);
    }
    if (bVar58) {
      FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
      URigVMHost::RemoveRunOnceEvent((URigVMHost *)this,&local_3e0);
    }
  }
  else {
    if (2 < (byte)LogControlRig._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_2b8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
LAB_14a255a7f:
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
    }
LAB_14a255a89:
    uVar17 = 0;
  }
  local_4c8->bIsControllerAvailable = bVar20;
  TFunction<void___cdecl(FName_const_&)>::operator=
            (local_188,(TFunction<void___cdecl(FName_const_&)> *)local_178);
  if (local_178._0_8_ != 0) {
    plVar39 = (longlong *)(local_178 + 0x10);
    if (local_150 != (longlong *)0x0) {
      plVar39 = local_150;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if ((local_508 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_508 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_508 & 4) != 0) {
    FThreadStats::AddMessage(local_510,CycleScopeEnd);
  }
  local_508 = 0;
  FStatsHierarchical::EndMeasurement();
  return (bool)uVar17;
}

// Execute_Internal @ 14a2592d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UControlRig::Execute_Internal(UControlRig *this,FName *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  URigHierarchy *this_00;
  FRigVMExtendedExecuteContext *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  FRigModuleSettings *pFVar9;
  FRigVMExtendedExecuteContext *this_01;
  FControlRigExecuteContext *pFVar10;
  ForAnyElementType FVar11;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FRigHierarchyRedirectorGuard local_a8;
  FControlRigExecuteContextRigModuleGuard local_98;
  
  cVar5 = (**(code **)(this->_padding_ + 0x308))();
  if (cVar5 == '\0') {
    return false;
  }
  lVar8 = 400;
  if ((int)this->_padding_ != 0) {
    lVar8 = 0x1a0;
  }
  if ((*(int *)((longlong)&this->_padding_ + lVar8) < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if ((char)this->_padding_ != '\0') {
    uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
    uVar2 = (undefined4)this->_padding_;
    *(undefined4 *)&this->_padding_ = uVar2;
    cVar5 = (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
    *(undefined4 *)&this->_padding_ = uVar2;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
    if (cVar5 == '\0') {
      return false;
    }
  }
  pFVar9 = GetRigModuleSettings(this);
  if ((1 < (pFVar9->Identifier).Name.Data.ArrayNum) &&
     (FLazyName::Resolve(&FRigUnit_ConnectorExecution::EventName), *param_1 != local_res8)) {
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    bVar6 = AllConnectorsAreResolved(this,&local_d8,(FRigElementKey *)0x0);
    FVar11.Data = local_d8.Data.AllocatorInstance.Data;
    if (!bVar6) goto LAB_14a2595bd;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ == 0) {
    return false;
  }
  this_01 = URigVMHost::GetRigVMExtendedExecuteContext((URigVMHost *)this);
  cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x2c0))();
  if (cVar5 == '\0') {
    bVar6 = URigVM::IsContextValidForExecution((URigVM *)this->_padding_,this_01);
    if (((bVar6) && (bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this), bVar6)) &&
       (bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this->_padding_), bVar6))
    goto LAB_14a2594b9;
    if ((byte)LogControlRig._0_1_ < 3) {
      return false;
    }
    local_res20 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res20,&local_b8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    FVar11.Data = local_b8.Data.AllocatorInstance.Data;
  }
  else {
    bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this);
    if ((bVar6) && (bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this->_padding_), bVar6)) {
LAB_14a2594b9:
      this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
      pFVar3 = this_00->ExecuteContext;
      EnterCriticalSection((LPCRITICAL_SECTION)&this_00->ExecuteContextLock);
      this_00->ExecuteContext = this_01;
      pFVar10 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(this_01);
      FControlRigExecuteContextRigModuleGuard::FControlRigExecuteContextRigModuleGuard
                (&local_98,pFVar10,this);
      FRigHierarchyRedirectorGuard::FRigHierarchyRedirectorGuard(&local_a8,this);
      cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x348))
                        ((longlong *)this->_padding_,this_01,param_1);
      *local_a8.Guard.RefValue = local_a8.Guard.OriginalValue;
      FControlRigExecuteContextRigModuleGuard::~FControlRigExecuteContextRigModuleGuard(&local_98);
      this_00->ExecuteContext = pFVar3;
      URigHierarchy::SendQueuedNotifications(this_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this_00->ExecuteContextLock);
      return cVar5 != '\0';
    }
    if ((byte)LogControlRig._0_1_ < 3) {
      return false;
    }
    local_res18 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res18,&local_c8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
LAB_14a2595bd:
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return false;
}

// FOnControlSelectedBP_DelegateWrapper @ 14a25a020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRig::FOnControlSelectedBP_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UControlRig *param_2,
          FRigControlElement *param_3,bool param_4)

{
  undefined1 auStack_618 [32];
  UControlRig *local_5f8 [2];
  FRigControlElement local_5e8;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_618;
  FRigMultiParentElement::FRigMultiParentElement
            ((FRigMultiParentElement *)&local_5e8,(URigHierarchy *)0x0,Control);
  local_5e8._0_8_ = &___7FRigControlElement__6B_;
  FRigControlSettings::FRigControlSettings((FRigControlSettings *)((longlong)&local_5e8 + 0x230));
  local_5e8.PreferredEulerAngles.Current.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_5e8.PreferredEulerAngles.Current.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5e8.PreferredEulerAngles.RotationOrder = YZX;
  local_5e8.PreferredEulerAngles.Initial.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_5e8.PreferredEulerAngles.Initial.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5e8.PreferredEulerAngles.Current.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_5e8.PreferredEulerAngles.Initial.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_5e8.OffsetStorage.Current.Local.StorageIndex = -1;
  local_5e8.OffsetStorage.Current.Local.Storage = (TTransform<double> *)0x0;
  local_5e8.OffsetStorage.Current.Global.StorageIndex = -1;
  local_5e8.OffsetStorage.Current.Global.Storage = (TTransform<double> *)0x0;
  local_5e8.OffsetStorage.Initial.Local.StorageIndex = -1;
  local_5e8.OffsetStorage.Initial.Local.Storage = (TTransform<double> *)0x0;
  local_5e8.OffsetStorage.Initial.Global.StorageIndex = -1;
  local_5e8.OffsetStorage.Initial.Global.Storage = (TTransform<double> *)0x0;
  local_5e8.OffsetDirtyState.Current.Global.StorageIndex = -1;
  local_5e8.OffsetDirtyState.Current.Global.Storage = (bool *)0x0;
  local_5e8.OffsetDirtyState.Current.Local.StorageIndex = -1;
  local_5e8.OffsetDirtyState.Current.Local.Storage = (bool *)0x0;
  local_5e8.OffsetDirtyState.Initial.Global.StorageIndex = -1;
  local_5e8.OffsetDirtyState.Initial.Global.Storage = (bool *)0x0;
  local_5e8.OffsetDirtyState.Initial.Local.StorageIndex = -1;
  local_5e8.OffsetDirtyState.Initial.Local.Storage = (bool *)0x0;
  local_5e8.ShapeStorage.Current.Local.StorageIndex = -1;
  local_5e8.ShapeStorage.Current.Local.Storage = (TTransform<double> *)0x0;
  local_5e8.ShapeStorage.Current.Global.StorageIndex = -1;
  local_5e8.ShapeStorage.Current.Global.Storage = (TTransform<double> *)0x0;
  local_5e8.ShapeStorage.Initial.Local.StorageIndex = -1;
  local_5e8.ShapeStorage.Initial.Local.Storage = (TTransform<double> *)0x0;
  local_5e8.ShapeStorage.Initial.Global.StorageIndex = -1;
  local_5e8.ShapeStorage.Initial.Global.Storage = (TTransform<double> *)0x0;
  local_5e8.ShapeDirtyState.Current.Global.StorageIndex = -1;
  local_5e8.ShapeDirtyState.Current.Global.Storage = (bool *)0x0;
  local_5e8.ShapeDirtyState.Current.Local.StorageIndex = -1;
  local_5e8.ShapeDirtyState.Current.Local.Storage = (bool *)0x0;
  local_5e8.ShapeDirtyState.Initial.Global.StorageIndex = -1;
  local_5e8.ShapeDirtyState.Initial.Global.Storage = (bool *)0x0;
  local_5e8.ShapeDirtyState.Initial.Local.StorageIndex = -1;
  local_5e8.ShapeDirtyState.Initial.Local.Storage = (bool *)0x0;
  local_5e8._0_8_ = &___7FRigControlElement__6B_;
  local_5f8[0] = param_2;
  FRigControlElement::operator=(&local_5e8,param_3);
  local_58 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_5f8);
  local_5e8._0_8_ = &___7FRigControlElement__6B_;
  FRigControlSettings::~FRigControlSettings((FRigControlSettings *)((longlong)&local_5e8 + 0x230));
  FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)&local_5e8);
  return;
}

// FindControl @ 14a25af50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlElement * __thiscall UControlRig::FindControl(UControlRig *this,FName *param_1)

{
  URigHierarchy *this_00;
  bool bVar1;
  int iVar2;
  FRigControlElement *pFVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  FRigElementKey local_18;
  
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    local_18.Name = *param_1;
    local_18.Type = Control;
    iVar2 = URigHierarchy::GetIndex(this_00,&local_18,true);
    pFVar3 = (FRigControlElement *)URigHierarchy::Get(this_00,iVar2);
    if (pFVar3 != (FRigControlElement *)0x0) {
      lVar4 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
      pUVar5 = FRigControlElement::StaticStruct();
      if (pUVar5 != (UScriptStruct *)0x0) {
        iVar2 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return pFVar3;
        }
      }
    }
  }
  return (FRigControlElement *)0x0;
}

// FindControlRigs @ 14a25b000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UControlRig_*,TSizedDefaultAllocator<32>_> * __cdecl
UControlRig::FindControlRigs
          (TArray<UControlRig_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1,TSubclassOf<UControlRig> param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  TArray<UControlRig_*,TSizedDefaultAllocator<32>_> *pTVar12;
  UObject *pUVar13;
  longlong lVar14;
  UObjectBaseUtility *local_48;
  TObjectIterator<UControlRig> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar9) ||
       (pUVar11 = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
       &pUVar10->_padding_)) {
      pUVar10 = Z_Construct_UClass_AActor_NoRegister();
      pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar10);
    }
    local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ObjectArray.ArrayNum = 0;
    local_40.ObjectArray.ArrayMax = 0;
    local_40.Index = 0xffffffff;
    EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar10 = StaticClass();
    GetObjectsOfClass(pUVar10,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                      EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UControlRig>::Advance(&local_40);
    while ((lVar14 = (longlong)local_40.Index, -1 < local_40.Index &&
           (local_40.Index < local_40.ObjectArray.ArrayNum))) {
      uVar8 = 0;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar8 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<UControlRig_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      local_48 = *(UObjectBaseUtility **)(local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
      lVar14 = *(longlong *)param_2.Class.field0_0x0;
      if ((lVar14 == 0) || (pUVar10 = StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14a25b1e5:
        bVar6 = UObjectBaseUtility::IsInOuter(local_48,param_1);
        if (!bVar6) {
          if (pUVar11 != (UObject *)0x0) {
            bVar6 = UObjectBaseUtility::IsInOuter(local_48,pUVar11);
            if (bVar6) goto LAB_14a25b1f5;
            pTVar3 = *(TReferenceControllerBase<1> **)&local_48[0x17].field_0x10;
            plVar4 = *(longlong **)&local_48[0x17].field_0x8;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (((plVar4 != (longlong *)0x0) &&
                (pUVar13 = (UObject *)(**(code **)(*plVar4 + 0x30))(), pUVar13 != (UObject *)0x0))
               && (pUVar13 == pUVar11)) {
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
                  ((FScriptContainerElement *)&local_48 <
                   pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar12 = (TArray<UControlRig_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar12;
              }
              iVar9 = __return_storage_ptr__->ArrayNum;
              if (iVar9 == __return_storage_ptr__->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar9 + 1;
              *(UObjectBaseUtility **)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
          }
          goto LAB_14a25b390;
        }
LAB_14a25b1f5:
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TArray<UControlRig_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar12;
        }
        iVar9 = __return_storage_ptr__->ArrayNum;
        if (iVar9 == __return_storage_ptr__->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        *(UObjectBaseUtility **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
        TObjectIterator<UControlRig>::Advance(&local_40);
      }
      else {
        iVar9 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar14 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((!bVar6) || (lVar14 = *(longlong *)param_2.Class.field0_0x0, lVar14 == 0))
        goto LAB_14a25b1e5;
        lVar1 = *(longlong *)&local_48->field_0x10;
        pUVar10 = StaticClass();
        if (pUVar10 != (UClass *)0x0) {
          iVar9 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar14 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (lVar14 = *(longlong *)param_2.Class.field0_0x0, lVar14 != 0)) {
            if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar14 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                != lVar14 + 0x30)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_14a25b1e5;
          }
        }
LAB_14a25b390:
        TObjectIterator<UControlRig>::Advance(&local_40);
      }
    }
    if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindInfluenceMap @ 14a25b3e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigInfluenceMap * __thiscall UControlRig::FindInfluenceMap(UControlRig *this,FName *param_1)

{
  UControlRig *pUVar1;
  FRigInfluenceMap *pFVar2;
  
  pUVar1 = UClass::GetDefaultObject<UControlRig>((UClass *)this->_padding_);
  if (pUVar1 != (UControlRig *)0x0) {
    pFVar2 = FRigInfluenceMapPerEvent::Find(&pUVar1->Influences,param_1);
    return pFVar2;
  }
  return (FRigInfluenceMap *)0x0;
}

// GetAssetUserDataArray @ 14a25e7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UControlRig::GetAssetUserDataArray(UControlRig *this)

{
  longlong *plVar1;
  FName FVar2;
  FName FVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  UDataAssetLink *this_00;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  undefined8 *puVar13;
  TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *pTVar14;
  TTuple<FName,TObjectPtr<UDataAssetLink>_> *pTVar15;
  UPackage *pUVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  FString *pFVar19;
  longlong *plVar20;
  USkeletalMeshComponent *this_01;
  USkeletalMesh *pUVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  FName *pFVar25;
  FString *pFVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  UControlRig *pUVar29;
  UControlRig *pUVar30;
  FName *this_02;
  undefined1 auStackY_228 [32];
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce;
  undefined1 local_1cd;
  undefined1 local_1cc [4];
  UControlRig *local_1c8;
  UObject *local_1c0;
  UObject *local_1b8;
  UObject *local_1b0;
  UObject *local_1a8;
  UObject *local_1a0;
  USkeletalMesh *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  int local_170;
  FName *local_168;
  int local_160;
  TPairInitializer<FName_const_&,TObjectPtr<UDataAssetLink>_&&> local_158;
  UObject *local_148;
  UObject *local_140;
  undefined1 local_138 [24];
  FUtf8String local_120;
  FName *local_110;
  UObject **local_108;
  FString local_100;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((*(uint *)&this[-1].RigModulePrefix.Data.AllocatorInstance.Data >> 4 & 1) != 0) {
    return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  }
  puVar24 = &(this->ElementKeyRedirector).ExternalKeys.field_0x30;
  iVar10 = *(int *)&(this->ElementKeyRedirector).ExternalKeys.field_0x3c;
  puVar28 = &(this->ElementKeyRedirector).ExternalKeys.field_0x3c;
  plVar20 = (longlong *)0x0;
  puVar4 = &(this->ElementKeyRedirector).ExternalKeys.field_0x38;
  *(undefined4 *)puVar4 = 0;
  local_1c8 = this;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)puVar24,0,(int *)puVar28);
  }
  lVar22 = *(longlong *)(*(longlong *)&this[-1].RigModulePrefix.Data.ArrayNum + 0x110);
  if (lVar22 != 0) {
    pUVar12 = StaticClass();
    iVar10 = (int)pUVar12->_padding_;
    if ((iVar10 <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar10 * 8)
        == &pUVar12->_padding_)) {
      puVar13 = (undefined8 *)(**(code **)(*(longlong *)(lVar22 + 0x28) + 0x30))(lVar22 + 0x28);
      if (((undefined8 *)puVar24 == puVar13) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar14;
      }
      iVar10 = *(int *)(puVar13 + 1);
      if (iVar10 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar10,(ForAnyElementType *)puVar24,(int *)puVar4,(int *)puVar28);
        ConstructItems<TObjectPtr<UAssetUserData>,UAssetUserData_*,int>
                  ((void *)(*(longlong *)puVar24 + (longlong)iVar9 * 8),(UAssetUserData **)*puVar13,
                   iVar10);
      }
      goto LAB_14a25e999;
    }
  }
  if (((longlong *)puVar24 == &this->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar14;
  }
  iVar10 = (int)this->_padding_;
  if (iVar10 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,(ForAnyElementType *)puVar24,(int *)puVar4,(int *)puVar28);
    ConstructItems<TObjectPtr<UAssetUserData>,TObjectPtr<UAssetUserData>,int>
              ((void *)(*(longlong *)puVar24 + (longlong)iVar9 * 8),
               (TObjectPtr<UAssetUserData> *)this->_padding_,iVar10);
  }
LAB_14a25e999:
  puVar28 = &(this->ExternalVariableDataAssetLinks).field_0x28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)puVar28,&local_f0);
  if (((*(int *)&(this->ExternalVariableDataAssetLinks).field_0x38 == 0) ||
      (plVar1 = *(longlong **)&(this->ExternalVariableDataAssetLinks).field_0x30,
      plVar1 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar1 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)puVar28,&local_d8);
    if (*(int *)&(this->ExternalVariableDataAssetLinks).field_0x38 != 0) {
      plVar20 = *(longlong **)&(this->ExternalVariableDataAssetLinks).field_0x30;
    }
    (**(code **)(*plVar20 + 0x60))(plVar20,&local_178);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    if (((ForAnyElementType *)puVar24 == &local_178) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar14;
    }
    if (local_170 != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,local_170,(ForAnyElementType *)puVar24,
                          (int *)&(this->ElementKeyRedirector).ExternalKeys.field_0x38,
                          (int *)&(this->ElementKeyRedirector).ExternalKeys.field_0x3c);
      memmove((void *)(*(longlong *)puVar24 + (longlong)iVar10 * 8),local_178.Data,
              (longlong)local_170 << 3);
      local_170 = 0;
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  (**(code **)(*(longlong *)&this[-1].RigModuleSettings.ExposedConnectors.ArrayNum + 0x378))
            (&this[-1].RigModuleSettings.ExposedConnectors.ArrayNum,&local_168,0);
  uVar23 = (ulonglong)local_160;
  local_198 = (USkeletalMesh *)CONCAT44(local_198._4_4_,local_160);
  pFVar25 = local_168 + uVar23 * 6;
  puVar28 = &(this->ElementKeyRedirector).ExternalKeys.field_0x30;
  pUVar30 = this;
  this_02 = local_168;
  do {
    if (local_160 != (int)uVar23) {
      local_1d0 = 0;
      `TCheckedPointerIterator<FRigVMExternalVariable,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d0);
    }
    if (this_02 == pFVar25) {
      pUVar12 = StaticClass();
      pUVar18 = UObjectBaseUtility::GetTypedOuter
                          ((UObjectBaseUtility *)
                           &pUVar30[-1].RigModuleSettings.ExposedConnectors.ArrayNum,pUVar12);
      if ((pUVar18 != (UObject *)0x0) &&
         (plVar20 = (longlong *)(**(code **)(*(longlong *)(pUVar18 + 1) + 0x30))(pUVar18 + 1),
         pUVar29 = local_1c8, pUVar30 = local_1c8, plVar20 != (longlong *)0x0)) {
        puVar27 = (undefined8 *)*plVar20;
        lVar22 = plVar20[1];
        puVar28 = &(local_1c8->ElementKeyRedirector).ExternalKeys.field_0x30;
        puVar13 = puVar27 + (int)lVar22;
        while( true ) {
          if ((int)plVar20[1] != (int)lVar22) {
            local_1cf = 0;
            `TCheckedPointerIterator<UAssetUserData_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_1cf);
          }
          pUVar30 = local_1c8;
          if (puVar27 == puVar13) break;
          local_1b8 = (UObject *)*puVar27;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_1b8);
          }
          if (((*(UObject ***)puVar28 <= &local_1b8) &&
              (&local_1b8 <
               *(UObject ***)puVar28 +
               *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar14;
          }
          iVar10 = *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x38;
          if (iVar10 == *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)puVar28,
                                (int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c);
          }
          *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x38 = iVar10 + 1;
          *(UObject **)(*(longlong *)puVar28 + (longlong)iVar10 * 8) = local_1b8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_1b8);
          }
          puVar27 = puVar27 + 1;
        }
      }
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar30->InteractionBracket);
      if ((bVar7) &&
         (this_01 = (USkeletalMeshComponent *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar30->InteractionBracket),
         this_01 != (USkeletalMeshComponent *)0x0)) {
        pUVar12 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar10 = (int)pUVar12->_padding_;
        if ((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar12->_padding_)) {
          pUVar21 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
          pUVar29 = local_1c8;
          local_198 = pUVar21;
          if (pUVar21 != (USkeletalMesh *)0x0) {
            lVar22 = (**(code **)(pUVar21->_padding_ + 0x408))(pUVar21);
            if ((lVar22 != 0) &&
               (plVar20 = (longlong *)
                          (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x30))(lVar22 + 0x28),
               plVar20 != (longlong *)0x0)) {
              puVar27 = (undefined8 *)*plVar20;
              puVar28 = &(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x30;
              lVar22 = plVar20[1];
              puVar13 = puVar27 + (int)lVar22;
              while( true ) {
                if ((int)plVar20[1] != (int)lVar22) {
                  local_1ce = 0;
                  `TCheckedPointerIterator<UAssetUserData_*_const,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_1ce);
                }
                pUVar21 = local_198;
                if (puVar27 == puVar13) break;
                local_1b0 = (UObject *)*puVar27;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_1b0 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_1b0);
                }
                if (((*(UObject ***)puVar28 <= &local_1b0) &&
                    (&local_1b0 <
                     *(UObject ***)puVar28 +
                     *(int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x3c)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                  return pTVar14;
                }
                iVar10 = *(int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x38;
                if (iVar10 == *(int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x3c) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)puVar28,
                                      (int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.
                                              field_0x3c);
                }
                *(int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x38 = iVar10 + 1;
                *(UObject **)(*(longlong *)puVar28 + (longlong)iVar10 * 8) = local_1b0;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_1b0 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_1b0);
                }
                puVar27 = puVar27 + 1;
              }
            }
            plVar20 = (longlong *)(**(code **)(pUVar21->_padding_ + 0x30))();
            pUVar29 = local_1c8;
            if (plVar20 != (longlong *)0x0) {
              puVar27 = (undefined8 *)*plVar20;
              puVar28 = &(local_1c8->ElementKeyRedirector).ExternalKeys.field_0x30;
              lVar22 = plVar20[1];
              puVar13 = puVar27 + (int)lVar22;
              while( true ) {
                if ((int)plVar20[1] != (int)lVar22) {
                  local_1cd = 0;
                  `TCheckedPointerIterator<UAssetUserData_*_const,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_1cd);
                }
                if (puVar27 == puVar13) break;
                local_1a8 = (UObject *)*puVar27;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_1a8 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_1a8);
                }
                if (((*(UObject ***)puVar28 <= &local_1a8) &&
                    (&local_1a8 <
                     *(UObject ***)puVar28 +
                     *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                  return pTVar14;
                }
                iVar10 = *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x38;
                if (iVar10 == *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)puVar28,
                                      (int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.
                                              field_0x3c);
                }
                *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x38 = iVar10 + 1;
                *(UObject **)(*(longlong *)puVar28 + (longlong)iVar10 * 8) = local_1a8;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_1a8 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_1a8);
                }
                puVar27 = puVar27 + 1;
              }
            }
          }
          plVar20 = (longlong *)(**(code **)(this_01->_padding_ + 0x30))(&this_01->_padding_);
          pUVar30 = local_1c8;
          if (plVar20 != (longlong *)0x0) {
            puVar27 = (undefined8 *)*plVar20;
            puVar28 = &(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x30;
            lVar22 = plVar20[1];
            puVar13 = puVar27 + (int)lVar22;
            while( true ) {
              if ((int)plVar20[1] != (int)lVar22) {
                local_1cc[0] = 0;
                `TCheckedPointerIterator<UAssetUserData_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_1cc);
              }
              pUVar30 = local_1c8;
              if (puVar27 == puVar13) break;
              local_1a0 = (UObject *)*puVar27;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_1a0 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_1a0);
              }
              if (((*(UObject ***)puVar28 <= &local_1a0) &&
                  (&local_1a0 <
                   *(UObject ***)puVar28 +
                   *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar14;
              }
              iVar10 = *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x38;
              if (iVar10 == *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)puVar28,
                                    (int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x3c)
                ;
              }
              *(int *)&(pUVar29->ElementKeyRedirector).ExternalKeys.field_0x38 = iVar10 + 1;
              *(UObject **)(*(longlong *)puVar28 + (longlong)iVar10 * 8) = local_1a0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_1a0 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_1a0);
              }
              puVar27 = puVar27 + 1;
            }
          }
        }
      }
      if (local_168 != (FName *)0x0) {
        FMemory::Free(local_168);
      }
      return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)
             &(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x30;
    }
    if ((this_02[5] != (FName)0x0) && (FVar2 = this_02[3], FVar2 != (FName)0x0)) {
      pUVar12 = Z_Construct_UClass_UClass_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((iVar10 <= *(int *)(*(longlong *)((longlong)FVar2 + 0x10) + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar2 + 0x10) + 0x30) + (longlong)iVar10 * 8) ==
           &pUVar12->_padding_ &&
          (pUVar12 = Z_Construct_UClass_UDataAsset_NoRegister(), pUVar12 != (UClass *)0x0)))) {
        iVar10 = (int)pUVar12->_padding_;
        if ((*(int *)((longlong)FVar2 + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar12->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          FVar2 = this_02[5];
          if (((*(longlong *)FVar2 != 0) && ((*(uint *)(*(longlong *)FVar2 + 8) >> 0x1e & 1) == 0))
             && (*(longlong *)(*(longlong *)FVar2 + 0x18) != 0)) {
            pTVar15 = TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
                              *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x40,*this_02);
            if ((((pTVar15 != (TTuple<FName,TObjectPtr<UDataAssetLink>_> *)0x0) &&
                 (puVar4 = &pTVar15->field_0x8, puVar4 != (undefined1 *)0x0)) &&
                ((*(longlong *)puVar4 == 0 ||
                 (((*(uint *)(*(longlong *)puVar4 + 8) >> 0x1e & 1) != 0 ||
                  ((*(uint *)(*(longlong *)puVar4 + 8) >> 0xf & 1) != 0)))))) &&
               (FVar3 = *this_02, local_158.Value = (TObjectPtr<UDataAssetLink> *)FVar3,
               *(int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x48 !=
               *(int *)&(pUVar30->ExternalVariableDataAssetLinks).field_0xc)) {
              uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
              TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
                                   *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x40,
                                  FVar3.Number + uVar11,(FName *)&local_158.Value);
            }
            FVar3 = *this_02;
            uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
            if (*(int *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x48 !=
                *(int *)&(pUVar30->ExternalVariableDataAssetLinks).field_0xc) {
              puVar4 = *(undefined1 **)&(pUVar30->ExternalVariableDataAssetLinks).field_0x18;
              puVar24 = &(pUVar30->ExternalVariableDataAssetLinks).field_0x10;
              if (puVar4 != (undefined1 *)0x0) {
                puVar24 = puVar4;
              }
              iVar10 = *(int *)(puVar24 +
                               (ulonglong)
                               (*(int *)&(pUVar30->ExternalVariableDataAssetLinks).field_0x20 - 1U &
                               FVar3.Number + uVar11) * 4);
              if (iVar10 != -1) {
                lVar22 = *(longlong *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x40;
                do {
                  if (*(FName *)(lVar22 + (longlong)iVar10 * 0x18) == FVar3) goto LAB_14a25ed68;
                  iVar10 = *(int *)(lVar22 + 0x10 + (longlong)iVar10 * 0x18);
                } while (iVar10 != -1);
              }
            }
            local_190 = 0;
            pUVar12 = Z_Construct_UClass_UDataAssetLink_NoRegister();
            pUVar16 = GetTransientPackage();
            local_188 = 0;
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)pUVar16,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar17 = Z_Construct_UClass_UDataAssetLink_NoRegister();
            CheckIsClassChildOf_Internal(pUVar17,pUVar12);
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_b8,pUVar12);
            local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_b8._56_8_ = (UPackage *)0x0;
            local_b8._16_4_ = 0;
            local_b8._20_4_ = 0;
            local_b8._24_4_ = RF_Transient;
            local_b8._40_8_ = (UObject *)0x0;
            local_b8[0x20] = false;
            local_b8._8_8_ = pUVar16;
            pUVar18 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
            if (local_b8._64_8_ != 0) {
              plVar20 = (longlong *)(local_b8 + 0x50);
              if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
                plVar20 = (longlong *)local_b8._104_8_;
              }
              (**(code **)(*plVar20 + 0x10))();
            }
            local_148 = pUVar18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar18);
            }
            local_108 = &local_148;
            local_110 = this_02;
            TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UDataAssetLink>_&&>_>
                      ((TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
                        *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x40,&local_158,
                       (bool *)&local_110);
            pUVar30 = local_1c8;
LAB_14a25ed68:
            pTVar15 = TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
                              *)&(pUVar30->ElementKeyRedirector).ExternalKeys.field_0x40,*this_02);
            if ((pTVar15 == (TTuple<FName,TObjectPtr<UDataAssetLink>_> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar14;
            }
            pFVar19 = ::FName::ToString(this_02,&local_100);
            lVar22 = *(longlong *)&pTVar15->field_0x8;
            pFVar26 = (FString *)(lVar22 + 0x28);
            if (pFVar26 != pFVar19) {
              pFVar5 = (pFVar26->Data).AllocatorInstance.Data;
              if (pFVar5 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar5);
              }
              (pFVar26->Data).AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
              (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(lVar22 + 0x30) = (pFVar19->Data).ArrayNum;
              *(int *)(lVar22 + 0x34) = (pFVar19->Data).ArrayMax;
              (pFVar19->Data).ArrayNum = 0;
              (pFVar19->Data).ArrayMax = 0;
            }
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
            this_00 = *(UDataAssetLink **)&pTVar15->field_0x8;
            pUVar18 = *(UObject **)FVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar18 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar18);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar18 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar18);
              }
            }
            local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138._16_8_ = 0;
            local_138._8_8_ = 0;
            local_120.Data.ArrayNum = 0;
            local_120.Data.ArrayMax = 0;
            local_138._0_8_ = 0;
            local_180 = 0;
            FUtf8String::Reset(&local_120,0);
            local_140 = pUVar18;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar18);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)local_138,(FObjectPtr)&local_140);
            UDataAssetLink::SetDataAsset(this_00,(TSoftObjectPtr<UDataAsset> *)local_138);
            local_1c0 = *(UObject **)&pTVar15->field_0x8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_1c0 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_1c0);
            }
            puVar4 = &(this->ElementKeyRedirector).ExternalKeys.field_0x3c;
            if (((*(UObject ***)puVar28 <= &local_1c0) &&
                (&local_1c0 < *(UObject ***)puVar28 + *(int *)puVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              pTVar14 = (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar14;
            }
            iVar10 = *(int *)&(this->ElementKeyRedirector).ExternalKeys.field_0x38;
            if (iVar10 == *(int *)puVar4) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)puVar28,(int *)puVar4);
            }
            *(int *)&(this->ElementKeyRedirector).ExternalKeys.field_0x38 = iVar10 + 1;
            *(UObject **)(*(longlong *)puVar28 + (longlong)iVar10 * 8) = local_1c0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_1c0 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_1c0);
            }
          }
        }
      }
    }
    uVar23 = (ulonglong)local_198 & 0xffffffff;
    this_02 = this_02 + 6;
  } while( true );
}

// GetControlCustomization @ 14a2600f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlElementCustomization * __thiscall
UControlRig::GetControlCustomization(UControlRig *this,FRigElementKey *param_1)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  FRigControlElementCustomization *pFVar3;
  FRigControlElement *pFVar4;
  
  if (param_1->Type != Control) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InControl.Type == ERigElementType::Control",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xe01,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigControlElementCustomization *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
           ::Find((TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
                   *)&this->ControlCustomizations,param_1);
  if (pFVar3 == (FRigControlElementCustomization *)0x0) {
    this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    if (this_00 != (URigHierarchy *)0x0) {
      pFVar4 = URigHierarchy::Find<FRigControlElement>(this_00,param_1);
      pFVar3 = (FRigControlElementCustomization *)0x0;
      if (pFVar4 != (FRigControlElement *)0x0) {
        pFVar3 = &(pFVar4->Settings).Customization;
      }
      return pFVar3;
    }
    pFVar3 = (FRigControlElementCustomization *)0x0;
  }
  return pFVar3;
}

// GetControlGlobalTransform @ 14a260310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRig::GetControlGlobalTransform
          (UControlRig *this,TTransform<double> *__return_storage_ptr__,FName *param_1)

{
  URigHierarchy *this_00;
  int iVar1;
  undefined4 local_28;
  FNameEntryId FStack_24;
  uint uStack_20;
  FRigElementKey local_18;
  
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 == (URigHierarchy *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  FStack_24 = (*param_1).ComparisonIndex;
  uStack_20 = (*param_1).Number;
  local_28 = CONCAT31(local_28._1_3_,4);
  local_18.Name.ComparisonIndex.Value = FStack_24.Value;
  local_18._0_4_ = local_28;
  local_18.Name.Number = uStack_20;
  iVar1 = URigHierarchy::GetIndex(this_00,&local_18,true);
  URigHierarchy::GetGlobalTransformByIndex(this_00,__return_storage_ptr__,iVar1,false);
  return __return_storage_ptr__;
}

// GetControlLocalTransform @ 14a260460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRig::GetControlLocalTransform
          (UControlRig *this,TTransform<double> *__return_storage_ptr__,FName *param_1)

{
  URigHierarchy *pUVar1;
  int iVar2;
  FRigBaseElement *pFVar3;
  FRigControlElement *pFVar4;
  FRigControlValue *this_00;
  ERigControlValueType local_res8 [8];
  FRigElementKey local_b8;
  FRigElementKey local_a8;
  FRigControlValue local_98;
  
  pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (pUVar1 == (URigHierarchy *)0x0) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    if (this->bIsAdditive != false) {
      local_b8.Name.ComparisonIndex = (*param_1).ComparisonIndex;
      local_b8.Name.Number = (*param_1).Number;
      local_b8.Type = Control;
      iVar2 = URigHierarchy::GetIndex(pUVar1,&local_b8,true);
      pFVar3 = URigHierarchy::Get(pUVar1,iVar2);
      if ((pFVar3 != (FRigBaseElement *)0x0) &&
         (pFVar4 = Cast<FRigControlElement>(pFVar3), pFVar4 != (FRigControlElement *)0x0)) {
        local_res8[0] = Current;
        this_00 = GetControlValue(this,&local_98,pFVar4,local_res8);
        FRigControlValue::GetAsTransform
                  (this_00,__return_storage_ptr__,(pFVar4->Settings).ControlType,
                   (pFVar4->Settings).PrimaryAxis);
        return __return_storage_ptr__;
      }
    }
    pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    local_b8.Name.ComparisonIndex = (*param_1).ComparisonIndex;
    local_b8.Name.Number = (*param_1).Number;
    local_b8.Type = Control;
    local_a8.Name.ComparisonIndex.Value = local_b8.Name.ComparisonIndex.Value;
    local_a8.Type = Control;
    local_a8._1_3_ = local_b8._1_3_;
    local_a8.Name.Number = local_b8.Name.Number;
    iVar2 = URigHierarchy::GetIndex(pUVar1,&local_a8,true);
    URigHierarchy::GetLocalTransformByIndex(pUVar1,__return_storage_ptr__,iVar2,false);
  }
  return __return_storage_ptr__;
}

// GetControlSpecifiedEulerAngle @ 14a260b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TVector<double> * __thiscall
UControlRig::GetControlSpecifiedEulerAngle
          (UControlRig *this,TVector<double> *__return_storage_ptr__,FRigControlElement *param_1,
          bool param_2)

{
  URigHierarchy *pUVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  FRigControlElement *pFVar6;
  longlong lVar7;
  UScriptStruct *pUVar8;
  TTransform<double> *pTVar9;
  TVector<double> *pTVar10;
  ERigControlValueType local_188 [8];
  FRigElementKey local_180;
  TVector<double>_u_0 local_170;
  FRigElementKey local_158;
  TQuat<double> local_148;
  FRigControlValue local_128;
  TTransform<double> local_98;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->bIsAdditive == false) {
    pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_1 == (FRigControlElement *)0x0) {
      return __return_storage_ptr__;
    }
    if (((!param_2) && (pUVar1->bUsePreferredEulerAngles != false)) &&
       ((param_1->Settings).bUsePreferredRotationOrder != false)) {
      pTVar10 = FRigPreferredEulerAngles::GetAngles
                          (&param_1->PreferredEulerAngles,(TVector<double> *)&local_170._s_0,false,
                           (param_1->Settings).PreferredRotationOrder);
      dVar2 = (pTVar10->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar10->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
      return __return_storage_ptr__;
    }
    URigHierarchy::GetControlPreferredRotator
              (pUVar1,(TRotator<double> *)&local_170._s_0,param_1,param_2);
    goto LAB_14a260d40;
  }
  pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  local_180.Name.ComparisonIndex.Value = (uint)*(undefined8 *)&param_1->field_0x14;
  local_180.Name.Number = (uint)((ulonglong)*(undefined8 *)&param_1->field_0x14 >> 0x20);
  local_180.Type = Control;
  iVar5 = URigHierarchy::GetIndex(pUVar1,&local_180,true);
  pFVar6 = (FRigControlElement *)URigHierarchy::Get(pUVar1,iVar5);
  if (pFVar6 == (FRigControlElement *)0x0) {
LAB_14a260c31:
    pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    local_158.Name.ComparisonIndex.Value = local_180.Name.ComparisonIndex.Value;
    local_158.Type = local_180.Type;
    local_158._1_3_ = local_180._1_3_;
    local_158.Name.Number = local_180.Name.Number;
    iVar5 = URigHierarchy::GetIndex(pUVar1,&local_158,true);
    URigHierarchy::GetControlValueByIndex(pUVar1,&local_128,iVar5,Current);
  }
  else {
    lVar7 = (**(code **)(*(longlong *)pFVar6 + 0x10))(pFVar6);
    pUVar8 = FRigControlElement::StaticStruct();
    if (pUVar8 == (UScriptStruct *)0x0) goto LAB_14a260c31;
    iVar5 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar8->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14a260c31;
    local_188[0] = Current;
    GetControlValue(this,&local_128,pFVar6,local_188);
  }
  pTVar9 = FRigControlValue::GetAsTransform
                     (&local_128,&local_98,(param_1->Settings).ControlType,
                      (param_1->Settings).PrimaryAxis);
  local_148.X = (pTVar9->Rotation).XY.m128d_f64[0];
  local_148.Y = (pTVar9->Rotation).XY.m128d_f64[1];
  local_148.Z = (pTVar9->Rotation).ZW.m128d_f64[0];
  local_148.W = (pTVar9->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_148,(TRotator<double> *)&local_170._s_0);
LAB_14a260d40:
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_170._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_170._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_170._s_0.Y;
  return __return_storage_ptr__;
}

// GetControlValue @ 14a260f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlValue * __thiscall
UControlRig::GetControlValue
          (UControlRig *this,FRigControlValue *__return_storage_ptr__,FRigControlElement *param_1,
          ERigControlValueType *param_2)

{
  ERigControlType EVar1;
  undefined1 auVar2 [16];
  double dVar3;
  ulonglong uVar4;
  int iVar5;
  URigHierarchy *pUVar6;
  FRigPoseElement *pFVar7;
  TTransform<double> *pTVar8;
  uint uVar9;
  FRigControlValue *this_00;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auStack_278 [32];
  FRigControlValue local_238;
  undefined1 local_1a8 [16];
  __m128d local_198;
  __m128d local_188;
  __m128d local_178;
  __m128d local_168;
  __m128d local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_278;
  if (((this->bIsAdditive == false) || (*param_2 != Current)) ||
     (iVar5 = FRigPose::GetIndex(&this->ControlsAfterBackwardsSolve,
                                 (FRigElementKey *)&param_1->field_0x10), iVar5 == -1)) {
    pUVar6 = (URigHierarchy *)(**(code **)(this->_padding_ + 0x10))();
  }
  else {
    EVar1 = (param_1->Settings).ControlType;
    if (((EVar1 != Bool) &&
        ((EVar1 != Integer || ((param_1->Settings).ControlEnum.field0_0x0.DebugPtr == (UEnum *)0x0))
        )) && ((param_1->Settings).AnimationType != ProxyControl)) {
      pFVar7 = FRigPose::operator[](&this->ControlsAfterBackwardsSolve,iVar5);
      pUVar6 = (URigHierarchy *)(**(code **)(this->_padding_ + 0x10))(&this->_padding_);
      URigHierarchy::GetControlValue(pUVar6,&local_238,param_1,*param_2,false);
      this_00 = &local_238;
      pTVar8 = FRigControlValue::GetAsTransform
                         (this_00,&local_b8,(param_1->Settings).ControlType,
                          (param_1->Settings).PrimaryAxis);
      auVar20._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(pFVar7->LocalTransform).Scale3D.XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(pFVar7->LocalTransform).Scale3D.XY.m128d_f64);
      auVar20._8_4_ = _UNK_15061cc88 & *(uint *)((pFVar7->LocalTransform).Scale3D.XY.m128d_f64 + 1);
      auVar20._12_4_ =
           _UNK_15061cc8c & *(uint *)((longlong)(pFVar7->LocalTransform).Scale3D.XY.m128d_f64 + 0xc)
      ;
      auVar21._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(_UNK_15061cc8c &
                             *(uint *)((longlong)(pFVar7->LocalTransform).Scale3D.ZW.m128d_f64 + 0xc
                                      ),
                             _UNK_15061cc88 &
                             *(uint *)((pFVar7->LocalTransform).Scale3D.ZW.m128d_f64 + 1)));
      auVar21._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
            (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                             *(uint *)((longlong)(pFVar7->LocalTransform).Scale3D.ZW.m128d_f64 + 4),
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                             *(uint *)(pFVar7->LocalTransform).Scale3D.ZW.m128d_f64));
      uVar9 = movmskpd((int)this_00,auVar21);
      lVar11 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar20._8_8_);
      auVar17._8_4_ = (int)lVar11;
      auVar17._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar20._0_8_);
      auVar17._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
      iVar5 = movmskpd((int)pTVar8,auVar17);
      if ((uVar9 & 0x3fffffff) == 0 && iVar5 == 0) {
        local_1a8._0_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_1a8._8_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_198.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_188.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_178.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_168.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_158.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
      else {
        UE::Math::TTransform<double>::InverseFast
                  (&pFVar7->LocalTransform,(TTransform<double> *)local_1a8);
      }
      local_118.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_118.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_118.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_118,&local_b8,(TTransform<double> *)local_1a8);
      local_128._0_1_ = false;
      local_128._1_3_ = 0;
      dVar13 = local_118.Rotation.ZW.m128d_f64[0] * local_118.Rotation.ZW.m128d_f64[0] +
               local_118.Rotation.XY.m128d_f64[0] * local_118.Rotation.XY.m128d_f64[0];
      dVar16 = local_118.Rotation.ZW.m128d_f64[1] * local_118.Rotation.ZW.m128d_f64[1] +
               local_118.Rotation.XY.m128d_f64[1] * local_118.Rotation.XY.m128d_f64[1];
      dVar3 = dVar16 + dVar13;
      dVar13 = dVar13 + dVar16;
      auVar2._8_4_ = SUB84(dVar13,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar21 = sqrtpd(auVar20,auVar2);
      uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
      uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar13);
      uVar9 = (uint)(uVar10 >> 0x20);
      uVar22 = (uint)(uVar12 >> 0x20);
      auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
      auVar18._0_8_ = uVar10 & (ulonglong)(auVar17._0_8_ * local_118.Rotation.XY.m128d_f64[0]);
      uVar4 = uVar12 & (ulonglong)(auVar17._8_8_ * local_118.Rotation.XY.m128d_f64[1]);
      auVar18._8_4_ = (undefined4)uVar4;
      auVar18._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar14._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar14._4_4_ =
           ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
      auVar14._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar14._12_4_ =
           ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_118.Rotation.XY.m128d_f64 = (double  [2])(auVar18 | auVar14);
      auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
      auVar19._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar19._4_4_ =
           ~uVar9 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
      auVar19._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar19._12_4_ =
           ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar15._0_8_ = (ulonglong)(auVar17._0_8_ * local_118.Rotation.ZW.m128d_f64[0]) & uVar10;
      uVar12 = (ulonglong)(auVar17._8_8_ * local_118.Rotation.ZW.m128d_f64[1]) & uVar12;
      auVar15._8_4_ = (undefined4)uVar12;
      auVar15._12_4_ = (undefined4)(uVar12 >> 0x20);
      local_118.Rotation.ZW.m128d_f64 = (double  [2])(auVar19 | auVar15);
      local_1a8 = ZEXT816(0);
      local_198.m128d_f64 = (double  [2])ZEXT816(0);
      local_188.m128d_f64 = (double  [2])ZEXT816(0);
      local_178.m128d_f64 = (double  [2])ZEXT816(0);
      local_168.m128d_f64 = (double  [2])ZEXT816(0);
      local_158.m128d_f64 = (double  [2])ZEXT816(0);
      local_148._0_4_ = 0.0;
      local_148._4_4_ = 0.0;
      uStack_140._0_4_ = 0.0;
      uStack_140._4_4_ = 0.0;
      local_138._0_4_ = 0.0;
      local_138._4_4_ = 0.0;
      uStack_130._0_4_ = 0.0;
      uStack_130._4_4_ = 0.0;
      FRigControlValue::SetFromTransform
                ((FRigControlValue *)local_1a8,&local_118,(param_1->Settings).ControlType,
                 (param_1->Settings).PrimaryAxis);
      (__return_storage_ptr__->FloatStorage).Float00 = (float)local_1a8._0_4_;
      (__return_storage_ptr__->FloatStorage).Float01 = (float)local_1a8._4_4_;
      (__return_storage_ptr__->FloatStorage).Float02 = (float)local_1a8._8_4_;
      (__return_storage_ptr__->FloatStorage).Float03 = (float)local_1a8._12_4_;
      *(double *)&(__return_storage_ptr__->FloatStorage).Float10 = local_198.m128d_f64[0];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float12 = local_198.m128d_f64[1];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float20 = local_188.m128d_f64[0];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float22 = local_188.m128d_f64[1];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float30 = local_178.m128d_f64[0];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float32 = local_178.m128d_f64[1];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float00_2 = local_168.m128d_f64[0];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float02_2 = local_168.m128d_f64[1];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float10_2 = local_158.m128d_f64[0];
      *(double *)&(__return_storage_ptr__->FloatStorage).Float12_2 = local_158.m128d_f64[1];
      (__return_storage_ptr__->FloatStorage).Float20_2 = (float)local_148;
      (__return_storage_ptr__->FloatStorage).Float21_2 = local_148._4_4_;
      (__return_storage_ptr__->FloatStorage).Float22_2 = (float)uStack_140;
      (__return_storage_ptr__->FloatStorage).Float23_2 = uStack_140._4_4_;
      (__return_storage_ptr__->FloatStorage).Float30_2 = (float)local_138;
      (__return_storage_ptr__->FloatStorage).Float31_2 = local_138._4_4_;
      (__return_storage_ptr__->FloatStorage).Float32_2 = (float)uStack_130;
      (__return_storage_ptr__->FloatStorage).Float33_2 = uStack_130._4_4_;
      (__return_storage_ptr__->FloatStorage).bValid = local_128._0_1_;
      *(undefined3 *)&(__return_storage_ptr__->FloatStorage).field_0x81 = local_128._1_3_;
      return __return_storage_ptr__;
    }
    pUVar6 = (URigHierarchy *)(**(code **)(this->_padding_ + 0x10))();
  }
  URigHierarchy::GetControlValue(pUVar6,__return_storage_ptr__,param_1,*param_2,true);
  return __return_storage_ptr__;
}

// GetControlValueFromGlobalTransform @ 14a261410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlValue * __thiscall
UControlRig::GetControlValueFromGlobalTransform
          (UControlRig *this,FRigControlValue *__return_storage_ptr__,FName *param_1,
          TTransform<double> *param_2,Type param_3)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  FRigControlElement *pFVar6;
  FRigControlValue *pFVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackY_2b8 [32];
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  (__return_storage_ptr__->FloatStorage).Float00 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float01 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float02 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float03 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float10 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float11 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float12 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float13 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float20 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float21 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float22 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float23 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float30 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float31 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float32 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float33 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float00_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float01_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float02_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float03_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float10_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float11_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float12_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float13_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float20_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float21_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float22_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float23_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float30_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float31_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float32_2 = 0.0;
  (__return_storage_ptr__->FloatStorage).Float33_2 = 0.0;
  *(undefined4 *)&(__return_storage_ptr__->FloatStorage).bValid = 0;
  pFVar6 = (FRigControlElement *)(**(code **)(this->_padding_ + 0x3c8))(0,param_1);
  if (pFVar6 == (FRigControlElement *)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 == (URigHierarchy *)0x0) {
    return __return_storage_ptr__;
  }
  if (this->bIsAdditive == false) {
    URigHierarchy::ComputeLocalControlValue(this_00,&local_a8,pFVar6,param_2,param_3);
    pTVar8 = &local_a8;
  }
  else {
    uVar4 = FRigPose::GetIndex(&this->ControlsAfterBackwardsSolve,
                               (FRigElementKey *)&pFVar6->field_0x10);
    if (uVar4 == 0xffffffff) goto LAB_14a2615e7;
    URigHierarchy::GetParentTransform
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_288,(FRigBaseElement *)pFVar6,
               CurrentGlobal);
    UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_1c8,&local_288);
    URigHierarchy::GetControlOffsetTransform
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_228,pFVar6,CurrentLocal);
    UE::Math::TTransform<double>::GetRelativeTransform(&local_1c8,&local_168,&local_228);
    uVar5 = 0;
    if ((int)uVar4 < (this->ControlsAfterBackwardsSolve).Elements.ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FRigControlValue *)(*pcVar1)();
      return pFVar7;
    }
    UE::Math::TTransform<double>::GetRelativeTransform
              (&local_168,&local_108,
               (TTransform<double> *)
               ((this->ControlsAfterBackwardsSolve).Elements.AllocatorInstance.Data +
               (longlong)(int)uVar4 * 0x110 + 0x80));
    pTVar8 = &local_108;
  }
  FRigControlValue::SetFromTransform
            (__return_storage_ptr__,pTVar8,(pFVar6->Settings).ControlType,
             (pFVar6->Settings).PrimaryAxis);
LAB_14a2615e7:
  cVar3 = (**(code **)(this->_padding_ + 0x3d0))(this);
  if (cVar3 != '\0') {
    FRigControlValue::ApplyLimits
              (__return_storage_ptr__,&(pFVar6->Settings).LimitEnabled,
               (pFVar6->Settings).ControlType,&(pFVar6->Settings).MinimumValue,
               &(pFVar6->Settings).MaximumValue);
  }
  return __return_storage_ptr__;
}

// GetControlsInOrder @ 14a261930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::GetControlsInOrder
          (UControlRig *this,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  URigHierarchy *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> local_68;
  ForAnyElementType local_58;
  int local_50 [2];
  code *local_48 [2];
  undefined **local_38;
  ForAnyElementType *local_30;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    iVar1 = (this_00->Elements).ArrayNum;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50[0] = 0;
    local_50[1] = 0;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar1,&local_58,local_50,local_50 + 1);
    memset(local_58.Data + iVar3,0,(longlong)iVar1);
    local_20 = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigControlElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigControlElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = &local_58;
    local_28 = &local_68;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigControlElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
    URigHierarchy::Traverse
              (this_00,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_48,true);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (param_1 != &local_68) {
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_1->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
      param_1->ArrayNum = local_68.ArrayNum;
      param_1->ArrayMax = local_68.ArrayMax;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDataSourceRegistry @ 14a262010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimationDataSourceRegistry * __thiscall UControlRig::GetDataSourceRegistry(UControlRig *this)

{
  bool bVar1;
  UClass *pUVar2;
  UAnimationDataSourceRegistry *pUVar3;
  FUObjectItem *pFVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar3 = (this->DataSourceRegistry).field0_0x0.DebugPtr;
  if (pUVar3 != (UAnimationDataSourceRegistry *)0x0) {
    if ((UControlRig *)pUVar3->_padding_ == this) {
      return pUVar3;
    }
    (this->DataSourceRegistry).field0_0x0.DebugPtr = (UAnimationDataSourceRegistry *)0x0;
  }
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar3 = (UAnimationDataSourceRegistry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UAnimationDataSourceRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->DataSourceRegistry).field0_0x0.DebugPtr = pUVar3;
  bVar1 = IsInGameThread();
  if (!bVar1) {
    UObjectBaseUtility::AtomicallyClearInternalFlags
              ((UObjectBaseUtility *)(this->DataSourceRegistry).field0_0x0.DebugPtr,Async);
  }
  if (((this->_padding_ & 0x10) != 0) &&
     (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc)),
     ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0)) {
    pFVar4 = FUObjectArray::IndexToObject
                       (&GUObjectArray,
                        *(int *)((longlong)
                                 &((this->DataSourceRegistry).field0_0x0.DebugPtr)->_padding_ + 4));
    FUObjectItem::SetRootFlags(pFVar4,RootSet);
  }
  return (this->DataSourceRegistry).field0_0x0.DebugPtr;
}

// GetElementKeyRedirector @ 14a262f70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyRedirector * __thiscall UControlRig::GetElementKeyRedirector(UControlRig *this)

{
  FRigModuleSettings *pFVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pFVar1 = GetRigModuleSettings(this);
  if (1 < (pFVar1->Identifier).Name.Data.ArrayNum) {
    pUVar2 = StaticClass();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    if (pUVar3 != (UObject *)0x0) goto LAB_14a262fa7;
  }
  pFVar1 = GetRigModuleSettings(this);
  if ((pFVar1->Identifier).Name.Data.ArrayNum < 2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UControlRig::GetElementKeyRedirector'::__l2::
               _dynamic_atexit_destructor_for__EmptyRedirector__);
        _Init_thread_footer(&::_TSS0);
        return &EmptyRedirector;
      }
    }
    return &EmptyRedirector;
  }
LAB_14a262fa7:
  return &this->ElementKeyRedirector;
}

// GetElementKeyRedirector @ 14a263030

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKeyRedirector * __thiscall
UControlRig::GetElementKeyRedirector
          (UControlRig *this,FRigElementKeyRedirector *__return_storage_ptr__)

{
  FRigElementKeyRedirector::FRigElementKeyRedirector
            (__return_storage_ptr__,&this->ElementKeyRedirector);
  return __return_storage_ptr__;
}

// GetHierarchy @ 14a264440

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

URigHierarchy * __thiscall UControlRig::GetHierarchy(UControlRig *this)

{
  return (URigHierarchy *)this->_padding_;
}

// GetHostingActor @ 14a2644b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UControlRig::GetHostingActor(UControlRig *this)

{
  IControlRigObjectBinding *pIVar1;
  AActor *pAVar2;
  
  pIVar1 = (this->ObjectBinding).Object;
  if (pIVar1 != (IControlRigObjectBinding *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a2644bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pAVar2 = (AActor *)(**(code **)((longlong)*pIVar1 + 0x30))();
    return pAVar2;
  }
  return (AActor *)0x0;
}

// GetLastOverrideAsset @ 14a264b70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigOverrideAsset * __thiscall UControlRig::GetLastOverrideAsset(UControlRig *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UControlRigOverrideAsset *pUVar4;
  uint uVar5;
  
  iVar1 = (this->OverrideAssets).ArrayNum;
  if (iVar1 == 0) {
    return (UControlRigOverrideAsset *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UControlRigOverrideAsset *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = *(UControlRigOverrideAsset **)
            ((this->OverrideAssets).AllocatorInstance.Data +
            (longlong)(this->OverrideAssets).ArrayNum * 8 + -8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UControlRigOverrideAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return pUVar4;
}

// GetLastOverrideAsset @ 14a264c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigOverrideAsset * __thiscall UControlRig::GetLastOverrideAsset(UControlRig *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UControlRigOverrideAsset *pUVar4;
  uint uVar5;
  
  iVar1 = (this->OverrideAssets).ArrayNum;
  if (iVar1 == 0) {
    return (UControlRigOverrideAsset *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UControlRigOverrideAsset *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = *(UControlRigOverrideAsset **)
            ((this->OverrideAssets).AllocatorInstance.Data +
            (longlong)(this->OverrideAssets).ArrayNum * 8 + -8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UControlRigOverrideAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return pUVar4;
}

// GetMappableNodeData @ 14a265130

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::GetMappableNodeData
          (UControlRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNodeItem,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  code *local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_30;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_28;
  TArray<FNodeItem,TSizedDefaultAllocator<32>_> *local_20;
  undefined1 *local_18;
  
  FStatsHierarchical::BeginMeasurement("UControlRig::GetMappableNodeData");
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0x76b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UControlRig::GetMappableNodeData'::__l2::<lambda_1>,bool,FRigBoneElement_*>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = &this[-1].OverrideAssetsChangedDelegate.field_0x18;
  URigHierarchy::ForEach<FRigBoneElement>
            ((URigHierarchy *)this->_padding_,
             (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_38);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetOverrideAsset @ 14a2665b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigOverrideAsset * __thiscall UControlRig::GetOverrideAsset(UControlRig *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UControlRigOverrideAsset *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->OverrideAssets).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->OverrideAssets).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UControlRigOverrideAsset *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UControlRigOverrideAsset **)
              ((this->OverrideAssets).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UControlRigOverrideAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (UControlRigOverrideAsset *)0x0;
}

// GetOverrideAsset @ 14a266660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigOverrideAsset * __thiscall UControlRig::GetOverrideAsset(UControlRig *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UControlRigOverrideAsset *pUVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->OverrideAssets).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->OverrideAssets).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UControlRigOverrideAsset *)(*pcVar1)();
        return pUVar3;
      }
    }
    pUVar3 = *(UControlRigOverrideAsset **)
              ((this->OverrideAssets).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UControlRigOverrideAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    return pUVar3;
  }
  return (UControlRigOverrideAsset *)0x0;
}

// GetOwningSceneComponent @ 14a266790

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall UControlRig::GetOwningSceneComponent(UControlRig *this)

{
  int iVar1;
  UAnimationDataSourceRegistry *this_00;
  code *pcVar2;
  bool bVar3;
  USceneComponent *pUVar4;
  FControlRigExecuteContext *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  USceneComponent *local_res10;
  
  bVar3 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->OuterSceneComponent,(void *)0x0);
  if (bVar3) {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (USceneComponent *)(*pcVar2)();
        return pUVar4;
      }
    }
    pFVar5 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
                       ((FRigVMExtendedExecuteContext *)this->_padding_);
    this_00 = (pFVar5->UnitContext).DataSourceRegistry;
    pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar7 = UAnimationDataSourceRegistry::RequestSource(this_00,&OwnerComponent,pUVar6);
    if (pUVar7 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pUVar7 = (UObject *)0x0;
      }
      if (pUVar7 != (UObject *)0x0) {
        local_res8 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&(this->OuterSceneComponent).WeakPtr,(FObjectPtr)&local_res8);
      }
    }
    bVar3 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->OuterSceneComponent,(void *)0x0);
    if (bVar3) {
      local_res10 = URigVMHost::GetOwningSceneComponent((URigVMHost *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10 != (USceneComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      FWeakObjectPtr::operator=(&(this->OuterSceneComponent).WeakPtr,(FObjectPtr)&local_res10);
    }
  }
  pUVar4 = (USceneComponent *)FWeakObjectPtr::Get(&(this->OuterSceneComponent).WeakPtr);
  return pUVar4;
}

// GetParentRig @ 14a266f20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall UControlRig::GetParentRig(UControlRig *this)

{
  UClass *pUVar1;
  UControlRig *pUVar2;
  
  pUVar1 = StaticClass();
  pUVar2 = (UControlRig *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetPhysicsSimulation @ 14a266fd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigPhysicsSimulationBase * __thiscall
UControlRig::GetPhysicsSimulation(UControlRig *this,FRigComponentKey *param_1)

{
  TSharedPtr<FRigPhysicsSimulationBase,1> *pTVar1;
  
  pTVar1 = TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
           ::Find((TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
                   *)&this->PhysicsSimulations,param_1);
  if (pTVar1 != (TSharedPtr<FRigPhysicsSimulationBase,1> *)0x0) {
    return pTVar1->Object;
  }
  return (FRigPhysicsSimulationBase *)0x0;
}

// GetPhysicsSimulation @ 14a267000

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigPhysicsSimulationBase * __thiscall
UControlRig::GetPhysicsSimulation(UControlRig *this,FRigComponentKey *param_1)

{
  TSharedPtr<FRigPhysicsSimulationBase,1> *pTVar1;
  
  pTVar1 = TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
           ::Find((TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
                   *)&this->PhysicsSimulations,param_1);
  if (pTVar1 != (TSharedPtr<FRigPhysicsSimulationBase,1> *)0x0) {
    return pTVar1->Object;
  }
  return (FRigPhysicsSimulationBase *)0x0;
}

// GetPrivateStaticClass @ 14a267a50

UClass * __cdecl UControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRig",
               &Z_Registration_Info_UClass_UControlRig.InnerSingleton,
               StaticRegisterNativesUControlRig,0xc50,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRig>,
               InternalVTableHelperCtorCaller<UControlRig>,local_res8,URigVMHost::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRig.InnerSingleton;
}

// GetPublicContextStruct @ 14a269a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall UControlRig::GetPublicContextStruct(UControlRig *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// GetReplayTimeIndex @ 14a269a10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall UControlRig::GetReplayTimeIndex(UControlRig *this)

{
  return this->ReplayTimeIndex;
}

// GetRigModulePrefix @ 14a269a50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall UControlRig::GetRigModulePrefix(UControlRig *this)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  FRigModuleSettings *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FString *pFVar6;
  FName local_res10 [3];
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = GetRigModuleSettings(this);
  if ((pFVar3->Identifier).Name.Data.ArrayNum < 2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`UControlRig::GetRigModulePrefix'::__l2::_dynamic_atexit_destructor_for__EmptyPrefix__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &EmptyPrefix;
    }
    return &EmptyPrefix;
  }
  pFVar3 = GetRigModuleSettings(this);
  if ((pFVar3->Identifier).Name.Data.ArrayNum < 2) {
LAB_14a269a90:
    pFVar3 = GetRigModuleSettings(this);
    pwVar2 = FRigHierarchyModulePath::ModuleNameSuffix;
    if (1 < (pFVar3->Identifier).Name.Data.ArrayNum) {
      pFVar3 = GetRigModuleSettings(this);
      ::FString::ConcatFC(&local_38,(FString *)pFVar3,pwVar2);
      pFVar6 = &this->RigModulePrefix;
      local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      if (pFVar6 != &local_38) {
        pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar6->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (this->RigModulePrefix).Data.ArrayNum = local_38.Data.ArrayNum;
        (this->RigModulePrefix).Data.ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_14a269b91;
    }
  }
  else {
    pUVar4 = StaticClass();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    if (pUVar5 == (UObject *)0x0) goto LAB_14a269a90;
  }
  pwVar2 = FRigHierarchyModulePath::ModuleNameSuffix;
  local_res10[0] = (FName)this->_padding_;
  pFVar6 = ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatFC(&local_28,pFVar6,pwVar2);
  pFVar6 = &this->RigModulePrefix;
  if (pFVar6 != &local_28) {
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (this->RigModulePrefix).Data.ArrayNum = local_28.Data.ArrayNum;
    (this->RigModulePrefix).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
LAB_14a269b91:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return &this->RigModulePrefix;
}

// GetRigModuleSettings @ 14a269c20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleSettings * __thiscall UControlRig::GetRigModuleSettings(UControlRig *this)

{
  int iVar1;
  UControlRig *pUVar2;
  UClass *pUVar3;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    while( true ) {
      pUVar3 = (UClass *)this->_padding_;
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar3);
      }
      pUVar2 = (UControlRig *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UControlRig *)0x0) break;
      pUVar3 = StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if (((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar3->_padding_)) || (this = pUVar2, ((uint)pUVar2->_padding_ >> 4 & 1) != 0)) break;
    }
  }
  return &this->RigModuleSettings;
}

// GetRigUnitInstanceFromScope @ 14a269cb0

FRigUnit * __cdecl UControlRig::GetRigUnitInstanceFromScope(TSharedPtr<FStructOnScope,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FRigUnit *pFVar5;
  longlong lVar6;
  UScriptStruct *pUVar7;
  FStructOnScope *pFVar8;
  
  if ((param_1->Object != (FStructOnScope *)0x0) &&
     (cVar3 = (**(code **)(param_1->Object->_padding_ + 0x38))(), cVar3 != '\0')) {
    if ((param_1->Object == (FStructOnScope *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigUnit *)(*pcVar2)();
      return pFVar5;
    }
    lVar6 = (**(code **)(param_1->Object->_padding_ + 0x20))();
    pUVar7 = FRigUnit::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pFVar8 = TSharedPtr<FStructOnScope,1>::operator->(param_1);
        pFVar5 = (FRigUnit *)(**(code **)(pFVar8->_padding_ + 0x18))(pFVar8);
        goto LAB_14a269d79;
      }
    }
  }
  pFVar5 = (FRigUnit *)DefaultRigUnitInstance.SampleStructMemory;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), pFVar5 = (FRigUnit *)DefaultRigUnitInstance.SampleStructMemory,
     ::_TSS0 == -1)) {
    pUVar7 = FRigUnit::StaticStruct();
    FStructOnScope::FStructOnScope(&DefaultRigUnitInstance,(UStruct *)pUVar7);
    atexit(`UControlRig::GetRigUnitInstanceFromScope'::__l2::
           _dynamic_atexit_destructor_for__DefaultRigUnitInstance__);
    _Init_thread_footer(&::_TSS0);
    pFVar5 = (FRigUnit *)DefaultRigUnitInstance.SampleStructMemory;
  }
LAB_14a269d79:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar5;
}

// GetShapeLibraries @ 14a26af70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> * __thiscall
UControlRig::GetShapeLibraries(UControlRig *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  int iVar2;
  int iVar3;
  FUObjectItem *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res8 [8];
  
  pTVar7 = &this->ShapeLibraries;
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc));
  if ((((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0) &&
     ((this->ShapeLibraries).ArrayNum == 0)) {
    pUVar5 = (UClass *)this->_padding_;
    if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar5);
    }
    pUVar6 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar6 != (UObject *)0x0) {
      pUVar5 = StaticClass();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        pTVar7 = (TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *)
                 &pUVar6[0x14].field_0x20;
      }
    }
  }
  iVar2 = pTVar7->ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pTVar7->AllocatorInstance).Data;
  pTVar1 = this_00 + iVar2;
  do {
    if (pTVar7->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSoftObjectPtr<UControlRigShapeLibrary>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar1) {
      return pTVar7;
    }
    pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar6 == (UObject *)0x0) {
LAB_14a26b067:
      pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
      if (pUVar6 == (UObject *)0x0) {
        if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          if (pUVar6 != (UObject *)0x0) goto LAB_14a26b092;
        }
      }
      else {
LAB_14a26b092:
        UControlRigShapeLibrary::StaticClass();
      }
    }
    else {
      pUVar5 = UControlRigShapeLibrary::StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar5->_padding_)) goto LAB_14a26b067;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetShapeLibraryHash @ 14a26b0c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

uint __thiscall UControlRig::GetShapeLibraryHash(UControlRig *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *local_res8;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->ShapeLibraryNameMap).field_0x10;
  iVar13 = *(int *)&(this->ShapeLibraryNameMap).field_0x28;
  uVar16 = 0;
  iVar20 = 0;
  uVar9 = 1;
  iVar21 = 0;
  iVar10 = 0;
  if (iVar13 != 0) {
    puVar22 = *(uint **)&(this->ShapeLibraryNameMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar20;
      iVar21 = iVar21 + 0x20;
      iVar20 = iVar20 + 1;
      iVar10 = iVar13;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iVar20) goto LAB_14a26b16f;
      uVar18 = puVar22[lVar12 + 1];
    }
    uVar9 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar10 = local_res18 + -1 + iVar21;
    if (iVar13 < iVar10) {
      iVar10 = iVar13;
    }
  }
LAB_14a26b16f:
  uVar18 = *(uint *)&(this->ShapeLibraryNameMap).field_0x28;
  TStack_60._padding_ = CONCAT44(uVar9,iVar20);
  uVar9 = uVar18 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar18 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar21;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ShapeLibraryNameMap).field_0x8 -
                       *(int *)&(this->ShapeLibraryNameMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar13 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return uVar9;
  }
  uVar11 = *(uint *)&(this->ShapeLibraryNameMap).field_0x28;
  if (uVar18 != uVar11) {
    puVar14 = *(undefined1 **)&(this->ShapeLibraryNameMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar20 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar20;
      uVar9 = uVar9 + 0x20;
      iVar20 = iVar20 + 1;
      uVar18 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar20)
      goto LAB_14a26b290;
      uVar18 = *(uint *)(puVar14 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar18 = (int)lVar12 + -1 + uVar9;
    if ((int)uVar11 < (int)uVar18) {
      uVar18 = uVar11;
    }
  }
LAB_14a26b290:
  while( true ) {
    if (*(int *)&(this->ShapeLibraryNameMap).field_0x8 -
        *(int *)&(this->ShapeLibraryNameMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar18) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar2 = (undefined8 *)
             (*(longlong *)&this->ShapeLibraryNameMap + (longlong)TStack_60.CurrentBitIndex * 0x28);
    iVar21 = *(int *)(*(longlong *)&this->ShapeLibraryNameMap + 0x18 +
                     (longlong)TStack_60.CurrentBitIndex * 0x28);
    iVar13 = iVar21 + -1;
    if (iVar21 == 0) {
      pwVar17 = L"";
      iVar13 = 0;
    }
    else {
      pwVar17 = (wchar_t *)puVar2[2];
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar17);
    iVar13 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar17 = L"";
      iVar13 = 0;
    }
    else {
      pwVar17 = (wchar_t *)*puVar2;
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar17);
    uVar15 = uVar11 - uVar9 ^ uVar9 >> 0xd;
    uVar11 = (-0x61c88647 - uVar15) - uVar9 ^ uVar15 << 8;
    uVar19 = (uVar9 - uVar11) - uVar15 ^ uVar11 >> 0xd;
    uVar15 = (uVar15 - uVar19) - uVar11 ^ uVar19 >> 0xc;
    uVar9 = (uVar11 - uVar15) - uVar19 ^ uVar15 << 0x10;
    uVar19 = (uVar19 - uVar9) - uVar15 ^ uVar9 >> 5;
    uVar11 = (uVar15 - uVar19) - uVar9 ^ uVar19 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar19 ^ uVar11 << 10;
    uVar11 = (uVar19 - uVar9) - uVar11 ^ uVar9 >> 0xf;
    uVar9 = uVar16 - uVar11 ^ uVar11 >> 0xd;
    uVar16 = (-0x61c88647 - uVar9) - uVar11 ^ uVar9 << 8;
    uVar11 = (uVar11 - uVar16) - uVar9 ^ uVar16 >> 0xd;
    uVar9 = (uVar9 - uVar11) - uVar16 ^ uVar11 >> 0xc;
    uVar16 = (uVar16 - uVar9) - uVar11 ^ uVar9 << 0x10;
    uVar11 = (uVar11 - uVar16) - uVar9 ^ uVar16 >> 5;
    uVar9 = (uVar9 - uVar11) - uVar16 ^ uVar11 >> 3;
    uVar16 = (uVar16 - uVar9) - uVar11 ^ uVar9 << 10;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    uVar16 = (uVar11 - uVar16) - uVar9 ^ uVar16 >> 0xf;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  iVar13 = (this->ShapeLibraries).ArrayNum;
  pFVar24 = (this->ShapeLibraries).AllocatorInstance.Data;
  pFVar23 = pFVar24 + 0x20;
  local_res8 = pFVar24 + (longlong)iVar13 * 0x28;
  while( true ) {
    pFVar7 = local_res8;
    if ((this->ShapeLibraries).ArrayNum != iVar13) {
      `TCheckedPointerIterator<TSoftObjectPtr<UControlRigShapeLibrary>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar24 == pFVar7) break;
    uVar4 = *(undefined8 *)(pFVar23 + -0x10);
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
    uVar5 = *(undefined8 *)(pFVar23 + -0x18);
    uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    uVar18 = uVar18 + (int)((ulonglong)uVar5 >> 0x20);
    uVar18 = uVar18 * 0x40 + uVar9 + (int)((ulonglong)uVar4 >> 0x20) + (uVar18 >> 2) + 0x9e3779b9 ^
             uVar18;
    if (1 < *(int *)pFVar23) {
      uVar9 = FCrc::Strihash_DEPRECATED<char8_t>(*(int *)pFVar23 + -1,*(uchar **)(pFVar23 + -8));
      uVar18 = uVar18 ^ (uVar18 >> 2) + 0x9e3779b9 + uVar18 * 0x40 + uVar9;
    }
    uVar9 = uVar16 - uVar18 ^ uVar18 >> 0xd;
    pFVar24 = pFVar24 + 0x28;
    uVar16 = (-0x61c88647 - uVar9) - uVar18 ^ uVar9 << 8;
    uVar18 = (uVar18 - uVar16) - uVar9 ^ uVar16 >> 0xd;
    uVar9 = (uVar9 - uVar18) - uVar16 ^ uVar18 >> 0xc;
    uVar16 = (uVar16 - uVar9) - uVar18 ^ uVar9 << 0x10;
    uVar18 = (uVar18 - uVar16) - uVar9 ^ uVar16 >> 5;
    uVar9 = (uVar9 - uVar18) - uVar16 ^ uVar18 >> 3;
    uVar16 = (uVar16 - uVar9) - uVar18 ^ uVar9 << 10;
    uVar16 = (uVar18 - uVar16) - uVar9 ^ uVar16 >> 0xf;
    pFVar23 = pFVar23 + 0x28;
  }
  return uVar16;
}

// GetSupportedEvents @ 14a26ba10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UControlRig::GetSupportedEvents(UControlRig *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a1ac8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
             (**(code **)(*(longlong *)this->_padding_ + 0x3c8))();
    return pTVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`URigVMHost::GetSupportedEvents'::__l2::_dynamic_atexit_destructor_for__EmptyEvents__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyEvents;
}

// GetWorld @ 14a26dc90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UControlRig::GetWorld(UControlRig *this)

{
  IControlRigObjectBinding *pIVar1;
  code *pcVar2;
  bool bVar3;
  AActor *this_00;
  UWorld *pUVar4;
  longlong *plVar5;
  
  pIVar1 = (this->ObjectBinding).Object;
  if (pIVar1 != (IControlRigObjectBinding *)0x0) {
    this_00 = (AActor *)(**(code **)((longlong)*pIVar1 + 0x30))();
    if (this_00 != (AActor *)0x0) {
      pUVar4 = AActor::GetWorld(this_00);
      return pUVar4;
    }
    if ((this->ObjectBinding).Object == (IControlRigObjectBinding *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UWorld *)(*pcVar2)();
        return pUVar4;
      }
    }
    plVar5 = (longlong *)(**(code **)((longlong)*(this->ObjectBinding).Object + 0x28))();
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a26dd11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UWorld *)(**(code **)(*plVar5 + 0x180))(plVar5,*(code **)(*plVar5 + 0x180));
      return pUVar4;
    }
  }
  pUVar4 = URigVMHost::GetWorld((URigVMHost *)this);
  return pUVar4;
}

// HandleHierarchyEvent @ 14a26e1f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::HandleHierarchyEvent
          (UControlRig *this,URigHierarchy *param_1,FRigEventContext *param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  ERigEvent EVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FRigControlElement *pFVar10;
  UScriptStruct *pUVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FRigControlModifiedContext local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  
  this_00 = &this->RigEventDelegate;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_60);
    puVar1 = &(this->RigEventDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar13 = *(int *)&(this->RigEventDelegate).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&(this->RigEventDelegate).field_0x10) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->RigEventDelegate).field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar14 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,param_1,param_2), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(this->RigEventDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  EVar2 = param_2->Event;
  if (EVar2 == RequestAutoKey) {
    iVar12 = URigHierarchy::GetIndex(param_1,&param_2->Key,true);
    if ((iVar12 != -1) && ((param_2->Key).Type == Control)) {
      pFVar10 = (FRigControlElement *)URigHierarchy::Get(param_1,iVar12);
      if (pFVar10 != (FRigControlElement *)0x0) {
        lVar14 = (**(code **)(*(longlong *)pFVar10 + 0x10))(pFVar10);
        pUVar11 = FRigControlElement::StaticStruct();
        if (pUVar11 != (UScriptStruct *)0x0) {
          iVar12 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar14 + 0x38) < iVar12) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar12 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            local_78.LocalTime = param_2->LocalTime;
            local_78.EventName = param_2->SourceEventName;
            local_78.KeyMask = 0x1ff;
            local_78.bConstraintUpdate = false;
            local_78.SetKey = Always;
            TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                         *)&this->OnControlModified,this,pFVar10,&local_78);
            return;
          }
        }
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Element",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                         ,0x3f9,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else if ((EVar2 == OpenUndoBracket) || (EVar2 == CloseUndoBracket)) {
    iVar12 = -1;
    if (EVar2 == OpenUndoBracket) {
      iVar12 = 1;
    }
    iVar12 = this->ControlUndoBracketIndex + iVar12;
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    this->ControlUndoBracketIndex = iVar12;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnControlUndoBracket
               ,(FWriteAccessScope *)&local_48);
    puVar1 = &(this->OnControlUndoBracket).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar13 = *(int *)&(this->OnControlUndoBracket).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&(this->OnControlUndoBracket).field_0x10) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnControlUndoBracket).field_0x8;
        if (((*(int *)(lVar14 + 8 + lVar3) == 0) ||
            (plVar4 = *(longlong **)(lVar14 + lVar3), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,this,EVar2 == OpenUndoBracket),
           cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar14 = lVar14 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(this->OnControlUndoBracket).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnControlUndoBracket,
                 false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// HandleHierarchyModified @ 14a26e530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::HandleHierarchyModified
          (UControlRig *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
          FRigNotificationSubject *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FRigControlElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  FRigControlModifiedContext local_5f8;
  FDestructionSentinel local_5e0;
  FRigControlElement local_5c8;
  
  pFVar3 = (FRigControlElement *)param_3->Element;
  if ((param_1 == ElementSelected) || (param_1 == ElementDeselected)) {
    if (pFVar3 != (FRigControlElement *)0x0) {
      lVar11 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
      pUVar12 = FRigControlElement::StaticStruct();
      if (pUVar12 != (UScriptStruct *)0x0) {
        iVar2 = (int)pUVar12->_padding_;
        if ((*(int *)(lVar11 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar12->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->OnControlSelected,(FWriteAccessScope *)&local_5e0);
          puVar1 = &(this->OnControlSelected).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar7 = false;
          uVar13 = *(int *)&(this->OnControlSelected).field_0x10 - 1;
          if (-1 < (int)uVar13) {
            lVar11 = (longlong)(int)uVar13 << 4;
            bVar7 = false;
            do {
              uVar10 = 0;
              if ((int)uVar13 < *(int *)&(this->OnControlSelected).field_0x10) {
                uVar10 = ~uVar13 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)&(this->OnControlSelected).field_0x8;
              if (((*(int *)(lVar4 + 8 + lVar11) == 0) ||
                  (plVar5 = *(longlong **)(lVar4 + lVar11), plVar5 == (longlong *)0x0)) ||
                 (cVar9 = (**(code **)(*plVar5 + 0x68))
                                    (plVar5,this,pFVar3,param_1 == ElementSelected), cVar9 == '\0'))
              {
                bVar7 = true;
              }
              lVar11 = lVar11 + -0x10;
              uVar13 = uVar13 - 1;
            } while (-1 < (int)uVar13);
          }
          puVar1 = &(this->OnControlSelected).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar7) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnControlSelected,false);
          }
          if (local_5e0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
          }
          FRigTransformElement::FRigTransformElement((FRigTransformElement *)&local_5c8);
          local_5c8._448_8_ = 0;
          local_5c8._0_8_ = &___7FRigControlElement__6B_;
          local_5c8._464_4_ = 0;
          local_5c8._468_4_ = 1;
          local_5c8._480_8_ = 0;
          local_5c8._488_8_ = 0;
          local_5c8._512_8_ = 0;
          local_5c8._520_4_ = 0;
          local_5c8._524_4_ = 0x80;
          local_5c8._528_4_ = 0xffffffff;
          local_5c8._532_4_ = 0;
          local_5c8._544_8_ = 0;
          local_5c8._552_4_ = 0;
          FRigControlSettings::FRigControlSettings
                    ((FRigControlSettings *)((longlong)&local_5c8 + 0x230));
          local_5c8.PreferredEulerAngles.Current.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_5c8.PreferredEulerAngles.Current.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_5c8.PreferredEulerAngles.RotationOrder = YZX;
          local_5c8.PreferredEulerAngles.Initial.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_5c8.PreferredEulerAngles.Initial.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_5c8.PreferredEulerAngles.Current.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_5c8.PreferredEulerAngles.Initial.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_5c8.OffsetStorage.Current.Local.StorageIndex = -1;
          local_5c8.OffsetStorage.Current.Local.Storage = (TTransform<double> *)0x0;
          local_5c8.OffsetStorage.Current.Global.StorageIndex = -1;
          local_5c8.OffsetStorage.Current.Global.Storage = (TTransform<double> *)0x0;
          local_5c8.OffsetStorage.Initial.Local.StorageIndex = -1;
          local_5c8.OffsetStorage.Initial.Local.Storage = (TTransform<double> *)0x0;
          local_5c8.OffsetStorage.Initial.Global.StorageIndex = -1;
          local_5c8.OffsetStorage.Initial.Global.Storage = (TTransform<double> *)0x0;
          local_5c8.OffsetDirtyState.Current.Global.StorageIndex = -1;
          local_5c8.OffsetDirtyState.Current.Global.Storage = (bool *)0x0;
          local_5c8.OffsetDirtyState.Current.Local.StorageIndex = -1;
          local_5c8.OffsetDirtyState.Current.Local.Storage = (bool *)0x0;
          local_5c8.OffsetDirtyState.Initial.Global.StorageIndex = -1;
          local_5c8.OffsetDirtyState.Initial.Global.Storage = (bool *)0x0;
          local_5c8.OffsetDirtyState.Initial.Local.StorageIndex = -1;
          local_5c8.OffsetDirtyState.Initial.Local.Storage = (bool *)0x0;
          local_5c8.ShapeStorage.Current.Local.StorageIndex = -1;
          local_5c8.ShapeStorage.Current.Local.Storage = (TTransform<double> *)0x0;
          local_5c8.ShapeStorage.Current.Global.StorageIndex = -1;
          local_5c8.ShapeStorage.Current.Global.Storage = (TTransform<double> *)0x0;
          local_5c8.ShapeStorage.Initial.Local.StorageIndex = -1;
          local_5c8.ShapeStorage.Initial.Local.Storage = (TTransform<double> *)0x0;
          local_5c8.ShapeStorage.Initial.Global.StorageIndex = -1;
          local_5c8.ShapeStorage.Initial.Global.Storage = (TTransform<double> *)0x0;
          local_5c8.ShapeDirtyState.Current.Global.StorageIndex = -1;
          local_5c8.ShapeDirtyState.Current.Global.Storage = (bool *)0x0;
          local_5c8.ShapeDirtyState.Current.Local.StorageIndex = -1;
          local_5c8.ShapeDirtyState.Current.Local.Storage = (bool *)0x0;
          local_5c8.ShapeDirtyState.Initial.Global.StorageIndex = -1;
          local_5c8.ShapeDirtyState.Initial.Global.Storage = (bool *)0x0;
          local_5c8.ShapeDirtyState.Initial.Local.StorageIndex = -1;
          local_5c8.ShapeDirtyState.Initial.Local.Storage = (bool *)0x0;
          FRigControlElement::operator=(&local_5c8,pFVar3);
          TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>
          ::Broadcast<UControlRig_*,FRigControlElement,bool>
                    ((TSparseDynamicDelegate<UControlRig::FOnControlSelectedBP_MCSignature,UControlRig,UControlRig::FOnControlSelectedBPInfoGetter>
                      *)&this->OnControlSelected_BP,this,&local_5c8,param_1 == ElementSelected);
        }
      }
    }
  }
  else if (((param_1 == ControlSettingChanged) || (param_1 == ControlShapeTransformChanged)) &&
          (pFVar3 != (FRigControlElement *)0x0)) {
    lVar11 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    pUVar12 = FRigControlElement::StaticStruct();
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_5f8.SetKey = Never;
        local_5f8.EventName.Number = 0;
        local_5f8.bConstraintUpdate = false;
        local_5f8.KeyMask = 0x1ff;
        local_5f8.LocalTime = 3.4028235e+38;
        local_5f8.EventName.ComparisonIndex.Value = 0;
        TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                     *)&this->OnControlModified,this,pFVar3,&local_5f8);
        return;
      }
    }
  }
  return;
}

// HandleOnControlModified @ 14a26e990

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::HandleOnControlModified
          (UControlRig *this,UControlRig *param_1,FRigControlElement *param_2,
          FRigControlModifiedContext *param_3)

{
  int iVar1;
  URigHierarchy *pUVar2;
  FRigCurveElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  undefined4 local_c8;
  FNameEntryId FStack_c4;
  uint uStack_c0;
  FRigElementKey local_b8;
  FRigControlValue local_a8;
  
  if (((param_2->Settings).bIsCurve != false) &&
     (pUVar2 = (this->DynamicHierarchy).field0_0x0.DebugPtr, pUVar2 != (URigHierarchy *)0x0)) {
    cVar5 = (**(code **)(this->_padding_ + 0x3d8))();
    URigHierarchy::GetControlValue(pUVar2,&local_a8,param_2,cVar5 == '\0',true);
    pUVar2 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    FStack_c4.Value = (uint)*(undefined8 *)&param_2->field_0x14;
    uStack_c0 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x14 >> 0x20);
    local_c8 = CONCAT31(local_c8._1_3_,8);
    local_b8.Name.ComparisonIndex.Value = FStack_c4.Value;
    local_b8._0_4_ = local_c8;
    local_b8.Name.Number = uStack_c0;
    uVar7 = URigHierarchy::GetIndex(pUVar2,&local_b8,true);
    if ((-1 < (int)uVar7) && ((int)uVar7 < (pUVar2->Elements).ArrayNum)) {
      uVar8 = 0;
      if ((int)uVar7 < (pUVar2->Elements).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FRigCurveElement **)
                ((pUVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      if (pFVar3 != (FRigCurveElement *)0x0) {
        lVar9 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
        pUVar10 = FRigCurveElement::StaticStruct();
        if (pUVar10 != (UScriptStruct *)0x0) {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar9 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            URigHierarchy::SetCurveValue(pUVar2,pFVar3,local_a8.FloatStorage.Float00,false,false);
          }
        }
      }
    }
  }
  return;
}

// HandleOverrideChanged @ 14a26eb40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::HandleOverrideChanged(UControlRig *this,UControlRigOverrideAsset *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((this->bSuspendOverrideAssetChangedDelegate == false) &&
     (param_1 != (UControlRigOverrideAsset *)0x0)) {
    pFVar2 = (this->OverrideAssets).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->OverrideAssets).ArrayNum * 8;
    if (pFVar2 != pFVar1) {
      while ((*(UControlRigOverrideAsset **)pFVar2 == (UControlRigOverrideAsset *)0x0 ||
             (*(UControlRigOverrideAsset **)pFVar2 != param_1))) {
        pFVar2 = pFVar2 + 8;
        if (pFVar2 == pFVar1) {
          return;
        }
      }
      RequestConstruction(this);
      return;
    }
  }
  return;
}

// Initialize @ 14a271d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UControlRig::Initialize(UControlRig *this,bool param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UObject *pUVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UControlRig::Initialize(bool)_::_2_::FStat_STAT_ControlRig_Initialize>
  FVar7;
  FRigModuleSettings *pFVar8;
  UClass *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (bVar4) {
LAB_14a271da6:
    FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
  }
  else if (this != (UControlRig *)0x0) {
    pUVar5 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar4 = FTraceFilter::IsObjectTraceable<1>(pUVar5);
    if (bVar4) goto LAB_14a271da6;
  }
  FStatsHierarchical::BeginMeasurement("UControlRig::Initialize");
  FVar13.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ControlRig_Initialize ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UControlRig::Initialize(bool)_::_2_::FStat_STAT_ControlRig_Initialize>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_ControlRig_Initialize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Initialize,*pFVar6,
                   L"STAT_ControlRig_Initialize","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_ControlRig_Initialize;
  if (StatPtr_STAT_ControlRig_Initialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UControlRig::Initialize(bool)_::_2_::FStat_STAT_ControlRig_Initialize>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_ControlRig_Initialize");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UControlRig::Initialize(bool)_::_2_::FStat_STAT_ControlRig_Initialize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ControlRig_Initialize,*pFVar6,
                         L"STAT_ControlRig_Initialize","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                         ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar4 = false;
  bVar3 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_14a271f28:
    bVar2 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                   ,0x154);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a271f28;
    local_res8.s.LowPart = FVar11.Value;
    local_res8.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar2 = true;
    FVar13.Value = FVar11.Value;
  }
  (**(code **)(this->_padding_ + 0x3b0))(this,param_1);
  GetDataSourceRegistry(this);
  pFVar8 = GetRigModuleSettings(this);
  if ((pFVar8->Identifier).Name.Data.ArrayNum < 2) {
LAB_14a271f68:
    URigHierarchy::GetController((this->DynamicHierarchy).field0_0x0.DebugPtr,true);
  }
  else {
    pUVar9 = StaticClass();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
    if (pUVar5 == (UObject *)0x0) goto LAB_14a271f68;
  }
  RequestConstruction(this);
  pFVar8 = GetRigModuleSettings(this);
  if (1 < (pFVar8->Identifier).Name.Data.ArrayNum) {
    pUVar9 = StaticClass();
    pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
    if (pUVar5 != (UObject *)0x0) goto LAB_14a272055;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->DynamicHierarchy).field0_0x0.DebugPtr)->ModifiedEvent,this);
  local_38.NameAndInfo.Index.Value = 0;
  local_38.StatData.Pad = (uchar  [8])HandleHierarchyModified;
  TMulticastDelegateRegistration<void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UControlRig>
            (&((this->DynamicHierarchy).field0_0x0.DebugPtr)->ModifiedEvent,
             (UControlRig *)&local_res8.s,(pmf_85d7acee *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->DynamicHierarchy).field0_0x0.DebugPtr)->EventDelegate,this);
  local_38.NameAndInfo = (FStatNameAndInfo)((ulonglong)(uint)local_38.NameAndInfo.Number << 0x20);
  local_38.StatData.Pad = (uchar  [8])HandleHierarchyEvent;
  TMulticastDelegateRegistration<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UControlRig>
            ((TMulticastDelegateRegistration<void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
              *)&((this->DynamicHierarchy).field0_0x0.DebugPtr)->EventDelegate,
             (UControlRig *)&local_res8.s,(pmf_3f9c321d *)this);
  URigHierarchy::UpdateVisibilityOnProxyControls((this->DynamicHierarchy).field0_0x0.DebugPtr);
LAB_14a272055:
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar12.Number,FVar13.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeFromCDO @ 14a272580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::InitializeFromCDO(UControlRig *this)

{
  undefined1 *puVar1;
  TMap<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
  *this_00;
  int *piVar2;
  int iVar3;
  URigHierarchy *pUVar4;
  URigHierarchy *pUVar5;
  uint uVar6;
  bool bVar7;
  FRigModuleSettings *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UControlRig *pUVar11;
  FRigElementKeyRedirector *pFVar12;
  undefined1 auStackY_148 [32];
  undefined1 local_118;
  FWeakObjectPtr local_114;
  FRigNotificationSubject local_108;
  URigHierarchy *local_f8 [2];
  undefined1 local_e8 [72];
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  (**(code **)(this->_padding_ + 0x488))();
  FStatsHierarchical::BeginMeasurement("UControlRig::InitializeFromCDO");
  if ((this->_padding_ & 0x10) != 0) goto LAB_14a272895;
  pFVar8 = GetRigModuleSettings(this);
  if ((pFVar8->Identifier).Name.Data.ArrayNum < 2) {
LAB_14a2725e7:
    pUVar11 = UClass::GetDefaultObject<UControlRig>((UClass *)this->_padding_);
    pUVar4 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    this_00 = &this->PhysicsSimulations;
    bVar7 = 1 < *(int *)&(this->PhysicsSimulations).field_0x48;
    if (!bVar7) {
      TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PhysicsSimulations).field_0x8);
    puVar1 = &(this->PhysicsSimulations).field_0xc;
    *(undefined4 *)&(this->PhysicsSimulations).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->PhysicsSimulations).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PhysicsSimulations).field_0x34 = 0;
    iVar3 = *(int *)&(this->PhysicsSimulations).field_0x2c;
    *(undefined4 *)&(this->PhysicsSimulations).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->PhysicsSimulations).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PhysicsSimulations).field_0x10,0);
    }
    if (bVar7) {
      *(undefined4 *)&(this->PhysicsSimulations).field_0x48 = 1;
      TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    uVar6 = (uint)local_108.Element >> 8;
    local_108.Element._0_4_ = (uint)local_108.Element & 0xffffff00;
    local_108.Element._4_4_ = 0;
    local_108.Component._0_4_ = 0;
    if (pUVar4 != (URigHierarchy *)0x0) {
      bVar7 = pUVar4->bEnableCacheValidityCheck;
      pUVar4->bEnableCacheValidityCheck = false;
      local_108.Element._0_4_ = CONCAT31((int3)uVar6,bVar7);
      local_f8[0] = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)((longlong)&local_108.Element + 4),(FObjectPtr)local_f8);
    }
    pUVar5 = (pUVar11->DynamicHierarchy).field0_0x0.DebugPtr;
    local_118 = 0;
    local_114.ObjectIndex = 0;
    local_114.ObjectSerialNumber = 0;
    if (pUVar5 != (URigHierarchy *)0x0) {
      local_118 = pUVar5->bEnableCacheValidityCheck;
      pUVar5->bEnableCacheValidityCheck = false;
      local_f8[0] = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(&local_114,(FObjectPtr)local_f8);
    }
    bVar7 = pUVar4->bSuspendNotifications;
    pUVar4->bSuspendNotifications = true;
    URigHierarchy::CopyHierarchy(pUVar4,(pUVar11->DynamicHierarchy).field0_0x0.DebugPtr);
    URigHierarchy::ResetPoseToInitial(pUVar4,All);
    this->bHierarchyInitializedThisFrame = true;
    pUVar4->bSuspendNotifications = bVar7;
    bVar7 = FWeakObjectPtr::IsValid(&local_114);
    if (bVar7) {
      pUVar10 = FWeakObjectPtr::Get(&local_114);
      pUVar10[0x20].field_0x18 = local_118;
    }
    bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&local_108.Element + 4));
    if (bVar7) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&local_108.Element + 4));
      pUVar10[0x20].field_0x18 = local_108.Element._0_1_;
    }
    local_108.Element._0_4_ = 0;
    local_108.Element._4_4_ = 0;
    local_108.Component._0_4_ = 0;
    local_108.Component._4_4_ = 0;
    URigHierarchy::Notify(pUVar4,HierarchyReset,&local_108);
    this->HierarchySettings = pUVar11->HierarchySettings;
    pFVar12 = FRigElementKeyRedirector::FRigElementKeyRedirector
                        ((FRigElementKeyRedirector *)local_e8,&pUVar11->ElementKeyRedirector,pUVar4)
    ;
    FRigElementKeyRedirector::operator=(&this->ElementKeyRedirector,pFVar12);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    local_a0 = 0;
    if ((void *)local_e8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    pUVar4 = (pUVar11->DynamicHierarchy).field0_0x0.DebugPtr;
    if (pUVar4 != (URigHierarchy *)0x0) {
      piVar2 = &(this->HierarchySettings).ProceduralElementLimit;
      *piVar2 = *piVar2 + (pUVar4->Elements).ArrayNum;
    }
  }
  else {
    pUVar9 = StaticClass();
    pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
    if (pUVar10 == (UObject *)0x0) goto LAB_14a2725e7;
  }
  TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TObjectPtr<UDataAssetLink>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDataAssetLink>,0>,FDefaultSetAllocator>
           *)&this->ExternalVariableDataAssetLinks);
LAB_14a272895:
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeVM @ 14a272970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::InitializeVM(UControlRig *this,FName *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3a8))();
  if (cVar1 == '\0') {
    return false;
  }
  RequestConstruction(this);
  return true;
}

// InitializeVMs @ 14a2729b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UControlRig::InitializeVMs(UControlRig *this,bool param_1)

{
  FRigVMExtendedExecuteContext *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UObject *pUVar6;
  URigVMHost *pUVar7;
  FString FStack_18;
  
  bVar3 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar3) {
    if (this == (UControlRig *)0x0) goto LAB_14a1ae2ce;
    pUVar6 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar3 = FTraceFilter::IsObjectTraceable<1>(pUVar6);
    if (!bVar3) goto LAB_14a1ae2ce;
  }
  FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
LAB_14a1ae2ce:
  if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
    bVar3 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar3) {
      (**(code **)(this->_padding_ + 0x380))(this);
      if ((this->_padding_ & 0x10) == 0) {
        URigVMHost::SwapVMToNativizedIfRequired((URigVMHost *)this,(UClass *)0x0);
        if ((this->_padding_ == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("RigVMExtendedExecuteContext != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                               ,0x14c,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FRigVMExtendedExecuteContext *)this->_padding_;
        pUVar7 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
        plVar1 = (longlong *)this->_padding_;
        if (plVar1 == (longlong *)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2045642706327173961>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMHost.cpp"
                             ,0x4b7,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else if ((pUVar7 == (URigVMHost *)0x0) ||
                ((pUVar7->VM).field0_0x0.DebugPtr == (URigVM *)0x0)) {
          (**(code **)(*plVar1 + 0x2e0))(plVar1,this_00);
          FRigVMExtendedExecuteContext::Reset(this_00);
        }
        else {
          cVar4 = (**(code **)(*plVar1 + 0x2c0))();
          if (cVar4 == '\0') {
            FRigVMMemoryStorageStruct::operator=
                      (&this_00->WorkMemoryStorage,
                       &((pUVar7->VM).field0_0x0.DebugPtr)->DefaultWorkMemoryStorage);
            FRigVMMemoryStorageStruct::operator=
                      (&this_00->DebugMemoryStorage,
                       &((pUVar7->VM).field0_0x0.DebugPtr)->DefaultDebugMemoryStorage);
            uVar5 = (**(code **)(((pUVar7->VM).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
            this_00->VMHash = uVar5;
          }
        }
      }
      (**(code **)(this->_padding_ + 0x318))(this);
      if (param_1) {
        (**(code **)(this->_padding_ + 0x318))(this);
      }
    }
  }
  else if (2 < (byte)LogRigVM._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// InitializeVMs @ 14a2729c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::InitializeVMs(UControlRig *this,FName *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMExtendedExecuteContext *pFVar3;
  TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> TStack_28;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (FRigVMExtendedExecuteContext *)this->_padding_;
  (**(code **)(this->_padding_ + 0x378))(this,&TStack_28,0);
  if ((((URigVM *)this->_padding_)->ExternalVariables).ArrayNum != TStack_28.ArrayNum) {
    cVar7 = '\0';
    goto LAB_14a1ae9d3;
  }
  URigVM::SetExternalVariablesInstanceData((URigVM *)this->_padding_,pFVar3,&TStack_28,false);
  cVar7 = (**(code **)(*(longlong *)this->_padding_ + 800))((longlong *)this->_padding_,pFVar3,1);
  if (cVar7 != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
  }
  this->_padding_ = 0;
  lVar8 = (**(code **)((pFVar3->PublicDataScope)._padding_ + 0x20))(&pFVar3->PublicDataScope);
  pUVar9 = FRigVMExecuteContext::StaticStruct();
  if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14a1ae961:
    pcVar4 = *(code **)(pFVar3->_padding_ + 8);
    pUVar9 = FRigVMExecuteContext::StaticStruct();
    (*pcVar4)(pFVar3,pUVar9);
  }
  else {
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar8 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14a1ae961;
  }
  lVar8 = (**(code **)((pFVar3->PublicDataScope)._padding_ + 0x18))(&pFVar3->PublicDataScope);
  this_00 = *(TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
              **)(lVar8 + 0x50);
  TSet<TTuple<FRigVMNameOp,FName>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,FName,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMNameOp,bool>,TDefaultMapHashableKeyFuncs<FRigVMNameOp,bool,0>,FDefaultSetAllocator>
           *)(this_00 + 1));
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_);
  if (bVar5) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(URigVMHost *)this,param_1);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + -1;
  }
LAB_14a1ae9d3:
  if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_28.AllocatorInstance.Data);
  }
  return (bool)cVar7;
}

// InitializeVMsFromCDO @ 14a272b10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::InitializeVMsFromCDO(UControlRig *this)

{
  URigVM *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  URigVMHost *pUVar5;
  
  if ((this->_padding_ & 0x10) == 0) {
    pUVar5 = UClass::GetDefaultObject<URigVMHost>((UClass *)this->_padding_);
    if ((((URigVM *)this->_padding_ == (URigVM *)0x0) ||
        ((URigVM *)this->_padding_ != (pUVar5->VM).field0_0x0.DebugPtr)) &&
       (pUVar1 = (pUVar5->VM).field0_0x0.DebugPtr, pUVar1 != (URigVM *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      this->_padding_ = (longlong)(pUVar5->VM).field0_0x0;
    }
    (**(code **)(this->_padding_ + 0x358))(this);
    FRigVMDrawContainer::operator=((FRigVMDrawContainer *)&this->_padding_,&pUVar5->DrawContainer);
    *(int *)&this->_padding_ = (pUVar5->VMRuntimeSettings).MaximumArraySize;
    pTVar2 = (pUVar5->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    pTVar3 = (pUVar5->VMRuntimeSettings).LogFunction.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pTVar3;
    this->_padding_ = (longlong)pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// InvertInputPose @ 14a273890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> * __thiscall
UControlRig::InvertInputPose
          (UControlRig *this,
          TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,EControlRigSetKey param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ERigControlAxis EVar3;
  ERigControlType EVar4;
  uint uVar5;
  URigHierarchy *pUVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  UScriptStruct *pUVar21;
  uint uVar22;
  ulonglong uVar23;
  UControlRig *pUVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 local_228;
  EControlRigSetKey local_227;
  longlong *local_220;
  uint local_218;
  undefined1 local_214 [20];
  longlong *local_200;
  FRigControlValueStorage *local_1f8;
  FRigControlValueStorage local_1e8;
  FRigControlValueStorage local_158;
  undefined1 local_d4;
  EControlRigSetKey local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  TTransform<double> local_a8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar5 = (this->ControlsAfterBackwardsSolve).Elements.ArrayNum;
  local_227 = param_2;
  local_214._4_8_ = param_1;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_218 = (this->ControlsAfterBackwardsSolve).Elements.ArrayNum;
  uVar23 = (ulonglong)(int)local_218;
  pFVar26 = (this->ControlsAfterBackwardsSolve).Elements.AllocatorInstance.Data;
  pFVar27 = pFVar26 + 0xc0;
  local_214._12_8_ = pFVar26 + uVar23 * 0x110;
  do {
    uVar14 = local_214._12_8_;
    if ((this->ControlsAfterBackwardsSolve).Elements.ArrayNum != (int)uVar23) {
      local_228 = 0;
      `TCheckedPointerIterator<FRigPoseElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_228);
    }
    if (pFVar26 == (FScriptContainerElement *)uVar14) {
      return __return_storage_ptr__;
    }
    pUVar6 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    if (*(ushort *)(pFVar27 + -0xb4) == 0xffff) {
LAB_14a273d00:
      local_220 = (longlong *)0x0;
    }
    else {
      uVar22 = (uint)*(ushort *)(pFVar27 + -0xb4);
      if ((pUVar6->Elements).ArrayNum <= (int)uVar22) goto LAB_14a273d00;
      uVar17 = 0;
      if ((int)uVar22 < (pUVar6->Elements).ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        pTVar19 = (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar19;
      }
      plVar7 = *(longlong **)((pUVar6->Elements).AllocatorInstance.Data + (ulonglong)uVar22 * 8);
      if (plVar7 == (longlong *)0x0) goto LAB_14a273d00;
      lVar20 = (**(code **)(*plVar7 + 0x10))(plVar7);
      pUVar21 = FRigControlElement::StaticStruct();
      if (pUVar21 == (UScriptStruct *)0x0) goto LAB_14a273d00;
      iVar18 = (int)pUVar21->_padding_;
      if ((*(int *)(lVar20 + 0x38) < iVar18) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar21->_padding_)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (!bVar15) goto LAB_14a273d00;
      pUVar24 = this;
      local_220 = plVar7;
      cVar16 = (**(code **)(this->_padding_ + 0x490))();
      if ((cVar16 == '\0') ||
         ((*(char *)((longlong)local_220 + 0x231) != '\0' &&
          (((*(char *)((longlong)local_220 + 0x231) != '\x02' || (local_220[0x70] == 0)) &&
           ((char)local_220[0x46] != '\x02')))))) {
        if (*(int *)(local_214._4_8_ + 8) == 0) {
LAB_14a273ab4:
          EVar3 = *(ERigControlAxis *)((longlong)local_220 + 0x23c);
          EVar4 = *(ERigControlType *)((longlong)local_220 + 0x231);
          local_1e8.Float00 = 0.0;
          local_1e8.Float01 = 0.0;
          local_1e8.Float02 = 0.0;
          local_1e8.Float03 = 0.0;
          local_1e8.bValid = false;
          local_1e8._129_3_ = 0;
          local_1e8.Float10 = 0.0;
          local_1e8.Float11 = 0.0;
          local_1e8.Float12 = 0.0;
          local_1e8.Float13 = 0.0;
          local_1e8.Float20 = 0.0;
          local_1e8.Float21 = 0.0;
          local_1e8.Float22 = 0.0;
          local_1e8.Float23 = 0.0;
          local_1e8.Float30 = 0.0;
          local_1e8.Float31 = 0.0;
          local_1e8.Float32 = 0.0;
          local_1e8.Float33 = 0.0;
          local_1e8.Float00_2 = 0.0;
          local_1e8.Float01_2 = 0.0;
          local_1e8.Float02_2 = 0.0;
          local_1e8.Float03_2 = 0.0;
          local_1e8.Float10_2 = 0.0;
          local_1e8.Float11_2 = 0.0;
          local_1e8.Float12_2 = 0.0;
          local_1e8.Float13_2 = 0.0;
          local_1e8.Float20_2 = 0.0;
          local_1e8.Float21_2 = 0.0;
          local_1e8.Float22_2 = 0.0;
          local_1e8.Float23_2 = 0.0;
          local_1e8.Float30_2 = 0.0;
          local_1e8.Float31_2 = 0.0;
          local_1e8.Float32_2 = 0.0;
          local_1e8.Float33_2 = 0.0;
          lVar20 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(uVar13 & *(uint *)(pFVar27 + 0x1c),
                                     uVar12 & *(uint *)(pFVar27 + 0x18)));
          auVar10._8_4_ = (int)lVar20;
          auVar10._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                (double)CONCAT44(uVar11 & *(uint *)(pFVar27 + 0x14),
                                 uVar5 & *(uint *)(pFVar27 + 0x10)));
          auVar10._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
          uVar22 = movmskpd((int)pUVar24,auVar10);
          lVar20 = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                    (double)CONCAT44(uVar13 & *(uint *)(pFVar27 + 0xc),
                                     uVar12 & *(uint *)(pFVar27 + 8)));
          auVar9._8_4_ = (int)lVar20;
          auVar9._0_8_ = -(ulonglong)
                          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                          (double)CONCAT44(uVar11 & *(uint *)(pFVar27 + 4),uVar5 & *(uint *)pFVar27)
                          );
          auVar9._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
          iVar18 = movmskpd(0,auVar9);
          if ((uVar22 & 0x3fffffff) == 0 && iVar18 == 0) {
            local_a8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_a8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_a8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_a8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_a8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_a8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            UE::Math::TTransform<double>::InverseFast
                      ((TTransform<double> *)(pFVar27 + -0x40),&local_a8);
          }
          FRigControlValue::SetFromTransform((FRigControlValue *)&local_1e8,&local_a8,EVar4,EVar3);
          local_158.bValid = local_1e8.bValid;
          local_158._129_3_ = local_1e8._129_3_;
          local_d0 = local_227;
          local_158.Float00 = local_1e8.Float00;
          local_158.Float01 = local_1e8.Float01;
          local_158.Float02 = local_1e8.Float02;
          local_158.Float03 = local_1e8.Float03;
          local_158.Float10 = local_1e8.Float10;
          local_158.Float11 = local_1e8.Float11;
          local_158.Float12 = local_1e8.Float12;
          local_158.Float13 = local_1e8.Float13;
          local_c0 = 0;
          local_bc = 0;
          local_b8 = 0;
          local_b6 = 0;
          local_158.Float20 = local_1e8.Float20;
          local_158.Float21 = local_1e8.Float21;
          local_158.Float22 = local_1e8.Float22;
          local_158.Float23 = local_1e8.Float23;
          local_200 = local_220 + 2;
          local_158.Float30 = local_1e8.Float30;
          local_158.Float31 = local_1e8.Float31;
          local_158.Float32 = local_1e8.Float32;
          local_158.Float33 = local_1e8.Float33;
          local_1f8 = &local_158;
          local_158.Float00_2 = local_1e8.Float00_2;
          local_158.Float01_2 = local_1e8.Float01_2;
          local_158.Float02_2 = local_1e8.Float02_2;
          local_158.Float03_2 = local_1e8.Float03_2;
          local_158.Float10_2 = local_1e8.Float10_2;
          local_158.Float11_2 = local_1e8.Float11_2;
          local_158.Float12_2 = local_1e8.Float12_2;
          local_158.Float13_2 = local_1e8.Float13_2;
          local_158.Float20_2 = local_1e8.Float20_2;
          local_158.Float21_2 = local_1e8.Float21_2;
          local_158.Float22_2 = local_1e8.Float22_2;
          local_158.Float23_2 = local_1e8.Float23_2;
          local_158.Float30_2 = local_1e8.Float30_2;
          local_158.Float31_2 = local_1e8.Float31_2;
          local_158.Float32_2 = local_1e8.Float32_2;
          local_158.Float33_2 = local_1e8.Float33_2;
          local_d4 = 1;
          local_cc = 0x1ff;
          local_c8 = 0x7f7fffff;
          TSet<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FRigElementKey_const_&,UControlRig::FRigSetControlValueInfo_const_&>_>
                    ((TSet<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>,FDefaultSetAllocator>
                      *)&this->ControlValues,
                     (TPairInitializer<FRigElementKey_const_&,UControlRig::FRigSetControlValueInfo_const_&>
                      *)local_214,(bool *)&local_200);
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_220) &&
              ((FScriptContainerElement *)&local_220 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar8 = (code *)swi(3);
            pTVar19 = (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar19;
          }
          iVar18 = __return_storage_ptr__->ArrayNum;
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar18 + 1;
          *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar18 * 8) =
               local_220;
        }
        else {
          pFVar25 = ((ForAnyElementType *)local_214._4_8_)->Data;
          pFVar2 = pFVar25 + (longlong)*(int *)(local_214._4_8_ + 8) * 0xc;
          if (pFVar25 != pFVar2) {
            pUVar24 = *(UControlRig **)((longlong)local_220 + 0x14);
            do {
              if ((*(UControlRig **)(pFVar25 + 4) == pUVar24) &&
                 (*pFVar25 == *(FScriptContainerElement *)(local_220 + 2))) goto LAB_14a273ab4;
              pFVar25 = pFVar25 + 0xc;
            } while (pFVar25 != pFVar2);
          }
        }
      }
    }
    pFVar26 = pFVar26 + 0x110;
    uVar23 = (ulonglong)local_218;
    pFVar27 = pFVar27 + 0x110;
  } while( true );
}

// IsAdditive @ 14a273d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsAdditive(UControlRig *this)

{
  return this->bIsAdditive;
}

// IsConstructionModeEnabled @ 14a274120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsConstructionModeEnabled(UControlRig *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res8;
  
  if ((int)this->_padding_ == 1) {
    plVar2 = (longlong *)this->_padding_;
    plVar1 = plVar2 + 1;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
      if (*plVar2 == local_res8) {
        return true;
      }
    }
  }
  return false;
}

// IsConstructionRequired @ 14a274190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsConstructionRequired(UControlRig *this)

{
  bool bVar1;
  FName local_res10 [3];
  
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  bVar1 = URigVMHost::IsRunOnceEvent((URigVMHost *)this,local_res10);
  return bVar1;
}

// IsControlSelected @ 14a2741f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsControlSelected(UControlRig *this,FName *param_1)

{
  bool bVar1;
  FRigBaseElement *pFVar2;
  
  if ((this->DynamicHierarchy).field0_0x0.DebugPtr != (URigHierarchy *)0x0) {
    pFVar2 = (FRigBaseElement *)(**(code **)(this->_padding_ + 0x3c8))();
    if (pFVar2 != (FRigBaseElement *)0x0) {
      bVar1 = URigHierarchy::IsSelected((this->DynamicHierarchy).field0_0x0.DebugPtr,pFVar2);
      return bVar1;
    }
  }
  return false;
}

// IsCurveControl @ 14a274240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsCurveControl(UControlRig *this,FRigControlElement *param_1)

{
  return (param_1->Settings).bIsCurve;
}

// IsLinkedToOverrideAsset @ 14a274980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRig::IsLinkedToOverrideAsset(UControlRig *this,UControlRigOverrideAsset *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->OverrideAssets).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->OverrideAssets).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UControlRigOverrideAsset **)pFVar2 == (UControlRigOverrideAsset *)0x0) {
      bVar3 = param_1 == (UControlRigOverrideAsset *)0x0;
    }
    else {
      bVar3 = *(UControlRigOverrideAsset **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// IsModularRig @ 14a2749d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsModularRig(UControlRig *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UModularRig::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// IsNativeRig @ 14a275140

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsNativeRig(UControlRig *this)

{
  FUObjectItem *pFVar1;
  
  if (this->_padding_ != 0) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc));
    return (bool)((byte)((ulonglong)((pFVar1->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19) & 1);
  }
  return false;
}

// IsReplayEnabled @ 14a2751b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsReplayEnabled(UControlRig *this)

{
  if ((this->ReplayTimeIndex != -1) &&
     ((this->Replay).field0_0x0.DebugPtr != (UControlRigReplay *)0x0)) {
    return true;
  }
  return false;
}

// IsRigModule @ 14a2751f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsRigModule(UControlRig *this)

{
  FRigModuleSettings *pFVar1;
  
  pFVar1 = GetRigModuleSettings(this);
  return 1 < (pFVar1->Identifier).Name.Data.ArrayNum;
}

// IsRigModuleInstance @ 14a275210

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsRigModuleInstance(UControlRig *this)

{
  FRigModuleSettings *pFVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pFVar1 = GetRigModuleSettings(this);
  if (1 < (pFVar1->Identifier).Name.Data.ArrayNum) {
    pUVar2 = StaticClass();
    pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    return pUVar3 != (UObject *)0x0;
  }
  return false;
}

// IsStandaloneRig @ 14a275620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::IsStandaloneRig(UControlRig *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UModularRig::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return false;
      }
    }
  }
  return true;
}

// LinkOverrideAsset @ 14a2758b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall UControlRig::LinkOverrideAsset(UControlRig *this,UControlRigOverrideAsset *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UControlRigOverrideAsset *local_28 [2];
  code *local_18;
  undefined8 uStack_10;
  
  if (param_1 != (UControlRigOverrideAsset *)0x0) {
    pTVar2 = &this->OverrideAssets;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar7 + (longlong)(this->OverrideAssets).ArrayNum * 8;
    while( true ) {
      if (pFVar7 == pFVar3) {
        local_28[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar3 + (longlong)(this->OverrideAssets).ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = (this->OverrideAssets).ArrayNum;
        piVar1 = &(this->OverrideAssets).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        (this->OverrideAssets).ArrayNum = iVar6 + 1;
        *(UControlRigOverrideAsset **)(pFVar3 + (longlong)iVar6 * 8) = local_28[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28[0] != (UControlRigOverrideAsset *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_28[0]);
        }
        uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
        local_18 = HandleOverrideChanged;
        TMulticastDelegateRegistration<void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UControlRig>
                  ((TMulticastDelegateRegistration<void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
                    *)&param_1->OverrideChangedDelegate,(UControlRig *)&stack0x00000010,
                   (pmf_b63097fd *)this);
        TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OverrideAssetsChangedDelegate,this);
        RequestConstruction(this);
        return iVar6;
      }
      if ((*(UControlRigOverrideAsset **)pFVar7 != (UControlRigOverrideAsset *)0x0) &&
         (*(UControlRigOverrideAsset **)pFVar7 == param_1)) break;
      pFVar7 = pFVar7 + 8;
    }
  }
  return -1;
}

// ManipulationEnabled @ 14a275f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::ManipulationEnabled(UControlRig *this)

{
  return this->bManipulationEnabled;
}

// NumOverrideAssets @ 14a276e80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall UControlRig::NumOverrideAssets(UControlRig *this)

{
  return (this->OverrideAssets).ArrayNum;
}

// OnAddShapeLibrary @ 14a276ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UControlRig::OnAddShapeLibrary
          (UControlRig *this,FControlRigExecuteContext *param_1,FString *param_2,
          UControlRigShapeLibrary *param_3,bool param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  FString local_118;
  undefined1 local_108 [8];
  FSoftObjectPath local_100;
  FString local_e0;
  FString local_d0;
  undefined1 local_c0 [24];
  FUtf8String local_a8;
  FControlRigExecuteContext *local_98;
  FName local_90;
  UControlRigShapeLibrary *local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString *local_68;
  UControlRigShapeLibrary *local_60;
  FString local_58;
  FString local_48;
  
  if ((this->_padding_ & 0x10) == 0) {
    if (param_3 == (UControlRigShapeLibrary *)0x0) {
      if (param_1 == (FControlRigExecuteContext *)0x0) {
        return;
      }
      ::FString::FString(&local_e0,L"No shape library provided.");
      puVar2 = *(undefined8 **)&param_1->field_0x40;
      local_124 = 1;
      local_120 = 1;
      if (puVar2 == (undefined8 *)0x0) {
        if (1 < (byte)LogRigVM._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_FRigVMExecuteContext::Log(FRigVMLogSettings_const&___ptr64,FString_const&___ptr64)const___ptr64'
                      ::__l11::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        }
      }
      else {
        local_98 = param_1;
        UE::Core::Private::Function::CheckCallable((void *)*puVar2);
        pcVar3 = (code *)*puVar2;
        plVar10 = puVar2 + 2;
        if ((longlong *)puVar2[5] != (longlong *)0x0) {
          plVar10 = (longlong *)puVar2[5];
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar3)(uVar9,&local_124,&local_98,&local_e0);
      }
    }
    else {
      local_90.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_90.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_90,&local_d0);
      iVar14 = 0;
      if (*(int *)&(this->ShapeLibraryNameMap).field_0x8 !=
          *(int *)&(this->ShapeLibraryNameMap).field_0x34) {
        if (local_d0.Data.ArrayNum == 0) {
          pwVar11 = L"";
          local_d0.Data.ArrayNum = 0;
        }
        else {
          local_d0.Data.ArrayNum = local_d0.Data.ArrayNum + -1;
          pwVar11 = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(local_d0.Data.ArrayNum,pwVar11);
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&this->ShapeLibraryNameMap,uVar8,&local_d0);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      local_100.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.SubPathString.Data.ArrayNum = 0;
      local_100.SubPathString.Data.ArrayMax = 0;
      local_108 = (undefined1  [8])0x0;
      local_100.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_100.AssetPath.AssetName.Number = 0;
      local_100.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_100.AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&local_100.SubPathString,0);
      local_88 = param_3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_108,(FObjectPtr)&local_88);
      pFVar4 = (this->ShapeLibraries).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_108) &&
          ((FScriptContainerElement *)local_108 <
           pFVar4 + (longlong)(this->ShapeLibraries).ArrayMax * 0x28)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (this->ShapeLibraries).ArrayNum;
      if (iVar1 != 0) {
        pFVar4 = (this->ShapeLibraries).AllocatorInstance.Data;
        bVar6 = FSoftObjectPath::operator==((FSoftObjectPath *)(pFVar4 + 8),&local_100);
        bVar6 = !bVar6;
        iVar12 = 0;
        do {
          iVar5 = iVar12;
          do {
            iVar5 = iVar5 + 1;
            if (iVar1 <= iVar5) break;
            bVar7 = FSoftObjectPath::operator==
                              ((FSoftObjectPath *)(pFVar4 + ((longlong)iVar5 * 5 + 1) * 8),
                               &local_100);
          } while (bVar6 == !bVar7);
          iVar15 = iVar5 - iVar12;
          if (bVar6 == false) {
            DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
                      ((TSoftObjectPtr<UControlRigShapeLibrary> *)(pFVar4 + (longlong)iVar12 * 0x28)
                       ,iVar15);
          }
          else {
            if (iVar14 != iVar12) {
              memmove(pFVar4 + (longlong)iVar14 * 0x28,pFVar4 + (longlong)iVar12 * 0x28,
                      (longlong)iVar15 * 0x28);
            }
            iVar14 = iVar14 + iVar15;
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar12 = iVar5;
        } while (iVar5 < iVar1);
        (this->ShapeLibraries).ArrayNum = iVar14;
      }
      pwVar11 = L"";
      if (local_100.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.SubPathString.Data.AllocatorInstance.Data);
      }
      if ((this->ShapeLibraries).ArrayNum == 0) {
        RestoreShapeLibrariesFromCDO(this);
      }
      local_130 = (param_2->Data).ArrayNum;
      lVar13 = (longlong)local_130;
      pFVar4 = (param_2->Data).AllocatorInstance.Data;
      local_138.Data = (FScriptContainerElement *)0x0;
      if (local_130 == 0) {
        local_12c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130,0,&local_138,local_130,&local_12c);
        memcpy(local_138.Data,pFVar4,lVar13 * 2);
      }
      if (local_130 < 2) {
        local_80.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
        local_80.Number = *(uint *)&param_3->field_0x1c;
        ::FName::ToString(&local_80,&local_58);
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data);
        }
        local_138.Data = local_58.Data.AllocatorInstance.Data;
        local_130 = local_58.Data.ArrayNum;
        local_12c = local_58.Data.ArrayMax;
      }
      local_78.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
      local_78.Number = *(uint *)&param_3->field_0x1c;
      ::FName::ToString(&local_78,&local_48);
      if (local_130 == local_48.Data.ArrayNum) {
        if (local_130 < 2) {
          bVar6 = false;
        }
        else {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_138.Data,
                              (wchar_t *)local_48.Data.AllocatorInstance.Data);
          bVar6 = iVar14 != 0;
        }
      }
      else {
        bVar6 = local_130 + local_48.Data.ArrayNum != 1;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        local_70.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
        local_70.Number = *(uint *)&param_3->field_0x1c;
        ::FName::ToString(&local_70,&local_118);
        iVar14 = 0;
        if (local_118.Data.ArrayNum != 0) {
          pwVar11 = (wchar_t *)local_118.Data.AllocatorInstance.Data;
          iVar14 = local_118.Data.ArrayNum + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar11);
        iVar14 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                             *)&this->ShapeLibraryNameMap,uVar8,&local_118);
        if ((iVar14 == -1) ||
           (lVar13 = *(longlong *)&this->ShapeLibraryNameMap + (longlong)iVar14 * 0x28, lVar13 == 0)
           ) {
          local_68 = &local_118;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_&&>_>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->ShapeLibraryNameMap,(uint)&local_128,
                     (TKeyInitializer<FString_&&> *)(ulonglong)uVar8,(bool *)&local_68);
          lVar13 = *(longlong *)&this->ShapeLibraryNameMap + (longlong)local_128 * 0x28;
        }
        iVar14 = local_130 + -1;
        if (local_130 == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange((FString *)(lVar13 + 0x10),(wchar_t *)local_138.Data,iVar14);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_c0._0_8_ = 0;
      local_c0._16_8_ = 0;
      local_c0._8_8_ = 0;
      FUtf8String::Reset(&local_a8,0);
      local_60 = param_3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      FSoftObjectPtr::operator=((FSoftObjectPtr *)local_c0,(FObjectPtr)&local_60);
      TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TSoftObjectPtr<UControlRigShapeLibrary>_>
                (&this->ShapeLibraries,(TSoftObjectPtr<UControlRigShapeLibrary> *)local_c0);
      local_e0.Data.AllocatorInstance.Data = local_138.Data;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        local_e0.Data.AllocatorInstance.Data = local_138.Data;
      }
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnBeginDestroy @ 14a277480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMeshDeformerBeginDestroyEvent * __thiscall UControlRig::OnBeginDestroy(UControlRig *this)

{
  return (FMeshDeformerBeginDestroyEvent *)&this->_padding_;
}

// OnHierarchyTransformUndoRedo @ 14a277e30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::OnHierarchyTransformUndoRedo
          (UControlRig *this,URigHierarchy *param_1,FRigElementKey *param_2,Type param_3,
          TTransform<double> *param_4,bool param_5)

{
  FRigControlElement *pFVar1;
  FRigControlModifiedContext local_28;
  
  if (param_2->Type == Control) {
    pFVar1 = URigHierarchy::Find<FRigControlElement>(param_1,param_2);
    if (pFVar1 != (FRigControlElement *)0x0) {
      local_28.SetKey = Never;
      local_28.EventName.Number = 0;
      local_28.bConstraintUpdate = false;
      local_28.KeyMask = 0x1ff;
      local_28.LocalTime = 3.4028235e+38;
      local_28.EventName.ComparisonIndex.Value = 0;
      TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                   *)&this->OnControlModified,this,pFVar1,&local_28);
    }
  }
  return;
}

// OnShapeExists @ 14a278a90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::OnShapeExists(UControlRig *this,FName *param_1)

{
  TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *pTVar1;
  FControlRigShapeDefinition *pFVar2;
  
  (**(code **)(this->_padding_ + 0x410))();
  pTVar1 = (TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x410))(this);
  pFVar2 = UControlRigShapeLibrary::GetShapeByName(param_1,pTVar1,&this->ShapeLibraryNameMap,false);
  return pFVar2 != (FControlRigShapeDefinition *)0x0;
}

// PostInitInstance @ 14a27c180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UControlRig::PostInitInstance(UControlRig *this,URigVMHost *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  URigVMHost *pUVar5;
  URigVMHost *pUVar6;
  UClass *pUVar7;
  FName *pFVar8;
  UObject *pUVar9;
  FName FVar10;
  UPackage *pUVar11;
  FString *pFVar12;
  FRigModuleSettings *pFVar13;
  URigHierarchy *pUVar14;
  URigVM *pUVar15;
  FUObjectItem *pFVar16;
  FRigElementKeyRedirector *pFVar17;
  wchar_t *pwVar18;
  longlong *plVar19;
  EObjectFlags EVar20;
  undefined1 auStackY_208 [32];
  FGCScopeGuard local_1c8 [4];
  undefined8 local_1c4;
  undefined1 local_1b8 [16];
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FString local_190;
  undefined1 local_178 [128];
  undefined1 local_f8 [72];
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  EVar20 = RF_DefaultSubObject|RF_Public;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    EVar20 = RF_Transient|RF_Transactional;
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar19 = (longlong *)this->_padding_;
  pUVar5 = (URigVMHost *)FControlRigExecuteContext::StaticStruct();
  pUVar6 = (URigVMHost *)(**(code **)(plVar19[0x17] + 0x20))(plVar19 + 0x17);
  if (pUVar6 == (URigVMHost *)0x0) {
LAB_14a27c24e:
    pUVar6 = (URigVMHost *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14a27c24e;
  }
  if (pUVar6 != pUVar5) {
    (**(code **)(*plVar19 + 8))(plVar19,pUVar5);
  }
  URigVMHost::UpdateVMSettings((URigVMHost *)this);
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    FGCScopeGuard::FGCScopeGuard(local_1c8);
    pFVar8 = ::FName::FName((FName *)(local_1b8 + 8),L"DynamicHierarchy");
    FVar2 = *pFVar8;
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    pUVar9 = StaticFindObjectFast
                       (pUVar7,(UObject *)this,FVar2,ExactClass,RF_DefaultSubObject,Borrowed);
    if (pUVar9 != (UObject *)0x0) {
      pFVar8 = ::FName::FName(&local_1a8,L"DynamicHierarchy_Deleted");
      FVar2 = *pFVar8;
      FVar10 = (FName)Z_Construct_UClass_URigHierarchy_NoRegister();
      pUVar7 = (UClass *)GetTransientPackage();
      MakeUniqueObjectName((UObject *)local_1b8,pUVar7,FVar10,FVar2.ComparisonIndex.Value.Value);
      pcVar3 = *(code **)(*(longlong *)pUVar9 + 0x170);
      pUVar11 = GetTransientPackage();
      pFVar12 = ::FName::ToString((FName *)local_1b8,&local_190);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      (*pcVar3)(pUVar9,pwVar18,pUVar11);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar9);
    }
    FGCScopeGuard::~FGCScopeGuard(local_1c8);
  }
  pFVar13 = GetRigModuleSettings(this);
  if ((pFVar13->Identifier).Name.Data.ArrayNum < 2) {
LAB_14a27c38a:
    pFVar8 = ::FName::FName(&local_1a0,L"DynamicHierarchy");
    local_1c4 = 0;
    FVar2 = *pFVar8;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_178,pUVar7);
    local_178._48_8_ = (FObjectInstancingGraph *)0x0;
    local_178._56_8_ = (UPackage *)0x0;
    local_178._40_8_ = (UObject *)0x0;
    local_178[0x20] = false;
    local_178._8_8_ = this;
    local_178._16_8_ = FVar2;
    local_178._24_4_ = EVar20;
    pUVar14 = (URigHierarchy *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
    if (local_178._64_8_ != 0) {
      plVar19 = (longlong *)(local_178 + 0x50);
      if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_178._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (URigHierarchy *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    (this->DynamicHierarchy).field0_0x0.DebugPtr = pUVar14;
    bVar4 = IsInGameThread();
    if (!bVar4) {
      UObjectBaseUtility::AtomicallyClearInternalFlags
                ((UObjectBaseUtility *)(this->DynamicHierarchy).field0_0x0.DebugPtr,Async);
    }
  }
  else {
    pUVar7 = StaticClass();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    if (pUVar9 == (UObject *)0x0) goto LAB_14a27c38a;
  }
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    if (param_1 == (URigVMHost *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4044058622282436222>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xe7e,"InCDO");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (this->_padding_ != 0) {
        pUVar15 = URigVMHost::GetVM(param_1);
        if ((URigVM *)this->_padding_ == (URigVM *)0x0) {
          bVar4 = pUVar15 == (URigVM *)0x0;
        }
        else {
          bVar4 = (URigVM *)this->_padding_ == pUVar15;
        }
        if (!bVar4) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4044058622282436224>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                             ,0xe80,"VM == nullptr || VM == InCDO->GetVM()");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (this->_padding_ != 0) goto LAB_14a27c63b;
      }
      pUVar15 = URigVMHost::GetVM(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (URigVM *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      this->_padding_ = (longlong)pUVar15;
LAB_14a27c63b:
      pUVar7 = StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_14a27c661;
    }
  }
  else {
    if (param_1 != (URigVMHost *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCDO == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xe89,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->_padding_ == 0) {
      pFVar8 = ::FName::FName(&local_198,L"ControlRig_VM");
      pUVar15 = NewObject<URigVM>((UObject *)this,*pFVar8,EVar20,(UObject *)0x0,false,
                                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (URigVM *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      this->_padding_ = (longlong)pUVar15;
      bVar4 = IsInGameThread();
      if (!bVar4) {
        UObjectBaseUtility::AtomicallyClearInternalFlags
                  ((UObjectBaseUtility *)this->_padding_,Async);
      }
    }
    pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc));
    if (((ulonglong)((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this->_padding_ + 0xc));
      FUObjectItem::SetRootFlags(pFVar16,RootSet);
      pFVar13 = GetRigModuleSettings(this);
      if (1 < (pFVar13->Identifier).Name.Data.ArrayNum) {
        pUVar7 = StaticClass();
        pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
        if (pUVar9 != (UObject *)0x0) goto LAB_14a27c636;
      }
      pFVar16 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)((longlong)
                                    &((this->DynamicHierarchy).field0_0x0.DebugPtr)->_padding_ + 4))
      ;
      FUObjectItem::SetRootFlags(pFVar16,RootSet);
    }
LAB_14a27c636:
    if (param_1 != (URigVMHost *)0x0) goto LAB_14a27c63b;
  }
  param_1 = (URigVMHost *)0x0;
LAB_14a27c661:
  if (param_1 != (URigVMHost *)0x0) {
    pFVar17 = FRigElementKeyRedirector::FRigElementKeyRedirector
                        ((FRigElementKeyRedirector *)local_f8,
                         (FRigElementKeyRedirector *)
                         (param_1[2].EvaluateMutex.CriticalSection.Opaque3 + 2),
                         (this->DynamicHierarchy).field0_0x0.DebugPtr);
    FRigElementKeyRedirector::operator=(&this->ElementKeyRedirector,pFVar17);
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8);
    local_b0 = 0;
    if ((void *)local_f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
  }
  (**(code **)(this->_padding_ + 0x318))(this);
  return;
}

// PostInitInstanceIfRequired @ 14a27c720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::PostInitInstanceIfRequired(UControlRig *this)

{
  code *pcVar1;
  bool bVar2;
  UControlRig *pUVar3;
  
  if (((this->DynamicHierarchy).field0_0x0.DebugPtr == (URigHierarchy *)0x0) ||
     (this->_padding_ == 0)) {
    if ((this->_padding_ & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a27c754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x370))(this,0);
      return;
    }
    pUVar3 = UClass::GetDefaultObject<UControlRig>((UClass *)this->_padding_);
    if ((this->_padding_ != 0) && (this->_padding_ != pUVar3->_padding_)) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4044058622282436133>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xe25,"VM == nullptr || VM == CDO->VM");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x370))(this,pUVar3);
  }
  return;
}

// PostLoad @ 14a27c820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::PostLoad(UControlRig *this)

{
  int *piVar1;
  FRigInfluenceMapPerEvent *pFVar2;
  int iVar3;
  URigHierarchy *pUVar4;
  FName FVar5;
  code *pcVar6;
  EObjectFlags EVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  FRigInfluenceMap *this_00;
  EObjectFlags EVar13;
  FName *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStackY_178 [32];
  FName local_138;
  FName local_130;
  FName local_128;
  undefined1 local_118 [24];
  undefined1 local_100 [32];
  void *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FSetElementId> local_c0;
  int local_b8;
  undefined1 local_a8 [16];
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  URigVMHost::PostLoad((URigVMHost *)this);
  if (((this->_padding_ & 0x10) != 0) &&
     (pUVar4 = (this->DynamicHierarchy).field0_0x0.DebugPtr, pUVar4 != (URigHierarchy *)0x0)) {
    EVar13 = *(EObjectFlags *)&pUVar4->_padding_ | (RF_DefaultSubObject|RF_Public);
    EVar7 = *(EObjectFlags *)&pUVar4->_padding_ & RF_MirroredGarbage;
    if ((EVar7 != RF_NoFlags) &&
       (((*(EObjectFlags *)&pUVar4->_padding_ & EVar13 & RF_MirroredGarbage) != EVar7 &&
        (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0x4b,
                             L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                            ), bVar11)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar4,EVar13);
  }
  uVar9 = _UNK_150631d98;
  uVar8 = ___xmm_00000000ffffffff0000008000000000;
  uVar15 = 0;
  local_98.Elements._44_4_ = 0x80;
  local_a8._0_8_ = (FRigInfluenceMap *)0x0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar17 = uVar15;
  if (0 < (this->Influences).Maps.ArrayNum) {
    do {
      uVar16 = (uint)uVar17;
      uVar12 = 0;
      if ((int)uVar16 < (this->Influences).Maps.ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (FName *)((this->Influences).Maps.AllocatorInstance.Data + uVar15);
      local_118._0_8_ = *pFVar14;
      local_118._8_8_ = (FRigInfluenceEntry *)0x0;
      uVar12 = pFVar14[2].ComparisonIndex.Value;
      FVar5 = pFVar14[1];
      local_118._16_4_ = uVar12;
      if (uVar12 == 0) {
        local_118._20_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar12,0,(ForAnyElementType *)(local_118 + 8),uVar12,
                   (int *)(local_118 + 0x14));
        ConstructItems<FRigInfluenceEntry,FRigInfluenceEntry,int>
                  ((void *)local_118._8_8_,(FRigInfluenceEntry *)FVar5,uVar12);
      }
      local_100._0_8_ = (FScriptContainerElement *)0x0;
      local_100._8_8_ = 0;
      local_e0 = (void *)0x0;
      local_d8 = uVar8;
      uStack_d0 = uVar9;
      local_c0 = (ForElementType<FSetElementId>)0x0;
      local_b8 = 0;
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)local_100,
                  (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)(pFVar14 + 3));
      local_138.ComparisonIndex.Value = local_118._0_4_;
      local_138.Number = local_118._4_4_;
      bVar11 = ::FName::Equals((FName)local_118._0_8_,L"Update");
      if (bVar11) {
        FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
        local_138 = local_130;
      }
      else {
        bVar11 = ::FName::Equals(local_138,L"Inverse");
        if (bVar11) {
          FLazyName::Resolve(&FRigUnit_InverseExecution::EventName);
          local_138 = local_128;
        }
      }
      this_00 = FRigInfluenceMapPerEvent::FindOrAdd((FRigInfluenceMapPerEvent *)local_a8,&local_138)
      ;
      FRigInfluenceMap::Merge(this_00,(FRigInfluenceMap *)local_118,true);
      local_b8 = 0;
      if (local_c0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c0);
      }
      iVar3 = SUB84(local_100._8_8_,4);
      local_100._8_8_ = local_100._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)local_100,0,(int *)(local_100 + 0xc));
      }
      uVar12 = local_d8._4_4_;
      uStack_d0 = 0xffffffff;
      local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
      if (0x80 < uVar12) {
        local_d8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_100 + 0x10),0);
      }
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
      if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_100._0_8_);
      }
      DestructItems<FRigInfluenceEntry,int>((FRigInfluenceEntry *)local_118._8_8_,local_118._16_4_);
      if ((FRigInfluenceEntry *)local_118._8_8_ != (FRigInfluenceEntry *)0x0) {
        FMemory::Free((void *)local_118._8_8_);
      }
      uVar15 = uVar15 + 0x68;
      uVar17 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < (this->Influences).Maps.ArrayNum);
  }
  pFVar2 = &this->Influences;
  if (pFVar2 != (FRigInfluenceMapPerEvent *)local_a8) {
    DestructItems<FRigInfluenceMap,int>
              ((FRigInfluenceMap *)(pFVar2->Maps).AllocatorInstance.Data,
               (this->Influences).Maps.ArrayNum);
    uVar8 = local_a8._0_8_;
    uVar10 = local_a8._8_4_;
    piVar1 = &(this->Influences).Maps.ArrayMax;
    iVar3 = *piVar1;
    (this->Influences).Maps.ArrayNum = local_a8._8_4_;
    if ((local_a8._8_4_ == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,local_a8._8_4_,iVar3,(ForAnyElementType *)pFVar2,local_a8._8_4_,piVar1);
      ConstructItems<FRigInfluenceMap,FRigInfluenceMap,int>
                ((pFVar2->Maps).AllocatorInstance.Data,(FRigInfluenceMap *)uVar8,uVar10);
    }
  }
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&(this->Influences).EventToIndex,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)(local_a8 + 0x10));
  pUVar4 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (pUVar4 != (URigHierarchy *)0x0) {
    pUVar4->bUsePreferredEulerAngles = this->bIsAdditive == false;
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x10));
  DestructItems<FRigInfluenceMap,int>((FRigInfluenceMap *)local_a8._0_8_,local_a8._8_4_);
  if ((FRigInfluenceMap *)local_a8._0_8_ != (FRigInfluenceMap *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return;
}

// RegisterPhysicsSimulation @ 14a27ff00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRig::RegisterPhysicsSimulation
          (UControlRig *this,TSharedPtr<FRigPhysicsSimulationBase,1> *param_1,
          FRigComponentKey *param_2)

{
  FName FVar1;
  FName FVar2;
  FRigPhysicsSimulationBase *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  ERigElementType EVar7;
  undefined3 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1->Object == (FRigPhysicsSimulationBase *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  FVar1 = param_2->Name;
  uVar11 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = (param_2->ElementKey).Name;
  uVar12 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
  ::FindOrAddImpl<FRigComponentKey_const_&,TSharedPtr<FRigPhysicsSimulationBase,1>_const_&>
            ((TMapBase<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>_>
              *)&this->PhysicsSimulations,
             (uVar11 + FVar1.Number) * 0xf + (uVar12 + FVar2.Number) * 10 +
             (uint)(param_2->ElementKey).Type,param_2,param_1);
  EVar7 = (param_2->ElementKey).Type;
  uVar8 = *(undefined3 *)&(param_2->ElementKey).field_0x1;
  uVar12 = (param_2->ElementKey).Name.ComparisonIndex.Value;
  uVar5 = (param_2->ElementKey).Name.Number;
  uVar6 = (param_2->Name).ComparisonIndex.Value;
  uVar11 = (param_2->Name).Number;
  if ((param_1->Object == (FRigPhysicsSimulationBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pFVar3 = param_1->Object;
  (pFVar3->PhysicsSolverComponentKey).ElementKey.Type = EVar7;
  *(undefined3 *)&(pFVar3->PhysicsSolverComponentKey).ElementKey.field_0x1 = uVar8;
  (pFVar3->PhysicsSolverComponentKey).ElementKey.Name.ComparisonIndex.Value = uVar12;
  (pFVar3->PhysicsSolverComponentKey).ElementKey.Name.Number = uVar5;
  (pFVar3->PhysicsSolverComponentKey).Name.ComparisonIndex.Value = uVar6;
  (pFVar3->PhysicsSolverComponentKey).Name.Number = uVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// RequestConstruction @ 14a2885a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::RequestConstruction(UControlRig *this)

{
  code *pcVar1;
  undefined1 local_res8 [8];
  
  pcVar1 = *(code **)(this->_padding_ + 0x328);
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  (*pcVar1)(this,local_res8,0xffffffff);
  pcVar1 = *(code **)(this->_padding_ + 0x328);
  FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
  (*pcVar1)(this,local_res8,0xffffffff);
  return;
}

// RequestInit @ 14a288620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::RequestInit(UControlRig *this)

{
  (**(code **)(this->_padding_ + 0x3b8))();
  RequestConstruction(this);
  return;
}

// RequestInitVMs @ 14a288650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::RequestInitVMs(UControlRig *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// ResetControlValues @ 14a289920

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::ResetControlValues(UControlRig *this)

{
  TSet<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>,FDefaultSetAllocator>
           *)&this->ControlValues);
  return;
}

// RestoreShapeLibrariesFromCDO @ 14a28c7f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::RestoreShapeLibrariesFromCDO(UControlRig *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UControlRig *pUVar4;
  TArray<TSoftObjectPtr<UControlRigShapeLibrary>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (((this->_padding_ & 0x10) == 0) &&
     (pUVar4 = UClass::GetDefaultObject<UControlRig>((UClass *)this->_padding_),
     pUVar4 != (UControlRig *)0x0)) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)&this->ShapeLibraryNameMap);
    pTVar5 = &this->ShapeLibraries;
    if (pTVar5 != &pUVar4->ShapeLibraries) {
      DestructItems<TSoftObjectPtr<UControlRigShapeLibrary>,int>
                ((TSoftObjectPtr<UControlRigShapeLibrary> *)(pTVar5->AllocatorInstance).Data,
                 (this->ShapeLibraries).ArrayNum);
      iVar2 = (pUVar4->ShapeLibraries).ArrayNum;
      piVar1 = &(this->ShapeLibraries).ArrayMax;
      pFVar3 = (pUVar4->ShapeLibraries).AllocatorInstance.Data;
      (this->ShapeLibraries).ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar2,*piVar1,&pTVar5->AllocatorInstance,iVar2,piVar1);
      ConstructItems<TSoftObjectPtr<UControlRigShapeLibrary>,TSoftObjectPtr<UControlRigShapeLibrary>,int>
                ((pTVar5->AllocatorInstance).Data,(TSoftObjectPtr<UControlRigShapeLibrary> *)pFVar3,
                 iVar2);
    }
  }
  return;
}

// SelectControl @ 14a28d570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SelectControl(UControlRig *this,FName *param_1,bool param_2,bool param_3)

{
  URigHierarchy *this_00;
  URigHierarchyController *this_01;
  undefined4 local_28;
  FNameEntryId FStack_24;
  uint uStack_20;
  FRigElementKey local_18;
  
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if (this_00 != (URigHierarchy *)0x0) {
    this_01 = URigHierarchy::GetController(this_00,true);
    if (this_01 != (URigHierarchyController *)0x0) {
      FStack_24 = (*param_1).ComparisonIndex;
      uStack_20 = (*param_1).Number;
      local_18.Name.Number = uStack_20;
      local_28 = CONCAT31(local_28._1_3_,4);
      local_18.Name.ComparisonIndex.Value = FStack_24.Value;
      local_18._0_4_ = local_28;
      URigHierarchyController::SelectElement(this_01,&local_18,param_2,false,param_3);
    }
  }
  return;
}

// Serialize @ 14a28e8f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::Serialize(UControlRig *this,FArchive *param_1)

{
  int iVar1;
  TArray<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_> local_18;
  
  FStatsHierarchical::BeginMeasurement("UControlRig::Serialize");
  URigVMHost::Serialize((URigVMHost *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar1 < 0x1f) {
    TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>_>,TDefaultMapHashableKeyFuncs<FRigComponentKey,TSharedPtr<FRigPhysicsSimulationBase,1>,0>,FDefaultSetAllocator>
             *)&this->PhysicsSimulations);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FRigPhysicsSolverDescription,TSizedDefaultAllocator<32>_>
              (param_1,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  if ((param_1->field_0x2b & 1) != 0) {
    TArrayPrivateFriend::Serialize<TObjectPtr<UControlRigOverrideAsset>,TSizedDefaultAllocator<32>_>
              (param_1,&this->OverrideAssets);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Serialize @ 14a28e9a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::Serialize(UControlRig *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetBoneInitialTransformsFromAnimInstance @ 14a28f430

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetBoneInitialTransformsFromAnimInstance(UControlRig *this,UAnimInstance *param_1)

{
  code *pcVar1;
  FBoneContainer *pFVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FBoneContainer *pFVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FMemMark local_c8;
  FMemMark local_a0;
  FBaseCompactPose<TMemStackAllocator<0>_> local_78;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  UControlRig *local_40;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_38;
  code *local_30;
  UControlRig **local_28;
  
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_58 = local_res18;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar4);
  local_a0.Mem = (FMemStackBase *)(pFVar5 + 2);
  local_a0.Top = (local_a0.Mem)->Top;
  local_a0.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_a0.bPopped = false;
  local_a0.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_a0;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  local_78.BoneContainer = (FBoneContainer *)0x0;
  pFVar6 = UAnimInstance::GetRequiredBones(param_1);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose(&local_78,pFVar6);
  pFVar6 = local_78.BoneContainer;
  if (local_78.BoneContainer != (FBoneContainer *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid(&((local_78.BoneContainer)->Asset).WeakPtr);
    pFVar2 = local_78.BoneContainer;
    if (((bVar3) && (pFVar6->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (pFVar6->BoneIndicesArray).ArrayNum)) {
      bVar3 = FWeakObjectPtr::IsValid(&((local_78.BoneContainer)->Asset).WeakPtr);
      if (((bVar3) && (pFVar2->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
         (0 < (pFVar2->BoneIndicesArray).ArrayNum)) {
        puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
        local_48 = local_res20;
        local_50 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar5 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar4);
        local_c8.Mem = (FMemStackBase *)(pFVar5 + 2);
        local_c8.Top = (local_c8.Mem)->Top;
        local_c8.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
        local_c8.bPopped = false;
        local_c8.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
        pFVar5[5] = (FTlsAutoCleanup)&local_c8;
        *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
        local_38 = &local_78;
        local_28 = &local_40;
        local_30 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UControlRig::SetBoneInitialTransformsFromCompactPose'::__l2::<lambda_1>,bool,FRigBoneElement_*>
                   ::Call;
        local_40 = this;
        URigHierarchy::ForEach<FRigBoneElement>
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,
                   (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_30);
        this->bResetInitialTransformsBeforeConstruction = false;
        RequestConstruction(this);
        if (local_c8.bPopped == false) {
          if ((local_c8.Mem)->TopMark != &local_c8) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_c8.bPopped = true;
          (local_c8.Mem)->NumMarks = (local_c8.Mem)->NumMarks + -1;
          if (local_c8.SavedChunk != (local_c8.Mem)->TopChunk) {
            FMemStackBase::FreeChunks(local_c8.Mem,local_c8.SavedChunk);
          }
          (local_c8.Mem)->Top = local_c8.Top;
          (local_c8.Mem)->TopMark = local_c8.NextTopmostMark;
          local_c8.Top = (uchar *)0x0;
        }
      }
    }
  }
  if (local_a0.bPopped == false) {
    if ((local_a0.Mem)->TopMark != &local_a0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_a0.bPopped = true;
    (local_a0.Mem)->NumMarks = (local_a0.Mem)->NumMarks + -1;
    if (local_a0.SavedChunk != (local_a0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_a0.Mem,local_a0.SavedChunk);
    }
    (local_a0.Mem)->Top = local_a0.Top;
    (local_a0.Mem)->TopMark = local_a0.NextTopmostMark;
  }
  return;
}

// SetBoneInitialTransformsFromAnimInstanceProxy @ 14a28f6b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetBoneInitialTransformsFromAnimInstanceProxy
          (UControlRig *this,FAnimInstanceProxy *param_1)

{
  code *pcVar1;
  FBoneContainer *pFVar2;
  FBoneContainer *pFVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FMemMark local_c8;
  FMemMark local_a0;
  FBaseCompactPose<TMemStackAllocator<0>_> local_78;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  UControlRig *local_40;
  FBaseCompactPose<TMemStackAllocator<0>_> *local_38;
  code *local_30;
  UControlRig **local_28;
  
  puVar5 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_58 = local_res10;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar5);
  local_a0.Mem = (FMemStackBase *)(pFVar6 + 2);
  local_a0.Top = (local_a0.Mem)->Top;
  local_a0.SavedChunk = *(FTaggedMemory **)(pFVar6 + 4);
  local_a0.bPopped = false;
  local_a0.NextTopmostMark = *(FMemMark **)(pFVar6 + 5);
  pFVar6[5] = (FTlsAutoCleanup)&local_a0;
  *(int *)(pFVar6 + 6) = *(int *)(pFVar6 + 6) + 1;
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  local_78.BoneContainer = (FBoneContainer *)0x0;
  if ((param_1->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            (&local_78,(param_1->RequiredBones).Object);
  pFVar2 = local_78.BoneContainer;
  if (local_78.BoneContainer != (FBoneContainer *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid(&((local_78.BoneContainer)->Asset).WeakPtr);
    pFVar3 = local_78.BoneContainer;
    if (((bVar4) && (pFVar2->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (pFVar2->BoneIndicesArray).ArrayNum)) {
      bVar4 = FWeakObjectPtr::IsValid(&((local_78.BoneContainer)->Asset).WeakPtr);
      if (((bVar4) && (pFVar3->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
         (0 < (pFVar3->BoneIndicesArray).ArrayNum)) {
        puVar5 = TThreadSingleton<FMemStack>::GetTlsSlot();
        local_48 = local_res18;
        local_50 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar6 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar5);
        local_c8.Mem = (FMemStackBase *)(pFVar6 + 2);
        local_c8.Top = (local_c8.Mem)->Top;
        local_c8.SavedChunk = *(FTaggedMemory **)(pFVar6 + 4);
        local_c8.bPopped = false;
        local_c8.NextTopmostMark = *(FMemMark **)(pFVar6 + 5);
        pFVar6[5] = (FTlsAutoCleanup)&local_c8;
        *(int *)(pFVar6 + 6) = *(int *)(pFVar6 + 6) + 1;
        local_38 = &local_78;
        local_28 = &local_40;
        local_30 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UControlRig::SetBoneInitialTransformsFromCompactPose'::__l2::<lambda_1>,bool,FRigBoneElement_*>
                   ::Call;
        local_40 = this;
        URigHierarchy::ForEach<FRigBoneElement>
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,
                   (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_30);
        this->bResetInitialTransformsBeforeConstruction = false;
        RequestConstruction(this);
        if (local_c8.bPopped == false) {
          if ((local_c8.Mem)->TopMark != &local_c8) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L"");
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_c8.bPopped = true;
          (local_c8.Mem)->NumMarks = (local_c8.Mem)->NumMarks + -1;
          if (local_c8.SavedChunk != (local_c8.Mem)->TopChunk) {
            FMemStackBase::FreeChunks(local_c8.Mem,local_c8.SavedChunk);
          }
          (local_c8.Mem)->Top = local_c8.Top;
          (local_c8.Mem)->TopMark = local_c8.NextTopmostMark;
          local_c8.Top = (uchar *)0x0;
        }
      }
    }
  }
  if (local_a0.bPopped == false) {
    if ((local_a0.Mem)->TopMark != &local_a0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_a0.bPopped = true;
    (local_a0.Mem)->NumMarks = (local_a0.Mem)->NumMarks + -1;
    if (local_a0.SavedChunk != (local_a0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_a0.Mem,local_a0.SavedChunk);
    }
    (local_a0.Mem)->Top = local_a0.Top;
    (local_a0.Mem)->TopMark = local_a0.NextTopmostMark;
  }
  return;
}

// SetBoneInitialTransformsFromCompactPose @ 14a28f960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetBoneInitialTransformsFromCompactPose(UControlRig *this,FCompactPose *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  undefined1 local_res10 [8];
  code *local_68;
  undefined1 *local_60;
  UControlRig *local_58;
  FCompactPose *local_50;
  code *local_48;
  UControlRig **local_40;
  FMemMark local_38;
  
  if (param_1 == (FCompactPose *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCompactPose",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xddc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)&param_1->field_0x10;
  if (lVar1 != 0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x30));
    if (((bVar3) && (*(longlong *)(lVar1 + 0x48) != 0)) && (0 < *(int *)(lVar1 + 8))) {
      lVar1 = *(longlong *)&param_1->field_0x10;
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x30));
      if (((bVar3) && (*(longlong *)(lVar1 + 0x48) != 0)) && (0 < *(int *)(lVar1 + 8))) {
        puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
        local_60 = local_res10;
        local_68 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar5 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar4);
        local_38.Mem = (FMemStackBase *)(pFVar5 + 2);
        local_38.Top = (local_38.Mem)->Top;
        local_38.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
        local_38.bPopped = false;
        local_38.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
        pFVar5[5] = (FTlsAutoCleanup)&local_38;
        *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
        local_40 = &local_58;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UControlRig::SetBoneInitialTransformsFromCompactPose'::__l2::<lambda_1>,bool,FRigBoneElement_*>
                   ::Call;
        local_58 = this;
        local_50 = param_1;
        URigHierarchy::ForEach<FRigBoneElement>
                  ((this->DynamicHierarchy).field0_0x0.DebugPtr,
                   (TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_48);
        this->bResetInitialTransformsBeforeConstruction = false;
        RequestConstruction(this);
        if (local_38.bPopped == false) {
          if ((local_38.Mem)->TopMark != &local_38) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mem.TopMark == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                               ,0x215,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          local_38.bPopped = true;
          (local_38.Mem)->NumMarks = (local_38.Mem)->NumMarks + -1;
          if (local_38.SavedChunk != (local_38.Mem)->TopChunk) {
            FMemStackBase::FreeChunks(local_38.Mem,local_38.SavedChunk);
          }
          (local_38.Mem)->Top = local_38.Top;
          (local_38.Mem)->TopMark = local_38.NextTopmostMark;
        }
      }
    }
  }
  return;
}

// SetBoneInitialTransformsFromRefSkeleton @ 14a28fb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetBoneInitialTransformsFromRefSkeleton(UControlRig *this,FReferenceSkeleton *param_1)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_168 [32];
  code *local_148;
  UControlRig **local_140;
  UControlRig *local_138;
  FReferenceSkeleton local_130;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((this->DynamicHierarchy).field0_0x0.DebugPtr == (URigHierarchy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicHierarchy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xdc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  local_138 = this;
  FReferenceSkeleton::FReferenceSkeleton(&local_130,param_1);
  local_140 = &local_138;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`UControlRig::SetBoneInitialTransformsFromRefSkeleton'::__l2::<lambda_1>,bool,FRigBoneElement_*>
              ::Call;
  URigHierarchy::ForEach<FRigBoneElement>
            (this_00,(TFunctionRef<bool___cdecl(FRigBoneElement_*)> *)&local_148);
  FReferenceSkeleton::~FReferenceSkeleton(&local_130);
  this->bResetInitialTransformsBeforeConstruction = false;
  RequestConstruction(this);
  return;
}

// SetBoneInitialTransformsFromSkeletalMesh @ 14a28fc10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetBoneInitialTransformsFromSkeletalMesh(UControlRig *this,USkeletalMesh *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4044058622282436030>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xdbe,"InSkeletalMesh");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x478);
    uVar3 = (**(code **)(param_1->_padding_ + 800))(param_1);
    (*pcVar1)(this,uVar3);
  }
  return;
}

// SetBoneInitialTransformsFromSkeletalMeshComponent @ 14a28fce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetBoneInitialTransformsFromSkeletalMeshComponent
          (UControlRig *this,USkeletalMeshComponent *param_1,bool param_2)

{
  bool bVar1;
  UAnimInstance *pUVar2;
  USkeletalMesh *pUVar3;
  code *pcVar4;
  
  if ((param_1 == (USkeletalMeshComponent *)0x0) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSkelMeshComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xdae,L""), bVar1)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->DynamicHierarchy).field0_0x0.DebugPtr == (URigHierarchy *)0x0) &&
     (bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicHierarchy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xdaf,L""), bVar1)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2) ||
     (pUVar2 = USkeletalMeshComponent::GetAnimInstance(param_1), pUVar2 == (UAnimInstance *)0x0)) {
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    if (pUVar3 == (USkeletalMesh *)0x0) {
      return;
    }
    pcVar4 = *(code **)(this->_padding_ + 0x470);
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
  }
  else {
    pcVar4 = *(code **)(this->_padding_ + 0x458);
    pUVar3 = (USkeletalMesh *)USkeletalMeshComponent::GetAnimInstance(param_1);
  }
  (*pcVar4)(this,pUVar3);
  return;
}

// SetControlCustomization @ 14a290860

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetControlCustomization
          (UControlRig *this,FRigElementKey *param_1,FRigControlElementCustomization *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRigControlElementCustomization *this_00;
  
  if (param_1->Type != Control) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InControl.Type == ERigElementType::Control",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                       ,0xe15,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = param_1->Name;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
            ::FindOrAddImpl<FRigElementKey_const_&>
                      ((TMapBase<FRigElementKey,FRigControlElementCustomization,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FRigControlElementCustomization,0>_>
                        *)&this->ControlCustomizations,
                       (uint)param_1->Type + (uVar4 + FVar1.Number) * 10,param_1);
  FRigControlElementCustomization::operator=(this_00,param_2);
  return;
}

// SetControlGlobalTransform @ 14a2909e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRig::SetControlGlobalTransform
          (UControlRig *this,FName *param_1,TTransform<double> *param_2,bool param_3,
          FRigControlModifiedContext *param_4,bool param_5,bool param_6,bool param_7)

{
  __m128d *p_Var1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  double *pdVar5;
  FRigControlElement *pFVar6;
  undefined7 in_register_00000089;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [16];
  FRigControlValueStorage local_1c8;
  TTransform<double> local_138;
  FRigControlValueStorage local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_138.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_138.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_138.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_138.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_138.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_138.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_138.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_138.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_138.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
  local_138.Scale3D.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
  local_138.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
  local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
  p_Var1 = &(param_2->Scale3D).ZW;
  local_138.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
  local_138.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  cVar3 = (**(code **)(this->_padding_ + 0x3d8))
                    (local_138.Scale3D.XY.m128d_f64[0]._0_4_,*(undefined4 *)p_Var1->m128d_f64,
                     param_2,CONCAT71(in_register_00000089,param_3));
  if (cVar3 != '\0') {
    pdVar5 = (double *)(**(code **)(this->_padding_ + 0x3e0))(this,&local_d8,param_1,&local_138);
    local_138.Rotation.XY.m128d_f64[0] = *pdVar5;
    local_138.Rotation.XY.m128d_f64[1] = pdVar5[1];
    local_138.Rotation.ZW.m128d_f64[0] = pdVar5[2];
    local_138.Rotation.ZW.m128d_f64[1] = pdVar5[3];
    local_138.Translation.XY.m128d_f64[0] = pdVar5[4];
    local_138.Translation.XY.m128d_f64[1] = pdVar5[5];
    local_138.Translation.ZW.m128d_f64[0] = pdVar5[6];
    local_138.Translation.ZW.m128d_f64[1] = pdVar5[7];
    local_138.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pdVar5 + 8);
    local_138.Scale3D.XY.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)pdVar5 + 0x44);
    local_138.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pdVar5 + 9);
    local_138.Scale3D.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)pdVar5 + 0x4c);
    local_138.Scale3D.ZW.m128d_f64[0] = pdVar5[10];
    local_138.Scale3D.ZW.m128d_f64[1] = pdVar5[0xb];
  }
  pFVar6 = (FRigControlElement *)(**(code **)(this->_padding_ + 0x3c8))(this,param_1);
  cVar3 = (**(code **)(this->_padding_ + 0x490))(this);
  if (((cVar3 == '\0') || (pFVar6 == (FRigControlElement *)0x0)) ||
     ((pFVar6->Settings).AnimationType != ProxyControl)) {
    (**(code **)(this->_padding_ + 0x3f8))(this,&local_1c8,param_1,&local_138);
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnFilterControl)
    ;
    if ((bVar4) && (pFVar6 != (FRigControlElement *)0x0)) {
      TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlValue_&),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlValue_&),FDefaultDelegateUserPolicy>
                   *)&this->OnFilterControl,this,pFVar6,(FRigControlValue *)&local_1c8);
    }
    local_d8.bValid = local_1c8.bValid;
    local_d8._129_3_ = local_1c8._129_3_;
    local_d8.Float00 = local_1c8.Float00;
    local_d8.Float01 = local_1c8.Float01;
    local_d8.Float02 = local_1c8.Float02;
    local_d8.Float03 = local_1c8.Float03;
    local_d8.Float10 = local_1c8.Float10;
    local_d8.Float11 = local_1c8.Float11;
    local_d8.Float12 = local_1c8.Float12;
    local_d8.Float13 = local_1c8.Float13;
    local_d8.Float20 = local_1c8.Float20;
    local_d8.Float21 = local_1c8.Float21;
    local_d8.Float22 = local_1c8.Float22;
    local_d8.Float23 = local_1c8.Float23;
    local_d8.Float30 = local_1c8.Float30;
    local_d8.Float31 = local_1c8.Float31;
    local_d8.Float32 = local_1c8.Float32;
    local_d8.Float33 = local_1c8.Float33;
    local_d8.Float00_2 = local_1c8.Float00_2;
    local_d8.Float01_2 = local_1c8.Float01_2;
    local_d8.Float02_2 = local_1c8.Float02_2;
    local_d8.Float03_2 = local_1c8.Float03_2;
    local_d8.Float10_2 = local_1c8.Float10_2;
    local_d8.Float11_2 = local_1c8.Float11_2;
    local_d8.Float12_2 = local_1c8.Float12_2;
    local_d8.Float13_2 = local_1c8.Float13_2;
    local_d8.Float20_2 = local_1c8.Float20_2;
    local_d8.Float21_2 = local_1c8.Float21_2;
    local_d8.Float22_2 = local_1c8.Float22_2;
    local_d8.Float23_2 = local_1c8.Float23_2;
    local_d8.Float30_2 = local_1c8.Float30_2;
    local_d8.Float31_2 = local_1c8.Float31_2;
    local_d8.Float32_2 = local_1c8.Float32_2;
    local_d8.Float33_2 = local_1c8.Float33_2;
    (**(code **)(this->_padding_ + 0x3f0))(this,param_1,&local_d8,param_3);
  }
  else {
    URigHierarchy::SetTransform
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,(FRigTransformElement *)pFVar6,
               &local_138,CurrentGlobal,true,false,false,false);
    pcVar2 = *(code **)(this->_padding_ + 0x2f0);
    FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
    (*pcVar2)(this,local_1d8);
  }
  return true;
}

// SetControlLocalTransform @ 14a290d20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetControlLocalTransform
          (UControlRig *this,FName *param_1,TTransform<double> *param_2,bool param_3,
          FRigControlModifiedContext *param_4,bool param_5,bool param_6)

{
  bool bVar1;
  FRigControlElement *pFVar2;
  undefined7 in_register_00000089;
  FRigControlValueStorage local_138;
  FRigControlValueStorage local_a8;
  
  pFVar2 = (FRigControlElement *)
           (**(code **)(this->_padding_ + 0x3c8))
                     (this,param_1,param_2,CONCAT71(in_register_00000089,param_3));
  if (pFVar2 != (FRigControlElement *)0x0) {
    local_138.Float00 = 0.0;
    local_138.Float01 = 0.0;
    local_138.Float02 = 0.0;
    local_138.Float03 = 0.0;
    local_138.bValid = false;
    local_138._129_3_ = 0;
    local_138.Float10 = 0.0;
    local_138.Float11 = 0.0;
    local_138.Float12 = 0.0;
    local_138.Float13 = 0.0;
    local_138.Float20 = 0.0;
    local_138.Float21 = 0.0;
    local_138.Float22 = 0.0;
    local_138.Float23 = 0.0;
    local_138.Float30 = 0.0;
    local_138.Float31 = 0.0;
    local_138.Float32 = 0.0;
    local_138.Float33 = 0.0;
    local_138.Float00_2 = 0.0;
    local_138.Float01_2 = 0.0;
    local_138.Float02_2 = 0.0;
    local_138.Float03_2 = 0.0;
    local_138.Float10_2 = 0.0;
    local_138.Float11_2 = 0.0;
    local_138.Float12_2 = 0.0;
    local_138.Float13_2 = 0.0;
    local_138.Float20_2 = 0.0;
    local_138.Float21_2 = 0.0;
    local_138.Float22_2 = 0.0;
    local_138.Float23_2 = 0.0;
    local_138.Float30_2 = 0.0;
    local_138.Float31_2 = 0.0;
    local_138.Float32_2 = 0.0;
    local_138.Float33_2 = 0.0;
    FRigControlValue::SetFromTransform
              ((FRigControlValue *)&local_138,param_2,(pFVar2->Settings).ControlType,
               (pFVar2->Settings).PrimaryAxis);
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnFilterControl)
    ;
    if (bVar1) {
      TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlValue_&),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlValue_&),FDefaultDelegateUserPolicy>
                   *)&this->OnFilterControl,this,pFVar2,(FRigControlValue *)&local_138);
    }
    local_a8.bValid = local_138.bValid;
    local_a8._129_3_ = local_138._129_3_;
    local_a8.Float00 = local_138.Float00;
    local_a8.Float01 = local_138.Float01;
    local_a8.Float02 = local_138.Float02;
    local_a8.Float03 = local_138.Float03;
    local_a8.Float10 = local_138.Float10;
    local_a8.Float11 = local_138.Float11;
    local_a8.Float12 = local_138.Float12;
    local_a8.Float13 = local_138.Float13;
    local_a8.Float20 = local_138.Float20;
    local_a8.Float21 = local_138.Float21;
    local_a8.Float22 = local_138.Float22;
    local_a8.Float23 = local_138.Float23;
    local_a8.Float30 = local_138.Float30;
    local_a8.Float31 = local_138.Float31;
    local_a8.Float32 = local_138.Float32;
    local_a8.Float33 = local_138.Float33;
    local_a8.Float00_2 = local_138.Float00_2;
    local_a8.Float01_2 = local_138.Float01_2;
    local_a8.Float02_2 = local_138.Float02_2;
    local_a8.Float03_2 = local_138.Float03_2;
    local_a8.Float10_2 = local_138.Float10_2;
    local_a8.Float11_2 = local_138.Float11_2;
    local_a8.Float12_2 = local_138.Float12_2;
    local_a8.Float13_2 = local_138.Float13_2;
    local_a8.Float20_2 = local_138.Float20_2;
    local_a8.Float21_2 = local_138.Float21_2;
    local_a8.Float22_2 = local_138.Float22_2;
    local_a8.Float23_2 = local_138.Float23_2;
    local_a8.Float30_2 = local_138.Float30_2;
    local_a8.Float31_2 = local_138.Float31_2;
    local_a8.Float32_2 = local_138.Float32_2;
    local_a8.Float33_2 = local_138.Float33_2;
    (**(code **)(this->_padding_ + 0x3f0))(this,param_1,&local_a8,param_3,param_4,param_5,0,param_6)
    ;
  }
  return;
}

// SetControlValueImpl @ 14a291df0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetControlValueImpl
          (UControlRig *this,FName *param_1,FRigControlValue *param_2,bool param_3,
          FRigControlModifiedContext *param_4,bool param_5,bool param_6,bool param_7)

{
  URigHierarchy *this_00;
  bool bVar1;
  int iVar2;
  FRigControlElement *pFVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  FRigElementKey local_e8;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  bool local_28;
  bool local_27;
  bool local_26;
  
  local_e8.Name = *param_1;
  this_00 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  local_e8.Type = Control;
  iVar2 = URigHierarchy::GetIndex(this_00,&local_e8,true);
  pFVar3 = (FRigControlElement *)URigHierarchy::Get(this_00,iVar2);
  if (pFVar3 != (FRigControlElement *)0x0) {
    lVar4 = (**(code **)(*(longlong *)pFVar3 + 0x10))(pFVar3);
    pUVar5 = FRigControlElement::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (this->bIsAdditive == false) {
          URigHierarchy::SetControlValue
                    ((this->DynamicHierarchy).field0_0x0.DebugPtr,pFVar3,param_2,Current,param_5,
                     false,param_6,param_7);
          if (param_3) {
            bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this->OnControlModified);
            if (bVar1) {
              TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast((TMulticastDelegate<void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                           *)&this->OnControlModified,this,pFVar3,param_4);
            }
          }
        }
        else {
          local_48 = *(undefined4 *)&(param_2->FloatStorage).bValid;
          local_c8._0_4_ = (param_2->FloatStorage).Float00;
          local_c8._4_4_ = (param_2->FloatStorage).Float01;
          uStack_c0._0_4_ = (param_2->FloatStorage).Float02;
          uStack_c0._4_4_ = (param_2->FloatStorage).Float03;
          local_b8._0_4_ = (param_2->FloatStorage).Float10;
          local_b8._4_4_ = (param_2->FloatStorage).Float11;
          uStack_b0._0_4_ = (param_2->FloatStorage).Float12;
          uStack_b0._4_4_ = (param_2->FloatStorage).Float13;
          local_a8._0_4_ = (param_2->FloatStorage).Float20;
          local_a8._4_4_ = (param_2->FloatStorage).Float21;
          uStack_a0._0_4_ = (param_2->FloatStorage).Float22;
          uStack_a0._4_4_ = (param_2->FloatStorage).Float23;
          local_28 = param_5;
          local_98._0_4_ = (param_2->FloatStorage).Float30;
          local_98._4_4_ = (param_2->FloatStorage).Float31;
          uStack_90._0_4_ = (param_2->FloatStorage).Float32;
          uStack_90._4_4_ = (param_2->FloatStorage).Float33;
          local_27 = param_6;
          local_88._0_4_ = (param_2->FloatStorage).Float00_2;
          local_88._4_4_ = (param_2->FloatStorage).Float01_2;
          uStack_80._0_4_ = (param_2->FloatStorage).Float02_2;
          uStack_80._4_4_ = (param_2->FloatStorage).Float03_2;
          local_26 = param_7;
          local_d8 = &pFVar3->field_0x10;
          local_78._0_4_ = (param_2->FloatStorage).Float10_2;
          local_78._4_4_ = (param_2->FloatStorage).Float11_2;
          uStack_70._0_4_ = (param_2->FloatStorage).Float12_2;
          uStack_70._4_4_ = (param_2->FloatStorage).Float13_2;
          local_d0 = &local_c8;
          local_68._0_4_ = (param_2->FloatStorage).Float20_2;
          local_68._4_4_ = (param_2->FloatStorage).Float21_2;
          uStack_60._0_4_ = (param_2->FloatStorage).Float22_2;
          uStack_60._4_4_ = (param_2->FloatStorage).Float23_2;
          local_58._0_4_ = (param_2->FloatStorage).Float30_2;
          local_58._4_4_ = (param_2->FloatStorage).Float31_2;
          uStack_50._0_4_ = (param_2->FloatStorage).Float32_2;
          uStack_50._4_4_ = (param_2->FloatStorage).Float33_2;
          local_40._0_1_ = param_4->SetKey;
          local_40._1_3_ = *(undefined3 *)&param_4->field_0x1;
          local_40._4_4_ = param_4->KeyMask;
          uStack_38._0_4_ = param_4->LocalTime;
          uStack_38._4_4_ = (param_4->EventName).ComparisonIndex;
          local_30 = *(undefined8 *)&(param_4->EventName).Number;
          local_44 = param_3;
          TSet<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FRigElementKey_const_&,UControlRig::FRigSetControlValueInfo_const_&>_>
                    ((TSet<TTuple<FRigElementKey,UControlRig::FRigSetControlValueInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSetControlValueInfo,0>,FDefaultSetAllocator>
                      *)&this->ControlValues,
                     (TPairInitializer<FRigElementKey_const_&,UControlRig::FRigSetControlValueInfo_const_&>
                      *)&stack0x00000008,(bool *)&local_d8);
          if (param_4->SetKey == Always) {
            bVar1 = IsInGameThread();
            if (bVar1) {
              (**(code **)(this->_padding_ + 0x2d0))(this);
            }
          }
        }
      }
    }
  }
  return;
}

// SetDynamicHierarchy @ 14a2920e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetDynamicHierarchy(UControlRig *this,TObjectPtr<URigHierarchy> param_1)

{
  URigHierarchy *pUVar1;
  code *pcVar2;
  UPackage *pUVar3;
  
  pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  if ((pUVar1 != (URigHierarchy *)0x0) && ((UControlRig *)pUVar1->_padding_ == this)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->UndoRedoEvent,this);
    pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x170);
    pUVar3 = GetTransientPackage();
    (*pcVar2)(pUVar1,0,pUVar3,0x34);
    UObjectBaseUtility::MarkAsGarbage
              ((UObjectBaseUtility *)(this->DynamicHierarchy).field0_0x0.DebugPtr);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)param_1.field0_0x0 == (UObject *)0x0) {
      (this->DynamicHierarchy).field0_0x0.DebugPtr = (URigHierarchy *)0x0;
      return;
    }
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->DynamicHierarchy).field0_0x0 = *param_1.field0_0x0;
  return;
}

// SetElementKeyRedirector @ 14a2921a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetElementKeyRedirector(UControlRig *this,FRigElementKeyRedirector *param_1)

{
  void *pvVar1;
  
  FRigElementKeyRedirector::operator=(&this->ElementKeyRedirector,param_1);
  *(undefined4 *)&(param_1->ExternalKeys).field_0x48 = 0;
  pvVar1 = *(void **)&(param_1->ExternalKeys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_1->ExternalKeys);
  *(undefined4 *)&(param_1->InternalKeyToExternalKey).field_0x48 = 0;
  pvVar1 = *(void **)&(param_1->InternalKeyToExternalKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  return;
}

// SetManipulationEnabled @ 14a2946a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::SetManipulationEnabled(UControlRig *this,bool param_1)

{
  if (this->bManipulationEnabled == param_1) {
    return false;
  }
  this->bManipulationEnabled = param_1;
  return true;
}

// SetObjectBinding @ 14a294fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetObjectBinding(UControlRig *this,TSharedPtr<IControlRigObjectBinding,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IControlRigObjectBinding *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ObjectBinding).SharedReferenceCount.ReferenceController;
  (this->ObjectBinding).Object = pIVar2;
  (this->ObjectBinding).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy> *)
             &this->OnControlRigBound,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetReplay @ 14a2955a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::SetReplay(UControlRig *this,UControlRigReplay *param_1)

{
  if (param_1 == (UControlRigReplay *)0x0) {
    (this->Replay).field0_0x0.DebugPtr = (UControlRigReplay *)0x0;
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Replay).field0_0x0.DebugPtr = param_1;
  return;
}

// SetReplayTimeIndex @ 14a2955f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRig::SetReplayTimeIndex(UControlRig *this,int param_1)

{
  this->ReplayTimeIndex = param_1;
  return;
}

// SetupControlFromGlobalTransform @ 14a295c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTransform<double> * __thiscall
UControlRig::SetupControlFromGlobalTransform
          (UControlRig *this,TTransform<double> *__return_storage_ptr__,FName *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  char cVar2;
  FRigControlElement *pFVar3;
  URigHierarchy *this_00;
  undefined1 auStackY_138 [32];
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  cVar2 = (**(code **)(this->_padding_ + 0x3d8))();
  if (((cVar2 != '\0') &&
      (pFVar3 = (FRigControlElement *)(**(code **)(this->_padding_ + 0x3c8))(this,param_1),
      pFVar3 != (FRigControlElement *)0x0)) && ((pFVar3->Settings).bIsTransientControl == false)) {
    URigHierarchy::GetParentTransform
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_98,(FRigBaseElement *)pFVar3,
               CurrentGlobal);
    UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_f8,&local_98);
    URigHierarchy::SetControlOffsetTransform
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,pFVar3,&local_f8,InitialLocal,true,false
               ,false,false);
    URigHierarchy::SetControlOffsetTransform
              ((this->DynamicHierarchy).field0_0x0.DebugPtr,pFVar3,&local_f8,CurrentLocal,true,false
               ,false,false);
    this_00 = (URigHierarchy *)
              FWeakObjectPtr::Get(&(((this->DynamicHierarchy).field0_0x0.DebugPtr)->
                                   DefaultHierarchyPtr).WeakPtr);
    if ((this_00 != (URigHierarchy *)0x0) &&
       (pFVar3 = URigHierarchy::Find<FRigControlElement>
                           (this_00,(FRigElementKey *)&pFVar3->field_0x10),
       pFVar3 != (FRigControlElement *)0x0)) {
      URigHierarchy::SetControlOffsetTransform
                (this_00,pFVar3,&local_f8,InitialLocal,true,true,false,false);
      URigHierarchy::SetControlOffsetTransform
                (this_00,pFVar3,&local_f8,CurrentLocal,true,true,false,false);
    }
  }
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// ShouldApplyLimits @ 14a2960a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::ShouldApplyLimits(UControlRig *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x3d8))();
  return cVar1 == '\0';
}

// StaticRegisterNativesUControlRig @ 14a297f70

void __cdecl UControlRig::StaticRegisterNativesUControlRig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UControlRig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsBackwardsSolve @ 14a29b540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::SupportsBackwardsSolve(UControlRig *this)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  
  pcVar1 = *(code **)(this->_padding_ + 0x308);
  FLazyName::Resolve(&FRigUnit_InverseExecution::EventName);
  uVar2 = (*pcVar1)(this,local_res8);
  return (bool)uVar2;
}

// SupportsEvent @ 14a29b590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::SupportsEvent(UControlRig *this,FName *param_1)

{
  undefined1 uVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a1ead6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x3b8))();
    return (bool)uVar1;
  }
  return false;
}

// SwitchToParent @ 14a29bd10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SwitchToParent
          (UControlRig *this,FRigElementKey *param_1,FRigElementKey *param_2,bool param_3,
          bool param_4)

{
  URigHierarchy *pUVar1;
  int iVar2;
  FRigBaseElement *pFVar3;
  undefined1 local_38 [16];
  FRigElementKey local_28;
  undefined1 local_1c;
  bool local_1b;
  
  pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
  iVar2 = URigHierarchy::GetIndex(pUVar1,param_1,true);
  pFVar3 = URigHierarchy::Get(pUVar1,iVar2);
  if (pFVar3 != (FRigBaseElement *)0x0) {
    if (param_2->Type != Reference) {
      pUVar1 = (this->DynamicHierarchy).field0_0x0.DebugPtr;
      iVar2 = URigHierarchy::GetIndex(pUVar1,param_2,true);
      pFVar3 = URigHierarchy::Get(pUVar1,iVar2);
      if (pFVar3 == (FRigBaseElement *)0x0) {
        return;
      }
    }
    if (this->bIsAdditive == false) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UControlRig::SwitchToParent'::__l16::
               _dynamic_atexit_destructor_for__EmptyRigDependenciesProvider__);
        _Init_thread_footer(&::_TSS0);
      }
      local_38[0] = param_2->Type;
      local_38._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_38._4_4_ = (param_2->Name).ComparisonIndex.Value;
      local_38._8_4_ = (param_2->Name).Number;
      local_28.Name.Number = (param_1->Name).Number;
      local_28.Type = param_1->Type;
      local_28._1_3_ = *(undefined3 *)&param_1->field_0x1;
      local_28.Name.ComparisonIndex.Value = (param_1->Name).ComparisonIndex.Value;
      URigHierarchy::SwitchToParent
                ((this->DynamicHierarchy).field0_0x0.DebugPtr,&local_28,(FRigElementKey *)local_38,
                 param_3,param_4,(IRigDependenciesProvider *)&EmptyRigDependenciesProvider,
                 (FString *)0x0);
    }
    else {
      local_28.Name.Number = (param_2->Name).Number;
      local_28.Type = param_2->Type;
      local_28._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_28.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
      local_1b = param_4;
      local_38._8_8_ = &local_28;
      local_38._0_8_ = param_1;
      local_1c = param_3;
      TSet<TTuple<FRigElementKey,UControlRig::FRigSwitchParentInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSwitchParentInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRigElementKey_const_&,UControlRig::FRigSwitchParentInfo_const_&>_>
                ((TSet<TTuple<FRigElementKey,UControlRig::FRigSwitchParentInfo>,TDefaultMapHashableKeyFuncs<FRigElementKey,UControlRig::FRigSwitchParentInfo,0>,FDefaultSetAllocator>
                  *)&this->SwitchParentValues,
                 (TPairInitializer<FRigElementKey_const_&,UControlRig::FRigSwitchParentInfo_const_&>
                  *)&stack0x00000008,(bool *)local_38);
    }
  }
  return;
}

// UnlinkAllOverrideAssets @ 14a2a1560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRig::UnlinkAllOverrideAssets(UControlRig *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->OverrideAssets).ArrayNum;
  if (iVar3 == 0) {
    return false;
  }
  pFVar5 = (this->OverrideAssets).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->OverrideAssets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UControlRigOverrideAsset>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(*(longlong *)pFVar5 + 0x180),
               this);
    pFVar5 = pFVar5 + 8;
  }
  piVar1 = &(this->OverrideAssets).ArrayMax;
  (this->OverrideAssets).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->OverrideAssets).AllocatorInstance,0,piVar1);
  }
  TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OverrideAssetsChangedDelegate,this);
  pcVar4 = *(code **)(this->_padding_ + 0x328);
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  (*pcVar4)(this,local_res8,0xffffffff);
  pcVar4 = *(code **)(this->_padding_ + 0x328);
  FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
  (*pcVar4)(this,local_res8,0xffffffff);
  return true;
}

// UnlinkOverrideAsset @ 14a2a1680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRig::UnlinkOverrideAsset(UControlRig *this,UControlRigOverrideAsset *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UControlRigOverrideAsset *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UControlRigOverrideAsset *local_48 [2];
  
  local_48[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UControlRigOverrideAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->OverrideAssets).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->OverrideAssets).ArrayMax * 8)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->OverrideAssets).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->OverrideAssets).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(UControlRigOverrideAsset **)pFVar2 != local_48[0];
    lVar7 = 0;
    pUVar6 = local_48[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(UControlRigOverrideAsset **)(pFVar2 + lVar7 * 8) != pUVar6));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pUVar6 = local_48[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->OverrideAssets).ArrayNum = iVar10;
    if (iVar1 != iVar10) {
      if (param_1 != (UControlRigOverrideAsset *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &param_1->OverrideChangedDelegate,this);
      }
      TMulticastDelegate<void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OverrideAssetsChangedDelegate,this);
      RequestConstruction(this);
      return true;
    }
  }
  return false;
}

// _getUObject @ 14a2ae4f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall UControlRig::_getUObject(UControlRig *this)

{
  return (UObject *)&this[-1].RigModuleSettings.ExposedConnectors.ArrayNum;
}

// _getUObject`adjustor{616}' @ 14a2ae4fc

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UControlRig::_getUObject`adjustor{616}'
   (void)const __ptr64 */

UObject * __thiscall UControlRig::_getUObject_adjustor_616__(UControlRig *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UControlRig *)&this[-1].PoseBeforeBackwardsSolve.CachedPoseHash);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{624}' @ 14a2ae510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UControlRig::_getUObject`adjustor{624}'
   (void)const __ptr64 */

UObject * __thiscall UControlRig::_getUObject_adjustor_624__(UControlRig *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UControlRig *)&this[-1].PoseBeforeBackwardsSolve.HierarchyTopologyVersion);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{632}' @ 14a2ae524

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UControlRig::_getUObject`adjustor{632}'
   (void)const __ptr64 */

UObject * __thiscall UControlRig::_getUObject_adjustor_632__(UControlRig *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UControlRig *)&this[-1].PoseBeforeBackwardsSolve.Elements.ArrayNum);
  return (UObject *)pUVar1;
}

// execClearControlSelection @ 14a2af950

void __cdecl UControlRig::execClearControlSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x430))(param_1,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execCreateTransformableControlHandle @ 14a2b02c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UControlRig::execCreateTransformableControlHandle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTransformableControlHandle *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateTransformableControlHandle((UControlRig *)param_1,pFVar3);
  *(UTransformableControlHandle **)param_3 = pUVar2;
  return;
}

// execCurrentControlSelection @ 14a2b0370

void __cdecl
UControlRig::execCurrentControlSelection(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x438))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execFindControlRigs @ 14a2b0d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UControlRig::execFindControlRigs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  UObject *pUVar5;
  UObjectBaseUtility *this;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  longlong lVar13;
  UObject *local_res10;
  UObjectBaseUtility *local_res18;
  UObjectBaseUtility *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  TObjectIterator<UControlRig> local_40;
  
  local_res18 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  this = local_res18;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if (local_res18 != (UObjectBaseUtility *)0x0) {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar9) ||
       (pUVar11 = (UObject *)this,
       (longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar9 * 8)
       != &pUVar10->_padding_)) {
      pUVar10 = Z_Construct_UClass_AActor_NoRegister();
      pUVar11 = UObjectBaseUtility::GetTypedOuter(this,pUVar10);
    }
    local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ObjectArray.ArrayNum = 0;
    local_40.ObjectArray.ArrayMax = 0;
    local_40.Index = 0xffffffff;
    EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar10 = StaticClass();
    GetObjectsOfClass(pUVar10,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                      EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
LAB_14a2b0e78:
    do {
      do {
        do {
          TObjectIterator<UControlRig>::Advance(&local_40);
          lVar13 = (longlong)local_40.Index;
          if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index))
          goto LAB_14a2b1140;
          uVar8 = 0;
          if (local_40.Index < local_40.ObjectArray.ArrayNum) {
            uVar8 = (uint)~local_40.Index >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_58 = *(UObjectBaseUtility **)
                      (local_40.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
          if ((pUVar5 == (UObject *)0x0) || (pUVar10 = StaticClass(), pUVar10 == (UClass *)0x0))
          goto LAB_14a2b0f8d;
          iVar9 = (int)pUVar10->_padding_;
          if ((*(int *)&pUVar5[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14a2b0f8d;
          lVar13 = *(longlong *)&local_58->field_0x10;
          pUVar10 = StaticClass();
        } while (pUVar10 == (UClass *)0x0);
        iVar9 = (int)pUVar10->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar9 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      } while (!bVar6);
      if ((*(int *)(lVar13 + 0x38) < *(int *)&pUVar5[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)&pUVar5[1].field_0x10 * 8) !=
          &pUVar5[1].field_0x8)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
    } while (!bVar6);
LAB_14a2b0f8d:
    bVar6 = UObjectBaseUtility::IsInOuter(local_58,(UObject *)this);
    if (!bVar6) {
      if (pUVar11 == (UObject *)0x0) goto LAB_14a2b0e78;
      bVar6 = UObjectBaseUtility::IsInOuter(local_58,pUVar11);
      if (!bVar6) {
        pTVar2 = *(TReferenceControllerBase<1> **)&local_58[0x17].field_0x10;
        plVar3 = *(longlong **)&local_58[0x17].field_0x8;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (((plVar3 != (longlong *)0x0) &&
            (pUVar12 = (UObject *)(**(code **)(*plVar3 + 0x30))(), pUVar12 != (UObject *)0x0)) &&
           (pUVar12 == pUVar11)) {
          if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (int)local_48;
          if ((int)local_48 == local_48._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_50,(int *)((longlong)&local_48 + 4));
          }
          local_48 = CONCAT44(local_48._4_4_,iVar9 + 1);
          *(UObjectBaseUtility **)(local_50.Data + (longlong)iVar9 * 8) = local_58;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        goto LAB_14a2b0e78;
      }
    }
    if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (int)local_48;
    if ((int)local_48 == local_48._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_50,(int *)((longlong)&local_48 + 4));
    }
    local_48 = CONCAT44(local_48._4_4_,iVar9 + 1);
    *(UObjectBaseUtility **)(local_50.Data + (longlong)iVar9 * 8) = local_58;
    goto LAB_14a2b0e78;
  }
LAB_14a2b1152:
  if (param_3 != &local_50) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_50.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_48;
    local_50.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_48._4_4_;
    local_48 = 0;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
LAB_14a2b1140:
  if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
  }
  goto LAB_14a2b1152;
}

// execGetHierarchy @ 14a2b28d0

void __cdecl UControlRig::execGetHierarchy(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x14].field_0x18;
  return;
}

// execGetHostingActor @ 14a2b2900

void __cdecl UControlRig::execGetHostingActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x17].field_0x8 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[0x17].field_0x8 + 0x30))();
    *(undefined8 *)param_3 = uVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetInteractionRig @ 14a2b2d30

void __cdecl UControlRig::execGetInteractionRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetInteractionRigClass @ 14a2b2d60

void __cdecl UControlRig::execGetInteractionRigClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsControlSelected @ 14a2b3d20

void __cdecl UControlRig::execIsControlSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x440))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execRequestConstruction @ 14a2b4880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UControlRig::execRequestConstruction(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RequestConstruction((UControlRig *)param_1);
  return;
}

// execSelectControl @ 14a2b4aa0

void __cdecl UControlRig::execSelectControl(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [4];
  uchar local_res20 [8];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x428))(param_1,puVar2,bVar3,local_res10[0] != 0);
  return;
}

// execSetInteractionRig @ 14a2b71f0

void __cdecl UControlRig::execSetInteractionRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetInteractionRigClass @ 14a2b7270

void __cdecl UControlRig::execSetInteractionRigClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  return;
}

// execSupportsBackwardsSolve @ 14a2b7b80

void __cdecl UControlRig::execSupportsBackwardsSolve(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x308);
  FLazyName::Resolve(&FRigUnit_InverseExecution::EventName);
  uVar2 = (*pcVar1)(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// SetControlValue<float> @ 14a2d7330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetControlValue<float>
          (UControlRig *this,FName *param_1,float param_2,bool param_3,
          FRigControlModifiedContext *param_4,bool param_5,bool param_6,bool param_7)

{
  ulonglong local_98 [16];
  undefined4 local_18;
  
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_18 = 1;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  local_98[0] = (ulonglong)(uint)param_2;
  (**(code **)(this->_padding_ + 0x3f0))(0,param_1,local_98,param_3,param_4,param_5,param_6,param_7)
  ;
  return;
}

// SetControlValue<UE::Math::TRotator<double>_> @ 14a3ae350

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRig::SetControlValue<UE::Math::TRotator<double>_>
          (UControlRig *this,FName *param_1,TRotator<double> *param_2,bool param_3,
          FRigControlModifiedContext *param_4,bool param_5,bool param_6,bool param_7)

{
  code *pcVar1;
  TVector<double> *pTVar2;
  TRotator<double> local_c8;
  float local_a8;
  float fStack_a4;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  TVector<double> local_20;
  
  local_c8.Pitch = param_2->Pitch;
  local_c8.Yaw = param_2->Yaw;
  local_c8.Roll = param_2->Roll;
  pcVar1 = *(code **)(this->_padding_ + 0x3f0);
  pTVar2 = UE::Math::TRotator<double>::Euler(&local_c8,&local_20);
  local_28 = 1;
  _local_a8 = CONCAT44((float)(pTVar2->field0_0x0)._s_0.Y,(float)(pTVar2->field0_0x0)._s_0.X);
  uStack_a0 = (ulonglong)(uint)(float)(pTVar2->field0_0x0)._s_0.Z;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  (*pcVar1)(this,param_1,&local_a8,param_3,param_4,param_5,param_6,param_7);
  return;
}

// operator() @ 15054cd50

bool __thiscall `UControlRig::Execute'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *this_00;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4044058622282433394>);
  if (bVar2) {
    this_00 = UObjectBaseUtility::GetPackage(*(UObjectBaseUtility **)this);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4044058622282433394>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054cdc2;
    }
  }
  bVar2 = false;
LAB_15054cdc2:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

