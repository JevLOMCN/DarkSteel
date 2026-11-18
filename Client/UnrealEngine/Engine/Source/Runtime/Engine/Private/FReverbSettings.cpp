// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// operator= @ 147621fd0

FReverbSettings * __thiscall
FReverbSettings::operator=(FReverbSettings *this,FReverbSettings *param_1)

{
  UReverbEffect *pUVar1;
  USoundEffectSubmixPreset *pUVar2;
  
  this->bApplyReverb = param_1->bApplyReverb;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ReverbEffect).field0_0x0.DebugPtr, pUVar1 != (UReverbEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ReverbEffect).field0_0x0 = (param_1->ReverbEffect).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->ReverbPluginEffect).field0_0x0.DebugPtr,
     pUVar2 != (USoundEffectSubmixPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ReverbPluginEffect).field0_0x0 = (param_1->ReverbPluginEffect).field0_0x0;
  this->Volume = param_1->Volume;
  this->FadeTime = param_1->FadeTime;
  return this;
}

// StaticStruct @ 1484a4dc0

UScriptStruct * __cdecl FReverbSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReverbSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FReverbSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReverbSettings,(UObject *)pUVar1,
                         L"ReverbSettings");
  }
  return Z_Registration_Info_UScriptStruct_FReverbSettings.OuterSingleton;
}

// operator== @ 1484beed0

bool __thiscall FReverbSettings::operator==(FReverbSettings *this,FReverbSettings *param_1)

{
  if ((((this->bApplyReverb == param_1->bApplyReverb) &&
       ((this->ReverbEffect).field0_0x0.DebugPtr == (param_1->ReverbEffect).field0_0x0.DebugPtr)) &&
      ((this->ReverbPluginEffect).field0_0x0.DebugPtr ==
       (param_1->ReverbPluginEffect).field0_0x0.DebugPtr)) &&
     ((param_1->Volume == this->Volume && (param_1->FadeTime == this->FadeTime)))) {
    return true;
  }
  return false;
}

