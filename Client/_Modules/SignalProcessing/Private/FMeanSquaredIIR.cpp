// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FMeanSquaredIIR @ 1444a4fc0

FMeanSquaredIIR * __thiscall
Audio::FMeanSquaredIIR::FMeanSquaredIIR
          (FMeanSquaredIIR *this,float param_1,int param_2,float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FMeanSquaredIIR *pFVar4;
  float fVar5;
  float fVar6;
  
  this->SampleRate = param_1;
  this->NumChannels = 0;
  this->Alpha = 0.0;
  piVar1 = &(this->ChannelValues).ArrayMax;
  this->Beta = 1.0;
  (this->ChannelValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelValues).ArrayNum = 0;
  *piVar1 = 0;
  if (this->SampleRate <= 0.0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901326>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0x10e,"SampleRate > 0.f");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMeanSquaredIIR *)(*pcVar2)();
      return pFVar4;
    }
    this->SampleRate = 48000.0;
  }
  SetNumChannels(this,param_2);
  if (0.0 < param_3) {
    fVar5 = expf(__real_c47a0000 / (param_3 * this->SampleRate));
    fVar6 = __real_3f800000 - fVar5;
    this->Alpha = fVar5;
    this->Beta = fVar6;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901337>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0x119,"InWindowTimeMsec > 0.f");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMeanSquaredIIR *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (0 < this->NumChannels) {
    (this->ChannelValues).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ChannelValues).AllocatorInstance,0,piVar1);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ChannelValues,this->NumChannels);
  }
  return this;
}

// ProcessAudio @ 1444da260

void __thiscall
Audio::FMeanSquaredIIR::ProcessAudio
          (FMeanSquaredIIR *this,float *param_1,int param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38 [2];
  
  iVar4 = param_2 * this->NumChannels;
  if ((iVar4 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((iVar4 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar4;
  local_38[0]._12_4_ = uStack_4c;
  local_38[0].ArrayNum = iVar4;
  local_48.DataPtr = param_3;
  local_38[0].DataPtr = param_1;
  ArraySquare(local_38,&local_48);
  uVar5 = 0;
  if (0 < this->NumChannels) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ChannelValues).ArrayNum) {
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
      fVar7 = *(float *)((this->ChannelValues).AllocatorInstance.Data + lVar6);
      for (uVar3 = uVar5; (int)uVar3 < iVar4; uVar3 = uVar3 + this->NumChannels) {
        fVar7 = fVar7 * this->Alpha + param_3[(int)uVar3] * this->Beta;
        param_3[(int)uVar3] = fVar7;
      }
      uVar3 = 0;
      if ((int)uVar5 < (this->ChannelValues).ArrayNum) {
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
      uVar5 = uVar5 + 1;
      *(float *)((this->ChannelValues).AllocatorInstance.Data + lVar6) = fVar7;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < this->NumChannels);
  }
  return;
}

// Reset @ 1444e1ab0

void __thiscall Audio::FMeanSquaredIIR::Reset(FMeanSquaredIIR *this)

{
  if (0 < this->NumChannels) {
    (this->ChannelValues).ArrayNum = 0;
    if ((this->ChannelValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ChannelValues).AllocatorInstance,0,&(this->ChannelValues).ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ChannelValues,this->NumChannels);
  }
  return;
}

// SetNumChannels @ 1444e4a00

void __thiscall Audio::FMeanSquaredIIR::SetNumChannels(FMeanSquaredIIR *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->NumChannels != param_1) {
    (this->ChannelValues).ArrayNum = 0;
    if ((this->ChannelValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ChannelValues).AllocatorInstance,0,&(this->ChannelValues).ArrayMax);
    }
    if (param_1 < 1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1809353482809901352>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                         ,0x128,"InNumChannels > 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ChannelValues,param_1);
    }
    this->NumChannels = param_1;
  }
  return;
}

// SetWindowSize @ 1444e5ce0

void __thiscall Audio::FMeanSquaredIIR::SetWindowSize(FMeanSquaredIIR *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < param_1) {
    fVar3 = expf(__real_c47a0000 / (param_1 * this->SampleRate));
    fVar4 = __real_3f800000 - fVar3;
    this->Alpha = fVar3;
    this->Beta = fVar4;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1809353482809901337>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                       ,0x119,"InWindowTimeMsec > 0.f");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0 < this->NumChannels) {
    (this->ChannelValues).ArrayNum = 0;
    if ((this->ChannelValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->ChannelValues).AllocatorInstance,0,&(this->ChannelValues).ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->ChannelValues,this->NumChannels);
  }
  return;
}

