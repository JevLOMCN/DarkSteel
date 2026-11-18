// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// FRigHierarchyMemoryReader @ 14a2dc7c0

FRigHierarchyMemoryReader * __thiscall
FRigHierarchyMemoryReader::FRigHierarchyMemoryReader
          (FRigHierarchyMemoryReader *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FMemoryReader::FMemoryReader((FMemoryReader *)this,param_1,param_3);
  this->Names = param_2;
  this->_padding_ = (longlong)&___7FRigHierarchyMemoryReader__6B_;
  return this;
}

// operator<< @ 14a2e1600

FArchive * __thiscall
FRigHierarchyMemoryReader::operator<<(FRigHierarchyMemoryReader *this,FName *param_1)

{
  longlong *plVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((((int)local_res8[0] < 0) || (this->Names->ArrayNum <= (int)local_res8[0])) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Names.IsValidIndex(NameIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchy.cpp"
                         ,0x2729,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FArchive *)(*pcVar3)();
    return pFVar7;
  }
  uVar4 = local_res8[0];
  pTVar2 = this->Names;
  uVar6 = 0;
  if ((int)local_res8[0] < pTVar2->ArrayNum) {
    uVar6 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FArchive *)(*pcVar3)();
    return pFVar7;
  }
  *param_1 = *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar4 * 8);
  return (FArchive *)this;
}

// operator<< @ 14a2e1720

FArchive * __thiscall
FRigHierarchyMemoryReader::operator<<(FRigHierarchyMemoryReader *this,FText *param_1)

{
  FText *pFVar1;
  FString local_28;
  FText local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::operator<<((FArchive *)this,&local_28);
  pFVar1 = FText::FromString(&local_18,&local_28);
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

