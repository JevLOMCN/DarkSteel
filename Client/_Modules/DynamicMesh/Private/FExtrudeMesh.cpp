// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FExtrudeMesh @ 14c6de760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FExtrudeMesh * __thiscall
UE::Geometry::FExtrudeMesh::FExtrudeMesh(FExtrudeMesh *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->Mesh = param_1;
  this->_padding_ = (longlong)&___7FExtrudeMesh_Geometry_UE__6B_;
  this->DefaultExtrudeDistance = 1.0;
  *(undefined8 *)&this->ExtrudedPositionFunc = 0;
  *(undefined8 *)&(this->ExtrudedPositionFunc).field_0x28 = 0;
  this->IsPositiveOffset = true;
  this->bSkipClosedComponents = false;
  this->UVScaleFactor = 1.0;
  (this->Extrusions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extrusions).ArrayNum = 0;
  (this->Extrusions).ArrayMax = 0;
  local_48 = *(longlong *)&this->ExtrudedPositionFunc;
  uVar2 = *(undefined8 *)&(this->ExtrudedPositionFunc).field_0x8;
  local_38 = *(longlong *)&(this->ExtrudedPositionFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->ExtrudedPositionFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->ExtrudedPositionFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->ExtrudedPositionFunc).field_0x28;
  *(code **)&this->ExtrudedPositionFunc =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FExtrudeMesh::FExtrudeMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<float>_const_&,int>
       ::Call;
  *(undefined8 *)&(this->ExtrudedPositionFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ExtrudedPositionFunc).field_0x10 = 0x528c6a30;
  *(undefined4 *)&(this->ExtrudedPositionFunc).field_0x14 = 1;
  *(FExtrudeMesh **)&(this->ExtrudedPositionFunc).field_0x18 = this;
  *(undefined4 *)&(this->ExtrudedPositionFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ExtrudedPositionFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ExtrudedPositionFunc).field_0x28 = 0;
  *(undefined4 *)&(this->ExtrudedPositionFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~FExtrudeMesh @ 14c6e13f0

void __thiscall UE::Geometry::FExtrudeMesh::~FExtrudeMesh(FExtrudeMesh *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FExtrudeMesh_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
            ((FExtrusionInfo *)(this->Extrusions).AllocatorInstance.Data,(this->Extrusions).ArrayNum
            );
  pFVar1 = (this->Extrusions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ExtrudedPositionFunc != 0) {
    plVar2 = *(longlong **)&(this->ExtrudedPositionFunc).field_0x28;
    plVar3 = (longlong *)&(this->ExtrudedPositionFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c6e143b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// Apply @ 14c709ba0

bool __thiscall UE::Geometry::FExtrudeMesh::Apply(FExtrudeMesh *this)

{
  TArray<UE::Geometry::FExtrudeMesh::FExtrusionInfo,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FMeshNormals *pFVar9;
  int iVar10;
  FExtrusionInfo *pFVar11;
  uint uVar12;
  FMeshNormals *pFVar13;
  uint uVar14;
  bool bVar15;
  FMeshNormals *pFVar16;
  FMeshNormals *pFVar17;
  FMeshConnectedComponents local_98;
  FMeshNormals local_80;
  TFunction<bool___cdecl(int,int)> local_68;
  
  pFVar13 = (FMeshNormals *)0x0;
  local_80.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Normals.ArrayNum = 0;
  local_80.Normals.ArrayMax = 0;
  local_80.Mesh = (FDynamicMesh3 *)0x0;
  bVar6 = (this->Mesh->VertexNormals).bIsSet;
  if (bVar6 == false) {
    local_80.Mesh = this->Mesh;
    FMeshNormals::Compute_FaceAvg(&local_80,true,true);
  }
  local_98.Mesh = this->Mesh;
  local_98.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Components.Array.ArrayNum = 0;
  local_98.Components.Array.ArrayMax = 0;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  FMeshConnectedComponents::FindConnectedTriangles(&local_98,&local_68);
  this_00 = &this->Extrusions;
  bVar15 = true;
  iVar10 = (this->Extrusions).ArrayNum;
  iVar8 = local_98.Components.Array.ArrayNum;
  if (iVar10 < local_98.Components.Array.ArrayNum) {
    iVar10 = local_98.Components.Array.ArrayNum - iVar10;
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c0,8,iVar10,&this_00->AllocatorInstance,&(this->Extrusions).ArrayNum,
                       &(this->Extrusions).ArrayMax);
    DefaultConstructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar8 * 0x1c0,iVar10);
  }
  else {
    if (local_98.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_98.Components.Array._8_8_ & 0xffffffff);
    }
    if (local_98.Components.Array.ArrayNum < iVar10) {
      uVar14 = iVar10 - local_98.Components.Array.ArrayNum;
      if (((int)(local_98.Components.Array.ArrayNum | uVar14) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (uVar14 != 0) {
        TArray<UE::Geometry::FExtrudeMesh::FExtrusionInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,iVar8,uVar14);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c0,8,&this_00->AllocatorInstance,(this->Extrusions).ArrayNum,
                   &(this->Extrusions).ArrayMax);
      }
    }
  }
  bVar5 = bVar15;
  if (0 < local_98.Components.Array.ArrayNum) {
    pFVar16 = pFVar13;
    pFVar17 = pFVar13;
    pFVar9 = &local_80;
    if (bVar6 != false) {
      pFVar9 = pFVar13;
    }
    do {
      uVar12 = (uint)pFVar13;
      uVar14 = 0;
      if ((int)uVar12 < (this->Extrusions).ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar11 = (FExtrusionInfo *)
                ((longlong)&pFVar17->Mesh + (longlong)(this_00->AllocatorInstance).Data);
      uVar14 = 0;
      if ((int)uVar12 < local_98.Components.Array.ArrayNum) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar1 = &pFVar11->InitialTriangles;
      puVar2 = *(undefined8 **)
                (local_98.Components.Array.AllocatorInstance.Data + (longlong)pFVar16 * 8);
      if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)puVar2) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar2;
        *puVar2 = 0;
        (pFVar11->InitialTriangles).ArrayNum = *(int *)(puVar2 + 1);
        (pFVar11->InitialTriangles).ArrayMax = *(int *)((longlong)puVar2 + 0xc);
        puVar2[1] = 0;
      }
      bVar6 = ApplyExtrude(this,pFVar11,pFVar9);
      bVar5 = false;
      if (bVar6) {
        bVar5 = bVar15;
      }
      pFVar13 = (FMeshNormals *)(ulonglong)(uVar12 + 1);
      pFVar16 = (FMeshNormals *)((longlong)&pFVar16->Mesh + 1);
      pFVar17 = (FMeshNormals *)&pFVar17[0x12].Normals.ArrayNum;
      bVar15 = bVar5;
    } while ((int)(uVar12 + 1) < local_98.Components.Array.ArrayNum);
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_98.Components);
  if (local_80.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Normals.AllocatorInstance.Data);
  }
  return bVar5;
}

// ApplyExtrude @ 14c70bc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FExtrudeMesh::ApplyExtrude
          (FExtrudeMesh *this,FExtrusionInfo *param_1,FMeshNormals *param_2)

{
  int *piVar1;
  FMutex *this_00;
  undefined8 *puVar2;
  double *pdVar3;
  atomic<unsigned_char> aVar4;
  float fVar5;
  FDynamicMesh3 *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FDynamicMesh3 *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ForAnyElementType FVar21;
  int iVar22;
  TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *pTVar23;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar24;
  bool bVar25;
  bool bVar26;
  undefined1 uVar27;
  short sVar28;
  int iVar29;
  uint uVar30;
  TArrayView<int_const_,int> *pTVar31;
  uint *puVar32;
  float *pfVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar38;
  FEdgeLoop *this_01;
  undefined1 *puVar39;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar40;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar41;
  uint uVar42;
  uint uVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar46;
  FExtrusionInfo *pFVar47;
  ulonglong uVar48;
  double extraout_XMM0_Qa;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  float fVar64;
  undefined1 auStackY_818 [32];
  undefined1 local_7d8;
  undefined1 local_7d7 [3];
  uint local_7d4;
  uint local_7d0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_7c8;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_7b8;
  TVector<float>_u_0 local_7b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_7a0;
  FDynamicMeshEditor local_790;
  TVector<double>_u_0 local_788;
  double dStack_770;
  undefined8 uStack_768;
  double dStack_760;
  double dStack_758;
  ulonglong local_750;
  TArray<int,TSizedDefaultAllocator<32>_> *local_748;
  FScriptContainerElement *local_740;
  uint local_738;
  longlong local_730;
  longlong local_728;
  FExtrusionInfo *local_720;
  undefined8 local_718;
  float local_710;
  TVector2<float>_u_0 local_70c [2];
  undefined1 local_6f8 [64];
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  ForAnyElementType local_6a8;
  undefined8 local_6a0;
  ForAnyElementType local_698;
  undefined8 local_690;
  FDynamicMeshEditResult local_688;
  float local_618;
  float fStack_614;
  float local_610;
  TVector<double>_u_0 local_608;
  TVector<double>_u_0 local_5f0;
  TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *local_5d8;
  FExtrudeMesh *local_5d0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_5c8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_5c0;
  TVector<double>_u_0 local_5b8;
  double dStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  double dStack_588;
  FScriptContainerElement *local_580;
  undefined8 local_578;
  float local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  double local_558;
  TQuaternion<double>_u_0 TStack_550;
  double local_530;
  double dStack_528;
  double local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4d0;
  TVector<double>_u_0 local_4b8;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TQuaternion<double>_u_0 local_470;
  TQuaternion<double>_u_0 local_450;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  TVector<double>_u_0 local_418;
  TArrayView<int_const_,int> local_3f8;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  TArrayView<int_const_,int> local_3b8;
  undefined1 local_3a8 [56];
  ForElementType<FSetElementId> local_370;
  int local_360;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_818;
  pTVar40 = &param_1->InitialTriangles;
  local_748 = pTVar40;
  local_720 = param_1;
  local_5d0 = this;
  FMeshRegionBoundaryLoops::SetMesh(&param_1->InitialLoops,this->Mesh,pTVar40);
  bVar25 = FMeshRegionBoundaryLoops::Compute(&param_1->InitialLoops);
  bVar26 = false;
  if (bVar25) {
    local_7d0 = (param_1->InitialLoops).Loops.ArrayNum;
    if ((this->bSkipClosedComponents == false) || (local_7d0 != 0)) {
      pTVar31 = TArrayView<int_const_,int>::
                TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                          (&local_3b8,pTVar40);
      pTVar38 = &param_1->InitialVertices;
      local_3f8.DataPtr = pTVar31->DataPtr;
      local_3f8.ArrayNum = pTVar31->ArrayNum;
      local_3f8._12_4_ = *(undefined4 *)&pTVar31->field_0xc;
      local_7c8 = pTVar38;
      TriangleToVertexIDs(this->Mesh,&local_3f8,pTVar38);
      local_790.Mesh = this->Mesh;
      FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)local_3a8);
      local_688.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewVertices.ArrayNum = 0;
      local_688.NewVertices.ArrayMax = 0;
      local_688.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewTriangles.ArrayNum = 0;
      local_688.NewTriangles.ArrayMax = 0;
      local_688.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewQuads.ArrayNum = 0;
      local_688.NewQuads.ArrayMax = 0;
      local_688.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewPolygons.ArrayNum = 0;
      local_688.NewPolygons.ArrayMax = 0;
      local_688.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewGroups.ArrayNum = 0;
      local_688.NewGroups.ArrayMax = 0;
      local_688.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewNormalOverlayElements.ArrayNum = 0;
      local_688.NewNormalOverlayElements.ArrayMax = 0;
      local_688.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_688.NewColorOverlayElements.ArrayNum = 0;
      local_688.NewColorOverlayElements.ArrayMax = 0;
      FDynamicMeshEditor::DuplicateTriangles
                (&local_790,pTVar40,(FMeshIndexMappings *)local_3a8,&local_688);
      FVar21.Data = local_688.NewTriangles.AllocatorInstance.Data;
      pTVar40 = &param_1->OffsetTriangles;
      if (pTVar40 != &local_688.NewTriangles) {
        iVar29 = local_688.NewTriangles.ArrayNum;
        lVar44 = (longlong)local_688.NewTriangles.ArrayNum;
        piVar1 = &(param_1->OffsetTriangles).ArrayMax;
        (param_1->OffsetTriangles).ArrayNum = local_688.NewTriangles.ArrayNum;
        if ((local_688.NewTriangles.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_688.NewTriangles.ArrayNum,*piVar1,&pTVar40->AllocatorInstance,
                     local_688.NewTriangles.ArrayNum,piVar1);
          if (iVar29 != 0) {
            memcpy((pTVar40->AllocatorInstance).Data,FVar21.Data,lVar44 << 2);
          }
        }
      }
      FVar21.Data = local_688.NewGroups.AllocatorInstance.Data;
      pTVar40 = &param_1->OffsetTriGroups;
      if (pTVar40 != &local_688.NewGroups) {
        iVar29 = local_688.NewGroups.ArrayNum;
        lVar44 = (longlong)local_688.NewGroups.ArrayNum;
        piVar1 = &(param_1->OffsetTriGroups).ArrayMax;
        (param_1->OffsetTriGroups).ArrayNum = local_688.NewGroups.ArrayNum;
        if ((local_688.NewGroups.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_688.NewGroups.ArrayNum,*piVar1,&pTVar40->AllocatorInstance,
                     local_688.NewGroups.ArrayNum,piVar1);
          if (iVar29 != 0) {
            memcpy((pTVar40->AllocatorInstance).Data,FVar21.Data,lVar44 << 2);
          }
        }
      }
      pTVar46 = &param_1->InitialToOffsetMapV;
      local_7b8 = pTVar46;
      if (pTVar46 !=
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_3a8) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&(param_1->InitialToOffsetMapV).field_0x38,
                   (int *)&(param_1->InitialToOffsetMapV).field_0x48,&local_370,local_360);
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar46,local_3a8._8_4_);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,local_3a8._8_4_,(ForAnyElementType *)pTVar46,
                   (int *)&(param_1->InitialToOffsetMapV).field_0x8,
                   (int *)&(param_1->InitialToOffsetMapV).field_0xc);
        puVar39 = &(param_1->InitialToOffsetMapV).field_0x10;
        *(undefined4 *)&(param_1->InitialToOffsetMapV).field_0x30 = local_3a8._48_4_;
        *(undefined4 *)&(param_1->InitialToOffsetMapV).field_0x34 = local_3a8._52_4_;
        if (puVar39 != local_3a8 + 0x10) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)puVar39,
                     (TBitArray<FDefaultBitArrayAllocator> *)(local_3a8 + 0x10));
        }
        if (local_3a8._8_4_ != 0) {
          memcpy(*(void **)pTVar46,(void *)local_3a8._0_8_,(longlong)(int)local_3a8._8_4_ << 4);
        }
      }
      local_7d4 = (param_1->InitialVertices).ArrayNum;
      uVar36 = (ulonglong)(int)local_7d4;
      pFVar45 = (pTVar38->AllocatorInstance).Data;
      local_740 = pFVar45 + uVar36 * 4;
      while( true ) {
        pFVar8 = local_740;
        if (pTVar38->ArrayNum != (int)uVar36) {
          local_7d8 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_7d8)
          ;
        }
        pFVar47 = local_720;
        if (pFVar45 == pFVar8) break;
        uVar30 = *(uint *)pFVar45;
        lVar44 = (longlong)(int)uVar30;
        if (*(int *)&(local_720->InitialToOffsetMapV).field_0x8 == *(int *)&pTVar46->field_0x34) {
LAB_14c70c274:
          uVar36 = (ulonglong)local_7d4;
          pFVar45 = pFVar45 + 4;
        }
        else {
          puVar39 = &pTVar46->field_0x38;
          if (*(undefined1 **)&pTVar46->field_0x40 != (undefined1 *)0x0) {
            puVar39 = *(undefined1 **)&pTVar46->field_0x40;
          }
          iVar29 = *(int *)(puVar39 + (ulonglong)(*(int *)&pTVar46->field_0x48 - 1U & uVar30) * 4);
          if (iVar29 == -1) goto LAB_14c70c274;
          do {
            if (*(uint *)(*(longlong *)pTVar46 + (longlong)iVar29 * 0x10) == uVar30) {
              puVar32 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)pTVar46,uVar30);
              pFVar6 = this->Mesh;
              uVar43 = *puVar32;
              if ((-1 < (int)uVar43) &&
                 ((int)uVar43 <
                  (int)((pFVar6->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (pFVar6->VertexRefCounts).RefCounts.CurBlockUsed))) {
                uVar36 = (ulonglong)(uVar43 & 0x1ff);
                pTVar38 = local_7c8;
                if ((ushort)(*(short *)(*(longlong *)
                                         ((pFVar6->VertexRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + (ulonglong)(uVar43 >> 9) * 8) +
                                       uVar36 * 2) - 1U) < 0xfffe) {
                  uVar35 = (ulonglong)(uVar30 & 0x1ff);
                  lVar7 = *(longlong *)
                           ((pFVar6->Vertices).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar30 >> 9) * 8);
                  puVar2 = (undefined8 *)(lVar7 + uVar35 * 0x18);
                  local_430 = *puVar2;
                  uStack_428 = puVar2[1];
                  local_420 = *(undefined8 *)(lVar7 + 0x10 + uVar35 * 0x18);
                  if (param_2 == (FMeshNormals *)0x0) {
                    local_710 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
                    local_718 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
                    if ((pFVar6->VertexNormals).bIsSet != false) {
                      lVar44 = *(longlong *)
                                ((pFVar6->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar30 >> 9) * 8);
                      local_710 = *(float *)(lVar44 + 8 + uVar35 * 0xc);
                      local_718 = *(undefined8 *)(lVar44 + uVar35 * 0xc);
                    }
                    pfVar33 = (float *)&local_718;
                  }
                  else {
                    uVar42 = 0;
                    if ((int)uVar30 < (param_2->Normals).ArrayNum) {
                      uVar42 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar42 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar26)) {
                      pcVar11 = (code *)swi(3);
                      uVar27 = (*pcVar11)();
                      return (bool)uVar27;
                    }
                    pFVar8 = (param_2->Normals).AllocatorInstance.Data;
                    local_618 = (float)*(double *)(pFVar8 + lVar44 * 0x18);
                    fStack_614 = (float)*(double *)(pFVar8 + lVar44 * 0x18 + 8);
                    local_610 = (float)*(double *)(pFVar8 + lVar44 * 0x18 + 0x10);
                    pfVar33 = &local_618;
                  }
                  local_578 = *(undefined8 *)pfVar33;
                  local_570 = pfVar33[2];
                  local_738 = uVar30;
                  Core::Private::Function::CheckCallable(*(void **)&this->ExtrudedPositionFunc);
                  plVar9 = *(longlong **)&(this->ExtrudedPositionFunc).field_0x28;
                  pcVar11 = *(code **)&this->ExtrudedPositionFunc;
                  plVar37 = (longlong *)&(this->ExtrudedPositionFunc).field_0x10;
                  if (plVar9 != (longlong *)0x0) {
                    plVar37 = plVar9;
                  }
                  uVar34 = (**(code **)(*plVar37 + 8))();
                  (*pcVar11)(&local_518,uVar34,&local_430,&local_578);
                  pFVar6 = this->Mesh;
                  sVar28 = _dclass(local_518);
                  pTVar46 = local_7b8;
                  pTVar38 = local_7c8;
                  if (((sVar28 < 1) &&
                      (sVar28 = _dclass(uStack_510), uVar34 = local_508, pTVar46 = local_7b8,
                      pTVar38 = local_7c8, sVar28 < 1)) &&
                     (sVar28 = _dclass(), pTVar46 = local_7b8, pTVar38 = local_7c8, sVar28 < 1)) {
                    lVar44 = *(longlong *)
                              ((pFVar6->Vertices).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar43 >> 9) * 8);
                    puVar2 = (undefined8 *)(lVar44 + uVar36 * 0x18);
                    *puVar2 = local_518;
                    puVar2[1] = uStack_510;
                    *(undefined8 *)(lVar44 + 0x10 + uVar36 * 0x18) = uVar34;
                    if ((pFVar6->ChangeStampShape).bIsEnabled != false) {
                      this_00 = &(pFVar6->ChangeStampShape).Mutex;
                      LOCK();
                      bVar26 = this_00->State == (atomic<unsigned_char>)0x0;
                      if (bVar26) {
                        this_00->State = (atomic<unsigned_char>)0x1;
                      }
                      UNLOCK();
                      if (!bVar26) {
                        FMutex::LockSlow(this_00);
                      }
                      puVar32 = &(pFVar6->ChangeStampShape).Value;
                      *puVar32 = *puVar32 + 1;
                      LOCK();
                      aVar4 = this_00->State;
                      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                      UNLOCK();
                      pTVar46 = local_7b8;
                      pTVar38 = local_7c8;
                      if (((byte)aVar4 & 2) != 0) {
                        FMutex::WakeWaitingThread(this_00);
                        pTVar46 = local_7b8;
                        pTVar38 = local_7c8;
                      }
                    }
                  }
                }
              }
              goto LAB_14c70c274;
            }
            iVar29 = *(int *)(*(longlong *)pTVar46 + 8 + (longlong)iVar29 * 0x10);
          } while (iVar29 != -1);
          uVar36 = (ulonglong)local_7d4;
          pFVar45 = pFVar45 + 4;
        }
      }
      pTVar40 = &local_720->OffsetTriangles;
      if (this->IsPositiveOffset != false) {
        pTVar40 = local_748;
      }
      FDynamicMeshEditor::ReverseTriangleOrientations(&local_790,pTVar40,true);
      uVar30 = local_7d0;
      local_5d8 = &pFVar47->NewLoops;
      TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::SetNum
                (local_5d8,local_7d0,Default);
      local_5c8 = &pFVar47->StitchTriangles;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (local_5c8,uVar30,Default);
      local_5c0 = &pFVar47->StitchPolygonIDs;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                (local_5c0,uVar30,Default);
      dVar20 = _UNK_15061cbc8;
      dVar19 = ___xmm_3ff00000000000000000000000000000;
      dVar18 = __real_3ff0000000000000;
      iVar29 = (pFVar47->InitialLoops).Loops.ArrayNum;
      uVar35 = (ulonglong)iVar29;
      uVar48 = 0;
      pFVar45 = (pFVar47->InitialLoops).Loops.AllocatorInstance.Data;
      pTVar40 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar45 + 8);
      local_580 = pFVar45 + uVar35 * 0x40;
      local_7d4 = 0;
      local_7c8 = (TArray<int,TSizedDefaultAllocator<32>_> *)CONCAT44(local_7c8._4_4_,iVar29);
      local_730 = 0;
      local_728 = 0;
      local_750 = 0;
      uVar36 = uVar48;
      while( true ) {
        pFVar8 = local_580;
        fVar64 = 0.0;
        local_740 = pFVar45;
        if ((pFVar47->InitialLoops).Loops.ArrayNum != (int)uVar35) {
          local_7d7[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_7d7);
        }
        if (pFVar45 == pFVar8) break;
        uVar30 = pTVar40->ArrayNum;
        uVar35 = 0;
        local_7a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_7a0.ArrayNum = 0;
        local_7a0.ArrayMax = 0;
        if ((int)uVar30 < 1) {
          uVar43 = (uint)uVar48;
          if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
          }
        }
        else {
          iVar29 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,uVar30,&local_7a0.AllocatorInstance,&local_7a0.ArrayNum,
                              &local_7a0.ArrayMax);
          memset(local_7a0.AllocatorInstance.Data + (longlong)iVar29 * 4,0,
                 (longlong)(int)uVar30 << 2);
          pTVar46 = local_7b8;
          uVar48 = uVar35;
          do {
            uVar42 = (uint)uVar35;
            uVar43 = 0;
            if ((int)uVar42 < pTVar40->ArrayNum) {
              uVar43 = ~uVar42 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar27 = (*pcVar11)();
              return (bool)uVar27;
            }
            puVar32 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                             *)pTVar46,
                                            *(int *)((pTVar40->AllocatorInstance).Data + uVar48));
            local_7d0 = *puVar32;
            uVar43 = 0;
            if ((int)uVar42 < local_7a0.ArrayNum) {
              uVar43 = ~uVar42 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar26)) {
              pcVar11 = (code *)swi(3);
              uVar27 = (*pcVar11)();
              return (bool)uVar27;
            }
            uVar35 = (ulonglong)(uVar42 + 1);
            *(uint *)(local_7a0.AllocatorInstance.Data + uVar48) = local_7d0;
            uVar48 = uVar48 + 4;
            this = local_5d0;
            uVar36 = local_750;
            uVar43 = local_7d4;
          } while ((int)(uVar42 + 1) < (int)uVar30);
        }
        local_6f8._0_8_ = (FScriptContainerElement *)0x0;
        local_6f8._8_4_ = 0;
        local_6f8._12_4_ = 0;
        local_6f8._16_8_ = (FScriptContainerElement *)0x0;
        local_6f8._24_4_ = 0;
        local_6f8._28_4_ = 0;
        local_6f8._32_8_ = (FScriptContainerElement *)0x0;
        local_6f8._40_8_ = 0;
        local_6f8._48_8_ = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
        local_6f8._56_4_ = 0;
        local_6f8._60_4_ = 0;
        local_6b8.Data = (FScriptContainerElement *)0x0;
        local_6b0._0_4_ = 0;
        local_6b0._4_4_ = 0;
        local_6a8.Data = (FScriptContainerElement *)0x0;
        local_6a0._0_4_ = 0;
        local_6a0._4_4_ = 0;
        local_698.Data = (FScriptContainerElement *)0x0;
        local_690._0_4_ = 0;
        local_690._4_4_ = 0;
        if (this->IsPositiveOffset == false) {
          pTVar38 = &local_7a0;
          pTVar41 = pTVar40;
        }
        else {
          pTVar41 = &local_7a0;
          pTVar38 = pTVar40;
        }
        bVar26 = FDynamicMeshEditor::StitchVertexLoopsMinimal
                           (&local_790,pTVar41,pTVar38,(FDynamicMeshEditResult *)local_6f8);
        pTVar24 = local_5c8;
        if (bVar26) {
          uVar42 = ~uVar43 >> 0x1f;
          uVar30 = 0;
          if ((int)uVar43 < local_5c8->ArrayNum) {
            uVar30 = uVar42;
          }
          local_7d0 = uVar42;
          if ((uVar30 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar27 = (*pcVar11)();
            return (bool)uVar27;
          }
          FDynamicMeshEditResult::GetAllTriangles
                    ((FDynamicMeshEditResult *)local_6f8,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)
                     ((pTVar24->AllocatorInstance).Data + uVar36));
          pTVar24 = local_5c0;
          uVar30 = 0;
          if ((int)uVar43 < local_5c0->ArrayNum) {
            uVar30 = uVar42;
          }
          if ((uVar30 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar27 = (*pcVar11)();
            return (bool)uVar27;
          }
          FVar21.Data = local_6b8.Data;
          pFVar45 = (pTVar24->AllocatorInstance).Data + uVar36;
          if (pFVar45 != (FScriptContainerElement *)(local_6f8 + 0x40)) {
            iVar22 = (int)local_6b0;
            lVar44 = (longlong)(int)local_6b0;
            pFVar8 = pFVar45 + 0xc;
            iVar29 = *(int *)pFVar8;
            *(int *)&pFVar45[8].field_0x0 = (int)local_6b0;
            if (((int)local_6b0 == 0) && (iVar29 == 0)) {
              *(int *)pFVar8 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(int)local_6b0,iVar29,(ForAnyElementType *)pFVar45,(int)local_6b0,
                         (int *)pFVar8);
              if (iVar22 != 0) {
                memcpy(*(void **)&pFVar45->field_0x0,FVar21.Data,lVar44 << 2);
              }
            }
          }
          uVar35 = 0;
          if ((this->Mesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
            pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)(longlong)(int)local_6f8._40_4_;
            local_788._s_0.X =
                 (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            local_788._s_0.Y =
                 (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            dStack_770 = 0.0;
            uStack_768 = 0.0;
            local_788._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dStack_760 = dVar19;
            dStack_758 = dVar20;
            uVar36 = local_750;
            local_748 = pTVar38;
            if (0 < (int)local_6f8._40_4_) {
              uVar54 = 0;
              uVar55 = 0;
              dStack_760._0_4_ = SUB84(dVar19,0);
              uVar57 = (undefined4)((ulonglong)dVar19 >> 0x20);
              uVar62 = 0;
              uVar63 = 0;
              uStack_768 = 0.0;
              pTVar41 = pTVar38;
              uVar48 = uVar35;
              uVar56 = dStack_760._0_4_;
              uVar58 = uVar54;
              uVar59 = uVar55;
              uVar60 = dStack_760._0_4_;
              uVar61 = uVar57;
              dStack_760 = dVar19;
              while( true ) {
                uVar43 = (uint)uVar35;
                uVar42 = ~uVar43 >> 0x1f;
                uVar30 = 0;
                if ((int)uVar43 < (int)pTVar38) {
                  uVar30 = uVar42;
                }
                if ((uVar30 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar11 = (code *)swi(3);
                  uVar27 = (*pcVar11)();
                  return (bool)uVar27;
                }
                FDynamicMeshEditor::ComputeAndSetQuadNormal
                          (&local_790,(TVector<float> *)&local_7b0._s_0,
                           (FIndex2i *)(local_6f8._32_8_ + (longlong)(int)uVar43 * 8),true);
                uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar53 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                local_5b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                dStack_5a0 = 0.0;
                uStack_598 = 0.0;
                local_5b8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                local_5b8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                local_5b8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                local_5b8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uStack_590 = dVar19;
                dStack_588 = dVar20;
                if (uVar43 == 0) {
                  pFVar6 = this->Mesh;
                  if (pTVar40->ArrayNum < 2) {
                    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar26) {
                      pcVar11 = (code *)swi(3);
                      uVar27 = (*pcVar11)();
                      return (bool)uVar27;
                    }
                    uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                    uVar53 = (undefined4)
                             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                             0x20);
                  }
                  uVar30 = *(uint *)((pTVar40->AllocatorInstance).Data + 4);
                  pFVar10 = this->Mesh;
                  uVar36 = (ulonglong)(uVar30 & 0x1ff);
                  lVar44 = *(longlong *)
                            ((pFVar6->Vertices).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar30 >> 9) * 8);
                  pdVar3 = (double *)(lVar44 + uVar36 * 0x18);
                  local_500 = *pdVar3;
                  dStack_4f8 = pdVar3[1];
                  local_4f0 = *(double *)(lVar44 + 0x10 + uVar36 * 0x18);
                  if (pTVar40->ArrayNum < 1) {
                    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar26) {
                      pcVar11 = (code *)swi(3);
                      uVar27 = (*pcVar11)();
                      return (bool)uVar27;
                    }
                    uVar52 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                    uVar53 = (undefined4)
                             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >>
                             0x20);
                  }
                  uVar30 = *(uint *)(pTVar40->AllocatorInstance).Data;
                  uVar36 = (ulonglong)(uVar30 & 0x1ff);
                  lVar44 = *(longlong *)
                            ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar30 >> 9) * 8);
                  pdVar3 = (double *)(lVar44 + uVar36 * 0x18);
                  local_3e8 = *pdVar3;
                  dStack_3e0 = pdVar3[1];
                  local_3d8 = *(double *)(lVar44 + 0x10 + uVar36 * 0x18);
                  dVar14 = local_500 - local_3e8;
                  dVar16 = local_4f0 - local_3d8;
                  dVar15 = dStack_4f8 - dStack_3e0;
                  auVar49._0_8_ = dVar14 * dVar14;
                  auVar49._8_8_ = 0;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = dVar15 * dVar15 + auVar49._0_8_ + dVar16 * dVar16;
                  auVar50 = sqrtpd(auVar49,auVar12);
                  if (auVar50._0_8_ <= 0.0) {
                    local_608._s_0.X = 0.0;
                    local_608._s_0.Y = 0.0;
                    local_608._s_0.Z = 0.0;
                  }
                  else {
                    dVar13 = dVar18 / auVar50._0_8_;
                    local_608._s_0.X = dVar13 * dVar14;
                    local_608._s_0.Y = dVar13 * dVar15;
                    local_608._s_0.Z = dVar13 * dVar16;
                  }
                  local_4e8._s_0.X = (double)local_7b0._s_0.X;
                  local_4e8._s_0.Y = (double)local_7b0._s_0.Y;
                  local_4e8._s_0.Z = (double)local_7b0._s_0.Z;
                  TStack_550._s_0.X = 0.0;
                  local_418._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                  local_418._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                  local_418._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                  TStack_550._s_0.W = dVar18;
                  TStack_550._s_0.Y = 0.0;
                  TStack_550._s_0.Z = 0.0;
                  local_558 = (double)CONCAT44(uVar53,uVar52);
                  local_568 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                  uStack_564 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                  uStack_560 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                  uStack_55c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                  TQuaternion<double>::SetFromTo
                            ((TQuaternion<double> *)&TStack_550._s_0,
                             (TVector<double> *)&local_418._s_0,(TVector<double> *)&local_4e8._s_0);
                  local_788._s_0.X = (double)CONCAT44(uStack_564,local_568);
                  local_788._s_0.Y = (double)CONCAT44(uStack_55c,uStack_560);
                  dVar15 = TStack_550._s_0.Y + TStack_550._s_0.Y;
                  dVar14 = TStack_550._s_0.Z + TStack_550._s_0.Z;
                  dStack_758 = TStack_550._s_0.W;
                  uStack_768 = TStack_550._s_0.Y;
                  dStack_760 = TStack_550._s_0.Z;
                  local_788._s_0.Z = local_558;
                  dStack_770 = TStack_550._s_0.X;
                  dVar16 = (double)local_7b0._s_0.X;
                  local_4b8._s_0.X =
                       dVar18 - (TStack_550._s_0.Z * dVar14 + TStack_550._s_0.Y * dVar15);
                  dVar13 = (double)local_7b0._s_0.Y;
                  dVar17 = (double)local_7b0._s_0.Z;
                  local_4b8._s_0.Y = TStack_550._s_0.W * dVar14 + TStack_550._s_0.X * dVar15;
                  local_4b8._s_0.Z = TStack_550._s_0.X * dVar14 - TStack_550._s_0.W * dVar15;
                  local_4d0._s_0.X = dVar16;
                  local_4d0._s_0.Y = dVar13;
                  local_4d0._s_0.Z = dVar17;
                  VectorUtil::PlaneAngleSignedD<double>
                            ((TVector<double> *)&local_4b8._s_0,(TVector<double> *)&local_608._s_0,
                             (TVector<double> *)&local_4d0._s_0);
                  __libm_sse2_sincos_();
                  local_470._s_0.X = extraout_XMM0_Qa * dVar16;
                  local_470._s_0.Y = extraout_XMM0_Qa * dVar13;
                  local_470._s_0.Z = extraout_XMM0_Qa * dVar17;
                  TFrame3<double>::Rotate
                            ((TFrame3<double> *)&local_788._s_0,
                             (TQuaternion<double> *)&local_470._s_0);
                  uVar56 = SUB84(dStack_760,0);
                  uVar57 = (undefined4)((ulonglong)dStack_760 >> 0x20);
                  uVar62 = SUB84(dStack_770,0);
                  uVar63 = (undefined4)((ulonglong)dStack_770 >> 0x20);
                  dVar14 = dStack_760 + dStack_760;
                  local_5f0._s_0.X = (uStack_768 + uStack_768) * dStack_770 - dStack_758 * dVar14;
                  uStack_598 = uStack_768;
                  uStack_590 = dStack_760;
                  local_5f0._s_0.Y =
                       dVar18 - (dStack_770 * (dStack_770 + dStack_770) + dStack_760 * dVar14);
                  local_5b8._s_0.Z = local_788._s_0.Z;
                  dStack_5a0 = dStack_770;
                  local_5f0._s_0.Z = dStack_758 * (dStack_770 + dStack_770) + uStack_768 * dVar14;
                  local_5b8._s_0.X = local_788._s_0.X;
                  local_5b8._s_0.Y = local_788._s_0.Y;
                  dStack_588 = dStack_758;
                  pTVar41 = local_748;
                  uVar54 = (undefined4)uStack_768;
                  uVar55 = uStack_768._4_4_;
                  uVar58 = (undefined4)uStack_768;
                  uVar59 = uStack_768._4_4_;
                  uVar60 = uVar56;
                  uVar61 = uVar57;
                }
                else {
                  local_5b8._s_0.Z = local_788._s_0.Z;
                  dStack_5a0 = dStack_770;
                  local_5b8._s_0.X = local_788._s_0.X;
                  local_5b8._s_0.Y = local_788._s_0.Y;
                  dVar15 = (double)CONCAT44(uVar61,uVar60) + (double)CONCAT44(uVar61,uVar60);
                  dStack_588 = dStack_758;
                  dVar16 = (double)CONCAT44(uVar59,uVar58) + (double)CONCAT44(uVar59,uVar58);
                  local_4a0._s_0.Y = (double)local_7b0._s_0.Y;
                  local_4a0._s_0.X = (double)local_7b0._s_0.X;
                  dVar14 = (double)CONCAT44(uVar63,uVar62) + (double)CONCAT44(uVar63,uVar62);
                  local_4a0._s_0.Z = (double)local_7b0._s_0.Z;
                  uStack_598 = (double)CONCAT44(uVar55,uVar54);
                  uStack_590 = (double)CONCAT44(uVar57,uVar56);
                  local_488._s_0.X = (double)CONCAT44(uVar63,uVar62) * dVar15 + dStack_758 * dVar16;
                  local_488._s_0.Y = (double)CONCAT44(uVar59,uVar58) * dVar15 - dStack_758 * dVar14;
                  local_488._s_0.Z =
                       dVar18 - ((double)CONCAT44(uVar63,uVar62) * dVar14 +
                                (double)CONCAT44(uVar59,uVar58) * dVar16);
                  VectorUtil::PlaneAngleSignedD<double>
                            ((TVector<double> *)&local_488._s_0,(TVector<double> *)&local_4a0._s_0,
                             (TVector<double> *)&local_5f0._s_0);
                  __libm_sse2_sincos_();
                  local_450._s_0.W = (double)extraout_XMM0._8_8_;
                  dVar14 = extraout_XMM0._0_8_;
                  local_450._s_0.Y = dVar14 * local_5f0._s_0.Y;
                  local_450._s_0.X = dVar14 * local_5f0._s_0.X;
                  local_450._s_0.Z = dVar14 * local_5f0._s_0.Z;
                  TFrame3<double>::Rotate
                            ((TFrame3<double> *)&local_5b8._s_0,
                             (TQuaternion<double> *)&local_450._s_0);
                  if (0 < (int)uVar43) {
                    pFVar6 = this->Mesh;
                    uVar30 = 0;
                    if ((int)(uVar43 - 1) < pTVar40->ArrayNum) {
                      uVar30 = -uVar43 >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar26)) {
                      pcVar11 = (code *)swi(3);
                      uVar27 = (*pcVar11)();
                      return (bool)uVar27;
                    }
                    uVar30 = *(uint *)((pTVar40->AllocatorInstance).Data + uVar48 * 4 + -4);
                    pFVar10 = this->Mesh;
                    uVar36 = (ulonglong)(uVar30 & 0x1ff);
                    lVar44 = *(longlong *)
                              ((pFVar6->Vertices).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar30 >> 9) * 8);
                    pdVar3 = (double *)(lVar44 + uVar36 * 0x18);
                    local_530 = *pdVar3;
                    dStack_528 = pdVar3[1];
                    local_520 = *(double *)(lVar44 + 0x10 + uVar36 * 0x18);
                    uVar30 = 0;
                    if ((int)uVar43 < pTVar40->ArrayNum) {
                      uVar30 = uVar42;
                    }
                    if ((uVar30 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar26)) {
                      pcVar11 = (code *)swi(3);
                      uVar27 = (*pcVar11)();
                      return (bool)uVar27;
                    }
                    uVar30 = *(uint *)((pTVar40->AllocatorInstance).Data + uVar48 * 4);
                    uVar36 = (ulonglong)(uVar30 & 0x1ff);
                    lVar44 = *(longlong *)
                              ((pFVar10->Vertices).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar30 >> 9) * 8);
                    pdVar3 = (double *)(lVar44 + uVar36 * 0x18);
                    local_3d0 = *pdVar3;
                    dStack_3c8 = pdVar3[1];
                    local_3c0 = *(double *)(lVar44 + 0x10 + uVar36 * 0x18);
                    auVar51._8_8_ = dStack_3c8;
                    auVar51._0_8_ = dStack_3c8;
                    auVar50._8_8_ = 0;
                    auVar50._0_8_ =
                         (dStack_528 - dStack_3c8) * (dStack_528 - dStack_3c8) +
                         (local_530 - local_3d0) * (local_530 - local_3d0) +
                         (local_520 - local_3c0) * (local_520 - local_3c0);
                    auVar50 = sqrtpd(auVar51,auVar50);
                    fVar64 = fVar64 + (float)auVar50._0_8_;
                    pTVar41 = local_748;
                  }
                }
                fVar5 = this->UVScaleFactor;
                local_70c[0]._0_4_ = fVar5 * fVar64;
                local_70c[0]._s_0.Y = 0.0;
                uVar30 = 0;
                if ((int)uVar43 < (int)local_6f8._40_4_) {
                  uVar30 = uVar42;
                }
                if ((uVar30 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar11 = (code *)swi(3);
                  uVar27 = (*pcVar11)();
                  return (bool)uVar27;
                }
                FDynamicMeshEditor::SetQuadUVsFromProjection
                          (&local_790,(FIndex2i *)(local_6f8._32_8_ + (longlong)(int)uVar43 * 8),
                           (TFrame3<double> *)&local_5b8._s_0,fVar5,
                           (TVector2<float> *)&local_70c[0]._s_0,0);
                uVar35 = (ulonglong)(uVar43 + 1);
                uVar48 = uVar48 + 1;
                uVar36 = local_750;
                if ((longlong)pTVar41 <= (longlong)uVar48) break;
                pTVar38 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_6f8._40_8_ & 0xffffffff)
                ;
              }
            }
          }
          pTVar23 = local_5d8;
          uVar43 = local_7d4;
          uVar30 = 0;
          if ((int)local_7d4 < local_5d8->ArrayNum) {
            uVar30 = local_7d0;
          }
          if ((uVar30 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar11 = (code *)swi(3);
            uVar27 = (*pcVar11)();
            return (bool)uVar27;
          }
          lVar44 = local_728;
          this_01 = (FEdgeLoop *)((pTVar23->AllocatorInstance).Data + local_728);
          this_01->Mesh = this->Mesh;
          FEdgeLoop::InitializeFromVertices(this_01,&local_7a0,true);
          local_728 = lVar44;
        }
        local_730 = local_730 + 1;
        local_7d4 = uVar43 + 1;
        uVar48 = (ulonglong)local_7d4;
        uVar36 = uVar36 + 0x10;
        local_728 = local_728 + 0x40;
        local_750 = uVar36;
        if (local_698.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_698.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6a8.Data,(int)local_6a0);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6a8.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_6a8.Data);
        }
        if (local_6b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6b8.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6f8._48_8_,local_6f8._56_4_);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6f8._48_8_ !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free((void *)local_6f8._48_8_);
        }
        if ((FScriptContainerElement *)local_6f8._32_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_6f8._32_8_);
        }
        if ((FScriptContainerElement *)local_6f8._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_6f8._16_8_);
        }
        if ((FScriptContainerElement *)local_6f8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_6f8._0_8_);
        }
        if (local_7a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7a0.AllocatorInstance.Data);
        }
        pFVar45 = local_740 + 0x40;
        pTVar40 = pTVar40 + 4;
        uVar35 = (ulonglong)local_7c8 & 0xffffffff;
        pFVar47 = local_720;
      }
      if (local_688.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_688.NewColorOverlayElements.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_688.NewNormalOverlayElements.AllocatorInstance.Data,
                 local_688.NewNormalOverlayElements.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)
          local_688.NewNormalOverlayElements.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_688.NewNormalOverlayElements.AllocatorInstance.Data);
      }
      if (local_688.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.NewGroups.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_688.NewPolygons.AllocatorInstance.Data,local_688.NewPolygons.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_688.NewPolygons.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_688.NewPolygons.AllocatorInstance.Data);
      }
      if (local_688.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.NewQuads.AllocatorInstance.Data);
      }
      if (local_688.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.NewTriangles.AllocatorInstance.Data);
      }
      if (local_688.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.NewVertices.AllocatorInstance.Data);
      }
      FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_3a8);
    }
    bVar26 = true;
  }
  return bVar26;
}

// Validate @ 14c77bf90

EOperationValidationResult __thiscall UE::Geometry::FExtrudeMesh::Validate(FExtrudeMesh *this)

{
  return Ok;
}

