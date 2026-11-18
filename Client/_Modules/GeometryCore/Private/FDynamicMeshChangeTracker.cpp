// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 7

// FDynamicMeshChangeTracker @ 143452580

FDynamicMeshChangeTracker * __thiscall
UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
          (FDynamicMeshChangeTracker *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FDynamicMeshAttributeSetChangeTracker *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  
  this->AttribChangeTracker = (FDynamicMeshAttributeSetChangeTracker *)0x0;
  (this->StartTriangles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->Change = (FDynamicMeshChange *)0x0;
  (this->StartTriangles).NumBits = 0;
  (this->StartTriangles).MaxBits = 0x80;
  (this->ChangedTriangles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ChangedTriangles).NumBits = 0;
  (this->ChangedTriangles).MaxBits = 0x80;
  (this->StartVertices).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->StartVertices).NumBits = 0;
  (this->StartVertices).MaxBits = 0x80;
  (this->ChangedVertices).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ChangedVertices).NumBits = 0;
  (this->ChangedVertices).MaxBits = 0x80;
  this->Mesh = param_1;
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    pFVar2 = ::operator_new(0x78);
    if (pFVar2 != (FDynamicMeshAttributeSetChangeTracker *)0x0) {
      pFVar1 = (this->Mesh->AttributeSet).Ptr;
      (pFVar2->UVStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->UVStates).ArrayNum = 0;
      (pFVar2->UVStates).ArrayMax = 0;
      (pFVar2->NormalStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar3 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar3 = pFVar1;
      }
      (pFVar2->NormalStates).ArrayNum = 0;
      (pFVar2->NormalStates).ArrayMax = 0;
      (pFVar2->ColorState).StartElements.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      pFVar2->Change = (FDynamicMeshAttributeChangeSet *)0x0;
      (pFVar2->ColorState).StartElements.NumBits = 0;
      (pFVar2->ColorState).StartElements.MaxBits = 0x80;
      (pFVar2->ColorState).ChangedElements.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      (pFVar2->ColorState).ChangedElements.NumBits = 0;
      (pFVar2->ColorState).ChangedElements.MaxBits = 0x80;
      pFVar2->Attribs = pFVar3;
      this->AttribChangeTracker = pFVar2;
      return this;
    }
    this->AttribChangeTracker = (FDynamicMeshAttributeSetChangeTracker *)0x0;
  }
  return this;
}

// ~FDynamicMeshChangeTracker @ 143454ac0

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(FDynamicMeshChangeTracker *this)

{
  FDynamicMeshAttributeSetChangeTracker *pFVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = this->AttribChangeTracker;
  if (pFVar1 != (FDynamicMeshAttributeSetChangeTracker *)0x0) {
    FVar2 = (pFVar1->ColorState).ChangedElements.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->ColorState).StartElements.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    DestructItems<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,int>
              ((FElementState *)(pFVar1->NormalStates).AllocatorInstance.Data,
               (pFVar1->NormalStates).ArrayNum);
    pFVar3 = (pFVar1->NormalStates).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<UE::Geometry::FDynamicMeshAttributeSetChangeTracker::FElementState,int>
              ((FElementState *)(pFVar1->UVStates).AllocatorInstance.Data,
               (pFVar1->UVStates).ArrayNum);
    pFVar3 = (pFVar1->UVStates).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x78);
    this->AttribChangeTracker = (FDynamicMeshAttributeSetChangeTracker *)0x0;
  }
  FVar2 = (this->ChangedVertices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->StartVertices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->ChangedTriangles).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar2 = (this->StartTriangles).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// BeginChange @ 143474f40

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::BeginChange(FDynamicMeshChangeTracker *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  uint *puVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  bool bVar6;
  FDynamicMeshChange *pFVar7;
  FDynamicMeshChange *pFVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  int iVar11;
  uint uVar12;
  FDynamicMeshChange *pFVar13;
  uint uVar14;
  
  if ((this->Change != (FDynamicMeshChange *)0x0) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1327787060794229474>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\DynamicMesh\\DynamicMeshChangeTracker.cpp"
                         ,0x2e2,"Change == nullptr"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = ::operator_new(0x48);
  pFVar13 = (FDynamicMeshChange *)0x0;
  pFVar8 = pFVar13;
  if (pFVar7 != (FDynamicMeshChange *)0x0) {
    (pFVar7->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->OldVertices).ArrayNum = 0;
    (pFVar7->OldVertices).ArrayMax = 0;
    (pFVar7->OldTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->OldTriangles).ArrayNum = 0;
    (pFVar7->OldTriangles).ArrayMax = 0;
    (pFVar7->NewVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->NewVertices).ArrayNum = 0;
    (pFVar7->NewVertices).ArrayMax = 0;
    (pFVar7->NewTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->NewTriangles).ArrayNum = 0;
    (pFVar7->NewTriangles).ArrayMax = 0;
    (pFVar7->AttributeChanges).Ptr = (FDynamicMeshAttributeChangeSet *)0x0;
    pFVar8 = pFVar7;
  }
  this->Change = pFVar8;
  pTVar1 = &this->StartVertices;
  iVar11 = (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200;
  this->MaxVertexID = iVar11;
  (this->StartVertices).NumBits = iVar11;
  uVar14 = iVar11 + 0x1fU >> 5;
  if (iVar11 + 0x1fU >> 5 != 0) {
    if ((this->StartVertices).MaxBits + 0x1fU >> 5 < uVar14) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar14,4);
      (this->StartVertices).MaxBits = uVar14 << 5;
    }
    FVar9 = (this->StartVertices).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    memset((void *)FVar9,0,(ulonglong)uVar14 << 2);
    iVar11 = (this->StartVertices).NumBits;
    uVar12 = iVar11 >> 0x1f & 0x1f;
    uVar14 = iVar11 + uVar12;
    iVar11 = (uVar14 & 0x1f) - uVar12;
    if (iVar11 != 0) {
      FVar9 = (this->StartVertices).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar14 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (-(char)iVar11 & 0x1fU);
    }
  }
  iVar11 = this->MaxVertexID;
  pTVar2 = &this->ChangedVertices;
  (this->ChangedVertices).NumBits = iVar11;
  uVar14 = iVar11 + 0x1f;
  uVar12 = uVar14 >> 5;
  if (uVar14 >> 5 != 0) {
    if ((this->ChangedVertices).MaxBits + 0x1fU >> 5 < uVar12) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar2->AllocatorInstance,0,uVar12,4);
      (this->ChangedVertices).MaxBits = uVar12 << 5;
    }
    FVar9 = (this->ChangedVertices).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar2;
    }
    memset((void *)FVar9,0,(ulonglong)uVar12 << 2);
    iVar11 = (this->ChangedVertices).NumBits;
    uVar12 = iVar11 >> 0x1f & 0x1f;
    uVar14 = iVar11 + uVar12;
    iVar11 = (uVar14 & 0x1f) - uVar12;
    if (iVar11 != 0) {
      FVar9 = (this->ChangedVertices).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar14 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (-(char)iVar11 & 0x1fU);
    }
  }
  pFVar8 = pFVar13;
  if (0 < this->MaxVertexID) {
    do {
      pFVar4 = this->Mesh;
      uVar14 = (uint)pFVar8;
      if (((-1 < (int)uVar14) &&
          ((int)uVar14 <
           (int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               ((ulonglong)pFVar8 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        if (((this->StartVertices).NumBits <= (int)uVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9 = (this->StartVertices).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)pTVar1;
        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar9;
        }
        uVar12 = uVar14;
        if ((int)uVar14 < 0) {
          uVar12 = uVar14 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)((int)uVar12 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)pFVar8 & 0x1f);
      }
      pFVar8 = (FDynamicMeshChange *)(ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < this->MaxVertexID);
  }
  pTVar1 = &this->StartTriangles;
  iVar11 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  this->MaxTriangleID = iVar11;
  (this->StartTriangles).NumBits = iVar11;
  uVar14 = iVar11 + 0x1fU >> 5;
  if (iVar11 + 0x1fU >> 5 != 0) {
    if ((this->StartTriangles).MaxBits + 0x1fU >> 5 < uVar14) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar14,4);
      (this->StartTriangles).MaxBits = uVar14 << 5;
    }
    FVar9 = (this->StartTriangles).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    memset((void *)FVar9,0,(ulonglong)uVar14 << 2);
    iVar11 = (this->StartTriangles).NumBits;
    uVar12 = iVar11 >> 0x1f & 0x1f;
    uVar14 = iVar11 + uVar12;
    iVar11 = (uVar14 & 0x1f) - uVar12;
    if (iVar11 != 0) {
      FVar9 = (this->StartTriangles).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar14 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (-(char)iVar11 & 0x1fU);
    }
  }
  pTVar2 = &this->ChangedTriangles;
  (this->ChangedTriangles).NumBits = this->MaxTriangleID;
  uVar14 = this->MaxTriangleID + 0x1f;
  uVar12 = uVar14 >> 5;
  if (uVar14 >> 5 != 0) {
    if ((this->ChangedTriangles).MaxBits + 0x1fU >> 5 < uVar12) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar2->AllocatorInstance,0,uVar12,4);
      (this->ChangedTriangles).MaxBits = uVar12 << 5;
    }
    FVar9 = (this->ChangedTriangles).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar2;
    }
    memset((void *)FVar9,0,(ulonglong)uVar12 << 2);
    iVar11 = (this->ChangedTriangles).NumBits;
    uVar12 = iVar11 >> 0x1f & 0x1f;
    uVar14 = iVar11 + uVar12;
    iVar11 = (uVar14 & 0x1f) - uVar12;
    if (iVar11 != 0) {
      FVar9 = (this->ChangedTriangles).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar2;
      }
      puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar14 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar11 & 0x1f);
    }
  }
  if (0 < this->MaxTriangleID) {
    do {
      pFVar4 = this->Mesh;
      uVar14 = (uint)pFVar13;
      if (((-1 < (int)uVar14) &&
          ((int)uVar14 <
           (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + ((ulonglong)pFVar13 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 2) -
                  1U) < 0xfffe)) {
        if (((this->StartTriangles).NumBits <= (int)uVar14) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9 = (this->StartTriangles).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)pTVar1;
        if (FVar9 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar9;
        }
        uVar12 = uVar14;
        if ((int)uVar14 < 0) {
          uVar12 = uVar14 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)((int)uVar12 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)pFVar13 & 0x1f);
      }
      pFVar13 = (FDynamicMeshChange *)(ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < this->MaxTriangleID);
  }
  if (this->AttribChangeTracker != (FDynamicMeshAttributeSetChangeTracker *)0x0) {
    FDynamicMeshAttributeSetChangeTracker::BeginChange(this->AttribChangeTracker);
  }
  return;
}

// EndChange @ 1434b5c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
__thiscall UE::Geometry::FDynamicMeshChangeTracker::EndChange(FDynamicMeshChangeTracker *this)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  FDynamicMeshChange *pFVar7;
  FDynamicMesh3 *this_00;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar15;
  FVertexInfo *pFVar16;
  FDynamicMeshChange *in_RDX;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStack_1e8 [32];
  uint *local_1c8;
  FScriptContainerElement *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  uint local_198 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  uint local_178;
  undefined4 uStack_174;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  undefined8 uStack_158;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  TVector2<float>_u_0 local_140;
  ulonglong uStack_138;
  int local_128 [2];
  undefined8 local_120;
  uint local_118 [2];
  uint local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  FDynamicMeshAttributeChangeSet *local_f0;
  FVertexInfo local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar4 = this->Mesh;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  uVar23 = (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar20 = 0;
  if ((uVar23 != 0) &&
     (pFVar5 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar20 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar20 = 1;
    uVar19 = 1;
    if ((int)uVar23 < 2) goto joined_r0x0001434b5d14;
    do {
      lVar2 = (ulonglong)((uint)uVar20 & 0x1ff) * 2;
      lVar17 = *(longlong *)(pFVar5 + (uVar20 >> 9) * 8);
      if ((*(short *)(lVar2 + lVar17) != 0) && (*(short *)(lVar2 + lVar17) != -1)) break;
      uVar19 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)uVar23);
  }
  uVar19 = (uint)uVar20;
joined_r0x0001434b5d14:
  if (uVar19 == uVar23) {
    pFVar7 = this->Change;
    if (this->AttribChangeTracker != (FDynamicMeshAttributeSetChangeTracker *)0x0) {
      FDynamicMeshAttributeSetChangeTracker::StoreAllFinalTriangles
                (this->AttribChangeTracker,&local_190);
      FDynamicMeshAttributeSetChangeTracker::StoreAllFinalVertices
                (this->AttribChangeTracker,&local_a8);
      local_f0 = this->AttribChangeTracker->Change;
      FDynamicMeshChange::AttachAttributeChanges(pFVar7,(FDynamicMeshAttributeChangeSet *)&local_f0)
      ;
    }
    (in_RDX->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)pFVar7;
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
            )in_RDX;
  }
  do {
    uVar19 = (uint)uVar20;
    local_198[0] = uVar19;
    if ((int)uVar19 < this->MaxTriangleID) {
      if ((((int)uVar19 < 0) || ((this->StartTriangles).NumBits <= (int)uVar19)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                )TVar15.Ptr;
      }
      uVar22 = local_198[0];
      FVar6 = (this->StartTriangles).AllocatorInstance.SecondaryData;
      FVar21 = (ForElementType<unsigned_int>)&this->StartTriangles;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = FVar6;
      }
      uVar13 = uVar19;
      if ((int)uVar19 < 0) {
        uVar13 = uVar19 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar21 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar19 & 0x1f) & 1) ==
          0) goto LAB_1434b5df9;
      if ((((int)local_198[0] < 0) || ((this->ChangedTriangles).NumBits <= (int)local_198[0])) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                )TVar15.Ptr;
      }
      FVar6 = (this->ChangedTriangles).AllocatorInstance.SecondaryData;
      FVar21 = (ForElementType<unsigned_int>)&this->ChangedTriangles;
      if (FVar6 != (ForElementType<unsigned_int>)0x0) {
        FVar21 = FVar6;
      }
      uVar13 = uVar22 & 0x1f;
      if ((int)uVar22 < 0) {
        uVar22 = uVar22 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar21 + (longlong)((int)uVar22 >> 5) * 4) >> uVar13 & 1) != 0)
      goto LAB_1434b5df9;
    }
    else {
LAB_1434b5df9:
      lVar17 = *(longlong *)
                ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_198[0] >> 9) * 8);
      local_120 = *(undefined8 *)(lVar17 + (ulonglong)(local_198[0] & 0x1ff) * 0xc);
      uVar22 = *(uint *)(lVar17 + 8 + (ulonglong)(local_198[0] & 0x1ff) * 0xc);
      local_118[0] = uVar22;
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_a8.Hash.SecondaryData;
        }
        for (iVar14 = *(int *)((longlong)FVar18 +
                              (ulonglong)(local_a8.HashSize - 1U & (uint)local_120) * 4);
            iVar14 != -1; iVar14 = *(int *)(local_a8.Elements._0_8_ + 4 + (longlong)iVar14 * 0xc)) {
          if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar14 * 0xc) == (uint)local_120)
          goto LAB_1434b5fdf;
        }
      }
      pFVar7 = this->Change;
      dStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      fStack_144 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uStack_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uStack_14c = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uStack_148 = (undefined4)
                   ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uStack_138 = uStack_138 & 0xffffffffff000000;
      local_178 = (uint)local_120;
      pFVar16 = FDynamicMesh3::GetVertexInfo(this->Mesh,&local_e8,(uint)local_120);
      pFVar5 = (pFVar7->NewVertices).AllocatorInstance.Data;
      dStack_170 = (pFVar16->Position).field0_0x0._s_0.X;
      dStack_168 = (pFVar16->Position).field0_0x0._s_0.Y;
      dStack_160 = (pFVar16->Position).field0_0x0._s_0.Z;
      uStack_158 = *(undefined8 *)&(pFVar16->Normal).field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&(pFVar16->Normal).field0_0x0 + 8);
      uVar11 = *(undefined8 *)((longlong)&(pFVar16->Color).field0_0x0 + 4);
      local_150 = (float)uVar3;
      uStack_14c = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_148 = (undefined4)uVar11;
      fStack_144 = (float)((ulonglong)uVar11 >> 0x20);
      local_140 = (pFVar16->UV).field0_0x0;
      uStack_138._0_1_ = pFVar16->bHaveN;
      uStack_138._1_1_ = pFVar16->bHaveC;
      uStack_138._2_1_ = pFVar16->bHaveUV;
      uStack_138._3_5_ = *(undefined5 *)&pFVar16->field_0x3b;
      if ((pFVar5 <= (FScriptContainerElement *)&local_178) &&
         (lVar17 = (longlong)(pFVar7->NewVertices).ArrayMax,
         (FScriptContainerElement *)&local_178 < pFVar5 + lVar17 * 0x48)) {
        local_1b0 = (longlong)(pFVar7->NewVertices).ArrayNum;
        local_1a8 = 0x48;
        local_1c8 = &local_178;
        local_1c0 = pFVar5;
        local_1b8 = lVar17;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
          return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                  )TVar15.Ptr;
        }
      }
      iVar14 = (pFVar7->NewVertices).ArrayNum;
      piVar1 = &(pFVar7->NewVertices).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&(pFVar7->NewVertices).AllocatorInstance,piVar1);
      }
      (pFVar7->NewVertices).ArrayNum = iVar14 + 1;
      lVar17 = (longlong)iVar14;
      pFVar5 = (pFVar7->NewVertices).AllocatorInstance.Data;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48) = CONCAT44(uStack_174,local_178);
      *(double *)(pFVar5 + lVar17 * 0x48 + 8) = dStack_170;
      *(double *)(pFVar5 + lVar17 * 0x48 + 0x10) = dStack_168;
      *(double *)(pFVar5 + lVar17 * 0x48 + 0x10 + 8) = dStack_160;
      *(undefined8 *)(pFVar5 + lVar17 * 0x48 + 0x20) = uStack_158;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x20 + 8) = CONCAT44(uStack_14c,local_150);
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x30) = CONCAT44(fStack_144,uStack_148);
      *(TVector2<float>_u_0 *)(pFVar5 + lVar17 * 0x48 + 0x30 + 8) = local_140;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x40) = uStack_138;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_a8,local_128,(bool *)&local_120);
LAB_1434b5fdf:
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_a8.Hash.SecondaryData;
        }
        for (iVar14 = *(int *)((longlong)FVar18 +
                              (ulonglong)(local_a8.HashSize - 1U & local_120._4_4_) * 4);
            iVar14 != -1; iVar14 = *(int *)(local_a8.Elements._0_8_ + 4 + (longlong)iVar14 * 0xc)) {
          if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar14 * 0xc) == local_120._4_4_)
          goto LAB_1434b618e;
        }
      }
      pFVar7 = this->Change;
      dStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      fStack_144 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uStack_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uStack_14c = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uStack_148 = (undefined4)
                   ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uStack_138 = uStack_138 & 0xffffffffff000000;
      local_178 = local_120._4_4_;
      pFVar16 = FDynamicMesh3::GetVertexInfo(this->Mesh,&local_e8,local_120._4_4_);
      pFVar5 = (pFVar7->NewVertices).AllocatorInstance.Data;
      dStack_170 = (pFVar16->Position).field0_0x0._s_0.X;
      dStack_168 = (pFVar16->Position).field0_0x0._s_0.Y;
      dStack_160 = (pFVar16->Position).field0_0x0._s_0.Z;
      uStack_158 = *(undefined8 *)&(pFVar16->Normal).field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&(pFVar16->Normal).field0_0x0 + 8);
      uVar11 = *(undefined8 *)((longlong)&(pFVar16->Color).field0_0x0 + 4);
      local_150 = (float)uVar3;
      uStack_14c = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_148 = (undefined4)uVar11;
      fStack_144 = (float)((ulonglong)uVar11 >> 0x20);
      local_140 = (pFVar16->UV).field0_0x0;
      uStack_138._0_1_ = pFVar16->bHaveN;
      uStack_138._1_1_ = pFVar16->bHaveC;
      uStack_138._2_1_ = pFVar16->bHaveUV;
      uStack_138._3_5_ = *(undefined5 *)&pFVar16->field_0x3b;
      if ((pFVar5 <= (FScriptContainerElement *)&local_178) &&
         (lVar17 = (longlong)(pFVar7->NewVertices).ArrayMax,
         (FScriptContainerElement *)&local_178 < pFVar5 + lVar17 * 0x48)) {
        local_1b0 = (longlong)(pFVar7->NewVertices).ArrayNum;
        local_1a8 = 0x48;
        local_1c8 = &local_178;
        local_1c0 = pFVar5;
        local_1b8 = lVar17;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
          return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                  )TVar15.Ptr;
        }
      }
      iVar14 = (pFVar7->NewVertices).ArrayNum;
      piVar1 = &(pFVar7->NewVertices).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&(pFVar7->NewVertices).AllocatorInstance,piVar1);
      }
      (pFVar7->NewVertices).ArrayNum = iVar14 + 1;
      lVar17 = (longlong)iVar14;
      pFVar5 = (pFVar7->NewVertices).AllocatorInstance.Data;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48) = CONCAT44(uStack_174,local_178);
      *(double *)(pFVar5 + lVar17 * 0x48 + 8) = dStack_170;
      *(double *)(pFVar5 + lVar17 * 0x48 + 0x10) = dStack_168;
      *(double *)(pFVar5 + lVar17 * 0x48 + 0x10 + 8) = dStack_160;
      *(undefined8 *)(pFVar5 + lVar17 * 0x48 + 0x20) = uStack_158;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x20 + 8) = CONCAT44(uStack_14c,local_150);
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x30) = CONCAT44(fStack_144,uStack_148);
      *(TVector2<float>_u_0 *)(pFVar5 + lVar17 * 0x48 + 0x30 + 8) = local_140;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x40) = uStack_138;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_a8,local_128,(bool *)((longlong)&local_120 + 4));
LAB_1434b618e:
      if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_a8.Hash;
        if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_a8.Hash.SecondaryData;
        }
        for (iVar14 = *(int *)((longlong)FVar18 + (ulonglong)(local_a8.HashSize - 1U & uVar22) * 4);
            iVar14 != -1; iVar14 = *(int *)(local_a8.Elements._0_8_ + 4 + (longlong)iVar14 * 0xc)) {
          if (*(uint *)(local_a8.Elements._0_8_ + (longlong)iVar14 * 0xc) == uVar22)
          goto LAB_1434b633c;
        }
      }
      pFVar7 = this->Change;
      dStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      fStack_144 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uStack_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uStack_14c = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uStack_148 = (undefined4)
                   ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uStack_138 = uStack_138 & 0xffffffffff000000;
      local_178 = uVar22;
      pFVar16 = FDynamicMesh3::GetVertexInfo(this->Mesh,&local_e8,uVar22);
      pFVar5 = (pFVar7->NewVertices).AllocatorInstance.Data;
      dStack_170 = (pFVar16->Position).field0_0x0._s_0.X;
      dStack_168 = (pFVar16->Position).field0_0x0._s_0.Y;
      dStack_160 = (pFVar16->Position).field0_0x0._s_0.Z;
      uStack_158 = *(undefined8 *)&(pFVar16->Normal).field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&(pFVar16->Normal).field0_0x0 + 8);
      uVar11 = *(undefined8 *)((longlong)&(pFVar16->Color).field0_0x0 + 4);
      local_150 = (float)uVar3;
      uStack_14c = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_148 = (undefined4)uVar11;
      fStack_144 = (float)((ulonglong)uVar11 >> 0x20);
      local_140 = (pFVar16->UV).field0_0x0;
      uStack_138._0_1_ = pFVar16->bHaveN;
      uStack_138._1_1_ = pFVar16->bHaveC;
      uStack_138._2_1_ = pFVar16->bHaveUV;
      uStack_138._3_5_ = *(undefined5 *)&pFVar16->field_0x3b;
      if ((pFVar5 <= (FScriptContainerElement *)&local_178) &&
         (lVar17 = (longlong)(pFVar7->NewVertices).ArrayMax,
         (FScriptContainerElement *)&local_178 < pFVar5 + lVar17 * 0x48)) {
        local_1b0 = (longlong)(pFVar7->NewVertices).ArrayNum;
        local_1a8 = 0x48;
        local_1c8 = &local_178;
        local_1c0 = pFVar5;
        local_1b8 = lVar17;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
          return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                  )TVar15.Ptr;
        }
      }
      iVar14 = (pFVar7->NewVertices).ArrayNum;
      piVar1 = &(pFVar7->NewVertices).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&(pFVar7->NewVertices).AllocatorInstance,piVar1);
      }
      (pFVar7->NewVertices).ArrayNum = iVar14 + 1;
      lVar17 = (longlong)iVar14;
      pFVar5 = (pFVar7->NewVertices).AllocatorInstance.Data;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48) = CONCAT44(uStack_174,local_178);
      *(double *)(pFVar5 + lVar17 * 0x48 + 8) = dStack_170;
      *(double *)(pFVar5 + lVar17 * 0x48 + 0x10) = dStack_168;
      *(double *)(pFVar5 + lVar17 * 0x48 + 0x10 + 8) = dStack_160;
      *(undefined8 *)(pFVar5 + lVar17 * 0x48 + 0x20) = uStack_158;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x20 + 8) = CONCAT44(uStack_14c,local_150);
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x30) = CONCAT44(fStack_144,uStack_148);
      *(TVector2<float>_u_0 *)(pFVar5 + lVar17 * 0x48 + 0x30 + 8) = local_140;
      *(ulonglong *)(pFVar5 + lVar17 * 0x48 + 0x40) = uStack_138;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_a8,local_128,(bool *)local_118);
LAB_1434b633c:
      this_00 = this->Mesh;
      pFVar7 = this->Change;
      lVar17 = (ulonglong)(local_198[0] >> 9) * 8;
      local_110 = local_198[0];
      lVar2 = (ulonglong)(local_198[0] & 0x1ff) * 0xc;
      lVar8 = *(longlong *)((this_00->Triangles).Blocks.AllocatorInstance.Data + lVar17);
      uVar3 = *(undefined8 *)(lVar8 + lVar2);
      uStack_10c = (undefined4)uVar3;
      uStack_108 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_104 = *(undefined4 *)(lVar8 + 8 + lVar2);
      lVar17 = *(longlong *)((this_00->TriangleEdges).Blocks.AllocatorInstance.Data + lVar17);
      uVar3 = *(undefined8 *)(lVar17 + lVar2);
      uStack_100 = (undefined4)uVar3;
      uStack_fc = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_f8 = *(undefined4 *)(lVar17 + 8 + lVar2);
      iStack_f4 = FDynamicMesh3::GetTriangleGroup(this_00,local_198[0]);
      pFVar5 = (pFVar7->NewTriangles).AllocatorInstance.Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_110) &&
         (lVar17 = (longlong)(pFVar7->NewTriangles).ArrayMax,
         (FScriptContainerElement *)&local_110 < pFVar5 + lVar17 * 0x20)) {
        local_1b0 = (longlong)(pFVar7->NewTriangles).ArrayNum;
        local_1a8 = 0x20;
        local_1c8 = &local_110;
        local_1c0 = pFVar5;
        local_1b8 = lVar17;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
          return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                  )TVar15.Ptr;
        }
      }
      iVar14 = (pFVar7->NewTriangles).ArrayNum;
      piVar1 = &(pFVar7->NewTriangles).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x420,&(pFVar7->NewTriangles).AllocatorInstance,piVar1);
      }
      (pFVar7->NewTriangles).ArrayNum = iVar14 + 1;
      pFVar9 = (pFVar7->NewTriangles).AllocatorInstance.Data;
      pFVar5 = pFVar9 + (longlong)iVar14 * 0x20;
      *(ulonglong *)pFVar5 = CONCAT44(uStack_10c,local_110);
      *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_104,uStack_108);
      pFVar9 = pFVar9 + (longlong)iVar14 * 0x20 + 0x10;
      *(ulonglong *)pFVar9 = CONCAT44(uStack_fc,uStack_100);
      *(ulonglong *)(pFVar9 + 8) = CONCAT44(iStack_f4,uStack_f8);
      if (local_190.AllocatorInstance.Data <= (FScriptContainerElement *)local_198) {
        if ((FScriptContainerElement *)local_198 <
            local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 4) {
          local_1b0 = (longlong)local_190.ArrayNum;
          local_1a8 = 4;
          local_1c8 = local_198;
          local_1c0 = local_190.AllocatorInstance.Data;
          local_1b8 = (longlong)local_190.ArrayMax;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar10 = (code *)swi(3);
            TVar15.Ptr = (FDynamicMeshChange *)(*pcVar10)();
            return (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
                    )TVar15.Ptr;
          }
        }
      }
      iVar14 = local_190.ArrayNum;
      if (local_190.ArrayNum == local_190.ArrayMax) {
        iVar14 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_190.AllocatorInstance,&local_190.ArrayMax);
      }
      local_190.ArrayNum = iVar14 + 1;
      *(uint *)(local_190.AllocatorInstance.Data + (longlong)iVar14 * 4) = local_198[0];
    }
    uVar19 = uVar19 + 1;
    uVar20 = (ulonglong)uVar19;
    if ((int)uVar23 <= (int)uVar19) goto joined_r0x0001434b5d14;
    while( true ) {
      lVar2 = (ulonglong)((uint)uVar20 & 0x1ff) * 2;
      lVar17 = *(longlong *)
                ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                (uVar20 >> 9) * 8);
      if ((*(short *)(lVar2 + lVar17) != 0) && (*(short *)(lVar2 + lVar17) != -1)) break;
      uVar19 = (uint)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      if ((int)uVar23 <= (int)uVar19) goto joined_r0x0001434b5d14;
    }
  } while( true );
}

// SaveTriangle @ 14351eaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle
          (FDynamicMeshChangeTracker *this,int param_1,bool param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  FDynamicMesh3 *this_00;
  FDynamicMeshChange *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_58;
  int iStack_54;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  if (param_1 < this->MaxTriangleID) {
    if (((param_1 < 0) || ((this->ChangedTriangles).NumBits <= param_1)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar12 = (this->ChangedTriangles).AllocatorInstance.SecondaryData;
    uVar13 = 1 << ((byte)param_1 & 0x1f);
    lVar2 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
    if (FVar12 == (ForElementType<unsigned_int>)0x0) {
      FVar12 = (ForElementType<unsigned_int>)&this->ChangedTriangles;
    }
    if ((*(uint *)((longlong)FVar12 + lVar2) & uVar13) == 0) {
      if (((param_1 < 0) || ((this->StartTriangles).NumBits <= param_1)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar12 = (this->StartTriangles).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<unsigned_int>)0x0) {
        FVar12 = (ForElementType<unsigned_int>)&this->StartTriangles;
      }
      if ((*(uint *)((longlong)FVar12 + lVar2) & uVar13) != 0) {
        uVar14 = (ulonglong)(param_1 & 0x1ff);
        uVar15 = (ulonglong)((uint)param_1 >> 9);
        if (param_2) {
          lVar4 = *(longlong *)((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + uVar15 * 8);
          uVar3 = *(undefined8 *)(lVar4 + uVar14 * 0xc);
          iVar11 = *(int *)(lVar4 + 8 + uVar14 * 0xc);
          local_58 = (int)uVar3;
          SaveVertex(this,local_58);
          iStack_54 = (int)((ulonglong)uVar3 >> 0x20);
          SaveVertex(this,iStack_54);
          SaveVertex(this,iVar11);
        }
        this_00 = this->Mesh;
        lVar4 = uVar14 * 0xc;
        pFVar5 = this->Change;
        lVar6 = *(longlong *)((this_00->Triangles).Blocks.AllocatorInstance.Data + uVar15 * 8);
        uVar3 = *(undefined8 *)(lVar6 + lVar4);
        uStack_44 = (undefined4)uVar3;
        uStack_40 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_3c = *(undefined4 *)(lVar6 + 8 + lVar4);
        lVar6 = *(longlong *)((this_00->TriangleEdges).Blocks.AllocatorInstance.Data + uVar15 * 8);
        uVar3 = *(undefined8 *)(lVar6 + lVar4);
        uStack_38 = (undefined4)uVar3;
        uStack_34 = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_30 = *(undefined4 *)(lVar6 + 8 + lVar4);
        local_48 = param_1;
        iStack_2c = FDynamicMesh3::GetTriangleGroup(this_00,param_1);
        pFVar7 = (pFVar5->OldTriangles).AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar7 + (longlong)(pFVar5->OldTriangles).ArrayMax * 0x20)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar11 = (pFVar5->OldTriangles).ArrayNum;
        piVar1 = &(pFVar5->OldTriangles).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x420,&(pFVar5->OldTriangles).AllocatorInstance,piVar1);
        }
        (pFVar5->OldTriangles).ArrayNum = iVar11 + 1;
        pFVar8 = (pFVar5->OldTriangles).AllocatorInstance.Data;
        pFVar7 = pFVar8 + (longlong)iVar11 * 0x20;
        *(ulonglong *)pFVar7 = CONCAT44(uStack_44,local_48);
        *(ulonglong *)(pFVar7 + 8) = CONCAT44(uStack_3c,uStack_40);
        pFVar8 = pFVar8 + (longlong)iVar11 * 0x20 + 0x10;
        *(ulonglong *)pFVar8 = CONCAT44(uStack_34,uStack_38);
        *(ulonglong *)(pFVar8 + 8) = CONCAT44(iStack_2c,uStack_30);
        if (((param_1 < 0) || ((this->ChangedTriangles).NumBits <= param_1)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar12 = (this->ChangedTriangles).AllocatorInstance.SecondaryData;
        if (FVar12 == (ForElementType<unsigned_int>)0x0) {
          FVar12 = (ForElementType<unsigned_int>)&this->ChangedTriangles;
        }
        *(uint *)((longlong)FVar12 + lVar2) = *(uint *)((longlong)FVar12 + lVar2) | uVar13;
        if (this->AttribChangeTracker != (FDynamicMeshAttributeSetChangeTracker *)0x0) {
          FDynamicMeshAttributeSetChangeTracker::SaveInitialTriangle
                    (this->AttribChangeTracker,param_1);
        }
      }
    }
  }
  return;
}

// SaveVertex @ 14351eda0

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::SaveVertex(FDynamicMeshChangeTracker *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FDynamicMeshChange *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FVertexInfo *pFVar10;
  longlong lVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  uint uVar14;
  int local_a8;
  undefined4 uStack_a4;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  TVector2<float>_u_0 local_70;
  ulonglong uStack_68;
  FVertexInfo local_58;
  
  if (param_1 < this->MaxVertexID) {
    if (((param_1 < 0) || ((this->ChangedVertices).NumBits <= param_1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar12 = (this->ChangedVertices).AllocatorInstance.SecondaryData;
    uVar14 = 1 << ((byte)param_1 & 0x1f);
    lVar13 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
    if (FVar12 == (ForElementType<unsigned_int>)0x0) {
      FVar12 = (ForElementType<unsigned_int>)&this->ChangedVertices;
    }
    if ((*(uint *)((longlong)FVar12 + lVar13 * 4) & uVar14) == 0) {
      if (((param_1 < 0) || ((this->StartVertices).NumBits <= param_1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = (this->StartVertices).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<unsigned_int>)0x0) {
        FVar12 = (ForElementType<unsigned_int>)&this->StartVertices;
      }
      if ((*(uint *)((longlong)FVar12 + lVar13 * 4) & uVar14) != 0) {
        pFVar3 = this->Change;
        dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_80 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        fStack_74 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uStack_88 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uStack_7c = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uStack_78 = (undefined4)
                    ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_70 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        uStack_68 = uStack_68 & 0xffffffffff000000;
        local_a8 = param_1;
        pFVar10 = FDynamicMesh3::GetVertexInfo(this->Mesh,&local_58,param_1);
        pFVar4 = (pFVar3->OldVertices).AllocatorInstance.Data;
        dStack_a0 = (pFVar10->Position).field0_0x0._s_0.X;
        dStack_98 = (pFVar10->Position).field0_0x0._s_0.Y;
        dStack_90 = (pFVar10->Position).field0_0x0._s_0.Z;
        uStack_88 = *(undefined8 *)&(pFVar10->Normal).field0_0x0;
        uVar6 = *(undefined8 *)((longlong)&(pFVar10->Normal).field0_0x0 + 8);
        uVar7 = *(undefined8 *)((longlong)&(pFVar10->Color).field0_0x0 + 4);
        local_80 = (float)uVar6;
        uStack_7c = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_78 = (undefined4)uVar7;
        fStack_74 = (float)((ulonglong)uVar7 >> 0x20);
        local_70 = (pFVar10->UV).field0_0x0;
        uStack_68._0_1_ = pFVar10->bHaveN;
        uStack_68._1_1_ = pFVar10->bHaveC;
        uStack_68._2_1_ = pFVar10->bHaveUV;
        uStack_68._3_5_ = *(undefined5 *)&pFVar10->field_0x3b;
        if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 <
             pFVar4 + (longlong)(pFVar3->OldVertices).ArrayMax * 0x48)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (pFVar3->OldVertices).ArrayNum;
        piVar1 = &(pFVar3->OldVertices).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x848,(ForAnyElementType *)pFVar3,piVar1);
        }
        (pFVar3->OldVertices).ArrayNum = iVar9 + 1;
        lVar11 = (longlong)iVar9;
        pFVar4 = (pFVar3->OldVertices).AllocatorInstance.Data;
        *(ulonglong *)(pFVar4 + lVar11 * 0x48) = CONCAT44(uStack_a4,local_a8);
        *(double *)(pFVar4 + lVar11 * 0x48 + 8) = dStack_a0;
        *(double *)(pFVar4 + lVar11 * 0x48 + 0x10) = dStack_98;
        *(double *)(pFVar4 + lVar11 * 0x48 + 0x10 + 8) = dStack_90;
        *(undefined8 *)(pFVar4 + lVar11 * 0x48 + 0x20) = uStack_88;
        *(ulonglong *)(pFVar4 + lVar11 * 0x48 + 0x20 + 8) = CONCAT44(uStack_7c,local_80);
        *(ulonglong *)(pFVar4 + lVar11 * 0x48 + 0x30) = CONCAT44(fStack_74,uStack_78);
        *(TVector2<float>_u_0 *)(pFVar4 + lVar11 * 0x48 + 0x30 + 8) = local_70;
        *(ulonglong *)(pFVar4 + lVar11 * 0x48 + 0x40) = uStack_68;
        if (((param_1 < 0) || ((this->ChangedVertices).NumBits <= param_1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12 = (this->ChangedVertices).AllocatorInstance.SecondaryData;
        if (FVar12 == (ForElementType<unsigned_int>)0x0) {
          FVar12 = (ForElementType<unsigned_int>)&this->ChangedVertices;
        }
        puVar2 = (uint *)((longlong)FVar12 + lVar13 * 4);
        *puVar2 = *puVar2 | uVar14;
        if (this->AttribChangeTracker != (FDynamicMeshAttributeSetChangeTracker *)0x0) {
          FDynamicMeshAttributeSetChangeTracker::SaveInitialVertex
                    (this->AttribChangeTracker,param_1);
        }
      }
    }
  }
  return;
}

// VerifySaveState @ 143557690

void __thiscall
UE::Geometry::FDynamicMeshChangeTracker::VerifySaveState(FDynamicMeshChangeTracker *this)

{
  FDynamicMeshChange::VerifySaveState(this->Change);
  return;
}

