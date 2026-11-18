// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// operator<FName,FMeshElementTypeWrapper>_TTuple<FName,FMeshElementTypeWrapper> @ 143637e90

TTuple<FName,FMeshElementTypeWrapper> * __thiscall
TKeyInitializer<FName_&>::
operator<FName,FMeshElementTypeWrapper>_TTuple<FName,FMeshElementTypeWrapper>
          (TKeyInitializer<FName_&> *this,
          TTuple<FName,FMeshElementTypeWrapper> *__return_storage_ptr__)

{
  void *pvVar1;
  uint uVar2;
  FMeshElementTypeWrapper *pFVar3;
  FMeshElementTypeWrapper FVar4;
  FMeshElementTypeWrapper local_res8;
  
  pFVar3 = FMeshElementTypeWrapper::FMeshElementTypeWrapper(&local_res8,1);
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(FMeshElementChannels **)&__return_storage_ptr__->field_0x8 = (pFVar3->Ptr).Ptr;
  (pFVar3->Ptr).Ptr = (FMeshElementChannels *)0x0;
  if (local_res8.Ptr.Ptr != (FMeshElementChannels *)0x0) {
    FVar4.Ptr.Ptr =
         *(TUniquePtr<FMeshElementChannels,TDefaultDelete<FMeshElementChannels>_> *)
          (((FMeshElementContainer *)((longlong)local_res8.Ptr.Ptr + 0x80))->BitArray).
          AllocatorInstance.InlineData;
    if (FVar4.Ptr.Ptr == (FMeshElementChannels *)0x0) {
      FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
    }
    DestructItems<FMeshElementContainer,int>
              ((FMeshElementContainer *)FVar4.Ptr.Ptr,*(int *)((longlong)local_res8.Ptr.Ptr + 0x88))
    ;
    pvVar1 = *(void **)(((FMeshElementContainer *)((longlong)local_res8.Ptr.Ptr + 0x80))->BitArray).
                       AllocatorInstance.InlineData;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    ::operator_delete((void *)local_res8.Ptr.Ptr,0x90);
  }
  return __return_storage_ptr__;
}

