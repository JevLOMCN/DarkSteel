// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 3

// operator<FString,FInterchangeMeshGeometry>_TTuple<FString,FInterchangeMeshGeometry> @ 14e72fb00

TTuple<FString,FInterchangeMeshGeometry> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,FInterchangeMeshGeometry>_TTuple<FString,FInterchangeMeshGeometry>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,FInterchangeMeshGeometry> *__return_storage_ptr__)

{
  ForAnyElementType FVar1;
  FInterchangeMeshGeometry local_48;
  
  local_48.MeshUid.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.MeshUid.Data.ArrayNum = 0;
  local_48.MeshUid.Data.ArrayMax = 0;
  local_48.ReferencingMeshInstanceUids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ReferencingMeshInstanceUids.ArrayNum = 0;
  local_48.ReferencingMeshInstanceUids.ArrayMax = 0;
  local_48.AttachedSocketUids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.AttachedSocketUids.ArrayNum = 0;
  local_48.AttachedSocketUids.ArrayMax = 0;
  local_48.MeshNode.field0_0x0.DebugPtr = (TObjectPtr<UInterchangeMeshNode_const_>_u_0)0x0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  FInterchangeMeshGeometry::FInterchangeMeshGeometry
            ((FInterchangeMeshGeometry *)&__return_storage_ptr__->field_0x10,&local_48);
  FVar1.Data = local_48.AttachedSocketUids.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_48.AttachedSocketUids.AllocatorInstance.Data,
             local_48.AttachedSocketUids.ArrayNum);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  FVar1.Data = local_48.ReferencingMeshInstanceUids.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_48.ReferencingMeshInstanceUids.AllocatorInstance.Data,
             local_48.ReferencingMeshInstanceUids.ArrayNum);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_48.MeshUid.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.MeshUid.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FString,FInterchangeMeshInstance>_TTuple<FString,FInterchangeMeshInstance> @ 14e72fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,FInterchangeMeshInstance> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,FInterchangeMeshInstance>_TTuple<FString,FInterchangeMeshInstance>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,FInterchangeMeshInstance> *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_4_ = 0;
  local_98._12_4_ = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_98._16_8_ = (UInterchangeBaseNode *)0x0;
  local_98[0x18] = false;
  local_98[0x19] = false;
  local_98[0x1a] = false;
  local_98[0x1b] = false;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  FInterchangeMeshInstance::FInterchangeMeshInstance
            ((FInterchangeMeshInstance *)&__return_storage_ptr__->field_0x10,
             (FInterchangeMeshInstance *)local_98);
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,FInterchangeMeshInstance>_TTuple<FString,FInterchangeMeshInstance> @ 14e72fd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,FInterchangeMeshInstance> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,FInterchangeMeshInstance>_TTuple<FString,FInterchangeMeshInstance>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,FInterchangeMeshInstance> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_4c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_4_ = 0;
  local_98._12_4_ = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_98._16_8_ = (UInterchangeBaseNode *)0x0;
  local_98[0x18] = false;
  local_98[0x19] = false;
  local_98[0x1a] = false;
  local_98[0x1b] = false;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  FInterchangeMeshInstance::FInterchangeMeshInstance
            ((FInterchangeMeshInstance *)&__return_storage_ptr__->field_0x10,
             (FInterchangeMeshInstance *)local_98);
  DestructItems<FString,int>((FString *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

