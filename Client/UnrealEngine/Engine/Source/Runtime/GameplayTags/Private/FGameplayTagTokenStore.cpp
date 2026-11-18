// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 3

// FGameplayTagTokenStore @ 146acc090

FGameplayTagTokenStore * __thiscall
UE::Net::FGameplayTagTokenStore::FGameplayTagTokenStore
          (FGameplayTagTokenStore *this,FNetTokenStore *param_1)

{
  FNameTokenStore::FNameTokenStore((FNameTokenStore *)this,param_1);
  *(undefined ***)this = &___7FGameplayTagTokenStore_Net_UE__6B_;
  return this;
}

// GetOrCreateToken @ 146adeba0

FNetToken __thiscall
UE::Net::FGameplayTagTokenStore::GetOrCreateToken(FGameplayTagTokenStore *this,FGameplayTag param_1)

{
  FNameTokenStore::GetOrCreateToken((FNameTokenStore *)this,param_1.TagName);
  return (FNetToken_u_0)param_1.TagName.ComparisonIndex.Value;
}

// ResolveToken @ 146aecb90

FGameplayTag __thiscall
UE::Net::FGameplayTagTokenStore::ResolveToken
          (FGameplayTagTokenStore *this,FNetToken param_1,FNetTokenStoreState *param_2)

{
  UGameplayTagsManager *this_00;
  FGameplayTag FVar1;
  uint in_register_00000014;
  FName FVar2;
  undefined1 local_res10 [24];
  longlong local_18 [2];
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = (uint)param_1.field0_0x0;
  FNameTokenStore::ResolveToken((FNameTokenStore *)this,(FNetToken)SUB84(local_18,0),param_2);
  if (local_18[0] == 0) {
    *(undefined8 *)FVar2 = 0;
    return (FGameplayTag)FVar2;
  }
  this_00 = UGameplayTagsManager::Get();
  FVar1 = UGameplayTagsManager::RequestGameplayTag(this_00,(FName)local_res10,SUB81(local_18[0],0));
  *(undefined8 *)FVar2 = *(undefined8 *)FVar1.TagName;
  return (FGameplayTag)FVar2;
}

