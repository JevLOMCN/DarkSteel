// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148998b00

UScriptStruct * __cdecl FVoiceSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVoiceSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVoiceSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVoiceSettings,(UObject *)pUVar1,L"VoiceSettings"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FVoiceSettings.OuterSingleton;
}

// operator= @ 1489bbf00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVoiceSettings * __thiscall FVoiceSettings::operator=(FVoiceSettings *this,FVoiceSettings *param_1)

{
  USceneComponent *pUVar1;
  USoundAttenuation *pUVar2;
  USoundEffectSourcePresetChain *pUVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ComponentToAttachTo).field0_0x0.DebugPtr, pUVar1 != (USceneComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ComponentToAttachTo).field0_0x0 = (param_1->ComponentToAttachTo).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->AttenuationSettings).field0_0x0.DebugPtr,
     pUVar2 != (USoundAttenuation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->AttenuationSettings).field0_0x0 = (param_1->AttenuationSettings).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->SourceEffectChain).field0_0x0.DebugPtr,
     pUVar3 != (USoundEffectSourcePresetChain *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->SourceEffectChain).field0_0x0 = (param_1->SourceEffectChain).field0_0x0;
  return this;
}

