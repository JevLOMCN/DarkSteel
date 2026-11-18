// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 3

// StartupModule @ 14d0d1720

void __thiscall FNamingTokensModule::StartupModule(FNamingTokensModule *this)

{
  FNamingTokensModule local_res10 [3];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FNamingTokensModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res10,(pmf_2f521a46)this);
  return;
}

// ShutdownModule @ 14d0d1750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNamingTokensModule::ShutdownModule(FNamingTokensModule *this)

{
  ForAnyElementType FVar1;
  uint uVar2;
  UNamingTokensEngineSubsystem *pUVar3;
  int iVar4;
  
  if (((GEngine != (UEngine *)0x0) &&
      (pUVar3 = UEngine::GetEngineSubsystem<UNamingTokensEngineSubsystem>(GEngine),
      pUVar3 != (UNamingTokensEngineSubsystem *)0x0)) &&
     (*(int *)&(pUVar3->GlobalNamespaces).Elements.field_0x8 !=
      *(int *)&(pUVar3->GlobalNamespaces).Elements.field_0x34)) {
    iVar4 = UGlobalNamingTokens::GlobalNamespace.Data.ArrayNum + -1;
    FVar1 = UGlobalNamingTokens::GlobalNamespace.Data.AllocatorInstance;
    if (UGlobalNamingTokens::GlobalNamespace.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              (&pUVar3->GlobalNamespaces,uVar2,&UGlobalNamingTokens::GlobalNamespace);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  return;
}

// OnPostEngineInit @ 14d0e46f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNamingTokensModule::OnPostEngineInit(FNamingTokensModule *this)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  UNamingTokensEngineSubsystem *this_00;
  
  if ((GEngine != (UEngine *)0x0) &&
     (this_00 = UEngine::GetEngineSubsystem<UNamingTokensEngineSubsystem>(GEngine),
     this_00 != (UNamingTokensEngineSubsystem *)0x0)) {
    iVar3 = UGlobalNamingTokens::GlobalNamespace.Data.ArrayNum + -1;
    FVar1 = UGlobalNamingTokens::GlobalNamespace.Data.AllocatorInstance;
    if (UGlobalNamingTokens::GlobalNamespace.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this_00->GlobalNamespaces,uVar2,&UGlobalNamingTokens::GlobalNamespace);
    if (iVar3 == -1) {
      UNamingTokensEngineSubsystem::RegisterGlobalNamespace
                (this_00,&UGlobalNamingTokens::GlobalNamespace);
      return;
    }
  }
  return;
}

