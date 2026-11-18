// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 1

// GetValueAsString<enum_EPropertyCopyType> @ 14d37a3a0

FString * __cdecl
UEnum::GetValueAsString<enum_EPropertyCopyType>
          (FString *__return_storage_ptr__,EPropertyCopyType param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FString *pFVar4;
  FName local_res8;
  
  this = Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    this = GetStaticEnum(Z_Construct_UEnum_PropertyBindingUtils_EPropertyCopyType,(UObject *)pUVar3,
                         L"EPropertyCopyType");
    Z_Registration_Info_UEnum_EPropertyCopyType.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

