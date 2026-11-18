// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 2

// Parse @ 143119da0

bool __cdecl FIPv4Subnet::Parse(FString *param_1,FIPv4Subnet *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar4 = ::FString::ParseIntoArray(param_1,&local_18,L"/",false);
  if (iVar4 == 2) {
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FIPv4Address::Parse((FString *)local_18.AllocatorInstance.Data,&param_2->Address);
    if (bVar2) {
      if (local_18.ArrayNum < 2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      bVar2 = FIPv4SubnetMask::Parse
                        ((FString *)(local_18.AllocatorInstance.Data + 0x10),&param_2->Mask);
      if (bVar2) {
        bVar2 = true;
        goto LAB_143119e7a;
      }
    }
  }
  bVar2 = false;
LAB_143119e7a:
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar2;
}

// ToString @ 14311a1b0

FString * __thiscall FIPv4Subnet::ToString(FIPv4Subnet *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%i.%i.%i.%i");
  ::FString::PrintfImpl(&local_28,L"%i.%i.%i.%i");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s/%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

