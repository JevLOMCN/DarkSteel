// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// FGameplayTagNativeAdder @ 146acb620

FGameplayTagNativeAdder * __thiscall
FGameplayTagNativeAdder::FGameplayTagNativeAdder(FGameplayTagNativeAdder *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FGameplayTagNativeAdder local_res8 [4];
  
  *this = (FGameplayTagNativeAdder)&___7FGameplayTagNativeAdder__6B_;
  this_00 = UGameplayTagsManager::OnLastChanceToAddNativeTags();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FGameplayTagNativeAdder>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,local_res8,(pmf_e9411b2c)this);
  return this;
}

