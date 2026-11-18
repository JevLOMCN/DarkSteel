// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 149412ab0

UScriptStruct * __cdecl FNiagaraBoolParameterMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData,(UObject *)pUVar1,
                         L"NiagaraBoolParameterMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.OuterSingleton;
}

// operator= @ 14942cfe0

FNiagaraBoolParameterMetaData * __thiscall
FNiagaraBoolParameterMetaData::operator=
          (FNiagaraBoolParameterMetaData *this,FNiagaraBoolParameterMetaData *param_1)

{
  UTexture2D *pUVar1;
  
  this->DisplayMode = param_1->DisplayMode;
  this->OverrideNameTrue = param_1->OverrideNameTrue;
  this->OverrideNameFalse = param_1->OverrideNameFalse;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->IconOverrideTrue).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->IconOverrideTrue).field0_0x0 = (param_1->IconOverrideTrue).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->IconOverrideFalse).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->IconOverrideFalse).field0_0x0 = (param_1->IconOverrideFalse).field0_0x0;
  return this;
}

