// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSkelMeshUpdateContext @ 14733fcb0

FSkelMeshUpdateContext * __thiscall
FSkelMeshUpdateContext::FSkelMeshUpdateContext
          (FSkelMeshUpdateContext *this,USkeletalMesh *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FSkelMeshUpdateContext *pFVar5;
  FSkeletalMeshRenderData *pFVar6;
  undefined4 uStack_c;
  
  this->Mesh = param_1;
  (this->LODResourcesView).DataPtr = (FSkeletalMeshLODRenderData **)0x0;
  (this->LODResourcesView).ArrayNum = 0;
  this->AssetLODBias = 0;
  this->CurrentThread = param_2;
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x1f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FSkelMeshUpdateContext *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar6 = (FSkeletalMeshRenderData *)(**(code **)(this->Mesh->_padding_ + 0x398))();
  this->RenderData = pFVar6;
  bVar1 = *(byte *)((longlong)&this->Mesh->_padding_ + 4);
  this->AssetLODBias = (uint)bVar1;
  if (pFVar6 != (FSkeletalMeshRenderData *)0x0) {
    bVar2 = *(byte *)((longlong)&this->Mesh->_padding_ + 3);
    (this->LODResourcesView).DataPtr =
         (FSkeletalMeshLODRenderData **)
         ((pFVar6->LODRenderData).Array.AllocatorInstance.Data + (ulonglong)bVar1 * 8);
    *(ulonglong *)&(this->LODResourcesView).ArrayNum = CONCAT44(uStack_c,(uint)bVar2);
  }
  return this;
}

// FSkelMeshUpdateContext @ 14733fd50

FSkelMeshUpdateContext * __thiscall
FSkelMeshUpdateContext::FSkelMeshUpdateContext
          (FSkelMeshUpdateContext *this,UStreamableRenderAsset *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FSkelMeshUpdateContext *pFVar7;
  FSkeletalMeshRenderData *pFVar8;
  undefined4 uStack_c;
  
  if (param_1 != (UStreamableRenderAsset *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar6->_padding_)) goto LAB_14733fd92;
  }
  param_1 = (UStreamableRenderAsset *)0x0;
LAB_14733fd92:
  this->Mesh = (USkeletalMesh *)param_1;
  (this->LODResourcesView).DataPtr = (FSkeletalMeshLODRenderData **)0x0;
  (this->LODResourcesView).ArrayNum = 0;
  this->AssetLODBias = 0;
  this->CurrentThread = param_2;
  if ((USkeletalMesh *)param_1 == (USkeletalMesh *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x1f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSkelMeshUpdateContext *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar8 = (FSkeletalMeshRenderData *)(**(code **)(this->Mesh->_padding_ + 0x398))();
  this->RenderData = pFVar8;
  bVar1 = *(byte *)((longlong)&this->Mesh->_padding_ + 4);
  this->AssetLODBias = (uint)bVar1;
  if (pFVar8 != (FSkeletalMeshRenderData *)0x0) {
    bVar2 = *(byte *)((longlong)&this->Mesh->_padding_ + 3);
    (this->LODResourcesView).DataPtr =
         (FSkeletalMeshLODRenderData **)
         ((pFVar8->LODRenderData).Array.AllocatorInstance.Data + (ulonglong)bVar1 * 8);
    *(ulonglong *)&(this->LODResourcesView).ArrayNum = CONCAT44(uStack_c,(uint)bVar2);
  }
  return this;
}

