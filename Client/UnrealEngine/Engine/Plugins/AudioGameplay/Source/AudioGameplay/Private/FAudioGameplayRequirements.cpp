// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 2

// StaticStruct @ 14d982250

UScriptStruct * __cdecl FAudioGameplayRequirements::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioGameplay();
    Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioGameplayRequirements,(UObject *)pUVar1,
                         L"AudioGameplayRequirements");
  }
  return Z_Registration_Info_UScriptStruct_FAudioGameplayRequirements.OuterSingleton;
}

// Matches @ 14d98ec10

bool __thiscall
FAudioGameplayRequirements::Matches(FAudioGameplayRequirements *this,FGameplayTagContainer *param_1)

{
  FGameplayTagQuery *this_00;
  UAudioRequirementPreset *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->Preset).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioRequirementPreset *)0x0) {
    this_00 = &pUVar1->Query;
    bVar2 = FGameplayTagQuery::IsEmpty(this_00);
    if (!bVar2) {
      bVar2 = FGameplayTagQuery::Matches(this_00,param_1);
      if (!bVar2) {
        return false;
      }
    }
  }
  bVar2 = FGameplayTagQuery::IsEmpty(&this->Custom);
  if (!bVar2) {
    bVar2 = FGameplayTagQuery::Matches(&this->Custom,param_1);
    return bVar2;
  }
  return true;
}

