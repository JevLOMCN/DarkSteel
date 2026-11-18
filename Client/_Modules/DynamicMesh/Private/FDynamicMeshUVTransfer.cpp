// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 11

// FDynamicMeshUVTransfer @ 14c896b80

FDynamicMeshUVTransfer * __thiscall
UE::Geometry::FDynamicMeshUVTransfer::FDynamicMeshUVTransfer
          (FDynamicMeshUVTransfer *this,FDynamicMesh3 *param_1,FDynamicMesh3 *param_2,int param_3,
          int param_4)

{
  int iVar1;
  int iVar2;
  
  this->DestinationMesh = param_2;
  this->SourceMesh = param_1;
  this->bClearExistingSeamsInDestination = true;
  iVar2 = 7;
  if (param_3 < 7) {
    iVar2 = param_3;
  }
  (this->HashGrid).Ptr = (TPointHashGrid3<int,double> *)0x0;
  *(undefined8 *)&this->SourceVidToDestinationVid = 0;
  *(undefined8 *)&(this->SourceVidToDestinationVid).field_0x8 = 0;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->UVLayerIndex = iVar1;
  iVar2 = 7;
  if (param_4 < 7) {
    iVar2 = param_4;
  }
  *(undefined8 *)&(this->SourceVidToDestinationVid).field_0x20 = 0;
  this->SourceSelectionTids = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  this->DestinationSelectionTids = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->DestUVLayerIndex = iVar1;
  this->VertexSearchDistance = 9.999999747378752e-05;
  this->VertexSearchCellSize = 0.00029999999242136255;
  this->PathSimilarityWeight = 200.0;
  this->SourceOverlay = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  this->DestOverlay = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0;
  *(undefined4 *)&(this->SourceVidToDestinationVid).field_0x28 = 0;
  *(undefined4 *)&(this->SourceVidToDestinationVid).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceVidToDestinationVid).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceVidToDestinationVid).field_0x34 = 0;
  *(undefined8 *)&(this->SourceVidToDestinationVid).field_0x40 = 0;
  *(undefined4 *)&(this->SourceVidToDestinationVid).field_0x48 = 0;
  *(undefined8 *)&this->SourceEidToDestinationEndpointEidsVids = 0;
  *(undefined8 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x8 = 0;
  *(undefined8 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x20 = 0;
  *(undefined4 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x28 = 0;
  *(undefined4 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x34 = 0;
  *(undefined8 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x40 = 0;
  *(undefined4 *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x48 = 0;
  *(undefined8 *)&(this->SourceBoundaryElements).Elements = 0;
  *(undefined8 *)&(this->SourceBoundaryElements).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SourceBoundaryElements).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SourceBoundaryElements).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SourceBoundaryElements).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceBoundaryElements).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceBoundaryElements).Elements.field_0x34 = 0;
  (this->SourceBoundaryElements).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SourceBoundaryElements).HashSize = 0;
  this->PathLengthToleranceMultiplier = 4.0;
  this->MinimalPathSearchDistance = 20.0;
  return this;
}

// operator() @ 14c8a4ae0

bool __thiscall
`UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int local_res10 [2];
  char local_res18;
  int local_res20 [2];
  int local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50 [3];
  
  if (param_1 != -1) {
    local_res18 = '\0';
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               local_res20,(bool *)local_res10);
    if (local_res18 == '\0') {
      iVar9 = *(int *)(*(longlong *)
                        (*(longlong *)&(*(FDynamicMeshUVTransfer **)this)->SourceOverlay->field_0x60
                        + (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
      if (iVar9 == -1) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5812595179747541472>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVTransfer.cpp"
                           ,0x1e0,"ParentSourceVid != IndexConstants::InvalidID");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      else {
        iVar9 = UE::Geometry::FDynamicMeshUVTransfer::GetCorrespondingDestVid
                          (*(FDynamicMeshUVTransfer **)this,iVar9);
        if (iVar9 != -1) {
          local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50[0].ArrayNum = 0;
          local_50[0].ArrayMax = 0;
          UE::Geometry::TDynamicMeshOverlay<float,2>::GetVertexElements
                    (*(TDynamicMeshOverlay<float,2> **)(*(longlong *)this + 0x50),iVar9,local_50);
          if (local_50[0].ArrayNum < 2) {
            lVar4 = *(longlong *)(*(longlong *)this + 0x50);
            lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x48) + 0x48);
            uVar1 = *(undefined4 *)
                     (*(longlong *)(lVar5 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_1 * 2 & 0x1ff) * 4);
            uVar2 = *(undefined4 *)
                     (*(longlong *)(lVar5 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
                     (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4);
            if ((local_50[0].ArrayNum < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                       ((longlong)this + 0x10);
            uVar3 = *(uint *)local_50[0].AllocatorInstance.Data;
            *(undefined4 *)
             (*(longlong *)
               (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
             (ulonglong)(uVar3 * 2 & 0x1ff) * 4) = uVar1;
            *(undefined4 *)
             (*(longlong *)
               (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8) +
             (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4) = uVar2;
            if ((local_50[0].ArrayNum < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (this_00,local_58,(bool *)local_50[0].AllocatorInstance.Data);
          }
          if (local_50[0].AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return true;
          }
          FMemory::Free(local_50[0].AllocatorInstance.Data);
          return true;
        }
      }
      return false;
    }
  }
  return true;
}

// operator() @ 14c8a4d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::FDynamicMeshUVTransfer::PerformSeamTransfer'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  bool bVar29;
  undefined1 uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  undefined8 *puVar34;
  longlong *plVar35;
  ForAnyElementType FVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStackY_3a8 [32];
  undefined1 local_368 [8];
  uint local_360 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_358;
  TArray<int,TSizedDefaultAllocator<32>_> local_348;
  TArray<UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FSeedPoint,TSizedDefaultAllocator<32>_>
  local_338;
  undefined8 local_328;
  uint local_320;
  int local_31c;
  uint local_318 [2];
  uint local_310 [4];
  undefined8 local_300;
  undefined4 local_2f0;
  int local_2ec;
  int local_2e8;
  TPairInitializer<int_const_&,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_&&> local_2e4;
  uint local_2d4;
  ulonglong local_2d0;
  uint *local_2c8;
  undefined1 *local_2c0;
  longlong local_2b8;
  double dStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  FScriptContainerElement *local_278;
  int iStack_270;
  int iStack_26c;
  double local_268;
  double local_258;
  double dStack_250;
  double local_248;
  code *local_238;
  undefined8 uStack_230;
  longlong local_228 [4];
  undefined1 local_208 [320];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_360[0] = param_1;
  bVar29 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                     (*(TDynamicMeshOverlay<float,2> **)(*(longlong *)this + 0x48),param_1,
                      (bool *)0x0);
  if (bVar29) {
    uVar4 = *(ulonglong *)
             (*(longlong *)
               (((*(FDynamicMeshUVTransfer **)this)->SourceMesh->Edges).Blocks.AllocatorInstance.
                Data + (ulonglong)(local_360[0] >> 9) * 8) +
             (ulonglong)(local_360[0] & 0x1ff) * 0x10);
    uVar33 = (uint)uVar4;
    local_2e4._4_8_ = uVar4;
    iVar31 = UE::Geometry::FDynamicMeshUVTransfer::GetCorrespondingDestVid
                       (*(FDynamicMeshUVTransfer **)this,uVar33);
    if (iVar31 != -1) {
      uVar39 = (uint)local_2e4.Value;
      iVar32 = UE::Geometry::FDynamicMeshUVTransfer::GetCorrespondingDestVid
                         (*(FDynamicMeshUVTransfer **)this,(uint)local_2e4.Value);
      dVar22 = __real_3ff0000000000000;
      if (iVar32 != -1) {
        plVar5 = *(longlong **)this;
        lVar38 = *plVar5;
        lVar6 = *(longlong *)(*(longlong *)(lVar38 + 0x1c0) + (ulonglong)(local_360[0] >> 9) * 8);
        if (*(int *)(lVar6 + 0xc + (ulonglong)(local_360[0] & 0x1ff) * 0x10) != -1) {
          lVar6 = *(longlong *)(*(longlong *)(lVar38 + 0x10) + ((uVar4 & 0xffffffff) >> 9) * 8);
          pdVar1 = (double *)(lVar6 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
          dVar20 = *pdVar1;
          dVar21 = pdVar1[1];
          local_268 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
          uVar43 = SUB84(local_268,0);
          uVar44 = (undefined4)((ulonglong)local_268 >> 0x20);
          uVar37 = (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff);
          lVar38 = *(longlong *)(*(longlong *)(lVar38 + 0x10) + (uVar4 >> 0x29) * 8);
          pdVar1 = (double *)(lVar38 + uVar37 * 0x18);
          local_258 = *pdVar1;
          dStack_250 = pdVar1[1];
          local_248 = *(double *)(lVar38 + 0x10 + uVar37 * 0x18);
          dVar15 = local_258 - dVar20;
          dVar14 = dStack_250 - dVar21;
          dVar11 = local_248 - local_268;
          dVar12 = SQRT(dVar14 * dVar14 + dVar15 * dVar15 + dVar11 * dVar11);
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (__real_3e45798ee0000000 < dVar12) {
            dVar13 = __real_3ff0000000000000 / dVar12;
            uVar17 = dVar15 * dVar13;
            uVar18 = dVar14 * dVar13;
            uVar19 = dVar13 * dVar11;
          }
          uVar42 = (undefined4)((ulonglong)uVar18 >> 0x20);
          UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
          TMeshDijkstra<UE::Geometry::FDynamicMesh3>
                    ((TMeshDijkstra<UE::Geometry::FDynamicMesh3> *)local_208,
                     (FDynamicMesh3 *)plVar5[1]);
          lVar38 = *(longlong *)this;
          local_338.ArrayNum = 0;
          local_338.ArrayMax = 0;
          local_338.AllocatorInstance.Data._4_4_ = iVar31;
          local_338.AllocatorInstance.Data._0_4_ = iVar31;
          dVar11 = __real_7fefffffffffffff;
          if (dVar22 < *(double *)(lVar38 + 0x150)) {
            dVar12 = *(double *)(lVar38 + 0x150) * dVar12;
            if (0.0 < *(double *)(lVar38 + 0x28)) {
              dVar12 = dVar12 * (*(double *)(lVar38 + 0x28) + dVar22);
            }
            dVar11 = *(double *)(lVar38 + 0x158);
            if (*(double *)(lVar38 + 0x158) <= dVar12) {
              dVar11 = dVar12;
            }
          }
          if ((0.0 < *(double *)(lVar38 + 0x28)) &&
             ((((double)uVar17 != 0.0 || ((double)uVar18 != 0.0)) || ((double)uVar19 != 0.0)))) {
            uVar40 = (undefined4)*(undefined8 *)((longlong)this + 0x10);
            uVar41 = (undefined4)((ulonglong)*(undefined8 *)((longlong)this + 0x10) >> 0x20);
            local_208[0x40] = true;
            local_238 = (code *)0x0;
            local_2b8 = lVar38;
            dStack_2b0 = dVar20;
            uStack_2a8 = dVar21;
            puVar34 = FMemory::Malloc(0x48,8);
            uVar28 = local_208._108_4_;
            uVar27 = local_208._104_4_;
            uVar26 = local_208._100_4_;
            uVar25 = local_208._96_4_;
            uVar24 = local_208._88_8_;
            uVar23 = local_208._80_8_;
            *puVar34 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<``UE::Geometry::FDynamicMeshUVTransfer::PerformSeamTransfer'::`2'::<lambda_1>::operator()'::`29'::<lambda_1>,1,1>
                        ::_vftable_;
            puVar34[1] = local_2b8;
            puVar34[2] = dStack_2b0;
            *(undefined4 *)(puVar34 + 3) = (undefined4)uStack_2a8;
            *(undefined4 *)((longlong)puVar34 + 0x1c) = uStack_2a8._4_4_;
            *(undefined4 *)(puVar34 + 4) = uVar43;
            *(undefined4 *)((longlong)puVar34 + 0x24) = uVar44;
            auVar9._8_4_ = (int)uVar18;
            auVar9._0_8_ = uVar17;
            auVar9._12_4_ = uVar42;
            *(undefined1 (*) [16])(puVar34 + 5) = auVar9;
            auVar10._8_4_ = uVar40;
            auVar10._0_8_ = uVar19;
            auVar10._12_4_ = uVar41;
            *(undefined1 (*) [16])(puVar34 + 7) = auVar10;
            if (puVar34 + 1 != (longlong *)0x0) {
              local_238 = UE::Core::Private::Function::
                          TFunctionRefCaller<``UE::Geometry::FDynamicMeshUVTransfer::PerformSeamTransfer'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,double,int,int,int,double>
                          ::Call;
            }
            plVar5 = (longlong *)CONCAT44(local_208._124_4_,local_208._120_4_);
            local_298._8_4_ = (int)uVar18;
            local_298._0_8_ = uVar17;
            local_298._12_4_ = uVar42;
            local_208._80_8_ = local_238;
            local_208._88_8_ = uStack_230;
            local_228[3]._0_4_ = SUB84(puVar34,0);
            local_228[3]._4_4_ = (undefined4)((ulonglong)puVar34 >> 0x20);
            local_208._112_4_ = (undefined4)local_228[2];
            local_208._116_4_ = local_228[2]._4_4_;
            local_208._120_4_ = (undefined4)local_228[3];
            local_208._124_4_ = local_228[3]._4_4_;
            local_238 = (code *)uVar23;
            uStack_230 = uVar24;
            local_288._8_4_ = uVar40;
            local_288._0_8_ = uVar19;
            local_288._12_4_ = uVar41;
            local_208._96_4_ = (undefined4)local_228[0];
            local_208._100_4_ = local_228[0]._4_4_;
            local_208._104_4_ = (undefined4)local_228[1];
            local_208._108_4_ = local_228[1]._4_4_;
            local_228[0]._0_4_ = uVar25;
            local_228[0]._4_4_ = uVar26;
            local_228[1]._0_4_ = uVar27;
            local_228[1]._4_4_ = uVar28;
            uStack_2a0 = uVar43;
            uStack_29c = uVar44;
            if ((code *)uVar23 != (code *)0x0) {
              plVar35 = local_228;
              if (plVar5 != (longlong *)0x0) {
                plVar35 = plVar5;
              }
              (**(code **)(*plVar35 + 0x10))();
            }
          }
          uVar17 = local_338._8_8_;
          FVar36.Data = local_338.AllocatorInstance.Data;
          iVar31 = 1;
          local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,0,&local_338.AllocatorInstance,1,&local_338.ArrayMax);
          uVar18 = local_338._8_8_;
          local_278 = FVar36.Data;
          local_338.ArrayNum = (int)uVar17;
          local_338.ArrayMax = SUB84(uVar17,4);
          iStack_270 = local_338.ArrayNum;
          iStack_26c = local_338.ArrayMax;
          *(FScriptContainerElement **)local_338.AllocatorInstance.Data = FVar36.Data;
          *(undefined8 *)(local_338.AllocatorInstance.Data + 8) = uVar17;
          local_338._8_8_ = uVar18;
          bVar29 = UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::ComputeToTargetPoint
                             ((TMeshDijkstra<UE::Geometry::FDynamicMesh3> *)local_208,&local_338,
                              iVar32,dVar11);
          if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.AllocatorInstance.Data);
          }
          if (!bVar29) {
            UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
            ~TMeshDijkstra<UE::Geometry::FDynamicMesh3>
                      ((TMeshDijkstra<UE::Geometry::FDynamicMesh3> *)local_208);
            return false;
          }
          local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.ArrayNum = 0;
          local_348.ArrayMax = 0;
          UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::FindPathToNearestSeed
                    ((TMeshDijkstra<UE::Geometry::FDynamicMesh3> *)local_208,iVar32,&local_348,
                     100000);
          local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_358.ArrayNum = 0;
          local_358.ArrayMax = 0;
          UE::Geometry::FEdgeSpan::VertexSpanToEdgeSpan
                    (*(FDynamicMesh3 **)(*(longlong *)this + 8),&local_348,&local_358);
          FVar36.Data = local_358.AllocatorInstance.Data;
          iVar32 = local_358.ArrayNum;
          if (local_358.ArrayNum < 1) {
            bVar29 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5812595179747541262>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVTransfer.cpp"
                                ,0x10e,"DestEidPath.Num() > 0");
            if (bVar29) {
              pcVar8 = (code *)swi(3);
              uVar30 = (*pcVar8)();
              return (bool)uVar30;
            }
            bVar29 = false;
          }
          else {
            if (*(longlong *)(*(longlong *)this + 0x40) != 0) {
              pFVar2 = local_358.AllocatorInstance.Data + (longlong)local_358.ArrayNum * 4;
LAB_14c8a56f0:
              if (local_358.ArrayNum != iVar32) {
                local_368[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_368);
              }
              if (FVar36.Data == pFVar2) goto LAB_14c8a552b;
              local_318[0] = *(uint *)FVar36.Data;
              plVar5 = *(longlong **)(*(longlong *)this + 0x40);
              uVar4 = *(ulonglong *)
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x1c0) +
                         (ulonglong)(local_318[0] >> 9) * 8) + 8 +
                       (ulonglong)(local_318[0] & 0x1ff) * 0x10);
              local_328 = uVar4;
              if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
                plVar35 = plVar5 + 7;
                if ((longlong *)plVar5[8] != (longlong *)0x0) {
                  plVar35 = (longlong *)plVar5[8];
                }
                iVar31 = *(int *)((longlong)plVar35 +
                                 ((ulonglong)((int)plVar5[9] - 1) & uVar4 & 0xffffffff) * 4);
                if (iVar31 != -1) {
                  do {
                    if (*(int *)(*plVar5 + (longlong)iVar31 * 0xc) == (int)uVar4)
                    goto LAB_14c8a57ee;
                    iVar31 = *(int *)(*plVar5 + 4 + (longlong)iVar31 * 0xc);
                  } while (iVar31 != -1);
                }
              }
              local_328._4_4_ = (uint)(uVar4 >> 0x20);
              if ((local_328._4_4_ != 0xffffffff) &&
                 (plVar5 = *(longlong **)(*(longlong *)this + 0x40),
                 (int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34))) {
                plVar35 = plVar5 + 7;
                if ((longlong *)plVar5[8] != (longlong *)0x0) {
                  plVar35 = (longlong *)plVar5[8];
                }
                iVar31 = *(int *)((longlong)plVar35 +
                                 (ulonglong)((int)plVar5[9] - 1U & local_328._4_4_) * 4);
                if (iVar31 == -1) goto LAB_14c8a5802;
                do {
                  if (*(uint *)(*plVar5 + (longlong)iVar31 * 0xc) == local_328._4_4_)
                  goto LAB_14c8a57ee;
                  iVar31 = *(int *)(*plVar5 + 4 + (longlong)iVar31 * 0xc);
                } while (iVar31 != -1);
                FVar36.Data = FVar36.Data + 4;
                goto LAB_14c8a56f0;
              }
              goto LAB_14c8a5802;
            }
            this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                       ((longlong)this + 8);
            lVar38 = (longlong)local_358.ArrayNum;
            uVar33 = *(int *)&(this_00->Elements).field_0x8 -
                     *(int *)&(this_00->Elements).field_0x34;
            uVar39 = uVar33 + local_358.ArrayNum;
            if (uVar33 < uVar39) {
              if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar39);
              }
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,uVar39);
              if (3 < uVar39) {
                uVar4 = (ulonglong)((uVar39 >> 1) + 7) * 2 + 1;
                lVar6 = 0x3f;
                if (uVar4 != 0) {
                  for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                local_2f0 = (undefined4)lVar6;
                iVar31 = 1 << ((byte)lVar6 & 0x1f);
              }
              if ((this_00->HashSize == 0) || (this_00->HashSize < iVar31)) {
                this_00->HashSize = iVar31;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
              }
            }
            pFVar2 = FVar36.Data + lVar38 * 4;
            for (; FVar36.Data != pFVar2; FVar36.Data = FVar36.Data + 4) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (this_00,&local_2ec,(bool *)FVar36.Data);
            }
LAB_14c8a552b:
            lVar38 = *(longlong *)this;
            if (local_348.ArrayNum < 1) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar8 = (code *)swi(3);
                uVar30 = (*pcVar8)();
                return (bool)uVar30;
              }
            }
            uVar43 = *(undefined4 *)local_348.AllocatorInstance.Data;
            uVar33 = 0;
            if ((int)(local_348.ArrayNum - 1U) < local_348.ArrayNum) {
              uVar33 = ~(local_348.ArrayNum - 1U) >> 0x1f;
            }
            iVar31 = local_348.ArrayNum;
            if (uVar33 == 0) {
              bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar29) {
                pcVar8 = (code *)swi(3);
                uVar30 = (*pcVar8)();
                return (bool)uVar30;
              }
              iVar31 = local_348.ArrayNum;
            }
            local_328 = CONCAT44(uVar43,*(undefined4 *)
                                         (local_348.AllocatorInstance.Data +
                                         (longlong)(iVar31 + -1) * 4));
            if ((local_358.ArrayNum < 1) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar8 = (code *)swi(3);
              uVar30 = (*pcVar8)();
              return (bool)uVar30;
            }
            uVar33 = *(uint *)local_358.AllocatorInstance.Data;
            uVar39 = 0;
            if ((int)(local_358.ArrayNum - 1U) < local_358.ArrayNum) {
              uVar39 = ~(local_358.ArrayNum - 1U) >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar8 = (code *)swi(3);
              uVar30 = (*pcVar8)();
              return (bool)uVar30;
            }
            local_2e4.Value._4_4_ =
                 *(undefined4 *)
                  (local_358.AllocatorInstance.Data + (longlong)(local_358.ArrayNum + -1) * 4);
            local_2d0 = local_328;
            local_2c8 = local_360;
            local_2c0 = (undefined1 *)((longlong)&local_2e4.Value + 4);
            local_2d4 = uVar33;
            TSet<TTuple<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<int_const_&,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_&&>_>
                      ((TSet<TTuple<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,0>,FDefaultSetAllocator>
                        *)(lVar38 + 0xb0),&local_2e4,(bool *)&local_2c8);
            bVar29 = true;
          }
          if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.AllocatorInstance.Data);
          }
          if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.AllocatorInstance.Data);
          }
          UE::Geometry::TMeshDijkstra<UE::Geometry::FDynamicMesh3>::
          ~TMeshDijkstra<UE::Geometry::FDynamicMesh3>
                    ((TMeshDijkstra<UE::Geometry::FDynamicMesh3> *)local_208);
          return bVar29;
        }
        uVar3 = *(uint *)(lVar6 + 8 + (ulonglong)(local_360[0] & 0x1ff) * 0x10);
        lVar6 = plVar5[9];
        lVar38 = *(longlong *)(*(longlong *)(lVar38 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
        uVar16 = uVar3 * 3;
        lVar7 = *(longlong *)(lVar6 + 0x78);
        local_300 = *(undefined8 *)(lVar38 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
        uVar3 = *(uint *)(lVar38 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
        local_310[0] = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar16 >> 9) * 8) +
                                (ulonglong)(uVar16 & 0x1ff) * 4);
        local_310[1] = *(undefined4 *)
                        (*(longlong *)(lVar7 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
        local_310[2] = *(undefined4 *)
                        (*(longlong *)(lVar7 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                        (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
        local_320 = (uint)local_300;
        iVar31 = 0;
        if ((((uint)local_300 == uVar33) ||
            (iVar31 = 1, (uint)((ulonglong)local_300 >> 0x20) == uVar33)) ||
           (iVar31 = 2, uVar3 == uVar33)) {
          uVar33 = local_310[iVar31];
          if (((-1 < (int)uVar33) &&
              ((int)uVar33 < *(int *)(lVar6 + 8) * 0x200 + *(int *)(lVar6 + 0xc))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar33 >> 9) * 8) +
                                 (ulonglong)(uVar33 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(plVar5 + 0x20),
                       &local_31c,(bool *)(local_310 + iVar31));
          }
        }
        else {
          bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5812595179747541200>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVTransfer.cpp"
                              ,0xd0,"SubIdx >= 0");
          if (bVar29) {
            pcVar8 = (code *)swi(3);
            uVar30 = (*pcVar8)();
            return (bool)uVar30;
          }
        }
        iVar31 = 0;
        if (((local_320 == uVar39) || (iVar31 = 1, local_300._4_4_ == uVar39)) ||
           (iVar31 = 2, uVar3 == uVar39)) {
          uVar33 = local_310[iVar31];
          lVar38 = *(longlong *)(*(longlong *)this + 0x48);
          if (((-1 < (int)uVar33) &&
              ((int)uVar33 < *(int *)(lVar38 + 8) * 0x200 + *(int *)(lVar38 + 0xc))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar38 + 0x10) + (ulonglong)(uVar33 >> 9) * 8) +
                                 (ulonglong)(uVar33 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       (*(longlong *)this + 0x100),&local_31c,(bool *)(local_310 + iVar31));
          }
        }
        else {
          bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5812595179747541200>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVTransfer.cpp"
                              ,0xd0,"SubIdx >= 0");
          if (bVar29) {
            pcVar8 = (code *)swi(3);
            uVar30 = (*pcVar8)();
            return (bool)uVar30;
          }
        }
        goto LAB_14c8a5008;
      }
    }
    bVar29 = false;
  }
  else {
LAB_14c8a5008:
    bVar29 = true;
  }
  return bVar29;
LAB_14c8a57ee:
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
             &local_2e8,(bool *)local_318);
  uVar4 = local_328;
LAB_14c8a5802:
  local_328 = uVar4;
  FVar36.Data = FVar36.Data + 4;
  goto LAB_14c8a56f0;
}

// operator() @ 14c8a5830

void __thiscall
`UE::Geometry::FDynamicMeshUVTransfer::ResetDestinationUVTopology'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  longlong *plVar11;
  uint *puVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_res18;
  FIndex3i_u_0 local_68;
  undefined8 local_58;
  uint *local_48;
  uint *local_40;
  
  lVar2 = *(longlong *)this;
  puVar12 = (uint *)0x0;
  uVar8 = param_1 * 3;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_58 = *(undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar1 = *(uint *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x78);
  uVar6 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  uVar7 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                   (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
  local_res8[0] = (uint)local_58;
  uVar8 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                   (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
  plVar4 = *(longlong **)((longlong)this + 8);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar11 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar11 = plVar4 + 7;
    }
    uVar5 = *(uint *)((longlong)plVar11 + (ulonglong)((int)plVar4[9] - 1U & (uint)local_58) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar5 * 0x10 + *plVar4);
        if (*puVar10 == (uint)local_58) {
          puVar9 = puVar10 + 1;
          if (puVar10 == (uint *)0x0) {
            puVar9 = puVar12;
          }
          if (puVar9 != (uint *)0x0) {
            local_68._s_0.A = *puVar9;
            goto LAB_14c8a5976;
          }
          break;
        }
        uVar5 = puVar10[2];
      } while (uVar5 != 0xffffffff);
    }
  }
  if ((int)uVar6 < 0) {
    local_res18.Value = (int *)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    uVar6 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                      (*(TDynamicMeshOverlay<float,2> **)(lVar2 + 0x50),(float *)&local_res18.Value)
    ;
  }
  local_48 = local_res8;
  local_40 = local_res10;
  local_res10[0] = uVar6;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              ((longlong)this + 8),&local_res18,(bool *)&local_48);
  local_68._0_4_ = local_res10[0];
LAB_14c8a5976:
  plVar4 = *(longlong **)((longlong)this + 8);
  local_res8[0] = local_58._4_4_;
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar11 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar11 = plVar4 + 7;
    }
    uVar6 = *(uint *)((longlong)plVar11 + (ulonglong)((int)plVar4[9] - 1U & local_58._4_4_) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar6 * 0x10 + *plVar4);
        if (*puVar10 == local_58._4_4_) {
          puVar9 = puVar10 + 1;
          if (puVar10 == (uint *)0x0) {
            puVar9 = puVar12;
          }
          if (puVar9 != (uint *)0x0) {
            local_68._s_0.B = *puVar9;
            goto LAB_14c8a5a18;
          }
          break;
        }
        uVar6 = puVar10[2];
      } while (uVar6 != 0xffffffff);
    }
  }
  if ((int)uVar7 < 0) {
    local_res18.Value = (int *)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    uVar7 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                      (*(TDynamicMeshOverlay<float,2> **)(*(longlong *)this + 0x50),
                       (float *)&local_res18.Value);
  }
  local_48 = local_res8;
  local_40 = local_res10;
  local_res10[0] = uVar7;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              ((longlong)this + 8),&local_res18,(bool *)&local_48);
  local_68._4_4_ = local_res10[0];
LAB_14c8a5a18:
  plVar4 = *(longlong **)((longlong)this + 8);
  local_res8[0] = uVar1;
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar11 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar11 = plVar4 + 7;
    }
    uVar6 = *(uint *)((longlong)plVar11 + (ulonglong)((int)plVar4[9] - 1U & uVar1) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar6 * 0x10 + *plVar4);
        if (*puVar10 == uVar1) {
          puVar9 = puVar10 + 1;
          if (puVar10 == (uint *)0x0) {
            puVar9 = puVar12;
          }
          if (puVar9 != (uint *)0x0) {
            local_68._s_0.C = *puVar9;
            goto LAB_14c8a5ab8;
          }
          break;
        }
        uVar6 = puVar10[2];
      } while (uVar6 != 0xffffffff);
    }
  }
  if ((int)uVar8 < 0) {
    local_res18.Value = (int *)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    uVar8 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement
                      (*(TDynamicMeshOverlay<float,2> **)(*(longlong *)this + 0x50),
                       (float *)&local_res18.Value);
  }
  local_48 = local_res8;
  local_40 = local_res10;
  local_res10[0] = uVar8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> **)
              ((longlong)this + 8),&local_res18,(bool *)&local_48);
  local_68._8_4_ = local_res10[0];
LAB_14c8a5ab8:
  UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
            (*(TDynamicMeshOverlay<float,2> **)(*(longlong *)this + 0x50),param_1,
             (FIndex3i *)&local_68._s_0,true);
  return;
}

// GetCorrespondingDestVid @ 14c8f2870

int __thiscall
UE::Geometry::FDynamicMeshUVTransfer::GetCorrespondingDestVid
          (FDynamicMeshUVTransfer *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [2];
  FDynamicMeshUVTransfer *local_68;
  TVector<double>_u_0 *local_60;
  code *local_58;
  TPairInitializer<int_const_&,int_const_&> *local_50;
  undefined1 local_48 [16];
  TTuple<int,double> local_38;
  TVector<double>_u_0 local_28;
  
  if (*(int *)&(this->SourceVidToDestinationVid).field_0x8 !=
      *(int *)&(this->SourceVidToDestinationVid).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SourceVidToDestinationVid).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SourceVidToDestinationVid).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->SourceVidToDestinationVid).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 +
                        *(longlong *)&(this->SourceVidToDestinationVid).field_0x0);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 1;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            return *piVar4;
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  lVar2 = *(longlong *)
           ((this->SourceMesh->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  local_28._s_0.X = *pdVar1;
  local_28._s_0.Y = pdVar1[1];
  local_28._s_0.Z = *(double *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  local_60 = &local_28;
  local_50 = &local_res8;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
             ::Call;
  local_48._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVTransfer::GetCorrespondingDestVid'::__l2::<lambda_1>,double,int_const_&>
       ::Call;
  local_48._8_8_ = &local_68;
  local_res8.Value._0_4_ = param_1;
  local_68 = this;
  TPointHashGrid3<int,double>::FindInRadiusHelper<0>
            ((this->HashGrid).Ptr,&local_38,(TVector<double> *)&local_28._s_0,
             this->VertexSearchDistance,(TFunctionRef<double___cdecl(int_const_&)> *)local_48,
             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_58);
  local_res18[0] = local_38._0_4_;
  if (local_38._0_4_ != -1) {
    local_48._0_8_ = &local_res8.Value;
    local_48._8_8_ = local_res18;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->SourceVidToDestinationVid,&local_res8,(bool *)local_48);
    local_38._0_4_ = local_res18[0];
  }
  return local_38._0_4_;
}

// InitializeHashGrid @ 14c8fe1a0

void __thiscall
UE::Geometry::FDynamicMeshUVTransfer::InitializeHashGrid(FDynamicMeshUVTransfer *this)

{
  TUniquePtr<UE::Geometry::TPointHashGrid3<int,double>,TDefaultDelete<UE::Geometry::TPointHashGrid3<int,double>_>_>
  *pTVar1;
  double *pdVar2;
  double dVar3;
  void *pvVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  TPointHashGrid3<int,double> *pTVar8;
  TPointHashGrid3<int,double> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  TPointHashGrid3<int,double> *pTVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_res8 [4];
  undefined8 local_78;
  FVector3i local_70;
  FVector3i *local_60;
  uint *local_58;
  TVector<double>_u_0 local_50;
  
  dVar3 = this->VertexSearchCellSize;
  uVar14 = SUB84(dVar3,0);
  uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (dVar3 <= __real_3f1a36e2e0000000) {
    uVar14 = SUB84(__real_3f1a36e2e0000000,0);
    uVar15 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  }
  pTVar8 = ::operator_new(0x68);
  pTVar13 = (TPointHashGrid3<int,double> *)0x0;
  pTVar9 = pTVar13;
  if (pTVar8 != (TPointHashGrid3<int,double> *)0x0) {
    pTVar9 = TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
                       (pTVar8,(double)CONCAT44(uVar15,uVar14),-1);
  }
  pTVar1 = &this->HashGrid;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TPointHashGrid3<int,double>,TDefaultDelete<UE::Geometry::TPointHashGrid3<int,double>_>_>
                 *)&local_78) {
    if (pTVar9 != (TPointHashGrid3<int,double> *)0x0) {
      *(undefined4 *)&(pTVar9->Hash).field_0x48 = 0;
      pvVar4 = *(void **)&(pTVar9->Hash).field_0x40;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)pTVar9);
      goto LAB_14c8fe252;
    }
  }
  else {
    pTVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar8 != (TPointHashGrid3<int,double> *)0x0) {
      *(undefined4 *)&(pTVar8->Hash).field_0x48 = 0;
      pvVar4 = *(void **)&(pTVar8->Hash).field_0x40;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)pTVar8);
      pTVar9 = pTVar8;
LAB_14c8fe252:
      ::operator_delete(pTVar9,0x68);
    }
  }
  pFVar5 = this->DestinationMesh;
  uVar11 = (pFVar5->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar5->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar11 != 0) &&
     (pFVar6 = (pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    pTVar13 = (TPointHashGrid3<int,double> *)&DAT_00000001;
    uVar12 = 1;
    if ((int)uVar11 < 2) goto LAB_14c8fe2c8;
    do {
      uVar10 = (ulonglong)((uint)pTVar13 & 0x1ff);
      lVar7 = *(longlong *)(pFVar6 + ((ulonglong)pTVar13 >> 9) * 8);
      if ((*(short *)(lVar7 + uVar10 * 2) != 0) && (*(short *)(lVar7 + uVar10 * 2) != -1)) break;
      uVar12 = (uint)pTVar13 + 1;
      pTVar13 = (TPointHashGrid3<int,double> *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar11);
  }
  uVar12 = (uint)pTVar13;
LAB_14c8fe2c8:
  if (uVar12 != uVar11) {
    local_60 = &local_70;
    local_58 = local_res8;
LAB_14c8fe2f0:
    do {
      pTVar9 = pTVar1->Ptr;
      uVar12 = (uint)pTVar13;
      lVar7 = *(longlong *)
               ((this->DestinationMesh->Vertices).Blocks.AllocatorInstance.Data +
               ((ulonglong)pTVar13 >> 9) * 8);
      pdVar2 = (double *)(lVar7 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
      local_50._s_0.X = *pdVar2;
      local_50._s_0.Y = pdVar2[1];
      local_50._s_0.Z = *(double *)(lVar7 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
      local_res8[0] = uVar12;
      TWrapAroundGridIndexer3<double>::ToGrid
                (&pTVar9->Indexer,&local_70,(TVector<double> *)&local_50._s_0);
      TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                  *)pTVar9,
                 (TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)(local_res8 + 2),
                 (bool *)&local_60);
      uVar12 = uVar12 + 1;
      pTVar13 = (TPointHashGrid3<int,double> *)(ulonglong)uVar12;
      if ((int)uVar12 < (int)uVar11) {
        do {
          uVar10 = (ulonglong)((uint)pTVar13 & 0x1ff);
          lVar7 = *(longlong *)
                   ((pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pTVar13 >> 9) * 8);
          if ((*(short *)(lVar7 + uVar10 * 2) != 0) && (*(short *)(lVar7 + uVar10 * 2) != -1))
          goto LAB_14c8fe2f0;
          uVar12 = (uint)pTVar13 + 1;
          pTVar13 = (TPointHashGrid3<int,double> *)(ulonglong)uVar12;
        } while ((int)uVar12 < (int)uVar11);
      }
    } while (uVar12 != uVar11);
  }
  return;
}

// PerformElementsTransfer @ 14c90d580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer
          (FDynamicMeshUVTransfer *this,FProgressCancel *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  FDynamicMeshUVTransfer *pFVar11;
  TMap<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,0>_>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  longlong *plVar27;
  ForElementType<FSetElementId> FVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iVar33;
  uint uVar34;
  ForElementType<FSetElementId> FVar35;
  undefined1 *puVar36;
  int iVar37;
  uint uVar38;
  uint *puVar39;
  FProgressCancel *pFVar40;
  undefined1 auStackY_488 [32];
  bool local_458;
  undefined1 local_456;
  undefined1 local_455;
  undefined1 local_454;
  undefined1 local_453 [3];
  uint local_450;
  uint local_44c;
  uint local_448 [2];
  FProgressCancel *local_440;
  ulonglong local_438;
  undefined4 local_430;
  TArray<int,TSizedDefaultAllocator<32>_> local_428;
  undefined8 local_418;
  int local_410;
  int local_40c;
  undefined8 local_408;
  undefined4 local_400;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3f0;
  undefined8 local_3d0;
  int local_3c8 [2];
  undefined8 local_3c0;
  longlong local_3b8;
  FDynamicMeshUVTransfer *local_3b0;
  FMeshConnectedComponents local_3a8;
  int local_390;
  int local_38c;
  FDynamicMeshUVTransfer *local_388;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_380;
  undefined8 local_378;
  int local_370 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_330;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_310;
  uint uStack_308;
  uint uStack_304;
  undefined1 *local_300;
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint local_2f0;
  uint uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  code *local_2d8;
  longlong local_2d0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [24];
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  TMap<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>,0>_>
  *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  uint local_220;
  uint auStack_21c [9];
  int *local_1f8;
  undefined1 *local_1f0;
  code *local_1e8 [2];
  undefined **local_1d8;
  FDynamicMeshUVTransfer *local_1d0;
  undefined8 local_1c0;
  FDynamicMeshUVEditor local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  undefined1 local_158 [32];
  undefined8 local_138;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_124;
  undefined1 local_120 [8];
  ForElementType<FSetElementId> local_118;
  int local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_488;
  if ((this->SourceOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)
     || (this->DestOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0))
  {
    return false;
  }
  puVar26 = &(this->SourceEidToDestinationEndpointEidsVids).field_0x10;
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  local_158._0_8_ = 0;
  local_158._8_8_ = 0;
  local_138 = 0;
  local_130 = 0;
  local_124 = 0;
  local_118 = (ForElementType<FSetElementId>)0x0;
  local_110 = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_12c = 0x80;
  local_128 = 0xffffffff;
  local_450 = 0;
  local_458 = true;
  local_350._padding_._0_4_ = 0;
  local_3c0 = 1;
  local_350._padding_._4_4_ = 1;
  local_350.UnvisitedBitMask = 0xffffffff;
  local_350.CurrentBitIndex = 0;
  local_350.BaseBitIndex = 0;
  local_440 = param_1;
  local_3b0 = this;
  local_350.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
  if (*(int *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_350);
  }
  TStack_3f0._padding_ = CONCAT44(local_350._padding_._4_4_,(undefined4)local_350._padding_);
  TStack_3f0.CurrentBitIndex = local_350.CurrentBitIndex;
  TStack_3f0.UnvisitedBitMask = local_350.UnvisitedBitMask;
  TStack_3f0._28_4_ = local_350._28_4_;
  TStack_3f0.BaseBitIndex = local_350.BaseBitIndex;
  TStack_3f0.Array = local_350.Array;
  local_3d0 = CONCAT44(local_3d0._4_4_,
                       *(int *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x8 -
                       *(int *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x34);
  TStack_278.Array = local_350.Array;
  uStack_258 = local_3d0;
  local_3f8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
              &this->SourceEidToDestinationEndpointEidsVids;
  local_280 = &this->SourceEidToDestinationEndpointEidsVids;
  TStack_278._padding_ = TStack_3f0._padding_;
  TStack_278._16_8_ = TStack_3f0._16_8_;
  TStack_278._24_8_ = TStack_3f0._24_8_;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_180,(TBitArray<FDefaultBitArrayAllocator> *)puVar26,
                       *(int *)&(this->SourceEidToDestinationEndpointEidsVids).field_0x28);
  local_2d0 = pTVar18->_padding_;
  pTStack_2c8 = pTVar18->Array;
  local_2c0 = *(FDynamicMeshUVTransfer **)&pTVar18->UnvisitedBitMask;
  uStack_2b8._0_4_ = pTVar18->BaseBitIndex;
  uStack_2b8._4_4_ = *(undefined4 *)&pTVar18->field_0x1c;
  uVar16 = 0;
  while( true ) {
    pTVar12 = local_280;
    uVar32 = 0;
    uVar38 = 0;
    if (*(int *)(&local_280->field_0x0 + 8) - *(int *)(&local_280->field_0x0 + 0x34) !=
        (int)uStack_258) {
      local_456 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Geometry::FIndex2i,UE::Geometry::FIndex2i>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_456);
    }
    iVar33 = 0;
    if (((TStack_278.CurrentBitIndex == local_2c0._4_4_) && (TStack_278.Array == pTStack_2c8)) &&
       (pTVar12 == &this->SourceEidToDestinationEndpointEidsVids)) break;
    lVar30 = *(longlong *)&pTVar12->field_0x0;
    puVar39 = (uint *)((longlong)TStack_278.CurrentBitIndex * 0x1c + lVar30);
    uVar38 = *puVar39;
    auStack_21c[3] = *(undefined4 *)((longlong)TStack_278.CurrentBitIndex * 0x1c + 0x10 + lVar30);
    auStack_21c[0] = puVar39[1];
    auStack_21c[1] = puVar39[2];
    auStack_21c[2] = puVar39[3];
    local_220 = uVar38;
    if (((param_1 != (FProgressCancel *)0x0) && (local_450 = uVar16 + 1, (local_450 & 0x1ff) == 0))
       && (bVar13 = FProgressCancel::Cancelled(param_1), bVar13)) goto LAB_14c90e80a;
    lVar30 = *(longlong *)
              ((this->SourceMesh->Edges).Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar38 >> 9) * 8);
    piVar1 = (int *)(lVar30 + (ulonglong)(uVar38 & 0x1ff) * 0x10);
    auStack_21c[5] = *piVar1;
    auStack_21c[6] = piVar1[1];
    uVar19 = *(ulonglong *)(lVar30 + 8 + (ulonglong)(uVar38 & 0x1ff) * 0x10);
    uVar25 = (ulonglong)((uint)uVar19 & 0x1ff);
    auStack_21c[7] = piVar1[2];
    auStack_21c[8] = piVar1[3];
    lVar30 = *(longlong *)
              ((this->SourceMesh->Triangles).Blocks.AllocatorInstance.Data +
              ((uVar19 & 0xffffffff) >> 9) * 8);
    local_2a8._8_8_ = *(undefined8 *)(lVar30 + uVar25 * 0xc);
    iVar17 = *(int *)(lVar30 + 8 + uVar25 * 0xc);
    iVar22 = (int)((ulonglong)local_2a8._8_8_ >> 0x20);
    iVar24 = iVar33;
    if ((int)local_2a8._8_8_ != auStack_21c[6]) {
      if (iVar22 == auStack_21c[6]) {
        iVar24 = 1;
      }
      else {
        iVar24 = -1;
        if (iVar17 == auStack_21c[6]) {
          iVar24 = 2;
        }
      }
    }
    if ((int)local_2a8._8_8_ != auStack_21c[5]) {
      if (iVar22 == auStack_21c[5]) {
        iVar33 = 1;
      }
      else {
        iVar33 = -1;
        if (iVar17 == auStack_21c[5]) {
          iVar33 = 2;
        }
      }
    }
    local_44c = 0;
    iVar33 = (iVar33 - iVar24) + 3;
    local_448[0] = iVar33 + (iVar33 / 3 + (iVar33 >> 0x1f) +
                            (int)(((longlong)iVar33 / 3 + ((longlong)iVar33 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
    local_3b8 = 0;
    do {
      iVar33 = *(int *)((longlong)auStack_21c + local_3b8 + 8);
      uVar19 = (ulonglong)(*(uint *)((longlong)auStack_21c + local_3b8) & 0x1ff);
      iVar17 = *(int *)((longlong)auStack_21c + local_3b8 + 0x14);
      lVar30 = *(longlong *)
                ((this->DestinationMesh->Edges).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)((longlong)auStack_21c + local_3b8) >> 9) * 8);
      uVar20 = *(undefined8 *)(lVar30 + uVar19 * 0x10);
      iVar37 = (int)((ulonglong)uVar20 >> 0x20);
      iVar22 = (int)uVar20;
      iVar24 = iVar37;
      if ((iVar22 != iVar33) && (iVar24 = -1, iVar37 == iVar33)) {
        iVar24 = iVar22;
      }
      iVar22 = iVar24;
      iVar37 = iVar33;
      if ((int)uVar32 == 0) {
        iVar22 = iVar33;
        iVar37 = iVar24;
      }
      uVar32 = *(ulonglong *)(lVar30 + 8 + uVar19 * 0x10);
      local_418 = uVar32;
      uVar19 = (ulonglong)((uint)uVar32 & 0x1ff);
      lVar30 = *(longlong *)
                ((this->DestinationMesh->Triangles).Blocks.AllocatorInstance.Data +
                ((uVar32 & 0xffffffff) >> 9) * 8);
      local_428.AllocatorInstance.Data = *(FScriptContainerElement **)(lVar30 + uVar19 * 0xc);
      iVar24 = *(int *)(lVar30 + 8 + uVar19 * 0xc);
      iVar15 = (int)((ulonglong)local_428.AllocatorInstance.Data >> 0x20);
      if ((int)local_428.AllocatorInstance.Data == iVar22) {
        iVar23 = 0;
      }
      else if (iVar15 == iVar22) {
        iVar23 = 1;
      }
      else {
        iVar23 = -1;
        if (iVar24 == iVar22) {
          iVar23 = 2;
        }
      }
      lVar30 = 0;
      if ((int)local_428.AllocatorInstance.Data == iVar37) {
        iVar22 = 0;
      }
      else if (iVar15 == iVar37) {
        iVar22 = 1;
      }
      else {
        iVar22 = -1;
        if (iVar24 == iVar37) {
          iVar22 = 2;
        }
      }
      iVar24 = (iVar23 - iVar22) + 3;
      if (local_448[0] !=
          iVar24 + (iVar24 / 3 + (iVar24 >> 0x1f) +
                   (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) & 0xffffffffU) >> 0x1f))
                   * -3) {
        local_418._4_4_ = (undefined4)(uVar32 >> 0x20);
        local_418 = CONCAT44((uint)uVar32,local_418._4_4_);
      }
      do {
        uVar16 = *(uint *)((longlong)auStack_21c + lVar30 + 0x1c);
        if (uVar16 != 0xffffffff) {
          lVar31 = *(longlong *)
                    ((this->SourceMesh->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          local_408 = *(undefined8 *)(lVar31 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
          uVar20 = local_408;
          iVar22 = 0;
          iVar24 = iVar22;
          if ((int)local_408 != iVar17) {
            if ((int)((ulonglong)local_408 >> 0x20) == iVar17) {
              iVar24 = 1;
            }
            else {
              iVar24 = -1;
              if (*(int *)(lVar31 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc) == iVar17) {
                iVar24 = 2;
              }
            }
          }
          uVar16 = uVar16 * 3;
          lVar31 = *(longlong *)&this->SourceOverlay->field_0x78;
          local_370[0] = *(int *)(*(longlong *)(lVar31 + (ulonglong)(uVar16 >> 9) * 8) +
                                 (ulonglong)(uVar16 & 0x1ff) * 4);
          local_370[1] = *(undefined4 *)
                          (*(longlong *)(lVar31 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                          (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
          uVar38 = *(uint *)((longlong)&local_418 + lVar30);
          local_370[2] = *(undefined4 *)
                          (*(longlong *)(lVar31 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                          (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
          iVar24 = local_370[iVar24];
          local_408 = uVar20;
          local_3c8[0] = iVar24;
          if (uVar38 != 0xffffffff) {
            lVar31 = *(longlong *)
                      ((this->DestinationMesh->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar38 >> 9) * 8);
            local_438 = *(ulonglong *)(lVar31 + (ulonglong)(uVar38 & 0x1ff) * 0xc);
            if ((uint)local_438 != iVar33) {
              if ((int)(local_438 >> 0x20) == iVar33) {
                iVar22 = 1;
              }
              else {
                iVar22 = -1;
                if (*(int *)(lVar31 + 8 + (ulonglong)(uVar38 & 0x1ff) * 0xc) == iVar33) {
                  iVar22 = 2;
                }
              }
            }
            uVar38 = uVar38 * 3;
            lVar31 = *(longlong *)&this->DestOverlay->field_0x78;
            local_370[4] = *(undefined4 *)
                            (*(longlong *)(lVar31 + (ulonglong)(uVar38 >> 9) * 8) +
                            (ulonglong)(uVar38 & 0x1ff) * 4);
            local_370[5] = *(undefined4 *)
                            (*(longlong *)(lVar31 + (ulonglong)(uVar38 + 1 >> 9) * 8) +
                            (ulonglong)(uVar38 + 1 & 0x1ff) * 4);
            local_370[6] = *(undefined4 *)
                            (*(longlong *)(lVar31 + (ulonglong)(uVar38 + 2 >> 9) * 8) +
                            (ulonglong)(uVar38 + 2 & 0x1ff) * 4);
            iVar22 = local_370[(longlong)iVar22 + 4];
            local_410 = iVar22;
            local_40c = iVar24;
            uVar16 = FCrc::MemCrc_DEPRECATED(&local_410,8,0);
            if (local_158._8_4_ != local_124) {
              FVar35 = (ForElementType<FSetElementId>)local_120;
              if (local_118 != (ForElementType<FSetElementId>)0x0) {
                FVar35 = local_118;
              }
              iVar37 = *(int *)((longlong)FVar35 + (ulonglong)(local_110 - 1U & uVar16) * 4);
              while (iVar37 != -1) {
                lVar31 = local_158._0_8_ + (longlong)iVar37 * 0x14;
                if ((*(int *)(local_158._0_8_ + (longlong)iVar37 * 0x14) == local_410) &&
                   (*(int *)(lVar31 + 4) == local_40c)) {
                  if (iVar37 != -1) {
                    puVar26 = (undefined1 *)(lVar31 + 8);
                    if (lVar31 == 0) {
                      puVar26 = (undefined1 *)0x0;
                    }
                    if (puVar26 != (undefined1 *)0x0) {
                      *puVar26 = 1;
                      goto LAB_14c90dc54;
                    }
                  }
                  break;
                }
                iVar37 = *(int *)(lVar31 + 0xc);
              }
            }
            local_1f8 = &local_390;
            local_455 = 0;
            local_1f0 = &local_455;
            local_390 = iVar22;
            local_38c = iVar24;
            TSet<TTuple<UE::Geometry::FIndex2i,bool>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,bool,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FIndex2i_&&,bool_&&>_>
                      ((TSet<TTuple<UE::Geometry::FIndex2i,bool>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,bool,0>,FDefaultSetAllocator>
                        *)local_158,(TPairInitializer<UE::Geometry::FIndex2i_&&,bool_&&> *)local_2a8
                       ,(bool *)&local_1f8);
LAB_14c90dc54:
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_b8,&local_284,(bool *)local_3c8);
          }
        }
        lVar30 = lVar30 + 4;
      } while (lVar30 < 8);
      local_44c = local_44c + 1;
      uVar32 = (ulonglong)local_44c;
      local_3b8 = local_3b8 + 4;
    } while ((int)local_44c < 2);
    TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
    param_1 = local_440;
    uVar16 = local_450;
  }
  local_330.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  local_330._padding_._0_4_ = 0;
  local_330._padding_._4_4_ = 1;
  local_330.UnvisitedBitMask = 0xffffffff;
  local_330.CurrentBitIndex = 0;
  local_330.BaseBitIndex = 0;
  if (local_130 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_330);
  }
  TStack_3f0._padding_ = CONCAT44(local_330._padding_._4_4_,(undefined4)local_330._padding_);
  local_3f8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158;
  TStack_3f0.CurrentBitIndex = local_330.CurrentBitIndex;
  TStack_3f0.UnvisitedBitMask = local_330.UnvisitedBitMask;
  TStack_3f0._28_4_ = local_330._28_4_;
  TStack_3f0.BaseBitIndex = local_330.BaseBitIndex;
  TStack_3f0.Array = local_330.Array;
  local_3d0 = CONCAT44(local_3d0._4_4_,local_158._8_4_ - local_124);
  TStack_248.Array = local_330.Array;
  uStack_228 = local_3d0;
  local_250 = local_3f8;
  TStack_248._padding_ = TStack_3f0._padding_;
  TStack_248._16_8_ = TStack_3f0._16_8_;
  TStack_248._24_8_ = TStack_3f0._24_8_;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_1a0,(TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),
                       local_130);
  local_2d0 = pTVar18->_padding_;
  pTVar9 = pTVar18->Array;
  uStack_2b8._0_4_ = pTVar18->BaseBitIndex;
  uStack_2b8._4_4_ = *(undefined4 *)&pTVar18->field_0x1c;
  local_2c0._4_4_ = (int)((ulonglong)*(FDynamicMeshUVTransfer **)&pTVar18->UnvisitedBitMask >> 0x20)
  ;
  iVar33 = local_2c0._4_4_;
  pTStack_2c8 = pTVar9;
  local_2c0 = *(FDynamicMeshUVTransfer **)&pTVar18->UnvisitedBitMask;
  while( true ) {
    pTVar5 = local_250;
    if (*(int *)&(local_250->Elements).field_0x8 - *(int *)&(local_250->Elements).field_0x34 !=
        (int)uStack_228) {
      local_454 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_454);
    }
    pFVar40 = local_440;
    if (((TStack_248.CurrentBitIndex == iVar33) && (TStack_248.Array == pTVar9)) &&
       (pTVar5 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_158)) break;
    lVar30 = *(longlong *)&pTVar5->Elements;
    local_430 = *(undefined4 *)(lVar30 + 8 + (longlong)TStack_248.CurrentBitIndex * 0x14);
    local_438 = *(ulonglong *)(lVar30 + (longlong)TStack_248.CurrentBitIndex * 0x14);
    uVar16 = (uint)(local_438 >> 0x20);
    if ((char)local_430 == '\0') {
      if (*(int *)&(this->SourceBoundaryElements).Elements.field_0x8 !=
          *(int *)&(this->SourceBoundaryElements).Elements.field_0x34) {
        FVar35 = (this->SourceBoundaryElements).Hash.SecondaryData;
        FVar28 = (ForElementType<FSetElementId>)&(this->SourceBoundaryElements).Hash;
        if (FVar35 != (ForElementType<FSetElementId>)0x0) {
          FVar28 = FVar35;
        }
        iVar17 = *(int *)((longlong)FVar28 +
                         ((ulonglong)((this->SourceBoundaryElements).HashSize - 1) &
                         local_438 >> 0x20) * 4);
        if (iVar17 != -1) {
          lVar30 = *(longlong *)&(this->SourceBoundaryElements).Elements;
          do {
            if (*(uint *)(lVar30 + (longlong)iVar17 * 0xc) == uVar16) goto LAB_14c90deea;
            iVar17 = *(int *)(lVar30 + 4 + (longlong)iVar17 * 0xc);
          } while (iVar17 != -1);
        }
      }
    }
    else {
LAB_14c90deea:
      pTVar4 = this->DestOverlay;
      lVar30 = *(longlong *)&this->SourceOverlay->field_0x48;
      uVar2 = *(undefined4 *)
               (*(longlong *)(lVar30 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4);
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar4->field_0x48 + (ulonglong)(((uint)local_438 & 0x7fffffff) >> 8) * 8) +
       (ulonglong)((uint)local_438 * 2 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar30 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
            (ulonglong)(uVar16 * 2 & 0x1ff) * 4);
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar4->field_0x48 + (ulonglong)(((uint)local_438 & 0x7fffffff) >> 8) * 8) +
       (ulonglong)((uint)local_438 * 2 + 1 & 0x1ff) * 4) = uVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_108,&local_28c,(bool *)&local_438);
    }
    TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
  }
  local_380 = &local_b8;
  pTVar5 = this->SourceSelectionTids;
  local_378 = &local_108;
  local_388 = this;
  if (pTVar5 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    pTVar4 = local_3b0->SourceOverlay;
    uVar16 = *(int *)&pTVar4->field_0xc + *(int *)&pTVar4->field_0x8 * 0x200;
    if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar4->field_0x10 - 1U))) {
      uVar32 = 1;
      uVar19 = 1;
      if (1 < (int)uVar16) {
        do {
          uVar32 = uVar19;
          uVar19 = (ulonglong)((uint)uVar32 & 0x1ff);
          lVar30 = (*(undefined8 **)&pTVar4->field_0x10)[uVar32 >> 9];
          if ((*(short *)(lVar30 + uVar19 * 2) != 0) && (*(short *)(lVar30 + uVar19 * 2) != -1))
          break;
          uVar38 = (uint)uVar32 + 1;
          uVar32 = (ulonglong)uVar38;
          uVar19 = uVar32;
        } while ((int)uVar38 < (int)uVar16);
      }
    }
    uVar34 = (uint)uVar32;
    uVar38 = local_450;
joined_r0x00014c90e53c:
    if (uVar34 != uVar16) {
      while( true ) {
        if ((pFVar40 != (FProgressCancel *)0x0) && (uVar38 = uVar38 + 1, (uVar38 & 0x1ff) == 0)) {
          if (pFVar40->WasCancelled != false) goto LAB_14c90e601;
          Core::Private::Function::CheckCallable(*(void **)&pFVar40->CancelF);
          plVar7 = *(longlong **)&(pFVar40->CancelF).field_0x28;
          pcVar8 = *(code **)&pFVar40->CancelF;
          plVar27 = (longlong *)&(pFVar40->CancelF).field_0x10;
          if (plVar7 != (longlong *)0x0) {
            plVar27 = plVar7;
          }
          uVar20 = (**(code **)(*plVar27 + 8))();
          bVar13 = (bool)(*pcVar8)(uVar20);
          pFVar40->WasCancelled = bVar13;
          if (bVar13 != false) goto LAB_14c90e601;
        }
        bVar13 = `UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer'::__l2::<lambda_1>::
                 operator()(&local_388,(int)uVar32);
        if ((!bVar13) || (bVar13 = local_458 == false, local_458 = true, bVar13)) {
          local_458 = false;
        }
        uVar34 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar34;
        if ((int)uVar16 <= (int)uVar34) break;
        while( true ) {
          uVar19 = (ulonglong)((uint)uVar32 & 0x1ff);
          lVar30 = *(longlong *)(*(longlong *)&pTVar4->field_0x10 + (uVar32 >> 9) * 8);
          if ((*(short *)(lVar30 + uVar19 * 2) != 0) && (*(short *)(lVar30 + uVar19 * 2) != -1))
          break;
          uVar34 = (uint)uVar32 + 1;
          uVar32 = (ulonglong)uVar34;
          if ((int)uVar16 <= (int)uVar34) goto joined_r0x00014c90e53c;
        }
      }
      goto joined_r0x00014c90e53c;
    }
  }
  else {
    uVar16 = *(uint *)&(pTVar5->Elements).field_0x28;
    puVar26 = &(pTVar5->Elements).field_0x10;
    uStack_308 = uVar38;
    local_2f0 = uVar38;
    if (uVar16 == 0) {
LAB_14c90e062:
      uStack_304 = (uint)local_3c0;
      uStack_2f4 = uVar38;
    }
    else {
      puVar39 = *(uint **)&(pTVar5->Elements).field_0x20;
      if (puVar39 == (uint *)0x0) {
        puVar39 = (uint *)puVar26;
      }
      uStack_304 = *puVar39;
      uVar19 = uVar32;
      while (uStack_304 == 0) {
        iVar33 = (int)uVar32;
        local_2f0 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)local_2f0;
        uStack_308 = iVar33 + 1;
        uVar32 = (ulonglong)uStack_308;
        uVar38 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_308)
        goto LAB_14c90e062;
        uStack_304 = puVar39[(longlong)iVar33 + 1];
      }
      uStack_304 = -uStack_304 & uStack_304;
      uVar32 = (ulonglong)uStack_304 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_290 = (int)lVar30;
      uStack_2f4 = (local_2f0 - 1) + local_290;
      if ((int)uVar16 < (int)uStack_2f4) {
        uStack_2f4 = uVar16;
      }
    }
    uVar38 = *(uint *)&(pTVar5->Elements).field_0x28;
    uVar34 = uVar38 & 0xffffffe0;
    iStack_2e8 = *(int *)&(pTVar5->Elements).field_0x8 - *(int *)&(pTVar5->Elements).field_0x34;
    uStack_2f8 = 0xffffffff;
    local_44c = -1 << ((byte)uVar38 & 0x1f);
    TStack_3f0._padding_ = CONCAT44(uStack_304,uStack_308);
    TStack_3f0.CurrentBitIndex = uStack_2f4;
    TStack_3f0.UnvisitedBitMask = 0xffffffff;
    iVar33 = (int)uVar38 >> 5;
    TStack_3f0._28_4_ = uStack_2f4;
    TStack_3f0.BaseBitIndex = local_2f0;
    local_3d0 = CONCAT44(uStack_2e4,iStack_2e8);
    local_3f8 = pTVar5;
    TStack_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar26;
    local_310 = pTVar5;
    local_300 = puVar26;
    uStack_2ec = uStack_2f4;
    if ((((int)uVar38 < 0) || ((int)uVar16 < (int)uVar38)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    uVar16 = *(uint *)&(pTVar5->Elements).field_0x28;
    if (uVar38 != uVar16) {
      puVar6 = *(undefined1 **)&(pTVar5->Elements).field_0x20;
      puVar36 = puVar26;
      if (puVar6 != (undefined1 *)0x0) {
        puVar36 = puVar6;
      }
      uVar38 = local_44c & *(uint *)(puVar36 + (longlong)iVar33 * 4);
      while (uVar38 == 0) {
        lVar30 = (longlong)iVar33;
        uVar34 = uVar34 + 0x20;
        iVar33 = iVar33 + 1;
        uVar38 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_14c90e1a0;
        uVar38 = *(uint *)(puVar36 + lVar30 * 4 + 4);
      }
      uVar32 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_288 = (int)lVar30;
      uVar38 = (uVar34 - 1) + local_288;
      if ((int)uVar16 < (int)uVar38) {
        uVar38 = uVar16;
      }
    }
LAB_14c90e1a0:
    while( true ) {
      pTVar10 = local_3f8;
      if (*(int *)&(local_3f8->Elements).field_0x8 - *(int *)&(local_3f8->Elements).field_0x34 !=
          (int)local_3d0) {
        local_453[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_453);
      }
      if (((TStack_3f0.CurrentBitIndex == uVar38) &&
          (TStack_3f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar26)) &&
         (pFVar40 = local_440, pTVar10 == pTVar5)) break;
      uVar16 = *(int *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_3f0.CurrentBitIndex * 0xc
                       ) * 3;
      lVar30 = *(longlong *)&local_3b0->SourceOverlay->field_0x78;
      local_408 = CONCAT44(*(undefined4 *)
                            (*(longlong *)(lVar30 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                            (ulonglong)(uVar16 + 1 & 0x1ff) * 4),
                           *(undefined4 *)
                            (*(longlong *)(lVar30 + (ulonglong)(uVar16 >> 9) * 8) +
                            (ulonglong)(uVar16 & 0x1ff) * 4));
      lVar31 = 0;
      local_400 = *(undefined4 *)
                   (*(longlong *)(lVar30 + (ulonglong)(uVar16 + 2 >> 9) * 8) +
                   (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
      do {
        if ((param_1 != (FProgressCancel *)0x0) &&
           (local_450 = local_450 + 1, (local_450 & 0x1ff) == 0)) {
          if (param_1->WasCancelled != false) goto LAB_14c90e601;
          Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
          plVar7 = *(longlong **)&(param_1->CancelF).field_0x28;
          pcVar8 = *(code **)&param_1->CancelF;
          plVar27 = (longlong *)&(param_1->CancelF).field_0x10;
          if (plVar7 != (longlong *)0x0) {
            plVar27 = plVar7;
          }
          uVar20 = (**(code **)(*plVar27 + 8))();
          bVar13 = (bool)(*pcVar8)(uVar20);
          param_1->WasCancelled = bVar13;
          if (bVar13 != false) goto LAB_14c90e601;
        }
        uVar16 = *(uint *)((longlong)&local_408 + lVar31 * 4);
        local_448[0] = uVar16;
        if (uVar16 == 0xffffffff) {
LAB_14c90e491:
          bVar13 = local_458 == false;
          local_458 = true;
          if (bVar13) goto LAB_14c90e49d;
        }
        else {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (local_380,(int *)&local_3c0,(bool *)local_448);
          pFVar11 = local_388;
          iVar33 = *(int *)(*(longlong *)
                             (*(longlong *)&local_388->SourceOverlay->field_0x60 +
                             (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
          if (iVar33 == -1) {
            bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5812595179747541472>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVTransfer.cpp"
                                ,0x1e0,"ParentSourceVid != IndexConstants::InvalidID");
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
          }
          else {
            iVar33 = GetCorrespondingDestVid(local_388,iVar33);
            if (iVar33 != -1) {
              local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_428.ArrayNum = 0;
              local_428.ArrayMax = 0;
              TDynamicMeshOverlay<float,2>::GetVertexElements
                        ((TDynamicMeshOverlay<float,2> *)pFVar11->DestOverlay,iVar33,&local_428);
              if (local_428.ArrayNum < 2) {
                pTVar4 = pFVar11->DestOverlay;
                lVar30 = *(longlong *)&pFVar11->SourceOverlay->field_0x48;
                uVar2 = *(undefined4 *)
                         (*(longlong *)(lVar30 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar16 * 2 & 0x1ff) * 4);
                uVar3 = *(undefined4 *)
                         (*(longlong *)(lVar30 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4);
                if ((local_428.ArrayNum < 1) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                pTVar10 = local_378;
                uVar16 = *(uint *)local_428.AllocatorInstance.Data;
                *(undefined4 *)
                 (*(longlong *)
                   (*(longlong *)&pTVar4->field_0x48 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8)
                 + (ulonglong)(uVar16 * 2 & 0x1ff) * 4) = uVar2;
                *(undefined4 *)
                 (*(longlong *)
                   (*(longlong *)&pTVar4->field_0x48 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8)
                 + (ulonglong)(uVar16 * 2 + 1 & 0x1ff) * 4) = uVar3;
                if ((local_428.ArrayNum < 1) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  uVar14 = (*pcVar8)();
                  return (bool)uVar14;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (pTVar10,(int *)&local_3b8,(bool *)local_428.AllocatorInstance.Data);
              }
              if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_428.AllocatorInstance.Data);
              }
              goto LAB_14c90e491;
            }
          }
LAB_14c90e49d:
          local_458 = false;
        }
        param_1 = local_440;
        lVar31 = lVar31 + 1;
      } while (lVar31 < 3);
      TStack_3f0.UnvisitedBitMask = TStack_3f0.UnvisitedBitMask & ~TStack_3f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3f0);
    }
  }
  pFVar11 = local_3b0;
  uVar32 = 0;
  local_3a8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.Components.Array.ArrayNum = 0;
  local_3a8.Components.Array.ArrayMax = 0;
  local_3a8.Mesh = local_3b0->DestinationMesh;
  if (local_3b0->DestinationSelectionTids ==
      (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    local_2b0 = 0;
    pTStack_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &Core::Private::Function::
                   TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer'::`63'::<lambda_3>,0,0>
                   ::_vftable_;
    local_2c0 = local_3b0;
    local_2d8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer'::__l63::<lambda_3>,bool,int,int>
                ::Call;
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_3a8,(TFunction<bool___cdecl(int,int)> *)&local_2d8);
  }
  else {
    local_1c0 = 0;
    local_1d8 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer'::`61'::<lambda_2>,0,0>
                 ::_vftable_;
    local_1d0 = local_3b0;
    local_1e8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshUVTransfer::PerformElementsTransfer'::__l61::<lambda_2>,bool,int,int>
                   ::Call;
    pTVar21 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        (local_3b0->DestinationSelectionTids,
                         (TArray<int,TSizedDefaultAllocator<32>_> *)(local_2a8 + 8));
    FMeshConnectedComponents::FindConnectedTriangles
              (&local_3a8,pTVar21,(TFunction<bool___cdecl(int,int)> *)local_1e8);
    if ((bool *)local_2a8._8_8_ != (bool *)0x0) {
      FMemory::Free((void *)local_2a8._8_8_);
    }
  }
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_1b8,pFVar11->DestinationMesh,pFVar11->UVLayerIndex,true);
  uVar29 = (ulonglong)local_3a8.Components.Array.ArrayNum;
  uVar19 = uVar29;
  uVar25 = uVar32;
  if (0 < local_3a8.Components.Array.ArrayNum) {
    while (iVar33 = (int)uVar19, pFVar40 == (FProgressCancel *)0x0) {
LAB_14c90e739:
      uVar38 = (uint)uVar25;
      uVar16 = 0;
      if ((int)uVar38 < iVar33) {
        uVar16 = ~uVar38 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      bVar13 = FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundaryConformal
                         (&local_1b8,
                          *(TArray<int,TSizedDefaultAllocator<32>_> **)
                           (local_3a8.Components.Array.AllocatorInstance.Data + uVar32 * 8),
                          &local_108,(FUVEditResult *)0x0);
      if ((!bVar13) || (bVar13 = local_458 == false, local_458 = true, bVar13)) {
        local_458 = false;
      }
      uVar32 = uVar32 + 1;
      if ((longlong)uVar29 <= (longlong)uVar32) goto LAB_14c90e7d0;
      uVar19 = local_3a8.Components.Array._8_8_ & 0xffffffff;
      uVar25 = (ulonglong)(uVar38 + 1);
    }
    if (pFVar40->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&pFVar40->CancelF);
      plVar7 = *(longlong **)&(pFVar40->CancelF).field_0x28;
      pcVar8 = *(code **)&pFVar40->CancelF;
      plVar27 = (longlong *)&(pFVar40->CancelF).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar27 = plVar7;
      }
      uVar20 = (**(code **)(*plVar27 + 8))();
      bVar13 = (bool)(*pcVar8)(uVar20);
      pFVar40->WasCancelled = bVar13;
      if (bVar13 == false) {
        iVar33 = local_3a8.Components.Array.ArrayNum;
        goto LAB_14c90e739;
      }
    }
    local_458 = false;
  }
LAB_14c90e7d0:
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_3a8.Components);
  goto LAB_14c90e7d9;
LAB_14c90e80a:
  local_458 = false;
  goto LAB_14c90e80c;
LAB_14c90e601:
  local_458 = false;
LAB_14c90e7d9:
  local_108.HashSize = 0;
  if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.Elements);
LAB_14c90e80c:
  local_110 = 0;
  if (local_118 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_158);
  local_b8.HashSize = 0;
  if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_b8.Elements);
  return local_458;
}

// PerformSeamTransfer @ 14c90e8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshUVTransfer::PerformSeamTransfer
          (FDynamicMeshUVTransfer *this,FProgressCancel *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TAxisAlignedBox3<double> *pTVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ForElementType<FSetElementId> FVar18;
  ulonglong uVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  longlong lVar27;
  uint uVar28;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8 [4];
  uint local_1e4;
  int local_1e0;
  int local_1dc;
  FDynamicMeshUVTransfer *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FDynamicMeshUVTransfer *local_158;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_150;
  double local_148;
  FSparseArrayAllocationInfo local_140;
  FDynamicMeshUVEditor local_130;
  TAxisAlignedBox3<double> local_118;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar20 = true;
  local_1d8 = this;
  if ((this->HashGrid).Ptr == (TPointHashGrid3<int,double> *)0x0) {
    InitializeHashGrid(this);
  }
  uVar17 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  uVar24 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SourceBoundaryElements);
  pTVar13 = FDynamicMesh3::GetBounds(this->SourceMesh,&local_118,true);
  pTVar2 = this->SourceSelectionTids;
  local_150 = &local_98;
  local_1e0 = 0;
  local_148 = (pTVar13->Max).field0_0x0._s_0.Z - (pTVar13->Min).field0_0x0._s_0.Z;
  dVar8 = (pTVar13->Max).field0_0x0._s_0.Y - (pTVar13->Min).field0_0x0._s_0.Y;
  dVar9 = (pTVar13->Max).field0_0x0._s_0.X - (pTVar13->Min).field0_0x0._s_0.X;
  if (local_148 <= 0.0) {
    local_148 = 0.0;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  if (local_148 <= dVar8) {
    local_148 = dVar8;
  }
  if (local_148 <= dVar9) {
    local_148 = dVar9;
  }
  local_190 = pTVar2;
  local_158 = this;
  if (pTVar2 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    puVar1 = &(pTVar2->Elements).field_0x10;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (ForElementType<unsigned_int>)0x0;
    local_c0 = 0;
    local_1a0 = 0;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    local_bc = 0x80;
    uStack_1b4 = 1;
    local_b8 = -1;
    iVar12 = *(int *)&(pTVar2->Elements).field_0x28;
    iStack_1a4 = 0;
    if (iVar12 != 0) {
      puVar26 = *(uint **)&(pTVar2->Elements).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uVar22 = *puVar26;
      uVar24 = 0;
      while (uVar22 == 0) {
        iVar21 = (int)uVar17;
        local_1a0 = local_1a0 + 0x20;
        uVar24 = iVar21 + 1;
        uVar17 = (ulonglong)uVar24;
        iStack_1a4 = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
        goto LAB_14c90ea93;
        uVar22 = puVar26[(longlong)iVar21 + 1];
      }
      uStack_1b4 = -uVar22 & uVar22;
      uVar17 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_1dc = (int)lVar15;
      iStack_1a4 = local_1a0 + -1 + local_1dc;
      if (iVar12 < iStack_1a4) {
        iStack_1a4 = iVar12;
      }
    }
LAB_14c90ea93:
    uVar22 = *(uint *)&(pTVar2->Elements).field_0x28;
    iStack_198 = *(int *)&(pTVar2->Elements).field_0x8 - *(int *)&(pTVar2->Elements).field_0x34;
    uVar28 = uVar22 & 0xffffffe0;
    TStack_180._padding_ = CONCAT44(uStack_1b4,uVar24);
    uStack_1a8 = 0xffffffff;
    TStack_180.CurrentBitIndex = iStack_1a4;
    TStack_180.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar22 >> 5;
    TStack_180._28_4_ = iStack_1a4;
    TStack_180.BaseBitIndex = local_1a0;
    uStack_160 = CONCAT44(uStack_194,iStack_198);
    local_1e4 = uVar22;
    local_1c0 = pTVar2;
    uStack_1b8 = uVar24;
    local_1b0 = puVar1;
    iStack_19c = iStack_1a4;
    local_188 = pTVar2;
    TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar22 < 0) || (iVar12 < (int)uVar22)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar24 = *(uint *)&(pTVar2->Elements).field_0x28;
    if (uVar22 != uVar24) {
      puVar3 = *(undefined1 **)&(pTVar2->Elements).field_0x20;
      puVar25 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar25 = puVar3;
      }
      uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar21 * 4);
      while (uVar22 == 0) {
        lVar15 = (longlong)iVar21;
        uVar28 = uVar28 + 0x20;
        iVar21 = iVar21 + 1;
        uVar22 = uVar24;
        local_1e4 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14c90ebb0;
        uVar22 = *(uint *)(puVar25 + lVar15 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar22 = (uVar28 - 1) + (int)lVar15;
      local_1e4 = uVar22;
      if ((int)uVar24 < (int)uVar22) {
        uVar22 = uVar24;
        local_1e4 = uVar24;
      }
    }
LAB_14c90ebb0:
    while( true ) {
      pTVar2 = local_188;
      if (*(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34 !=
          (int)uStack_160) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      if (((TStack_180.CurrentBitIndex == uVar22) &&
          (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar2 == local_190)) break;
      uVar24 = *(uint *)(*(longlong *)&pTVar2->Elements + (longlong)TStack_180.CurrentBitIndex * 0xc
                        );
      uVar17 = (ulonglong)(uVar24 & 0x1ff);
      lVar27 = 0;
      lVar15 = *(longlong *)
                ((local_1d8->SourceMesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar24 >> 9) * 8);
      local_1d0 = *(undefined8 *)(lVar15 + uVar17 * 0xc);
      local_1c8 = *(undefined4 *)(lVar15 + 8 + uVar17 * 0xc);
      do {
        if ((param_1 != (FProgressCancel *)0x0) &&
           (local_1e0 = local_1e0 + 1, (char)local_1e0 == '\0')) {
          if (param_1->WasCancelled == false) {
            Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
            plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
            pcVar7 = *(code **)&param_1->CancelF;
            plVar16 = (longlong *)&(param_1->CancelF).field_0x10;
            if (plVar4 != (longlong *)0x0) {
              plVar16 = plVar4;
            }
            uVar14 = (**(code **)(*plVar16 + 8))();
            bVar10 = (bool)(*pcVar7)(uVar14);
            param_1->WasCancelled = bVar10;
            if (bVar10 == false) goto LAB_14c90ec8a;
          }
          local_a0 = 0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8);
          goto LAB_14c90eeec;
        }
LAB_14c90ec8a:
        uVar24 = *(uint *)((longlong)&local_1d0 + lVar27 * 4);
        if (local_b4 == 0) {
          iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                              (int *)(local_e8 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),false);
          iVar12 = local_b8;
        }
        else {
          iVar12 = *(int *)(local_e8._0_8_ + (longlong)local_b8 * 0xc + 4);
          local_b4 = local_b4 + -1;
          iVar21 = local_b8;
          if (local_b4 != 0) {
            *(undefined4 *)(local_e8._0_8_ + (longlong)iVar12 * 0xc) = 0xffffffff;
          }
        }
        local_b8 = iVar12;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_e8,&local_140,iVar21);
        if (local_140.Pointer != (uint *)0x0) {
          *(uint *)local_140.Pointer = uVar24;
          *(uint *)((longlong)local_140.Pointer + 4) = 0xffffffff;
        }
        uVar22 = *(uint *)local_140.Pointer;
        if ((local_e8._8_4_ - local_b4 != 1) && (local_e8._8_4_ != local_b4)) {
          FVar18 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_a8;
          }
          for (iVar12 = *(int *)((longlong)FVar18 + (ulonglong)(local_a0 - 1U & uVar22) * 4);
              iVar12 != -1; iVar12 = *(int *)(local_e8._0_8_ + (longlong)iVar12 * 0xc + 4)) {
            if (*(uint *)(local_e8._0_8_ + (longlong)iVar12 * 0xc) == uVar22) {
              if (iVar12 != -1) {
                *(uint *)(local_e8._0_8_ + (longlong)iVar12 * 0xc) = uVar22;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_e8,local_140.Index,1);
                goto LAB_14c90ee72;
              }
              uVar24 = *(uint *)((longlong)&local_1d0 + lVar27 * 4);
              break;
            }
          }
        }
        uVar28 = local_e8._8_4_ - local_b4;
        if (uVar28 < 4) {
          iVar12 = 1;
        }
        else {
          uVar17 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar12 = 1 << ((byte)lVar15 & 0x1f);
        }
        if (((int)uVar28 < 1) || (iVar12 <= local_a0)) {
          uVar22 = local_a0 - 1U & uVar22;
          *(uint *)((longlong)local_140.Pointer + 8) = uVar22;
          FVar18 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_a8;
          }
          uVar17 = (longlong)local_a0 - 1U & (longlong)(int)uVar22;
          *(uint *)((longlong)local_140.Pointer + 4) = *(uint *)((longlong)FVar18 + uVar17 * 4);
          *(int *)((longlong)FVar18 + uVar17 * 4) = local_140.Index;
        }
        else {
          local_a0 = iVar12;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8);
        }
        bVar10 = `UE::Geometry::FDynamicMeshUVTransfer::PerformSeamTransfer'::__l2::<lambda_1>::
                 operator()(&local_158,uVar24);
        if ((bVar10) && (bVar20)) {
          bVar20 = true;
        }
        else {
          bVar20 = false;
        }
LAB_14c90ee72:
        lVar27 = lVar27 + 1;
      } while (lVar27 < 3);
      TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
      uVar22 = local_1e4;
    }
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    this = local_1d8;
    goto LAB_14c90f098;
  }
  pFVar5 = this->SourceMesh;
  uVar24 = (pFVar5->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar5->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar23 = uVar17;
  bVar20 = true;
  if ((uVar24 == 0) ||
     (pFVar6 = (pFVar5->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14c90efc6:
    uVar22 = (uint)uVar23;
  }
  else {
    uVar23 = 1;
    uVar22 = 1;
    if (1 < (int)uVar24) {
      do {
        uVar19 = (ulonglong)((uint)uVar23 & 0x1ff);
        lVar15 = *(longlong *)(pFVar6 + (uVar23 >> 9) * 8);
        if ((*(short *)(lVar15 + uVar19 * 2) != 0) && (*(short *)(lVar15 + uVar19 * 2) != -1))
        break;
        uVar22 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
      } while ((int)uVar22 < (int)uVar24);
      goto LAB_14c90efc6;
    }
  }
  while (uVar22 != uVar24) {
    if ((param_1 != (FProgressCancel *)0x0) &&
       (uVar22 = (int)uVar17 + 1, uVar17 = (ulonglong)uVar22, (char)uVar22 == '\0')) {
      if (param_1->WasCancelled != false) goto LAB_14c90eeec;
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
      pcVar7 = *(code **)&param_1->CancelF;
      plVar16 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar16 = plVar4;
      }
      uVar14 = (**(code **)(*plVar16 + 8))();
      bVar10 = (bool)(*pcVar7)(uVar14);
      param_1->WasCancelled = bVar10;
      if (bVar10 != false) goto LAB_14c90eeec;
    }
    bVar10 = `UE::Geometry::FDynamicMeshUVTransfer::PerformSeamTransfer'::__l2::<lambda_1>::
             operator()(&local_158,(int)uVar23);
    if ((bVar10) && (bVar20)) {
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
    uVar22 = (int)uVar23 + 1;
    uVar23 = (ulonglong)uVar22;
    this = local_1d8;
    if ((int)uVar22 < (int)uVar24) {
      do {
        uVar19 = (ulonglong)((uint)uVar23 & 0x1ff);
        lVar15 = *(longlong *)
                  ((pFVar5->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar23 >> 9) * 8);
        if ((*(short *)(lVar15 + uVar19 * 2) != 0) && (*(short *)(lVar15 + uVar19 * 2) != -1))
        break;
        uVar22 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
      } while ((int)uVar22 < (int)uVar24);
      uVar22 = (uint)uVar23;
    }
  }
LAB_14c90f098:
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_130,this->DestinationMesh,this->UVLayerIndex,true);
  bVar10 = FDynamicMeshUVEditor::CreateSeamsAtEdges(&local_130,&local_98,(FUVEditResult *)0x0);
  if ((bVar10) && (bVar20)) {
    bVar20 = true;
  }
  else {
LAB_14c90eeec:
    bVar20 = false;
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return bVar20;
}

// ResetDestinationUVTopology @ 14c914840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshUVTransfer::ResetDestinationUVTopology
          (FDynamicMeshUVTransfer *this,FProgressCancel *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  FDynamicMeshUVTransfer *local_d0;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_c8 = &local_88;
  uVar14 = 0;
  uVar19 = 0;
  pTVar2 = this->DestinationSelectionTids;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_d8 = pTVar2;
  local_d0 = this;
  if (pTVar2 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    puVar1 = &(pTVar2->Elements).field_0x10;
    local_f0 = 0;
    uStack_104 = 1;
    uVar17 = *(uint *)&(pTVar2->Elements).field_0x28;
    iVar18 = 0;
    uStack_f4 = local_f0;
    if (uVar17 != 0) {
      puVar22 = *(uint **)&(pTVar2->Elements).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar23 = *puVar22;
      uVar16 = uVar14;
      uVar21 = uVar14;
      local_f0 = 0;
      uVar19 = 0;
      while (uVar23 == 0) {
        iVar18 = (int)uVar16;
        local_f0 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)local_f0;
        uVar19 = iVar18 + 1;
        uVar16 = (ulonglong)uVar19;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
          iVar18 = *(int *)&(pTVar2->Elements).field_0x28;
          uStack_f4 = uVar17;
          goto LAB_14c91494a;
        }
        uVar23 = puVar22[(longlong)iVar18 + 1];
      }
      iVar18 = *(int *)&(pTVar2->Elements).field_0x28;
      uStack_104 = -uVar23 & uVar23;
      uVar16 = (ulonglong)uStack_104 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e0 = (int)lVar12;
      uStack_f4 = (local_f0 - 1) + local_e0;
      if (iVar18 < (int)uStack_f4) {
        uStack_f4 = uVar17;
      }
    }
LAB_14c91494a:
    uVar17 = *(uint *)&(pTVar2->Elements).field_0x28;
    uVar23 = uVar17 & 0xffffffe0;
    iStack_e8 = *(int *)&(pTVar2->Elements).field_0x8 - *(int *)&(pTVar2->Elements).field_0x34;
    uStack_f8 = 0xffffffff;
    TStack_b8._padding_ = CONCAT44(uStack_104,uVar19);
    TStack_b8.CurrentBitIndex = uStack_f4;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar17 >> 5;
    TStack_b8._28_4_ = uStack_f4;
    TStack_b8.BaseBitIndex = local_f0;
    uStack_98 = CONCAT44(uStack_e4,iStack_e8);
    local_110 = pTVar2;
    uStack_108 = uVar19;
    local_100 = puVar1;
    uStack_ec = uStack_f4;
    local_c0 = pTVar2;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar18 < (int)uVar17)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar9 = local_d8;
    uVar19 = *(uint *)&(pTVar2->Elements).field_0x28;
    if (uVar17 != uVar19) {
      puVar3 = *(undefined1 **)&(pTVar2->Elements).field_0x20;
      puVar20 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar20 = puVar3;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar15;
        uVar23 = uVar23 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14c914a60;
        uVar17 = *(uint *)(puVar20 + lVar12 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar17 = (int)lVar12 + -1 + uVar23;
      if ((int)uVar19 < (int)uVar17) {
        uVar17 = uVar19;
      }
    }
LAB_14c914a60:
    do {
      pTVar2 = local_c0;
      if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
          (int)uStack_98) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
      }
      if (((TStack_b8.CurrentBitIndex == uVar17) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar9)
         ) goto LAB_14c914c53;
      iVar18 = *(int *)(*(longlong *)&pTVar2->Elements + (longlong)TStack_b8.CurrentBitIndex * 0xc);
      if ((param_1 != (FProgressCancel *)0x0) &&
         (uVar19 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar19, (uVar19 & 0x3ff) == 0)) {
        if (param_1->WasCancelled != false) goto LAB_14c914c53;
        Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
        plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
        pcVar7 = *(code **)&param_1->CancelF;
        plVar13 = (longlong *)&(param_1->CancelF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar13 = plVar4;
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        bVar10 = (bool)(*pcVar7)(uVar11);
        param_1->WasCancelled = bVar10;
        if (bVar10 != false) goto LAB_14c914c53;
      }
      `UE::Geometry::FDynamicMeshUVTransfer::ResetDestinationUVTopology'::__l2::<lambda_1>::
      operator()(&local_d0,iVar18);
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    } while( true );
  }
  pFVar5 = this->DestinationMesh;
  uVar19 = (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar16 = uVar14;
  if ((uVar19 != 0) &&
     (pFVar6 = (pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar16 = 1;
    uVar17 = 1;
    if ((int)uVar19 < 2) goto joined_r0x00014c914b99;
    do {
      lVar12 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
      if ((*(short *)(lVar12 + *(longlong *)(pFVar6 + (uVar16 >> 9) * 8)) != 0) &&
         (*(short *)(lVar12 + *(longlong *)(pFVar6 + (uVar16 >> 9) * 8)) != -1)) break;
      uVar17 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar17;
    } while ((int)uVar17 < (int)uVar19);
  }
  uVar17 = (uint)uVar16;
joined_r0x00014c914b99:
  while (uVar17 != uVar19) {
    if ((param_1 != (FProgressCancel *)0x0) &&
       (uVar17 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar17, (uVar17 & 0x3ff) == 0)) {
      if (param_1->WasCancelled != false) break;
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      plVar4 = *(longlong **)&(param_1->CancelF).field_0x28;
      pcVar7 = *(code **)&param_1->CancelF;
      plVar13 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar13 = plVar4;
      }
      uVar11 = (**(code **)(*plVar13 + 8))();
      bVar10 = (bool)(*pcVar7)(uVar11);
      param_1->WasCancelled = bVar10;
      if (bVar10 != false) break;
    }
    `UE::Geometry::FDynamicMeshUVTransfer::ResetDestinationUVTopology'::__l2::<lambda_1>::operator()
              (&local_d0,(int)uVar16);
    uVar17 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar17;
    if ((int)uVar17 < (int)uVar19) {
      pFVar6 = (pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      do {
        lVar12 = (uVar16 >> 9) * 8;
        lVar8 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
        if ((*(short *)(lVar8 + *(longlong *)(pFVar6 + lVar12)) != 0) &&
           (*(short *)(lVar8 + *(longlong *)(pFVar6 + lVar12)) != -1)) break;
        uVar17 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar17;
      } while ((int)uVar17 < (int)uVar19);
      uVar17 = (uint)uVar16;
    }
  }
LAB_14c914c53:
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}

// TransferSeams @ 14c91f300

bool __thiscall
UE::Geometry::FDynamicMeshUVTransfer::TransferSeams
          (FDynamicMeshUVTransfer *this,FProgressCancel *param_1)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  char *pcVar8;
  FDynamicMeshAttributeSet *this_00;
  atomic<unsigned_char> *paVar9;
  
  if (((((this->DestinationMesh == (FDynamicMesh3 *)0x0) ||
        (this->SourceMesh == (FDynamicMesh3 *)0x0)) || (uVar1 = this->UVLayerIndex, 7 < uVar1)) ||
      ((pFVar2 = (this->SourceMesh->AttributeSet).Ptr, pFVar2 == (FDynamicMeshAttributeSet *)0x0 ||
       (iVar6 = (**(code **)(pFVar2->_padding_ + 0xa8))(), iVar6 <= (int)uVar1)))) ||
     ((uVar1 = this->DestUVLayerIndex, 7 < uVar1 ||
      ((pFVar2 = (this->DestinationMesh->AttributeSet).Ptr,
       pFVar2 == (FDynamicMeshAttributeSet *)0x0 ||
       (iVar6 = (**(code **)(pFVar2->_padding_ + 0xa8))(), iVar6 <= (int)uVar1)))))) {
    pcVar8 = "false";
    iVar6 = 0x1f;
    paVar9 = &bGEnsureHasExecuted<5812595179747541023>;
  }
  else {
    pFVar2 = (this->SourceMesh->AttributeSet).Ptr;
    this_00 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar2;
    }
    pTVar7 = FDynamicMeshAttributeSet::GetUVLayer(this_00,this->UVLayerIndex);
    this->SourceOverlay = pTVar7;
    if (pTVar7 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      pcVar8 = "SourceOverlay";
      iVar6 = 0x23;
      paVar9 = &bGEnsureHasExecuted<5812595179747541027>;
    }
    else {
      pTVar7 = FDynamicMeshAttributeSet::GetUVLayer
                         ((this->DestinationMesh->AttributeSet).Ptr,this->DestUVLayerIndex);
      this->DestOverlay = pTVar7;
      if (pTVar7 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
        if (param_1 == (FProgressCancel *)0x0) {
          InitializeHashGrid(this);
        }
        else {
          bVar4 = FProgressCancel::Cancelled(param_1);
          if (bVar4) {
            return false;
          }
          InitializeHashGrid(this);
          bVar4 = FProgressCancel::Cancelled(param_1);
          if (bVar4) {
            return false;
          }
        }
        if (this->bClearExistingSeamsInDestination != false) {
          ResetDestinationUVTopology(this,param_1);
        }
        if ((param_1 != (FProgressCancel *)0x0) &&
           (bVar4 = FProgressCancel::Cancelled(param_1), bVar4)) {
          return false;
        }
        bVar4 = PerformSeamTransfer(this,param_1);
        return bVar4;
      }
      pcVar8 = "DestOverlay";
      iVar6 = 0x29;
      paVar9 = &bGEnsureHasExecuted<5812595179747541033>;
    }
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\UVTransfer.cpp"
                     ,iVar6,pcVar8);
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// TransferSeamsAndUVs @ 14c91f4b0

bool __thiscall
UE::Geometry::FDynamicMeshUVTransfer::TransferSeamsAndUVs
          (FDynamicMeshUVTransfer *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_1 == (FProgressCancel *)0x0) {
    bVar3 = TransferSeams(this,(FProgressCancel *)0x0);
  }
  else {
    if (param_1->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar6 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    bVar3 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar3;
    if (bVar3 != false) {
      return false;
    }
    bVar3 = TransferSeams(this,param_1);
    if (param_1->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar6 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return false;
    }
  }
  bVar4 = PerformElementsTransfer(this,param_1);
  if ((bVar4) && (bVar3 != false)) {
    return true;
  }
  return false;
}

