// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147aa5660

UScriptStruct * __cdecl FDialogueWaveParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDialogueWaveParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDialogueWaveParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDialogueWaveParameter,(UObject *)pUVar1,
                         L"DialogueWaveParameter");
  }
  return Z_Registration_Info_UScriptStruct_FDialogueWaveParameter.OuterSingleton;
}

// FDialogueWaveParameter @ 147abb7d0

FDialogueWaveParameter * __thiscall
FDialogueWaveParameter::FDialogueWaveParameter(FDialogueWaveParameter *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &(this->Context).Targets.ArrayMax;
  (this->DialogueWave).field0_0x0.DebugPtr = (UDialogueWave *)0x0;
  (this->Context).Speaker.field0_0x0.DebugPtr = (UDialogueVoice *)0x0;
  (this->Context).Targets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Targets.ArrayNum = 0;
  *piVar1 = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&(this->Context).Targets.AllocatorInstance,piVar1);
  (this->Context).Targets.ArrayNum = iVar2 + 1;
  *(undefined8 *)((this->Context).Targets.AllocatorInstance.Data + (longlong)iVar2 * 8) = 0;
  return this;
}

