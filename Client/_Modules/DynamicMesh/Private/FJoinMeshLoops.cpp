// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FJoinMeshLoops @ 14c6df620

FJoinMeshLoops * __thiscall
UE::Geometry::FJoinMeshLoops::FJoinMeshLoops(FJoinMeshLoops *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  this->_padding_ = (longlong)&___7FJoinMeshLoops_Geometry_UE__6B_;
  (this->LoopA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoopA).ArrayNum = 0;
  (this->LoopA).ArrayMax = 0;
  (this->LoopB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoopB).ArrayNum = 0;
  (this->LoopB).ArrayMax = 0;
  (this->JoinQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JoinQuads).ArrayNum = 0;
  (this->JoinQuads).ArrayMax = 0;
  (this->JoinTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JoinTriangles).ArrayNum = 0;
  (this->JoinTriangles).ArrayMax = 0;
  (this->NewGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewGroups).ArrayNum = 0;
  (this->NewGroups).ArrayMax = 0;
  (this->QuadGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuadGroups).ArrayNum = 0;
  (this->QuadGroups).ArrayMax = 0;
  this->UVScaleFactor = 1.0;
  return this;
}

// FJoinMeshLoops @ 14c6df680

FJoinMeshLoops * __thiscall
UE::Geometry::FJoinMeshLoops::FJoinMeshLoops
          (FJoinMeshLoops *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->LoopA;
  this->Mesh = param_1;
  this->UVScaleFactor = 1.0;
  this->_padding_ = (longlong)&___7FJoinMeshLoops_Geometry_UE__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LoopA).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->LoopA).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->LoopB;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LoopB).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pFVar4 = (param_3->AllocatorInstance).Data;
  (this->LoopB).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  (this->JoinQuads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JoinQuads).ArrayNum = 0;
  (this->JoinQuads).ArrayMax = 0;
  (this->JoinTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JoinTriangles).ArrayNum = 0;
  (this->JoinTriangles).ArrayMax = 0;
  (this->NewGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewGroups).ArrayNum = 0;
  (this->NewGroups).ArrayMax = 0;
  (this->QuadGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuadGroups).ArrayNum = 0;
  (this->QuadGroups).ArrayMax = 0;
  return this;
}

// ~FJoinMeshLoops @ 14c6e1600

void __thiscall UE::Geometry::FJoinMeshLoops::~FJoinMeshLoops(FJoinMeshLoops *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FJoinMeshLoops_Geometry_UE__6B_;
  pFVar1 = (this->QuadGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JoinTriangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JoinQuads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoopB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoopA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Apply @ 14c70a2c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Geometry::FJoinMeshLoops::Apply(FJoinMeshLoops *this)

{
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  double *pdVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMesh3 *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  FDynamicMeshAttributeSet *pFVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FDynamicMeshAttributeSet *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  FDynamicMeshAttributeSet *pFVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  float fVar39;
  undefined1 auVar40 [16];
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  int local_278 [2];
  FDynamicMeshAttributeSet *local_270;
  TArray<double,TSizedDefaultAllocator<32>_> local_268;
  TArray<double,TSizedDefaultAllocator<32>_> local_258;
  TArray<int,TSizedDefaultAllocator<32>_> local_248;
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  longlong local_228;
  float local_220 [3];
  float local_214;
  FDynamicMeshEditResult local_208;
  FIndex3i_u_0 local_198;
  FIndex3i_u_0 local_18c;
  FDynamicMeshEditor local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  <lambda_1> local_128;
  <lambda_2> local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  
  local_res10[0] = (this->LoopA).ArrayNum;
  pFVar25 = (FDynamicMeshAttributeSet *)0x0;
  local_180.Mesh = this->Mesh;
  pFVar28 = ((local_180.Mesh)->AttributeSet).Ptr;
  pFVar21 = pFVar25;
  if (pFVar28 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar21 = pFVar28;
  }
  if (0 < (pFVar21->UVLayers).Array.ArrayNum) {
    pFVar25 = *(FDynamicMeshAttributeSet **)(pFVar21->UVLayers).Array.AllocatorInstance.Data;
  }
  local_128.NV = (int *)local_res10;
  local_270 = pFVar25;
  local_128.__this = this;
  dVar31 = CalculateAverageUVScale<_UE::Geometry::FJoinMeshLoops::Apply_::__l2::<lambda_1>_>
                     ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar25,
                      local_res10[0],&local_128);
  local_118.NV = (int *)local_res10;
  auVar40._8_4_ = (int)extraout_XMM0_Qb;
  auVar40._0_8_ = dVar31;
  auVar40._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_118.__this = this;
  dVar32 = CalculateAverageUVScale<_UE::Geometry::FJoinMeshLoops::Apply_::__l2::<lambda_2>_>
                     ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pFVar25,
                      local_res10[0],&local_118);
  dVar34 = __real_3fe0000000000000;
  local_208.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewVertices.ArrayNum = 0;
  local_208.NewVertices.ArrayMax = 0;
  local_208.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewTriangles.ArrayNum = 0;
  local_208.NewTriangles.ArrayMax = 0;
  local_208.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewQuads.ArrayNum = 0;
  local_208.NewQuads.ArrayMax = 0;
  dVar31 = (dVar32 + dVar31) * __real_3fe0000000000000;
  local_208.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewPolygons.ArrayNum = 0;
  local_208.NewPolygons.ArrayMax = 0;
  local_208.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewGroups.ArrayNum = 0;
  local_208.NewGroups.ArrayMax = 0;
  local_208.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewNormalOverlayElements.ArrayNum = 0;
  local_208.NewNormalOverlayElements.ArrayMax = 0;
  local_208.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.NewColorOverlayElements.ArrayNum = 0;
  local_208.NewColorOverlayElements.ArrayMax = 0;
  bVar15 = FDynamicMeshEditor::StitchVertexLoopsMinimal
                     (&local_180,&this->LoopA,&this->LoopB,&local_208);
  pTVar1 = &this->JoinQuads;
  if (pTVar1 != &local_208.NewQuads) {
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar1->AllocatorInstance).Data = local_208.NewQuads.AllocatorInstance.Data;
    (this->JoinQuads).ArrayNum = local_208.NewQuads.ArrayNum;
    (this->JoinQuads).ArrayMax = local_208.NewQuads.ArrayMax;
    local_208.NewQuads.ArrayNum = 0;
    local_208.NewQuads.ArrayMax = 0;
    local_208.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  iVar20 = (this->JoinQuads).ArrayNum;
  pTVar2 = &this->QuadGroups;
  local_res18 = pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar2,iVar20,Default);
  local_278[0] = this->Mesh->GroupIDCounter;
  this->Mesh->GroupIDCounter = local_278[0] + 1;
  pFVar6 = (this->NewGroups).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)local_278) &&
      ((FScriptContainerElement *)local_278 < pFVar6 + (longlong)(this->NewGroups).ArrayMax * 4)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar11 = (code *)swi(3);
    uVar17 = (*pcVar11)();
    return (bool)uVar17;
  }
  iVar18 = (this->NewGroups).ArrayNum;
  piVar3 = &(this->NewGroups).ArrayMax;
  if (iVar18 == *piVar3) {
    iVar18 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(this->NewGroups).AllocatorInstance,piVar3);
    local_res18 = pTVar2;
  }
  uVar27 = 0;
  (this->NewGroups).ArrayNum = iVar18 + 1;
  *(int *)((this->NewGroups).AllocatorInstance.Data + (longlong)iVar18 * 4) = local_278[0];
  uVar29 = uVar27;
  local_228 = (longlong)iVar20;
  if (0 < iVar20) {
    do {
      uVar24 = (uint)uVar27;
      uVar19 = 0;
      if ((int)uVar24 < (this->JoinQuads).ArrayNum) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      iVar20 = local_278[0];
      pFVar6 = (pTVar1->AllocatorInstance).Data + uVar29 * 8;
      uVar19 = 0;
      if ((int)uVar24 < local_res18->ArrayNum) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
      *(int *)((local_res18->AllocatorInstance).Data + uVar29 * 4) = iVar20;
      uVar19 = *(uint *)pFVar6;
      pFVar7 = this->Mesh;
      if (((-1 < (int)uVar19) &&
          ((int)uVar19 <
           (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2) -
                  1U) < 0xfffe)) {
        pFVar8 = (this->JoinTriangles).AllocatorInstance.Data;
        if (((pFVar8 <= pFVar6) && (pFVar6 < pFVar8 + (longlong)(this->JoinTriangles).ArrayMax * 4))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        iVar20 = (this->JoinTriangles).ArrayNum;
        piVar3 = &(this->JoinTriangles).ArrayMax;
        if (iVar20 == *piVar3) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->JoinTriangles).AllocatorInstance,piVar3);
        }
        (this->JoinTriangles).ArrayNum = iVar20 + 1;
        *(uint *)((this->JoinTriangles).AllocatorInstance.Data + (longlong)iVar20 * 4) =
             *(uint *)pFVar6;
        pFVar7 = this->Mesh;
        if ((pFVar7->TriangleGroups).bIsSet != false) {
          *(int *)(*(longlong *)
                    ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)pFVar6 >> 9) * 8) +
                  (ulonglong)(*(uint *)pFVar6 & 0x1ff) * 4) = local_278[0];
          iVar20 = local_278[0] + 1;
          if (local_278[0] + 1 < pFVar7->GroupIDCounter) {
            iVar20 = pFVar7->GroupIDCounter;
          }
          pFVar7->GroupIDCounter = iVar20;
        }
      }
      uVar19 = *(uint *)(pFVar6 + 4);
      pFVar8 = pFVar6 + 4;
      pFVar7 = this->Mesh;
      if (((-1 < (int)uVar19) &&
          ((int)uVar19 <
           (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 2) -
                  1U) < 0xfffe)) {
        pFVar9 = (this->JoinTriangles).AllocatorInstance.Data;
        if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + (longlong)(this->JoinTriangles).ArrayMax * 4))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        iVar20 = (this->JoinTriangles).ArrayNum;
        piVar3 = &(this->JoinTriangles).ArrayMax;
        if (iVar20 == *piVar3) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->JoinTriangles).AllocatorInstance,piVar3);
        }
        (this->JoinTriangles).ArrayNum = iVar20 + 1;
        *(uint *)((this->JoinTriangles).AllocatorInstance.Data + (longlong)iVar20 * 4) =
             *(uint *)pFVar8;
        pFVar7 = this->Mesh;
        if ((pFVar7->TriangleGroups).bIsSet != false) {
          *(int *)(*(longlong *)
                    ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)(pFVar6 + 4) >> 9) * 8) +
                  (ulonglong)(*(uint *)(pFVar6 + 4) & 0x1ff) * 4) = local_278[0];
          iVar20 = local_278[0] + 1;
          if (local_278[0] + 1 < pFVar7->GroupIDCounter) {
            iVar20 = pFVar7->GroupIDCounter;
          }
          pFVar7->GroupIDCounter = iVar20;
        }
      }
      uVar27 = (ulonglong)(uVar24 + 1);
      uVar29 = uVar29 + 1;
    } while ((longlong)uVar29 < local_228);
  }
  uVar29 = 0;
  pFVar28 = (this->Mesh->AttributeSet).Ptr;
  if (((pFVar28 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar28->NormalLayers).Array.ArrayNum))
     && (pFVar6 = (pFVar28->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 != 0)) {
    FMeshNormals::InitializeOverlayRegionToPerVertexNormals
              (*(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)pFVar6,
               &this->JoinTriangles);
  }
  pFVar28 = local_270;
  if (((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) &&
     (local_270 != (FDynamicMeshAttributeSet *)0x0)) {
    local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.ArrayNum = 0;
    local_238.ArrayMax = 0;
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_238,local_res10[0] + 1,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_248,local_res10[0] + 1,Default);
    local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.ArrayNum = 0;
    local_258.ArrayMax = 0;
    dVar14 = 0.0;
    dVar32 = 0.0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_258,local_res10[0] + 1,Default);
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_268,local_res10[0] + 1,Default);
    dVar33 = 0.0;
    dVar13 = 0.0;
    if (0 < (int)local_res10[0]) {
      local_res18 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      uVar27 = uVar29;
      do {
        pTVar2 = local_res18;
        uVar19 = (uint)uVar29;
        uVar22 = (int)(uVar19 + 1) % (int)local_res10[0];
        uVar23 = ~uVar19 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar19 < local_258.ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        *(double *)(local_258.AllocatorInstance.Data + uVar27) = dVar14;
        pFVar7 = this->Mesh;
        uVar24 = 0;
        if ((int)uVar19 < (this->LoopB).ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar24 = *(uint *)((this->LoopB).AllocatorInstance.Data +
                          (longlong)&(pTVar2->AllocatorInstance).Data);
        pFVar10 = this->Mesh;
        uVar29 = (ulonglong)(uVar24 & 0x1ff);
        lVar26 = *(longlong *)
                  ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8);
        pdVar4 = (double *)(lVar26 + uVar29 * 0x18);
        local_178 = *pdVar4;
        dStack_170 = pdVar4[1];
        local_168 = *(double *)(lVar26 + 0x10 + uVar29 * 0x18);
        uVar24 = 0;
        if ((int)uVar19 < (this->LoopA).ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar24 = *(uint *)((this->LoopA).AllocatorInstance.Data +
                          (longlong)&(pTVar2->AllocatorInstance).Data);
        uVar29 = (ulonglong)(uVar24 & 0x1ff);
        lVar26 = *(longlong *)
                  ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
        ;
        pdVar4 = (double *)(lVar26 + uVar29 * 0x18);
        local_108 = *pdVar4;
        dStack_100 = pdVar4[1];
        local_f8 = *(double *)(lVar26 + 0x10 + uVar29 * 0x18);
        uVar24 = 0;
        if ((int)uVar19 < local_268.ArrayNum) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        auVar36._8_8_ = 0;
        auVar36._0_8_ =
             (dStack_170 - dStack_100) * (dStack_170 - dStack_100) +
             (local_178 - local_108) * (local_178 - local_108) +
             (local_168 - local_f8) * (local_168 - local_f8);
        auVar40 = sqrtpd(auVar40,auVar36);
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        *(longlong *)(local_268.AllocatorInstance.Data + uVar27) = auVar40._0_8_;
        uVar24 = 0;
        if ((int)uVar19 < local_268.ArrayNum) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar7 = this->Mesh;
        dVar32 = dVar32 + *(double *)(local_268.AllocatorInstance.Data + uVar27);
        uVar24 = 0;
        if ((int)uVar19 < (this->LoopA).ArrayNum) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar24 = *(uint *)((this->LoopA).AllocatorInstance.Data +
                          (longlong)&(pTVar2->AllocatorInstance).Data);
        pFVar10 = this->Mesh;
        uVar29 = (ulonglong)(uVar24 & 0x1ff);
        lVar26 = *(longlong *)
                  ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8);
        pdVar4 = (double *)(lVar26 + uVar29 * 0x18);
        local_160 = *pdVar4;
        dStack_158 = pdVar4[1];
        local_150 = *(double *)(lVar26 + 0x10 + uVar29 * 0x18);
        uVar24 = 0;
        if ((int)uVar19 < (this->LoopB).ArrayNum) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar24 = *(uint *)((this->LoopB).AllocatorInstance.Data +
                          (longlong)&(pTVar2->AllocatorInstance).Data);
        pFVar7 = this->Mesh;
        uVar29 = (ulonglong)(uVar24 & 0x1ff);
        lVar26 = *(longlong *)
                  ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
        ;
        pdVar4 = (double *)(lVar26 + uVar29 * 0x18);
        local_f0 = *pdVar4;
        dStack_e8 = pdVar4[1];
        local_e0 = *(double *)(lVar26 + 0x10 + uVar29 * 0x18);
        uVar24 = 0;
        if ((int)uVar22 < (this->LoopA).ArrayNum) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        dVar13 = local_150 + local_e0;
        auVar40._0_8_ = (local_160 + local_f0) * dVar34;
        auVar40._8_8_ = 0;
        dVar33 = dStack_158 + dStack_e8;
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar24 = *(uint *)((this->LoopA).AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
        pFVar10 = this->Mesh;
        uVar29 = (ulonglong)(uVar24 & 0x1ff);
        lVar26 = *(longlong *)
                  ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8);
        pdVar4 = (double *)(lVar26 + uVar29 * 0x18);
        local_148 = *pdVar4;
        dStack_140 = pdVar4[1];
        local_138 = *(double *)(lVar26 + 0x10 + uVar29 * 0x18);
        uVar24 = 0;
        if ((int)uVar22 < (this->LoopB).ArrayNum) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar29 = (ulonglong)(uVar19 + 1);
        uVar27 = uVar27 + 8;
        uVar24 = *(uint *)((this->LoopB).AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
        uVar30 = (ulonglong)(uVar24 & 0x1ff);
        local_res18 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      ((longlong)&(local_res18->AllocatorInstance).Data + 4);
        lVar26 = *(longlong *)
                  ((pFVar10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8)
        ;
        local_c8 = *(double *)(lVar26 + 0x10 + uVar30 * 0x18);
        pdVar4 = (double *)(lVar26 + uVar30 * 0x18);
        local_d8 = *pdVar4;
        dStack_d0 = pdVar4[1];
        dVar38 = (local_148 + local_d8) * dVar34 - auVar40._0_8_;
        dVar37 = (dStack_140 + dStack_d0) * dVar34 - dVar33 * dVar34;
        dVar33 = (local_138 + local_c8) * dVar34 - dVar13 * dVar34;
        auVar35._0_8_ = dVar33 * dVar33;
        auVar35._8_8_ = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar37 * dVar37 + dVar38 * dVar38 + auVar35._0_8_;
        auVar36 = sqrtpd(auVar35,auVar12);
        dVar14 = dVar14 + auVar36._0_8_;
        pFVar28 = local_270;
        dVar33 = dVar32;
        dVar13 = dVar14;
      } while ((int)(uVar19 + 1) < (int)local_res10[0]);
    }
    uVar19 = local_res10[0];
    uVar29 = 0;
    uVar24 = 0;
    if ((int)local_res10[0] < local_258.ArrayNum) {
      uVar24 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return (bool)uVar17;
    }
    *(double *)(local_258.AllocatorInstance.Data + (longlong)(int)uVar19 * 8) = dVar13;
    if (local_268.ArrayNum < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return (bool)uVar17;
      }
    }
    lVar26 = (longlong)(int)local_res10[0];
    uVar5 = *(undefined8 *)local_268.AllocatorInstance.Data;
    uVar19 = 0;
    if ((int)local_res10[0] < local_268.ArrayNum) {
      uVar19 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return (bool)uVar17;
    }
    *(undefined8 *)(local_268.AllocatorInstance.Data + lVar26 * 8) = uVar5;
    dVar34 = (double)(int)local_res10[0];
    if (-1 < (int)local_res10[0]) {
      uVar27 = uVar29;
      uVar30 = uVar29;
      do {
        uVar22 = (uint)uVar29;
        uVar24 = ~uVar22 >> 0x1f;
        uVar19 = 0;
        if ((int)uVar22 < local_258.ArrayNum) {
          uVar19 = uVar24;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_220[1] = 0.0;
        fVar39 = (float)(dVar31 * *(double *)(local_258.AllocatorInstance.Data + uVar30));
        local_220[0] = fVar39;
        iVar20 = TDynamicMeshOverlay<float,2>::AppendElement
                           ((TDynamicMeshOverlay<float,2> *)pFVar28,local_220);
        uVar19 = 0;
        if ((int)uVar22 < local_238.ArrayNum) {
          uVar19 = uVar24;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        *(int *)(local_238.AllocatorInstance.Data + uVar27) = iVar20;
        local_220[2] = fVar39;
        local_214 = (float)((dVar33 / dVar34) * dVar31);
        iVar20 = TDynamicMeshOverlay<float,2>::AppendElement
                           ((TDynamicMeshOverlay<float,2> *)pFVar28,local_220 + 2);
        uVar19 = 0;
        if ((int)uVar22 < local_248.ArrayNum) {
          uVar19 = uVar24;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar29 = (ulonglong)(uVar22 + 1);
        uVar30 = uVar30 + 8;
        *(int *)(local_248.AllocatorInstance.Data + uVar27) = iVar20;
        uVar27 = uVar27 + 4;
      } while ((int)(uVar22 + 1) <= (int)local_res10[0]);
    }
    uVar27 = 0;
    uVar29 = uVar27;
    if (0 < local_228) {
      do {
        uVar24 = (uint)uVar27;
        uVar19 = 0;
        if ((int)uVar24 < (this->JoinQuads).ArrayNum) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar6 = (this->JoinQuads).AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar24 < local_238.ArrayNum) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        uVar22 = uVar24 + 1;
        iVar20 = *(int *)(local_238.AllocatorInstance.Data + uVar29 * 4);
        uVar19 = 0;
        if ((int)uVar22 < local_238.ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_res18 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                      CONCAT44(local_res18._4_4_,
                               *(undefined4 *)(local_238.AllocatorInstance.Data + uVar29 * 4 + 4));
        uVar19 = 0;
        if ((int)uVar24 < local_248.ArrayNum) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_res20 = *(int *)(local_248.AllocatorInstance.Data + uVar29 * 4);
        uVar19 = 0;
        if ((int)uVar22 < local_248.ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar28 = local_270;
        pFVar7 = this->Mesh;
        iVar18 = *(int *)(local_248.AllocatorInstance.Data + uVar29 * 4 + 4);
        uVar19 = *(uint *)(pFVar6 + uVar29 * 8);
        if (((-1 < (int)uVar19) &&
            ((int)uVar19 <
             (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar19 >> 9) * 8) +
                               (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_198._s_0.A = (int)local_res18;
          local_198._s_0.B = iVar20;
          local_198._s_0.C = iVar18;
          TDynamicMeshOverlay<float,2>::SetTriangle
                    ((TDynamicMeshOverlay<float,2> *)local_270,uVar19,(FIndex3i *)&local_198._s_0,
                     true);
        }
        uVar19 = *(uint *)(pFVar6 + uVar29 * 8 + 4);
        pFVar7 = this->Mesh;
        if (((-1 < (int)uVar19) &&
            ((int)uVar19 <
             (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar19 >> 9) * 8) +
                               (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_18c._s_0.B = local_res20;
          local_18c._s_0.A = iVar20;
          local_18c._s_0.C = iVar18;
          TDynamicMeshOverlay<float,2>::SetTriangle
                    ((TDynamicMeshOverlay<float,2> *)pFVar28,uVar19,(FIndex3i *)&local_18c._s_0,true
                    );
        }
        uVar27 = (ulonglong)(uVar24 + 1);
        uVar29 = uVar29 + 1;
      } while ((longlong)uVar29 < local_228);
    }
    if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.AllocatorInstance.Data);
    }
    if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
    if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.AllocatorInstance.Data);
    }
  }
  if (local_208.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_208.NewNormalOverlayElements.AllocatorInstance.Data,
             local_208.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_208.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_208.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_208.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_208.NewPolygons.AllocatorInstance.Data
             ,local_208.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_208.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_208.NewPolygons.AllocatorInstance.Data);
  }
  if (local_208.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.NewQuads.AllocatorInstance.Data);
  }
  if (local_208.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.NewTriangles.AllocatorInstance.Data);
  }
  if (local_208.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.NewVertices.AllocatorInstance.Data);
  }
  return bVar15;
}

// Validate @ 14c77bfb0

EOperationValidationResult __thiscall UE::Geometry::FJoinMeshLoops::Validate(FJoinMeshLoops *this)

{
  EOperationValidationResult EVar1;
  
  EVar1 = Ok;
  if ((this->LoopA).ArrayNum != (this->LoopB).ArrayNum) {
    EVar1 = Failed_InvalidTopology;
  }
  return EVar1;
}

