// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// GetValueAsString<enum_EGameplayTagQueryExprType> @ 146ac5f10

FString * __cdecl
UEnum::GetValueAsString<enum_EGameplayTagQueryExprType>
          (FString *__return_storage_ptr__,EGameplayTagQueryExprType param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FString *pFVar4;
  FName local_res8;
  
  this = Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton;
  if (Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_GameplayTags();
    this = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType,(UObject *)pUVar3,
                         L"EGameplayTagQueryExprType");
    Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton = this;
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

