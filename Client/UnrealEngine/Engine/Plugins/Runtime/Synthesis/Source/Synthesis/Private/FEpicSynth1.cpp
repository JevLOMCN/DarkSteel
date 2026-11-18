// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 67

// FEpicSynth1 @ 14f0b6870

FEpicSynth1 * __thiscall Audio::FEpicSynth1::FEpicSynth1(FEpicSynth1 *this)

{
  undefined1 *puVar1;
  float fVar2;
  
  this->MaxNumVoices = 1;
  this->_padding_ = (longlong)&___7FEpicSynth1_Audio__6B_;
  this->NumVoices = 1;
  this->NumActiveVoices = 0;
  this->LastVoice = (FEpicSynth1Voice *)0x0;
  this->NumStoppingVoices = 8;
  this->SampleRate = 44100.0;
  this->ControlSampleRate = 0.0;
  this->ControlSamplePeriod = 0x100;
  FModulationMatrix::FModulationMatrix(&this->ModMatrix);
  fVar2 = this->SampleRate * __real_3f000000;
  this->Portamento = 0.0;
  this->LastMidiNote = 0;
  (this->Voices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Voices).ArrayNum = 0;
  (this->Voices).ArrayMax = 0;
  this->BaseFilterFreq = fVar2;
  (this->FreeVoices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeVoices).ArrayNum = 0;
  (this->FreeVoices).ArrayMax = 0;
  this->VoiceGeneration = 0;
  this->FilterFreqMod = 0.0;
  this->BaseFilterQ = 1.5;
  this->FilterQMod = 0.0;
  this->FilterType = LowPass;
  this->FilterAlgorithm = OnePole;
  FDelayStereo::FDelayStereo(&this->StereoDelay);
  FChorus::FChorus(&this->Chorus);
  this->bIsUnison = false;
  this->bIsStereoEnabled = true;
  this->bIsChorusEnabled = true;
  return this;
}

// ~FEpicSynth1 @ 14f0be680

void __thiscall Audio::FEpicSynth1::~FEpicSynth1(FEpicSynth1 *this)

{
  FEpicSynth1Voice *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  this->_padding_ = (longlong)&___7FEpicSynth1_Audio__6B_;
  uVar7 = uVar6;
  if (0 < (this->Voices).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + uVar7);
      if (this_00 != (FEpicSynth1Voice *)0x0) {
        FEpicSynth1Voice::~FEpicSynth1Voice(this_00);
        ::operator_delete(this_00,0x16f0);
      }
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined8 *)((this->Voices).AllocatorInstance.Data + uVar7) = 0;
      uVar7 = uVar7 + 8;
    } while ((int)(uVar5 + 1) < (this->Voices).ArrayNum);
  }
  FChorus::~FChorus(&this->Chorus);
  FDelayStereo::~FDelayStereo(&this->StereoDelay);
  pFVar1 = (this->FreeVoices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Voices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FModulationMatrix::~FModulationMatrix(&this->ModMatrix);
  return;
}

// ClearPatches @ 14f0cbc90

void __thiscall Audio::FEpicSynth1::ClearPatches(FEpicSynth1 *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  FModulationMatrix::ResetPatchSourceState(&this->ModMatrix);
  uVar4 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FEpicSynth1Voice::Reset(*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar5))
      ;
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FEpicSynth1Voice::ClearPatches
                (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar5));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// CreatePatch @ 14f0d2b40

FPatchId __thiscall
Audio::FEpicSynth1::CreatePatch
          (FEpicSynth1 *this,ESynth1PatchSource param_1,
          TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined7 in_register_00000011;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  undefined7 in_register_00000089;
  bool in_stack_00000028;
  
  piVar5 = (int *)CONCAT71(in_register_00000011,param_1);
  uVar6 = 0;
  *piVar5 = PatchCount;
  PatchCount = PatchCount + 1;
  if (0 < (this->Voices).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return (FPatchId)iVar4;
      }
      bVar2 = FEpicSynth1Voice::CreatePatch
                        (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar7),
                         (FPatchId)*piVar5,(ESynth1PatchSource)param_2,
                         (TArray<FSynth1PatchCable,TSizedDefaultAllocator<32>_> *)
                         CONCAT71(in_register_00000089,param_3),in_stack_00000028);
      if ((!bVar2) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_947434347722439234>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\EpicSynth1.cpp"
                             ,0x5be,"bSuccess"), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return (FPatchId)iVar4;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Voices).ArrayNum);
  }
  return (FPatchId)(int)piVar5;
}

// GenerateFrame @ 14f0d76c0

void __thiscall Audio::FEpicSynth1::GenerateFrame(FEpicSynth1 *this,float *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  float local_res8 [2];
  uint local_18 [4];
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  local_18[0] = 0;
  if (0 < (this->Voices).ArrayNum) {
    do {
      uVar7 = local_18[0];
      uVar6 = 0;
      if ((int)local_18[0] < (this->Voices).ArrayNum) {
        uVar6 = ~local_18[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->Voices).ArrayNum;
      lVar9 = (longlong)(int)local_18[0];
      if (*(char *)(*(longlong *)((this->Voices).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)
                   + 0x16e8) == '\0') {
        local_res8[0] = 0.0;
        local_res8[1] = 0.0;
        uVar7 = 0;
        if ((int)local_18[0] < iVar8) {
          uVar7 = ~local_18[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FEpicSynth1Voice::Generate
                  (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar9 * 8),
                   local_res8);
        *param_1 = local_res8[0] + *param_1;
        param_1[1] = local_res8[1] + param_1[1];
      }
      else {
        uVar7 = 0;
        if ((int)local_18[0] < iVar8) {
          uVar7 = ~local_18[0] >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar9 * 8) + 0x16e9) !=
            '\0') {
          this->NumActiveVoices = this->NumActiveVoices + -1;
          lVar9 = (longlong)(int)local_18[0];
          uVar7 = 0;
          if ((int)local_18[0] < (this->Voices).ArrayNum) {
            uVar7 = ~local_18[0] >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FEpicSynth1Voice::Reset
                    (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar9 * 8));
          if (this->NumVoices != 1) {
            pTVar2 = &this->FreeVoices;
            pFVar3 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
                ((FScriptContainerElement *)local_18 <
                 pFVar3 + (longlong)(this->FreeVoices).ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = (this->FreeVoices).ArrayNum;
            piVar1 = &(this->FreeVoices).ArrayMax;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->FreeVoices).ArrayNum = iVar8 + 1;
            *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_18[0];
            if ((this->NumStoppingVoices + this->MaxNumVoices < (this->FreeVoices).ArrayNum) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FreeVoices.Num() <= MaxNumVoices + NumStoppingVoices",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\EpicSynth1.cpp"
                                   ,0x5ee,L"Invalid free voice size."), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->Voices).ArrayNum);
  }
  if (this->bIsChorusEnabled) {
    FChorus::ProcessAudioFrame(&this->Chorus,param_1,param_1);
  }
  if (this->bIsStereoEnabled) {
    FDelayStereo::ProcessAudioFrame(&this->StereoDelay,param_1,param_1);
  }
  return;
}

// GetOldestPlayingId @ 14f0da470

uint __thiscall Audio::FEpicSynth1::GetOldestPlayingId(FEpicSynth1 *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar5 = 0;
  uVar6 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < (this->Voices).ArrayNum) {
    lVar7 = 0;
    uVar6 = 0xffffffff;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar3 = *(uint *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar7) + 0x16dc);
      if (((uVar3 < uVar4) && (uVar4 = uVar3, uVar6 = uVar5, (uint)(this->Voices).ArrayNum <= uVar5)
          ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OldestId < (uint32)Voices.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\EpicSynth1.cpp"
                                   ,0x4c3,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return uVar6;
}

// Init @ 14f0df960

void __thiscall Audio::FEpicSynth1::Init(FEpicSynth1 *this,float param_1,int param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FEpicSynth1Voice *this_00;
  FEpicSynth1Voice *pFVar8;
  int local_38 [2];
  FEpicSynth1Voice *local_30 [3];
  
  this->NumVoices = 1;
  iVar5 = 1;
  if (1 < param_2) {
    iVar5 = param_2;
  }
  this->SampleRate = param_1;
  this->MaxNumVoices = iVar5;
  FModulationMatrix::Init(&this->ModMatrix,iVar5 + this->NumStoppingVoices);
  local_38[0] = 0;
  this->ControlSampleRate = this->SampleRate / (float)this->ControlSamplePeriod;
  if (0 < this->MaxNumVoices + this->NumStoppingVoices) {
    pTVar1 = &this->FreeVoices;
    do {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->FreeVoices).ArrayMax * 4)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->FreeVoices).ArrayNum;
      if (iVar5 == (this->FreeVoices).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,&(this->FreeVoices).ArrayMax);
      }
      (this->FreeVoices).ArrayNum = iVar5 + 1;
      *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_38[0];
      this_00 = ::operator_new(0x16f0);
      pFVar8 = (FEpicSynth1Voice *)0x0;
      if (this_00 != (FEpicSynth1Voice *)0x0) {
        pFVar8 = FEpicSynth1Voice::FEpicSynth1Voice(this_00);
      }
      pFVar2 = (this->Voices).AllocatorInstance.Data;
      local_30[0] = pFVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_30) &&
          ((FScriptContainerElement *)local_30 < pFVar2 + (longlong)(this->Voices).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = (this->Voices).ArrayNum;
      if (uVar6 == (this->Voices).ArrayMax) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Voices).AllocatorInstance,&(this->Voices).ArrayMax);
      }
      pFVar2 = (this->Voices).AllocatorInstance.Data;
      (this->Voices).ArrayNum = uVar6 + 1;
      *(FEpicSynth1Voice **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_30[0];
      uVar7 = 0;
      if ((int)uVar6 < (this->Voices).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FEpicSynth1Voice::Init
                (*(FEpicSynth1Voice **)
                  ((this->Voices).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),this,
                 local_38[0]);
      local_38[0] = local_38[0] + 1;
    } while (local_38[0] < this->MaxNumVoices + this->NumStoppingVoices);
  }
  FDelayStereo::Init(&this->StereoDelay,this->SampleRate,2,__real_40000000);
  FChorus::Init(&this->Chorus,param_1,2,__real_40000000,0x100);
  return;
}

// NoteOff @ 14f0e8370

void __thiscall
Audio::FEpicSynth1::NoteOff(FEpicSynth1 *this,uint param_1,bool param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar9 = 0;
    do {
      iVar1 = (this->Voices).ArrayNum;
      uVar7 = ~uVar8 >> 0x1f;
      if (param_3) {
        uVar6 = 0;
        if ((int)uVar8 < iVar1) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FEpicSynth1Voice::Kill
                  (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar9));
      }
      else if (param_2) {
        uVar6 = 0;
        if ((int)uVar8 < iVar1) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FEpicSynth1Voice::NoteOff
                  (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar9),param_1,
                   param_2);
      }
      else {
        uVar6 = 0;
        if ((int)uVar8 < iVar1) {
          uVar6 = uVar7;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar9);
        *(undefined4 *)(lVar2 + 0x16d4) = 0xffffffff;
        if ((*(char *)(lVar2 + 0x16e8) == '\0') && (*(uint *)(lVar2 + 0x16c8) == param_1)) {
          (**(code **)(*(longlong *)(lVar2 + 0x910) + 0x20))(lVar2 + 0x910);
          (**(code **)(*(longlong *)(lVar2 + 0x9c0) + 0x20))();
          cVar5 = (**(code **)(*(longlong *)(lVar2 + 0x910) + 0x38))(lVar2 + 0x910);
          if (cVar5 != '\0') {
            *(undefined1 *)(lVar2 + 0x16e8) = 1;
            FAmp::Reset((FAmp *)(lVar2 + 0x3f0));
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Voices).ArrayNum);
  }
  return;
}

// NoteOn @ 14f0e8970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FEpicSynth1::NoteOn(FEpicSynth1 *this,uint param_1,float param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FEpicSynth1Voice *this_00;
  uint uVar8;
  longlong lVar9;
  
  this_00 = (FEpicSynth1Voice *)0x0;
  if (this->NumVoices == 1) {
    this_00 = this->LastVoice;
    if (this_00 != (FEpicSynth1Voice *)0x0) goto LAB_14f0e8cad;
    uVar4 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeVoices,Default);
    uVar8 = 0;
    if ((int)uVar4 < (this->Voices).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = *(FEpicSynth1Voice **)
               ((this->Voices).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    this->LastVoice = this_00;
  }
  else {
    iVar5 = this->MaxNumVoices - this->NumActiveVoices;
    iVar1 = (this->FreeVoices).ArrayNum;
    if (iVar1 <= iVar5) {
      if ((byte)LogSynthesis._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      return;
    }
    uVar8 = 0;
    if (iVar5 < 1) {
      if (0 < iVar1) {
        uVar6 = GetOldestPlayingId(this);
        uVar4 = (this->Voices).ArrayNum;
        if (uVar6 < uVar4) {
          uVar7 = uVar8;
          if ((int)uVar6 < (int)uVar4) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar9 = *(longlong *)((this->Voices).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
          (**(code **)(*(longlong *)(lVar9 + 0x910) + 0x28))();
          (**(code **)(*(longlong *)(lVar9 + 0x9c0) + 0x28))();
          FAmp::Reset((FAmp *)(lVar9 + 0x3f0));
          *(undefined4 *)(lVar9 + 0x16dc) = 0xffffffff;
        }
        uVar4 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeVoices,Default);
        if ((int)uVar4 < (this->Voices).ArrayNum) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        goto joined_r0x00014f0e8b7d;
      }
      uVar6 = GetOldestPlayingId(this);
      uVar4 = (this->Voices).ArrayNum;
      lVar9 = (longlong)(int)uVar6;
      if (uVar6 < uVar4) {
        uVar7 = uVar8;
        if ((int)uVar6 < (int)uVar4) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FEpicSynth1Voice::Kill
                  (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar9 * 8));
        this->NumActiveVoices = this->NumActiveVoices + -1;
        if ((int)uVar6 < (this->Voices).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_14f0e8c42;
      }
    }
    else {
      uVar4 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeVoices,Default);
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
joined_r0x00014f0e8b7d:
      lVar9 = (longlong)(int)uVar4;
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_14f0e8c42:
      this_00 = *(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar9 * 8);
      if ((int)lVar9 != -1) goto LAB_14f0e8caa;
    }
    if (0 < (this->Voices).ArrayNum) {
      FEpicSynth1Voice::Kill(*(FEpicSynth1Voice **)(this->Voices).AllocatorInstance.Data);
      if (((this->Voices).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FEpicSynth1Voice **)(this->Voices).AllocatorInstance.Data;
    }
  }
LAB_14f0e8caa:
  this->NumActiveVoices = this->NumActiveVoices + 1;
LAB_14f0e8cad:
  FEpicSynth1Voice::NoteOn(this_00,param_1,param_2,param_3);
  this->LastMidiNote = param_1;
  return;
}

// SetChorusDepth @ 14f0f9230

void __thiscall Audio::FEpicSynth1::SetChorusDepth(FEpicSynth1 *this,Type param_1,float param_2)

{
  FChorus::SetDepth(&this->Chorus,param_1,param_2);
  return;
}

// SetChorusEnabled @ 14f0f92a0

void __thiscall Audio::FEpicSynth1::SetChorusEnabled(FEpicSynth1 *this,bool param_1)

{
  this->bIsChorusEnabled = false;
  this->field_0x6f0 = this->field_0x6f0 | param_1 << 2;
  return;
}

// SetChorusFeedback @ 14f0f9320

void __thiscall Audio::FEpicSynth1::SetChorusFeedback(FEpicSynth1 *this,Type param_1,float param_2)

{
  FChorus::SetFeedback(&this->Chorus,param_1,param_2);
  return;
}

// SetChorusFrequency @ 14f0f9390

void __thiscall Audio::FEpicSynth1::SetChorusFrequency(FEpicSynth1 *this,Type param_1,float param_2)

{
  FChorus::SetFrequency(&this->Chorus,param_1,param_2);
  return;
}

// SetEnablePatch @ 14f0fa560

bool __thiscall Audio::FEpicSynth1::SetEnablePatch(FEpicSynth1 *this,FPatchId param_1,bool param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  plVar12 = plVar11;
  if (0 < (this->Voices).ArrayNum) {
    do {
      uVar9 = (uint)plVar10;
      uVar5 = 0;
      if ((int)uVar9 < (this->Voices).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = *(longlong *)((longlong)plVar12 + (longlong)(this->Voices).AllocatorInstance.Data);
      if (*(int *)(lVar1 + 0x15f8) == *(int *)(lVar1 + 0x1624)) {
        return false;
      }
      lVar8 = lVar1 + 0x1628;
      if (*(longlong *)(lVar1 + 0x1630) != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x1630);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x1638) - 1U & param_1.Id) * 4);
      if (iVar6 == -1) {
        return false;
      }
      while (piVar7 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar1 + 0x15f0)),
            *piVar7 != param_1.Id) {
        iVar6 = piVar7[6];
        if (iVar6 == -1) {
          return false;
        }
      }
      plVar10 = (longlong *)(piVar7 + 2);
      if (piVar7 == (int *)0x0) {
        plVar10 = plVar11;
      }
      if (plVar10 == (longlong *)0x0) {
        return false;
      }
      if ((*plVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *(bool *)(*plVar10 + 0x38) = param_2;
      plVar10 = (longlong *)(ulonglong)(uVar9 + 1);
      plVar12 = plVar12 + 1;
    } while ((int)(uVar9 + 1) < (this->Voices).ArrayNum);
  }
  return true;
}

// SetEnvAttackTime @ 14f0faa40

void __thiscall Audio::FEpicSynth1::SetEnvAttackTime(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x910);
      (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetEnvDecayTime @ 14f0fab00

void __thiscall Audio::FEpicSynth1::SetEnvDecayTime(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x910);
      (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetEnvLegatoEnabled @ 14f0fabc0

void __thiscall Audio::FEpicSynth1::SetEnvLegatoEnabled(FEpicSynth1 *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar6);
      *(byte *)(lVar1 + 0x9b8) = *(byte *)(lVar1 + 0x9b8) & 0xfd | param_1 * '\x02';
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar6);
      lVar6 = lVar6 + 8;
      *(byte *)(lVar1 + 0xa68) = *(byte *)(lVar1 + 0xa68) & 0xfd | param_1 * '\x02';
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetEnvReleaseTime @ 14f0fadc0

void __thiscall Audio::FEpicSynth1::SetEnvReleaseTime(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x910);
      (**(code **)(*plVar4 + 0x78))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetEnvRetriggerMode @ 14f0fae80

void __thiscall Audio::FEpicSynth1::SetEnvRetriggerMode(FEpicSynth1 *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar6);
      *(byte *)(lVar1 + 0x9b8) = *(byte *)(lVar1 + 0x9b8) & 0xfb | param_1 << 2;
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar6);
      lVar6 = lVar6 + 8;
      *(byte *)(lVar1 + 0xa68) = *(byte *)(lVar1 + 0xa68) & 0xfb | param_1 << 2;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetEnvSustainGain @ 14f0fafc0

void __thiscall Audio::FEpicSynth1::SetEnvSustainGain(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x910);
      (**(code **)(*plVar4 + 0x70))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetFilterAlgorithm @ 14f0fb2d0

void __thiscall
Audio::FEpicSynth1::SetFilterAlgorithm(FEpicSynth1 *this,ESynthFilterAlgorithm param_1)

{
  this->FilterAlgorithm = param_1;
  SwitchFilter(this);
  return;
}

// SetFilterFrequency @ 14f0fb920

void __thiscall Audio::FEpicSynth1::SetFilterFrequency(FEpicSynth1 *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->BaseFilterFreq = param_1;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x908);
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetFilterFrequencyMod @ 14f0fba40

void __thiscall Audio::FEpicSynth1::SetFilterFrequencyMod(FEpicSynth1 *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->FilterFreqMod = param_1;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x908);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetFilterQ @ 14f0fbb60

void __thiscall Audio::FEpicSynth1::SetFilterQ(FEpicSynth1 *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->BaseFilterQ = param_1;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x908);
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetFilterQMod @ 14f0fbd00

void __thiscall Audio::FEpicSynth1::SetFilterQMod(FEpicSynth1 *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->FilterQMod = param_1;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x908);
      (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetFilterType @ 14f0fbea0

void __thiscall Audio::FEpicSynth1::SetFilterType(FEpicSynth1 *this,Type param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->FilterType = param_1;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x908);
      (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetGainDb @ 14f0fc390

void __thiscall Audio::FEpicSynth1::SetGainDb(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAmp::SetGainDb((FAmp *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0x3f0)
                      ,param_1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOFrequency @ 14f0fcff0

void __thiscall Audio::FEpicSynth1::SetLFOFrequency(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetFrequency
                ((IOscBase *)
                 (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0xa70 +
                 (longlong)param_1 * 0x170),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOFrequencyMod @ 14f0fd130

void __thiscall Audio::FEpicSynth1::SetLFOFrequencyMod(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetFrequencyMod
                ((IOscBase *)
                 (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0xa70 +
                 (longlong)param_1 * 0x170),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOGain @ 14f0fd270

void __thiscall Audio::FEpicSynth1::SetLFOGain(FEpicSynth1 *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 < 2) && (uVar5 = 0, 0 < (this->Voices).ArrayNum)) {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 8;
      *(float *)(*(longlong *)pFVar1 + 0xaac + (longlong)param_1 * 0x170) = param_2;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOGainMod @ 14f0fd3b0

void __thiscall Audio::FEpicSynth1::SetLFOGainMod(FEpicSynth1 *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 < 2) && (uVar5 = 0, 0 < (this->Voices).ArrayNum)) {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 8;
      *(float *)(*(longlong *)pFVar1 + 0xab0 + (longlong)param_1 * 0x170) = param_2;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOMode @ 14f0fd4f0

void __thiscall Audio::FEpicSynth1::SetLFOMode(FEpicSynth1 *this,int param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FLFO::SetMode((FLFO *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0xa70 +
                            (longlong)param_1 * 0x170),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOPatch @ 14f0fd640

void __thiscall
Audio::FEpicSynth1::SetLFOPatch(FEpicSynth1 *this,int param_1,ESynthLFOPatchType param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((byte)(param_2 - PatchLFO1ToLFO2Frequency) < 2) {
    if (param_1 != 0) {
      return;
    }
  }
  else if (1 < param_1) {
    return;
  }
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar7 = (longlong)param_1;
    lVar6 = lVar7 * 0x240;
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar8);
      *(undefined1 *)(lVar1 + 0xda8 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xde8 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xe28 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xe68 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xea8 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xee8 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xf28 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xf68 + lVar6) = 0;
      *(undefined1 *)(lVar1 + 0xfa8 + lVar6) = 0;
      if (param_2 != PatchToNone) {
        *(undefined1 *)((lVar7 * 9 + (ulonglong)param_2) * 0x40 + 0xda8 + lVar1) = 1;
      }
      uVar5 = uVar5 + 1;
      *(ESynthLFOPatchType *)(lVar7 + 0x1640 + lVar1) = param_2;
      lVar8 = lVar8 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOPulseWidth @ 14f0fd880

void __thiscall Audio::FEpicSynth1::SetLFOPulseWidth(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetPulseWidth
                ((IOscBase *)
                 (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0xa70 +
                 (longlong)param_1 * 0x170),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetLFOType @ 14f0fd970

void __thiscall Audio::FEpicSynth1::SetLFOType(FEpicSynth1 *this,int param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FLFO::SetType((FLFO *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0xa70 +
                            (longlong)param_1 * 0x170),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvAttackTime @ 14f0fdda0

void __thiscall Audio::FEpicSynth1::SetModEnvAttackTime(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvBiasInvert @ 14f0fdeb0

void __thiscall Audio::FEpicSynth1::SetModEnvBiasInvert(FEpicSynth1 *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x88))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvBiasPatch @ 14f0fdfe0

void __thiscall
Audio::FEpicSynth1::SetModEnvBiasPatch(FEpicSynth1 *this,ESynthModEnvBiasPatch param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar6);
      *(undefined1 *)(lVar1 + 0x1428) = 0;
      *(undefined1 *)(lVar1 + 0x1468) = 0;
      *(undefined1 *)(lVar1 + 0x14a8) = 0;
      *(undefined1 *)(lVar1 + 0x14e8) = 0;
      *(undefined1 *)(lVar1 + 0x1528) = 0;
      *(undefined1 *)(lVar1 + 0x1568) = 0;
      *(undefined1 *)(lVar1 + 0x15a8) = 0;
      *(undefined1 *)(lVar1 + 0x15e8) = 0;
      if (param_1 != PatchToNone) {
        *(undefined1 *)((ulonglong)param_1 * 0x40 + 0x1428 + lVar1) = 1;
      }
      uVar5 = uVar5 + 1;
      *(ESynthModEnvBiasPatch *)(lVar1 + 0x1643) = param_1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvDecayTime @ 14f0fe150

void __thiscall Audio::FEpicSynth1::SetModEnvDecayTime(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvDepth @ 14f0fe260

void __thiscall Audio::FEpicSynth1::SetModEnvDepth(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x90))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvInvert @ 14f0fe370

void __thiscall Audio::FEpicSynth1::SetModEnvInvert(FEpicSynth1 *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x80))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvPatch @ 14f0fe4a0

void __thiscall Audio::FEpicSynth1::SetModEnvPatch(FEpicSynth1 *this,ESynthModEnvPatch param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->Voices).AllocatorInstance.Data + lVar6);
      *(undefined1 *)(lVar1 + 0x1228) = 0;
      *(undefined1 *)(lVar1 + 0x1268) = 0;
      *(undefined1 *)(lVar1 + 0x12a8) = 0;
      *(undefined1 *)(lVar1 + 0x12e8) = 0;
      *(undefined1 *)(lVar1 + 0x1328) = 0;
      *(undefined1 *)(lVar1 + 0x1368) = 0;
      *(undefined1 *)(lVar1 + 0x13a8) = 0;
      *(undefined1 *)(lVar1 + 0x13e8) = 0;
      if (param_1 != PatchToNone) {
        *(undefined1 *)((ulonglong)param_1 * 0x40 + 0x1228 + lVar1) = 1;
      }
      uVar5 = uVar5 + 1;
      *(ESynthModEnvPatch *)(lVar1 + 0x1642) = param_1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvReleaseTime @ 14f0fe610

void __thiscall Audio::FEpicSynth1::SetModEnvReleaseTime(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x78))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetModEnvSustainGain @ 14f0fe720

void __thiscall Audio::FEpicSynth1::SetModEnvSustainGain(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar4 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar6) + 0x9c0);
      (**(code **)(*plVar4 + 0x70))(plVar4,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetMonoMode @ 14f0fe940

void __thiscall Audio::FEpicSynth1::SetMonoMode(FEpicSynth1 *this,bool param_1)

{
  if (param_1) {
    this->NumVoices = 1;
    StopAllVoicesExceptNewest(this);
    return;
  }
  this->NumVoices = this->MaxNumVoices;
  return;
}

// SetOscCents @ 14f0fed80

void __thiscall Audio::FEpicSynth1::SetOscCents(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetCents((IOscBase *)
                         (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) +
                         (longlong)param_1 * 0x140),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscDetune @ 14f0feeb0

void __thiscall Audio::FEpicSynth1::SetOscDetune(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetDetune((IOscBase *)
                          (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) +
                          (longlong)param_1 * 0x140),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscGain @ 14f0fefe0

void __thiscall Audio::FEpicSynth1::SetOscGain(FEpicSynth1 *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 < 2) && (uVar5 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 8;
      *(float *)(*(longlong *)pFVar1 + 0x3c + (longlong)param_1 * 0x140) = param_2;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscGainMod @ 14f0ff110

void __thiscall Audio::FEpicSynth1::SetOscGainMod(FEpicSynth1 *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 < 2) && (uVar5 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 8;
      *(float *)(*(longlong *)pFVar1 + 0x40 + (longlong)param_1 * 0x140) = param_2;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscOctave @ 14f0ff240

void __thiscall Audio::FEpicSynth1::SetOscOctave(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetOctave((IOscBase *)
                          (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) +
                          (longlong)param_1 * 0x140),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscPitchBend @ 14f0ff370

void __thiscall Audio::FEpicSynth1::SetOscPitchBend(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetPitchBend
                ((IOscBase *)
                 (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) +
                 (longlong)param_1 * 0x140),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscPortamento @ 14f0ff450

void __thiscall Audio::FEpicSynth1::SetOscPortamento(FEpicSynth1 *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->Portamento = param_1;
  return;
}

// SetOscPulseWidth @ 14f0ff470

void __thiscall Audio::FEpicSynth1::SetOscPulseWidth(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    if (__real_3f800000 <= param_2) {
      param_2 = __real_3f800000;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetPulseWidth
                ((IOscBase *)
                 (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) +
                 (longlong)param_1 * 0x140),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscSemitones @ 14f0ff5b0

void __thiscall Audio::FEpicSynth1::SetOscSemitones(FEpicSynth1 *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((param_1 < 2) && (uVar4 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      IOscBase::SetSemitones
                ((IOscBase *)
                 (*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) +
                 (longlong)param_1 * 0x140),param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscSpread @ 14f0ff6e0

void __thiscall Audio::FEpicSynth1::SetOscSpread(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  
  uVar4 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar5 = 0;
    fVar6 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAmp::SetPan((FAmp *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0x280),
                   fVar6);
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAmp::SetPan((FAmp *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0x338),
                   param_1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscSync @ 14f0ff820

void __thiscall Audio::FEpicSynth1::SetOscSync(FEpicSynth1 *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 8;
      *(bool *)(*(longlong *)pFVar1 + 0x24a) = param_1;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscType @ 14f0ff940

void __thiscall Audio::FEpicSynth1::SetOscType(FEpicSynth1 *this,int param_1,Type param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((param_1 < 2) && (uVar5 = 0, 0 < (this->Voices).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Voices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar6;
      lVar6 = lVar6 + 8;
      *(Type *)(*(longlong *)pFVar1 + 0x130 + (longlong)param_1 * 0x140) = param_2;
    } while ((int)uVar5 < (this->Voices).ArrayNum);
  }
  return;
}

// SetOscUnison @ 14f0ffa80

void __thiscall Audio::FEpicSynth1::SetOscUnison(FEpicSynth1 *this,bool param_1)

{
  this->bIsUnison = false;
  this->field_0x6f0 = this->field_0x6f0 | param_1;
  return;
}

// SetPan @ 14f0ffba0

void __thiscall Audio::FEpicSynth1::SetPan(FEpicSynth1 *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Voices).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAmp::SetPan((FAmp *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar5) + 0x3f0),
                   param_1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Voices).ArrayNum);
  }
  return;
}

// SetStereoDelayFeedback @ 14f102450

void __thiscall Audio::FEpicSynth1::SetStereoDelayFeedback(FEpicSynth1 *this,float param_1)

{
  FDelayStereo::SetFeedback(&this->StereoDelay,param_1);
  return;
}

// SetStereoDelayIsEnabled @ 14f1024c0

void __thiscall Audio::FEpicSynth1::SetStereoDelayIsEnabled(FEpicSynth1 *this,bool param_1)

{
  this->bIsStereoEnabled = false;
  this->field_0x6f0 = this->field_0x6f0 | param_1 * '\x02';
  return;
}

// SetStereoDelayMode @ 14f102540

void __thiscall Audio::FEpicSynth1::SetStereoDelayMode(FEpicSynth1 *this,Type param_1)

{
  FDelayStereo::SetMode(&this->StereoDelay,param_1);
  return;
}

// SetStereoDelayRatio @ 14f1025c0

void __thiscall Audio::FEpicSynth1::SetStereoDelayRatio(FEpicSynth1 *this,float param_1)

{
  FDelayStereo::SetDelayRatio(&this->StereoDelay,param_1);
  return;
}

// SetStereoDelayTimeMsec @ 14f102680

void __thiscall Audio::FEpicSynth1::SetStereoDelayTimeMsec(FEpicSynth1 *this,float param_1)

{
  FDelayStereo::SetDelayTimeMsec(&this->StereoDelay,param_1);
  return;
}

// SetStereoDelayWetLevel @ 14f1026a0

void __thiscall Audio::FEpicSynth1::SetStereoDelayWetLevel(FEpicSynth1 *this,float param_1)

{
  FDelayStereo::SetWetLevel(&this->StereoDelay,param_1);
  return;
}

// StopAllVoicesExceptNewest @ 14f103dc0

void __thiscall Audio::FEpicSynth1::StopAllVoicesExceptNewest(FEpicSynth1 *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint local_18 [4];
  
  uVar3 = this->VoiceGeneration;
  local_18[0] = 0;
  if (0 < (this->Voices).ArrayNum) {
    do {
      uVar8 = local_18[0];
      uVar7 = 0;
      if ((int)local_18[0] < (this->Voices).ArrayNum) {
        uVar7 = ~local_18[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(char *)(*(longlong *)((this->Voices).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
                   + 0x16e9) != '\0') {
        lVar10 = (longlong)(int)local_18[0];
        uVar8 = 0;
        if ((int)local_18[0] < (this->Voices).ArrayNum) {
          uVar8 = ~local_18[0] >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar10 * 8) + 0x16dc) !=
            uVar3 - 1) {
          lVar10 = (longlong)(int)local_18[0];
          uVar8 = 0;
          if ((int)local_18[0] < (this->Voices).ArrayNum) {
            uVar8 = ~local_18[0] >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FEpicSynth1Voice::Kill
                    (*(FEpicSynth1Voice **)((this->Voices).AllocatorInstance.Data + lVar10 * 8));
          pTVar2 = &this->FreeVoices;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_18) &&
              ((FScriptContainerElement *)local_18 <
               pFVar4 + (longlong)(this->FreeVoices).ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (this->FreeVoices).ArrayNum;
          piVar1 = &(this->FreeVoices).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->FreeVoices).ArrayNum = iVar9 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_18[0];
        }
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->Voices).ArrayNum);
  }
  return;
}

// SwitchFilter @ 14f104010

void __thiscall Audio::FEpicSynth1::SwitchFilter(FEpicSynth1 *this)

{
  FScriptContainerElement *pFVar1;
  ESynthFilterAlgorithm EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Voices).ArrayNum) {
    lVar8 = 0;
    do {
      EVar2 = this->FilterAlgorithm;
      plVar6 = (longlong *)0x0;
      if (EVar2 == OnePole) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Voices).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar6 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar8) + 0x4a8);
      }
      else if (EVar2 == StateVariable) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Voices).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar6 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar8) + 0x540);
      }
      else if (EVar2 == Ladder) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Voices).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar6 = (longlong *)(*(longlong *)((this->Voices).AllocatorInstance.Data + lVar8) + 0x5e8);
      }
      (**(code **)(*plVar6 + 0x48))(plVar6,this->FilterType);
      (**(code **)(*plVar6 + 0x10))(plVar6,this->BaseFilterFreq);
      (**(code **)(*plVar6 + 0x18))(plVar6,this->FilterFreqMod);
      (**(code **)(*plVar6 + 0x20))(plVar6,this->BaseFilterQ);
      (**(code **)(*plVar6 + 0x28))(plVar6,this->FilterQMod);
      uVar5 = 0;
      if ((int)uVar7 < (this->Voices).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = uVar7 + 1;
      pFVar1 = (this->Voices).AllocatorInstance.Data + lVar8;
      lVar8 = lVar8 + 8;
      *(longlong **)(*(longlong *)pFVar1 + 0x908) = plVar6;
    } while ((int)uVar7 < (this->Voices).ArrayNum);
  }
  return;
}

