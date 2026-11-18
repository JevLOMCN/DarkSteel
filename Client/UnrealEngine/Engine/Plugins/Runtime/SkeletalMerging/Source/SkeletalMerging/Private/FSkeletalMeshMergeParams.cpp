// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMerging
// Functions: 2

// StaticStruct @ 14ab8e870

UScriptStruct * __cdecl FSkeletalMeshMergeParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SkeletalMerging();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams,(UObject *)pUVar1,
                         L"SkeletalMeshMergeParams");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshMergeParams.OuterSingleton;
}

// FSkeletalMeshMergeParams @ 14ab910d0

FSkeletalMeshMergeParams * __thiscall
FSkeletalMeshMergeParams::FSkeletalMeshMergeParams(FSkeletalMeshMergeParams *this)

{
  TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &this->UVTransformsPerMesh;
  (this->MeshSectionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSectionMappings).ArrayNum = 0;
  (this->MeshSectionMappings).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UVTransformsPerMesh).ArrayNum = 0;
  (this->UVTransformsPerMesh).ArrayMax = 0;
  (this->MeshesToMerge).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshesToMerge).ArrayNum = 0;
  (this->MeshesToMerge).ArrayMax = 0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  if (this != (FSkeletalMeshMergeParams *)&stack0xffffffffffffffd8) {
    DestructItems<FSkelMeshMergeSectionMapping,int>((FSkelMeshMergeSectionMapping *)0x0,0);
    pFVar3 = (this->MeshSectionMappings).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->MeshSectionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MeshSectionMappings).ArrayNum = 0;
    (this->MeshSectionMappings).ArrayMax = 0;
  }
  DestructItems<FSkelMeshMergeSectionMapping,int>((FSkelMeshMergeSectionMapping *)0x0,0);
  if (pTVar1 != (TArray<FSkelMeshMergeMeshUVTransforms,TSizedDefaultAllocator<32>_> *)
                &stack0xffffffffffffffe8) {
    DestructItems<FSkelMeshMergeMeshUVTransforms,int>
              ((FSkelMeshMergeMeshUVTransforms *)(pTVar1->AllocatorInstance).Data,
               (this->UVTransformsPerMesh).ArrayNum);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->UVTransformsPerMesh).ArrayNum = 0;
    (this->UVTransformsPerMesh).ArrayMax = 0;
  }
  DestructItems<FSkelMeshMergeMeshUVTransforms,int>((FSkelMeshMergeMeshUVTransforms *)0x0,0);
  this->bNeedsCpuAccess = 0;
  this->bSkeletonBefore = 0;
  this->StripTopLODS = 0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  return this;
}

