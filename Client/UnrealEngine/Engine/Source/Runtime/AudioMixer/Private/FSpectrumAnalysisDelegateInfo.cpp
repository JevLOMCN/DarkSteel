// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// FSpectrumAnalysisDelegateInfo @ 14653e080

FSpectrumAnalysisDelegateInfo * __thiscall
Audio::FMixerSubmix::FSpectrumAnalysisDelegateInfo::FSpectrumAnalysisDelegateInfo
          (FSpectrumAnalysisDelegateInfo *this,FSpectrumAnalysisDelegateInfo *param_1)

{
  TArray<Audio::FMixerSubmix::FSpectralAnalysisBandInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *pTVar6;
  ISpectrumBandExtractor *pIVar7;
  ISpectrumBandExtractor *pIVar8;
  FScriptContainerElement *_Src;
  ForAnyElementType local_58;
  undefined8 local_50;
  FDestructionSentinel local_48;
  
  this->LastUpdateTime = -1.0;
  pTVar1 = &this->SpectralBands;
  (this->DelegateSettings).BandSettings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &(this->OnSubmixSpectralAnalysis).field_0x8;
  (this->DelegateSettings).BandSettings.ArrayNum = 0;
  (this->DelegateSettings).BandSettings.ArrayMax = 0;
  *(undefined8 *)&this->OnSubmixSpectralAnalysis = 0;
  (this->SpectrumBandExtractor).Ptr = (ISpectrumBandExtractor *)0x0;
  this->UpdateDelta = 0.0;
  piVar3 = &(this->SpectralBands).ArrayMax;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)&(this->OnSubmixSpectralAnalysis).field_0x10 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SpectralBands).ArrayNum = 0;
  *piVar3 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->OnSubmixSpectralAnalysis,(FReadAccessScope *)&local_48);
  puVar4 = &(param_1->OnSubmixSpectralAnalysis).field_0x8;
  if (&local_58 != (ForAnyElementType *)puVar4) {
    iVar5 = *(int *)&(param_1->OnSubmixSpectralAnalysis).field_0x10;
    pTVar6 = *(TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> **)puVar4;
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    if ((iVar5 != 0) || (local_50._4_4_ != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar5,local_50._4_4_,&local_58,iVar5,(int *)((longlong)&local_50 + 4));
      ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int>
                (local_58.Data,pTVar6,iVar5);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSubmixSpectralAnalysis,(FWriteAccessScope *)&local_48);
  if ((ForAnyElementType *)puVar2 != &local_58) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 = local_58.Data;
    *(undefined4 *)&(this->OnSubmixSpectralAnalysis).field_0x10 = (undefined4)local_50;
    *(int *)&(this->OnSubmixSpectralAnalysis).field_0x14 = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pIVar7 = (param_1->SpectrumBandExtractor).Ptr;
  (param_1->SpectrumBandExtractor).Ptr = (ISpectrumBandExtractor *)0x0;
  pIVar8 = (this->SpectrumBandExtractor).Ptr;
  if ((pIVar8 != pIVar7) &&
     ((this->SpectrumBandExtractor).Ptr = pIVar7, pIVar8 != (ISpectrumBandExtractor *)0x0)) {
    (**(code **)*pIVar8)(pIVar8,1);
  }
  FSoundSpectrumAnalyzerDelegateSettings::operator=
            (&this->DelegateSettings,&param_1->DelegateSettings);
  if (pTVar1 != &param_1->SpectralBands) {
    iVar5 = (param_1->SpectralBands).ArrayNum;
    _Src = (param_1->SpectralBands).AllocatorInstance.Data;
    (this->SpectralBands).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,iVar5,*piVar3,&pTVar1->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0x30);
      }
    }
  }
  return this;
}

