// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Thread @ 145451ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FRendererModule::DebugLogOnCrash'::__l3::FTest::Thread(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UEngine *pUVar1;
  FOutputDeviceRedirector *pFVar2;
  
  pUVar1 = GEngine;
  UNRECOVERED_JUMPTABLE = *(code **)(GEngine->_padding_ + 8);
  pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Could not recover jumptable at 0x000145451edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&pUVar1->_padding_,0,L"Mem FromReport",pFVar2);
  return;
}

