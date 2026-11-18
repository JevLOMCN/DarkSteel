// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FSharedMemoryRegion @ 14161e500

FSharedMemoryRegion * __thiscall
FGenericPlatformMemory::FSharedMemoryRegion::FSharedMemoryRegion
          (FSharedMemoryRegion *this,FString *param_1,uint param_2,void *param_3,ulong64 param_4)

{
  wchar_t *_Source;
  
  this->Size = param_4;
  this->AccessMode = param_2;
  this->Address = param_3;
  if ((param_1->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  wcsncpy(this->Name,_Source,0x7f);
  this->Name[0x7f] = L'\0';
  return this;
}

