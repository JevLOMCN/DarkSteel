// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 20

// StaticClass @ 14cbff130

UClass * __cdecl UDisplaceMeshTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshTool",
               &Z_Registration_Info_UClass_UDisplaceMeshTool.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshTool,0x500,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDisplaceMeshTool>,
               InternalVTableHelperCtorCaller<UDisplaceMeshTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshTool.InnerSingleton;
}

// UDisplaceMeshTool @ 14cc1d280

UDisplaceMeshTool * __thiscall
UDisplaceMeshTool::UDisplaceMeshTool(UDisplaceMeshTool *this,FVTableHelper *param_1)

{
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this,param_1);
  this->bNeedsSubdivided = true;
  this->ComputationStartTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CommonProperties).field0_0x0.DebugPtr = (UDisplaceMeshCommonProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UDisplaceMeshTool__6B_;
  (this->DirectionalFilterProperties).field0_0x0.DebugPtr =
       (UDisplaceMeshDirectionalFilterProperties *)0x0;
  (this->TextureMapProperties).field0_0x0.DebugPtr = (UDisplaceMeshTextureMapProperties *)0x0;
  (this->NoiseProperties).field0_0x0.DebugPtr = (UDisplaceMeshPerlinNoiseProperties *)0x0;
  (this->SineWaveProperties).field0_0x0.DebugPtr = (UDisplaceMeshSineWaveProperties *)0x0;
  (this->SelectiveTessellationProperties).field0_0x0.DebugPtr =
       (USelectiveTessellationProperties *)0x0;
  (this->ActiveContrastCurveTarget).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->MeshStatistics).field0_0x0.DebugPtr = (UMeshStatisticsProperties *)0x0;
  this->SubdivideTask =
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0;
  this->DisplaceTask =
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0;
  this->bNeedsDisplaced = true;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->OriginalMesh);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->OriginalMeshSpatial);
  (this->ActiveWeightMap).Object = (TIndexedWeightMap<float> *)0x0;
  (this->ActiveWeightMap).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SubdividedMesh).Object = (FDynamicMesh3 *)0x0;
  (this->SubdividedMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VerticesToDisplace).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->VerticesToDisplace).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->Subdivider).Ptr = (IDynamicMeshOperatorFactory *)0x0;
  (this->Displacer).Ptr = (IDynamicMeshOperatorFactory *)0x0;
  (this->ActiveContrastCurveListenerHandle).ID = 0;
  return this;
}

// UDisplaceMeshTool @ 14cc1d390

UDisplaceMeshTool * __thiscall UDisplaceMeshTool::UDisplaceMeshTool(UDisplaceMeshTool *this)

{
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  this->bNeedsSubdivided = true;
  this->ComputationStartTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CommonProperties).field0_0x0.DebugPtr = (UDisplaceMeshCommonProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UDisplaceMeshTool__6B_;
  (this->DirectionalFilterProperties).field0_0x0.DebugPtr =
       (UDisplaceMeshDirectionalFilterProperties *)0x0;
  (this->TextureMapProperties).field0_0x0.DebugPtr = (UDisplaceMeshTextureMapProperties *)0x0;
  (this->NoiseProperties).field0_0x0.DebugPtr = (UDisplaceMeshPerlinNoiseProperties *)0x0;
  (this->SineWaveProperties).field0_0x0.DebugPtr = (UDisplaceMeshSineWaveProperties *)0x0;
  (this->SelectiveTessellationProperties).field0_0x0.DebugPtr =
       (USelectiveTessellationProperties *)0x0;
  (this->ActiveContrastCurveTarget).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->MeshStatistics).field0_0x0.DebugPtr = (UMeshStatisticsProperties *)0x0;
  this->SubdivideTask =
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0;
  this->DisplaceTask =
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0;
  this->bNeedsDisplaced = true;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->OriginalMesh);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->OriginalMeshSpatial);
  (this->ActiveWeightMap).Object = (TIndexedWeightMap<float> *)0x0;
  (this->ActiveWeightMap).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SubdividedMesh).Object = (FDynamicMesh3 *)0x0;
  (this->SubdividedMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VerticesToDisplace).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->VerticesToDisplace).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->Subdivider).Ptr = (IDynamicMeshOperatorFactory *)0x0;
  (this->Displacer).Ptr = (IDynamicMeshOperatorFactory *)0x0;
  (this->ActiveContrastCurveListenerHandle).ID = 0;
  return this;
}

// ~UDisplaceMeshTool @ 14cc228c0

void __thiscall UDisplaceMeshTool::~UDisplaceMeshTool(UDisplaceMeshTool *this)

{
  IDynamicMeshOperatorFactory *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UDisplaceMeshTool__6B_;
  pIVar1 = (this->Displacer).Ptr;
  if (pIVar1 != (IDynamicMeshOperatorFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar1 = (this->Subdivider).Ptr;
  if (pIVar1 != (IDynamicMeshOperatorFactory *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VerticesToDisplace).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SubdividedMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveWeightMap).SharedReferenceCount.ReferenceController);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->OriginalMeshSpatial);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->OriginalMesh);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  return;
}

// operator() @ 14cc2c1f0

void __thiscall `UDisplaceMeshTool::Setup'::__l20::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// operator() @ 14cc2d340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
`UDisplaceMeshTool::Setup'::__l2::<lambda_2>::operator()
          (void *this,TVector<double> *param_1,TIndexedWeightMap<float> *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_178 [32];
  TVector<double>_u_0 local_158;
  undefined1 local_138 [16];
  undefined8 local_128 [2];
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8;
  TDistPoint3Triangle3<double> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)this;
  local_118 = 0;
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  local_128[0] = __real_7fefffffffffffff;
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x3e0) + 0x20))
                    ((longlong *)(lVar2 + 0x3e0),param_1,local_138,local_128);
  if (local_118 != 0) {
    plVar4 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar4 = local_f0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  fVar5 = __real_3f800000;
  if (-1 < (int)uVar3) {
    local_158._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_158._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_158._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
              (&local_d8,(FDynamicMesh3 *)(lVar2 + 0x1b0),uVar3,(TVector<double> *)&local_158._s_0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x2e0) + (ulonglong)(uVar3 >> 9) * 8);
    local_158._s_0.X = *(double *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    iVar1 = *(int *)(lVar2 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    fVar5 = UE::Geometry::TIndexedWeightMap<float>::GetValue(param_2,local_158._0_4_);
    fVar6 = UE::Geometry::TIndexedWeightMap<float>::GetValue(param_2,local_158._4_4_);
    fVar7 = UE::Geometry::TIndexedWeightMap<float>::GetValue(param_2,iVar1);
    fVar5 = (float)((double)fVar7 * local_d8.TriangleBaryCoords.field0_0x0._s_0.Z +
                   (double)fVar6 * local_d8.TriangleBaryCoords.field0_0x0._s_0.Y +
                   (double)fVar5 * local_d8.TriangleBaryCoords.field0_0x0._s_0.X);
  }
  return fVar5;
}

// AdvanceComputation @ 14cc33c80

void __thiscall UDisplaceMeshTool::AdvanceComputation(UDisplaceMeshTool *this)

{
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar1;
  TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar2;
  undefined8 *puVar3;
  FDynamicMesh3 *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  UMeshStatisticsProperties *pUVar6;
  UDisplaceMeshTextureMapProperties *pUVar7;
  FDisplaceMeshOpFactory *this_00;
  TReferenceControllerBase<1> *pTVar8;
  IDynamicMeshOperatorFactory *pIVar9;
  UDynamicMeshComponent *pUVar10;
  code *pcVar11;
  bool bVar12;
  UInteractiveToolManager *pUVar13;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar14;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  *pTVar15;
  FDynamicMesh3 *this_01;
  longlong *plVar16;
  UCurveFloat *pUVar17;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar18;
  LARGE_INTEGER local_res8;
  undefined8 *local_res10;
  FDynamicMesh3 *local_58;
  FSharedReferencer<1> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  FSharedReferencer<1> local_40;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pFVar18 = (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
             *)0x0;
  local_res8.s.LowPart = 0;
  QueryPerformanceCounter(&local_res8);
  if ((__real_3f400000 <
       (float)(((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
                FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) -
              this->ComputationStartTime)) &&
     (pFVar14 = this->DisplaceTask,
     pFVar14 !=
     (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
      *)0x0)) {
    if (((FThreadSafeCounter *)&pFVar14->field_0x38)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar14,false);
    }
    else {
      pUVar10 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      pcVar11 = *(code **)(pUVar10->_padding_ + 0xbf0);
      pUVar13 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
      ToolSetupUtil::GetDefaultWorkingMaterial(pUVar13);
      (*pcVar11)(pUVar10);
    }
  }
  pFVar14 = this->SubdivideTask;
  if ((pFVar14 !=
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0) && (((FThreadSafeCounter *)&pFVar14->field_0x38)->Counter == 0)) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar14,false);
    pFVar14 = this->SubdivideTask;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar14);
    puVar3 = *(undefined8 **)&pFVar14->field_0x130;
    *(undefined8 *)&pFVar14->field_0x130 = 0;
    pFVar4 = (FDynamicMesh3 *)puVar3[1];
    puVar3[1] = 0;
    local_58 = pFVar4;
    pFVar14 = ::operator_new(0x18);
    local_50.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
    if (pFVar14 !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      *(undefined4 *)&pFVar14->field_0x8 = 1;
      *(undefined ***)pFVar14 =
           &
           ___7__TReferenceControllerWithDeleter_VFDynamicMesh3_Geometry_UE__U__DefaultDeleter_VFDynamicMesh3_Geometry_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&pFVar14->field_0xc = 1;
      *(FDynamicMesh3 **)&pFVar14->field_0x10 = pFVar4;
      local_50.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    }
    pTVar1 = &this->SubdividedMesh;
    if (pTVar1 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_58) {
      pTVar1->Object = pFVar4;
      local_58 = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SubdividedMesh).SharedReferenceCount,&local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)puVar3[0x11];
    puVar3[0x11] = 0;
    local_48 = pTVar5;
    pFVar14 = ::operator_new(0x18);
    local_40.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
    if (pFVar14 !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      *(undefined4 *)&pFVar14->field_0x8 = 1;
      *(undefined ***)pFVar14 =
           &
           ___7__TReferenceControllerWithDeleter_V__TArray_HV__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray_HV__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&pFVar14->field_0xc = 1;
      *(TArray<int,TSizedDefaultAllocator<32>_> **)&pFVar14->field_0x10 = pTVar5;
      local_40.ReferenceController = (TReferenceControllerBase<1> *)pFVar14;
    }
    if (&this->VerticesToDisplace !=
        (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *)&local_48) {
      (this->VerticesToDisplace).Object = pTVar5;
      local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VerticesToDisplace).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    pUVar6 = (this->MeshStatistics).field0_0x0.DebugPtr;
    if ((pTVar1->Object == (FDynamicMesh3 *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    UMeshStatisticsProperties::Update(pUVar6,pTVar1->Object);
    if (this->SubdivideTask !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      (**(code **)(*(longlong *)this->SubdivideTask + 0x28))();
    }
    this->SubdivideTask =
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
    }
  }
  if (((this->SubdividedMesh).Object != (FDynamicMesh3 *)0x0) && (this->bNeedsDisplaced != false)) {
    pUVar7 = (this->TextureMapProperties).field0_0x0.DebugPtr;
    this_00 = (FDisplaceMeshOpFactory *)(this->Displacer).Ptr;
    if (pUVar7->bApplyAdjustmentCurve == false) {
      pUVar17 = (UCurveFloat *)0x0;
    }
    else {
      pUVar17 = (pUVar7->AdjustmentCurve).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
    }
    DisplaceMeshToolLocals::FDisplaceMeshOpFactory::SetAdjustmentCurve(this_00,pUVar17);
    pTVar8 = (this->VerticesToDisplace).SharedReferenceCount.ReferenceController;
    pTVar2 = &(this_00->Parameters).VerticesToDisplace;
    pTVar5 = (this->VerticesToDisplace).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = pTVar2->Object;
    pTStack_30 = (this_00->Parameters).VerticesToDisplace.SharedReferenceCount.ReferenceController;
    pTVar2->Object = pTVar5;
    (this_00->Parameters).VerticesToDisplace.SharedReferenceCount.ReferenceController = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar14 = ::operator_new(0x160);
    if (pFVar14 !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      pIVar9 = (this->Displacer).Ptr;
      pTVar15 = (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                 *)(**(code **)((longlong)*pIVar9 + 8))(pIVar9,&local_res10);
      FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
      FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_>
                ((FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)
                 pFVar14,pTVar15);
      *(undefined ***)pFVar14 =
           &
           ___7__FAsyncTaskExecuterWithAbort_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE__6B_
      ;
      (pFVar14->TaskCounter).Object = (atomic<int> *)0x0;
      (pFVar14->TaskCounter).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar14->bAbort = false;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar14);
      *(bool **)&pFVar14->field_0x70 = &pFVar14->bAbort;
      pFVar18 = pFVar14;
    }
    this->DisplaceTask = pFVar18;
    if ((pFVar14 !=
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0) && (local_res10 != (undefined8 *)0x0)) {
      (**(code **)*local_res10)();
    }
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->DisplaceTask,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0)
    ;
    this->bNeedsDisplaced = false;
  }
  pFVar18 = this->DisplaceTask;
  if ((pFVar18 !=
       (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
        *)0x0) && (((FThreadSafeCounter *)&pFVar18->field_0x38)->Counter == 0)) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar18,false);
    pFVar18 = this->DisplaceTask;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar18);
    puVar3 = *(undefined8 **)&pFVar18->field_0x130;
    *(undefined8 *)&pFVar18->field_0x130 = 0;
    pFVar4 = (FDynamicMesh3 *)puVar3[1];
    puVar3[1] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    pUVar6 = (this->MeshStatistics).field0_0x0.DebugPtr;
    if (((this->SubdividedMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    UMeshStatisticsProperties::Update(pUVar6,(this->SubdividedMesh).Object);
    pFVar18 = this->DisplaceTask;
    if (pFVar18 !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      (**(code **)(*(longlong *)pFVar18 + 0x28))(pFVar18,1);
    }
    pUVar10 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    this->DisplaceTask =
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0;
    (**(code **)(pUVar10->_padding_ + 0xbf8))();
    this_01 = (FDynamicMesh3 *)
              (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))()
    ;
    UE::Geometry::FDynamicMesh3::Copy(this_01,pFVar4,true,true,true,true);
    (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb50))();
    plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar16 + 0x368))(plVar16);
    if (pFVar4 != (FDynamicMesh3 *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  return;
}

// DisconnectActiveContrastCurveTarget @ 14cc533a0

void __thiscall UDisplaceMeshTool::DisconnectActiveContrastCurveTarget(UDisplaceMeshTool *this)

{
  return;
}

// GetPrivateStaticClass @ 14cc5c3b0

UClass * __cdecl UDisplaceMeshTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDisplaceMeshTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DisplaceMeshTool",
               &Z_Registration_Info_UClass_UDisplaceMeshTool.InnerSingleton,
               StaticRegisterNativesUDisplaceMeshTool,0x500,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDisplaceMeshTool>,
               InternalVTableHelperCtorCaller<UDisplaceMeshTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDisplaceMeshTool.InnerSingleton;
}

// HasAccept @ 14cc5ea40

bool __thiscall UDisplaceMeshTool::HasAccept(UDisplaceMeshTool *this)

{
  return true;
}

// HasCancel @ 14cc5eaa0

bool __thiscall UDisplaceMeshTool::HasCancel(UDisplaceMeshTool *this)

{
  return true;
}

// OnShutdown @ 14cc68e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDisplaceMeshTool::OnShutdown(UDisplaceMeshTool *this,EToolShutdownType param_1)

{
  int iVar1;
  UDisplaceMeshCommonProperties *pUVar2;
  code *pcVar3;
  UDisplaceMeshPerlinNoiseProperties *pUVar4;
  UDisplaceMeshDirectionalFilterProperties *pUVar5;
  UDisplaceMeshSineWaveProperties *pUVar6;
  UDisplaceMeshTextureMapProperties *pUVar7;
  USelectiveTessellationProperties *pUVar8;
  UStaticMesh *pUVar9;
  AInternalToolFrameworkActor *this_00;
  longlong lVar10;
  FText *pFVar11;
  UPrimitiveComponent *pUVar12;
  UClass *pUVar13;
  UDisplaceMeshTool *local_res8;
  undefined1 local_28 [16];
  
  pUVar2 = (this->CommonProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar3)(pUVar2,this,local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  pUVar4 = (this->NoiseProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar3)(pUVar4,this,local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  pUVar5 = (this->DirectionalFilterProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar3)(pUVar5,this,local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  pUVar6 = (this->SineWaveProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar6->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar3)(pUVar6,this,local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  pUVar7 = (this->TextureMapProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar7->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar3)(pUVar7,this,local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  pUVar8 = (this->SelectiveTessellationProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar8->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_28,L"");
  (*pcVar3)(pUVar8,this,local_28);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if ((this->DynamicMeshComponent).field0_0x0.DebugPtr != (UDynamicMeshComponent *)0x0) {
    UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
    if (param_1 == Accept) {
      lVar10 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar3 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x10);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)local_28,L"UDisplaceMeshTool",L"DisplaceMeshToolTransactionName"
                           ,L"Displace Mesh");
      (*pcVar3)(lVar10 + 0x28,pFVar11);
      if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
      }
      if ((((this->CommonProperties).field0_0x0.DebugPtr)->DisplacementType == DisplacementMap) &&
         (((this->TextureMapProperties).field0_0x0.DebugPtr)->bRecalcNormals == false)) {
        pUVar12 = UE::ToolTarget::GetTargetComponent((UToolTarget *)this->_padding_);
        if (pUVar12 != (UPrimitiveComponent *)0x0) {
          pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar1 = (int)pUVar13->_padding_;
          if (((iVar1 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar13->_padding_)) &&
             (pUVar9 = *(UStaticMesh **)&pUVar12[1].field_0x50, pUVar9 != (UStaticMesh *)0x0)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            local_28._0_8_ = &DAT_200000000;
            local_28._8_4_ = 2;
            UE::MeshDescription::ConfigureBuildSettings
                      (pUVar9,0,(FStaticMeshBuildSettingChange *)local_28);
          }
        }
      }
      local_28._8_8_ = &local_res8;
      local_28._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDisplaceMeshTool::OnShutdown'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_res8 = this;
      (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb40))();
      lVar10 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
    }
    UActorComponent::UnregisterComponent
              ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
    (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x4a0))();
    (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  }
  this_00 = (this->PreviewMeshActor).field0_0x0.DebugPtr;
  if (this_00 != (AInternalToolFrameworkActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  }
  return;
}

// OnTick @ 14cc699e0

void __thiscall UDisplaceMeshTool::OnTick(UDisplaceMeshTool *this,float param_1)

{
  UDisplaceMeshTextureMapProperties *pUVar1;
  UInteractiveToolManager *pUVar2;
  UCurveFloat *pUVar3;
  
  if ((((this->TextureMapProperties).field0_0x0.DebugPtr)->AdjustmentCurve).field0_0x0.DebugPtr ==
      (UCurveFloat *)0x0) {
    pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar3 = ToolSetupUtil::GetContrastAdjustmentCurve(pUVar2);
    pUVar1 = (this->TextureMapProperties).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (pUVar1->AdjustmentCurve).field0_0x0.DebugPtr = pUVar3;
    this->bNeedsDisplaced = true;
  }
  AdvanceComputation(this);
  return;
}

// Setup @ 14cc769d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cc77060) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDisplaceMeshTool::Setup(UDisplaceMeshTool *this)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  EDisplaceMeshToolSubdivisionType EVar5;
  int iVar6;
  code *pcVar7;
  UTexture2D *this_00;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TIndexedWeightMap<float> *pTVar10;
  IDynamicMeshOperatorFactory *pIVar11;
  double dVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  char cVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  UObject *pUVar21;
  UClass *pUVar22;
  UDisplaceMeshPerlinNoiseProperties *pUVar23;
  UDisplaceMeshCommonProperties *pUVar24;
  UDisplaceMeshDirectionalFilterProperties *pUVar25;
  UDisplaceMeshTextureMapProperties *pUVar26;
  UDisplaceMeshSineWaveProperties *pUVar27;
  USelectiveTessellationProperties *pUVar28;
  UInteractiveToolManager *pUVar29;
  UCurveFloat *pUVar30;
  FMeshDescription *pFVar31;
  FScriptContainerElement *pFVar32;
  FName *pFVar33;
  UWorld *this_01;
  AInternalToolFrameworkActor *pAVar34;
  UDynamicMeshComponent *pUVar35;
  TTransform<double> *pTVar36;
  FDynamicMesh3 *pFVar37;
  FGeometrySelection *pFVar38;
  ulong64 uVar39;
  TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *pTVar40;
  FDisplaceMeshOpFactory *pFVar41;
  FDisplaceMeshOpFactory *pFVar42;
  void *pvVar43;
  TPropertyWatcher<EDisplaceMeshToolSubdivisionType> *pTVar44;
  TPropertyWatcher<EDisplaceMeshToolSubdivisionType> *pTVar45;
  FString *pFVar46;
  IDynamicMeshOperatorFactory *pIVar47;
  UMeshStatisticsProperties *this_02;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *this_03;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  *pTVar48;
  FText *pFVar49;
  longlong *plVar50;
  ForAnyElementType FVar51;
  undefined ***pppuVar52;
  longlong lVar53;
  ulonglong uVar54;
  uint uVar55;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar56;
  FScriptContainerElement *pFVar57;
  uint uVar58;
  FDisplaceMeshOpFactory *pFVar59;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar60;
  FSharedReferencer<1> FVar61;
  FName FVar62;
  undefined1 auStackY_b88 [32];
  undefined1 local_b38 [8];
  FName local_b30;
  undefined8 local_b28;
  int local_b20 [2];
  UDisplaceMeshTool *local_b18;
  FString local_b10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_b00;
  ulonglong local_af0;
  FName local_ae8;
  FComponentMaterialSet local_ae0;
  FString local_ad0;
  FGetMeshParameters local_ac0;
  FGetMeshParameters local_ab4;
  longlong local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  FSubdivideParameters local_a90;
  FName local_a58;
  FName *local_a50;
  undefined8 *local_a48;
  LARGE_INTEGER local_a40;
  undefined8 local_a38;
  FSharedReferencer<1> FStack_a30;
  code *local_a28;
  undefined **local_a18;
  UDisplaceMeshTool *local_a10;
  undefined ***local_a00;
  code *local_9f8;
  undefined **local_9e8;
  UDisplaceMeshTool *local_9e0;
  undefined ***local_9d0;
  TIndexedWeightMap<float> *local_9c8;
  TReferenceControllerBase<1> *pTStack_9c0;
  double local_9b8;
  FString local_9b0;
  FString local_9a0;
  FString local_990;
  FString local_980;
  FString local_970;
  code *local_960;
  FName **local_958;
  FString local_950;
  FString local_940;
  FString local_930;
  FString local_920;
  FString local_910;
  FText local_900;
  FText local_8f0;
  double local_8e0;
  double local_8d8;
  FName local_8d0;
  FString local_8c8;
  code *local_8b8 [2];
  code *local_8a8 [3];
  undefined8 local_890;
  code *local_888 [2];
  code *local_878 [3];
  undefined8 local_860;
  FDynamicMesh3 local_858;
  undefined1 local_628 [240];
  undefined4 local_538;
  undefined4 uStack_534;
  UDisplaceMeshTool *pUStack_530;
  undefined8 local_528;
  longlong *plStack_520;
  FSharedReferencer<1> local_510;
  undefined1 local_508 [128];
  undefined1 local_488 [128];
  undefined1 local_408 [128];
  undefined1 local_388 [128];
  undefined1 local_308 [128];
  undefined1 local_288 [128];
  undefined1 local_208 [128];
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178 [3];
  longlong *plStack_160;
  undefined1 local_158 [112];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_b88;
  bVar13 = false;
  bVar18 = false;
  local_af0 = local_af0 & 0xffffffff00000000;
  UInteractiveTool::Setup((UInteractiveTool *)this);
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = UDisplaceMeshPerlinNoiseProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_508,pUVar22);
  local_508._8_8_ = pUVar21;
  pUVar23 = (UDisplaceMeshPerlinNoiseProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_508);
  if (local_508._64_8_ != 0) {
    plVar50 = (longlong *)(local_508 + 0x50);
    if ((longlong *)local_508._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_508._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar23 != (UDisplaceMeshPerlinNoiseProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar23);
  }
  (this->NoiseProperties).field0_0x0.DebugPtr = pUVar23;
  pcVar7 = *(code **)(pUVar23->_padding_ + 0x2b8);
  ::FString::FString(&local_940,L"");
  (*pcVar7)(pUVar23,this,&local_940);
  if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.Data.AllocatorInstance.Data);
  }
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = UDisplaceMeshCommonProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_488,pUVar22);
  local_488._8_8_ = pUVar21;
  pUVar24 = (UDisplaceMeshCommonProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_488);
  if (local_488._64_8_ != 0) {
    plVar50 = (longlong *)(local_488 + 0x50);
    if ((longlong *)local_488._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_488._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar24 != (UDisplaceMeshCommonProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (this->CommonProperties).field0_0x0.DebugPtr = pUVar24;
  pcVar7 = *(code **)(pUVar24->_padding_ + 0x2b8);
  ::FString::FString(&local_9b0,L"");
  (*pcVar7)(pUVar24,this,&local_9b0);
  if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
  }
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = UDisplaceMeshDirectionalFilterProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_208,pUVar22);
  local_208._8_8_ = pUVar21;
  pUVar25 = (UDisplaceMeshDirectionalFilterProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_208);
  if (local_208._64_8_ != 0) {
    plVar50 = (longlong *)(local_208 + 0x50);
    if ((longlong *)local_208._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_208._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar25 != (UDisplaceMeshDirectionalFilterProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar25);
  }
  (this->DirectionalFilterProperties).field0_0x0.DebugPtr = pUVar25;
  pcVar7 = *(code **)(pUVar25->_padding_ + 0x2b8);
  ::FString::FString(&local_9a0,L"");
  (*pcVar7)(pUVar25,this,&local_9a0);
  if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
  }
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = UDisplaceMeshTextureMapProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_408,pUVar22);
  local_408._8_8_ = pUVar21;
  pUVar26 = (UDisplaceMeshTextureMapProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_408);
  if (local_408._64_8_ != 0) {
    plVar50 = (longlong *)(local_408 + 0x50);
    if ((longlong *)local_408._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_408._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar26 != (UDisplaceMeshTextureMapProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar26);
  }
  (this->TextureMapProperties).field0_0x0.DebugPtr = pUVar26;
  pcVar7 = *(code **)(pUVar26->_padding_ + 0x2b8);
  ::FString::FString(&local_990,L"");
  (*pcVar7)(pUVar26,this,&local_990);
  if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_990.Data.AllocatorInstance.Data);
  }
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = UDisplaceMeshSineWaveProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_388,pUVar22);
  local_388._8_8_ = pUVar21;
  pUVar27 = (UDisplaceMeshSineWaveProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_388);
  if (local_388._64_8_ != 0) {
    plVar50 = (longlong *)(local_388 + 0x50);
    if ((longlong *)local_388._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_388._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar27 != (UDisplaceMeshSineWaveProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar27);
  }
  (this->SineWaveProperties).field0_0x0.DebugPtr = pUVar27;
  pcVar7 = *(code **)(pUVar27->_padding_ + 0x2b8);
  ::FString::FString(&local_980,L"");
  (*pcVar7)(pUVar27,this,&local_980);
  if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data.AllocatorInstance.Data);
  }
  pUVar21 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar21,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = USelectiveTessellationProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_308,pUVar22);
  local_308._8_8_ = pUVar21;
  pUVar28 = (USelectiveTessellationProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_308);
  if (local_308._64_8_ != 0) {
    plVar50 = (longlong *)(local_308 + 0x50);
    if ((longlong *)local_308._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_308._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar28 != (USelectiveTessellationProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar28);
  }
  (this->SelectiveTessellationProperties).field0_0x0.DebugPtr = pUVar28;
  pcVar7 = *(code **)(pUVar28->_padding_ + 0x2b8);
  ::FString::FString(&local_970,L"");
  (*pcVar7)(pUVar28,this,&local_970);
  if (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_970.Data.AllocatorInstance.Data);
  }
  this_00 = (((this->TextureMapProperties).field0_0x0.DebugPtr)->DisplacementMap).field0_0x0.
            DebugPtr;
  if ((this_00 != (UTexture2D *)0x0) &&
     (bVar16 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00), !bVar16)) {
    (((this->TextureMapProperties).field0_0x0.DebugPtr)->DisplacementMap).field0_0x0.DebugPtr =
         (UTexture2D *)0x0;
  }
  if ((((this->TextureMapProperties).field0_0x0.DebugPtr)->AdjustmentCurve).field0_0x0.DebugPtr ==
      (UCurveFloat *)0x0) {
    pUVar29 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pUVar30 = ToolSetupUtil::GetContrastAdjustmentCurve(pUVar29);
    pUVar26 = (this->TextureMapProperties).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar30);
    }
    (pUVar26->AdjustmentCurve).field0_0x0.DebugPtr = pUVar30;
  }
  local_ac0.bHaveRequestLOD = false;
  local_ac0._1_3_ = 0;
  local_ac0.RequestLOD = Default;
  local_ac0.bWantMeshTangents = false;
  local_ac0._9_3_ = 0;
  pFVar31 = UE::ToolTarget::GetMeshDescription((UToolTarget *)this->_padding_,&local_ac0);
  local_b00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b00.ArrayNum = 0;
  local_b00.ArrayMax = 0;
  UE::WeightMaps::FindVertexWeightMaps(pFVar31,&local_b00);
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  pTVar56 = &pUVar24->WeightMapsList;
  ::FString::FString(&local_b10,L"None");
  pFVar57 = (pTVar56->AllocatorInstance).Data;
  if (((pFVar57 <= (FScriptContainerElement *)&local_b10) &&
      ((FScriptContainerElement *)&local_b10 <
       pFVar57 + (longlong)(pUVar24->WeightMapsList).ArrayMax * 0x10)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar19 = (pUVar24->WeightMapsList).ArrayNum;
  piVar1 = &(pUVar24->WeightMapsList).ArrayMax;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar56->AllocatorInstance,piVar1);
  }
  lVar53 = (longlong)iVar19;
  (pUVar24->WeightMapsList).ArrayNum = iVar19 + 1;
  pFVar57 = (pTVar56->AllocatorInstance).Data;
  *(undefined8 *)(pFVar57 + lVar53 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar57 + lVar53 * 0x10) = local_b10.Data.AllocatorInstance.Data;
  *(int *)(pFVar57 + lVar53 * 0x10 + 8) = local_b10.Data.ArrayNum;
  *(int *)(pFVar57 + lVar53 * 0x10 + 0xc) = local_b10.Data.ArrayMax;
  local_b10.Data.ArrayNum = 0;
  local_b10.Data.ArrayMax = 0;
  local_b10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar19 = local_b00.ArrayNum;
  pFVar33 = (FName *)(local_b00.AllocatorInstance.Data + (longlong)local_b00.ArrayNum * 8);
  FVar51.Data = local_b00.AllocatorInstance.Data;
  while( true ) {
    if (local_b00.ArrayNum != iVar19) {
      local_b38[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b38);
    }
    if ((FName *)FVar51.Data == pFVar33) break;
    local_a58 = *(FName *)FVar51.Data;
    pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
    pTVar56 = &pUVar24->WeightMapsList;
    pFVar32 = (FScriptContainerElement *)::FName::ToString(&local_a58,&local_8c8);
    pFVar57 = (pTVar56->AllocatorInstance).Data;
    if (((pFVar57 <= pFVar32) &&
        (pFVar32 < pFVar57 + (longlong)(pUVar24->WeightMapsList).ArrayMax * 0x10)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar20 = (pUVar24->WeightMapsList).ArrayNum;
    piVar1 = &(pUVar24->WeightMapsList).ArrayMax;
    if (iVar20 == *piVar1) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar56->AllocatorInstance,piVar1);
    }
    lVar53 = (longlong)iVar20;
    (pUVar24->WeightMapsList).ArrayNum = iVar20 + 1;
    pFVar57 = (pTVar56->AllocatorInstance).Data;
    *(undefined8 *)(pFVar57 + lVar53 * 0x10) = 0;
    *(undefined8 *)(pFVar57 + lVar53 * 0x10) = *(undefined8 *)pFVar32;
    *(undefined8 *)pFVar32 = 0;
    *(int *)(pFVar57 + lVar53 * 0x10 + 8) = *(int *)(pFVar32 + 8);
    *(int *)(pFVar57 + lVar53 * 0x10 + 0xc) = *(int *)(pFVar32 + 0xc);
    *(undefined8 *)(pFVar32 + 8) = 0;
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    FVar51.Data = FVar51.Data + 8;
  }
  if ((FName *)local_b00.AllocatorInstance.Data !=
      (FName *)(local_b00.AllocatorInstance.Data + (longlong)local_b00.ArrayNum * 8)) {
    FVar51.Data = local_b00.AllocatorInstance.Data;
    do {
      if (*(FName *)FVar51.Data == ((this->CommonProperties).field0_0x0.DebugPtr)->WeightMap)
      goto LAB_14cc77235;
      FVar51.Data = FVar51.Data + 8;
    } while ((FName *)FVar51.Data !=
             (FName *)(local_b00.AllocatorInstance.Data + (longlong)local_b00.ArrayNum * 8));
  }
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  if (((pUVar24->WeightMapsList).ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar57 = (pUVar24->WeightMapsList).AllocatorInstance.Data;
  iVar20 = *(int *)(pFVar57 + 8);
  iVar19 = iVar20 + -1;
  if (iVar20 == 0) {
    iVar19 = 0;
  }
  pFVar33 = ::FName::FName(&local_8d0,iVar19,*(wchar_t **)pFVar57,FNAME_Add);
  ((this->CommonProperties).field0_0x0.DebugPtr)->WeightMap = *pFVar33;
LAB_14cc77235:
  pFVar59 = (FDisplaceMeshOpFactory *)0x0;
  UpdateActiveWeightMap(this);
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_158);
  this_01 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pAVar34 = UWorld::SpawnActor<AInternalToolFrameworkActor>
                      (this_01,&UE::Math::TVector<double>::ZeroVector,
                       &UE::Math::TRotator<double>::ZeroRotator,(FActorSpawnParameters *)local_158);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar34 != (AInternalToolFrameworkActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar34);
  }
  (this->PreviewMeshActor).field0_0x0.DebugPtr = pAVar34;
  pUVar35 = NewObject<UDynamicMeshComponent>((UObject *)pAVar34);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar35 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar35);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar35;
  local_af0 = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar35,
             (USceneComponent *)((this->PreviewMeshActor).field0_0x0.DebugPtr)->_padding_,(FName)0x0
            );
  UActorComponent::RegisterComponent
            ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
  pUVar35 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pTVar36 = UE::ToolTarget::GetLocalToWorldTransform(&local_e8,(UToolTarget *)this->_padding_);
  USceneComponent::SetWorldTransform
            ((USceneComponent *)pUVar35,pTVar36,false,(FHitResult *)0x0,None);
  *(bool *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ =
       ((this->CommonProperties).field0_0x0.DebugPtr)->bShowWireframe;
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((UBaseDynamicMeshComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  UE::ToolTarget::GetMaterialSet(&local_ae0,(UToolTarget *)this->_padding_,false);
  pFVar42 = pFVar59;
  pFVar41 = pFVar59;
  if (0 < local_ae0.Materials.ArrayNum) {
    do {
      pUVar35 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      uVar55 = (uint)pFVar42;
      pcVar7 = *(code **)(pUVar35->_padding_ + 0x6b8);
      uVar58 = 0;
      if ((int)uVar55 < local_ae0.Materials.ArrayNum) {
        uVar58 = ~uVar55 >> 0x1f;
      }
      if ((uVar58 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (*pcVar7)(pUVar35,pFVar42,
                *(undefined8 *)
                 (local_ae0.Materials.AllocatorInstance.Data + (longlong)&pFVar41->_padding_));
      pFVar42 = (FDisplaceMeshOpFactory *)(ulonglong)(uVar55 + 1);
      pFVar41 = (FDisplaceMeshOpFactory *)&pFVar41->_padding_;
    } while ((int)(uVar55 + 1) < local_ae0.Materials.ArrayNum);
  }
  UDynamicMeshComponent::SetTangentsType
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,AutoCalculated);
  pUVar35 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pcVar7 = *(code **)(pUVar35->_padding_ + 0xb28);
  local_ab4.bHaveRequestLOD = false;
  local_ab4._1_3_ = 0;
  local_ab4.RequestLOD = Default;
  local_ab4.bWantMeshTangents = false;
  local_ab4._9_3_ = 0;
  pFVar37 = UE::ToolTarget::GetDynamicMeshCopy(&local_858,(UToolTarget *)this->_padding_,&local_ab4)
  ;
  (*pcVar7)(pUVar35,pFVar37);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_858);
  local_b30.ComparisonIndex.Value = 0;
  local_b30.Number = 0;
  local_b28._0_4_ = 0;
  local_b28._4_4_ = 0;
  cVar17 = (**(code **)(this->_padding_ + 0x3d8))(this);
  if (cVar17 != '\0') {
    pFVar38 = (FGeometrySelection *)(**(code **)(this->_padding_ + 0x3e0))(this);
    pUVar35 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    local_a50 = &local_b30;
    local_958 = &local_a50;
    local_960 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDisplaceMeshTool::Setup'::__l20::<lambda_1>,void,int>::Call;
    pFVar37 = (FDynamicMesh3 *)(**(code **)(pUVar35->_padding_ + 0xb38))(pUVar35);
    UE::Geometry::EnumerateSelectionTriangles
              (pFVar38,pFVar37,(TFunctionRef<void___cdecl(int)> *)&local_960,(FPolygroupSet *)0x0);
    goto LAB_14cc77630;
  }
  lVar53 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  uVar58 = *(int *)(lVar53 + 0x144) + *(int *)(lVar53 + 0x140) * 0x200;
  pFVar42 = pFVar59;
  if ((uVar58 == 0) ||
     (pFVar42 = (FDisplaceMeshOpFactory *)0x0,
     (ushort)(*(short *)**(undefined8 **)(lVar53 + 0x148) - 1U) < 0xfffe)) {
LAB_14cc77536:
    uVar55 = (uint)pFVar42;
  }
  else {
    pFVar42 = (FDisplaceMeshOpFactory *)&DAT_00000001;
    uVar55 = 1;
    if (1 < (int)uVar58) {
      do {
        uVar54 = (ulonglong)((uint)pFVar42 & 0x1ff);
        lVar8 = (*(undefined8 **)(lVar53 + 0x148))[(ulonglong)pFVar42 >> 9];
        if ((*(short *)(lVar8 + uVar54 * 2) != 0) && (*(short *)(lVar8 + uVar54 * 2) != -1)) break;
        uVar55 = (uint)pFVar42 + 1;
        pFVar42 = (FDisplaceMeshOpFactory *)(ulonglong)uVar55;
      } while ((int)uVar55 < (int)uVar58);
      goto LAB_14cc77536;
    }
  }
joined_r0x00014cc77538:
  if (uVar55 != uVar58) {
    while( true ) {
      iVar19 = (int)pFVar42;
      local_b20[0] = iVar19;
      if ((((ulonglong)local_b30 <= local_b20) &&
          (local_b20 < (int *)((longlong)local_b30 + (longlong)local_b28._4_4_ * 4))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((int)local_b28 == local_b28._4_4_) {
        local_b28._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)&local_b30,(int *)((longlong)&local_b28 + 4));
      }
      iVar20 = (int)local_b28 + 1;
      uVar55 = iVar19 + 1;
      pFVar42 = (FDisplaceMeshOpFactory *)(ulonglong)uVar55;
      *(int *)((longlong)local_b30 + (longlong)(int)local_b28 * 4) = local_b20[0];
      local_b28._0_4_ = iVar20;
      if ((int)uVar58 <= (int)uVar55) break;
      while( true ) {
        uVar54 = (ulonglong)((uint)pFVar42 & 0x1ff);
        lVar8 = *(longlong *)(*(longlong *)(lVar53 + 0x148) + ((ulonglong)pFVar42 >> 9) * 8);
        if ((*(short *)(lVar8 + uVar54 * 2) != 0) && (*(short *)(lVar8 + uVar54 * 2) != -1)) break;
        uVar55 = (uint)pFVar42 + 1;
        pFVar42 = (FDisplaceMeshOpFactory *)(ulonglong)uVar55;
        if ((int)uVar58 <= (int)uVar55) goto joined_r0x00014cc77538;
      }
    }
    goto joined_r0x00014cc77538;
  }
LAB_14cc77630:
  pUVar35 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  this->NumTrianglesInSelection = (int)local_b28;
  pFVar37 = (FDynamicMesh3 *)(**(code **)(pUVar35->_padding_ + 0xb38))();
  UE::Geometry::FDynamicMesh3::Copy(&this->OriginalMesh,pFVar37,true,true,true,true);
  (this->OriginalMeshSpatial).Mesh = &this->OriginalMesh;
  (this->OriginalMeshSpatial).MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            (&this->OriginalMeshSpatial,false);
  uVar39 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->OriginalMeshSpatial).Mesh);
  (this->OriginalMeshSpatial).MeshChangeStamp = uVar39;
  DisplaceMeshToolLocals::DisplaceMeshParameters::DisplaceMeshParameters
            ((DisplaceMeshParameters *)local_628);
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  pUVar26 = (this->TextureMapProperties).field0_0x0.DebugPtr;
  local_628._0_4_ = pUVar24->DisplaceIntensity;
  local_628._4_4_ = pUVar24->RandomSeed;
  local_628._8_8_ = (pUVar26->DisplacementMap).field0_0x0;
  local_628[0xa0] = pUVar26->bRecalcNormals;
  pUVar27 = (this->SineWaveProperties).field0_0x0.DebugPtr;
  local_628._16_4_ = pUVar27->SineWaveFrequency;
  local_628._20_4_ = pUVar27->SineWavePhaseShift;
  dVar2 = (pUVar27->SineWaveDirection).field0_0x0._s_0.X;
  dVar3 = (pUVar27->SineWaveDirection).field0_0x0._s_0.Y;
  dVar4 = (pUVar27->SineWaveDirection).field0_0x0._s_0.Z;
  dVar12 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
  if (dVar12 == __real_3ff0000000000000) {
    local_9b8 = (pUVar27->SineWaveDirection).field0_0x0._s_0.Z;
    local_628._40_8_ = local_9b8;
    local_628._32_8_ = (pUVar27->SineWaveDirection).field0_0x0._s_0.Y;
    local_628._24_8_ = (pUVar27->SineWaveDirection).field0_0x0._s_0.X;
  }
  else if (__real_3e45798ee0000000 <= dVar12) {
    local_8d8 = __real_3ff0000000000000 / SQRT(dVar12);
    local_628._40_8_ = local_8d8 * dVar4;
    local_628._24_8_ = local_8d8 * dVar2;
    local_628._32_8_ = local_8d8 * dVar3;
  }
  else {
    local_9b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_628._40_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_628._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_628._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  pUVar25 = (this->DirectionalFilterProperties).field0_0x0.DebugPtr;
  local_628[0x30] = pUVar25->bEnableFilter;
  dVar2 = (pUVar25->FilterDirection).field0_0x0._s_0.X;
  dVar3 = (pUVar25->FilterDirection).field0_0x0._s_0.Y;
  dVar4 = (pUVar25->FilterDirection).field0_0x0._s_0.Z;
  dVar12 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
  if (dVar12 == __real_3ff0000000000000) {
    local_9b8 = (pUVar25->FilterDirection).field0_0x0._s_0.Z;
    local_628._72_8_ = local_9b8;
    local_628._64_8_ = (pUVar25->FilterDirection).field0_0x0._s_0.Y;
    local_628._56_8_ = (pUVar25->FilterDirection).field0_0x0._s_0.X;
  }
  else if (__real_3e45798ee0000000 <= dVar12) {
    local_8e0 = __real_3ff0000000000000 / SQRT(dVar12);
    local_628._72_8_ = local_8e0 * dVar4;
    local_628._56_8_ = local_8e0 * dVar2;
    local_628._64_8_ = local_8e0 * dVar3;
  }
  else {
    local_9b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_628._72_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_628._64_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_628._56_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  pUVar23 = (this->NoiseProperties).field0_0x0.DebugPtr;
  pTVar40 = &pUVar23->PerlinLayerProperties;
  local_628._80_4_ = pUVar25->FilterWidth;
  if ((TArray<FPerlinLayerProperties,TSizedDefaultAllocator<32>_> *)(local_628 + 0x90) != pTVar40) {
    iVar19 = (pUVar23->PerlinLayerProperties).ArrayNum;
    pFVar57 = (pTVar40->AllocatorInstance).Data;
    local_628._152_4_ = iVar19;
    if ((iVar19 == 0) && (local_628._156_4_ == 0)) {
      local_628._156_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar19,local_628._156_4_,(ForAnyElementType *)(local_628 + 0x90),iVar19,
                 (int *)(local_628 + 0x9c));
      if (iVar19 != 0) {
        memcpy((void *)local_628._144_8_,pFVar57,(longlong)iVar19 << 3);
      }
    }
  }
  uVar14 = local_628._216_8_;
  pTVar9 = (this->ActiveWeightMap).SharedReferenceCount.ReferenceController;
  pTVar10 = (this->ActiveWeightMap).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9c8 = (TIndexedWeightMap<float> *)local_628._208_8_;
  pTStack_9c0 = (TReferenceControllerBase<1> *)local_628._216_8_;
  local_628._208_8_ = pTVar10;
  local_628._216_8_ = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar14);
  plStack_160 = plStack_520;
  uVar15 = local_528;
  uVar14 = local_628._232_8_;
  local_188 = local_628._224_8_;
  local_628._224_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDisplaceMeshTool::Setup'::__l2::<lambda_2>,float,UE::Math::TVector<double>_const_&,UE::Geometry::TIndexedWeightMap<float>_>
       ::Call;
  local_628._232_8_ = uStack_180;
  local_528 = local_178[2];
  plStack_520 = (longlong *)0x0;
  local_538 = 0x52952640;
  uStack_534 = 1;
  pUStack_530 = this;
  uStack_180 = uVar14;
  local_178[2] = uVar15;
  if (local_188 != 0) {
    plVar50 = local_178;
    if (plStack_160 != (longlong *)0x0) {
      plVar50 = plStack_160;
    }
    (**(code **)(*plVar50 + 0x10))();
  }
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  pFVar41 = ::operator_new(0x140);
  pFVar42 = pFVar59;
  if (pFVar41 != (FDisplaceMeshOpFactory *)0x0) {
    pFVar42 = DisplaceMeshToolLocals::FDisplaceMeshOpFactory::FDisplaceMeshOpFactory
                        (pFVar41,&this->SubdividedMesh,(DisplaceMeshParameters *)local_628,
                         pUVar24->DisplacementType);
  }
  pIVar47 = (this->Displacer).Ptr;
  (this->Displacer).Ptr = (IDynamicMeshOperatorFactory *)pFVar42;
  if (pIVar47 != (IDynamicMeshOperatorFactory *)0x0) {
    (**(code **)*pIVar47)(pIVar47,1);
  }
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  pUVar28 = (this->SelectiveTessellationProperties).field0_0x0.DebugPtr;
  piVar1 = &(pUVar28->MaterialIDList).ArrayMax;
  pFVar57 = (pUVar28->MaterialIDList).AllocatorInstance.Data;
  iVar19 = (pUVar28->MaterialIDList).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FString,int>((FString *)pFVar57,iVar19);
    (pUVar28->MaterialIDList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pUVar28->MaterialIDList).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar57,iVar19);
    (pUVar28->MaterialIDList).ArrayNum = 0;
  }
  if (0 < local_ae0.Materials.ArrayNum) {
    local_aa8 = 0;
    do {
      lVar53 = local_aa8;
      uVar55 = (uint)pFVar59;
      uVar58 = 0;
      if ((int)uVar55 < local_ae0.Materials.ArrayNum) {
        uVar58 = ~uVar55 >> 0x1f;
      }
      if (uVar58 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(longlong *)(local_ae0.Materials.AllocatorInstance.Data + lVar53) == 0) {
        bVar18 = true;
        pFVar46 = ::FString::FString(&local_930,"(none)");
      }
      else {
        local_ae8 = *(FName *)(*(longlong *)(local_ae0.Materials.AllocatorInstance.Data + lVar53) +
                              0x18);
        bVar13 = true;
        ::FName::ToString(&local_ae8,&local_950);
        pFVar46 = &local_950;
      }
      pFVar57 = (pFVar46->Data).AllocatorInstance.Data;
      (pFVar46->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar46->Data).ArrayNum = 0;
      (pFVar46->Data).ArrayMax = 0;
      if ((bVar18) &&
         (bVar18 = false, local_930.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_930.Data.AllocatorInstance.Data);
      }
      if ((bVar13) &&
         (bVar13 = false, local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_950.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_ad0,L"[%d] %s");
      pUVar28 = (this->SelectiveTessellationProperties).field0_0x0.DebugPtr;
      pTVar56 = &pUVar28->MaterialIDList;
      pFVar32 = (pTVar56->AllocatorInstance).Data;
      if ((pFVar32 <= (FScriptContainerElement *)&local_ad0) &&
         ((FScriptContainerElement *)&local_ad0 <
          pFVar32 + (longlong)(pUVar28->MaterialIDList).ArrayMax * 0x10)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar19 = (pUVar28->MaterialIDList).ArrayNum;
      piVar1 = &(pUVar28->MaterialIDList).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar56->AllocatorInstance,piVar1);
      }
      FVar51.Data = local_ad0.Data.AllocatorInstance.Data;
      (pUVar28->MaterialIDList).ArrayNum = iVar19 + 1;
      pFVar32 = (pTVar56->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
      *(undefined8 *)pFVar32 = 0;
      iVar19 = local_ad0.Data.ArrayNum;
      *(int *)(pFVar32 + 8) = iVar19;
      if (iVar19 == 0) {
        *(int *)(pFVar32 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar19,0,(ForAnyElementType *)pFVar32,iVar19,(int *)(pFVar32 + 0xc));
        memcpy(*(void **)pFVar32,FVar51.Data,(longlong)iVar19 * 2);
      }
      if (local_ad0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ad0.Data.AllocatorInstance.Data);
      }
      if (pFVar57 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar57);
      }
      pFVar59 = (FDisplaceMeshOpFactory *)(ulonglong)(uVar55 + 1);
      local_aa8 = local_aa8 + 8;
    } while ((int)(uVar55 + 1) < local_ae0.Materials.ArrayNum);
  }
  pTVar45 = (TPropertyWatcher<EDisplaceMeshToolSubdivisionType> *)0x0;
  pUVar28 = (this->SelectiveTessellationProperties).field0_0x0.DebugPtr;
  pFVar33 = &pUVar28->ActiveMaterial;
  if ((pUVar28->MaterialIDList).ArrayNum == 0) {
    local_aa0 = 0;
    pFVar33->ComparisonIndex = 0;
    pFVar33->Number = 0;
  }
  else {
    pFVar46 = ::FName::ToString(pFVar33,&local_920);
    pFVar57 = (pUVar28->MaterialIDList).AllocatorInstance.Data;
    pFVar32 = pFVar57 + (longlong)(pUVar28->MaterialIDList).ArrayNum * 0x10;
    for (; pFVar57 != pFVar32; pFVar57 = pFVar57 + 0x10) {
      iVar19 = *(int *)(pFVar57 + 8);
      iVar20 = (pFVar46->Data).ArrayNum;
      if (iVar19 == iVar20) {
        if (1 < iVar19) {
          iVar19 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)pFVar57,(wchar_t *)(pFVar46->Data).AllocatorInstance.Data
                             );
          bVar18 = iVar19 == 0;
          goto LAB_14cc77dc8;
        }
LAB_14cc780b8:
        bVar18 = false;
        goto LAB_14cc77dde;
      }
      bVar18 = iVar20 + iVar19 == 1;
LAB_14cc77dc8:
      if (bVar18) goto LAB_14cc780b8;
    }
    bVar18 = true;
LAB_14cc77dde:
    if (local_920.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_920.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pUVar28 = (this->SelectiveTessellationProperties).field0_0x0.DebugPtr;
      local_a98 = 0;
      (pUVar28->ActiveMaterial).ComparisonIndex = 0;
      (pUVar28->ActiveMaterial).Number = 0;
    }
  }
  local_b18 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  if (((UDisplaceMeshTool **)this->_padding_ <= &local_b18) &&
     (&local_b18 < (UDisplaceMeshTool **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))
     ) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar19 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar19 + 1;
  *(UDisplaceMeshTool **)(this->_padding_ + (longlong)iVar19 * 8) = local_b18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b18 != (UDisplaceMeshTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b18);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->CommonProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))(this,(this->CommonProperties).field0_0x0.DebugPtr,1);
  (**(code **)(this->_padding_ + 0x318))
            (this,(this->DirectionalFilterProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->DirectionalFilterProperties).field0_0x0.DebugPtr,1);
  (**(code **)(this->_padding_ + 0x318))(this,(this->TextureMapProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->TextureMapProperties).field0_0x0.DebugPtr,
             ((this->CommonProperties).field0_0x0.DebugPtr)->DisplacementType == DisplacementMap);
  (**(code **)(this->_padding_ + 0x318))(this,(this->SineWaveProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->SineWaveProperties).field0_0x0.DebugPtr,
             ((this->CommonProperties).field0_0x0.DebugPtr)->DisplacementType == SineWave);
  (**(code **)(this->_padding_ + 0x318))
            (this,(this->SelectiveTessellationProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->SelectiveTessellationProperties).field0_0x0.DebugPtr,
             ((this->CommonProperties).field0_0x0.DebugPtr)->SubdivisionType == Flat);
  (**(code **)(this->_padding_ + 0x318))(this,(this->NoiseProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->NoiseProperties).field0_0x0.DebugPtr,
             ((this->CommonProperties).field0_0x0.DebugPtr)->DisplacementType == PerlinNoise);
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  local_9e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDisplaceMeshTool::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  local_9d0 = (undefined ***)0x0;
  local_9f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDisplaceMeshTool::Setup'::__l2::<lambda_3>,void,enum_EDisplaceMeshToolDisplaceType_const_&>
              ::Call;
  local_9e0 = this;
  pvVar43 = ::operator_new(0xa0);
  pTVar44 = pTVar45;
  if (pvVar43 != (void *)0x0) {
    local_8b8[0] = local_9f8;
    local_890 = 0;
    if (local_9f8 != (code *)0x0) {
      pppuVar52 = &local_9e8;
      if (local_9d0 != (undefined ***)0x0) {
        pppuVar52 = local_9d0;
      }
      (*(code *)**pppuVar52)(pppuVar52,local_8b8 + 2);
    }
    pTVar44 = (TPropertyWatcher<EDisplaceMeshToolSubdivisionType> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType>::
              TPropertyWatcher<enum_EDisplaceMeshToolDisplaceType><enum_EDisplaceMeshToolDisplaceType,void>
                        (pvVar43,&pUVar24->DisplacementType,
                         (TFunction<void___cdecl(EDisplaceMeshToolDisplaceType_const_&)> *)local_8b8
                        );
  }
  iVar19 = (int)pUVar24->_padding_;
  piVar1 = (int *)((longlong)&pUVar24->_padding_ + 4);
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar24->_padding_,piVar1);
  }
  *(int *)&pUVar24->_padding_ = iVar19 + 1;
  *(TPropertyWatcher<EDisplaceMeshToolSubdivisionType> **)
   (pUVar24->_padding_ + (longlong)iVar19 * 8) = pTVar44;
  if (local_9f8 != (code *)0x0) {
    pppuVar52 = &local_9e8;
    if (local_9d0 != (undefined ***)0x0) {
      pppuVar52 = local_9d0;
    }
    (*(code *)(*pppuVar52)[2])();
  }
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  local_a18 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDisplaceMeshTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  local_a00 = (undefined ***)0x0;
  local_a28 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDisplaceMeshTool::Setup'::__l2::<lambda_4>,void,enum_EDisplaceMeshToolSubdivisionType_const_&>
              ::Call;
  local_a10 = this;
  pvVar43 = ::operator_new(0xa0);
  if (pvVar43 != (void *)0x0) {
    local_888[0] = local_a28;
    local_860 = 0;
    if (local_a28 != (code *)0x0) {
      pppuVar52 = &local_a18;
      if (local_a00 != (undefined ***)0x0) {
        pppuVar52 = local_a00;
      }
      (*(code *)**pppuVar52)(pppuVar52,local_888 + 2);
    }
    pTVar45 = FWatchablePropertySet::TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType>::
              TPropertyWatcher<enum_EDisplaceMeshToolSubdivisionType><enum_EDisplaceMeshToolSubdivisionType,void>
                        (pvVar43,&pUVar24->SubdivisionType,
                         (TFunction<void___cdecl(EDisplaceMeshToolSubdivisionType_const_&)> *)
                         local_888);
  }
  iVar19 = (int)pUVar24->_padding_;
  piVar1 = (int *)((longlong)&pUVar24->_padding_ + 4);
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar24->_padding_,piVar1);
  }
  *(int *)&pUVar24->_padding_ = iVar19 + 1;
  *(TPropertyWatcher<EDisplaceMeshToolSubdivisionType> **)
   (pUVar24->_padding_ + (longlong)iVar19 * 8) = pTVar45;
  if (local_a28 != (code *)0x0) {
    pppuVar52 = &local_a18;
    if (local_a00 != (undefined ***)0x0) {
      pppuVar52 = local_a00;
    }
    (*(code *)(*pppuVar52)[2])();
  }
  ValidateSubdivisions(this);
  FVar61.ReferenceController = (this->ActiveWeightMap).SharedReferenceCount.ReferenceController;
  local_a90.SelectionType.bIsSet = false;
  local_a90.ActiveMaterialID.bIsSet = false;
  local_a90.SubdivisionsCount = ((this->CommonProperties).field0_0x0.DebugPtr)->Subdivisions;
  local_a90.WeightMap.Object = (this->ActiveWeightMap).Object;
  if (FVar61.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar61.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar61.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a90.WeightMap.SharedReferenceCount.ReferenceController = FVar61.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a90.SelectedTriangles.ArrayMax = local_b28._4_4_;
  local_ae8 = local_b30;
  pUVar28 = (this->SelectiveTessellationProperties).field0_0x0.DebugPtr;
  if ((TOptional<EDisplaceMeshToolTriangleSelectionType> *)&pUVar28->SelectionType !=
      &local_a90.SelectionType) {
    local_a90.SelectionType.TypedValue = pUVar28->SelectionType;
    local_a90.SelectionType.bIsSet = true;
  }
  local_a90.SelectedTriangles.ArrayNum = (int)local_b28;
  local_b28 = 0;
  local_b30.ComparisonIndex.Value = 0;
  local_b30.Number = 0;
  local_a90.SelectedTriangles.AllocatorInstance.Data = (FScriptContainerElement *)local_ae8;
  if (pUVar28->ActiveMaterial != (FName)0x0) {
    pFVar46 = ::FName::ToString(&pUVar28->ActiveMaterial,&local_910);
    pFVar57 = (pUVar28->MaterialIDList).AllocatorInstance.Data;
    iVar19 = (pUVar28->MaterialIDList).ArrayNum;
    for (pFVar32 = pFVar57; pFVar32 != pFVar57 + (longlong)iVar19 * 0x10; pFVar32 = pFVar32 + 0x10)
    {
      iVar20 = *(int *)(pFVar32 + 8);
      iVar6 = (pFVar46->Data).ArrayNum;
      if (iVar20 == iVar6) {
        if (1 < iVar20) {
          iVar20 = FGenericPlatformStricmp::Stricmp
                             (*(wchar_t **)pFVar32,(wchar_t *)(pFVar46->Data).AllocatorInstance.Data
                             );
          bVar18 = iVar20 == 0;
          goto LAB_14cc782f8;
        }
LAB_14cc7837b:
        iVar19 = (int)((longlong)pFVar32 - (longlong)pFVar57 >> 4);
        goto LAB_14cc7830d;
      }
      bVar18 = iVar20 + iVar6 == 1;
LAB_14cc782f8:
      if (bVar18) goto LAB_14cc7837b;
    }
    iVar19 = -1;
LAB_14cc7830d:
    if (local_910.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.Data.AllocatorInstance.Data);
    }
    local_a90.ActiveMaterialID.bIsSet = true;
    local_a90.ActiveMaterialID.TypedValue = iVar19;
  }
  FVar62 = local_ae8;
  pUVar24 = (this->CommonProperties).field0_0x0.DebugPtr;
  pIVar47 = ::operator_new(0x50);
  if (pIVar47 == (IDynamicMeshOperatorFactory *)0x0) {
    pIVar47 = (IDynamicMeshOperatorFactory *)0x0;
  }
  else {
    EVar5 = pUVar24->SubdivisionType;
    *pIVar47 = (IDynamicMeshOperatorFactory)&___7FSubdivideMeshOpFactory_DisplaceMeshToolLocals__6B_
    ;
    pIVar47[1] = (IDynamicMeshOperatorFactory)&this->OriginalMesh;
    DisplaceMeshToolLocals::FSubdivideParameters::FSubdivideParameters
              ((FSubdivideParameters *)(pIVar47 + 2),&local_a90);
    *(EDisplaceMeshToolSubdivisionType *)(pIVar47 + 9) = EVar5;
    FVar61.ReferenceController = local_a90.WeightMap.SharedReferenceCount.ReferenceController;
    FVar62 = (FName)local_a90.SelectedTriangles.AllocatorInstance;
  }
  pIVar11 = (this->Subdivider).Ptr;
  (this->Subdivider).Ptr = pIVar47;
  if (pIVar11 != (IDynamicMeshOperatorFactory *)0x0) {
    (**(code **)*pIVar11)(pIVar11,1);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar22 = Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_288,pUVar22);
  local_288._8_8_ = this;
  this_02 = (UMeshStatisticsProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_288);
  if (local_288._64_8_ != 0) {
    plVar50 = (longlong *)(local_288 + 0x50);
    if ((longlong *)local_288._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_288._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))(plVar50);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_02 != (UMeshStatisticsProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  (this->MeshStatistics).field0_0x0.DebugPtr = this_02;
  UMeshStatisticsProperties::Update(this_02,&this->OriginalMesh);
  (**(code **)(this->_padding_ + 0x318))(this);
  if (this->bNeedsSubdivided != false) {
    if (this->SubdivideTask !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      UE::Geometry::
      FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
      ::CancelAndDelete(this->SubdivideTask);
    }
    pFVar60 = (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
               *)0x0;
    local_a38 = 0;
    FStack_a30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SubdividedMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_a38) {
      (this->SubdividedMesh).Object = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SubdividedMesh).SharedReferenceCount,&FStack_a30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a30.ReferenceController);
    this_03 = ::operator_new(0x160);
    if (this_03 !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      pIVar47 = (this->Subdivider).Ptr;
      pTVar48 = (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                 *)(**(code **)((longlong)*pIVar47 + 8))(pIVar47,&local_a48);
      FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
      FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_>
                ((FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)
                 this_03,pTVar48);
      *(undefined ***)this_03 =
           &
           ___7__FAsyncTaskExecuterWithAbort_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE__6B_
      ;
      (this_03->TaskCounter).Object = (atomic<int> *)0x0;
      (this_03->TaskCounter).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      this_03->bAbort = false;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_03);
      *(bool **)&this_03->field_0x70 = &this_03->bAbort;
      pFVar60 = this_03;
    }
    this->SubdivideTask = pFVar60;
    if ((this_03 !=
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0) && (local_a48 != (undefined8 *)0x0)) {
      (**(code **)*local_a48)();
    }
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->SubdivideTask,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0
              );
    this->bNeedsSubdivided = false;
  }
  if ((this->bNeedsDisplaced != false) &&
     (this->DisplaceTask !=
      (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
       *)0x0)) {
    UE::Geometry::
    FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
    ::CancelAndDelete(this->DisplaceTask);
    this->DisplaceTask =
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0;
  }
  QueryPerformanceCounter(&local_a40);
  this->ComputationStartTime =
       (double)local_a40.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  AdvanceComputation(this);
  pcVar7 = *(code **)(this->_padding_ + 0x380);
  pFVar49 = FText::AsLocalizable_Advanced_LocText
                      (&local_900,L"UDisplaceMeshTool",L"ToolName",L"Displace");
  (*pcVar7)(this,pFVar49);
  if (local_900.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_900.TextData.Reference + 0x10))();
  }
  plVar50 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar7 = *(code **)(*plVar50 + 0x360);
  pFVar49 = FText::AsLocalizable_Advanced_LocText
                      (&local_8f0,L"UDisplaceMeshTool",L"OnStartDisplaceMesh",
                       L"Subdivide and Displace the input mesh using different noise functions and maps"
                      );
  (*pcVar7)(plVar50,pFVar49,2);
  if (local_8f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8f0.TextData.Reference + 0x10))();
  }
  if (FVar62 != (FName)0x0) {
    FMemory::Free((void *)FVar62);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar61.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_510.ReferenceController);
  if ((code *)local_628._224_8_ != (code *)0x0) {
    plVar50 = (longlong *)&local_538;
    if (plStack_520 != (longlong *)0x0) {
      plVar50 = plStack_520;
    }
    (**(code **)(*plVar50 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_628._216_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_628._200_8_);
  if ((FScriptContainerElement *)local_628._144_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_628._144_8_);
  }
  if ((FScriptContainerElement *)local_628._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_628._88_8_);
  }
  if (local_b30 != (FName)0x0) {
    FMemory::Free((void *)local_b30);
  }
  if (local_ae0.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae0.Materials.AllocatorInstance.Data);
  }
  if (local_158._64_8_ != 0) {
    plVar50 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar50 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar50 + 0x10))();
  }
  if ((FName *)local_b00.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_b00.AllocatorInstance.Data);
  }
  return;
}

// StartComputation @ 14cc81e70

void __thiscall UDisplaceMeshTool::StartComputation(UDisplaceMeshTool *this)

{
  IDynamicMeshOperatorFactory *pIVar1;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *this_00;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  *pTVar2;
  FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
  *pFVar3;
  LARGE_INTEGER local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar3 = (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
            *)0x0;
  local_res8.s.LowPart = 0;
  if (this->bNeedsSubdivided != false) {
    if (this->SubdivideTask !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      UE::Geometry::
      FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
      ::CancelAndDelete(this->SubdivideTask);
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SubdividedMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_18) {
      (this->SubdividedMesh).Object = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SubdividedMesh).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    this_00 = ::operator_new(0x160);
    if (this_00 !=
        (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
         *)0x0) {
      pIVar1 = (this->Subdivider).Ptr;
      pTVar2 = (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
      FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
      FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_><TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>_>
                ((FAsyncTask<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> *)
                 this_00,pTVar2);
      *(undefined ***)this_00 =
           &
           ___7__FAsyncTaskExecuterWithAbort_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE__6B_
      ;
      (this_00->TaskCounter).Object = (atomic<int> *)0x0;
      (this_00->TaskCounter).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      this_00->bAbort = false;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
      *(bool **)&this_00->field_0x70 = &this_00->bAbort;
      pFVar3 = this_00;
    }
    this->SubdivideTask = pFVar3;
    if ((this_00 !=
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0) &&
       ((undefined8 *)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart))();
    }
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->SubdivideTask,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0
              );
    this->bNeedsSubdivided = false;
  }
  if ((this->bNeedsDisplaced != false) &&
     (this->DisplaceTask !=
      (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
       *)0x0)) {
    UE::Geometry::
    FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
    ::CancelAndDelete(this->DisplaceTask);
    this->DisplaceTask =
         (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          *)0x0;
  }
  QueryPerformanceCounter(&local_res8);
  this->ComputationStartTime =
       (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  AdvanceComputation(this);
  return;
}

// StaticRegisterNativesUDisplaceMeshTool @ 14cc823a0

void __cdecl UDisplaceMeshTool::StaticRegisterNativesUDisplaceMeshTool(void)

{
  return;
}

// UpdateActiveContrastCurveTarget @ 14cc82e70

void __thiscall UDisplaceMeshTool::UpdateActiveContrastCurveTarget(UDisplaceMeshTool *this)

{
  UDisplaceMeshTextureMapProperties *pUVar1;
  UInteractiveToolManager *pUVar2;
  UCurveFloat *pUVar3;
  
  if ((((this->TextureMapProperties).field0_0x0.DebugPtr)->AdjustmentCurve).field0_0x0.DebugPtr ==
      (UCurveFloat *)0x0) {
    pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar3 = ToolSetupUtil::GetContrastAdjustmentCurve(pUVar2);
    pUVar1 = (this->TextureMapProperties).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (pUVar1->AdjustmentCurve).field0_0x0.DebugPtr = pUVar3;
    this->bNeedsDisplaced = true;
  }
  return;
}

// UpdateActiveWeightMap @ 14cc83340

void __thiscall UDisplaceMeshTool::UpdateActiveWeightMap(UDisplaceMeshTool *this)

{
  int iVar1;
  UDisplaceMeshCommonProperties *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FMeshDescription *pFVar11;
  FSharedReferencer<1> FVar12;
  int iVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  TIndexedWeightMap<float> *pTVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  float fVar19;
  FName local_res10;
  FName local_res18;
  FGetMeshParameters local_a8;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  TIndexedWeightMap<float> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  
  pFVar9 = ::FName::FName(&local_res10,L"None");
  if (((this->CommonProperties).field0_0x0.DebugPtr)->WeightMap == *pFVar9) {
    local_98 = 0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ActiveWeightMap != (TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *)&local_98)
    {
      (this->ActiveWeightMap).Object = (TIndexedWeightMap<float> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveWeightMap).SharedReferenceCount,&FStack_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_90.ReferenceController);
    return;
  }
  pTVar10 = ::operator_new(0x28);
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar16 = (TIndexedWeightMap<float> *)&DAT_00000010;
    pTVar10 = pTVar15;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar16 = (TIndexedWeightMap<float> *)(pTVar10 + 1);
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TIndexedWeightMap_M_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    if ((pTVar16 == (TIndexedWeightMap<float> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_a8.bHaveRequestLOD = false;
  local_a8._1_3_ = 0;
  local_a8.RequestLOD = Default;
  local_a8.bWantMeshTangents = false;
  local_a8._9_3_ = 0;
  pFVar11 = UE::ToolTarget::GetMeshDescription((UToolTarget *)this->_padding_,&local_a8);
  if ((pTVar16 == (TIndexedWeightMap<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar5 = __real_3f800000;
  bVar6 = UE::WeightMaps::GetVertexWeightMap
                    (pFVar11,((this->CommonProperties).field0_0x0.DebugPtr)->WeightMap,pTVar16,
                     __real_3f800000);
  if (((this->CommonProperties).field0_0x0.DebugPtr)->bInvertWeightMap != false) {
    if ((pTVar16 == (TIndexedWeightMap<float> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar17 = (longlong)(pTVar16->Values).ArrayNum;
    pTVar18 = pTVar15;
    if (0 < lVar17) {
      do {
        uVar14 = (uint)pTVar15;
        uVar8 = 0;
        if ((int)uVar14 < (pTVar16->Values).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar19 = fVar5 - *(float *)((pTVar16->Values).AllocatorInstance.Data + (longlong)pTVar18 * 4
                                   );
        if (0.0 <= fVar19) {
          if (fVar5 <= fVar19) {
            fVar19 = fVar5;
          }
        }
        else {
          fVar19 = 0.0;
        }
        uVar8 = 0;
        if ((int)uVar14 < (pTVar16->Values).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)(uVar14 + 1);
        *(float *)((pTVar16->Values).AllocatorInstance.Data + (longlong)pTVar18 * 4) = fVar19;
        pTVar18 = (TReferenceControllerBase<1> *)((longlong)&pTVar18->_padding_ + 1);
      } while ((longlong)pTVar18 < lVar17);
    }
  }
  if (bVar6) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (this->ActiveWeightMap).Object;
    pTStack_70 = (this->ActiveWeightMap).SharedReferenceCount.ReferenceController;
    (this->ActiveWeightMap).Object = pTVar16;
    (this->ActiveWeightMap).SharedReferenceCount.ReferenceController = pTVar10;
    FVar12.ReferenceController = pTStack_70;
  }
  else {
    pUVar2 = (this->CommonProperties).field0_0x0.DebugPtr;
    if (((pUVar2->WeightMapsList).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pUVar2->WeightMapsList).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + 8);
    iVar13 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar13 = 0;
    }
    pFVar9 = ::FName::FName(&local_res18,iVar13,*(wchar_t **)pFVar3,FNAME_Add);
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ((this->CommonProperties).field0_0x0.DebugPtr)->WeightMap = *pFVar9;
    FVar12.ReferenceController = FStack_80.ReferenceController;
    if (&this->ActiveWeightMap != (TSharedPtr<UE::Geometry::TIndexedWeightMap<float>,1> *)&local_88)
    {
      (this->ActiveWeightMap).Object = (TIndexedWeightMap<float> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveWeightMap).SharedReferenceCount,&FStack_80);
      FVar12.ReferenceController = FStack_80.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// ValidateSubdivisions @ 14cc88d40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UDisplaceMeshTool::ValidateSubdivisions(UDisplaceMeshTool *this)

{
  UDisplaceMeshCommonProperties *pUVar1;
  code *UNRECOVERED_JUMPTABLE;
  ITextData *pIVar2;
  bool bVar3;
  longlong *plVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  int iVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_f8;
  FTextFormat local_e8;
  TSharedPtr<FCulture,1> local_d8;
  TSharedPtr<FCulture,1> local_c8;
  FText local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  pUVar1 = (this->CommonProperties).field0_0x0.DebugPtr;
  if (pUVar1->bDisableSizeWarning != false) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x360);
    pFVar5 = FText::GetEmpty();
                    /* WARNING: Could not recover jumptable at 0x00014cc88d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar4,pFVar5,3);
    return;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = __real_4146e36000000000 / (double)this->NumTrianglesInSelection;
  auVar10 = sqrtpd(in_XMM2,auVar10);
  iVar9 = (int)(auVar10._0_8_ - __real_3ff0000000000000);
  if (iVar9 < pUVar1->Subdivisions) {
    if ((this->Subdivider).Ptr != (IDynamicMeshOperatorFactory *)0x0) {
      local_c8.Object = (FCulture *)0x0;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar5 = FText::AsNumber(&local_48,iVar9,(FNumberFormattingOptions *)0x0,&local_c8);
      local_d8.Object = (FCulture *)0x0;
      local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar6 = FText::AsNumber(&local_38,
                               ((this->CommonProperties).field0_0x0.DebugPtr)->Subdivisions,
                               (FNumberFormattingOptions *)0x0,&local_d8);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"UDisplaceMeshTool",L"SubdivisionsTooHigh",
                          L"Desired number of Subdivisions ({0}) exceeds maximum number ({1}) for a mesh of this number of triangles."
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
      local_98.Type = Text;
      FText::FText((FText *)&local_98.TextValue,pFVar6);
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      local_78 = 4;
      FText::FText(&local_68,pFVar5);
      if (local_68.TextData.Reference == (ITextData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_f8.AllocatorInstance,2,&local_f8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_f8.AllocatorInstance.Data,&local_98,2);
      local_e8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
      local_e8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_e8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_b8,&local_e8,&local_f8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FFormatArgumentValue *)local_f8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar6->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pIVar2 = (pFVar5->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*plVar4 + 0x360))(plVar4,&local_b8,3);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
    }
    ((this->CommonProperties).field0_0x0.DebugPtr)->Subdivisions = iVar9;
  }
  else {
    FText::FText(&local_a8);
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar4 + 0x360))(plVar4,&local_a8,3);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  pUVar1 = (this->CommonProperties).field0_0x0.DebugPtr;
  if (pUVar1->Subdivisions < 0) {
    pUVar1->Subdivisions = 0;
  }
  return;
}

// WeightMapQuery @ 14cc890c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UDisplaceMeshTool::WeightMapQuery
          (UDisplaceMeshTool *this,TVector<double> *param_1,TIndexedWeightMap<float> *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_178 [32];
  TVector<double>_u_0 local_158;
  undefined1 local_138 [16];
  undefined8 local_128 [2];
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8;
  TDistPoint3Triangle3<double> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_128[0] = __real_7fefffffffffffff;
  local_118 = 0;
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  uVar3 = (**(code **)((this->OriginalMeshSpatial)._padding_ + 0x20))
                    (&this->OriginalMeshSpatial,param_1,local_138,local_128);
  if (local_118 != 0) {
    plVar4 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar4 = local_f0;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  fVar5 = __real_3f800000;
  if (-1 < (int)uVar3) {
    local_158._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_158._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_158._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
              (&local_d8,&this->OriginalMesh,uVar3,(TVector<double> *)&local_158._s_0);
    lVar2 = *(longlong *)
             ((this->OriginalMesh).Triangles.Blocks.AllocatorInstance.Data +
             (ulonglong)(uVar3 >> 9) * 8);
    local_158._s_0.X = *(double *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    iVar1 = *(int *)(lVar2 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    fVar5 = UE::Geometry::TIndexedWeightMap<float>::GetValue(param_2,local_158._0_4_);
    fVar6 = UE::Geometry::TIndexedWeightMap<float>::GetValue(param_2,local_158._4_4_);
    fVar7 = UE::Geometry::TIndexedWeightMap<float>::GetValue(param_2,iVar1);
    fVar5 = (float)((double)fVar7 * local_d8.TriangleBaryCoords.field0_0x0._s_0.Z +
                   (double)fVar6 * local_d8.TriangleBaryCoords.field0_0x0._s_0.Y +
                   (double)fVar5 * local_d8.TriangleBaryCoords.field0_0x0._s_0.X);
  }
  return fVar5;
}

