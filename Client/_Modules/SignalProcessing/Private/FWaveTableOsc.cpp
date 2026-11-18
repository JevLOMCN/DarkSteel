// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 12

// FWaveTableOsc @ 144521260

FWaveTableOsc * __thiscall Audio::FWaveTableOsc::FWaveTableOsc(FWaveTableOsc *this)

{
  this->SampleRate = 44100.0;
  this->NormalPhaseReadIndex = 0.0;
  this->_padding_ = (longlong)&___7FWaveTableOsc_Audio__6B_;
  (this->WaveTableBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveTableBuffer).ArrayNum = 0;
  (this->WaveTableBuffer).ArrayMax = 0;
  this->QuadPhaseReadIndex = 0.0;
  this->PhaseIncrement = 0.0;
  this->WaveTableType = None;
  this->OutputScale = 1.0;
  this->OutputAdd = 0.0;
  this->FrequencyHz = 440.0;
  return this;
}

// ~FWaveTableOsc @ 1445212b0

void __thiscall Audio::FWaveTableOsc::~FWaveTableOsc(FWaveTableOsc *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FWaveTableOsc_Audio__6B_;
  pFVar1 = (this->WaveTableBuffer).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CreateWaveTable @ 144521540

TSharedPtr<Audio::FWaveTableOsc,1> * __cdecl
Audio::FWaveTableOsc::CreateWaveTable
          (TSharedPtr<Audio::FWaveTableOsc,1> *__return_storage_ptr__,Type param_1,int param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  TSharedPtr<Audio::FWaveTableOsc,1> *pTVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  FWaveTableOsc *local_f8;
  TReferenceControllerBase<1> *local_f0;
  
  if ((param_1 == None) || (param_2 < 1)) {
    __return_storage_ptr__->Object = (FWaveTableOsc *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  local_f8 = ::operator_new(0x38);
  uVar17 = 0;
  if (local_f8 == (FWaveTableOsc *)0x0) {
    local_f8 = (FWaveTableOsc *)0x0;
  }
  else {
    (local_f8->WaveTableBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8->_padding_ = (longlong)&___7FWaveTableOsc_Audio__6B_;
    (local_f8->WaveTableBuffer).ArrayNum = 0;
    (local_f8->WaveTableBuffer).ArrayMax = 0;
    local_f8->SampleRate = 44100.0;
    local_f8->NormalPhaseReadIndex = 0.0;
    local_f8->QuadPhaseReadIndex = 0.0;
    local_f8->PhaseIncrement = 0.0;
    local_f8->OutputScale = 1.0;
    local_f8->OutputAdd = 0.0;
    local_f8->WaveTableType = None;
    local_f8->FrequencyHz = 440.0;
  }
  local_f0 = ::operator_new(0x18);
  if (local_f0 == (TReferenceControllerBase<1> *)0x0) {
    local_f0 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_f0->SharedReferenceCount = (atomic<int>)0x1;
    local_f0->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWaveTableOsc_Audio__U__DefaultDeleter_VFWaveTableOsc_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_f0->WeakReferenceCount = (atomic<int>)0x1;
    local_f0[1]._padding_ = (longlong)local_f8;
  }
  if ((local_f8 == (FWaveTableOsc *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
    return pTVar13;
  }
  pTVar1 = &local_f8->WaveTableBuffer;
  piVar2 = &(local_f8->WaveTableBuffer).ArrayNum;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,param_2,&pTVar1->AllocatorInstance,piVar2,
                      &(local_f8->WaveTableBuffer).ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4,0,(longlong)param_2 << 2);
  if ((local_f8 == (FWaveTableOsc *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
    return pTVar13;
  }
  fVar23 = __real_3e800000;
  local_f8->WaveTableType = param_1;
  iVar12 = (local_f8->WaveTableBuffer).ArrayNum;
  local_f8->NormalPhaseReadIndex = 0.0;
  local_f8->QuadPhaseReadIndex = (float)iVar12 * fVar23;
  fVar10 = __real_4216cbe4;
  fVar9 = __real_41c90fdb;
  fVar8 = __real_4196cbe4;
  fVar25 = __real_41fb53d2;
  fVar7 = __real_41490fdb;
  fVar27 = __real_3eaaaaab;
  fVar28 = __real_3e4ccccd;
  fVar6 = __real_40c90fdb;
  fVar24 = __real_bf800000;
  fVar31 = __real_3f000000;
  fVar29 = __real_bf000000;
  fVar30 = __real_3f800000;
  uVar18 = 0;
  uVar14 = 0;
  uVar22 = 0;
  switch(param_1) {
  case SineWaveTable:
    fVar30 = __real_3f800000 / (float)param_2;
    uVar19 = uVar17;
    do {
      uVar14 = (uint)uVar19;
      fVar29 = sinf((float)(int)uVar14 * fVar6 * fVar30);
      uVar22 = 0;
      if ((int)uVar14 < *piVar2) {
        uVar22 = ~uVar14 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      uVar19 = (ulonglong)(uVar14 + 1);
      *(float *)((pTVar1->AllocatorInstance).Data + uVar17) = fVar29;
      uVar17 = uVar17 + 4;
    } while ((int)(uVar14 + 1) < param_2);
    break;
  case SawWaveTable:
    uVar14 = (uint)param_2 >> 1;
    fVar29 = __real_3f800000 / (float)uVar14;
    uVar19 = uVar17;
    do {
      uVar18 = (uint)uVar19;
      if ((longlong)uVar17 < (longlong)(ulonglong)uVar14) {
        uVar16 = uVar22;
        if ((int)uVar18 < *piVar2) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        fVar31 = (float)(int)uVar18 * fVar29;
      }
      else {
        uVar16 = uVar22;
        if ((int)uVar18 < *piVar2) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        fVar31 = (float)(int)(~uVar14 + uVar18) * fVar29 - fVar30;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      *(float *)((pTVar1->AllocatorInstance).Data + uVar17 * 4) = fVar31;
      uVar17 = uVar17 + 1;
    } while ((int)(uVar18 + 1) < param_2);
    break;
  case TriangleWaveTable:
    uVar22 = (uint)param_2 >> 2;
    iVar12 = (int)(param_2 * 3 + (param_2 * 3 >> 0x1f & 3U)) >> 2;
    fVar29 = __real_3f800000 / (float)uVar22;
    fVar31 = __real_c0000000 / (float)((uint)param_2 >> 1);
    uVar19 = uVar17;
    do {
      iVar3 = *piVar2;
      uVar16 = (uint)uVar19;
      uVar14 = ~uVar16 >> 0x1f;
      if ((longlong)uVar17 < (longlong)(ulonglong)uVar22) {
        uVar15 = uVar18;
        if ((int)uVar16 < iVar3) {
          uVar15 = uVar14;
        }
        uVar14 = uVar16;
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
LAB_144521a2d:
        fVar24 = (float)(int)uVar14 * fVar29 - fVar30;
      }
      else {
        if ((longlong)iVar12 <= (longlong)uVar17) {
          uVar15 = uVar18;
          if ((int)uVar16 < iVar3) {
            uVar15 = uVar14;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
            return pTVar13;
          }
          uVar14 = uVar16 - iVar12;
          goto LAB_144521a2d;
        }
        uVar15 = uVar18;
        if ((int)uVar16 < iVar3) {
          uVar15 = uVar14;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        fVar24 = (float)(int)(uVar16 - uVar22) * fVar31 + fVar30;
      }
      uVar19 = (ulonglong)(uVar16 + 1);
      *(float *)((pTVar1->AllocatorInstance).Data + uVar17 * 4) = fVar24;
      uVar17 = uVar17 + 1;
    } while ((int)(uVar16 + 1) < param_2);
    break;
  case SquareWaveTable:
    uVar19 = uVar17;
    do {
      uVar22 = (uint)uVar17;
      if ((longlong)uVar19 < (longlong)(ulonglong)((uint)param_2 >> 1)) {
        uVar14 = uVar18;
        if ((int)uVar22 < *piVar2) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar19 * 4) = 0x3f800000;
      }
      else {
        uVar14 = uVar18;
        if ((int)uVar22 < *piVar2) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar19 * 4) = 0xbf800000;
      }
      uVar17 = (ulonglong)(uVar22 + 1);
      uVar19 = uVar19 + 1;
    } while ((int)(uVar22 + 1) < param_2);
    break;
  case BandLimitedSawWaveTable:
    fVar31 = 0.0;
    fVar24 = __real_3f800000 / (float)param_2;
    uVar19 = uVar17;
    uVar21 = uVar17;
    do {
      uVar15 = (uint)uVar19;
      uVar20 = ~uVar15 >> 0x1f;
      uVar16 = uVar18;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      fVar26 = (float)(int)uVar15;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar21) = 0;
      fVar23 = sinf(fVar26 * fVar6 * fVar24);
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar23 + *(float *)(pFVar4 + uVar21);
      fVar23 = sinf(fVar26 * fVar7 * fVar24);
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar23 * fVar29 + *(float *)(pFVar4 + uVar21);
      fVar23 = sinf(fVar26 * fVar8 * fVar24);
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar23 * fVar27 + *(float *)(pFVar4 + uVar21);
      fVar23 = sinf(fVar26 * fVar9 * fVar24);
      fVar23 = fVar23 * __real_be800000;
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar23 + *(float *)(pFVar4 + uVar21);
      fVar23 = sinf(fVar26 * fVar25 * fVar24);
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar23 * fVar28 + *(float *)(pFVar4 + uVar21);
      fVar23 = sinf(fVar26 * fVar10 * fVar24);
      fVar23 = fVar23 * __real_be2aaaab;
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar23 + *(float *)(pFVar4 + uVar21);
      uVar16 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar16 = uVar20;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      if (fVar31 < *(float *)((pTVar1->AllocatorInstance).Data + uVar21)) {
        uVar16 = uVar22;
        if ((int)uVar15 < *piVar2) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        fVar31 = *(float *)((pTVar1->AllocatorInstance).Data + uVar21);
      }
      uVar19 = (ulonglong)(uVar15 + 1);
      uVar21 = uVar21 + 4;
    } while ((int)(uVar15 + 1) < param_2);
    uVar19 = uVar17;
    do {
      uVar18 = (uint)uVar19;
      uVar22 = uVar14;
      if ((int)uVar18 < *piVar2) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      uVar19 = (ulonglong)(uVar18 + 1);
      *(float *)(pFVar4 + uVar17) = (fVar30 / fVar31) * *(float *)(pFVar4 + uVar17);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar18 + 1) < param_2);
    break;
  case BandLimitedTriangleWaveTable:
    fVar29 = 0.0;
    fVar31 = __real_3f800000 / (float)param_2;
    uVar19 = uVar17;
    uVar21 = uVar17;
    do {
      uVar16 = (uint)uVar19;
      uVar18 = uVar14;
      if ((int)uVar16 < *piVar2) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      iVar12 = 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar21) = 0;
      do {
        fVar28 = (float)iVar12;
        fVar27 = fVar28 + fVar28 + fVar30;
        fVar23 = sinf((fVar28 * fVar7 + fVar6) * (float)(int)uVar16 * fVar31);
        fVar28 = powf(fVar24,fVar28);
        uVar18 = uVar22;
        if ((int)uVar16 < *piVar2) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        iVar12 = iVar12 + 1;
        *(float *)(pFVar4 + uVar21) =
             (fVar23 / (fVar27 * fVar27)) * fVar28 + *(float *)(pFVar4 + uVar21);
      } while (iVar12 < 7);
      uVar18 = uVar22;
      if ((int)uVar16 < *piVar2) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      if (fVar29 < *(float *)((pTVar1->AllocatorInstance).Data + uVar21)) {
        uVar18 = uVar14;
        if ((int)uVar16 < *piVar2) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        fVar29 = *(float *)((pTVar1->AllocatorInstance).Data + uVar21);
      }
      uVar19 = (ulonglong)(uVar16 + 1);
      uVar21 = uVar21 + 4;
    } while ((int)(uVar16 + 1) < param_2);
    uVar19 = uVar17;
    do {
      uVar18 = (uint)uVar19;
      uVar22 = uVar14;
      if ((int)uVar18 < (local_f8->WaveTableBuffer).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (local_f8->WaveTableBuffer).AllocatorInstance.Data;
      uVar19 = (ulonglong)(uVar18 + 1);
      *(float *)(pFVar4 + uVar17) = (fVar30 / fVar29) * *(float *)(pFVar4 + uVar17);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar18 + 1) < param_2);
    break;
  case BandLimitedSquareWaveTable:
    fVar30 = 0.0;
    fVar29 = __real_3f800000 / (float)param_2;
    uVar19 = uVar17;
    uVar21 = uVar17;
    do {
      uVar15 = (uint)uVar19;
      uVar16 = ~uVar15 >> 0x1f;
      uVar18 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      fVar28 = (float)(int)uVar15;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + uVar21) = 0;
      fVar24 = sinf(fVar28 * fVar6 * fVar29);
      uVar18 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar24 + *(float *)(pFVar4 + uVar21);
      fVar24 = sinf(fVar28 * fVar7 * fVar29);
      uVar18 = uVar14;
      if ((int)uVar15 < *piVar2) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar24 * fVar31 + *(float *)(pFVar4 + uVar21);
      fVar24 = sinf(fVar28 * fVar8 * fVar29);
      uVar18 = uVar14;
      if ((int)uVar15 < *piVar2) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      fVar25 = fVar28 * __real_41c90fdb;
      *(float *)(pFVar4 + uVar21) = fVar24 * fVar27 + *(float *)(pFVar4 + uVar21);
      fVar24 = sinf(fVar25 * fVar29);
      uVar18 = uVar14;
      if ((int)uVar15 < *piVar2) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      fVar25 = fVar28 * __real_41fb53d2;
      *(float *)(pFVar4 + uVar21) = fVar24 * fVar23 + *(float *)(pFVar4 + uVar21);
      fVar24 = sinf(fVar25 * fVar29);
      fVar24 = fVar24 * __real_3e4ccccd;
      uVar18 = uVar14;
      if ((int)uVar15 < *piVar2) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      fVar28 = fVar28 * __real_4216cbe4;
      *(float *)(pFVar4 + uVar21) = fVar24 + *(float *)(pFVar4 + uVar21);
      fVar24 = sinf(fVar28 * fVar29);
      fVar24 = fVar24 * __real_3e2aaaab;
      uVar18 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      *(float *)(pFVar4 + uVar21) = fVar24 + *(float *)(pFVar4 + uVar21);
      uVar18 = uVar22;
      if ((int)uVar15 < *piVar2) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      if (fVar30 < *(float *)((pTVar1->AllocatorInstance).Data + uVar21)) {
        uVar18 = uVar14;
        if ((int)uVar15 < *piVar2) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
          return pTVar13;
        }
        fVar30 = *(float *)((pTVar1->AllocatorInstance).Data + uVar21);
      }
      uVar19 = (ulonglong)(uVar15 + 1);
      uVar21 = uVar21 + 4;
    } while ((int)(uVar15 + 1) < param_2);
    fVar30 = __real_3f800000 / fVar30;
    uVar19 = uVar17;
    do {
      uVar18 = (uint)uVar19;
      uVar22 = uVar14;
      if ((int)uVar18 < (local_f8->WaveTableBuffer).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedPtr<Audio::FWaveTableOsc,1> *)(*pcVar5)();
        return pTVar13;
      }
      pFVar4 = (local_f8->WaveTableBuffer).AllocatorInstance.Data;
      uVar19 = (ulonglong)(uVar18 + 1);
      *(float *)(pFVar4 + uVar17) = fVar30 * *(float *)(pFVar4 + uVar17);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar18 + 1) < param_2);
  }
  __return_storage_ptr__->Object = local_f8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_f0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Generate @ 1445230e0

void __thiscall Audio::FWaveTableOsc::Generate(FWaveTableOsc *this,float *param_1,float *param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  piVar1 = &(this->WaveTableBuffer).ArrayNum;
  uVar11 = (uint)this->NormalPhaseReadIndex;
  fVar14 = this->NormalPhaseReadIndex - (float)(int)uVar11;
  if (param_1 != (float *)0x0) {
    iVar3 = *piVar1;
    uVar8 = (int)(uVar11 + 1) % iVar3;
    uVar9 = 0;
    if ((int)uVar8 < iVar3) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (this->WaveTableBuffer).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar11 < (this->WaveTableBuffer).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (this->WaveTableBuffer).AllocatorInstance.Data;
    *param_1 = ((*(float *)(pFVar4 + (longlong)(int)uVar8 * 4) -
                *(float *)(pFVar5 + (longlong)(int)uVar11 * 4)) * fVar14 +
               *(float *)(pFVar5 + (longlong)(int)uVar11 * 4)) * this->OutputScale + this->OutputAdd
    ;
  }
  pfVar10 = &this->NormalPhaseReadIndex;
  pfVar2 = &this->QuadPhaseReadIndex;
  if (param_2 != (float *)0x0) {
    iVar3 = *piVar1;
    uVar8 = (uint)*pfVar2;
    uVar9 = (int)(uVar8 + 1) % iVar3;
    uVar11 = 0;
    if ((int)uVar9 < iVar3) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (this->WaveTableBuffer).AllocatorInstance.Data;
    uVar11 = 0;
    if ((int)uVar8 < (this->WaveTableBuffer).ArrayNum) {
      uVar11 = ~uVar8 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (this->WaveTableBuffer).AllocatorInstance.Data;
    *param_2 = ((*(float *)(pFVar4 + (longlong)(int)uVar9 * 4) -
                *(float *)(pFVar5 + (longlong)(int)uVar8 * 4)) * fVar14 +
               *(float *)(pFVar5 + (longlong)(int)uVar8 * 4)) * this->OutputScale + this->OutputAdd;
  }
  fVar12 = this->PhaseIncrement + *pfVar10;
  fVar14 = this->PhaseIncrement + *pfVar2;
  fVar13 = (float)(this->WaveTableBuffer).ArrayNum;
  *pfVar10 = fVar12;
  *pfVar2 = fVar14;
  if (fVar13 <= fVar12) {
    do {
      fVar12 = fVar12 - fVar13;
    } while (fVar13 <= fVar12);
    *pfVar10 = fVar12;
  }
  if (fVar13 <= fVar14) {
    do {
      fVar14 = fVar14 - fVar13;
    } while (fVar13 <= fVar14);
    this->QuadPhaseReadIndex = fVar14;
  }
  return;
}

// GetTable @ 1445233e0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FWaveTableOsc::GetTable(FWaveTableOsc *this)

{
  return &this->WaveTableBuffer;
}

// GetTable @ 1445233f0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FWaveTableOsc::GetTable(FWaveTableOsc *this)

{
  return &this->WaveTableBuffer;
}

// Init @ 144523530

void __thiscall Audio::FWaveTableOsc::Init(FWaveTableOsc *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)(this->WaveTableBuffer).ArrayNum;
  this->NormalPhaseReadIndex = 0.0;
  this->SampleRate = param_1;
  this->FrequencyHz = param_2;
  this->QuadPhaseReadIndex = fVar1 * __real_3e800000;
  this->PhaseIncrement = (fVar1 * param_2) / param_1;
  return;
}

// Reset @ 1445251d0

void __thiscall Audio::FWaveTableOsc::Reset(FWaveTableOsc *this)

{
  int iVar1;
  
  iVar1 = (this->WaveTableBuffer).ArrayNum;
  this->NormalPhaseReadIndex = 0.0;
  this->QuadPhaseReadIndex = (float)iVar1 * __real_3e800000;
  return;
}

// SetFrequencyHz @ 1445253f0

void __thiscall Audio::FWaveTableOsc::SetFrequencyHz(FWaveTableOsc *this,float param_1)

{
  int iVar1;
  
  iVar1 = (this->WaveTableBuffer).ArrayNum;
  this->FrequencyHz = param_1;
  this->PhaseIncrement = ((float)iVar1 * param_1) / this->SampleRate;
  return;
}

// SetSampleRate @ 144525540

void __thiscall Audio::FWaveTableOsc::SetSampleRate(FWaveTableOsc *this,float param_1)

{
  int iVar1;
  
  iVar1 = (this->WaveTableBuffer).ArrayNum;
  this->SampleRate = param_1;
  this->PhaseIncrement = ((float)iVar1 * this->FrequencyHz) / param_1;
  return;
}

// SetScaleAdd @ 144525570

void __thiscall Audio::FWaveTableOsc::SetScaleAdd(FWaveTableOsc *this,float param_1,float param_2)

{
  this->OutputScale = param_1;
  this->OutputAdd = param_2;
  return;
}

// UpdateFrequency @ 144525ae0

void __thiscall Audio::FWaveTableOsc::UpdateFrequency(FWaveTableOsc *this)

{
  this->PhaseIncrement =
       ((float)(this->WaveTableBuffer).ArrayNum * this->FrequencyHz) / this->SampleRate;
  return;
}

