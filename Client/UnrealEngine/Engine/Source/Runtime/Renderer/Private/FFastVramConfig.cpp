// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FFastVramConfig @ 1454d1180

FFastVramConfig * __thiscall FFastVramConfig::FFastVramConfig(FFastVramConfig *this)

{
  memset(this,0,0x1a0);
  return this;
}

// Update @ 14550d5f0

void __thiscall FFastVramConfig::Update(FFastVramConfig *this)

{
  int iVar1;
  EBufferUsageFlags EVar2;
  ETextureCreateFlags EVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  ETextureCreateFlags EVar7;
  EBufferUsageFlags EVar8;
  ETextureCreateFlags EVar9;
  bool bVar10;
  
  this->bDirty = false;
  pTVar5 = CVarFastVRam_GBufferA.Ref;
  EVar3 = this->GBufferA;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  EVar9 = None;
  this->GBufferA = None;
  if (iVar1 == 1) {
    this->GBufferA = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferA = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GBufferB.Ref;
  EVar3 = this->GBufferB;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->GBufferB = None;
  if (iVar1 == 1) {
    this->GBufferB = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferB = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GBufferC.Ref;
  EVar3 = this->GBufferC;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->GBufferC = None;
  if (iVar1 == 1) {
    this->GBufferC = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferC = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GBufferD.Ref;
  EVar3 = this->GBufferD;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->GBufferD = None;
  if (iVar1 == 1) {
    this->GBufferD = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferD = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GBufferE.Ref;
  EVar3 = this->GBufferE;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->GBufferE = None;
  if (iVar1 == 1) {
    this->GBufferE = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferE = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GBufferF.Ref;
  EVar3 = this->GBufferF;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->GBufferF = None;
  if (iVar1 == 1) {
    this->GBufferF = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferF = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GBufferVelocity.Ref;
  EVar3 = this->GBufferVelocity;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->GBufferVelocity = None;
  if (iVar1 == 1) {
    this->GBufferVelocity = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->GBufferVelocity = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_HZB.Ref;
  EVar3 = this->HZB;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->HZB = None;
  if (iVar1 == 1) {
    this->HZB = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->HZB = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_SceneDepth.Ref;
  EVar3 = this->SceneDepth;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->SceneDepth = None;
  if (iVar1 == 1) {
    this->SceneDepth = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->SceneDepth = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = EVar3 != EVar7 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_SceneColor.Ref;
  EVar3 = this->SceneColor;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->SceneColor = None;
  if (iVar1 == 1) {
    this->SceneColor = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->SceneColor = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_Bloom.Ref;
  EVar3 = this->Bloom;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->Bloom = None;
  if (iVar1 == 1) {
    this->Bloom = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->Bloom = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_BokehDOF.Ref;
  EVar3 = this->BokehDOF;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->BokehDOF = None;
  if (iVar1 == 1) {
    this->BokehDOF = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->BokehDOF = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_CircleDOF.Ref;
  EVar3 = this->CircleDOF;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->CircleDOF = None;
  if (iVar1 == 1) {
    this->CircleDOF = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->CircleDOF = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_CombineLUTs.Ref;
  EVar3 = this->CombineLUTs;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->CombineLUTs = None;
  if (iVar1 == 1) {
    this->CombineLUTs = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->CombineLUTs = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_Downsample.Ref;
  EVar3 = this->Downsample;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->Downsample = None;
  if (iVar1 == 1) {
    this->Downsample = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->Downsample = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_EyeAdaptation.Ref;
  EVar3 = this->EyeAdaptation;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->EyeAdaptation = None;
  if (iVar1 == 1) {
    this->EyeAdaptation = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->EyeAdaptation = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_Histogram.Ref;
  EVar3 = this->Histogram;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->Histogram = None;
  if (iVar1 == 1) {
    this->Histogram = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->Histogram = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_HistogramReduce.Ref;
  EVar3 = this->HistogramReduce;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->HistogramReduce = None;
  if (iVar1 == 1) {
    this->HistogramReduce = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->HistogramReduce = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_VelocityFlat.Ref;
  EVar3 = this->VelocityFlat;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->VelocityFlat = None;
  if (iVar1 == 1) {
    this->VelocityFlat = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->VelocityFlat = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_VelocityMax.Ref;
  EVar3 = this->VelocityMax;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->VelocityMax = None;
  if (iVar1 == 1) {
    this->VelocityMax = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->VelocityMax = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_MotionBlur.Ref;
  EVar3 = this->MotionBlur;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->MotionBlur = None;
  if (iVar1 == 1) {
    this->MotionBlur = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->MotionBlur = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_Tonemap.Ref;
  EVar3 = this->Tonemap;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->Tonemap = None;
  if (iVar1 == 1) {
    this->Tonemap = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->Tonemap = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_Upscale.Ref;
  EVar3 = this->Upscale;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->Upscale = None;
  if (iVar1 == 1) {
    this->Upscale = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->Upscale = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldNormal.Ref;
  EVar3 = this->DistanceFieldNormal;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DistanceFieldNormal = None;
  if (iVar1 == 1) {
    this->DistanceFieldNormal = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DistanceFieldNormal = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldAOHistory.Ref;
  EVar3 = this->DistanceFieldAOHistory;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DistanceFieldAOHistory = None;
  if (iVar1 == 1) {
    this->DistanceFieldAOHistory = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DistanceFieldAOHistory = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldAODownsampledBentNormal.Ref;
  EVar3 = this->DistanceFieldAODownsampledBentNormal;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DistanceFieldAODownsampledBentNormal = None;
  if (iVar1 == 1) {
    this->DistanceFieldAODownsampledBentNormal = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DistanceFieldAODownsampledBentNormal = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldAOBentNormal.Ref;
  EVar3 = this->DistanceFieldAOBentNormal;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DistanceFieldAOBentNormal = None;
  if (iVar1 == 1) {
    this->DistanceFieldAOBentNormal = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DistanceFieldAOBentNormal = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldIrradiance.Ref;
  EVar3 = this->DistanceFieldIrradiance;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DistanceFieldIrradiance = None;
  if (iVar1 == 1) {
    this->DistanceFieldIrradiance = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DistanceFieldIrradiance = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldShadows.Ref;
  EVar3 = this->DistanceFieldShadows;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DistanceFieldShadows = None;
  if (iVar1 == 1) {
    this->DistanceFieldShadows = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DistanceFieldShadows = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_Distortion.Ref;
  EVar3 = this->Distortion;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->Distortion = None;
  if (iVar1 == 1) {
    this->Distortion = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->Distortion = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_ScreenSpaceShadowMask.Ref;
  EVar3 = this->ScreenSpaceShadowMask;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->ScreenSpaceShadowMask = None;
  if (iVar1 == 1) {
    this->ScreenSpaceShadowMask = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->ScreenSpaceShadowMask = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_VolumetricFog.Ref;
  EVar3 = this->VolumetricFog;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->VolumetricFog = None;
  if (iVar1 == 1) {
    this->VolumetricFog = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->VolumetricFog = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_SeparateTranslucency.Ref;
  EVar3 = this->SeparateTranslucency;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->SeparateTranslucency = None;
  if (iVar1 == 1) {
    this->SeparateTranslucency = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->SeparateTranslucency = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_SeparateTranslucencyModulate.Ref;
  EVar3 = this->SeparateTranslucencyModulate;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->SeparateTranslucencyModulate = None;
  if (iVar1 == 1) {
    this->SeparateTranslucencyModulate = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->SeparateTranslucencyModulate = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_ScreenSpaceAO.Ref;
  EVar3 = this->ScreenSpaceAO;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->ScreenSpaceAO = None;
  if (iVar1 == 1) {
    this->ScreenSpaceAO = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->ScreenSpaceAO = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_SSR.Ref;
  EVar3 = this->SSR;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->SSR = None;
  if (iVar1 == 1) {
    this->SSR = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->SSR = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DBufferA.Ref;
  EVar3 = this->DBufferA;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DBufferA = None;
  if (iVar1 == 1) {
    this->DBufferA = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DBufferA = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DBufferB.Ref;
  EVar3 = this->DBufferB;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DBufferB = None;
  if (iVar1 == 1) {
    this->DBufferB = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DBufferB = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DBufferC.Ref;
  EVar3 = this->DBufferC;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DBufferC = None;
  if (iVar1 == 1) {
    this->DBufferC = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DBufferC = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DBufferMask.Ref;
  EVar3 = this->DBufferMask;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DBufferMask = None;
  if (iVar1 == 1) {
    this->DBufferMask = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DBufferMask = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DOFSetup.Ref;
  EVar3 = this->DOFSetup;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DOFSetup = None;
  if (iVar1 == 1) {
    this->DOFSetup = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DOFSetup = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DOFReduce.Ref;
  EVar3 = this->DOFReduce;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DOFReduce = None;
  if (iVar1 == 1) {
    this->DOFReduce = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DOFReduce = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DOFPostfilter.Ref;
  EVar3 = this->DOFPostfilter;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->DOFPostfilter = None;
  if (iVar1 == 1) {
    this->DOFPostfilter = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->DOFPostfilter = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_CustomDepth.Ref;
  EVar3 = this->CustomDepth;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->CustomDepth = None;
  if (iVar1 == 1) {
    this->CustomDepth = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->CustomDepth = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_ShadowPointLight.Ref;
  EVar3 = this->ShadowPointLight;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->ShadowPointLight = None;
  if (iVar1 == 1) {
    this->ShadowPointLight = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->ShadowPointLight = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_ShadowPerObject.Ref;
  EVar3 = this->ShadowPerObject;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->ShadowPerObject = None;
  if (iVar1 == 1) {
    this->ShadowPerObject = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->ShadowPerObject = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_ShadowCSM.Ref;
  EVar3 = this->ShadowCSM;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->ShadowCSM = None;
  if (iVar1 == 1) {
    this->ShadowCSM = FastVRAM;
    EVar7 = FastVRAM;
  }
  else {
    EVar7 = EVar9;
    if (iVar1 == 2) {
      this->ShadowCSM = FastVRAM|FastVRAMPartialAlloc;
      EVar7 = FastVRAM|FastVRAMPartialAlloc;
    }
  }
  bVar10 = bVar10 || EVar3 != EVar7;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_PostProcessMaterial.Ref;
  EVar3 = this->PostProcessMaterial;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = pTVar5->ShadowedValue[1];
  this->PostProcessMaterial = None;
  if (iVar1 == 1) {
    this->PostProcessMaterial = FastVRAM;
    EVar9 = FastVRAM;
  }
  else if (iVar1 == 2) {
    this->PostProcessMaterial = FastVRAM|FastVRAMPartialAlloc;
    EVar9 = FastVRAM|FastVRAMPartialAlloc;
  }
  bVar10 = EVar3 != EVar9 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldCulledObjectBuffers.Ref;
  EVar2 = this->DistanceFieldCulledObjectBuffers;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar8 = -(uint)(pTVar5->ShadowedValue[1] != 0) & FastVRAM;
  this->DistanceFieldCulledObjectBuffers = EVar8;
  bVar10 = EVar2 != EVar8 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldTileIntersectionResources.Ref;
  EVar2 = this->DistanceFieldTileIntersectionResources;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar8 = -(uint)(pTVar5->ShadowedValue[1] != 0) & FastVRAM;
  this->DistanceFieldTileIntersectionResources = EVar8;
  bVar10 = EVar2 != EVar8 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_DistanceFieldAOScreenGridResources.Ref;
  EVar2 = this->DistanceFieldAOScreenGridResources;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar8 = -(uint)(pTVar5->ShadowedValue[1] != 0) & FastVRAM;
  this->DistanceFieldAOScreenGridResources = EVar8;
  bVar10 = EVar2 != EVar8 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_ForwardLightingCullingResources.Ref;
  EVar2 = this->ForwardLightingCullingResources;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar8 = -(uint)(pTVar5->ShadowedValue[1] != 0) & FastVRAM;
  this->ForwardLightingCullingResources = EVar8;
  bVar10 = EVar2 != EVar8 || bVar10;
  this->bDirty = bVar10;
  pTVar5 = CVarFastVRam_GlobalDistanceFieldCullGridBuffers.Ref;
  EVar2 = this->GlobalDistanceFieldCullGridBuffers;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar8 = -(uint)(pTVar5->ShadowedValue[1] != 0) & FastVRAM;
  this->GlobalDistanceFieldCullGridBuffers = EVar8;
  this->bDirty = EVar2 != EVar8 || bVar10;
  return;
}

// UpdateBufferFlagFromCVar @ 14550ef80

bool __thiscall
FFastVramConfig::UpdateBufferFlagFromCVar
          (FFastVramConfig *this,TAutoConsoleVariable<int> *param_1,EBufferUsageFlags *param_2)

{
  EBufferUsageFlags EVar1;
  TConsoleVariableData<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EBufferUsageFlags EVar6;
  
  EVar1 = *param_2;
  pTVar2 = param_1->Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  EVar6 = -(uint)(pTVar2->ShadowedValue[1] != 0) & FastVRAM;
  *param_2 = EVar6;
  return EVar1 != EVar6;
}

// UpdateTextureFlagFromCVar @ 14550f740

bool __thiscall
FFastVramConfig::UpdateTextureFlagFromCVar
          (FFastVramConfig *this,TAutoConsoleVariable<int> *param_1,ETextureCreateFlags *param_2)

{
  int iVar1;
  ETextureCreateFlags EVar2;
  TConsoleVariableData<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ETextureCreateFlags EVar7;
  
  EVar2 = *param_2;
  pTVar3 = param_1->Ref;
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar1 = pTVar3->ShadowedValue[1];
  EVar7 = None;
  *param_2 = None;
  if (iVar1 == 1) {
    EVar7 = FastVRAM;
  }
  else {
    if (iVar1 != 2) goto LAB_14550f7b0;
    EVar7 = FastVRAM|FastVRAMPartialAlloc;
  }
  *param_2 = EVar7;
LAB_14550f7b0:
  return EVar2 != EVar7;
}

