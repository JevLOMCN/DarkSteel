// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 2

// StaticStruct @ 14f0a6e10

UScriptStruct * __cdecl FSourceEffectFilterSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectFilterSettings,(UObject *)pUVar1,
                         L"SourceEffectFilterSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectFilterSettings.OuterSingleton;
}

// operator= @ 14f0c1360

FSourceEffectFilterSettings * __thiscall
FSourceEffectFilterSettings::operator=
          (FSourceEffectFilterSettings *this,FSourceEffectFilterSettings *param_1)

{
  TArray<FSourceEffectFilterAudioBusModulationSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FSourceEffectFilterAudioBusModulationSettings *pFVar5;
  
  pTVar1 = &this->AudioBusModulation;
  this->FilterCircuit = param_1->FilterCircuit;
  this->FilterType = param_1->FilterType;
  this->CutoffFrequency = param_1->CutoffFrequency;
  this->FilterQ = param_1->FilterQ;
  if (pTVar1 != &param_1->AudioBusModulation) {
    iVar3 = (this->AudioBusModulation).ArrayMax;
    piVar2 = &(this->AudioBusModulation).ArrayMax;
    pFVar5 = (FSourceEffectFilterAudioBusModulationSettings *)
             (param_1->AudioBusModulation).AllocatorInstance.Data;
    iVar4 = (param_1->AudioBusModulation).ArrayNum;
    (this->AudioBusModulation).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FSourceEffectFilterAudioBusModulationSettings,FSourceEffectFilterAudioBusModulationSettings,int>
                ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  return this;
}

