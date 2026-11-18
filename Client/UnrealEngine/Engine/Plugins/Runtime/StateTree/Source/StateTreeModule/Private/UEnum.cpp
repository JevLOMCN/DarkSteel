// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// GetDisplayValueAsText<enum_EStateTreeRunStatus> @ 14d4dec80

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_EStateTreeRunStatus>
          (FText *__return_storage_ptr__,EStateTreeRunStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton;
  if (Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    this = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus,(UObject *)pUVar3,
                         L"EStateTreeRunStatus");
    Z_Registration_Info_UEnum_EStateTreeRunStatus.OuterSingleton = this;
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
  GetDisplayNameTextByValue(this,__return_storage_ptr__,(ulonglong)param_1);
  return __return_storage_ptr__;
}

// GetDisplayValueAsText<enum_EStateTreeUpdatePhase> @ 14d4ded20

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_EStateTreeUpdatePhase>
          (FText *__return_storage_ptr__,EStateTreeUpdatePhase param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton;
  if (Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    this = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeUpdatePhase,(UObject *)pUVar3,
                         L"EStateTreeUpdatePhase");
    Z_Registration_Info_UEnum_EStateTreeUpdatePhase.OuterSingleton = this;
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
  GetDisplayNameTextByValue(this,__return_storage_ptr__,(ulonglong)param_1);
  return __return_storage_ptr__;
}

