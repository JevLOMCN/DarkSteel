// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// FAttackReleaseSmoother @ 1444a2200

FAttackReleaseSmoother * __thiscall
Audio::FAttackReleaseSmoother::FAttackReleaseSmoother
          (FAttackReleaseSmoother *this,float param_1,int param_2,float param_3,float param_4,
          bool param_5)

{
  FAttackRelease::FAttackRelease((FAttackRelease *)this,param_1,param_3,param_4,param_5);
  this->NumChannels = 0;
  (this->PriorEnvelopeValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PriorEnvelopeValues).ArrayNum = 0;
  (this->PriorEnvelopeValues).ArrayMax = 0;
  SetNumChannels(this,param_2);
  return this;
}

// GetEnvelopeValues @ 1444bfcd0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FAttackReleaseSmoother::GetEnvelopeValues(FAttackReleaseSmoother *this)

{
  return &this->PriorEnvelopeValues;
}

// ProcessAudio @ 1444d5910

void __thiscall
Audio::FAttackReleaseSmoother::ProcessAudio(FAttackReleaseSmoother *this,float *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  if (0 < param_2) {
    uVar8 = 0;
    fVar2 = *(float *)((longlong)&this->_padding_ + 4);
    fVar3 = *(float *)((longlong)&this->_padding_ + 4);
    if (0 < this->NumChannels) {
      lVar9 = 0;
      lVar10 = (longlong)(this->NumChannels * param_2);
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->PriorEnvelopeValues).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar11 = *(float *)((this->PriorEnvelopeValues).AllocatorInstance.Data + lVar9);
        lVar7 = (longlong)(int)uVar8;
        if (lVar7 < lVar10) {
          do {
            pfVar1 = param_1 + lVar7;
            fVar11 = fVar11 - *pfVar1;
            fVar12 = fVar3;
            if (fVar11 <= 0.0) {
              fVar12 = fVar2;
            }
            lVar7 = lVar7 + this->NumChannels;
            fVar11 = fVar12 * fVar11 + *pfVar1;
          } while (lVar7 < lVar10);
        }
        uVar6 = 0;
        if ((int)uVar8 < (this->PriorEnvelopeValues).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 + 1;
        *(float *)((this->PriorEnvelopeValues).AllocatorInstance.Data + lVar9) = fVar11;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < this->NumChannels);
    }
  }
  return;
}

// ProcessAudio @ 1444d5ab0

void __thiscall
Audio::FAttackReleaseSmoother::ProcessAudio
          (FAttackReleaseSmoother *this,float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  
  if (0 < param_2) {
    iVar4 = this->NumChannels;
    uVar8 = 0;
    fVar1 = *(float *)((longlong)&this->_padding_ + 4);
    fVar2 = *(float *)((longlong)&this->_padding_ + 4);
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->PriorEnvelopeValues).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar10 = *(float *)((this->PriorEnvelopeValues).AllocatorInstance.Data + lVar9);
        for (uVar7 = uVar8; (int)uVar7 < iVar4 * param_2; uVar7 = uVar7 + this->NumChannels) {
          fVar10 = fVar10 - param_1[(int)uVar7];
          fVar3 = fVar2;
          if (fVar10 <= 0.0) {
            fVar3 = fVar1;
          }
          fVar10 = fVar10 * fVar3 + param_1[(int)uVar7];
          param_3[(int)uVar7] = fVar10;
        }
        uVar7 = 0;
        if ((int)uVar8 < (this->PriorEnvelopeValues).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = uVar8 + 1;
        *(float *)((this->PriorEnvelopeValues).AllocatorInstance.Data + lVar9) = fVar10;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < this->NumChannels);
    }
  }
  return;
}

// Reset @ 1444e1590

void __thiscall Audio::FAttackReleaseSmoother::Reset(FAttackReleaseSmoother *this)

{
  if (0 < this->NumChannels) {
    memset((this->PriorEnvelopeValues).AllocatorInstance.Data,0,(longlong)this->NumChannels << 2);
    return;
  }
  return;
}

// SetNumChannels @ 1444e4700

void __thiscall
Audio::FAttackReleaseSmoother::SetNumChannels(FAttackReleaseSmoother *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != this->NumChannels) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    (this->PriorEnvelopeValues).ArrayNum = 0;
    if ((this->PriorEnvelopeValues).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->PriorEnvelopeValues).AllocatorInstance,0,
                 &(this->PriorEnvelopeValues).ArrayMax);
    }
    if (param_1 < 1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1809353482809901205>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                         ,0x95,"InNumChannels > 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->PriorEnvelopeValues,param_1);
    }
    this->NumChannels = param_1;
  }
  return;
}

