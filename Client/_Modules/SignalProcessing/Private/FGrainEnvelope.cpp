// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// FGrainEnvelope @ 1444ef1b0

FGrainEnvelope * __thiscall Audio::FGrainEnvelope::FGrainEnvelope(FGrainEnvelope *this)

{
  this->CurrentType = Count;
  (this->GrainEnvelope).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrainEnvelope).ArrayNum = 0;
  (this->GrainEnvelope).ArrayMax = 0;
  return this;
}

// ~FGrainEnvelope @ 1444f38c0

void __thiscall Audio::FGrainEnvelope::~FGrainEnvelope(FGrainEnvelope *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->GrainEnvelope).AllocatorInstance.Data;
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

// GenerateEnvelope @ 1444fdab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FGrainEnvelope::GenerateEnvelope(FGrainEnvelope *this,EGrainEnvelopeType param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if ((param_1 == Count) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnvelopeType != EGrainEnvelopeType::Count",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                          ,0x12,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2 < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumFrames > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                          ,0x13,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->CurrentType != param_1) {
    piVar1 = &(this->GrainEnvelope).ArrayNum;
    piVar2 = &(this->GrainEnvelope).ArrayMax;
    this->CurrentType = param_1;
    *piVar1 = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->GrainEnvelope).AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2,&(this->GrainEnvelope).AllocatorInstance,piVar1,piVar2);
    fVar13 = __real_3efe3d1d;
    fVar12 = __real_3ef9ffd6;
    fVar11 = __real_3eda6a01;
    fVar10 = __real_3eb7ae14;
    fVar9 = __real_3e10fa59;
    fVar8 = __real_3d9d6302;
    fVar7 = __real_40c90fdb;
    fVar6 = __real_40490fdb;
    fVar22 = __real_3f000000;
    uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar20 = __real_bf000000;
    fVar21 = __real_40800000;
    fVar5 = __real_3f800000;
    fVar19 = __real_322bcc77;
    fVar23 = 0.0;
    fVar24 = (float)param_2 - __real_3f800000;
    switch(param_1) {
    case Rectangular:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar16 = uVar16 + 1;
          *(undefined4 *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = 0x3f800000;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Triangle:
      fVar24 = fVar24 * __real_3f000000;
      uVar15 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar19 = __real_3f800000 / fVar24;
        do {
          fVar21 = fVar23 - fVar24;
          uVar17 = 0;
          if ((int)uVar15 < *piVar1) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar15 = uVar15 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) =
               fVar5 - (float)((uint)(fVar21 * fVar19) & uVar16);
          lVar18 = lVar18 + 4;
        } while ((int)uVar15 < param_2);
      }
      break;
    case DownwardTriangle:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar19 = fVar24 * fVar23;
          uVar16 = uVar16 + 1;
          fVar23 = fVar23 + fVar5;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar5 - fVar19;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case UpwardTriangle:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar19 = fVar24 * fVar23;
          uVar16 = uVar16 + 1;
          fVar23 = fVar23 + fVar5;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar19;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case ExponentialDecay:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          fVar19 = ((fVar23 - (float)param_2) + fVar5) * fVar24;
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          fVar19 = fVar19 * fVar19;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar19 * fVar19;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case ExponentialIncrease:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar19 = fVar24 * fVar23;
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          fVar19 = fVar19 * fVar19;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar19 * fVar19;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Gaussian:
      uVar16 = 0;
      if (0 < param_2) {
        fVar19 = fVar24 * __real_3f000000;
        lVar18 = 0;
        fVar24 = __real_40d55555 / fVar24;
        do {
          fVar21 = (fVar23 - fVar19) * fVar24;
          fVar21 = expf(fVar21 * fVar21 * fVar20);
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar21;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Hanning:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar19 = cosf(fVar23 * fVar7 * fVar24);
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) =
               fVar22 - fVar19 * fVar22;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Lanczos:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar21 = fVar23 * fVar7 * fVar24 - fVar6;
          if (fVar21 <= fVar19) {
            fVar21 = fVar19;
          }
          fVar20 = sinf(fVar21);
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar20 / fVar21;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Cosine:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar19 = sinf(fVar23 * fVar6 * fVar24);
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar19;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case CosineSquared:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar19 = sinf(fVar23 * fVar6 * fVar24);
          uVar17 = ~uVar16 >> 0x1f;
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = uVar17;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) = fVar19;
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = uVar17;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar19 = *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18);
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = uVar17;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (this->GrainEnvelope).AllocatorInstance.Data;
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)(pFVar3 + lVar18) = fVar19 * *(float *)(pFVar3 + lVar18);
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Welch:
      uVar16 = 0;
      if (0 < param_2) {
        fVar24 = fVar24 * __real_3f000000;
        lVar18 = 0;
        fVar19 = __real_3f800000 / fVar24;
        do {
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          fVar21 = (fVar23 - fVar24) * fVar19;
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) =
               fVar5 - fVar21 * fVar21;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case Blackman:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar21 = fVar23 * fVar7 * fVar24;
          fVar19 = cosf(fVar21 + fVar21);
          fVar21 = cosf(fVar21);
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) =
               fVar19 * fVar8 + (fVar11 - fVar21 * fVar13);
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
      break;
    case BlackmanHarris:
      uVar16 = 0;
      if (0 < param_2) {
        lVar18 = 0;
        fVar24 = __real_3f800000 / fVar24;
        do {
          fVar22 = fVar23 * fVar7 * fVar24;
          fVar19 = cosf(fVar22 + fVar22);
          fVar20 = cosf(fVar22);
          fVar22 = cosf(fVar22 * fVar21);
          fVar22 = fVar22 * ___real_3c3f5d79;
          uVar15 = 0;
          if ((int)uVar16 < *piVar1) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar23 = fVar23 + fVar5;
          uVar16 = uVar16 + 1;
          *(float *)((this->GrainEnvelope).AllocatorInstance.Data + lVar18) =
               (fVar19 * fVar9 + (fVar10 - fVar20 * fVar12)) - fVar22;
          lVar18 = lVar18 + 4;
        } while ((int)uVar16 < param_2);
      }
    }
  }
  return;
}

// GetValue @ 144504bf0

float __thiscall Audio::FGrainEnvelope::GetValue(FGrainEnvelope *this,float param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pFVar2 = (this->GrainEnvelope).AllocatorInstance.Data;
  iVar5 = (this->GrainEnvelope).ArrayNum + -1;
  iVar4 = (int)((float)iVar5 * param_1);
  fVar1 = *(float *)(pFVar2 + (longlong)iVar4 * 4);
  iVar3 = iVar4 + 1;
  if (iVar5 < iVar4 + 1) {
    iVar3 = iVar5;
  }
  return (*(float *)(pFVar2 + (longlong)iVar3 * 4) - fVar1) *
         ((float)iVar5 * param_1 - (float)iVar4) + fVar1;
}

