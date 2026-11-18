// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// operator= @ 146f97310

FNavMeshSceneProxyData * __thiscall
FNavMeshSceneProxyData::operator=(FNavMeshSceneProxyData *this,FNavMeshSceneProxyData *param_1)

{
  TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FNavMeshSceneProxyData::FDebugMeshData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDebugRenderSceneProxy::FDebugLine,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNavMeshSceneProxyData::FDebugPoint,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FNavMeshSceneProxyData::FDebugPoint,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FNavMeshSceneProxyData::FDebugText,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FBoxCenterAndExtent,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FBoxCenterAndExtent,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined4 uVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uint uVar25;
  
  pTVar1 = &param_1->MeshBuilders;
  pTVar2 = &this->MeshBuilders;
  if (pTVar2 != pTVar1) {
    DestructItems<FNavMeshSceneProxyData::FDebugMeshData,int>
              ((FDebugMeshData *)(pTVar2->AllocatorInstance).Data,(this->MeshBuilders).ArrayNum);
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeshBuilders).ArrayNum = (param_1->MeshBuilders).ArrayNum;
    (this->MeshBuilders).ArrayMax = (param_1->MeshBuilders).ArrayMax;
    (param_1->MeshBuilders).ArrayNum = 0;
    (param_1->MeshBuilders).ArrayMax = 0;
  }
  pTVar3 = &param_1->ThickLineItems;
  pTVar4 = &this->ThickLineItems;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ThickLineItems).ArrayNum = (param_1->ThickLineItems).ArrayNum;
    (this->ThickLineItems).ArrayMax = (param_1->ThickLineItems).ArrayMax;
    (param_1->ThickLineItems).ArrayNum = 0;
    (param_1->ThickLineItems).ArrayMax = 0;
  }
  pTVar3 = &param_1->TileEdgeLines;
  pTVar4 = &this->TileEdgeLines;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TileEdgeLines).ArrayNum = (param_1->TileEdgeLines).ArrayNum;
    (this->TileEdgeLines).ArrayMax = (param_1->TileEdgeLines).ArrayMax;
    (param_1->TileEdgeLines).ArrayNum = 0;
    (param_1->TileEdgeLines).ArrayMax = 0;
  }
  pTVar3 = &param_1->NavMeshEdgeLines;
  pTVar4 = &this->NavMeshEdgeLines;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NavMeshEdgeLines).ArrayNum = (param_1->NavMeshEdgeLines).ArrayNum;
    (this->NavMeshEdgeLines).ArrayMax = (param_1->NavMeshEdgeLines).ArrayMax;
    (param_1->NavMeshEdgeLines).ArrayNum = 0;
    (param_1->NavMeshEdgeLines).ArrayMax = 0;
  }
  pTVar3 = &param_1->NavLinkLines;
  pTVar4 = &this->NavLinkLines;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NavLinkLines).ArrayNum = (param_1->NavLinkLines).ArrayNum;
    (this->NavLinkLines).ArrayMax = (param_1->NavLinkLines).ArrayMax;
    (param_1->NavLinkLines).ArrayNum = 0;
    (param_1->NavLinkLines).ArrayMax = 0;
  }
  pTVar3 = &param_1->ClusterLinkLines;
  pTVar4 = &this->ClusterLinkLines;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ClusterLinkLines).ArrayNum = (param_1->ClusterLinkLines).ArrayNum;
    (this->ClusterLinkLines).ArrayMax = (param_1->ClusterLinkLines).ArrayMax;
    (param_1->ClusterLinkLines).ArrayNum = 0;
    (param_1->ClusterLinkLines).ArrayMax = 0;
  }
  pTVar3 = &param_1->AuxLines;
  pTVar4 = &this->AuxLines;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AuxLines).ArrayNum = (param_1->AuxLines).ArrayNum;
    (this->AuxLines).ArrayMax = (param_1->AuxLines).ArrayMax;
    (param_1->AuxLines).ArrayNum = 0;
    (param_1->AuxLines).ArrayMax = 0;
  }
  pTVar5 = &param_1->AuxPoints;
  pTVar6 = &this->AuxPoints;
  if (pTVar6 != pTVar5) {
    pFVar16 = (pTVar6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AuxPoints).ArrayNum = (param_1->AuxPoints).ArrayNum;
    (this->AuxPoints).ArrayMax = (param_1->AuxPoints).ArrayMax;
    (param_1->AuxPoints).ArrayNum = 0;
    (param_1->AuxPoints).ArrayMax = 0;
  }
  pTVar7 = &param_1->AuxBoxes;
  pTVar8 = &this->AuxBoxes;
  if (pTVar8 != pTVar7) {
    pFVar16 = (pTVar8->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AuxBoxes).ArrayNum = (param_1->AuxBoxes).ArrayNum;
    (this->AuxBoxes).ArrayMax = (param_1->AuxBoxes).ArrayMax;
    (param_1->AuxBoxes).ArrayNum = 0;
    (param_1->AuxBoxes).ArrayMax = 0;
  }
  pTVar9 = &param_1->Meshes;
  pTVar10 = &this->Meshes;
  if (pTVar10 != pTVar9) {
    DestructItems<FDebugRenderSceneProxy::FMesh,int>
              ((FMesh *)(pTVar10->AllocatorInstance).Data,(this->Meshes).ArrayNum);
    pFVar16 = (pTVar10->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Meshes).ArrayNum = (param_1->Meshes).ArrayNum;
    (this->Meshes).ArrayMax = (param_1->Meshes).ArrayMax;
    (param_1->Meshes).ArrayNum = 0;
    (param_1->Meshes).ArrayMax = 0;
  }
  pTVar11 = &param_1->DebugLabels;
  pTVar12 = &this->DebugLabels;
  if (pTVar12 != pTVar11) {
    DestructItems<FNavMeshSceneProxyData::FDebugText,int>
              ((FDebugText *)(pTVar12->AllocatorInstance).Data,(this->DebugLabels).ArrayNum);
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DebugLabels).ArrayNum = (param_1->DebugLabels).ArrayNum;
    (this->DebugLabels).ArrayMax = (param_1->DebugLabels).ArrayMax;
    (param_1->DebugLabels).ArrayNum = 0;
    (param_1->DebugLabels).ArrayMax = 0;
  }
  pTVar13 = &param_1->OctreeBounds;
  pTVar14 = &this->OctreeBounds;
  if (pTVar14 != pTVar13) {
    pFVar16 = (pTVar14->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OctreeBounds).ArrayNum = (param_1->OctreeBounds).ArrayNum;
    (this->OctreeBounds).ArrayMax = (param_1->OctreeBounds).ArrayMax;
    (param_1->OctreeBounds).ArrayNum = 0;
    (param_1->OctreeBounds).ArrayMax = 0;
  }
  dVar17 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  uVar15 = *(undefined4 *)&this->field_0x120;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar17;
  dVar17 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar17;
  dVar17 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar17;
  uVar18 = (param_1->Bounds).Pad[0];
  uVar19 = (param_1->Bounds).Pad[1];
  uVar20 = (param_1->Bounds).Pad[2];
  uVar21 = (param_1->Bounds).Pad[3];
  uVar22 = (param_1->Bounds).Pad[4];
  uVar23 = (param_1->Bounds).Pad[5];
  uVar24 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar18;
  (this->Bounds).Pad[1] = uVar19;
  (this->Bounds).Pad[2] = uVar20;
  (this->Bounds).Pad[3] = uVar21;
  (this->Bounds).Pad[4] = uVar22;
  (this->Bounds).Pad[5] = uVar23;
  (this->Bounds).Pad[6] = uVar24;
  dVar17 = (param_1->NavMeshDrawOffset).field0_0x0._s_0.Y;
  (this->NavMeshDrawOffset).field0_0x0._s_0.X = (param_1->NavMeshDrawOffset).field0_0x0._s_0.X;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Y = dVar17;
  (this->NavMeshDrawOffset).field0_0x0._s_0.Z = (param_1->NavMeshDrawOffset).field0_0x0._s_0.Z;
  uVar25 = (ZPULL(uVar15,0,1) ^ param_1->bDataGathered) & 1 ^ uVar15;
  *(uint *)&this->field_0x120 = uVar25;
  *(uint *)&this->field_0x120 = (uVar25 ^ *(uint *)&param_1->field_0x120) & 2 ^ uVar25;
  this->NavDetailFlags = param_1->NavDetailFlags;
  return this;
}

