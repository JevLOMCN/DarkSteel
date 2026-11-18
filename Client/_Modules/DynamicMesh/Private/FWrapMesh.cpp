// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FWrapMesh @ 14c7b5240

FWrapMesh * __thiscall UE::Geometry::FWrapMesh::FWrapMesh(FWrapMesh *this,FDynamicMesh3 *param_1)

{
  this->MaxNumOuterIterations = 10;
  this->NumInnerIterations = 10;
  this->ProjectionTolerance = 0.0001;
  this->SourceMeshWeldingThreshold = 1.9999999494757503e-05;
  this->LaplacianStiffness = 1.0;
  this->bWeldSourceMesh = true;
  this->InitialProjectionStiffness = 0.1;
  this->ProjectionStiffnessMuliplier = 10.0;
  this->CorrespondenceStiffness = 0.1;
  this->LaplacianType = AffineInvariant;
  (this->Impl).Ptr = (FImpl *)0x0;
  this->SourceMesh = param_1;
  if (param_1 != (FDynamicMesh3 *)0x0) {
    Initialize(this);
  }
  return this;
}

// ~FWrapMesh @ 14c7b7ce0

void __thiscall UE::Geometry::FWrapMesh::~FWrapMesh(FWrapMesh *this)

{
  FImpl *pFVar1;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c7b7cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pFVar1[-1].SourceLaplacian.m_data.m_size)(&pFVar1[-1].SourceLaplacian.m_data.m_size);
    return;
  }
  return;
}

// Initialize @ 14c816d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FWrapMesh::Initialize(FWrapMesh *this)

{
  TPimplPtr<UE::Geometry::FWrapMesh::FImpl,0> *pTVar1;
  ELaplacianType EVar2;
  undefined4 uVar3;
  int iVar4;
  FImpl *pFVar5;
  bool bVar6;
  uint uVar7;
  long64 *plVar8;
  code *pcVar9;
  long64 *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  long64 *plVar14;
  FDynamicMesh3 *pFVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  FImpl *pFVar19;
  undefined1 auStack_1f8 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  FImpl *local_1c0;
  int local_1b8 [2];
  FWrapMesh *local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a8;
  longlong local_198;
  TToDynamicMeshBase<UE::Geometry::Private::FMeshWeldingWrapper> local_190;
  code *local_160;
  undefined1 *local_158;
  code *local_150;
  undefined1 *local_148;
  longlong local_140;
  FMeshWeldingWrapper local_138;
  FEigenSparseMatrixAssembler local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1b0 = this;
  if ((this->SourceMesh == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                         ,0x1f6,L""), bVar6)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar8 = ::operator_new(0x2d0);
  plVar14 = (long64 *)0x0;
  plVar10 = plVar14;
  if (plVar8 != (long64 *)0x0) {
    plVar8[1] = 0;
    *plVar8 = (long64)Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FWrapMesh::FImpl>;
    memset((void *)((longlong)plVar8 + 0x11),0,0x2b7);
    *(undefined1 *)(plVar8 + 2) = 0;
    FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(plVar8 + 3));
    plVar8[0x49] = 0;
    plVar8[0x4a] = 0;
    plVar8[0x4b] = 0;
    plVar8[0x4c] = 0;
    plVar8[0x4d] = 0;
    plVar8[0x4e] = 0;
    *(undefined4 *)(plVar8 + 0x4f) = 0;
    Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
              ((SparseMatrix<double,0,int> *)(plVar8 + 0x50));
    plVar10 = plVar8;
  }
  pTVar1 = &this->Impl;
  if ((TPimplPtr<UE::Geometry::FWrapMesh::FImpl,0> *)&local_140 == pTVar1) {
    if ((FImpl *)(plVar10 + 2) == (FImpl *)0x0) goto LAB_14c816e70;
    pcVar9 = (code *)*plVar10;
  }
  else {
    pFVar19 = pTVar1->Ptr;
    pTVar1->Ptr = (FImpl *)(plVar10 + 2);
    if (pFVar19 == (FImpl *)0x0) goto LAB_14c816e70;
    pcVar9 = (code *)pFVar19[-1].SourceLaplacian.m_data.m_size;
    plVar10 = &pFVar19[-1].SourceLaplacian.m_data.m_size;
  }
  (*pcVar9)(plVar10);
LAB_14c816e70:
  if (this->bWeldSourceMesh != false) {
    pTVar1->Ptr->bIsWelded = true;
    local_190.ToSrcVertIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ToSrcVertIDMap.ArrayNum = 0;
    local_190.ToSrcVertIDMap.ArrayMax = 0;
    local_190.ToSrcTriIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ToSrcTriIDMap.ArrayNum = 0;
    local_190.ToSrcTriIDMap.ArrayMax = 0;
    local_190.Time_AfterVertices.Ticks = 0;
    local_190.Time_AfterTriangles.Ticks = 0;
    Geometry::Private::FMeshWeldingWrapper::FMeshWeldingWrapper
              (&local_138,this->SourceMesh,this->SourceMeshWeldingThreshold);
    FDynamicMesh3::EnableAttributes(&pTVar1->Ptr->WeldedSourceMesh);
    pFVar19 = pTVar1->Ptr;
    local_160 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FWrapMesh::Initialize'::__l12::<lambda_1>,int,int_const_&>
                ::Call;
    local_158 = &local_1c8;
    TToDynamicMeshBase<UE::Geometry::Private::FMeshWeldingWrapper>::Convert
              (&local_190,&pFVar19->WeldedSourceMesh,&local_138,
               (TFunctionRef<int___cdecl(int_const_&)> *)&local_160);
    local_150 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FWrapMesh::Initialize'::__l12::<lambda_2>,int,int_const_&>
                ::Call;
    local_148 = local_1c7;
    TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays
              ((TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *)&local_190,
               &pFVar19->WeldedSourceMesh,&local_138,
               (TFunctionRef<int___cdecl(int_const_&)> *)&local_150,false);
    local_1b8[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&pTVar1->Ptr->SourceToWelded,local_1b8,
               (this->SourceMesh->VertexRefCounts).RefCounts.CurBlockUsed +
               (this->SourceMesh->VertexRefCounts).RefCounts.CurBlock * 0x200);
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    local_1b8[1] = 0xffffffff;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&local_1a8,local_1b8 + 1,
               (pTVar1->Ptr->WeldedSourceMesh).VertexRefCounts.RefCounts.CurBlockUsed +
               (pTVar1->Ptr->WeldedSourceMesh).VertexRefCounts.RefCounts.CurBlock * 0x200);
    uVar7 = 0;
    if (0 < local_190.ToSrcVertIDMap.ArrayNum) {
      local_198 = 0;
      plVar10 = plVar14;
      do {
        lVar16 = local_198;
        uVar12 = (uint)plVar10;
        uVar13 = 0;
        if ((int)uVar12 < local_190.ToSrcVertIDMap.ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar13 = *(uint *)(local_190.ToSrcVertIDMap.AllocatorInstance.Data + lVar16);
        lVar16 = (longlong)(int)uVar13;
        local_1c0 = pTVar1->Ptr;
        uVar18 = ~uVar13 >> 0x1f;
        uVar17 = uVar7;
        if ((int)uVar13 < (local_1c0->SourceToWelded).ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((local_1c0->SourceToWelded).AllocatorInstance.Data + lVar16 * 4) == -1) {
          local_1c0 = pTVar1->Ptr;
          uVar17 = uVar7;
          if ((int)uVar13 < (local_1c0->SourceToWelded).ArrayNum) {
            uVar17 = uVar18;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(uint *)((local_1c0->SourceToWelded).AllocatorInstance.Data + lVar16 * 4) = uVar12;
        }
        local_1c0 = pTVar1->Ptr;
        uVar17 = uVar7;
        if ((int)uVar13 < (local_1c0->SourceToWelded).ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar3 = *(undefined4 *)((local_1c0->SourceToWelded).AllocatorInstance.Data + lVar16 * 4);
        uVar13 = uVar7;
        if ((int)uVar12 < local_1a8.ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar10 = (long64 *)(ulonglong)(uVar12 + 1);
        *(undefined4 *)(local_1a8.AllocatorInstance.Data + local_198) = uVar3;
        local_198 = local_198 + 4;
        this = local_1b0;
      } while ((int)(uVar12 + 1) < local_190.ToSrcVertIDMap.ArrayNum);
    }
    pFVar19 = pTVar1->Ptr;
    plVar10 = plVar14;
    if (0 < (pFVar19->SourceToWelded).ArrayNum) {
      do {
        pFVar15 = this->SourceMesh;
        uVar13 = (uint)plVar14;
        if (((-1 < (int)uVar13) &&
            ((int)uVar13 <
             (int)((pFVar15->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar15->VertexRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar15->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + ((ulonglong)plVar14 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2)
                    - 1U) < 0xfffe)) {
          uVar17 = ~uVar13 >> 0x1f;
          uVar12 = uVar7;
          if ((int)uVar13 < (pFVar19->SourceToWelded).ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this = local_1b0;
          if (*(int *)((longlong)plVar10 +
                      (longlong)(pFVar19->SourceToWelded).AllocatorInstance.Data) == -1) {
            pFVar19 = pTVar1->Ptr;
            uVar12 = uVar7;
            if ((int)uVar13 < local_138.OriginalToMerged.ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar12 = *(uint *)((longlong)plVar10 + local_138.OriginalToMerged.AllocatorInstance.Data
                              );
            uVar18 = uVar7;
            if ((int)uVar12 < (pFVar19->SourceToWelded).ArrayNum) {
              uVar18 = ~uVar12 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar5 = pTVar1->Ptr;
            uVar3 = *(undefined4 *)
                     ((pFVar19->SourceToWelded).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
            uVar12 = uVar7;
            if ((int)uVar13 < (pFVar5->SourceToWelded).ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)
             ((longlong)plVar10 + (longlong)(pFVar5->SourceToWelded).AllocatorInstance.Data) = uVar3
            ;
            this = local_1b0;
          }
        }
        pFVar19 = pTVar1->Ptr;
        plVar14 = (long64 *)(ulonglong)(uVar13 + 1);
        plVar10 = (long64 *)((longlong)plVar10 + 4);
      } while ((int)(uVar13 + 1) < (pFVar19->SourceToWelded).ArrayNum);
    }
    FNonManifoldMappingSupport::AttachNonManifoldVertexMappingData
              (&local_1a8,&pFVar19->WeldedSourceMesh);
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
    if (local_138.EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.EmptyArray.AllocatorInstance.Data);
    }
    if (local_138.TriIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.TriIds.AllocatorInstance.Data);
    }
    if (local_138.OriginalToMerged.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.OriginalToMerged.AllocatorInstance.Data);
    }
    if (local_138.OriginalIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.OriginalIndexes.AllocatorInstance.Data);
    }
    if (local_190.ToSrcTriIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.ToSrcTriIDMap.AllocatorInstance.Data);
    }
    if (local_190.ToSrcVertIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.ToSrcVertIDMap.AllocatorInstance.Data);
    }
  }
  pFVar19 = pTVar1->Ptr;
  pFVar15 = &pFVar19->WeldedSourceMesh;
  if (pFVar19->bIsWelded == false) {
    pFVar15 = this->SourceMesh;
  }
  Geometry::Private::FNonManifoldVertexLinearization::Initialize
            (&pFVar19->SourceVtxLinearization,pFVar15);
  iVar4 = *(int *)&(pTVar1->Ptr->SourceVtxLinearization).field_0x8;
  FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_e8,iVar4,iVar4);
  EVar2 = this->LaplacianType;
  if (EVar2 == CotangentNoArea) {
    Geometry::Private::ConstructCotangentNoAreaLaplacian
              (pFVar15,(FVertexLinearization *)&pTVar1->Ptr->SourceVtxLinearization,
               &pTVar1->Ptr->SourceLaplacian);
  }
  else if ((EVar2 == CotangentAreaWeighted) || (EVar2 != AffineInvariant)) {
    Geometry::Private::ConstructCotangentWeightedLaplacian
              (pFVar15,(FVertexLinearization *)&pTVar1->Ptr->SourceVtxLinearization,
               &pTVar1->Ptr->SourceLaplacian);
  }
  else {
    Geometry::Private::ConstructAffineInvariantLaplacian
              (pFVar15,(FVertexLinearization *)&pTVar1->Ptr->SourceVtxLinearization,
               &pTVar1->Ptr->SourceLaplacian);
  }
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
            (&local_e8.EntryTriplets);
  if (local_e8.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
    FMemory_Free((local_e8.Matrix.Ptr)->m_outerIndex);
    FMemory_Free((local_e8.Matrix.Ptr)->m_innerNonZeros);
    operator_delete__(((local_e8.Matrix.Ptr)->m_data).m_values);
    operator_delete__(((local_e8.Matrix.Ptr)->m_data).m_indices);
    ::operator_delete(local_e8.Matrix.Ptr,0x48);
  }
  if (local_e8._padding_ != 0) {
    plVar11 = &local_e8._padding_;
    if ((longlong *)local_e8._padding_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_e8._padding_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_e8._padding_ != 0) {
    plVar11 = &local_e8._padding_;
    if ((longlong *)local_e8._padding_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_e8._padding_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_e8._padding_ != 0) {
    plVar11 = &local_e8._padding_;
    if ((longlong *)local_e8._padding_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_e8._padding_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SetMesh @ 14c828720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FWrapMesh::SetMesh(FWrapMesh *this,FDynamicMesh3 *param_1)

{
  TPimplPtr<UE::Geometry::FWrapMesh::FImpl,0> *pTVar1;
  ELaplacianType EVar2;
  undefined4 uVar3;
  int iVar4;
  FImpl *pFVar5;
  bool bVar6;
  uint uVar7;
  long64 *plVar8;
  code *pcVar9;
  long64 *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  long64 *plVar14;
  FDynamicMesh3 *pFVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  FImpl *pFVar19;
  undefined1 auStack_1f8 [32];
  undefined1 uStack_1c8;
  undefined1 auStack_1c7 [7];
  FImpl *pFStack_1c0;
  int aiStack_1b8 [2];
  FWrapMesh *pFStack_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_1a8;
  longlong lStack_198;
  TToDynamicMeshBase<UE::Geometry::Private::FMeshWeldingWrapper> TStack_190;
  code *pcStack_160;
  undefined1 *puStack_158;
  code *pcStack_150;
  undefined1 *puStack_148;
  longlong lStack_140;
  FMeshWeldingWrapper FStack_138;
  FEigenSparseMatrixAssembler FStack_e8;
  ulonglong uStack_38;
  
  this->SourceMesh = param_1;
  if (param_1 == (FDynamicMesh3 *)0x0) {
    pFVar19 = (this->Impl).Ptr;
    if (pFVar19 == (FImpl *)0x0) {
      return;
    }
    (this->Impl).Ptr = (FImpl *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014c828746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pFVar19[-1].SourceLaplacian.m_data.m_size)(&pFVar19[-1].SourceLaplacian.m_data.m_size)
    ;
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFStack_1b0 = this;
  if ((this->SourceMesh == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                         ,0x1f6,L""), bVar6)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar8 = ::operator_new(0x2d0);
  plVar14 = (long64 *)0x0;
  plVar10 = plVar14;
  if (plVar8 != (long64 *)0x0) {
    plVar8[1] = 0;
    *plVar8 = (long64)Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FWrapMesh::FImpl>;
    memset((void *)((longlong)plVar8 + 0x11),0,0x2b7);
    *(undefined1 *)(plVar8 + 2) = 0;
    FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(plVar8 + 3));
    plVar8[0x49] = 0;
    plVar8[0x4a] = 0;
    plVar8[0x4b] = 0;
    plVar8[0x4c] = 0;
    plVar8[0x4d] = 0;
    plVar8[0x4e] = 0;
    *(undefined4 *)(plVar8 + 0x4f) = 0;
    Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
              ((SparseMatrix<double,0,int> *)(plVar8 + 0x50));
    plVar10 = plVar8;
  }
  pTVar1 = &this->Impl;
  if ((TPimplPtr<UE::Geometry::FWrapMesh::FImpl,0> *)&lStack_140 == pTVar1) {
    if ((FImpl *)(plVar10 + 2) == (FImpl *)0x0) goto LAB_14c816e70;
    pcVar9 = (code *)*plVar10;
  }
  else {
    pFVar19 = pTVar1->Ptr;
    pTVar1->Ptr = (FImpl *)(plVar10 + 2);
    if (pFVar19 == (FImpl *)0x0) goto LAB_14c816e70;
    pcVar9 = (code *)pFVar19[-1].SourceLaplacian.m_data.m_size;
    plVar10 = &pFVar19[-1].SourceLaplacian.m_data.m_size;
  }
  (*pcVar9)(plVar10);
LAB_14c816e70:
  if (this->bWeldSourceMesh != false) {
    pTVar1->Ptr->bIsWelded = true;
    TStack_190.ToSrcVertIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_190.ToSrcVertIDMap.ArrayNum = 0;
    TStack_190.ToSrcVertIDMap.ArrayMax = 0;
    TStack_190.ToSrcTriIDMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_190.ToSrcTriIDMap.ArrayNum = 0;
    TStack_190.ToSrcTriIDMap.ArrayMax = 0;
    TStack_190.Time_AfterVertices.Ticks = 0;
    TStack_190.Time_AfterTriangles.Ticks = 0;
    Geometry::Private::FMeshWeldingWrapper::FMeshWeldingWrapper
              (&FStack_138,this->SourceMesh,this->SourceMeshWeldingThreshold);
    FDynamicMesh3::EnableAttributes(&pTVar1->Ptr->WeldedSourceMesh);
    pFVar19 = pTVar1->Ptr;
    pcStack_160 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FWrapMesh::Initialize'::__l12::<lambda_1>,int,int_const_&>
                  ::Call;
    puStack_158 = &uStack_1c8;
    TToDynamicMeshBase<UE::Geometry::Private::FMeshWeldingWrapper>::Convert
              (&TStack_190,&pFVar19->WeldedSourceMesh,&FStack_138,
               (TFunctionRef<int___cdecl(int_const_&)> *)&pcStack_160);
    pcStack_150 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FWrapMesh::Initialize'::__l12::<lambda_2>,int,int_const_&>
                  ::Call;
    puStack_148 = auStack_1c7;
    TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper>::PopulateOverlays
              ((TToDynamicMesh<UE::Geometry::Private::FMeshWeldingWrapper> *)&TStack_190,
               &pFVar19->WeldedSourceMesh,&FStack_138,
               (TFunctionRef<int___cdecl(int_const_&)> *)&pcStack_150,false);
    aiStack_1b8[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&pTVar1->Ptr->SourceToWelded,aiStack_1b8,
               (this->SourceMesh->VertexRefCounts).RefCounts.CurBlockUsed +
               (this->SourceMesh->VertexRefCounts).RefCounts.CurBlock * 0x200);
    TStack_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_1a8.ArrayNum = 0;
    TStack_1a8.ArrayMax = 0;
    aiStack_1b8[1] = 0xffffffff;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&TStack_1a8,aiStack_1b8 + 1,
               (pTVar1->Ptr->WeldedSourceMesh).VertexRefCounts.RefCounts.CurBlockUsed +
               (pTVar1->Ptr->WeldedSourceMesh).VertexRefCounts.RefCounts.CurBlock * 0x200);
    uVar7 = 0;
    if (0 < TStack_190.ToSrcVertIDMap.ArrayNum) {
      lStack_198 = 0;
      plVar10 = plVar14;
      do {
        lVar16 = lStack_198;
        uVar12 = (uint)plVar10;
        uVar13 = 0;
        if ((int)uVar12 < TStack_190.ToSrcVertIDMap.ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar13 = *(uint *)(TStack_190.ToSrcVertIDMap.AllocatorInstance.Data + lVar16);
        lVar16 = (longlong)(int)uVar13;
        pFStack_1c0 = pTVar1->Ptr;
        uVar18 = ~uVar13 >> 0x1f;
        uVar17 = uVar7;
        if ((int)uVar13 < (pFStack_1c0->SourceToWelded).ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((pFStack_1c0->SourceToWelded).AllocatorInstance.Data + lVar16 * 4) == -1) {
          pFStack_1c0 = pTVar1->Ptr;
          uVar17 = uVar7;
          if ((int)uVar13 < (pFStack_1c0->SourceToWelded).ArrayNum) {
            uVar17 = uVar18;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(uint *)((pFStack_1c0->SourceToWelded).AllocatorInstance.Data + lVar16 * 4) = uVar12;
        }
        pFStack_1c0 = pTVar1->Ptr;
        uVar17 = uVar7;
        if ((int)uVar13 < (pFStack_1c0->SourceToWelded).ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar3 = *(undefined4 *)((pFStack_1c0->SourceToWelded).AllocatorInstance.Data + lVar16 * 4);
        uVar13 = uVar7;
        if ((int)uVar12 < TStack_1a8.ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar10 = (long64 *)(ulonglong)(uVar12 + 1);
        *(undefined4 *)(TStack_1a8.AllocatorInstance.Data + lStack_198) = uVar3;
        lStack_198 = lStack_198 + 4;
        this = pFStack_1b0;
      } while ((int)(uVar12 + 1) < TStack_190.ToSrcVertIDMap.ArrayNum);
    }
    pFVar19 = pTVar1->Ptr;
    plVar10 = plVar14;
    if (0 < (pFVar19->SourceToWelded).ArrayNum) {
      do {
        pFVar15 = this->SourceMesh;
        uVar13 = (uint)plVar14;
        if (((-1 < (int)uVar13) &&
            ((int)uVar13 <
             (int)((pFVar15->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar15->VertexRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar15->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + ((ulonglong)plVar14 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2)
                    - 1U) < 0xfffe)) {
          uVar17 = ~uVar13 >> 0x1f;
          uVar12 = uVar7;
          if ((int)uVar13 < (pFVar19->SourceToWelded).ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this = pFStack_1b0;
          if (*(int *)((longlong)plVar10 +
                      (longlong)(pFVar19->SourceToWelded).AllocatorInstance.Data) == -1) {
            pFVar19 = pTVar1->Ptr;
            uVar12 = uVar7;
            if ((int)uVar13 < FStack_138.OriginalToMerged.ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar12 = *(uint *)((longlong)plVar10 +
                              FStack_138.OriginalToMerged.AllocatorInstance.Data);
            uVar18 = uVar7;
            if ((int)uVar12 < (pFVar19->SourceToWelded).ArrayNum) {
              uVar18 = ~uVar12 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar5 = pTVar1->Ptr;
            uVar3 = *(undefined4 *)
                     ((pFVar19->SourceToWelded).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
            uVar12 = uVar7;
            if ((int)uVar13 < (pFVar5->SourceToWelded).ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)
             ((longlong)plVar10 + (longlong)(pFVar5->SourceToWelded).AllocatorInstance.Data) = uVar3
            ;
            this = pFStack_1b0;
          }
        }
        pFVar19 = pTVar1->Ptr;
        plVar14 = (long64 *)(ulonglong)(uVar13 + 1);
        plVar10 = (long64 *)((longlong)plVar10 + 4);
      } while ((int)(uVar13 + 1) < (pFVar19->SourceToWelded).ArrayNum);
    }
    FNonManifoldMappingSupport::AttachNonManifoldVertexMappingData
              (&TStack_1a8,&pFVar19->WeldedSourceMesh);
    if (TStack_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_1a8.AllocatorInstance.Data);
    }
    if (FStack_138.EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.EmptyArray.AllocatorInstance.Data);
    }
    if (FStack_138.TriIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.TriIds.AllocatorInstance.Data);
    }
    if (FStack_138.OriginalToMerged.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.OriginalToMerged.AllocatorInstance.Data);
    }
    if (FStack_138.OriginalIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_138.OriginalIndexes.AllocatorInstance.Data);
    }
    if (TStack_190.ToSrcTriIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_190.ToSrcTriIDMap.AllocatorInstance.Data);
    }
    if (TStack_190.ToSrcVertIDMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_190.ToSrcVertIDMap.AllocatorInstance.Data);
    }
  }
  pFVar19 = pTVar1->Ptr;
  pFVar15 = &pFVar19->WeldedSourceMesh;
  if (pFVar19->bIsWelded == false) {
    pFVar15 = this->SourceMesh;
  }
  Geometry::Private::FNonManifoldVertexLinearization::Initialize
            (&pFVar19->SourceVtxLinearization,pFVar15);
  iVar4 = *(int *)&(pTVar1->Ptr->SourceVtxLinearization).field_0x8;
  FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&FStack_e8,iVar4,iVar4);
  EVar2 = this->LaplacianType;
  if (EVar2 == CotangentNoArea) {
    Geometry::Private::ConstructCotangentNoAreaLaplacian
              (pFVar15,(FVertexLinearization *)&pTVar1->Ptr->SourceVtxLinearization,
               &pTVar1->Ptr->SourceLaplacian);
  }
  else if ((EVar2 == CotangentAreaWeighted) || (EVar2 != AffineInvariant)) {
    Geometry::Private::ConstructCotangentWeightedLaplacian
              (pFVar15,(FVertexLinearization *)&pTVar1->Ptr->SourceVtxLinearization,
               &pTVar1->Ptr->SourceLaplacian);
  }
  else {
    Geometry::Private::ConstructAffineInvariantLaplacian
              (pFVar15,(FVertexLinearization *)&pTVar1->Ptr->SourceVtxLinearization,
               &pTVar1->Ptr->SourceLaplacian);
  }
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
            (&FStack_e8.EntryTriplets);
  if (FStack_e8.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
    FMemory_Free((FStack_e8.Matrix.Ptr)->m_outerIndex);
    FMemory_Free((FStack_e8.Matrix.Ptr)->m_innerNonZeros);
    operator_delete__(((FStack_e8.Matrix.Ptr)->m_data).m_values);
    operator_delete__(((FStack_e8.Matrix.Ptr)->m_data).m_indices);
    ::operator_delete(FStack_e8.Matrix.Ptr,0x48);
  }
  if (FStack_e8._padding_ != 0) {
    plVar11 = &FStack_e8._padding_;
    if ((longlong *)FStack_e8._padding_ != (longlong *)0x0) {
      plVar11 = (longlong *)FStack_e8._padding_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (FStack_e8._padding_ != 0) {
    plVar11 = &FStack_e8._padding_;
    if ((longlong *)FStack_e8._padding_ != (longlong *)0x0) {
      plVar11 = (longlong *)FStack_e8._padding_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (FStack_e8._padding_ != 0) {
    plVar11 = &FStack_e8._padding_;
    if ((longlong *)FStack_e8._padding_ != (longlong *)0x0) {
      plVar11 = (longlong *)FStack_e8._padding_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// WrapToTargetShape @ 14c8517f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FWrapMesh::WrapToTargetShape
          (FWrapMesh *this,FDynamicMesh3 *param_1,
          TArray<UE::Geometry::FWrapMeshCorrespondence,TSizedDefaultAllocator<32>_> *param_2,
          FDynamicMesh3 *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FMutex *pFVar3;
  uint *puVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t _Size;
  atomic<unsigned_char> aVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FImpl *pFVar13;
  FDynamicMesh3 *pFVar14;
  int *piVar15;
  long64 lVar16;
  int *piVar17;
  int *piVar18;
  long64 lVar19;
  long64 lVar20;
  code *pcVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  TVar25;
  bool bVar26;
  char cVar27;
  short sVar28;
  int iVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  longlong *plVar32;
  uint uVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  ulong64 uVar36;
  longlong lVar37;
  scalar_sum_op<double,double> sVar38;
  longlong lVar39;
  int iVar40;
  uint uVar41;
  long64 lVar42;
  uint uVar43;
  FWrapMesh *pFVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStackY_998 [32];
  scalar_sum_op<double,double> local_968 [8];
  FWrapMesh *local_960;
  assign_op<double,double> local_958 [4];
  uint local_954;
  PlainObjectBase<Eigen::Matrix<double,_1,_1,0,_1,_1>_> local_950;
  FDynamicMesh3 *local_938;
  FScriptContainerElement *local_930;
  longlong *local_928;
  double *local_920;
  longlong local_918;
  longlong local_910;
  IndexIterator local_908;
  SparseMatrix<double,0,int> local_8f8;
  int local_8a8 [2];
  int local_8a0 [2];
  int local_898 [2];
  undefined4 local_890;
  int local_888 [2];
  int local_880 [2];
  int local_878 [2];
  FImpl *local_870;
  FDynamicMesh3 *local_868;
  DenseStorage<double,_1,_1,1,0> local_860;
  double local_850;
  double local_848;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_840;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_838;
  BaseIterator local_830;
  IndexIterator local_820;
  double local_810;
  SparseMatrix<double,0,int> local_808;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  double local_7a8;
  IndexIterator local_7a0;
  PlainObjectBase<Eigen::Matrix<double,_1,_1,0,_1,_1>_> local_790;
  undefined1 local_778 [16];
  TVector<double>_u_0 local_768;
  double *local_748;
  longlong local_740;
  double **local_730;
  undefined8 local_728;
  ulonglong local_720;
  longlong local_718;
  SparseMatrix<double,0,int> local_708;
  CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>
  local_6b8;
  undefined8 local_640;
  FDynamicMesh3 local_638;
  FEigenSparseMatrixAssembler local_408;
  FEigenSparseMatrixAssembler local_358;
  undefined8 local_2a8 [2];
  longlong local_298;
  longlong local_288 [3];
  longlong *local_270;
  undefined1 local_268;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_258;
  TDistPoint3Triangle3<double> local_198;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [22];
  
  local_e8[2] = __security_cookie.value ^ (ulonglong)auStackY_998;
  local_960 = this;
  local_868 = param_3;
  if ((this->SourceMesh == (FDynamicMesh3 *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceMesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                          ,0x235,L""), bVar26)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  FDynamicMesh3::Copy(param_3,this->SourceMesh,true,true,true,true);
  FDynamicMesh3::FDynamicMesh3(&local_638);
  pFVar13 = (this->Impl).Ptr;
  if (pFVar13->bIsWelded != false) {
    FDynamicMesh3::Copy(&local_638,&pFVar13->WeldedSourceMesh,true,true,true,true);
  }
  local_938 = &local_638;
  if (((this->Impl).Ptr)->bIsWelded == false) {
    local_938 = param_3;
  }
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_258,param_1,true);
  local_870 = (this->Impl).Ptr;
  local_954 = *(uint *)&(local_870->SourceVtxLinearization).field_0x8;
  lVar39 = (longlong)(int)local_954;
  FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_358,local_954,local_954);
  local_8a8[0] = param_2->ArrayNum;
  Core::Private::Function::CheckCallable((void *)local_358._padding_);
  lVar37 = local_358._padding_;
  plVar32 = &local_358._padding_;
  if ((longlong *)local_358._padding_ != (longlong *)0x0) {
    plVar32 = (longlong *)local_358._padding_;
  }
  uVar30 = (**(code **)(*plVar32 + 8))();
  (*(code *)lVar37)(uVar30,local_8a8);
  local_950.m_storage.m_cols = 0;
  local_950.m_storage.m_data = (double *)0x0;
  local_950.m_storage.m_rows = 0;
  Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>_>::resize(&local_950,lVar39,3);
  lVar42 = local_950.m_storage.m_rows;
  local_850 = 0.0;
  std::fill_n<double_*,__int64,double>
            (local_950.m_storage.m_data,local_950.m_storage.m_cols * local_950.m_storage.m_rows,
             &local_850);
  pFVar35 = (param_2->AllocatorInstance).Data;
  iVar40 = param_2->ArrayNum;
  local_930 = pFVar35 + (longlong)iVar40 * 8;
  while( true ) {
    pFVar1 = local_930;
    if (param_2->ArrayNum != iVar40) {
      local_968[0] = (scalar_sum_op<double,double>)0x0;
      `TCheckedPointerIterator<UE::Geometry::FWrapMeshCorrespondence_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_968);
    }
    if (pFVar35 == pFVar1) break;
    uVar43 = *(uint *)pFVar35;
    pFVar14 = local_960->SourceMesh;
    if ((((int)uVar43 < 0) ||
        ((int)((pFVar14->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (pFVar14->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar43)) ||
       ((lVar42 = local_950.m_storage.m_rows,
        0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((pFVar14->VertexRefCounts).RefCounts.Blocks.AllocatorInstance
                                       .Data + (ulonglong)(uVar43 >> 9) * 8) +
                                    (ulonglong)(uVar43 & 0x1ff) * 2) - 1U) ||
        (((uVar41 = *(uint *)(pFVar35 + 4), (int)uVar41 < 0 ||
          ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar41)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8) +
                                      (ulonglong)(uVar41 & 0x1ff) * 2) - 1U))))))) {
      pFVar35 = pFVar35 + 8;
    }
    else {
      pFVar13 = (local_960->Impl).Ptr;
      if (pFVar13->bIsWelded != false) {
        uVar41 = 0;
        if ((int)uVar43 < (pFVar13->SourceToWelded).ArrayNum) {
          uVar41 = ~uVar43 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        uVar43 = *(uint *)((pFVar13->SourceToWelded).AllocatorInstance.Data +
                          (longlong)(int)uVar43 * 4);
      }
      pFVar13 = local_870;
      uVar41 = 0;
      if ((int)uVar43 < *(int *)&(local_870->SourceVtxLinearization).field_0x18) {
        uVar41 = ~uVar43 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      iVar29 = *(int *)(*(longlong *)&(pFVar13->SourceVtxLinearization).field_0x10 +
                       (longlong)(int)uVar43 * 4);
      local_810 = local_960->CorrespondenceStiffness;
      local_8a0[0] = iVar29;
      local_898[0] = iVar29;
      Core::Private::Function::CheckCallable((void *)local_358._padding_);
      lVar37 = local_358._padding_;
      plVar32 = &local_358._padding_;
      if ((longlong *)local_358._padding_ != (longlong *)0x0) {
        plVar32 = (longlong *)local_358._padding_;
      }
      uVar30 = (**(code **)(*plVar32 + 8))();
      (*(code *)lVar37)(uVar30,local_898,local_8a0,&local_810);
      pFVar1 = pFVar35 + 4;
      uVar34 = (ulonglong)(*(uint *)pFVar1 & 0x1ff);
      pFVar35 = pFVar35 + 8;
      lVar37 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)pFVar1 >> 9) * 8);
      local_950.m_storage.m_data[iVar29] =
           *(double *)(lVar37 + uVar34 * 0x18) * local_960->CorrespondenceStiffness;
      local_950.m_storage.m_data[local_950.m_storage.m_rows + iVar29] =
           *(double *)(lVar37 + 8 + uVar34 * 0x18) * local_960->CorrespondenceStiffness;
      local_950.m_storage.m_data[(longlong)iVar29 + local_950.m_storage.m_rows * 2] =
           *(double *)(lVar37 + 0x10 + uVar34 * 0x18) * local_960->CorrespondenceStiffness;
      lVar42 = local_950.m_storage.m_rows;
    }
  }
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_708);
  FEigenSparseMatrixAssembler::ExtractResult(&local_358,&local_708);
  local_890 = 4;
  ConstructMatrixSolver((EMatrixSolverType *)&local_928);
  uVar34 = (ulonglong)(int)local_954;
  local_790.m_storage.m_cols = 0;
  local_790.m_storage.m_data = (double *)0x0;
  local_790.m_storage.m_rows = 0;
  Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>_>::resize(&local_790,uVar34,3);
  pFVar14 = local_938;
  uVar30 = __real_7fefffffffffffff;
  dVar22 = __real_3ff0000000000000;
  iVar40 = 0;
  local_930 = (FScriptContainerElement *)((ulonglong)local_930 & 0xffffffff00000000);
  dVar10 = local_960->InitialProjectionStiffness;
  pFVar44 = local_960;
  sVar38 = local_968[0];
  if (local_960->MaxNumOuterIterations < 1) {
LAB_14c852825:
    pFVar14 = local_868;
    if (((pFVar44->Impl).Ptr)->bIsWelded != false) {
      FRefCountVector::IndexIterator::IndexIterator
                (&local_908,&local_868->VertexRefCounts,0,
                 (local_868->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (local_868->VertexRefCounts).RefCounts.CurBlockUsed);
      iVar40 = (pFVar14->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar14->VertexRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_820,&pFVar14->VertexRefCounts,iVar40,iVar40);
      uVar43 = local_820._8_4_;
      if (local_908._8_4_ != local_820._8_4_) {
        do {
          uVar53 = local_908._8_4_;
          pFVar13 = (pFVar44->Impl).Ptr;
          uVar41 = 0;
          if ((int)local_908._8_4_ < (pFVar13->SourceToWelded).ArrayNum) {
            uVar41 = (uint)~local_908._8_4_ >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          uVar41 = *(uint *)((pFVar13->SourceToWelded).AllocatorInstance.Data +
                            (longlong)(int)uVar53 * 4);
          uVar34 = (ulonglong)(uVar41 & 0x1ff);
          lVar37 = *(longlong *)
                    (local_638.Vertices.Blocks.AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8
                    );
          local_640 = *(undefined8 *)(lVar37 + 0x10 + uVar34 * 0x18);
          puVar6 = (undefined4 *)(lVar37 + uVar34 * 0x18);
          uVar54 = puVar6[2];
          sVar28 = _dclass(*puVar6);
          if (((sVar28 < 1) && (sVar28 = _dclass(uVar54), sVar28 < 1)) &&
             (sVar28 = _dclass((int)local_640), pFVar14 = local_868, sVar28 < 1)) {
            puVar7 = (undefined8 *)(lVar37 + uVar34 * 0x18);
            uVar31 = puVar7[1];
            uVar30 = *(undefined8 *)(lVar37 + 0x10 + uVar34 * 0x18);
            lVar37 = *(longlong *)
                      ((local_868->Vertices).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)uVar53 >> 9) * 8);
            puVar8 = (undefined8 *)(lVar37 + (ulonglong)(uVar53 & 0x1ff) * 0x18);
            *puVar8 = *puVar7;
            puVar8[1] = uVar31;
            *(undefined8 *)(lVar37 + 0x10 + (ulonglong)(uVar53 & 0x1ff) * 0x18) = uVar30;
            if ((local_868->ChangeStampShape).bIsEnabled != false) {
              pFVar3 = &(local_868->ChangeStampShape).Mutex;
              LOCK();
              bVar26 = pFVar3->State == (atomic<unsigned_char>)0x0;
              if (bVar26) {
                pFVar3->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar26) {
                FMutex::LockSlow(pFVar3);
              }
              puVar4 = &(pFVar14->ChangeStampShape).Value;
              *puVar4 = *puVar4 + 1;
              LOCK();
              aVar9 = pFVar3->State;
              pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
              UNLOCK();
              if (((byte)aVar9 & 2) != 0) {
                FMutex::WakeWaitingThread(pFVar3);
              }
            }
          }
          local_908._8_4_ = uVar53 + 1;
          if ((int)local_908._8_4_ < (int)local_908._12_4_) {
            do {
              uVar43 = local_820._8_4_;
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_908._0_8_ + 8) +
                               (ulonglong)((uint)local_908._8_4_ >> 9) * 8) +
                             (ulonglong)(local_908._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_908._0_8_ + 8) +
                              (ulonglong)((uint)local_908._8_4_ >> 9) * 8) +
                            (ulonglong)(local_908._8_4_ & 0x1ff) * 2) != -1)) break;
              local_908._8_4_ = local_908._8_4_ + 1;
            } while ((int)local_908._8_4_ < (int)local_908._12_4_);
          }
          pFVar44 = local_960;
        } while (local_908._8_4_ != uVar43);
      }
    }
    FMemory_Free(local_790.m_storage.m_data);
    if (local_928 != (longlong *)0x0) {
      (**(code **)*local_928)(local_928,1);
    }
    FMemory_Free(local_708.m_outerIndex);
    FMemory_Free(local_708.m_innerNonZeros);
    operator_delete__(local_708.m_data.m_values);
    operator_delete__(local_708.m_data.m_indices);
    FMemory_Free(local_950.m_storage.m_data);
    std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
    ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
              (&local_358.EntryTriplets);
    if (local_358.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
      FMemory_Free((local_358.Matrix.Ptr)->m_outerIndex);
      FMemory_Free((local_358.Matrix.Ptr)->m_innerNonZeros);
      operator_delete__(((local_358.Matrix.Ptr)->m_data).m_values);
      operator_delete__(((local_358.Matrix.Ptr)->m_data).m_indices);
      ::operator_delete(local_358.Matrix.Ptr,0x48);
    }
    if (local_358._padding_ != 0) {
      plVar32 = &local_358._padding_;
      if ((longlong *)local_358._padding_ != (longlong *)0x0) {
        plVar32 = (longlong *)local_358._padding_;
      }
      (**(code **)(*plVar32 + 0x10))();
    }
    if ((code *)local_358._padding_ != (code *)0x0) {
      plVar32 = &local_358._padding_;
      if ((longlong *)local_358._padding_ != (longlong *)0x0) {
        plVar32 = (longlong *)local_358._padding_;
      }
      (**(code **)(*plVar32 + 0x10))();
    }
    if ((code *)local_358._padding_ != (code *)0x0) {
      plVar32 = &local_358._padding_;
      if ((longlong *)local_358._padding_ != (longlong *)0x0) {
        plVar32 = (longlong *)local_358._padding_;
      }
      (**(code **)(*plVar32 + 0x10))();
    }
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              (&local_258);
    FDynamicMesh3::~FDynamicMesh3(&local_638);
    return;
  }
LAB_14c851cf0:
  local_938 = (FDynamicMesh3 *)((ulonglong)local_938 & 0xffffffff00000000);
  if (0 < pFVar44->NumInnerIterations) {
LAB_14c851d03:
    iVar40 = (int)uVar34;
    FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_408,iVar40,iVar40);
    local_888[0] = iVar40;
    Core::Private::Function::CheckCallable((void *)local_408._padding_);
    lVar37 = local_408._padding_;
    plVar32 = &local_408._padding_;
    if ((longlong *)local_408._padding_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_408._padding_;
    }
    uVar31 = (**(code **)(*plVar32 + 8))();
    (*(code *)lVar37)(uVar31,local_888);
    lVar16 = local_950.m_storage.m_cols;
    uVar36 = local_950.m_storage.m_cols * lVar42;
    local_920 = Eigen::internal::conditional_aligned_new_auto<double,1>(uVar36);
    _Size = uVar36 * 8;
    local_910 = lVar16;
    local_918 = lVar42;
    if (_Size != 0) {
      memcpy(local_920,local_950.m_storage.m_data,_Size);
    }
    uVar53 = 0;
    uVar54 = 0;
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_830,&pFVar14->VertexRefCounts,0,
               (pFVar14->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar14->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar40 = (pFVar14->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar14->VertexRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator
              (&local_7a0,&pFVar14->VertexRefCounts,iVar40,iVar40);
    uVar24 = local_7a0._8_4_;
    pFVar13 = local_870;
    iVar40 = local_830.Index;
    while (iVar40 != uVar24) {
      uVar41 = (uint)local_830._8_8_;
      pdVar5 = (double *)
               (*(longlong *)
                 ((pFVar14->Vertices).Blocks.AllocatorInstance.Data +
                 ((local_830._8_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar41 & 0x1ff) * 0x18);
      uVar43 = 0;
      if ((int)uVar41 < *(int *)&(pFVar13->SourceVtxLinearization).field_0x18) {
        uVar43 = ~uVar41 >> 0x1f;
      }
      if ((uVar43 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      local_2a8[0] = uVar30;
      iVar40 = *(int *)(*(longlong *)&(pFVar13->SourceVtxLinearization).field_0x10 +
                       (longlong)(int)uVar41 * 4);
      lVar37 = (longlong)iVar40;
      local_298 = 0;
      local_270 = (longlong *)0x0;
      local_268 = 0;
      iVar29 = (**(code **)(local_258._padding_ + 0x20))(&local_258,pdVar5,local_778,local_2a8);
      if (iVar29 < 0) {
        uVar49 = *(undefined4 *)pdVar5;
        uVar50 = *(undefined4 *)((longlong)pdVar5 + 4);
        uVar51 = *(undefined4 *)(pdVar5 + 1);
        uVar52 = *(undefined4 *)((longlong)pdVar5 + 0xc);
        uVar45 = SUB84(pdVar5[2],0);
        uVar46 = (undefined4)((ulonglong)pdVar5[2] >> 0x20);
      }
      else {
        local_768._s_0.X = *pdVar5;
        local_768._s_0.Y = pdVar5[1];
        local_768._s_0.Z = pdVar5[2];
        TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
                  (&local_198,local_258.Mesh,iVar29,(TVector<double> *)&local_768._s_0);
        uVar45 = SUB84(local_198.ClosestTrianglePoint.field0_0x0._s_0.Z,0);
        uVar46 = (undefined4)((ulonglong)local_198.ClosestTrianglePoint.field0_0x0._16_8_ >> 0x20);
        uVar49 = local_198.ClosestTrianglePoint.field0_0x0._0_4_;
        uVar50 = local_198.ClosestTrianglePoint.field0_0x0._4_4_;
        uVar51 = local_198.ClosestTrianglePoint.field0_0x0._8_4_;
        uVar52 = local_198.ClosestTrianglePoint.field0_0x0._12_4_;
      }
      local_7a8 = (double)CONCAT44(uVar46,uVar45);
      local_7b8 = uVar49;
      uStack_7b4 = uVar50;
      uStack_7b0 = uVar51;
      uStack_7ac = uVar52;
      if (local_298 != 0) {
        plVar32 = local_288;
        if (local_270 != (longlong *)0x0) {
          plVar32 = local_270;
        }
        (**(code **)(*plVar32 + 0x10))();
      }
      dVar23 = local_7a8;
      dVar48 = *pdVar5 - (double)CONCAT44(uVar50,uVar49);
      dVar47 = pdVar5[1] - (double)CONCAT44(uVar52,uVar51);
      dVar47 = dVar47 * dVar47 + dVar48 * dVar48 + (pdVar5[2] - local_7a8) * (pdVar5[2] - local_7a8)
      ;
      dVar48 = dVar47;
      if (dVar47 <= (double)CONCAT44(uVar54,uVar53)) {
        dVar48 = (double)CONCAT44(uVar54,uVar53);
      }
      uVar53 = SUB84(dVar48,0);
      uVar54 = (undefined4)((ulonglong)dVar48 >> 0x20);
      dVar48 = dVar10 / (dVar47 * dVar10 + dVar22);
      local_880[0] = iVar40;
      local_878[0] = iVar40;
      local_848 = dVar48;
      Core::Private::Function::CheckCallable((void *)local_408._padding_);
      lVar39 = local_408._padding_;
      plVar32 = &local_408._padding_;
      if ((longlong *)local_408._padding_ != (longlong *)0x0) {
        plVar32 = (longlong *)local_408._padding_;
      }
      uVar31 = (**(code **)(*plVar32 + 8))();
      (*(code *)lVar39)(uVar31,local_878,local_880,&local_848);
      local_920[lVar37] = (double)CONCAT44(uVar50,uVar49) * dVar48 + local_920[lVar37];
      local_920[local_918 + lVar37] =
           (double)CONCAT44(uVar52,uVar51) * dVar48 + local_920[local_918 + lVar37];
      lVar37 = lVar37 + local_918 * 2;
      local_920[lVar37] = dVar23 * dVar48 + local_920[lVar37];
      FRefCountVector::BaseIterator::goto_next(&local_830);
      pFVar44 = local_960;
      iVar40 = local_830.Index;
    }
    if (pFVar44->ProjectionTolerance * pFVar44->ProjectionTolerance <=
        (double)CONCAT44(uVar54,uVar53)) {
      uVar34 = 0;
      local_8f8._padding_._0_1_ = 0;
      local_8f8.m_outerIndex = (int *)0x0;
      local_8f8.m_innerNonZeros = (int *)0x0;
      local_8f8.m_data.m_values = (double *)0x0;
      local_8f8.m_data.m_indices = (int *)0x0;
      local_8f8.m_data.m_allocatedSize = 0;
      local_8f8.m_innerSize = 0;
      local_8f8.m_data.m_size = 0;
      local_8f8.m_outerSize = -1;
      FMemory_Free((void *)0x0);
      local_8f8.m_outerIndex = FMemory_Malloc(4,0x10);
      if (local_8f8.m_outerIndex == (int *)0x0) {
        ::operator_new(0xffffffffffffffff);
      }
      local_8f8.m_outerSize = 0;
      if (local_8f8.m_innerNonZeros != (int *)0x0) {
        FMemory_Free(local_8f8.m_innerNonZeros);
        local_8f8.m_innerNonZeros = (int *)0x0;
      }
      memset(local_8f8.m_outerIndex,0,local_8f8.m_outerSize * 4 + 4);
      local_840 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )local_408.EntryTriplets._Mypair._Myval2._Mylast;
      local_838 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )local_408.EntryTriplets._Mypair._Myval2._Myfirst;
      Eigen::internal::
      set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                (&local_838,&local_840,local_408.Matrix.Ptr,sVar38);
      Eigen::SparseMatrix<double,0,int>::makeCompressed(local_408.Matrix.Ptr);
      local_6b8._padding_._0_1_ = 0;
      local_6b8.m_lhs._padding_._0_1_ = 0;
      piVar15 = (local_408.Matrix.Ptr)->m_outerIndex;
      lVar42 = (local_408.Matrix.Ptr)->m_innerSize;
      (local_408.Matrix.Ptr)->m_outerIndex = local_8f8.m_outerIndex;
      lVar16 = (local_408.Matrix.Ptr)->m_outerSize;
      (local_408.Matrix.Ptr)->m_innerSize = local_8f8.m_innerSize;
      piVar17 = (local_408.Matrix.Ptr)->m_innerNonZeros;
      (local_408.Matrix.Ptr)->m_outerSize = local_8f8.m_outerSize;
      pdVar5 = ((local_408.Matrix.Ptr)->m_data).m_values;
      (local_408.Matrix.Ptr)->m_innerNonZeros = local_8f8.m_innerNonZeros;
      piVar18 = ((local_408.Matrix.Ptr)->m_data).m_indices;
      ((local_408.Matrix.Ptr)->m_data).m_values = local_8f8.m_data.m_values;
      lVar19 = ((local_408.Matrix.Ptr)->m_data).m_size;
      ((local_408.Matrix.Ptr)->m_data).m_indices = local_8f8.m_data.m_indices;
      lVar20 = ((local_408.Matrix.Ptr)->m_data).m_allocatedSize;
      ((local_408.Matrix.Ptr)->m_data).m_size = local_8f8.m_data.m_size;
      ((local_408.Matrix.Ptr)->m_data).m_allocatedSize = local_8f8.m_data.m_allocatedSize;
      local_6b8.m_lhs.m_lhs.m_lhs.m_functor.m_other = pFVar44->LaplacianStiffness;
      pFVar13 = (pFVar44->Impl).Ptr;
      local_6b8.m_lhs.m_lhs.m_rhs = &pFVar13->SourceLaplacian;
      local_6b8.m_lhs.m_lhs._padding_._0_1_ = 0;
      local_6b8.m_lhs.m_lhs.m_lhs.m_rows.m_value = (pFVar13->SourceLaplacian).m_innerSize;
      local_6b8.m_lhs.m_lhs.m_lhs.m_cols.m_value = (pFVar13->SourceLaplacian).m_outerSize;
      local_6b8.m_lhs.m_rhs = &local_8f8;
      local_6b8.m_rhs = &local_708;
      local_808._padding_._0_1_ = 0;
      local_808.m_outerSize = 0;
      local_808.m_innerSize = 0;
      local_808.m_outerIndex = (int *)0x0;
      local_808.m_innerNonZeros = (int *)0x0;
      local_808.m_data.m_values = (double *)0x0;
      local_808.m_data.m_indices = (int *)0x0;
      local_808.m_data.m_size = 0;
      local_808.m_data.m_allocatedSize = 0;
      local_8f8.m_outerSize = lVar16;
      local_8f8.m_innerSize = lVar42;
      local_8f8.m_outerIndex = piVar15;
      local_8f8.m_innerNonZeros = piVar17;
      local_8f8.m_data.m_values = pdVar5;
      local_8f8.m_data.m_indices = piVar18;
      local_8f8.m_data.m_size = lVar19;
      local_8f8.m_data.m_allocatedSize = lVar20;
      Eigen::internal::
      assign_sparse_to_sparse<Eigen::SparseMatrix<double,0,int>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
                (&local_808,&local_6b8);
      (**(code **)(*local_928 + 0x28))(local_928,&local_808,1);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_e8[0] = 0;
      local_e8[1] = 0;
LAB_14c852272:
      plVar32 = local_928;
      local_740 = local_918;
      local_728 = 0;
      pcVar21 = *(code **)(*local_928 + 0x20);
      local_718 = local_918;
      local_860.m_data = (double *)0x0;
      local_860.m_rows = 0;
      local_748 = local_920 + uVar34 * local_918;
      local_730 = &local_920;
      local_720 = uVar34;
      Eigen::DenseStorage<double,-1,-1,1,0>::resize(&local_860,local_918,local_918,1);
      Eigen::internal::
      call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Block<Eigen::Matrix<double,_1,_1,0,_1,_1>,_1,1,1>,Eigen::internal::assign_op<double,double>_>
                ((Matrix<double,_1,1,0,_1,1> *)&local_860,
                 (Block<Eigen::Matrix<double,_1,_1,0,_1,_1>,_1,1,1> *)&local_748,local_958);
      (*pcVar21)(plVar32);
      FMemory_Free(local_860.m_data);
      cVar27 = (**(code **)(*local_928 + 0x38))();
      pFVar13 = local_870;
      if (cVar27 != '\0') goto code_r0x00014c85232b;
      bVar26 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3440846464312410776>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\WrapMesh.cpp"
                          ,0x298,"Solver->bSucceeded()");
      if (bVar26) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      plVar32 = local_e8 + 2;
      lVar37 = 3;
      do {
        plVar2 = plVar32 + -2;
        plVar32 = plVar32 + -2;
        FMemory_Free((void *)*plVar2);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      FMemory_Free(local_808.m_outerIndex);
      FMemory_Free(local_808.m_innerNonZeros);
      operator_delete__(local_808.m_data.m_values);
      operator_delete__(local_808.m_data.m_indices);
      FMemory_Free(local_8f8.m_outerIndex);
      FMemory_Free(local_8f8.m_innerNonZeros);
      operator_delete__(local_8f8.m_data.m_values);
      operator_delete__(local_8f8.m_data.m_indices);
      FMemory_Free(local_920);
      std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
      ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                (&local_408.EntryTriplets);
      if (local_408.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
        FMemory_Free((local_408.Matrix.Ptr)->m_outerIndex);
        FMemory_Free((local_408.Matrix.Ptr)->m_innerNonZeros);
        operator_delete__(((local_408.Matrix.Ptr)->m_data).m_values);
        operator_delete__(((local_408.Matrix.Ptr)->m_data).m_indices);
        ::operator_delete(local_408.Matrix.Ptr,0x48);
      }
      if (local_408._padding_ != 0) {
        plVar32 = &local_408._padding_;
        if ((longlong *)local_408._padding_ != (longlong *)0x0) {
          plVar32 = (longlong *)local_408._padding_;
        }
        (**(code **)(*plVar32 + 0x10))();
      }
      if ((code *)local_408._padding_ != (code *)0x0) {
        plVar32 = &local_408._padding_;
        if ((longlong *)local_408._padding_ != (longlong *)0x0) {
          plVar32 = (longlong *)local_408._padding_;
        }
        (**(code **)(*plVar32 + 0x10))();
      }
      pFVar44 = local_960;
      if ((code *)local_408._padding_ != (code *)0x0) {
        plVar32 = &local_408._padding_;
        if ((longlong *)local_408._padding_ != (longlong *)0x0) {
          plVar32 = (longlong *)local_408._padding_;
        }
        (**(code **)(*plVar32 + 0x10))();
        pFVar44 = local_960;
      }
      goto LAB_14c852825;
    }
    FMemory_Free(local_920);
    std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
    ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
              (&local_408.EntryTriplets);
    if (local_408.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
      FMemory_Free((local_408.Matrix.Ptr)->m_outerIndex);
      FMemory_Free((local_408.Matrix.Ptr)->m_innerNonZeros);
      operator_delete__(((local_408.Matrix.Ptr)->m_data).m_values);
      operator_delete__(((local_408.Matrix.Ptr)->m_data).m_indices);
      ::operator_delete(local_408.Matrix.Ptr,0x48);
    }
    Solvers::TSparseMatrixAssembler<double>::~TSparseMatrixAssembler<double>
              ((TSparseMatrixAssembler<double> *)&local_408);
    goto LAB_14c852825;
  }
  goto LAB_14c85266f;
code_r0x00014c85232b:
  uVar43 = (int)uVar34 + 1;
  uVar34 = (ulonglong)uVar43;
  if (2 < (int)uVar43) goto code_r0x00014c852338;
  goto LAB_14c852272;
code_r0x00014c852338:
  uVar41 = (pFVar14->VertexRefCounts).RefCounts.CurBlockUsed +
           (pFVar14->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar43 = 0;
  if ((uVar41 != 0) &&
     (pFVar35 = (pFVar14->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar43 = 0,
     0xfffd < (ushort)(**(short **)pFVar35 - 1U))) {
    uVar33 = 1;
    uVar43 = 1;
    if (1 < (int)uVar41) {
      do {
        sVar28 = *(short *)(*(longlong *)(pFVar35 + (ulonglong)(uVar33 >> 9) * 8) +
                           (ulonglong)(uVar33 & 0x1ff) * 2);
        sVar38 = local_968[0];
        if ((sVar28 != 0) && (uVar43 = uVar33, sVar28 != -1)) break;
        uVar33 = uVar33 + 1;
        uVar43 = uVar33;
      } while ((int)uVar33 < (int)uVar41);
    }
  }
joined_r0x00014c85239f:
  if (uVar43 != uVar41) {
    while( true ) {
      uVar33 = 0;
      if ((int)uVar43 < *(int *)&(pFVar13->SourceVtxLinearization).field_0x18) {
        uVar33 = ~uVar43 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      lVar37 = (longlong)
               *(int *)(*(longlong *)&(pFVar13->SourceVtxLinearization).field_0x10 +
                       (longlong)(int)uVar43 * 4);
      uVar31 = *(undefined8 *)(local_108 + lVar37 * 8);
      uVar11 = *(undefined8 *)(local_f8 + lVar37 * 8);
      uVar12 = *(undefined8 *)(local_e8[0] + lVar37 * 8);
      sVar28 = _dclass((int)uVar31);
      if (((sVar28 < 1) && (sVar28 = _dclass((int)uVar11), sVar28 < 1)) &&
         (sVar28 = _dclass((int)uVar12), sVar28 < 1)) {
        uVar34 = (ulonglong)(uVar43 & 0x1ff);
        lVar37 = *(longlong *)
                  ((pFVar14->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar43 >> 9) * 8)
        ;
        *(undefined8 *)(lVar37 + uVar34 * 0x18) = uVar31;
        *(undefined8 *)(lVar37 + 8 + uVar34 * 0x18) = uVar11;
        *(undefined8 *)(lVar37 + 0x10 + uVar34 * 0x18) = uVar12;
        if ((pFVar14->ChangeStampShape).bIsEnabled != false) {
          pFVar3 = &(pFVar14->ChangeStampShape).Mutex;
          LOCK();
          bVar26 = pFVar3->State == (atomic<unsigned_char>)0x0;
          if (bVar26) {
            pFVar3->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar26) {
            FMutex::LockSlow(pFVar3);
          }
          puVar4 = &(pFVar14->ChangeStampShape).Value;
          *puVar4 = *puVar4 + 1;
          LOCK();
          aVar9 = pFVar3->State;
          pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
          UNLOCK();
          if (((byte)aVar9 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar3);
          }
        }
      }
      uVar43 = uVar43 + 1;
      sVar38 = local_968[0];
      if ((int)uVar41 <= (int)uVar43) break;
      while( true ) {
        lVar37 = *(longlong *)
                  ((pFVar14->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar43 >> 9) * 8);
        if ((*(short *)(lVar37 + (ulonglong)(uVar43 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar37 + (ulonglong)(uVar43 & 0x1ff) * 2) != -1)) break;
        uVar43 = uVar43 + 1;
        if ((int)uVar41 <= (int)uVar43) goto joined_r0x00014c85239f;
      }
    }
    goto joined_r0x00014c85239f;
  }
  plVar32 = local_e8 + 2;
  lVar37 = 3;
  do {
    plVar2 = plVar32 + -2;
    plVar32 = plVar32 + -2;
    FMemory_Free((void *)*plVar2);
    lVar37 = lVar37 + -1;
  } while (lVar37 != 0);
  FMemory_Free(local_808.m_outerIndex);
  FMemory_Free(local_808.m_innerNonZeros);
  operator_delete__(local_808.m_data.m_values);
  operator_delete__(local_808.m_data.m_indices);
  FMemory_Free(local_8f8.m_outerIndex);
  FMemory_Free(local_8f8.m_innerNonZeros);
  operator_delete__(local_8f8.m_data.m_values);
  operator_delete__(local_8f8.m_data.m_indices);
  FMemory_Free(local_920);
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
            (&local_408.EntryTriplets);
  TVar25.Ptr = local_408.Matrix.Ptr;
  if (local_408.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
    FMemory_Free((local_408.Matrix.Ptr)->m_outerIndex);
    FMemory_Free((TVar25.Ptr)->m_innerNonZeros);
    operator_delete__(((TVar25.Ptr)->m_data).m_values);
    operator_delete__(((TVar25.Ptr)->m_data).m_indices);
    ::operator_delete(TVar25.Ptr,0x48);
  }
  if (local_408._padding_ != 0) {
    plVar32 = &local_408._padding_;
    if ((longlong *)local_408._padding_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_408._padding_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if ((code *)local_408._padding_ != (code *)0x0) {
    plVar32 = &local_408._padding_;
    if ((longlong *)local_408._padding_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_408._padding_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if ((code *)local_408._padding_ != (code *)0x0) {
    plVar32 = &local_408._padding_;
    if ((longlong *)local_408._padding_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_408._padding_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  iVar40 = (int)local_938 + 1;
  uVar34 = (ulonglong)local_954;
  local_938 = (FDynamicMesh3 *)CONCAT44(local_938._4_4_,iVar40);
  lVar42 = local_950.m_storage.m_rows;
  pFVar44 = local_960;
  if (local_960->NumInnerIterations <= iVar40) goto code_r0x00014c85266b;
  goto LAB_14c851d03;
code_r0x00014c85266b:
  iVar40 = (int)local_930;
LAB_14c85266f:
  dVar10 = dVar10 * pFVar44->ProjectionStiffnessMuliplier;
  iVar40 = iVar40 + 1;
  local_930 = (FScriptContainerElement *)CONCAT44(local_930._4_4_,iVar40);
  if (pFVar44->MaxNumOuterIterations <= iVar40) goto LAB_14c852825;
  goto LAB_14c851cf0;
}

