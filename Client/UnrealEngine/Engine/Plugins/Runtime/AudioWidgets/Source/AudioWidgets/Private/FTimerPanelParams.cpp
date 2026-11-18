// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// FTimerPanelParams @ 14d8b6930

FTimerPanelParams * __thiscall
AudioWidgets::FLoudnessMeterWidgetView::FTimerPanelParams::FTimerPanelParams
          (FTimerPanelParams *this,FTimerPanelParams *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  
  (this->AnalysisTime).Value.Ticks = (param_1->AnalysisTime).Value.Ticks;
  (this->AnalysisTime).bIsSet = (param_1->AnalysisTime).bIsSet;
  this_01 = &(this->AnalysisTime).Getter;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->AnalysisTime).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->AnalysisTime).Getter.field_0x10 = 0;
  TDelegate<FTimespan___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_01,&(param_1->AnalysisTime).Getter);
  *(undefined8 *)&this->OnResetButtonClicked = 0;
  *(undefined8 *)&(this->OnResetButtonClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnResetButtonClicked).field_0x10 = 0;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnResetButtonClicked,&param_1->OnResetButtonClicked);
  this_00 = &(this->bIsVisible).Getter;
  (this->bIsVisible).Value = (param_1->bIsVisible).Value;
  (this->bIsVisible).bIsSet = (param_1->bIsVisible).bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->bIsVisible).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->bIsVisible).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,&(param_1->bIsVisible).Getter);
  *(undefined8 *)&this->OnVisibilityToggleRequested = 0;
  *(undefined8 *)&(this->OnVisibilityToggleRequested).field_0x8 = 0;
  *(undefined4 *)&(this->OnVisibilityToggleRequested).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnVisibilityToggleRequested,&param_1->OnVisibilityToggleRequested);
  return this;
}

// ~FTimerPanelParams @ 14d8bf4c0

void __thiscall
AudioWidgets::FLoudnessMeterWidgetView::FTimerPanelParams::~FTimerPanelParams
          (FTimerPanelParams *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVisibilityToggleRequested);
  pvVar1 = *(void **)&(this->OnVisibilityToggleRequested).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVisibilityToggleRequested);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bIsVisible).Getter);
  pvVar1 = *(void **)&(this->bIsVisible).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bIsVisible).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnResetButtonClicked);
  pvVar1 = *(void **)&(this->OnResetButtonClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnResetButtonClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AnalysisTime).Getter);
  pvVar1 = *(void **)&(this->AnalysisTime).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnalysisTime).Getter);
  return;
}

