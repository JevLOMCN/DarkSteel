// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// StaticStruct @ 14f0a1b00

UScriptStruct * __cdecl FSubmixEffectMultibandCompressorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectMultibandCompressorSettings,
                         (UObject *)pUVar1,L"SubmixEffectMultibandCompressorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectMultibandCompressorSettings.OuterSingleton;
}

// FSubmixEffectMultibandCompressorSettings @ 14f0b8dd0

FSubmixEffectMultibandCompressorSettings * __thiscall
FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings
          (FSubmixEffectMultibandCompressorSettings *this,
          FSubmixEffectMultibandCompressorSettings *param_1)

{
  UAudioBus *pUVar1;
  USoundSubmix *pUVar2;
  
  this->DynamicsProcessorType = param_1->DynamicsProcessorType;
  this->PeakMode = param_1->PeakMode;
  this->LinkMode = param_1->LinkMode;
  this->LookAheadMsec = param_1->LookAheadMsec;
  this->bAnalogMode = param_1->bAnalogMode;
  this->bFourPole = param_1->bFourPole;
  this->bBypass = param_1->bBypass;
  this->KeySource = param_1->KeySource;
  pUVar1 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr;
  (this->ExternalAudioBus).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->ExternalSubmix).field0_0x0.DebugPtr;
  (this->ExternalSubmix).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->KeyGainDb = param_1->KeyGainDb;
  this->bKeyAudition = param_1->bKeyAudition;
  (this->Bands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bands).AllocatorInstance.Data = (param_1->Bands).AllocatorInstance.Data;
  (param_1->Bands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bands).ArrayNum = (param_1->Bands).ArrayNum;
  (this->Bands).ArrayMax = (param_1->Bands).ArrayMax;
  (param_1->Bands).ArrayNum = 0;
  (param_1->Bands).ArrayMax = 0;
  return this;
}

// operator= @ 14f0c14a0

FSubmixEffectMultibandCompressorSettings * __thiscall
FSubmixEffectMultibandCompressorSettings::operator=
          (FSubmixEffectMultibandCompressorSettings *this,
          FSubmixEffectMultibandCompressorSettings *param_1)

{
  TArray<FDynamicsBandSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UAudioBus *pUVar4;
  USoundSubmix *pUVar5;
  FScriptContainerElement *_Src;
  
  this->DynamicsProcessorType = param_1->DynamicsProcessorType;
  this->PeakMode = param_1->PeakMode;
  this->LinkMode = param_1->LinkMode;
  this->LookAheadMsec = param_1->LookAheadMsec;
  this->bAnalogMode = param_1->bAnalogMode;
  this->bFourPole = param_1->bFourPole;
  this->bBypass = param_1->bBypass;
  this->KeySource = param_1->KeySource;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ExternalAudioBus).field0_0x0.DebugPtr, pUVar4 != (UAudioBus *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ExternalAudioBus).field0_0x0 = (param_1->ExternalAudioBus).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->ExternalSubmix).field0_0x0.DebugPtr, pUVar5 != (USoundSubmix *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->ExternalSubmix).field0_0x0 = (param_1->ExternalSubmix).field0_0x0;
  pTVar1 = &this->Bands;
  this->KeyGainDb = param_1->KeyGainDb;
  this->bKeyAudition = param_1->bKeyAudition;
  if (pTVar1 != &param_1->Bands) {
    iVar3 = (param_1->Bands).ArrayNum;
    piVar2 = &(this->Bands).ArrayMax;
    _Src = (param_1->Bands).AllocatorInstance.Data;
    (this->Bands).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
      }
    }
  }
  return this;
}

