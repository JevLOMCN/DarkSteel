// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// GetValueAsString<enum_EMultiBlockType> @ 142c34120

FString * __cdecl
UEnum::GetValueAsString<enum_EMultiBlockType>
          (FString *__return_storage_ptr__,EMultiBlockType param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_EMultiBlockType>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

