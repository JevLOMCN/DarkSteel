// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// GetDisplayValueAsText<enum_EPoseSearchAssetSamplerSpace> @ 14a8a51e0

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_EPoseSearchAssetSamplerSpace>
          (FText *__return_storage_ptr__,EPoseSearchAssetSamplerSpace param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton;
  if (Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PoseSearch();
    this = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchAssetSamplerSpace,(UObject *)pUVar3
                         ,L"EPoseSearchAssetSamplerSpace");
    Z_Registration_Info_UEnum_EPoseSearchAssetSamplerSpace.OuterSingleton = this;
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

