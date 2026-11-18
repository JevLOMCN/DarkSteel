// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 1

// operator<int,FISMPoolMeshGroup>_TTuple<int,FISMPoolMeshGroup> @ 146338160

TTuple<int,FISMPoolMeshGroup> * __thiscall
TPairInitializer<int_&&,FISMPoolMeshGroup_const_&>::
operator<int,FISMPoolMeshGroup>_TTuple<int,FISMPoolMeshGroup>
          (TPairInitializer<int_&&,FISMPoolMeshGroup_const_&> *this,
          TTuple<int,FISMPoolMeshGroup> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FISMPoolMeshGroup *pFVar3;
  FISMPoolMeshInfo *pFVar4;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->MeshInfos).ArrayNum;
  pFVar4 = (FISMPoolMeshInfo *)(pFVar3->MeshInfos).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FISMPoolMeshInfo,FISMPoolMeshInfo,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  __return_storage_ptr__->field_0x18 = pFVar3->bAllowPerInstanceRemoval;
  return __return_storage_ptr__;
}

