// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// operator<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> @ 146dcb6d0

TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
::
operator<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar3;
  FNavMeshTileData *pFVar4;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(TIntPoint<int>_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (FNavMeshTileData *)(pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FNavMeshTileData,FNavMeshTileData,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

