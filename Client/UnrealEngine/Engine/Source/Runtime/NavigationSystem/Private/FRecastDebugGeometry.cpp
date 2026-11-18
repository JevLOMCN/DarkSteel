// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// FRecastDebugGeometry @ 146dd6fd0

FRecastDebugGeometry * __thiscall
FRecastDebugGeometry::FRecastDebugGeometry(FRecastDebugGeometry *this)

{
  undefined1 *puVar1;
  FRecastDebugGeometry *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0x40;
  (this->MeshVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshVerts).ArrayNum = 0;
  (this->MeshVerts).ArrayMax = 0;
  lVar5 = 0x40;
  pFVar2 = this;
  do {
    pFVar2->AreaIndices[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2->AreaIndices[0].ArrayNum = 0;
    pFVar2->AreaIndices[0].ArrayMax = 0;
    lVar5 = lVar5 + -1;
    pFVar2 = (FRecastDebugGeometry *)pFVar2->AreaIndices;
  } while (lVar5 != 0);
  (this->ForbiddenIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar3 = this->OffMeshSegmentAreas;
  (this->ForbiddenIndices).ArrayNum = 0;
  (this->ForbiddenIndices).ArrayMax = 0;
  (this->BuiltMeshIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuiltMeshIndices).ArrayNum = 0;
  (this->BuiltMeshIndices).ArrayMax = 0;
  this->TileBuildTimesIndices[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TileBuildTimesIndices[0].ArrayNum = 0;
  this->TileBuildTimesIndices[0].ArrayMax = 0;
  this->TileBuildTimesIndices[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TileBuildTimesIndices[1].ArrayNum = 0;
  this->TileBuildTimesIndices[1].ArrayMax = 0;
  this->TileBuildTimesIndices[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TileBuildTimesIndices[2].ArrayNum = 0;
  this->TileBuildTimesIndices[2].ArrayMax = 0;
  this->TileBuildTimesIndices[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TileBuildTimesIndices[3].ArrayNum = 0;
  this->TileBuildTimesIndices[3].ArrayMax = 0;
  this->TileBuildTimesIndices[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TileBuildTimesIndices[4].ArrayNum = 0;
  this->TileBuildTimesIndices[4].ArrayMax = 0;
  (this->PolyEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PolyEdges).ArrayNum = 0;
  (this->PolyEdges).ArrayMax = 0;
  (this->NavMeshEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavMeshEdges).ArrayNum = 0;
  (this->NavMeshEdges).ArrayMax = 0;
  (this->OffMeshLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffMeshLinks).ArrayNum = 0;
  (this->OffMeshLinks).ArrayMax = 0;
  (this->ForbiddenLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForbiddenLinks).ArrayNum = 0;
  (this->ForbiddenLinks).ArrayMax = 0;
  (this->Clusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Clusters).ArrayNum = 0;
  (this->Clusters).ArrayMax = 0;
  (this->ClusterLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterLinks).ArrayNum = 0;
  (this->ClusterLinks).ArrayMax = 0;
  (this->OffMeshSegments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffMeshSegments).ArrayNum = 0;
  (this->OffMeshSegments).ArrayMax = 0;
  do {
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
    pTVar3 = pTVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  this->bGatherPolyEdges = 0;
  this->bGatherTileBuildTimesHeatMap = 0;
  this->bMarkForbiddenPolys = 0;
  this->bGatherNavMeshEdges = 0;
  this->MinTileBuildTime = 1.7976931348623157e+308;
  (this->TilesToDisplayInternalData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesToDisplayInternalData).ArrayNum = 0;
  (this->TilesToDisplayInternalData).ArrayMax = 0;
  this->MaxTileBuildTime = 0.0;
  return this;
}

// ~FRecastDebugGeometry @ 146dd9cf0

void __thiscall FRecastDebugGeometry::~FRecastDebugGeometry(FRecastDebugGeometry *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->TilesToDisplayInternalData;
  pFVar1 = (((TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *)pTVar3)->
           AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar4 = 0x40;
  lVar2 = 0x40;
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->OffMeshSegments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClusterLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRecastDebugGeometry::FCluster,int>
            ((FCluster *)(this->Clusters).AllocatorInstance.Data,(this->Clusters).ArrayNum);
  pFVar1 = (this->Clusters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ForbiddenLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OffMeshLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NavMeshEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->PolyEdges;
  pFVar1 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)pTVar3)->
           AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar2 = 5;
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->BuiltMeshIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar3 = &this->ForbiddenIndices;
  pFVar1 = (pTVar3->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pFVar1 = (this->MeshVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetAllocatedSize @ 146e00210

uint __thiscall FRecastDebugGeometry::GetAllocatedSize(FRecastDebugGeometry *this)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  longlong lVar18;
  longlong lVar19;
  
  uVar10 = 0;
  lVar13 = ((longlong)(this->OffMeshSegments).ArrayMax * 0x1a +
            ((longlong)(this->NavMeshEdges).ArrayMax + (longlong)(this->PolyEdges).ArrayMax +
            (longlong)(this->MeshVerts).ArrayMax + 0x61) * 6 +
            (longlong)(this->OffMeshLinks).ArrayMax * 0x10 +
           (longlong)(this->BuiltMeshIndices).ArrayMax) * 4;
  if (__isa_available < 2) {
    piVar7 = &this->AreaIndices[0].ArrayMax;
    lVar9 = 0x40;
    do {
      iVar1 = *piVar7;
      piVar7 = piVar7 + 4;
      lVar13 = lVar13 + (longlong)iVar1 * 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    lVar18 = 0;
    lVar19 = 0;
    lVar9 = 0;
    lVar4 = 0;
    lVar8 = 0x10;
    piVar7 = &this->AreaIndices[1].ArrayMax;
    do {
      auVar15._4_4_ = *piVar7;
      auVar15._0_4_ = piVar7[-4];
      auVar15._8_8_ = 0;
      auVar15 = pmovsxdq(in_XMM1,auVar15);
      auVar17._0_8_ = auVar15._0_8_ * 4;
      auVar17._8_8_ = auVar15._8_8_ * 4;
      auVar16._4_4_ = piVar7[8];
      auVar16._0_4_ = piVar7[4];
      lVar18 = lVar18 + auVar17._0_8_;
      lVar19 = lVar19 + auVar17._8_8_;
      auVar16._8_8_ = 0;
      auVar15 = pmovsxdq(auVar17,auVar16);
      in_XMM1._0_8_ = auVar15._0_8_ * 4;
      in_XMM1._8_8_ = auVar15._8_8_ * 4;
      lVar9 = lVar9 + in_XMM1._0_8_;
      lVar4 = lVar4 + in_XMM1._8_8_;
      lVar8 = lVar8 + -1;
      piVar7 = piVar7 + 0x10;
    } while (lVar8 != 0);
    auVar3._8_4_ = (int)(lVar4 + lVar19);
    auVar3._0_8_ = lVar9 + lVar18;
    auVar3._12_4_ = (int)((ulonglong)(lVar4 + lVar19) >> 0x20);
    lVar13 = lVar13 + lVar9 + lVar18 + auVar3._8_8_;
  }
  uVar14 = lVar13 + ((longlong)this->TileBuildTimesIndices[4].ArrayMax +
                     ((longlong)(this->ClusterLinks).ArrayMax * 3 +
                     (longlong)(this->Clusters).ArrayMax) * 4 +
                     (longlong)this->TileBuildTimesIndices[3].ArrayMax +
                     (longlong)this->TileBuildTimesIndices[2].ArrayMax +
                     (longlong)this->TileBuildTimesIndices[1].ArrayMax +
                    (longlong)this->TileBuildTimesIndices[0].ArrayMax) * 4;
  uVar12 = uVar10;
  if (0 < (this->Clusters).ArrayNum) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < (this->Clusters).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      lVar13 = uVar10 + 0xc;
      uVar10 = uVar10 + 0x10;
      uVar14 = uVar14 + (longlong)*(int *)((this->Clusters).AllocatorInstance.Data + lVar13) * 4;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (this->Clusters).ArrayNum);
  }
  if ((uVar14 != (uVar14 & 0xffffffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  return (uint)uVar14;
}

