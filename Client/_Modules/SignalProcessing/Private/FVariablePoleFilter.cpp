// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// Init @ 144507ec0

void __thiscall
Audio::FVariablePoleFilter::Init
          (FVariablePoleFilter *this,EFilterOrder param_1,float param_2,int param_3,float param_4,
          Type param_5,float param_6,float param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FBiquadFilter *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = &(this->Filters).ArrayNum;
  iVar3 = *piVar1;
  this->NumFilters = param_1;
  this->NumChannels = param_3;
  this->Type = param_5;
  if (0 < iVar3) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    piVar2 = &(this->Filters).ArrayMax;
    pFVar4 = (FBiquadFilter *)(this->Filters).AllocatorInstance.Data;
    if (*piVar2 < (int)param_1) {
      DestructItems<Audio::FBiquadFilter,int>(pFVar4,iVar3);
      (this->Filters).ArrayNum = 0;
      if (*piVar2 != param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,param_1,&(this->Filters).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<Audio::FBiquadFilter,int>(pFVar4,iVar3);
      (this->Filters).ArrayNum = 0;
    }
  }
  iVar3 = this->NumFilters;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,&(this->Filters).AllocatorInstance,piVar1,
                     &(this->Filters).ArrayMax);
  DefaultConstructItems<Audio::FBiquadFilter,int>
            ((this->Filters).AllocatorInstance.Data + (longlong)iVar7 * 0x30,iVar3);
  uVar9 = 0;
  if (0 < this->NumFilters) {
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->Filters).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FBiquadFilter::Init((FBiquadFilter *)
                          ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30),
                          param_2,param_3,param_5,param_4,param_6,param_7);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < this->NumFilters);
  }
  return;
}

// ProcessAudioBuffer @ 144510d30

void __thiscall
Audio::FVariablePoleFilter::ProcessAudioBuffer
          (FVariablePoleFilter *this,float *param_1,float *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (this->NumFilters < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4163478469960794168>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VariablePoleFilter.cpp"
                       ,0x38,"NumFilters >= 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < param_3) {
    uVar5 = (ulonglong)(uint)param_3;
    do {
      if (((this->Filters).ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FBiquadFilter::ProcessAudioFrame
                ((FBiquadFilter *)(this->Filters).AllocatorInstance.Data,param_1,param_2);
      uVar4 = 1;
      if (1 < this->NumFilters) {
        do {
          uVar3 = 0;
          if ((int)uVar4 < (this->Filters).ArrayNum) {
            uVar3 = ~uVar4 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FBiquadFilter::ProcessAudioFrame
                    ((FBiquadFilter *)
                     ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30),param_2,
                     param_2);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < this->NumFilters);
      }
      param_1 = param_1 + this->NumChannels;
      param_2 = param_2 + this->NumChannels;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// ProcessAudioFrame @ 144511f20

void __thiscall
Audio::FVariablePoleFilter::ProcessAudioFrame
          (FVariablePoleFilter *this,float *param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (this->NumFilters < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4163478469960794153>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\VariablePoleFilter.cpp"
                       ,0x29,"NumFilters >= 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((this->Filters).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FBiquadFilter::ProcessAudioFrame
              ((FBiquadFilter *)(this->Filters).AllocatorInstance.Data,param_1,param_2);
    uVar4 = 1;
    if (1 < this->NumFilters) {
      do {
        uVar3 = 0;
        if ((int)uVar4 < (this->Filters).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FBiquadFilter::ProcessAudioFrame
                  ((FBiquadFilter *)
                   ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30),param_2,
                   param_2);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < this->NumFilters);
    }
  }
  return;
}

// Reset @ 144517b80

void __thiscall Audio::FVariablePoleFilter::Reset(FVariablePoleFilter *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (1 < this->NumFilters) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Filters).ArrayNum) {
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
      FBiquadFilter::Reset
                ((FBiquadFilter *)
                 ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30));
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < this->NumFilters);
  }
  return;
}

// SetParams @ 14451c310

void __thiscall
Audio::FVariablePoleFilter::SetParams
          (FVariablePoleFilter *this,Type param_1,float param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < this->NumFilters) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Filters).ArrayNum) {
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
      FBiquadFilter::SetParams
                ((FBiquadFilter *)
                 ((this->Filters).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30),param_1,
                 param_2,param_3,param_4);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < this->NumFilters);
  }
  return;
}

