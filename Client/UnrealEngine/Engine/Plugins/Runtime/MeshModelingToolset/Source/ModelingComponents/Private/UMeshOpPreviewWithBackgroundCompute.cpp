// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 27

// StaticClass @ 14caad000

UClass * __cdecl UMeshOpPreviewWithBackgroundCompute::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshOpPreviewWithBackgroundCompute",
               &Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.InnerSingleton,
               StaticRegisterNativesUMeshOpPreviewWithBackgroundCompute,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshOpPreviewWithBackgroundCompute>,
               InternalVTableHelperCtorCaller<UMeshOpPreviewWithBackgroundCompute>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.InnerSingleton;
}

// UMeshOpPreviewWithBackgroundCompute @ 14cacdef0

UMeshOpPreviewWithBackgroundCompute * __thiscall
UMeshOpPreviewWithBackgroundCompute::UMeshOpPreviewWithBackgroundCompute
          (UMeshOpPreviewWithBackgroundCompute *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshOpPreviewWithBackgroundCompute__6B_;
  *(undefined8 *)&this->OnMeshUpdated = 0;
  *(undefined8 *)&(this->OnMeshUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnOpCompleted = 0;
  *(undefined8 *)&(this->OnOpCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpCompleted).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpCompleted).field_0x18 = 2;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->StandardMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StandardMaterials).ArrayNum = 0;
  (this->StandardMaterials).ArrayMax = 0;
  (this->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->WorkingMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PreviewWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->PreviewWorld).WeakPtr,(FObjectPtr)&local_res8);
  this->bAllowDirtyResultUpdates = true;
  this->bResultValid = false;
  this->ValidResultComputeTimeSeconds = -1.0;
  this->LastComputeStatus = NotComputing;
  this->bVisible = true;
  this->bMeshTopologyIsConstant = false;
  this->ChangingAttributeFlags = AllVertexAttribs;
  this->bMeshInitialized = false;
  this->SecondsBeforeWorkingMaterial = 2.0;
  (this->BackgroundCompute).Ptr =
       (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
        *)0x0;
  this->MaxActiveBackgroundTasks = 5;
  this->bWaitingForBackgroundTasks = false;
  return this;
}

// UMeshOpPreviewWithBackgroundCompute @ 14cacdfe0

UMeshOpPreviewWithBackgroundCompute * __thiscall
UMeshOpPreviewWithBackgroundCompute::UMeshOpPreviewWithBackgroundCompute
          (UMeshOpPreviewWithBackgroundCompute *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshOpPreviewWithBackgroundCompute__6B_;
  *(undefined8 *)&this->OnMeshUpdated = 0;
  *(undefined8 *)&(this->OnMeshUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnMeshUpdated).field_0x18 = 2;
  *(undefined8 *)&this->OnOpCompleted = 0;
  *(undefined8 *)&(this->OnOpCompleted).field_0x8 = 0;
  *(undefined8 *)&(this->OnOpCompleted).field_0x10 = 0;
  *(undefined8 *)&(this->OnOpCompleted).field_0x18 = 2;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->StandardMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StandardMaterials).ArrayNum = 0;
  (this->StandardMaterials).ArrayMax = 0;
  (this->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->WorkingMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PreviewWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->PreviewWorld).WeakPtr,(FObjectPtr)&local_res8);
  this->bAllowDirtyResultUpdates = true;
  this->bResultValid = false;
  this->ValidResultComputeTimeSeconds = -1.0;
  this->LastComputeStatus = NotComputing;
  this->bVisible = true;
  this->bMeshTopologyIsConstant = false;
  this->ChangingAttributeFlags = AllVertexAttribs;
  this->bMeshInitialized = false;
  this->SecondsBeforeWorkingMaterial = 2.0;
  (this->BackgroundCompute).Ptr =
       (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
        *)0x0;
  this->MaxActiveBackgroundTasks = 5;
  this->bWaitingForBackgroundTasks = false;
  return this;
}

// ~UMeshOpPreviewWithBackgroundCompute @ 14cad24c0

void __thiscall
UMeshOpPreviewWithBackgroundCompute::~UMeshOpPreviewWithBackgroundCompute
          (UMeshOpPreviewWithBackgroundCompute *this)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UMeshOpPreviewWithBackgroundCompute__6B_;
  pTVar1 = (this->BackgroundCompute).Ptr;
  if (pTVar1 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar1->ActiveTaskCount).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar1,0x58);
  }
  pFVar2 = (this->StandardMaterials).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOpCompleted).field_0x8,*(int *)&(this->OnOpCompleted).field_0x10);
  pvVar3 = *(void **)&(this->OnOpCompleted).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOpCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMeshUpdated).field_0x8,*(int *)&(this->OnMeshUpdated).field_0x10);
  pvVar3 = *(void **)&(this->OnMeshUpdated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshUpdated);
  UObject::~UObject((UObject *)this);
  return;
}

// Cancel @ 14caf2bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMeshOpPreviewWithBackgroundCompute::Cancel(UMeshOpPreviewWithBackgroundCompute *this)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *this_00;
  UPreviewMesh *pUVar1;
  UDynamicMeshComponent *pUVar2;
  char cVar3;
  
  this_00 = (this->BackgroundCompute).Ptr;
  if (this_00 !=
      (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
       *)0x0) {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CancelActiveCompute(this_00);
  }
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar2 = (pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDynamicMeshComponent *)0x0) {
    cVar3 = (**(code **)(pUVar2->_padding_ + 0x560))();
    if (cVar3 != '\0') {
      USceneComponent::SetVisibility
                ((USceneComponent *)(pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr,false,
                 Propagate);
      UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(pUVar1);
    }
  }
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar2 = (pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDynamicMeshComponent *)0x0) {
    UActorComponent::UnregisterComponent((UActorComponent *)pUVar2);
    (**(code **)(((pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x4a0))();
    (pUVar1->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  }
  if (pUVar1->TemporaryParentActor != (APreviewMeshActor *)0x0) {
    AActor::Destroy((AActor *)pUVar1->TemporaryParentActor,false,true);
    pUVar1->TemporaryParentActor = (APreviewMeshActor *)0x0;
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  return;
}

// CancelCompute @ 14caf2d30

void __thiscall
UMeshOpPreviewWithBackgroundCompute::CancelCompute(UMeshOpPreviewWithBackgroundCompute *this)

{
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar1;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar2;
  FQueuedThreadPool *pFVar3;
  FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
  *this_00;
  
  pTVar2 = (this->BackgroundCompute).Ptr;
  if (pTVar2 == (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    return;
  }
  pFVar1 = pTVar2->ActiveBackgroundTask;
  if (pFVar1 != (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                 *)0x0) {
    pFVar1->bAbort = true;
    this_00 = ::operator_new(0x40);
    if (this_00 ==
        (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
         *)0x0) {
      this_00 = (FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
                 *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      this_00->_padding_ =
           (longlong)
           &
           ___7__FAutoDeleteAsyncTask_V__TDeleterTask_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE____6B_
      ;
      (this_00->Task).Task =
           (FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)pFVar1;
    }
    pFVar3 = GThreadPool;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    if (pFVar3 == (FQueuedThreadPool *)0x0) {
      FAutoDeleteAsyncTask<UE::Geometry::TDeleterTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>_>
      ::DoWork(this_00);
    }
    else {
      (**(code **)((longlong)*pFVar3 + 0x18))(pFVar3,this_00,3);
    }
    pTVar2->ActiveBackgroundTask =
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0;
    pTVar2->TaskState = NotActive;
    return;
  }
  pTVar2->TaskState = NotActive;
  return;
}

// ChangeOpFactory @ 14caf3040

void __thiscall
UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
          (UMeshOpPreviewWithBackgroundCompute *this,IDynamicMeshOperatorFactory *param_1)

{
  TUniquePtr<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>,TDefaultDelete<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>_>_>
  *pTVar1;
  int iVar2;
  int iVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar6;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar7;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar8;
  longlong local_18 [2];
  
  pTVar1 = &this->BackgroundCompute;
  if (pTVar1->Ptr !=
      (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
       *)0x0) {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CancelActiveCompute(pTVar1->Ptr);
  }
  pTVar6 = ::operator_new(0x58);
  pTVar8 = (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
            *)0x0;
  pTVar7 = pTVar8;
  if (pTVar6 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    pTVar7 = UE::Geometry::
             TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
             ::
             TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                       (pTVar6,param_1);
  }
  if (pTVar1 == (TUniquePtr<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>,TDefaultDelete<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>_>_>
                 *)local_18) {
    if (pTVar7 == (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                   *)0x0) goto LAB_14caf30d6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar7->ActiveTaskCount).SharedReferenceCount.ReferenceController);
  }
  else {
    pTVar6 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar7;
    if (pTVar6 == (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                   *)0x0) goto LAB_14caf30d6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar6->ActiveTaskCount).SharedReferenceCount.ReferenceController);
    pTVar7 = pTVar6;
  }
  ::operator_delete(pTVar7,0x58);
LAB_14caf30d6:
  pTVar4 = UE::Private::MeshOpPreviewLocal::CVarOverrideMaxBackgroundTasks.Ref;
  iVar2 = this->MaxActiveBackgroundTasks;
  bVar5 = IsInParallelGameThread();
  if ((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) {
    pTVar8 = (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
              *)&DAT_00000004;
  }
  iVar3 = *(int *)((longlong)&pTVar8->OperatorSource + (longlong)pTVar4->ShadowedValue);
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  pTVar1->Ptr->MaxActiveTaskCount = iVar2;
  this->bResultValid = false;
  this->bMeshInitialized = false;
  return;
}

// ClearOpFactory @ 14caf46e0

void __thiscall
UMeshOpPreviewWithBackgroundCompute::ClearOpFactory(UMeshOpPreviewWithBackgroundCompute *this)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar1;
  
  pTVar1 = (this->BackgroundCompute).Ptr;
  if (pTVar1 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CancelActiveCompute(pTVar1);
  }
  pTVar1 = (this->BackgroundCompute).Ptr;
  (this->BackgroundCompute).Ptr =
       (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
        *)0x0;
  if (pTVar1 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar1->ActiveTaskCount).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar1,0x58);
  }
  this->bMeshInitialized = false;
  this->bResultValid = false;
  return;
}

// ConfigureMaterials @ 14caf8320

void __thiscall
UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
          (UMeshOpPreviewWithBackgroundCompute *this,UMaterialInterface *param_1,
          UMaterialInterface *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  UPreviewMesh *this_00;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_38,(int *)((longlong)&local_30 + 4));
  FVar3.Data = local_38.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar5 + 1;
  local_30 = CONCAT44(local_30._4_4_,local_20);
  *(UMaterialInterface **)(local_38.Data + (longlong)iVar5 * 8) = param_1;
  lVar6 = (longlong)local_20;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,FVar3.Data,lVar6 << 3);
  }
  iVar4 = local_20;
  FVar3.Data = local_28.Data;
  pTVar1 = &this->StandardMaterials;
  iVar5 = (this->StandardMaterials).ArrayMax;
  piVar2 = &(this->StandardMaterials).ArrayMax;
  (this->StandardMaterials).ArrayNum = local_20;
  if ((local_20 == 0) && (iVar5 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,iVar5,&pTVar1->AllocatorInstance,local_20,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              ((pTVar1->AllocatorInstance).Data,(UMaterialInterface **)FVar3.Data,iVar4);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->WorkingMaterial).field0_0x0.DebugPtr = param_2;
  (this->SecondaryMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewMesh *)0x0) {
    UPreviewMesh::SetMaterials
              (this_00,(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)pTVar1);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// ConfigureMaterials @ 14caf84a0

void __thiscall
UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
          (UMeshOpPreviewWithBackgroundCompute *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          UMaterialInterface *param_2,UMaterialInterface *param_3)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UPreviewMesh *this_00;
  
  iVar3 = param_1->ArrayNum;
  pTVar1 = &this->StandardMaterials;
  pFVar4 = (param_1->AllocatorInstance).Data;
  piVar2 = &(this->StandardMaterials).ArrayMax;
  (this->StandardMaterials).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,UMaterialInterface_*,int>
              ((pTVar1->AllocatorInstance).Data,(UMaterialInterface **)pFVar4,iVar3);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->WorkingMaterial).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->SecondaryMaterial).field0_0x0.DebugPtr = param_3;
  this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewMesh *)0x0) {
    UPreviewMesh::SetMaterials
              (this_00,(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)pTVar1);
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ConfigurePreviewMaterials @ 14caf85a0

void __thiscall
UMeshOpPreviewWithBackgroundCompute::ConfigurePreviewMaterials
          (UMeshOpPreviewWithBackgroundCompute *this,UMaterialInterface *param_1,
          UMaterialInterface *param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WorkingMaterial).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->SecondaryMaterial).field0_0x0.DebugPtr = param_2;
  return;
}

// DisablePreviewMaterials @ 14cb01e80

void __thiscall
UMeshOpPreviewWithBackgroundCompute::DisablePreviewMaterials
          (UMeshOpPreviewWithBackgroundCompute *this)

{
  (this->WorkingMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SecondaryMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return;
}

// GetCurrentResultCopy @ 14cb0efb0

bool __thiscall
UMeshOpPreviewWithBackgroundCompute::GetCurrentResultCopy
          (UMeshOpPreviewWithBackgroundCompute *this,FDynamicMesh3 *param_1,bool param_2)

{
  UPreviewMesh *pUVar1;
  FDynamicMesh3 *local_res8 [4];
  code *local_18;
  FDynamicMesh3 **local_10;
  
  if ((this->bResultValid == false) && (param_2)) {
    return false;
  }
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshOpPreviewWithBackgroundCompute::GetCurrentResultCopy'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8[0] = param_1;
  (**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1,&local_18);
  return true;
}

// GetPrivateStaticClass @ 14cb12540

UClass * __cdecl UMeshOpPreviewWithBackgroundCompute::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshOpPreviewWithBackgroundCompute",
               &Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.InnerSingleton,
               StaticRegisterNativesUMeshOpPreviewWithBackgroundCompute,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshOpPreviewWithBackgroundCompute>,
               InternalVTableHelperCtorCaller<UMeshOpPreviewWithBackgroundCompute>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshOpPreviewWithBackgroundCompute.InnerSingleton;
}

// GetWorld @ 14cb15740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UMeshOpPreviewWithBackgroundCompute::GetWorld(UMeshOpPreviewWithBackgroundCompute *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->PreviewWorld).WeakPtr);
  return pUVar1;
}

// InvalidateResult @ 14cb21a40

void __thiscall
UMeshOpPreviewWithBackgroundCompute::InvalidateResult(UMeshOpPreviewWithBackgroundCompute *this)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *this_00;
  
  this_00 = (this->BackgroundCompute).Ptr;
  if (this_00 !=
      (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
       *)0x0) {
    if (this_00->TaskState == ComputingResult) {
      this_00->LastInvalidateTime = this_00->AccumTime;
      this_00->TaskState = WaitingToCancel;
      this->bResultValid = false;
      return;
    }
    if (this_00->TaskState == NotActive) {
      UE::Geometry::
      TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
      ::StartNewCompute(this_00);
    }
  }
  this->bResultValid = false;
  return;
}

// IsUsingWorkingMaterial @ 14cb23280

bool __thiscall
UMeshOpPreviewWithBackgroundCompute::IsUsingWorkingMaterial
          (UMeshOpPreviewWithBackgroundCompute *this)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *this_00;
  FStatus local_18;
  
  if ((((this->WorkingMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) &&
      (this_00 = (this->BackgroundCompute).Ptr,
      this_00 !=
      (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
       *)0x0)) && (this->LastComputeStatus == InProgress)) {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CheckStatus(this_00,&local_18);
    if (local_18.TaskStatus != InProgress) {
      local_18.ElapsedTime = 0.0;
    }
    if ((double)this->SecondsBeforeWorkingMaterial < local_18.ElapsedTime) {
      return true;
    }
  }
  return false;
}

// ProcessCurrentMesh @ 14cb28d50

bool __thiscall
UMeshOpPreviewWithBackgroundCompute::ProcessCurrentMesh
          (UMeshOpPreviewWithBackgroundCompute *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1,bool param_2)

{
  UPreviewMesh *pUVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((this->bResultValid == false) && (param_2)) {
    return false;
  }
  pUVar1 = (this->PreviewMesh).field0_0x0.DebugPtr;
  local_18 = *(undefined8 *)param_1;
  local_10 = *(undefined8 *)&param_1->field_0x8;
  (**(code **)(*(longlong *)pUVar1 + 0x2b0))(pUVar1,&local_18);
  return true;
}

// SetIsMeshTopologyConstant @ 14cb36c40

void __thiscall
UMeshOpPreviewWithBackgroundCompute::SetIsMeshTopologyConstant
          (UMeshOpPreviewWithBackgroundCompute *this,bool param_1,EMeshRenderAttributeFlags param_2)

{
  this->bMeshTopologyIsConstant = param_1;
  this->ChangingAttributeFlags = param_2;
  return;
}

// SetMaxActiveBackgroundTasks @ 14cb36f10

void __thiscall
UMeshOpPreviewWithBackgroundCompute::SetMaxActiveBackgroundTasks
          (UMeshOpPreviewWithBackgroundCompute *this,int param_1)

{
  int iVar1;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  
  pTVar2 = (this->BackgroundCompute).Ptr;
  this->MaxActiveBackgroundTasks = param_1;
  pTVar3 = UE::Private::MeshOpPreviewLocal::CVarOverrideMaxBackgroundTasks.Ref;
  if (pTVar2 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
    if (0 < iVar1) {
      param_1 = iVar1;
    }
    ((this->BackgroundCompute).Ptr)->MaxActiveTaskCount = param_1;
    return;
  }
  return;
}

// SetVisibility @ 14cb385d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMeshOpPreviewWithBackgroundCompute::SetVisibility
          (UMeshOpPreviewWithBackgroundCompute *this,bool param_1)

{
  UPreviewMesh *this_00;
  UDynamicMeshComponent *pUVar1;
  char cVar2;
  
  this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
  this->bVisible = param_1;
  pUVar1 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x560))();
    if ((bool)cVar2 != param_1) {
      USceneComponent::SetVisibility
                ((USceneComponent *)(this_00->DynamicMeshComponent).field0_0x0.DebugPtr,param_1,
                 Propagate);
      UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(this_00);
    }
  }
  return;
}

// Setup @ 14cb3ad40

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

void __thiscall
UMeshOpPreviewWithBackgroundCompute::Setup
          (UMeshOpPreviewWithBackgroundCompute *this,UWorld *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPreviewMesh *this_00;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = ::FName::FName(local_a8,L"PreviewMesh");
  FVar1 = *pFVar2;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = UPreviewMesh::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._8_8_ = this;
  local_98._16_8_ = FVar1;
  this_00 = (UPreviewMesh *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = this_00;
  UPreviewMesh::CreateInWorld(this_00,param_1,&UE::Math::TTransform<double>::Identity);
  local_a8[0] = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->PreviewWorld).WeakPtr,(FObjectPtr)local_a8);
  this->bResultValid = false;
  this->bMeshInitialized = false;
  return;
}

// Setup @ 14cb3ae90

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

void __thiscall
UMeshOpPreviewWithBackgroundCompute::Setup
          (UMeshOpPreviewWithBackgroundCompute *this,UWorld *param_1,
          IDynamicMeshOperatorFactory *param_2)

{
  TUniquePtr<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>,TDefaultDelete<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>_>_>
  *pTVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UPreviewMesh *this_00;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar9;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar10;
  longlong *plVar11;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar12;
  undefined1 auStack_d8 [32];
  FName local_b8;
  longlong local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar7 = ::FName::FName(&local_b8,L"PreviewMesh");
  FVar4 = *pFVar7;
  if (FVar4 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = UPreviewMesh::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  pTVar12 = (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
             *)0x0;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  local_a8._16_8_ = FVar4;
  this_00 = (UPreviewMesh *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = this_00;
  UPreviewMesh::CreateInWorld(this_00,param_1,&UE::Math::TTransform<double>::Identity);
  local_b8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->PreviewWorld).WeakPtr,(FObjectPtr)&local_b8);
  this->bResultValid = false;
  this->bMeshInitialized = false;
  pTVar9 = ::operator_new(0x58);
  pTVar10 = pTVar12;
  if (pTVar9 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    pTVar10 = UE::Geometry::
              TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
              ::
              TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                        (pTVar9,param_2);
  }
  pTVar1 = &this->BackgroundCompute;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>,TDefaultDelete<UE::Geometry::TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>_>_>
                 *)&local_b0) {
    if (pTVar10 ==
        (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
         *)0x0) goto LAB_14cb3b01b;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar10->ActiveTaskCount).SharedReferenceCount.ReferenceController);
  }
  else {
    pTVar9 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar10;
    if (pTVar9 == (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                   *)0x0) goto LAB_14cb3b01b;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar9->ActiveTaskCount).SharedReferenceCount.ReferenceController);
    pTVar10 = pTVar9;
  }
  ::operator_delete(pTVar10,0x58);
LAB_14cb3b01b:
  pTVar5 = UE::Private::MeshOpPreviewLocal::CVarOverrideMaxBackgroundTasks.Ref;
  iVar2 = this->MaxActiveBackgroundTasks;
  bVar6 = IsInParallelGameThread();
  if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
    pTVar12 = (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
               *)&DAT_00000004;
  }
  iVar3 = *(int *)((longlong)&pTVar12->OperatorSource + (longlong)pTVar5->ShadowedValue);
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  pTVar1->Ptr->MaxActiveTaskCount = iVar2;
  return;
}

// Shutdown @ 14cb3be90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDynamicMeshOpResult * __thiscall
UMeshOpPreviewWithBackgroundCompute::Shutdown
          (UMeshOpPreviewWithBackgroundCompute *this,FDynamicMeshOpResult *__return_storage_ptr__)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *this_00;
  UDynamicMeshComponent *pUVar1;
  FDynamicMesh3 *pFVar2;
  APreviewMeshActor *pAVar3;
  longlong lVar4;
  UPreviewMesh *pUVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  UDynamicMesh *this_01;
  TTransform<double> *pTVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FDynamicMeshOpResult local_a8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  this_00 = (this->BackgroundCompute).Ptr;
  if (this_00 !=
      (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
       *)0x0) {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CancelActiveCompute(this_00);
  }
  (__return_storage_ptr__->Mesh).Ptr = (FDynamicMesh3 *)0x0;
  (__return_storage_ptr__->Transform).Rotation.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Transform).Rotation.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Transform).Rotation.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Transform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Transform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Transform).Translation.field0_0x0._s_0.Y = (double)uVar14;
  (__return_storage_ptr__->Transform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar17 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 =
       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 4) = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 8) = uVar16;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 0xc) = uVar17;
  (__return_storage_ptr__->Transform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  pUVar1 = (((this->PreviewMesh).field0_0x0.DebugPtr)->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (UDynamicMeshComponent *)0x0) {
    local_a8.Mesh.Ptr = (FDynamicMesh3 *)0x0;
  }
  else {
    this_01 = (UDynamicMesh *)(**(code **)(pUVar1->_padding_ + 0xb48))();
    UDynamicMesh::ExtractMesh(this_01);
  }
  if (__return_storage_ptr__ != &local_a8) {
    pFVar2 = (__return_storage_ptr__->Mesh).Ptr;
    (__return_storage_ptr__->Mesh).Ptr = local_a8.Mesh.Ptr;
    local_a8.Mesh.Ptr = (FDynamicMesh3 *)0x0;
    if (pFVar2 != (FDynamicMesh3 *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2);
    }
  }
  if (local_a8.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_a8.Mesh.Ptr)->_padding_)();
  }
  pAVar3 = ((this->PreviewMesh).field0_0x0.DebugPtr)->TemporaryParentActor;
  if (pAVar3 == (APreviewMeshActor *)0x0) {
    dVar20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dVar21 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    dVar22 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dVar23 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    dVar12 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dVar13 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    dVar9 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dVar10 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_a8.Transform.Rotation.field0_0x0._s_0.Z =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    dVar24 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  }
  else {
    lVar4 = *(longlong *)&pAVar3->field_0x1b8;
    if (lVar4 == 0) {
      pTVar19 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar19 = (TTransform<double> *)(lVar4 + 0x1f0);
    }
    dVar20 = (pTVar19->Rotation).XY.m128d_f64[0];
    dVar21 = (pTVar19->Rotation).XY.m128d_f64[1];
    dVar22 = (pTVar19->Rotation).ZW.m128d_f64[0];
    dVar23 = (pTVar19->Rotation).ZW.m128d_f64[1];
    dVar9 = (pTVar19->Translation).XY.m128d_f64[0];
    dVar10 = (pTVar19->Translation).XY.m128d_f64[1];
    dVar24 = (pTVar19->Translation).ZW.m128d_f64[0];
    dVar12 = (pTVar19->Scale3D).XY.m128d_f64[0];
    dVar13 = (pTVar19->Scale3D).XY.m128d_f64[1];
    local_a8.Transform.Rotation.field0_0x0._s_0.Z = (pTVar19->Scale3D).ZW.m128d_f64[0];
  }
  auVar6._8_4_ = SUB84(dVar21,0);
  auVar6._0_8_ = dVar20;
  auVar6._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Transform).Rotation.field0_0x0 = auVar6;
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar12;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_a8.Transform.Scale3D.field0_0x0._16_4_ = SUB84(dVar24,0);
  local_a8.Transform.Scale3D.field0_0x0._20_4_ = (undefined4)((ulonglong)dVar24 >> 0x20);
  auStack_50._0_4_ = SUB84(dVar12,0);
  auStack_50._4_4_ = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar7._8_4_ = SUB84(dVar23,0);
  auVar7._0_8_ = dVar22;
  auVar7._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Transform).Rotation.field0_0x0 + 0x10)
       = auVar7;
  uStack_40._0_4_ = SUB84(local_a8.Transform.Rotation.field0_0x0._s_0.Z,0);
  uStack_40._4_4_ = (undefined4)((ulonglong)local_a8.Transform.Rotation.field0_0x0._s_0.Z >> 0x20);
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Transform).Translation.field0_0x0 = auVar8;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Translation.field0_0x0 + 0x10) =
       local_a8.Transform.Scale3D.field0_0x0._16_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Translation.field0_0x0 + 0x14) =
       local_a8.Transform.Scale3D.field0_0x0._20_4_;
  *(undefined4 *)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 = auStack_50._0_4_;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 4) =
       auStack_50._4_4_;
  *(double *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 8) = dVar13;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 0x10) =
       (undefined4)uStack_40;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Transform).Scale3D.field0_0x0 + 0x14) =
       uStack_40._4_4_;
  pUVar5 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar1 = (pUVar5->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_a8.Transform.Scale3D.field0_0x0._s_0.Z = dVar24;
  auStack_50 = auVar11;
  uStack_40 = local_a8.Transform.Rotation.field0_0x0._s_0.Z;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    cVar18 = (**(code **)(pUVar1->_padding_ + 0x560))();
    if (cVar18 != '\0') {
      USceneComponent::SetVisibility
                ((USceneComponent *)(pUVar5->DynamicMeshComponent).field0_0x0.DebugPtr,false,
                 Propagate);
      UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(pUVar5);
    }
  }
  pUVar5 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar1 = (pUVar5->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    UActorComponent::UnregisterComponent((UActorComponent *)pUVar1);
    (**(code **)(((pUVar5->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x4a0))();
    (pUVar5->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  }
  if (pUVar5->TemporaryParentActor != (APreviewMeshActor *)0x0) {
    AActor::Destroy((AActor *)pUVar5->TemporaryParentActor,false,true);
    pUVar5->TemporaryParentActor = (APreviewMeshActor *)0x0;
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->PreviewWorld).WeakPtr = local_res8;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMeshOpPreviewWithBackgroundCompute @ 14cb3eb20

void __cdecl
UMeshOpPreviewWithBackgroundCompute::StaticRegisterNativesUMeshOpPreviewWithBackgroundCompute(void)

{
  return;
}

// Tick @ 14cb40a70

void __thiscall
UMeshOpPreviewWithBackgroundCompute::Tick(UMeshOpPreviewWithBackgroundCompute *this,float param_1)

{
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar1;
  UMaterialInterface *pUVar2;
  UDynamicMeshComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPreviewMesh *pUVar6;
  double dVar7;
  FStatus local_18;
  
  pTVar1 = (this->BackgroundCompute).Ptr;
  if (pTVar1 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    dVar7 = (double)param_1 + pTVar1->AccumTime;
    pTVar1->AccumTime = dVar7;
    if ((pTVar1->TaskState == WaitingToCancel) &&
       (dVar7 = dVar7 - pTVar1->LastInvalidateTime,
       pTVar1->CancelActiveOpDelaySeconds <= dVar7 && dVar7 != pTVar1->CancelActiveOpDelaySeconds))
    {
      UE::Geometry::
      TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
      ::CancelActiveCompute(pTVar1);
      if (((pTVar1->ActiveTaskCount).Object == (atomic<int> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((int)*(pTVar1->ActiveTaskCount).Object < pTVar1->MaxActiveTaskCount) {
        pTVar1->bWaitingForActiveTasksToFinish = false;
        UE::Geometry::
        TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
        ::StartNewCompute(pTVar1);
      }
      else {
        pTVar1->bWaitingForActiveTasksToFinish = true;
        pTVar1->TaskState = WaitingToCancel;
      }
    }
    UpdateResults(this);
  }
  if ((((this->WorkingMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) &&
      (pTVar1 = (this->BackgroundCompute).Ptr,
      pTVar1 != (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0)) && (this->LastComputeStatus == InProgress)) {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CheckStatus(pTVar1,&local_18);
    if (local_18.TaskStatus != InProgress) {
      local_18.ElapsedTime = 0.0;
    }
    if ((double)this->SecondsBeforeWorkingMaterial < local_18.ElapsedTime) {
      pUVar6 = (this->PreviewMesh).field0_0x0.DebugPtr;
      pUVar2 = (this->WorkingMaterial).field0_0x0.DebugPtr;
      if (((pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr == (UDynamicMeshComponent *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DynamicMeshComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                             ,0x8f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = (pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0xbf0))(pUVar3,pUVar2);
      pUVar6 = (this->PreviewMesh).field0_0x0.DebugPtr;
      pUVar3 = (pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr;
      goto LAB_14cb40cb0;
    }
  }
  pUVar6 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar2 = (this->OverrideMaterial).field0_0x0.DebugPtr;
  pUVar3 = (pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (UMaterialInterface *)0x0) {
    if ((pUVar3 == (UDynamicMeshComponent *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMeshComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                           ,0x95,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(((pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xbf8))();
  }
  else {
    if ((pUVar3 == (UDynamicMeshComponent *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMeshComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                           ,0x8f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar3 = (pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0xbf0))(pUVar3,pUVar2);
  }
  pUVar6 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar2 = (this->SecondaryMaterial).field0_0x0.DebugPtr;
  pUVar3 = (pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    if ((pUVar3 == (UDynamicMeshComponent *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DynamicMeshComponent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar3 = (pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb40ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar3->_padding_ + 0xc10))(pUVar3,pUVar2);
    return;
  }
LAB_14cb40cb0:
  if ((pUVar3 == (UDynamicMeshComponent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\PreviewMesh.cpp"
                         ,0xaa,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb40cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((pUVar6->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xc18))();
  return;
}

// UpdateResults @ 14cb48fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMeshOpPreviewWithBackgroundCompute::UpdateResults(UMeshOpPreviewWithBackgroundCompute *this)

{
  undefined1 *puVar1;
  int iVar2;
  TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
  *pTVar3;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  FDynamicMesh3 *pFVar8;
  UPreviewMesh *this_00;
  UDynamicMeshComponent *pUVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  FText *this_01;
  uint uVar16;
  ERenderUpdateMode EVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [24];
  FStatus local_f0;
  FDestructionSentinel local_e0;
  FText local_c8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar3 = (this->BackgroundCompute).Ptr;
  if (pTVar3 == (TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
                 *)0x0) {
    this->LastComputeStatus = NotComputing;
  }
  else {
    UE::Geometry::
    TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
    ::CheckStatus(pTVar3,&local_f0);
    this->LastComputeStatus = local_f0.TaskStatus;
    if ((local_f0.TaskStatus == ValidResultAvailable) ||
       ((this->bAllowDirtyResultUpdates != false && (local_f0.TaskStatus == DirtyResultAvailable))))
    {
      pTVar3 = (this->BackgroundCompute).Ptr;
      pFVar4 = pTVar3->ActiveBackgroundTask;
      if ((pFVar4 == (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                      *)0x0) || (*(int *)&pFVar4->field_0x38 != 0)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActiveBackgroundTask != nullptr && ActiveBackgroundTask->IsDone()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\BackgroundModelingComputeSource.h"
                            ,0x171,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
        FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar4,false);
      }
      pFVar4 = pTVar3->ActiveBackgroundTask;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar4);
      puVar5 = *(undefined8 **)&pFVar4->field_0x130;
      bVar11 = false;
      *(undefined8 *)&pFVar4->field_0x130 = 0;
      pFVar4 = pTVar3->ActiveBackgroundTask;
      if (pFVar4 != (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
                     *)0x0) {
        (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4,1);
      }
      pTVar3->ActiveBackgroundTask =
           (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
            *)0x0;
      if (pTVar3->TaskState == WaitingToCancel) {
        UE::Geometry::
        TBackgroundModelingComputeSource<UE::Geometry::FDynamicMeshOperator,UE::Geometry::IDynamicMeshOperatorFactory>
        ::StartNewCompute(pTVar3);
      }
      else {
        pTVar3->TaskState = NotActive;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnOpCompleted,
                 (FWriteAccessScope *)&local_e0);
      puVar1 = &(this->OnOpCompleted).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar14 = false;
      uVar16 = *(int *)&(this->OnOpCompleted).field_0x10 - 1;
      if (-1 < (int)uVar16) {
        lVar19 = (longlong)(int)uVar16;
        lVar18 = lVar19 << 4;
        bVar14 = false;
        do {
          iVar2 = *(int *)&(this->OnOpCompleted).field_0x10;
          uVar15 = 0;
          if ((int)uVar16 < iVar2) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_118 = lVar19, local_110 = (longlong)iVar2,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar6 = *(longlong *)&(this->OnOpCompleted).field_0x8;
          if (((*(int *)(lVar18 + 8 + lVar6) == 0) ||
              (plVar7 = *(longlong **)(lVar18 + lVar6), plVar7 == (longlong *)0x0)) ||
             (cVar13 = (**(code **)(*plVar7 + 0x68))(), cVar13 == '\0')) {
            bVar14 = true;
          }
          lVar19 = lVar19 + -1;
          lVar18 = lVar18 + -0x10;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      puVar1 = &(this->OnOpCompleted).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar14) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnOpCompleted,false)
        ;
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      local_b8.Rotation.XY.m128d_f64[0] = (double)puVar5[2];
      local_b8.Rotation.XY.m128d_f64[1] = (double)puVar5[3];
      pFVar8 = (FDynamicMesh3 *)puVar5[1];
      local_b8.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(puVar5 + 4);
      local_b8.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)puVar5 + 0x24);
      local_b8.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(puVar5 + 5);
      puVar5[1] = 0;
      local_b8.Translation.XY.m128d_f64[0] = (double)puVar5[6];
      local_b8.Translation.XY.m128d_f64[1] = (double)puVar5[7];
      local_b8.Scale3D.XY.m128d_f64[0] = (double)puVar5[9];
      local_b8.Scale3D.XY.m128d_f64[1] = (double)puVar5[10];
      local_108._16_8_ = puVar5[0xb];
      local_b8.Translation.ZW.m128d_f64[0] = (double)puVar5[8];
      local_b8.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)puVar5[5] >> 0x20);
      local_b8.Translation.ZW.m128d_f64[1] = 0.0;
      local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_b8.Scale3D.ZW.m128d_f64[0] = (double)local_108._16_8_;
      UPreviewMesh::SetTransform((this->PreviewMesh).field0_0x0.DebugPtr,&local_b8);
      if ((this->bMeshTopologyIsConstant == false) ||
         (EVar17 = FastUpdate, this->bMeshInitialized == false)) {
        EVar17 = FullUpdate;
      }
      UPreviewMesh::UpdatePreview
                ((this->PreviewMesh).field0_0x0.DebugPtr,pFVar8,EVar17,this->ChangingAttributeFlags)
      ;
      this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
      bVar14 = this->bVisible;
      this->bMeshInitialized = true;
      pUVar9 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
      if ((pUVar9 != (UDynamicMeshComponent *)0x0) &&
         (cVar13 = (**(code **)(pUVar9->_padding_ + 0x560))(), (bool)cVar13 != bVar14)) {
        USceneComponent::SetVisibility
                  ((USceneComponent *)(this_00->DynamicMeshComponent).field0_0x0.DebugPtr,bVar14,
                   Propagate);
        UPreviewMesh::NotifyWorldPathTracedOutputInvalidated(this_00);
      }
      this->ValidResultComputeTimeSeconds = local_f0.ElapsedTime;
      this->bResultValid = this->LastComputeStatus == ValidResultAvailable;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMeshUpdated,
                 (FWriteAccessScope *)local_108);
      puVar1 = &(this->OnMeshUpdated).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      uVar16 = *(int *)&(this->OnMeshUpdated).field_0x10 - 1;
      if (-1 < (int)uVar16) {
        lVar18 = (longlong)(int)uVar16;
        lVar19 = lVar18 << 4;
        do {
          iVar2 = *(int *)&(this->OnMeshUpdated).field_0x10;
          uVar15 = 0;
          if ((int)uVar16 < iVar2) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_118 = lVar18, local_110 = (longlong)iVar2,
             bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar6 = *(longlong *)&(this->OnMeshUpdated).field_0x8;
          if (((*(int *)(lVar6 + 8 + lVar19) == 0) ||
              (plVar7 = *(longlong **)(lVar6 + lVar19), plVar7 == (longlong *)0x0)) ||
             (cVar13 = (**(code **)(*plVar7 + 0x68))(), cVar13 == '\0')) {
            bVar11 = true;
          }
          lVar18 = lVar18 + -1;
          lVar19 = lVar19 + -0x10;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      puVar1 = &(this->OnMeshUpdated).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnMeshUpdated,false)
        ;
      }
      if (local_108[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108
                  );
      }
      this->bWaitingForBackgroundTasks = false;
      if (pFVar8 != (FDynamicMesh3 *)0x0) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    else {
      pTVar3 = (this->BackgroundCompute).Ptr;
      if (pTVar3->bWaitingForActiveTasksToFinish != false) {
        if (((pTVar3->ActiveTaskCount).Object == (atomic<int> *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (pTVar3->MaxActiveTaskCount <= (int)*(pTVar3->ActiveTaskCount).Object) {
          if (this->bWaitingForBackgroundTasks != false) {
            return;
          }
          this_01 = FText::AsLocalizable_Advanced_LocText
                              (&local_c8,L"MeshOpPreviewHelpers",L"TooManyBackgroundTasks",
                               L"Too many background tasks: Cancelling earlier tasks before generating new preview."
                              );
          if (2 < (byte)LogGeometry._0_1_) {
            FText::ToString(this_01);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u__s_15290cd38,(FLogCategoryBase *)&LogGeometry
                      );
          }
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          }
          this->bWaitingForBackgroundTasks = true;
          return;
        }
      }
      this->bWaitingForBackgroundTasks = false;
    }
  }
  return;
}

