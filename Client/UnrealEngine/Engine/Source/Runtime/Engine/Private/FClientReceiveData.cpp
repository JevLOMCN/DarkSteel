// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147e8e250

UScriptStruct * __cdecl FClientReceiveData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClientReceiveData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClientReceiveData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClientReceiveData,(UObject *)pUVar1,
                         L"ClientReceiveData");
  }
  return Z_Registration_Info_UScriptStruct_FClientReceiveData.OuterSingleton;
}

// FClientReceiveData @ 147ea4b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FClientReceiveData * __thiscall FClientReceiveData::FClientReceiveData(FClientReceiveData *this)

{
  (this->LocalPC).field0_0x0.DebugPtr = (APlayerController *)0x0;
  ::FName::FName(&this->MessageType,L"None");
  this->MessageIndex = -1;
  ::FString::FString(&this->MessageString,L"");
  (this->RelatedPlayerState_1).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->RelatedPlayerState_2).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->OptionalObject).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

