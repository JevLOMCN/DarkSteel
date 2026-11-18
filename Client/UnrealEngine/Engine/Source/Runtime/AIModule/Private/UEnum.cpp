// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// GetValueAsString<enum_EBTNodeResult::Type> @ 146e7cba0

FString * __cdecl
UEnum::GetValueAsString<enum_EBTNodeResult::Type>(FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_EBTNodeResult::Type>();
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

// GetDisplayValueAsText<enum_EEnvQueryTrace::Type> @ 146f1ada0

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_EEnvQueryTrace::Type>(FText *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton;
  if (Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_AIModule();
    this = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryTrace,(UObject *)pUVar3,
                         L"EEnvQueryTrace");
    Z_Registration_Info_UEnum_EEnvQueryTrace.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  GetDisplayNameTextByValue(this,__return_storage_ptr__,(longlong)(int)param_1);
  return __return_storage_ptr__;
}

