// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// FSoundSpectrumAnalyzerDelegateSettings @ 1464d98e0

FSoundSpectrumAnalyzerDelegateSettings * __thiscall
FSoundSpectrumAnalyzerDelegateSettings::FSoundSpectrumAnalyzerDelegateSettings
          (FSoundSpectrumAnalyzerDelegateSettings *this,
          FSoundSpectrumAnalyzerDelegateSettings *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->BandSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BandSettings).ArrayMax;
  iVar2 = (param_1->BandSettings).ArrayNum;
  _Src = (param_1->BandSettings).AllocatorInstance.Data;
  (this->BandSettings).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->BandSettings).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  }
  this->UpdateRate = param_1->UpdateRate;
  this->DecibelNoiseFloor = param_1->DecibelNoiseFloor;
  this->bDoNormalize = param_1->bDoNormalize;
  this->bDoAutoRange = param_1->bDoAutoRange;
  this->AutoRangeAttackTime = param_1->AutoRangeAttackTime;
  this->AutoRangeReleaseTime = param_1->AutoRangeReleaseTime;
  return this;
}

// operator= @ 1465422d0

FSoundSpectrumAnalyzerDelegateSettings * __thiscall
FSoundSpectrumAnalyzerDelegateSettings::operator=
          (FSoundSpectrumAnalyzerDelegateSettings *this,
          FSoundSpectrumAnalyzerDelegateSettings *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->BandSettings).ArrayMax;
    piVar1 = &(this->BandSettings).ArrayMax;
    _Src = (param_1->BandSettings).AllocatorInstance.Data;
    iVar3 = (param_1->BandSettings).ArrayNum;
    (this->BandSettings).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->BandSettings).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  this->UpdateRate = param_1->UpdateRate;
  this->DecibelNoiseFloor = param_1->DecibelNoiseFloor;
  this->bDoNormalize = param_1->bDoNormalize;
  this->bDoAutoRange = param_1->bDoAutoRange;
  this->AutoRangeAttackTime = param_1->AutoRangeAttackTime;
  this->AutoRangeReleaseTime = param_1->AutoRangeReleaseTime;
  return this;
}

