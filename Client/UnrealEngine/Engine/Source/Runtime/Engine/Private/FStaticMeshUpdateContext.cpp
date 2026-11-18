// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FStaticMeshUpdateContext @ 14877c8d0

FStaticMeshUpdateContext * __thiscall
FStaticMeshUpdateContext::FStaticMeshUpdateContext
          (FStaticMeshUpdateContext *this,UStaticMesh *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FStaticMeshUpdateContext *pFVar4;
  FStaticMeshRenderData *pFVar5;
  undefined4 uStack_c;
  
  this->Mesh = param_1;
  (this->LODResourcesView).DataPtr = (FStaticMeshLODResources **)0x0;
  (this->LODResourcesView).ArrayNum = 0;
  this->CurrentThread = param_2;
  if (param_1 == (UStaticMesh *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStaticMeshUpdateContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar5 = UStaticMesh::GetRenderData(param_1);
  this->RenderData = pFVar5;
  if (pFVar5 != (FStaticMeshRenderData *)0x0) {
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 3);
    (this->LODResourcesView).DataPtr =
         (FStaticMeshLODResources **)
         ((pFVar5->LODResources).Array.AllocatorInstance.Data +
         (ulonglong)*(byte *)((longlong)&param_1->_padding_ + 4) * 8);
    *(ulonglong *)&(this->LODResourcesView).ArrayNum = CONCAT44(uStack_c,(uint)bVar1);
  }
  return this;
}

// FStaticMeshUpdateContext @ 14877c970

FStaticMeshUpdateContext * __thiscall
FStaticMeshUpdateContext::FStaticMeshUpdateContext
          (FStaticMeshUpdateContext *this,UStreamableRenderAsset *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FStaticMeshUpdateContext *pFVar6;
  FStaticMeshRenderData *pFVar7;
  undefined4 uStack_c;
  
  if (param_1 != (UStreamableRenderAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      this->Mesh = (UStaticMesh *)param_1;
      this->CurrentThread = param_2;
      (this->LODResourcesView).DataPtr = (FStaticMeshLODResources **)0x0;
      (this->LODResourcesView).ArrayNum = 0;
      goto LAB_14877ca03;
    }
  }
  param_1 = (UStreamableRenderAsset *)0x0;
  this->CurrentThread = param_2;
  this->Mesh = (UStaticMesh *)0x0;
  (this->LODResourcesView).DataPtr = (FStaticMeshLODResources **)0x0;
  (this->LODResourcesView).ArrayNum = 0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("InMesh",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                     ,0x24,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FStaticMeshUpdateContext *)(*pcVar3)();
    return pFVar6;
  }
LAB_14877ca03:
  pFVar7 = UStaticMesh::GetRenderData((UStaticMesh *)param_1);
  this->RenderData = pFVar7;
  if (pFVar7 != (FStaticMeshRenderData *)0x0) {
    bVar1 = *(byte *)((longlong)&((UStaticMesh *)param_1)->_padding_ + 3);
    (this->LODResourcesView).DataPtr =
         (FStaticMeshLODResources **)
         ((pFVar7->LODResources).Array.AllocatorInstance.Data +
         (ulonglong)*(byte *)((longlong)&((UStaticMesh *)param_1)->_padding_ + 4) * 8);
    *(ulonglong *)&(this->LODResourcesView).ArrayNum = CONCAT44(uStack_c,(uint)bVar1);
  }
  return this;
}

