// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FRigHierarchyMemoryWriter @ 14a2dc800

FRigHierarchyMemoryWriter * __thiscall
FRigHierarchyMemoryWriter::FRigHierarchyMemoryWriter
          (FRigHierarchyMemoryWriter *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_3);
  this->_padding_ = (longlong)&___7FRigHierarchyMemoryWriter__6B_;
  *(undefined8 *)&this->NameToIndex = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x20 = 0;
  this->Names = param_2;
  *(undefined4 *)&(this->NameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x48 = 0;
  return this;
}

// operator<< @ 14a2e17a0

FArchive * __thiscall
FRigHierarchyMemoryWriter::operator<<(FRigHierarchyMemoryWriter *this,FName *param_1)

{
  longlong *plVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<FName,int> *pTVar7;
  FArchive *pFVar8;
  uint *puVar9;
  uint local_res8 [2];
  uint local_res10 [4];
  FName *local_28;
  uint *local_20;
  
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  puVar9 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,int> *)0x0) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 == (uint *)0x0) {
    pTVar2 = this->Names;
    pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + pTVar2->ArrayMax)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar5)();
        return pFVar8;
      }
    }
    local_res8[0] = pTVar2->ArrayNum;
    if (local_res8[0] == pTVar2->ArrayMax) {
      local_res8[0] =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pTVar2->ArrayNum = local_res8[0] + 1;
    *(FName *)(pFVar4 + (longlong)(int)local_res8[0] * 8) = *param_1;
    local_20 = local_res8;
    local_28 = param_1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->NameToIndex,
               (TPairInitializer<FName_const_&,int_const_&> *)(local_res10 + 2),(bool *)&local_28);
    plVar1 = (longlong *)this->_padding_;
    if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 4;
      return (FArchive *)this;
    }
    puVar9 = local_res8;
  }
  else {
    local_res10[0] = *puVar9;
    plVar1 = (longlong *)this->_padding_;
    if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 4;
      return (FArchive *)this;
    }
    puVar9 = local_res10;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,puVar9,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,puVar9);
  return (FArchive *)this;
}

// operator<< @ 14a2e1950

FArchive * __thiscall
FRigHierarchyMemoryWriter::operator<<(FRigHierarchyMemoryWriter *this,FText *param_1)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_18;
  
  pFVar1 = FText::ToString(param_1);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::operator<<((FArchive *)this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

