// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ToString @ 142091230

FString * __thiscall
UE::GC::FDebugSchemaStackNode::ToString(FDebugSchemaStackNode *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FMemberInfo *pFVar2;
  undefined1 local_58 [8];
  uint local_50;
  FMemberInfo local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  for (; this != (FDebugSchemaStackNode *)0x0; this = this->Prev) {
    pFVar2 = GetMemberDebugInfo(&local_48,(FSchemaView)(this->Schema).Handle,this->Member);
    local_58._0_4_ = pFVar2->Offset;
    local_58._4_4_ = (pFVar2->Name).ComparisonIndex;
    local_50 = (pFVar2->Name).Number;
    ::FName::GetPlainNameString((FName *)(local_58 + 4),&local_18);
    ::FString::PrintfImpl(&local_28,L"%s (0x%x)");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (1 < (__return_storage_ptr__->Data).ArrayNum) {
      ::FString::AppendChars(&local_28,L" -> ",4);
    }
    ::FString::ConcatFF(&local_38,&local_28,__return_storage_ptr__);
    if (__return_storage_ptr__ != &local_38) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

