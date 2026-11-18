// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba6530

UScriptStruct * __cdecl FForceFeedbackEffectOverridenChannelDetails::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails,
                         (UObject *)pUVar1,L"ForceFeedbackEffectOverridenChannelDetails");
  }
  return Z_Registration_Info_UScriptStruct_FForceFeedbackEffectOverridenChannelDetails.
         OuterSingleton;
}

// FForceFeedbackEffectOverridenChannelDetails @ 147bb8fe0

FForceFeedbackEffectOverridenChannelDetails * __thiscall
FForceFeedbackEffectOverridenChannelDetails::FForceFeedbackEffectOverridenChannelDetails
          (FForceFeedbackEffectOverridenChannelDetails *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = &(this->ChannelDetails).ArrayNum;
  piVar2 = &(this->ChannelDetails).ArrayMax;
  *piVar1 = 0;
  (this->ChannelDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,1,(ForAnyElementType *)this,piVar1,piVar2);
  DefaultConstructItems<FForceFeedbackChannelDetails,int>
            ((this->ChannelDetails).AllocatorInstance.Data + (longlong)iVar3 * 0x90,1);
  return this;
}

