// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 149262b30

UScriptStruct * __cdecl FNiagaraDebugHUDSettingsData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData,(UObject *)pUVar1,
                         L"NiagaraDebugHUDSettingsData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton;
}

// FNiagaraDebugHUDSettingsData @ 149274760

FNiagaraDebugHUDSettingsData * __thiscall
FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData(FNiagaraDebugHUDSettingsData *this)

{
  FLinearColor FVar1;
  
  this->bHudEnabled = true;
  this->bHudRenderingEnabled = true;
  this->bValidationEnabled = false;
  this->bOverviewEnabled = false;
  this->bIncludeCascade = true;
  this->bShowRegisteredComponents = false;
  this->bOverviewShowFilteredSystemOnly = true;
  this->bShowGlobalBudgetInfo = false;
  (this->SystemFilter).Data.ArrayNum = 0;
  (this->SystemFilter).Data.ArrayMax = 0;
  (this->EmitterFilter).Data.ArrayNum = 0;
  (this->EmitterFilter).Data.ArrayMax = 0;
  (this->ParticleDisplayClip).field0_0x0._s_0.Y = 10000.0;
  (this->PerfGraphSize).field0_0x0._s_0.X = 500.0;
  (this->PerfGraphSize).field0_0x0._s_0.Y = 500.0;
  (this->ActorFilter).Data.ArrayNum = 0;
  (this->ActorFilter).Data.ArrayMax = 0;
  (this->ComponentFilter).Data.ArrayNum = 0;
  (this->ComponentFilter).Data.ArrayMax = 0;
  (this->SystemVariables).ArrayNum = 0;
  (this->SystemVariables).ArrayMax = 0;
  (this->ParticlesVariables).ArrayNum = 0;
  (this->ParticlesVariables).ArrayMax = 0;
  (this->ParticleDisplayClip).field0_0x0._s_0.X = 0.0;
  (this->SystemFilter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterFilter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->OverviewMode = Overview;
  this->OverviewSortMode = Name;
  this->bSystemFilterEnabled = false;
  this->bEmitterFilterEnabled = false;
  this->bActorFilterEnabled = false;
  (this->ComponentFilter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlesVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorFilter).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bComponentFilterEnabled = false;
  this->bValidateSystemSimulationDataBuffers = true;
  this->bValidateParticleDataBuffers = true;
  this->bValidationLogErrors = false;
  this->ValidationAttributeDisplayTruncate = 3;
  this->SystemDebugVerbosity = None;
  this->SystemEmitterVerbosity = Basic;
  this->DataInterfaceVerbosity = None;
  this->bSystemShowActiveOnlyInWorld = true;
  this->bShowParticleVariables = false;
  this->bEnableGpuParticleReadback = false;
  this->bShowParticleIndex = false;
  this->bShowParticlesVariablesWithSystem = false;
  this->bShowParticleVariablesVertical = false;
  this->bUseMaxParticlesToDisplay = true;
  this->MaxParticlesToDisplay = 0x20;
  this->bUseParticleDisplayClip = false;
  this->bUseParticleDisplayCenterRadius = false;
  this->ParticleDisplayCenterRadius = 1.0;
  this->PerfReportFrames = 0x3c;
  this->PerfSampleMode = FrameTotal;
  this->PerfUnits = Microseconds;
  this->bShowPerfColumGameThreadOnly = false;
  this->PerfGraphMode = GameThread;
  this->PerfHistoryFrames = 600;
  this->bUsePerfGraphTimeRange = false;
  this->PerfGraphTimeRange = 500.0;
  FVar1 = FLinearColor::White;
  this->SmoothingWidth = 4;
  this->OverviewFont = Normal;
  (this->PerfGraphAxisColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->OverviewLocation).field0_0x0._s_0.X = 30.0;
  (this->OverviewLocation).field0_0x0._s_0.Y = 150.0;
  (this->SystemTextOptions).Font = Small;
  (this->SystemTextOptions).HorizontalAlignment = Left;
  (this->SystemTextOptions).VerticalAlignment = Top;
  (this->SystemTextOptions).ScreenOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ParticleTextOptions).Font = Small;
  (this->ParticleTextOptions).HorizontalAlignment = Left;
  (this->ParticleTextOptions).VerticalAlignment = Top;
  (this->ParticleTextOptions).ScreenOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultBackgroundColor).field0_0x0 + 4) = 0;
  (this->DefaultBackgroundColor).field0_0x0._s_0.A = 0.5;
  this->bDrawBoundsEnabled = false;
  this->bDrawBoundsWireframe = true;
  *(undefined8 *)&this->DrawBoundsAlpha = 0x3f800000;
  (this->OverviewHeadingColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->OverviewDetailColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0
  ;
  (this->OverviewDetailHighlightColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
  (this->InWorldErrorTextColor).field0_0x0._s_0.R = 1.0;
  (this->InWorldErrorTextColor).field0_0x0._s_0.G = 0.4;
  (this->InWorldErrorTextColor).field0_0x0._s_0.B = 0.3;
  (this->InWorldErrorTextColor).field0_0x0._s_0.A = 1.0;
  (this->InWorldTextColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MessageInfoTextColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->MessageWarningTextColor).field0_0x0._s_0.R = 0.9;
  (this->SystemColorHSVMin).field0_0x0._s_0.X = 0.0;
  (this->SystemColorHSVMin).field0_0x0._s_0.Y = 200.0;
  (this->SystemColorHSVMin).field0_0x0._s_0.Z = 200.0;
  this->PlaybackMode = Play;
  this->bPlaybackRateEnabled = false;
  this->bLoopTimeEnabled = false;
  (this->SystemColorHSVMax).field0_0x0._s_0.X = 255.0;
  (this->SystemColorHSVMax).field0_0x0._s_0.Y = 255.0;
  (this->SystemColorHSVMax).field0_0x0._s_0.Z = 255.0;
  *(undefined8 *)((longlong)&(this->MessageWarningTextColor).field0_0x0 + 4) = 0x3f333333;
  (this->MessageWarningTextColor).field0_0x0._s_0.A = 1.0;
  (this->MessageErrorTextColor).field0_0x0._s_0.R = 1.0;
  (this->MessageErrorTextColor).field0_0x0._s_0.G = 0.4;
  (this->MessageErrorTextColor).field0_0x0._s_0.B = 0.3;
  (this->MessageErrorTextColor).field0_0x0._s_0.A = 1.0;
  this->SystemColorTableOpacity = 0.2;
  this->SystemColorSeed = 0;
  this->PlaybackRate = 0.25;
  this->LoopTime = 1.0;
  ::FString::operator=(&this->ActorFilter,L"*");
  ::FString::operator=(&this->ComponentFilter,L"*");
  ::FString::operator=(&this->SystemFilter,L"*");
  ::FString::operator=(&this->EmitterFilter,L"*");
  return this;
}

// ~FNiagaraDebugHUDSettingsData @ 149279ee0

void __thiscall
FNiagaraDebugHUDSettingsData::~FNiagaraDebugHUDSettingsData(FNiagaraDebugHUDSettingsData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraDebugHUDVariable,int>
            ((FNiagaraDebugHUDVariable *)(this->ParticlesVariables).AllocatorInstance.Data,
             (this->ParticlesVariables).ArrayNum);
  pFVar1 = (this->ParticlesVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraDebugHUDVariable,int>
            ((FNiagaraDebugHUDVariable *)(this->SystemVariables).AllocatorInstance.Data,
             (this->SystemVariables).ArrayNum);
  pFVar1 = (this->SystemVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentFilter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorFilter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterFilter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SystemFilter).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14927b680

FNiagaraDebugHUDSettingsData * __thiscall
FNiagaraDebugHUDSettingsData::operator=
          (FNiagaraDebugHUDSettingsData *this,FNiagaraDebugHUDSettingsData *param_1)

{
  double dVar1;
  undefined8 uVar2;
  ENiagaraDebugHudHAlign EVar3;
  ENiagaraDebugHudVAlign EVar4;
  undefined2 uVar5;
  
  this->bHudEnabled = param_1->bHudEnabled;
  this->bHudRenderingEnabled = param_1->bHudRenderingEnabled;
  this->bValidationEnabled = param_1->bValidationEnabled;
  this->bOverviewEnabled = param_1->bOverviewEnabled;
  this->OverviewMode = param_1->OverviewMode;
  this->OverviewSortMode = param_1->OverviewSortMode;
  this->bIncludeCascade = param_1->bIncludeCascade;
  this->bShowRegisteredComponents = param_1->bShowRegisteredComponents;
  this->bOverviewShowFilteredSystemOnly = param_1->bOverviewShowFilteredSystemOnly;
  this->bShowGlobalBudgetInfo = param_1->bShowGlobalBudgetInfo;
  this->bSystemFilterEnabled = param_1->bSystemFilterEnabled;
  ::FString::operator=(&this->SystemFilter,&param_1->SystemFilter);
  this->bEmitterFilterEnabled = param_1->bEmitterFilterEnabled;
  ::FString::operator=(&this->EmitterFilter,&param_1->EmitterFilter);
  this->bActorFilterEnabled = param_1->bActorFilterEnabled;
  ::FString::operator=(&this->ActorFilter,&param_1->ActorFilter);
  this->bComponentFilterEnabled = param_1->bComponentFilterEnabled;
  ::FString::operator=(&this->ComponentFilter,&param_1->ComponentFilter);
  this->bValidateSystemSimulationDataBuffers = param_1->bValidateSystemSimulationDataBuffers;
  this->bValidateParticleDataBuffers = param_1->bValidateParticleDataBuffers;
  this->bValidationLogErrors = param_1->bValidationLogErrors;
  this->ValidationAttributeDisplayTruncate = param_1->ValidationAttributeDisplayTruncate;
  this->SystemDebugVerbosity = param_1->SystemDebugVerbosity;
  this->SystemEmitterVerbosity = param_1->SystemEmitterVerbosity;
  this->DataInterfaceVerbosity = param_1->DataInterfaceVerbosity;
  TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_>::operator=
            (&this->SystemVariables,&param_1->SystemVariables);
  this->bSystemShowActiveOnlyInWorld = param_1->bSystemShowActiveOnlyInWorld;
  this->bShowParticleVariables = param_1->bShowParticleVariables;
  TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParticlesVariables,&param_1->ParticlesVariables);
  this->bEnableGpuParticleReadback = param_1->bEnableGpuParticleReadback;
  this->bShowParticleIndex = param_1->bShowParticleIndex;
  this->bShowParticlesVariablesWithSystem = param_1->bShowParticlesVariablesWithSystem;
  this->bShowParticleVariablesVertical = param_1->bShowParticleVariablesVertical;
  this->bUseMaxParticlesToDisplay = param_1->bUseMaxParticlesToDisplay;
  this->MaxParticlesToDisplay = param_1->MaxParticlesToDisplay;
  this->bUseParticleDisplayClip = param_1->bUseParticleDisplayClip;
  dVar1 = (param_1->ParticleDisplayClip).field0_0x0._s_0.Y;
  (this->ParticleDisplayClip).field0_0x0._s_0.X = (param_1->ParticleDisplayClip).field0_0x0._s_0.X;
  (this->ParticleDisplayClip).field0_0x0._s_0.Y = dVar1;
  this->bUseParticleDisplayCenterRadius = param_1->bUseParticleDisplayCenterRadius;
  this->ParticleDisplayCenterRadius = param_1->ParticleDisplayCenterRadius;
  this->PerfReportFrames = param_1->PerfReportFrames;
  this->PerfSampleMode = param_1->PerfSampleMode;
  this->PerfUnits = param_1->PerfUnits;
  this->bShowPerfColumGameThreadOnly = param_1->bShowPerfColumGameThreadOnly;
  this->PerfGraphMode = param_1->PerfGraphMode;
  this->PerfHistoryFrames = param_1->PerfHistoryFrames;
  this->bUsePerfGraphTimeRange = param_1->bUsePerfGraphTimeRange;
  this->PerfGraphTimeRange = param_1->PerfGraphTimeRange;
  dVar1 = (param_1->PerfGraphSize).field0_0x0._s_0.Y;
  (this->PerfGraphSize).field0_0x0._s_0.X = (param_1->PerfGraphSize).field0_0x0._s_0.X;
  (this->PerfGraphSize).field0_0x0._s_0.Y = dVar1;
  uVar2 = *(undefined8 *)((longlong)&(param_1->PerfGraphAxisColor).field0_0x0 + 8);
  *(undefined8 *)&(this->PerfGraphAxisColor).field0_0x0 =
       *(undefined8 *)&(param_1->PerfGraphAxisColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->PerfGraphAxisColor).field0_0x0 + 8) = uVar2;
  this->SmoothingWidth = param_1->SmoothingWidth;
  this->OverviewFont = param_1->OverviewFont;
  dVar1 = (param_1->OverviewLocation).field0_0x0._s_0.Y;
  (this->OverviewLocation).field0_0x0._s_0.X = (param_1->OverviewLocation).field0_0x0._s_0.X;
  (this->OverviewLocation).field0_0x0._s_0.Y = dVar1;
  EVar3 = (param_1->SystemTextOptions).HorizontalAlignment;
  EVar4 = (param_1->SystemTextOptions).VerticalAlignment;
  uVar5 = *(undefined2 *)&(param_1->SystemTextOptions).field_0x6;
  dVar1 = (param_1->SystemTextOptions).ScreenOffset.field0_0x0._s_0.X;
  (this->SystemTextOptions).Font = (param_1->SystemTextOptions).Font;
  (this->SystemTextOptions).HorizontalAlignment = EVar3;
  (this->SystemTextOptions).VerticalAlignment = EVar4;
  *(undefined2 *)&(this->SystemTextOptions).field_0x6 = uVar5;
  (this->SystemTextOptions).ScreenOffset.field0_0x0._s_0.X = dVar1;
  (this->SystemTextOptions).ScreenOffset.field0_0x0._s_0.Y =
       (param_1->SystemTextOptions).ScreenOffset.field0_0x0._s_0.Y;
  EVar3 = (param_1->ParticleTextOptions).HorizontalAlignment;
  EVar4 = (param_1->ParticleTextOptions).VerticalAlignment;
  uVar5 = *(undefined2 *)&(param_1->ParticleTextOptions).field_0x6;
  dVar1 = (param_1->ParticleTextOptions).ScreenOffset.field0_0x0._s_0.X;
  (this->ParticleTextOptions).Font = (param_1->ParticleTextOptions).Font;
  (this->ParticleTextOptions).HorizontalAlignment = EVar3;
  (this->ParticleTextOptions).VerticalAlignment = EVar4;
  *(undefined2 *)&(this->ParticleTextOptions).field_0x6 = uVar5;
  (this->ParticleTextOptions).ScreenOffset.field0_0x0._s_0.X = dVar1;
  (this->ParticleTextOptions).ScreenOffset.field0_0x0._s_0.Y =
       (param_1->ParticleTextOptions).ScreenOffset.field0_0x0._s_0.Y;
  this->bDrawBoundsEnabled = param_1->bDrawBoundsEnabled;
  this->bDrawBoundsWireframe = param_1->bDrawBoundsWireframe;
  this->DrawBoundsAlpha = param_1->DrawBoundsAlpha;
  uVar2 = *(undefined8 *)((longlong)&(param_1->DefaultBackgroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultBackgroundColor).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultBackgroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultBackgroundColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->OverviewHeadingColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverviewHeadingColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverviewHeadingColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverviewHeadingColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->OverviewDetailColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverviewDetailColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverviewDetailColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverviewDetailColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->OverviewDetailHighlightColor).field0_0x0 + 8);
  *(undefined8 *)&(this->OverviewDetailHighlightColor).field0_0x0 =
       *(undefined8 *)&(param_1->OverviewDetailHighlightColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->OverviewDetailHighlightColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->InWorldErrorTextColor).field0_0x0 + 8);
  *(undefined8 *)&(this->InWorldErrorTextColor).field0_0x0 =
       *(undefined8 *)&(param_1->InWorldErrorTextColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->InWorldErrorTextColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->InWorldTextColor).field0_0x0 + 8);
  *(undefined8 *)&(this->InWorldTextColor).field0_0x0 =
       *(undefined8 *)&(param_1->InWorldTextColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->InWorldTextColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MessageInfoTextColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MessageInfoTextColor).field0_0x0 =
       *(undefined8 *)&(param_1->MessageInfoTextColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MessageInfoTextColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MessageWarningTextColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MessageWarningTextColor).field0_0x0 =
       *(undefined8 *)&(param_1->MessageWarningTextColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MessageWarningTextColor).field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MessageErrorTextColor).field0_0x0 + 8);
  *(undefined8 *)&(this->MessageErrorTextColor).field0_0x0 =
       *(undefined8 *)&(param_1->MessageErrorTextColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->MessageErrorTextColor).field0_0x0 + 8) = uVar2;
  this->SystemColorTableOpacity = param_1->SystemColorTableOpacity;
  this->SystemColorSeed = param_1->SystemColorSeed;
  dVar1 = (param_1->SystemColorHSVMin).field0_0x0._s_0.Y;
  (this->SystemColorHSVMin).field0_0x0._s_0.X = (param_1->SystemColorHSVMin).field0_0x0._s_0.X;
  (this->SystemColorHSVMin).field0_0x0._s_0.Y = dVar1;
  (this->SystemColorHSVMin).field0_0x0._s_0.Z = (param_1->SystemColorHSVMin).field0_0x0._s_0.Z;
  dVar1 = (param_1->SystemColorHSVMax).field0_0x0._s_0.Y;
  (this->SystemColorHSVMax).field0_0x0._s_0.X = (param_1->SystemColorHSVMax).field0_0x0._s_0.X;
  (this->SystemColorHSVMax).field0_0x0._s_0.Y = dVar1;
  (this->SystemColorHSVMax).field0_0x0._s_0.Z = (param_1->SystemColorHSVMax).field0_0x0._s_0.Z;
  this->PlaybackMode = param_1->PlaybackMode;
  this->bPlaybackRateEnabled = param_1->bPlaybackRateEnabled;
  this->PlaybackRate = param_1->PlaybackRate;
  this->bLoopTimeEnabled = param_1->bLoopTimeEnabled;
  this->LoopTime = param_1->LoopTime;
  return this;
}

