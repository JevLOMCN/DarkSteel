// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// ~FUniqueNetIdString @ 14ec56a50

void __thiscall FUniqueNetIdString::~FUniqueNetIdString(FUniqueNetIdString *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->UniqueNetIdStr).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ec56a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetBytes @ 14ec73d10

uchar * __thiscall FUniqueNetIdString::GetBytes(FUniqueNetIdString *this)

{
  return (uchar *)(this->UniqueNetIdStr).Data.AllocatorInstance.Data;
}

// GetSize @ 14ec78f70

int __thiscall FUniqueNetIdString::GetSize(FUniqueNetIdString *this)

{
  return (this->UniqueNetIdStr).Data.ArrayNum * 2;
}

// GetType @ 14ec791d0

FName __thiscall FUniqueNetIdString::GetType(FUniqueNetIdString *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Type;
  return in_RDX;
}

// GetTypeHash @ 14ec79230

uint __thiscall FUniqueNetIdString::GetTypeHash(FUniqueNetIdString *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (this->UniqueNetIdStr).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(this->UniqueNetIdStr).Data.AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  return uVar2;
}

// IsValid @ 14ec81fb0

bool __thiscall FUniqueNetIdString::IsValid(FUniqueNetIdString *this)

{
  return 1 < (this->UniqueNetIdStr).Data.ArrayNum;
}

// ToDebugString @ 14ec9ba30

FString * __thiscall
FUniqueNetIdString::ToDebugString(FUniqueNetIdString *this,FString *__return_storage_ptr__)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (cVar1 != '\0') {
    ::FString::FString(__return_storage_ptr__,&this->UniqueNetIdStr);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"INVALID");
  return __return_storage_ptr__;
}

// ToString @ 14ec9bcd0

FString * __thiscall
FUniqueNetIdString::ToString(FUniqueNetIdString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->UniqueNetIdStr);
  return __return_storage_ptr__;
}

