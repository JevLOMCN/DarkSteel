// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// StaticStruct @ 14f0a72c0

UScriptStruct * __cdecl FTapDelayInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTapDelayInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FTapDelayInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTapDelayInfo,(UObject *)pUVar1,L"TapDelayInfo");
  }
  return Z_Registration_Info_UScriptStruct_FTapDelayInfo.OuterSingleton;
}

// FTapDelayInfo @ 14f0b91e0

FTapDelayInfo * __thiscall FTapDelayInfo::FTapDelayInfo(FTapDelayInfo *this)

{
  int iVar1;
  
  this->OutputChannel = 0;
  this->PanInDegrees = 0.0;
  this->TapLineMode = Panning;
  this->DelayLength = 1000.0;
  this->Gain = -3.0;
  iVar1 = TapDelayUtils::IdCount + 1;
  this->TapId = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = iVar1;
  return this;
}

