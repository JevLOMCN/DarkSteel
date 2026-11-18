// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// StaticStruct @ 149722970

UScriptStruct * __cdecl FPCGInteractiveToolWorkingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGInteractiveToolWorkingData,(UObject *)pUVar1,
                         L"PCGInteractiveToolWorkingData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGInteractiveToolWorkingData.OuterSingleton;
}

// InitializeRuntimeElementData @ 1499fe970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGInteractiveToolWorkingData::InitializeRuntimeElementData
          (FPCGInteractiveToolWorkingData *this,FPCGContext *param_1)

{
  return;
}

// IsInitialized @ 149a00840

bool __thiscall FPCGInteractiveToolWorkingData::IsInitialized(FPCGInteractiveToolWorkingData *this)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)&this->field_0x8);
  if ((bVar1) && (*(longlong *)&this->field_0x8 != 0)) {
    return true;
  }
  return false;
}

// IsValid @ 149a013a0

bool __thiscall FPCGInteractiveToolWorkingData::IsValid(FPCGInteractiveToolWorkingData *this)

{
  return true;
}

