// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// FCutMeshWithMeshOp @ 14cc1b310

FCutMeshWithMeshOp * __thiscall FCutMeshWithMeshOp::FCutMeshWithMeshOp(FCutMeshWithMeshOp *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  *(undefined ***)this = &___7FCutMeshWithMeshOp__6B_;
  (this->TargetMesh).Object = (FDynamicMesh3 *)0x0;
  (this->TargetMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->CuttingMesh).Object = (FDynamicMesh3 *)0x0;
  (this->CuttingMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CuttingMeshTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CuttingMeshTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CuttingMeshTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CuttingMeshTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CuttingMeshTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CuttingMeshTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CuttingMeshTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CuttingMeshTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CuttingMeshTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CuttingMeshTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CuttingMeshTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CuttingMeshTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->WindingThreshold = 0.5;
  this->bAttemptToFixHoles = true;
  this->bCollapseExtraEdges = true;
  (this->IntersectMesh).Ptr = (FDynamicMesh3 *)0x0;
  (this->CreatedSubtractBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedSubtractBoundaryEdges).ArrayNum = 0;
  (this->CreatedSubtractBoundaryEdges).ArrayMax = 0;
  (this->CreatedIntersectBoundaryEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CreatedIntersectBoundaryEdges).ArrayNum = 0;
  (this->CreatedIntersectBoundaryEdges).ArrayMax = 0;
  return this;
}

// ~FCutMeshWithMeshOp @ 14cc220a0

void __thiscall FCutMeshWithMeshOp::~FCutMeshWithMeshOp(FCutMeshWithMeshOp *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMesh3 *pFVar2;
  
  *(undefined ***)this = &___7FCutMeshWithMeshOp__6B_;
  pFVar1 = (this->CreatedIntersectBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreatedSubtractBoundaryEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->IntersectMesh).Ptr;
  if (pFVar2 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CuttingMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetMesh).SharedReferenceCount.ReferenceController);
  UE::Geometry::FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// CalculateResult @ 14cc43c30

void __thiscall
FCutMeshWithMeshOp::CalculateResult(FCutMeshWithMeshOp *this,FProgressCancel *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *pTVar3;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *pTVar4;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 *puVar8;
  FDynamicMesh3 *pFVar9;
  code *pcVar10;
  EAsyncExecution EVar11;
  TUniquePtr<UE::Geometry::FBooleanMeshesOp,TDefaultDelete<UE::Geometry::FBooleanMeshesOp>_> TVar12;
  TUniquePtr<UE::Geometry::FBooleanMeshesOp,TDefaultDelete<UE::Geometry::FBooleanMeshesOp>_> TVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  FBooleanMeshesOp *this_00;
  FBooleanMeshesOp *pFVar17;
  longlong lVar18;
  FBooleanMeshesOp *pFVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  FDynamicMesh3 *pFVar22;
  TArray<TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>,TSizedDefaultAllocator<32>_> *pTVar23;
  TArray<UE::Geometry::TTransformSRT3<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  TUniquePtr<UE::Geometry::FBooleanMeshesOp,TDefaultDelete<UE::Geometry::FBooleanMeshesOp>_>
  local_res8;
  FProgressCancel *local_res10;
  TUniquePtr<UE::Geometry::FBooleanMeshesOp,TDefaultDelete<UE::Geometry::FBooleanMeshesOp>_>
  local_res18;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  <lambda_1> local_198;
  <lambda_2> local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  longlong local_158;
  longlong local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  TUniqueFunction<void___cdecl(void)> local_88;
  TUniqueFunction<void___cdecl(void)> local_58;
  
  local_res10 = param_1;
  this_00 = ::operator_new(0xd8);
  pFVar19 = (FBooleanMeshesOp *)0x0;
  pFVar17 = pFVar19;
  if (this_00 != (FBooleanMeshesOp *)0x0) {
    memset(this_00,0,0xd8);
    pFVar17 = UE::Geometry::FBooleanMeshesOp::FBooleanMeshesOp(this_00);
  }
  pTVar3 = &this->TargetMesh;
  pFVar17->CSGOperation = DifferenceAB;
  pFVar17->bAttemptFixHoles = this->bAttemptToFixHoles;
  pFVar17->bTryCollapseExtraEdges = this->bCollapseExtraEdges;
  pFVar17->WindingThreshold = this->WindingThreshold;
  pTVar23 = &pFVar17->Meshes;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  local_res8.Ptr = pFVar17;
  if (((pFVar6 <= pTVar3) && (pTVar3 < pFVar6 + (longlong)(pFVar17->Meshes).ArrayMax * 0x10)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = (pFVar17->Meshes).ArrayNum;
  piVar1 = &(pFVar17->Meshes).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar23->AllocatorInstance,piVar1);
  }
  TVar12.Ptr = local_res8.Ptr;
  (pFVar17->Meshes).ArrayNum = iVar16 + 1;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  *(FDynamicMesh3 **)(pFVar6 + (longlong)iVar16 * 0x10) = pTVar3->Object;
  pTVar7 = (this->TargetMesh).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar16 * 0x10 + 8) = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2d8 = (this->TargetMeshTransform).Rotation.XY.m128d_f64[0];
  dStack_2d0 = (this->TargetMeshTransform).Rotation.XY.m128d_f64[1];
  local_2c8 = (this->TargetMeshTransform).Rotation.ZW.m128d_f64[0];
  dStack_2c0 = (this->TargetMeshTransform).Rotation.ZW.m128d_f64[1];
  pTVar24 = &(local_res8.Ptr)->Transforms;
  local_2a8 = (this->TargetMeshTransform).Translation.ZW.m128d_f64[0];
  local_2b8 = (this->TargetMeshTransform).Translation.XY.m128d_f64[0];
  dStack_2b0 = (this->TargetMeshTransform).Translation.XY.m128d_f64[1];
  dStack_290 = (this->TargetMeshTransform).Scale3D.ZW.m128d_f64[0];
  dStack_2a0 = (this->TargetMeshTransform).Scale3D.XY.m128d_f64[0];
  dStack_298 = (this->TargetMeshTransform).Scale3D.XY.m128d_f64[1];
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  local_148 = local_2b8;
  dStack_140 = dStack_2b0;
  local_138 = local_2a8;
  local_130 = dStack_2a0;
  dStack_128 = dStack_298;
  local_120 = dStack_290;
  if (((pFVar6 <= (FScriptContainerElement *)&local_2d8) &&
      ((FScriptContainerElement *)&local_2d8 <
       pFVar6 + (longlong)((local_res8.Ptr)->Transforms).ArrayMax * 0x50)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = ((TVar12.Ptr)->Transforms).ArrayNum;
  piVar1 = &((TVar12.Ptr)->Transforms).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar24->AllocatorInstance,piVar1);
  }
  TVar13.Ptr = local_res8.Ptr;
  lVar18 = (longlong)iVar16;
  ((TVar12.Ptr)->Transforms).ArrayNum = iVar16 + 1;
  pTVar4 = &this->CuttingMesh;
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = local_2d8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dStack_2d0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = local_2c8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10 + 8) = dStack_2c0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = local_2b8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20 + 8) = dStack_2b0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30) = local_2a8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = dStack_2a0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40) = dStack_298;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40 + 8) = dStack_290;
  pTVar23 = &(local_res8.Ptr)->Meshes;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  if (((pFVar6 <= pTVar4) &&
      (pTVar4 < pFVar6 + (longlong)((local_res8.Ptr)->Meshes).ArrayMax * 0x10)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = ((TVar13.Ptr)->Meshes).ArrayNum;
  piVar1 = &((TVar13.Ptr)->Meshes).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar23->AllocatorInstance,piVar1);
  }
  TVar12.Ptr = local_res8.Ptr;
  ((TVar13.Ptr)->Meshes).ArrayNum = iVar16 + 1;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  *(FDynamicMesh3 **)(pFVar6 + (longlong)iVar16 * 0x10) = pTVar4->Object;
  pTVar7 = (this->CuttingMesh).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar16 * 0x10 + 8) = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_288 = (this->CuttingMeshTransform).Rotation.XY.m128d_f64[0];
  dStack_280 = (this->CuttingMeshTransform).Rotation.XY.m128d_f64[1];
  local_278 = (this->CuttingMeshTransform).Rotation.ZW.m128d_f64[0];
  dStack_270 = (this->CuttingMeshTransform).Rotation.ZW.m128d_f64[1];
  pTVar24 = &(local_res8.Ptr)->Transforms;
  local_258 = (this->CuttingMeshTransform).Translation.ZW.m128d_f64[0];
  local_268 = (this->CuttingMeshTransform).Translation.XY.m128d_f64[0];
  dStack_260 = (this->CuttingMeshTransform).Translation.XY.m128d_f64[1];
  dStack_240 = (this->CuttingMeshTransform).Scale3D.ZW.m128d_f64[0];
  dStack_250 = (this->CuttingMeshTransform).Scale3D.XY.m128d_f64[0];
  dStack_248 = (this->CuttingMeshTransform).Scale3D.XY.m128d_f64[1];
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  local_118 = local_268;
  dStack_110 = dStack_260;
  local_108 = local_258;
  local_100 = dStack_250;
  dStack_f8 = dStack_248;
  local_f0 = dStack_240;
  if (((pFVar6 <= (FScriptContainerElement *)&local_288) &&
      ((FScriptContainerElement *)&local_288 <
       pFVar6 + (longlong)((local_res8.Ptr)->Transforms).ArrayMax * 0x50)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = ((TVar12.Ptr)->Transforms).ArrayNum;
  piVar1 = &((TVar12.Ptr)->Transforms).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar24->AllocatorInstance,piVar1);
  }
  lVar18 = (longlong)iVar16;
  ((TVar12.Ptr)->Transforms).ArrayNum = iVar16 + 1;
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = local_288;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dStack_280;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = local_278;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10 + 8) = dStack_270;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = local_268;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20 + 8) = dStack_260;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30) = local_258;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = dStack_250;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40) = dStack_248;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40 + 8) = dStack_240;
  pFVar17 = ::operator_new(0xd8);
  if (pFVar17 != (FBooleanMeshesOp *)0x0) {
    memset(pFVar17,0,0xd8);
    pFVar19 = UE::Geometry::FBooleanMeshesOp::FBooleanMeshesOp(pFVar17);
  }
  pFVar19->CSGOperation = Intersect;
  pFVar19->bAttemptFixHoles = this->bAttemptToFixHoles;
  pFVar19->bTryCollapseExtraEdges = this->bCollapseExtraEdges;
  pFVar19->WindingThreshold = this->WindingThreshold;
  pTVar23 = &pFVar19->Meshes;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  local_res18.Ptr = pFVar19;
  if (((pFVar6 <= pTVar3) && (pTVar3 < pFVar6 + (longlong)(pFVar19->Meshes).ArrayMax * 0x10)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = (pFVar19->Meshes).ArrayNum;
  piVar1 = &(pFVar19->Meshes).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar23->AllocatorInstance,piVar1);
  }
  TVar12.Ptr = local_res18.Ptr;
  (pFVar19->Meshes).ArrayNum = iVar16 + 1;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  *(FDynamicMesh3 **)(pFVar6 + (longlong)iVar16 * 0x10) = pTVar3->Object;
  pTVar7 = (this->TargetMesh).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar16 * 0x10 + 8) = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_238 = (this->TargetMeshTransform).Rotation.XY.m128d_f64[0];
  dStack_230 = (this->TargetMeshTransform).Rotation.XY.m128d_f64[1];
  local_228 = (this->TargetMeshTransform).Rotation.ZW.m128d_f64[0];
  dStack_220 = (this->TargetMeshTransform).Rotation.ZW.m128d_f64[1];
  pTVar24 = &(local_res18.Ptr)->Transforms;
  local_208 = (this->TargetMeshTransform).Translation.ZW.m128d_f64[0];
  local_218 = (this->TargetMeshTransform).Translation.XY.m128d_f64[0];
  dStack_210 = (this->TargetMeshTransform).Translation.XY.m128d_f64[1];
  dStack_1f0 = (this->TargetMeshTransform).Scale3D.ZW.m128d_f64[0];
  dStack_200 = (this->TargetMeshTransform).Scale3D.XY.m128d_f64[0];
  dStack_1f8 = (this->TargetMeshTransform).Scale3D.XY.m128d_f64[1];
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  local_e8 = local_218;
  dStack_e0 = dStack_210;
  local_d8 = local_208;
  local_d0 = dStack_200;
  dStack_c8 = dStack_1f8;
  local_c0 = dStack_1f0;
  if (((pFVar6 <= (FScriptContainerElement *)&local_238) &&
      ((FScriptContainerElement *)&local_238 <
       pFVar6 + (longlong)((local_res18.Ptr)->Transforms).ArrayMax * 0x50)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = ((TVar12.Ptr)->Transforms).ArrayNum;
  piVar1 = &((TVar12.Ptr)->Transforms).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar24->AllocatorInstance,piVar1);
  }
  TVar13.Ptr = local_res18.Ptr;
  lVar18 = (longlong)iVar16;
  ((TVar12.Ptr)->Transforms).ArrayNum = iVar16 + 1;
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = local_238;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dStack_230;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = local_228;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10 + 8) = dStack_220;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = local_218;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20 + 8) = dStack_210;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30) = local_208;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = dStack_200;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40) = dStack_1f8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40 + 8) = dStack_1f0;
  pTVar23 = &(local_res18.Ptr)->Meshes;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  if (((pFVar6 <= pTVar4) &&
      (pTVar4 < pFVar6 + (longlong)((local_res18.Ptr)->Meshes).ArrayMax * 0x10)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = ((TVar13.Ptr)->Meshes).ArrayNum;
  piVar1 = &((TVar13.Ptr)->Meshes).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar23->AllocatorInstance,piVar1);
  }
  TVar12.Ptr = local_res18.Ptr;
  ((TVar13.Ptr)->Meshes).ArrayNum = iVar16 + 1;
  pFVar6 = (pTVar23->AllocatorInstance).Data;
  *(FDynamicMesh3 **)(pFVar6 + (longlong)iVar16 * 0x10) = pTVar4->Object;
  pTVar7 = (this->CuttingMesh).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar16 * 0x10 + 8) = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e8 = (this->CuttingMeshTransform).Rotation.XY.m128d_f64[0];
  dStack_1e0 = (this->CuttingMeshTransform).Rotation.XY.m128d_f64[1];
  local_1d8 = (this->CuttingMeshTransform).Rotation.ZW.m128d_f64[0];
  dStack_1d0 = (this->CuttingMeshTransform).Rotation.ZW.m128d_f64[1];
  pTVar24 = &(local_res18.Ptr)->Transforms;
  local_1b8 = (this->CuttingMeshTransform).Translation.ZW.m128d_f64[0];
  local_1c8 = (this->CuttingMeshTransform).Translation.XY.m128d_f64[0];
  dStack_1c0 = (this->CuttingMeshTransform).Translation.XY.m128d_f64[1];
  dStack_1a0 = (this->CuttingMeshTransform).Scale3D.ZW.m128d_f64[0];
  dStack_1b0 = (this->CuttingMeshTransform).Scale3D.XY.m128d_f64[0];
  dStack_1a8 = (this->CuttingMeshTransform).Scale3D.XY.m128d_f64[1];
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  local_b8 = local_1c8;
  dStack_b0 = dStack_1c0;
  local_a8 = local_1b8;
  local_a0 = dStack_1b0;
  dStack_98 = dStack_1a8;
  local_90 = dStack_1a0;
  if (((pFVar6 <= (FScriptContainerElement *)&local_1e8) &&
      ((FScriptContainerElement *)&local_1e8 <
       pFVar6 + (longlong)((local_res18.Ptr)->Transforms).ArrayMax * 0x50)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = ((TVar12.Ptr)->Transforms).ArrayNum;
  piVar1 = &((TVar12.Ptr)->Transforms).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&pTVar24->AllocatorInstance,piVar1);
  }
  EVar11 = CutMeshWithMeshToolAsyncExecTarget;
  ((TVar12.Ptr)->Transforms).ArrayNum = iVar16 + 1;
  lVar18 = (longlong)iVar16;
  local_88._0_8_ = 0;
  local_88._40_8_ = 0;
  pFVar6 = (pTVar24->AllocatorInstance).Data;
  *(double *)(pFVar6 + lVar18 * 0x50) = local_1e8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 8) = dStack_1e0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10) = local_1d8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x10 + 8) = dStack_1d0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20) = local_1c8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x20 + 8) = dStack_1c0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30) = local_1b8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x30 + 8) = dStack_1b0;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40) = dStack_1a8;
  *(double *)(pFVar6 + lVar18 * 0x50 + 0x40 + 8) = dStack_1a0;
  local_198.SubtractOp = &local_res8;
  local_198.Progress = &local_res10;
  Async<_FCutMeshWithMeshOp::CalculateResult_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_168,EVar11,&local_198,&local_88);
  local_188.IntersectOp = &local_res18;
  local_188.Progress = &local_res10;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  Async<_FCutMeshWithMeshOp::CalculateResult_::__l2::<lambda_2>_>
            ((TFuture<void> *)local_178,CutMeshWithMeshToolAsyncExecTarget,&local_188,&local_58);
  if (local_168._0_8_ != 0) {
    do {
      cVar15 = (**(code **)(**(longlong **)(local_168._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_168._0_8_ + 0x60),0xffffffff,0);
    } while (cVar15 == '\0');
  }
  if (local_178._0_8_ != 0) {
    do {
      cVar15 = (**(code **)(**(longlong **)(local_178._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_178._0_8_ + 0x60),0xffffffff,0);
    } while (cVar15 == '\0');
  }
  puVar21 = (undefined8 *)(local_res8.Ptr)->_padding_;
  (local_res8.Ptr)->_padding_ = 0;
  puVar2 = &this->field_0x8;
  if ((longlong *)puVar2 == &local_158) {
    if (puVar21 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)*puVar21;
      goto LAB_14cc446b0;
    }
  }
  else {
    puVar8 = *(undefined8 **)puVar2;
    *(undefined8 **)puVar2 = puVar21;
    if (puVar8 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)*puVar8;
      puVar21 = puVar8;
LAB_14cc446b0:
      (*(code *)*puVar20)(puVar21,1);
    }
  }
  (**(code **)(*(longlong *)this + 8))(this,&(local_res8.Ptr)->_padding_);
  pFVar22 = (FDynamicMesh3 *)(local_res18.Ptr)->_padding_;
  (local_res18.Ptr)->_padding_ = 0;
  pTVar5 = &this->IntersectMesh;
  if (pTVar5 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                 *)&local_150) {
    if (pFVar22 == (FDynamicMesh3 *)0x0) goto LAB_14cc4470f;
    puVar21 = (undefined8 *)pFVar22->_padding_;
  }
  else {
    pFVar9 = pTVar5->Ptr;
    pTVar5->Ptr = pFVar22;
    if (pFVar9 == (FDynamicMesh3 *)0x0) goto LAB_14cc4470f;
    puVar21 = (undefined8 *)pFVar9->_padding_;
    pFVar22 = pFVar9;
  }
  (*(code *)*puVar21)(pFVar22,1);
LAB_14cc4470f:
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CreatedSubtractBoundaryEdges,&(local_res8.Ptr)->CreatedBoundaryEdges);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->CreatedIntersectBoundaryEdges,&(local_res18.Ptr)->CreatedBoundaryEdges);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_178._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_168._8_8_);
  if (local_res18.Ptr != (FBooleanMeshesOp *)0x0) {
    (**(code **)(local_res18.Ptr)->_padding_)(local_res18.Ptr,1);
  }
  if (local_res8.Ptr != (FBooleanMeshesOp *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  return;
}

