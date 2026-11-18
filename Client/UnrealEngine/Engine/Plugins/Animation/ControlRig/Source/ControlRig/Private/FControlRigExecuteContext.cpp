// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// FControlRigExecuteContext @ 14a2d8560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContext * __thiscall
FControlRigExecuteContext::FControlRigExecuteContext
          (FControlRigExecuteContext *this,FControlRigExecuteContext *param_1)

{
  int *piVar1;
  TArray<FInstructionRecord,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar5;
  FInstructionRecordContainer *pFVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  
  *(undefined ***)this = &___7FRigVMExecuteContext__6B_;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined4 *)&this->field_0x1c = *(undefined4 *)&param_1->field_0x1c;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  lVar8 = *(longlong *)&param_1->field_0x48;
  *(longlong *)&this->field_0x48 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  puVar3 = &this->field_0xe8;
  *(undefined8 *)&this->field_0x50 = *(undefined8 *)&param_1->field_0x50;
  *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_1->field_0x58;
  *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
  uVar11 = *(undefined8 *)&param_1->field_0x78;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  *(undefined8 *)&this->field_0x78 = uVar11;
  uVar11 = *(undefined8 *)&param_1->field_0x88;
  *(undefined8 *)&this->field_0x80 = *(undefined8 *)&param_1->field_0x80;
  *(undefined8 *)&this->field_0x88 = uVar11;
  uVar11 = *(undefined8 *)&param_1->field_0x98;
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&param_1->field_0x90;
  *(undefined8 *)&this->field_0x98 = uVar11;
  uVar11 = *(undefined8 *)&param_1->field_0xa8;
  *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_1->field_0xa0;
  *(undefined8 *)&this->field_0xa8 = uVar11;
  uVar11 = *(undefined8 *)&param_1->field_0xb8;
  *(undefined8 *)&this->field_0xb0 = *(undefined8 *)&param_1->field_0xb0;
  *(undefined8 *)&this->field_0xb8 = uVar11;
  uVar11 = *(undefined8 *)&param_1->field_0xc8;
  *(undefined8 *)&this->field_0xc0 = *(undefined8 *)&param_1->field_0xc0;
  *(undefined8 *)&this->field_0xc8 = uVar11;
  *(undefined8 *)&this->field_0xd0 = *(undefined8 *)&param_1->field_0xd0;
  *(undefined8 *)&this->field_0xd8 = *(undefined8 *)&param_1->field_0xd8;
  *(undefined8 *)&this->field_0xe0 = *(undefined8 *)&param_1->field_0xe0;
  *(undefined8 *)puVar3 = 0;
  iVar7 = *(int *)&param_1->field_0xf0;
  pvVar9 = *(void **)&param_1->field_0xe8;
  *(int *)&this->field_0xf0 = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)&this->field_0xf4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar7,0,(ForAnyElementType *)puVar3,iVar7,(int *)&this->field_0xf4);
    memcpy(*(void **)puVar3,pvVar9,(longlong)iVar7 << 5);
  }
  puVar3 = &this->field_0xf8;
  *(undefined8 *)puVar3 = 0;
  iVar7 = *(int *)&param_1->field_0x100;
  pvVar9 = *(void **)&param_1->field_0xf8;
  *(int *)&this->field_0x100 = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)&this->field_0x104 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar7,0,(ForAnyElementType *)puVar3,iVar7,(int *)&this->field_0x104);
    memcpy(*(void **)puVar3,pvVar9,(longlong)iVar7 << 5);
  }
  pTVar4 = &this->AssetUserData;
  *(undefined8 *)&this->field_0x108 = *(undefined8 *)&param_1->field_0x108;
  *(undefined ***)this = &___7FControlRigExecuteContext__6B_;
  piVar1 = &(this->AssetUserData).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->AssetUserData).ArrayNum;
  pFVar10 = (param_1->AssetUserData).AllocatorInstance.Data;
  (this->AssetUserData).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar10,(longlong)iVar7 << 3);
  }
  TDelegate<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
            (&this->OnAddShapeLibraryDelegate,&param_1->OnAddShapeLibraryDelegate);
  TDelegate<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
            (&this->OnShapeExistsDelegate,&param_1->OnShapeExistsDelegate);
  pTVar5 = &(this->UnitContext).ElementsBeingInteracted;
  (this->UnitContext).AnimAttributeContainer = (param_1->UnitContext).AnimAttributeContainer;
  (this->UnitContext).DataSourceRegistry = (param_1->UnitContext).DataSourceRegistry;
  (this->UnitContext).HierarchySettings = (param_1->UnitContext).HierarchySettings;
  (this->UnitContext).InteractionType = (param_1->UnitContext).InteractionType;
  piVar1 = &(this->UnitContext).ElementsBeingInteracted.ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->UnitContext).ElementsBeingInteracted.ArrayNum;
  pFVar10 = (param_1->UnitContext).ElementsBeingInteracted.AllocatorInstance.Data;
  (this->UnitContext).ElementsBeingInteracted.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar10,(longlong)iVar7 * 0xc);
  }
  FModularRigResolveResult::FModularRigResolveResult
            (&(this->UnitContext).ConnectionResolve,&(param_1->UnitContext).ConnectionResolve);
  this->Hierarchy = param_1->Hierarchy;
  this->ControlRig = param_1->ControlRig;
  ::FString::FString(&this->RigModulePrefix,&param_1->RigModulePrefix);
  ::FString::FString(&this->RigParentModulePrefix,&param_1->RigParentModulePrefix);
  ::FString::FString(&this->RigRootModulePrefix,&param_1->RigRootModulePrefix);
  pFVar6 = &this->RecordsStorage;
  this->RigModulePrefixHash = param_1->RigModulePrefixHash;
  this->RigModuleInstance = param_1->RigModuleInstance;
  piVar1 = &(this->RecordsStorage).ReadRecords.ArrayMax;
  (pFVar6->ReadRecords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->RecordsStorage).ReadRecords.ArrayNum;
  pFVar10 = (param_1->RecordsStorage).ReadRecords.AllocatorInstance.Data;
  (this->RecordsStorage).ReadRecords.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar7,0,(ForAnyElementType *)pFVar6,iVar7,piVar1);
    memcpy((pFVar6->ReadRecords).AllocatorInstance.Data,pFVar10,(longlong)iVar7 * 0x1c);
  }
  pTVar2 = &(this->RecordsStorage).WrittenRecords;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RecordsStorage).WrittenRecords.ArrayMax;
  iVar7 = (param_1->RecordsStorage).WrittenRecords.ArrayNum;
  pFVar10 = (param_1->RecordsStorage).WrittenRecords.AllocatorInstance.Data;
  (this->RecordsStorage).WrittenRecords.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar7 * 0x1c);
  }
  (this->RecordsStorage).ReadRecordsHash = (param_1->RecordsStorage).ReadRecordsHash;
  (this->RecordsStorage).WrittenRecordsHash = (param_1->RecordsStorage).WrittenRecordsHash;
  this->Records = param_1->Records;
  return this;
}

// FControlRigExecuteContext @ 14a2d89e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FControlRigExecuteContext * __thiscall
FControlRigExecuteContext::FControlRigExecuteContext(FControlRigExecuteContext *this)

{
  double dVar1;
  
  *(undefined ***)this = &___7FRigVMExecuteContext__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x30 = 0x3f91111111111111;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x38 = 0x800;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  *(double *)&this->field_0x70 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  *(double *)&this->field_0x78 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  *(double *)&this->field_0x80 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  *(double *)&this->field_0x88 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  *(double *)&this->field_0x90 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  *(double *)&this->field_0x98 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  *(double *)&this->field_0xa0 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  *(double *)&this->field_0xa8 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  *(double *)&this->field_0xb0 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  *(double *)&this->field_0xb8 = dVar1;
  dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  *(double *)&this->field_0xc0 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  *(double *)&this->field_0xc8 = dVar1;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  *(undefined8 *)&this->OnAddShapeLibraryDelegate = 0;
  *(undefined8 *)&(this->OnAddShapeLibraryDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAddShapeLibraryDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnShapeExistsDelegate = 0;
  *(undefined8 *)&(this->OnShapeExistsDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnShapeExistsDelegate).field_0x10 = 0;
  (this->UnitContext).AnimAttributeContainer = (FMeshAttributeContainer *)0x0;
  (this->UnitContext).DataSourceRegistry = (UAnimationDataSourceRegistry *)0x0;
  (this->UnitContext).HierarchySettings.ElementNameDisplayMode = Auto;
  (this->UnitContext).HierarchySettings.ProceduralElementLimit = 2000;
  (this->UnitContext).InteractionType = '\0';
  (this->UnitContext).ElementsBeingInteracted.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ElementsBeingInteracted.ArrayNum = 0;
  (this->UnitContext).ElementsBeingInteracted.ArrayMax = 0;
  (this->UnitContext).ConnectionResolve.Connector.Type = None;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined ***)this = &___7FControlRigExecuteContext__6B_;
  (this->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex = 0;
  (this->UnitContext).ConnectionResolve.Connector.Name.Number = 0;
  (this->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ConnectionResolve.Matches.ArrayNum = 0;
  (this->UnitContext).ConnectionResolve.Matches.ArrayMax = 0;
  (this->UnitContext).ConnectionResolve.Excluded.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ConnectionResolve.Excluded.ArrayNum = 0;
  (this->UnitContext).ConnectionResolve.Excluded.ArrayMax = 0;
  (this->UnitContext).ConnectionResolve.State = Success;
  FText::FText(&(this->UnitContext).ConnectionResolve.Message);
  this->Hierarchy = (URigHierarchy *)0x0;
  this->ControlRig = (UControlRig *)0x0;
  (this->RecordsStorage).ReadRecords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordsStorage).ReadRecords.ArrayNum = 0;
  (this->RecordsStorage).ReadRecords.ArrayMax = 0;
  (this->RecordsStorage).WrittenRecords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordsStorage).WrittenRecords.ArrayNum = 0;
  (this->RecordsStorage).WrittenRecords.ArrayMax = 0;
  (this->RecordsStorage).ReadRecordsHash = 0xffffffff;
  (this->RecordsStorage).WrittenRecordsHash = 0xffffffff;
  this->Records = &this->RecordsStorage;
  (this->RigModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigModulePrefix).Data.ArrayNum = 0;
  (this->RigModulePrefix).Data.ArrayMax = 0;
  (this->RigParentModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigParentModulePrefix).Data.ArrayNum = 0;
  (this->RigParentModulePrefix).Data.ArrayMax = 0;
  (this->RigRootModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigRootModulePrefix).Data.ArrayNum = 0;
  (this->RigRootModulePrefix).Data.ArrayMax = 0;
  this->RigModulePrefixHash = 0;
  this->RigModuleInstance = (FRigModuleInstance *)0x0;
  return this;
}

// ~FControlRigExecuteContext @ 14a2de6d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigExecuteContext::~FControlRigExecuteContext(FControlRigExecuteContext *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RecordsStorage).WrittenRecords.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RecordsStorage).ReadRecords.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RigRootModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RigParentModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RigModulePrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRigUnitContext::~FRigUnitContext(&this->UnitContext);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShapeExistsDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAddShapeLibraryDelegate);
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FRigVMExecuteContext__6B_;
  if (*(void **)&this->field_0xf8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xf8);
  }
  if (*(void **)&this->field_0xe8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xe8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x48);
  return;
}

// Copy @ 14a2f8470

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

void __thiscall
FControlRigExecuteContext::Copy(FControlRigExecuteContext *this,FRigVMExecuteContext *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  
  uVar4 = (param_1->EventName).Number;
  *(uint *)&this->field_0x8 = (param_1->EventName).ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar4;
  uVar4 = (param_1->FunctionName).Number;
  *(uint *)&this->field_0x10 = (param_1->FunctionName).ComparisonIndex.Value;
  *(uint *)&this->field_0x14 = uVar4;
  *(int *)&this->field_0x18 = param_1->InstructionIndex;
  *(uint *)&this->field_0x1c = param_1->NumExecutions;
  *(int *)&this->field_0x38 = (param_1->RuntimeSettings).MaximumArraySize;
  pTVar1 = (param_1->RuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->RuntimeSettings).LogFunction.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x48;
  *(TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
    **)&this->field_0x40 = pTVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x48 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(FRigVMNameCache **)&this->field_0x50 = param_1->NameCache;
  this->Hierarchy = (URigHierarchy *)param_1[1].ToWorldSpaceTransform.Scale3D.XY.m128d_f64[1];
  this->ControlRig = (UControlRig *)param_1[1].ToWorldSpaceTransform.Scale3D.ZW.m128d_f64[0];
  return;
}

// StaticStruct @ 14a4a0bb0

UScriptStruct * __cdecl FControlRigExecuteContext::StaticStruct(void)

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

// FControlRigExecuteContext @ 14a50a690

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

FControlRigExecuteContext * __thiscall
FControlRigExecuteContext::FControlRigExecuteContext
          (FControlRigExecuteContext *this,FControlRigExecuteContext *param_1)

{
  uchar uVar1;
  UControlRig *pUVar2;
  FRigModuleInstance *pFVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  
  FRigVMExecuteContext::FRigVMExecuteContext
            ((FRigVMExecuteContext *)this,(FRigVMExecuteContext *)param_1);
  *(undefined ***)this = &___7FControlRigExecuteContext__6B_;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (param_1->AssetUserData).AllocatorInstance.Data;
  (param_1->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = (param_1->AssetUserData).ArrayNum;
  (this->AssetUserData).ArrayMax = (param_1->AssetUserData).ArrayMax;
  (param_1->AssetUserData).ArrayNum = 0;
  (param_1->AssetUserData).ArrayMax = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAddShapeLibraryDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnAddShapeLibraryDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnShapeExistsDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnShapeExistsDelegate);
  (this->UnitContext).AnimAttributeContainer = (param_1->UnitContext).AnimAttributeContainer;
  (this->UnitContext).DataSourceRegistry = (param_1->UnitContext).DataSourceRegistry;
  (this->UnitContext).HierarchySettings = (param_1->UnitContext).HierarchySettings;
  uVar1 = (param_1->UnitContext).InteractionType;
  (this->UnitContext).ElementsBeingInteracted.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).InteractionType = uVar1;
  (this->UnitContext).ElementsBeingInteracted.AllocatorInstance.Data =
       (param_1->UnitContext).ElementsBeingInteracted.AllocatorInstance.Data;
  (param_1->UnitContext).ElementsBeingInteracted.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ElementsBeingInteracted.ArrayNum =
       (param_1->UnitContext).ElementsBeingInteracted.ArrayNum;
  (this->UnitContext).ElementsBeingInteracted.ArrayMax =
       (param_1->UnitContext).ElementsBeingInteracted.ArrayMax;
  (param_1->UnitContext).ElementsBeingInteracted.ArrayNum = 0;
  (param_1->UnitContext).ElementsBeingInteracted.ArrayMax = 0;
  uVar4 = *(undefined3 *)&(param_1->UnitContext).ConnectionResolve.Connector.field_0x1;
  FVar5.Value = (param_1->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex.Value;
  (this->UnitContext).ConnectionResolve.Connector.Type =
       (param_1->UnitContext).ConnectionResolve.Connector.Type;
  *(undefined3 *)&(this->UnitContext).ConnectionResolve.Connector.field_0x1 = uVar4;
  (this->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex = (FNameEntryId)FVar5.Value;
  (this->UnitContext).ConnectionResolve.Connector.Name.Number =
       (param_1->UnitContext).ConnectionResolve.Connector.Name.Number;
  (this->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data =
       (param_1->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data;
  (param_1->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ConnectionResolve.Matches.ArrayNum =
       (param_1->UnitContext).ConnectionResolve.Matches.ArrayNum;
  (this->UnitContext).ConnectionResolve.Matches.ArrayMax =
       (param_1->UnitContext).ConnectionResolve.Matches.ArrayMax;
  (param_1->UnitContext).ConnectionResolve.Matches.ArrayNum = 0;
  (param_1->UnitContext).ConnectionResolve.Matches.ArrayMax = 0;
  (this->UnitContext).ConnectionResolve.Excluded.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ConnectionResolve.Excluded.AllocatorInstance.Data =
       (param_1->UnitContext).ConnectionResolve.Excluded.AllocatorInstance.Data;
  (param_1->UnitContext).ConnectionResolve.Excluded.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UnitContext).ConnectionResolve.Excluded.ArrayNum =
       (param_1->UnitContext).ConnectionResolve.Excluded.ArrayNum;
  (this->UnitContext).ConnectionResolve.Excluded.ArrayMax =
       (param_1->UnitContext).ConnectionResolve.Excluded.ArrayMax;
  (param_1->UnitContext).ConnectionResolve.Excluded.ArrayNum = 0;
  (param_1->UnitContext).ConnectionResolve.Excluded.ArrayMax = 0;
  (this->UnitContext).ConnectionResolve.State = (param_1->UnitContext).ConnectionResolve.State;
  FText::FText(&(this->UnitContext).ConnectionResolve.Message,
               &(param_1->UnitContext).ConnectionResolve.Message);
  this->Hierarchy = param_1->Hierarchy;
  pUVar2 = param_1->ControlRig;
  (this->RigModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ControlRig = pUVar2;
  (this->RigModulePrefix).Data.AllocatorInstance.Data =
       (param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  (param_1->RigModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigModulePrefix).Data.ArrayNum = (param_1->RigModulePrefix).Data.ArrayNum;
  (this->RigModulePrefix).Data.ArrayMax = (param_1->RigModulePrefix).Data.ArrayMax;
  (param_1->RigModulePrefix).Data.ArrayNum = 0;
  (param_1->RigModulePrefix).Data.ArrayMax = 0;
  (this->RigParentModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigParentModulePrefix).Data.AllocatorInstance.Data =
       (param_1->RigParentModulePrefix).Data.AllocatorInstance.Data;
  (param_1->RigParentModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigParentModulePrefix).Data.ArrayNum = (param_1->RigParentModulePrefix).Data.ArrayNum;
  (this->RigParentModulePrefix).Data.ArrayMax = (param_1->RigParentModulePrefix).Data.ArrayMax;
  (param_1->RigParentModulePrefix).Data.ArrayNum = 0;
  (param_1->RigParentModulePrefix).Data.ArrayMax = 0;
  (this->RigRootModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigRootModulePrefix).Data.AllocatorInstance.Data =
       (param_1->RigRootModulePrefix).Data.AllocatorInstance.Data;
  (param_1->RigRootModulePrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigRootModulePrefix).Data.ArrayNum = (param_1->RigRootModulePrefix).Data.ArrayNum;
  (this->RigRootModulePrefix).Data.ArrayMax = (param_1->RigRootModulePrefix).Data.ArrayMax;
  (param_1->RigRootModulePrefix).Data.ArrayNum = 0;
  (param_1->RigRootModulePrefix).Data.ArrayMax = 0;
  this->RigModulePrefixHash = param_1->RigModulePrefixHash;
  pFVar3 = param_1->RigModuleInstance;
  (this->RecordsStorage).ReadRecords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RigModuleInstance = pFVar3;
  (this->RecordsStorage).ReadRecords.AllocatorInstance.Data =
       (param_1->RecordsStorage).ReadRecords.AllocatorInstance.Data;
  (param_1->RecordsStorage).ReadRecords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordsStorage).ReadRecords.ArrayNum = (param_1->RecordsStorage).ReadRecords.ArrayNum;
  (this->RecordsStorage).ReadRecords.ArrayMax = (param_1->RecordsStorage).ReadRecords.ArrayMax;
  (param_1->RecordsStorage).ReadRecords.ArrayNum = 0;
  (param_1->RecordsStorage).ReadRecords.ArrayMax = 0;
  (this->RecordsStorage).WrittenRecords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordsStorage).WrittenRecords.AllocatorInstance.Data =
       (param_1->RecordsStorage).WrittenRecords.AllocatorInstance.Data;
  (param_1->RecordsStorage).WrittenRecords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecordsStorage).WrittenRecords.ArrayNum = (param_1->RecordsStorage).WrittenRecords.ArrayNum
  ;
  (this->RecordsStorage).WrittenRecords.ArrayMax = (param_1->RecordsStorage).WrittenRecords.ArrayMax
  ;
  (param_1->RecordsStorage).WrittenRecords.ArrayNum = 0;
  (param_1->RecordsStorage).WrittenRecords.ArrayMax = 0;
  (this->RecordsStorage).ReadRecordsHash = (param_1->RecordsStorage).ReadRecordsHash;
  (this->RecordsStorage).WrittenRecordsHash = (param_1->RecordsStorage).WrittenRecordsHash;
  this->Records = param_1->Records;
  return this;
}

// operator= @ 14a519980

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

FControlRigExecuteContext * __thiscall
FControlRigExecuteContext::operator=
          (FControlRigExecuteContext *this,FControlRigExecuteContext *param_1)

{
  int *piVar1;
  TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ITextData *pIVar4;
  ITextData *pIVar5;
  undefined3 uVar6;
  FNameEntryId FVar7;
  undefined1 local_res8 [8];
  
  FRigVMExecuteContext::operator=((FRigVMExecuteContext *)this,(FRigVMExecuteContext *)param_1);
  pTVar2 = &this->AssetUserData;
  if (pTVar2 != &param_1->AssetUserData) {
    iVar3 = (param_1->AssetUserData).ArrayNum;
    piVar1 = &(this->AssetUserData).ArrayMax;
    _Src = (param_1->AssetUserData).AllocatorInstance.Data;
    (this->AssetUserData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  TDelegate<void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnAddShapeLibraryDelegate,&param_1->OnAddShapeLibraryDelegate);
  TDelegate<bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnShapeExistsDelegate,&param_1->OnShapeExistsDelegate)
  ;
  (this->UnitContext).AnimAttributeContainer = (param_1->UnitContext).AnimAttributeContainer;
  (this->UnitContext).DataSourceRegistry = (param_1->UnitContext).DataSourceRegistry;
  (this->UnitContext).HierarchySettings = (param_1->UnitContext).HierarchySettings;
  (this->UnitContext).InteractionType = (param_1->UnitContext).InteractionType;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
            (&(this->UnitContext).ElementsBeingInteracted,
             &(param_1->UnitContext).ElementsBeingInteracted);
  uVar6 = *(undefined3 *)&(param_1->UnitContext).ConnectionResolve.Connector.field_0x1;
  FVar7.Value = (param_1->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex.Value;
  (this->UnitContext).ConnectionResolve.Connector.Type =
       (param_1->UnitContext).ConnectionResolve.Connector.Type;
  *(undefined3 *)&(this->UnitContext).ConnectionResolve.Connector.field_0x1 = uVar6;
  (this->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex = (FNameEntryId)FVar7.Value;
  (this->UnitContext).ConnectionResolve.Connector.Name.Number =
       (param_1->UnitContext).ConnectionResolve.Connector.Name.Number;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
            (&(this->UnitContext).ConnectionResolve.Matches,
             &(param_1->UnitContext).ConnectionResolve.Matches);
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
            (&(this->UnitContext).ConnectionResolve.Excluded,
             &(param_1->UnitContext).ConnectionResolve.Excluded);
  (this->UnitContext).ConnectionResolve.State = (param_1->UnitContext).ConnectionResolve.State;
  pIVar4 = (param_1->UnitContext).ConnectionResolve.Message.TextData.Reference;
  pIVar5 = (this->UnitContext).ConnectionResolve.Message.TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->UnitContext).ConnectionResolve.Message.TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->UnitContext).ConnectionResolve.Message.Flags =
       (param_1->UnitContext).ConnectionResolve.Message.Flags;
  this->Hierarchy = param_1->Hierarchy;
  this->ControlRig = param_1->ControlRig;
  ::FString::operator=(&this->RigModulePrefix,&param_1->RigModulePrefix);
  ::FString::operator=(&this->RigParentModulePrefix,&param_1->RigParentModulePrefix);
  ::FString::operator=(&this->RigRootModulePrefix,&param_1->RigRootModulePrefix);
  this->RigModulePrefixHash = param_1->RigModulePrefixHash;
  this->RigModuleInstance = param_1->RigModuleInstance;
  TArray<FInstructionRecord,TSizedDefaultAllocator<32>_>::operator=
            (&(this->RecordsStorage).ReadRecords,&(param_1->RecordsStorage).ReadRecords);
  TArray<FInstructionRecord,TSizedDefaultAllocator<32>_>::operator=
            (&(this->RecordsStorage).WrittenRecords,&(param_1->RecordsStorage).WrittenRecords);
  (this->RecordsStorage).ReadRecordsHash = (param_1->RecordsStorage).ReadRecordsHash;
  (this->RecordsStorage).WrittenRecordsHash = (param_1->RecordsStorage).WrittenRecordsHash;
  this->Records = param_1->Records;
  return this;
}

// AdaptMetadataName @ 14a51def0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall
FControlRigExecuteContext::AdaptMetadataName
          (FControlRigExecuteContext *this,ERigMetaDataNameSpace param_1,FName *param_2)

{
  FString *pFVar1;
  uint uVar2;
  undefined7 in_register_00000011;
  FName this_00;
  FName *in_R9;
  ForAnyElementType FVar3;
  FString local_28;
  FString local_18;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  uVar2 = (uint)param_2 & 0xff;
  if (((ERigMetaDataNameSpace)param_2 != None) && (*in_R9 != (FName)0x0)) {
    ::FName::ToString(in_R9,&local_28);
    for (FVar3.Data = local_28.Data.AllocatorInstance.Data;
        FVar3.Data != local_28.Data.AllocatorInstance.Data + (longlong)local_28.Data.ArrayNum * 2;
        FVar3.Data = FVar3.Data + 2) {
      if (*(short *)FVar3.Data == 0x2f) {
        if ((int)((longlong)FVar3.Data - (longlong)local_28.Data.AllocatorInstance.Data >> 1) != -1)
        {
          *(FName *)this_00 = *in_R9;
          if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return this_00;
          }
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return this_00;
        }
        break;
      }
    }
    if ((((1 < (this->RigModulePrefix).Data.ArrayNum) && (uVar2 == 1)) || (uVar2 == 2)) ||
       (uVar2 == 3)) {
      pFVar1 = GetElementModulePrefix(this,(ERigMetaDataNameSpace)param_2);
      ::FString::ConcatFF(&local_18,pFVar1,&local_28);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar3.Data = local_18.Data.AllocatorInstance.Data;
      }
      ::FName::FName((FName *)this_00,(wchar_t *)FVar3.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return this_00;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return this_00;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  *(FName *)this_00 = *in_R9;
  return this_00;
}

// FindUserData @ 14a52ffd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UNameSpacedUserData * __thiscall
FControlRigExecuteContext::FindUserData(FControlRigExecuteContext *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UNameSpacedUserData *pUVar6;
  UClass *pUVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = (this->AssetUserData).ArrayNum + -1;
  lVar9 = (longlong)iVar8 * 8;
  do {
    if ((iVar8 < 0) || ((this->AssetUserData).ArrayNum <= iVar8)) {
      return (UNameSpacedUserData *)0x0;
    }
    lVar2 = *(longlong *)((this->AssetUserData).AllocatorInstance.Data + lVar9);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
      if (((this->AssetUserData).ArrayNum <= iVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UNameSpacedUserData *)(*pcVar3)();
        return pUVar6;
      }
      pUVar6 = *(UNameSpacedUserData **)((this->AssetUserData).AllocatorInstance.Data + lVar9);
      if (pUVar6 != (UNameSpacedUserData *)0x0) {
        pUVar7 = Z_Construct_UClass_UNameSpacedUserData_NoRegister();
        iVar5 = (int)pUVar7->_padding_;
        if ((iVar5 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
            &pUVar7->_padding_)) {
          iVar5 = (pUVar6->NameSpace).Data.ArrayNum;
          iVar1 = (param_1->Data).ArrayNum;
          if (iVar5 == iVar1) {
            if (iVar5 < 2) {
              return pUVar6;
            }
            iVar5 = wcscmp((wchar_t *)(pUVar6->NameSpace).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar4 = iVar5 == 0;
          }
          else {
            bVar4 = iVar5 + iVar1 == 1;
          }
          if (bVar4) {
            return pUVar6;
          }
        }
      }
    }
    iVar8 = iVar8 + -1;
    lVar9 = lVar9 + -8;
  } while( true );
}

// GetElementModulePrefix @ 14a530760

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FControlRigExecuteContext::GetElementModulePrefix
          (FControlRigExecuteContext *this,ERigMetaDataNameSpace param_1)

{
  if ((this->RigModulePrefix).Data.ArrayNum < 2) {
    if (param_1 == Parent) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::FString::FString(&ParentNameSpace,L"Parent/");
          atexit(`FControlRigExecuteContext::GetElementModulePrefix'::__l17::
                 _dynamic_atexit_destructor_for__ParentNameSpace__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      return &ParentNameSpace;
    }
    if (param_1 == Root) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS1) {
        _Init_thread_header(&::_TSS1);
        if (::_TSS1 == -1) {
          ::FString::FString(&RootNameSpace,L"Root/");
          atexit(`FControlRigExecuteContext::GetElementModulePrefix'::__l18::
                 _dynamic_atexit_destructor_for__RootNameSpace__);
          _Init_thread_footer(&::_TSS1);
        }
      }
      return &RootNameSpace;
    }
  }
  else {
    if (param_1 == Self) {
      return &this->RigModulePrefix;
    }
    if (param_1 == Parent) {
      return &this->RigParentModulePrefix;
    }
    if (param_1 == Root) {
      return &this->RigRootModulePrefix;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      atexit(`FControlRigExecuteContext::GetElementModulePrefix'::__l2::
             _dynamic_atexit_destructor_for__EmptyPrefix__);
      _Init_thread_footer(&::_TSS2);
    }
  }
  return &EmptyPrefix;
}

// GetRigModuleInstance @ 14a5316b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall
FControlRigExecuteContext::GetRigModuleInstance
          (FControlRigExecuteContext *this,ERigMetaDataNameSpace param_1)

{
  FRigModuleInstance *pFVar1;
  
  pFVar1 = this->RigModuleInstance;
  if (pFVar1 != (FRigModuleInstance *)0x0) {
    if (param_1 == Self) {
      return pFVar1;
    }
    if (param_1 == Parent) {
      pFVar1 = FRigModuleInstance::GetParentModule(pFVar1);
      return pFVar1;
    }
    if (param_1 == Root) {
      pFVar1 = FRigModuleInstance::GetRootModule(pFVar1);
      return pFVar1;
    }
  }
  return (FRigModuleInstance *)0x0;
}

// IsRunningAConstructionEvent @ 14a532640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigExecuteContext::IsRunningAConstructionEvent(FControlRigExecuteContext *this)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = *(longlong *)&this->field_0x8;
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  if (lVar1 != local_res8) {
    lVar1 = *(longlong *)&this->field_0x8;
    FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
    if (lVar1 != local_res8) {
      return false;
    }
  }
  return true;
}

