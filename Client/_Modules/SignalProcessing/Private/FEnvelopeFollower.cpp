// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 19

// FEnvelopeFollower @ 1444a4080

FEnvelopeFollower * __thiscall
Audio::FEnvelopeFollower::FEnvelopeFollower
          (FEnvelopeFollower *this,FEnvelopeFollowerInitParams *param_1)

{
  int iVar1;
  
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer).ArrayNum = 0;
  (this->WorkBuffer).ArrayMax = 0;
  FMeanSquaredIIR::FMeanSquaredIIR
            (&this->MeanSquaredProcessor,param_1->SampleRate,param_1->NumChannels,
             param_1->AnalysisWindowMsec);
  iVar1 = param_1->NumChannels;
  FAttackRelease::FAttackRelease
            ((FAttackRelease *)&this->Smoother,param_1->SampleRate,param_1->AttackTimeMsec,
             param_1->ReleaseTimeMsec,param_1->bIsAnalog);
  (this->Smoother).NumChannels = 0;
  (this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Smoother).PriorEnvelopeValues.ArrayNum = 0;
  (this->Smoother).PriorEnvelopeValues.ArrayMax = 0;
  FAttackReleaseSmoother::SetNumChannels(&this->Smoother,iVar1);
  this->NumChannels = param_1->NumChannels;
  this->EnvMode = param_1->Mode;
  return this;
}

// FEnvelopeFollower @ 1444a4130

FEnvelopeFollower * __thiscall Audio::FEnvelopeFollower::FEnvelopeFollower(FEnvelopeFollower *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_473b8000;
  fVar2 = __real_40a00000;
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer).ArrayNum = 0;
  (this->WorkBuffer).ArrayMax = 0;
  FMeanSquaredIIR::FMeanSquaredIIR(&this->MeanSquaredProcessor,fVar3,1,fVar2);
  FAttackRelease::FAttackRelease
            ((FAttackRelease *)&this->Smoother,__real_473b8000,__real_41200000,__real_42c80000,true)
  ;
  (this->Smoother).NumChannels = 0;
  piVar1 = &(this->Smoother).PriorEnvelopeValues.ArrayMax;
  *piVar1 = 0;
  (this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Smoother).PriorEnvelopeValues.ArrayNum = 0;
  if ((this->Smoother).NumChannels != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&(this->Smoother).PriorEnvelopeValues.AllocatorInstance,0,piVar1);
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&(this->Smoother).PriorEnvelopeValues,1);
    (this->Smoother).NumChannels = 1;
  }
  this->NumChannels = 1;
  this->EnvMode = Peak;
  return this;
}

// GetAnalog @ 1444bf950

bool __thiscall Audio::FEnvelopeFollower::GetAnalog(FEnvelopeFollower *this)

{
  return (bool)*(undefined1 *)((longlong)&(this->Smoother)._padding_ + 4);
}

// GetAttackTimeMsec @ 1444bf960

float __thiscall Audio::FEnvelopeFollower::GetAttackTimeMsec(FEnvelopeFollower *this)

{
  return *(float *)&(this->Smoother)._padding_;
}

// GetEnvelopeValues @ 1444bfce0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FEnvelopeFollower::GetEnvelopeValues(FEnvelopeFollower *this)

{
  return &(this->Smoother).PriorEnvelopeValues;
}

// GetMode @ 1444bfe00

Type __thiscall Audio::FEnvelopeFollower::GetMode(FEnvelopeFollower *this)

{
  return this->EnvMode;
}

// GetNumChannels @ 1444c07f0

int __thiscall Audio::FEnvelopeFollower::GetNumChannels(FEnvelopeFollower *this)

{
  return this->NumChannels;
}

// GetReleaseTimeMsec @ 1444c1290

float __thiscall Audio::FEnvelopeFollower::GetReleaseTimeMsec(FEnvelopeFollower *this)

{
  return *(float *)&(this->Smoother)._padding_;
}

// GetSampleRate @ 1444c12b0

float __thiscall Audio::FEnvelopeFollower::GetSampleRate(FEnvelopeFollower *this)

{
  return *(float *)&(this->Smoother)._padding_;
}

// Init @ 1444c3090

void __thiscall
Audio::FEnvelopeFollower::Init(FEnvelopeFollower *this,FEnvelopeFollowerInitParams *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FMeanSquaredIIR *pFVar5;
  FMeanSquaredIIR local_58;
  FAttackReleaseSmoother local_38;
  
  iVar3 = param_1->NumChannels;
  FAttackRelease::FAttackRelease
            ((FAttackRelease *)&local_38,param_1->SampleRate,param_1->AttackTimeMsec,
             param_1->ReleaseTimeMsec,param_1->bIsAnalog);
  local_38.NumChannels = 0;
  local_38.PriorEnvelopeValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.PriorEnvelopeValues.ArrayNum = 0;
  local_38.PriorEnvelopeValues.ArrayMax = 0;
  FAttackReleaseSmoother::SetNumChannels(&local_38,iVar3);
  pTVar1 = &(this->Smoother).PriorEnvelopeValues;
  (this->Smoother).NumChannels = local_38.NumChannels;
  (this->Smoother)._padding_ = local_38._padding_;
  (this->Smoother)._padding_ = local_38._padding_;
  (this->Smoother)._padding_ = local_38._padding_;
  if (pTVar1 != &local_38.PriorEnvelopeValues) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = local_38.PriorEnvelopeValues.AllocatorInstance.Data;
    (this->Smoother).PriorEnvelopeValues.ArrayNum = local_38.PriorEnvelopeValues.ArrayNum;
    (this->Smoother).PriorEnvelopeValues.ArrayMax = local_38.PriorEnvelopeValues.ArrayMax;
    local_38.PriorEnvelopeValues.ArrayNum = 0;
    local_38.PriorEnvelopeValues.ArrayMax = 0;
    local_38.PriorEnvelopeValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.PriorEnvelopeValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.PriorEnvelopeValues.AllocatorInstance.Data);
  }
  pFVar5 = FMeanSquaredIIR::FMeanSquaredIIR
                     (&local_58,param_1->SampleRate,param_1->NumChannels,param_1->AnalysisWindowMsec
                     );
  pTVar1 = &(this->MeanSquaredProcessor).ChannelValues;
  pTVar2 = &pFVar5->ChannelValues;
  (this->MeanSquaredProcessor).SampleRate = pFVar5->SampleRate;
  (this->MeanSquaredProcessor).NumChannels = pFVar5->NumChannels;
  (this->MeanSquaredProcessor).Alpha = pFVar5->Alpha;
  (this->MeanSquaredProcessor).Beta = pFVar5->Beta;
  if (pTVar1 != pTVar2) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->MeanSquaredProcessor).ChannelValues.ArrayNum = (pFVar5->ChannelValues).ArrayNum;
    (this->MeanSquaredProcessor).ChannelValues.ArrayMax = (pFVar5->ChannelValues).ArrayMax;
    (pFVar5->ChannelValues).ArrayNum = 0;
    (pFVar5->ChannelValues).ArrayMax = 0;
  }
  if (local_58.ChannelValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ChannelValues.AllocatorInstance.Data);
  }
  this->NumChannels = param_1->NumChannels;
  this->EnvMode = param_1->Mode;
  return;
}

// ProcessAudio @ 1444d8830

void __thiscall
Audio::FEnvelopeFollower::ProcessAudio(FEnvelopeFollower *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  if (0 < param_2 * this->NumChannels) {
    ProcessWorkBuffer(this,param_1,param_2);
    pFVar5 = (this->WorkBuffer).AllocatorInstance.Data;
    if (0 < param_2) {
      iVar4 = (this->Smoother).NumChannels;
      uVar11 = 0;
      fVar1 = *(float *)((longlong)&(this->Smoother)._padding_ + 4);
      fVar2 = *(float *)((longlong)&(this->Smoother)._padding_ + 4);
      if (0 < iVar4) {
        lVar10 = 0;
        lVar12 = (longlong)(iVar4 * param_2);
        do {
          uVar8 = 0;
          if ((int)uVar11 < (this->Smoother).PriorEnvelopeValues.ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar13 = *(float *)((this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data + lVar10);
          lVar9 = (longlong)(int)uVar11;
          if (lVar9 < lVar12) {
            do {
              fVar3 = *(float *)(pFVar5 + lVar9 * 4);
              fVar13 = fVar13 - fVar3;
              fVar14 = fVar2;
              if (fVar13 <= 0.0) {
                fVar14 = fVar1;
              }
              lVar9 = lVar9 + (this->Smoother).NumChannels;
              fVar13 = fVar14 * fVar13 + fVar3;
            } while (lVar9 < lVar12);
          }
          uVar8 = 0;
          if ((int)uVar11 < (this->Smoother).PriorEnvelopeValues.ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          *(float *)((this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data + lVar10) = fVar13;
          lVar10 = lVar10 + 4;
        } while ((int)uVar11 < (this->Smoother).NumChannels);
      }
    }
  }
  return;
}

// ProcessAudio @ 1444d89f0

void __thiscall
Audio::FEnvelopeFollower::ProcessAudio
          (FEnvelopeFollower *this,float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  if (0 < param_2 * this->NumChannels) {
    ProcessWorkBuffer(this,param_1,param_2);
    pFVar6 = (this->WorkBuffer).AllocatorInstance.Data;
    if (0 < param_2) {
      iVar5 = (this->Smoother).NumChannels;
      uVar10 = 0;
      fVar1 = *(float *)((longlong)&(this->Smoother)._padding_ + 4);
      fVar2 = *(float *)((longlong)&(this->Smoother)._padding_ + 4);
      if (0 < iVar5) {
        lVar11 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar10 < (this->Smoother).PriorEnvelopeValues.ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar12 = *(float *)((this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data + lVar11);
          for (uVar9 = uVar10; (int)uVar9 < iVar5 * param_2;
              uVar9 = uVar9 + (this->Smoother).NumChannels) {
            fVar3 = *(float *)(pFVar6 + (longlong)(int)uVar9 * 4);
            fVar12 = fVar12 - fVar3;
            fVar4 = fVar2;
            if (fVar12 <= 0.0) {
              fVar4 = fVar1;
            }
            fVar12 = fVar12 * fVar4 + fVar3;
            param_3[(int)uVar9] = fVar12;
          }
          uVar9 = 0;
          if ((int)uVar10 < (this->Smoother).PriorEnvelopeValues.ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar10 = uVar10 + 1;
          *(float *)((this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data + lVar11) = fVar12;
          lVar11 = lVar11 + 4;
        } while ((int)uVar10 < (this->Smoother).NumChannels);
      }
    }
  }
  return;
}

// ProcessWorkBuffer @ 1444e0800

void __thiscall
Audio::FEnvelopeFollower::ProcessWorkBuffer(FEnvelopeFollower *this,float *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  Type TVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  iVar8 = param_2 * this->NumChannels;
  if (0 < iVar8) {
    piVar1 = &(this->WorkBuffer).ArrayNum;
    piVar2 = &(this->WorkBuffer).ArrayMax;
    *piVar1 = 0;
    if ((this->WorkBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar8,(ForAnyElementType *)this,piVar1,piVar2);
    TVar3 = this->EnvMode;
    if (TVar3 == RootMeanSquared) {
      FMeanSquaredIIR::ProcessAudio
                (&this->MeanSquaredProcessor,param_1,param_2,
                 (float *)(this->WorkBuffer).AllocatorInstance.Data);
      local_48.DataPtr = (float *)(this->WorkBuffer).AllocatorInstance.Data;
      iVar8 = *piVar1;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iVar8;
      ArraySqrtInPlace(&local_48);
    }
    else if (TVar3 == MeanSquared) {
      FMeanSquaredIIR::ProcessAudio
                (&this->MeanSquaredProcessor,param_1,param_2,
                 (float *)(this->WorkBuffer).AllocatorInstance.Data);
    }
    else if (TVar3 == Peak) {
      pFVar5 = (this->WorkBuffer).AllocatorInstance.Data;
      iVar4 = *piVar1;
      if ((iVar4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = iVar4;
      local_28._12_4_ = uStack_5c;
      local_28.ArrayNum = iVar8;
      local_38.DataPtr = (float *)pFVar5;
      local_28.DataPtr = param_1;
      ArrayAbs(&local_28,&local_38);
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                         ,0x1de,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  return;
}

// Reset @ 1444e18c0

void __thiscall Audio::FEnvelopeFollower::Reset(FEnvelopeFollower *this)

{
  int iVar1;
  
  if (0 < (this->MeanSquaredProcessor).NumChannels) {
    iVar1 = (this->MeanSquaredProcessor).ChannelValues.ArrayMax;
    (this->MeanSquaredProcessor).ChannelValues.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->MeanSquaredProcessor).ChannelValues.AllocatorInstance,0,
                 &(this->MeanSquaredProcessor).ChannelValues.ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
              (&(this->MeanSquaredProcessor).ChannelValues,(this->MeanSquaredProcessor).NumChannels)
    ;
  }
  iVar1 = (this->Smoother).NumChannels;
  if (0 < iVar1) {
    memset((this->Smoother).PriorEnvelopeValues.AllocatorInstance.Data,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// SetAnalog @ 1444e2510

void __thiscall Audio::FEnvelopeFollower::SetAnalog(FEnvelopeFollower *this,bool param_1)

{
  FAttackRelease::SetAnalog((FAttackRelease *)&this->Smoother,param_1);
  return;
}

// SetAttackTime @ 1444e2920

void __thiscall Audio::FEnvelopeFollower::SetAttackTime(FEnvelopeFollower *this,float param_1)

{
  float fVar1;
  
  *(float *)&(this->Smoother)._padding_ = param_1;
  if (param_1 <= 0.0) {
    *(undefined4 *)((longlong)&(this->Smoother)._padding_ + 4) = 0;
    return;
  }
  fVar1 = __real_c58fe95d;
  if (*(char *)((longlong)&(this->Smoother)._padding_ + 4) != '\0') {
    fVar1 = __real_c47a992f;
  }
  fVar1 = expf(fVar1 / (param_1 * *(float *)&(this->Smoother)._padding_));
  *(float *)((longlong)&(this->Smoother)._padding_ + 4) = fVar1;
  return;
}

// SetMode @ 1444e4670

void __thiscall Audio::FEnvelopeFollower::SetMode(FEnvelopeFollower *this,Type param_1)

{
  this->EnvMode = param_1;
  return;
}

// SetNumChannels @ 1444e49a0

void __thiscall Audio::FEnvelopeFollower::SetNumChannels(FEnvelopeFollower *this,int param_1)

{
  if (param_1 != this->NumChannels) {
    FAttackReleaseSmoother::SetNumChannels(&this->Smoother,param_1);
    FMeanSquaredIIR::SetNumChannels(&this->MeanSquaredProcessor,this->NumChannels);
    this->NumChannels = param_1;
  }
  return;
}

// SetReleaseTime @ 1444e55e0

void __thiscall Audio::FEnvelopeFollower::SetReleaseTime(FEnvelopeFollower *this,float param_1)

{
  float fVar1;
  
  *(float *)&(this->Smoother)._padding_ = param_1;
  if (param_1 <= 0.0) {
    *(undefined4 *)((longlong)&(this->Smoother)._padding_ + 4) = 0;
    return;
  }
  fVar1 = __real_c58fe95d;
  if (*(char *)((longlong)&(this->Smoother)._padding_ + 4) != '\0') {
    fVar1 = __real_c47a992f;
  }
  fVar1 = expf(fVar1 / (param_1 * *(float *)&(this->Smoother)._padding_));
  *(float *)((longlong)&(this->Smoother)._padding_ + 4) = fVar1;
  return;
}

