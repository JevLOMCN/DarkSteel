// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// FLinearPitchShifter @ 1444f0fa0

FLinearPitchShifter * __thiscall
Audio::FLinearPitchShifter::FLinearPitchShifter(FLinearPitchShifter *this,int param_1)

{
  int *piVar1;
  
  (this->PreviousFrame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PreviousFrame).ArrayMax;
  this->InterpLengthFrames = 0x40;
  this->InterpFramesRemaining = 0;
  *piVar1 = 0;
  this->CurrentIndex = 0.0;
  this->NumChannels = param_1;
  (this->PitchShiftRatio).TargetValue = 1.0;
  (this->PitchShiftRatio).bIsInit = false;
  (this->PitchShiftRatio).StartingValue = 1.0;
  (this->PitchShiftRatio).CurrentValue = 1.0;
  (this->PitchShiftRatio).DeltaValue = 0.0;
  (this->PreviousFrame).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < this->NumChannels) {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->PreviousFrame,this->NumChannels);
  }
  this->CurrentIndex = 0.0;
  return this;
}

// GetNextIndexDelta @ 144504050

float __thiscall Audio::FLinearPitchShifter::GetNextIndexDelta(FLinearPitchShifter *this)

{
  float fVar1;
  
  if (this->InterpFramesRemaining != 0) {
    fVar1 = (this->PitchShiftRatio).DeltaValue + (this->PitchShiftRatio).CurrentValue;
    this->InterpFramesRemaining = this->InterpFramesRemaining + -1;
    (this->PitchShiftRatio).CurrentValue = fVar1;
    return fVar1;
  }
  return (this->PitchShiftRatio).TargetValue;
}

// ProcessAudio @ 14450d520

int __thiscall
Audio::FLinearPitchShifter::ProcessAudio
          (FLinearPitchShifter *this,TArrayView<float,int> *param_1,
          TCircularAudioBuffer<float,16> *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  
  iVar12 = 0;
  pfVar3 = param_1->DataPtr;
  pFVar17 = (this->PreviousFrame).AllocatorInstance.Data;
  iVar8 = param_1->ArrayNum / this->NumChannels;
  iVar16 = 0;
  iVar9 = iVar8;
  if (iVar8 != 0) {
    if ((this->CurrentIndex <= __real_bf800000 && __real_bf800000 != this->CurrentIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentIndex >= -1.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\InterpolatedLinearPitchShifter.cpp"
                           ,0x2b,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    if (((this->PreviousFrame).ArrayNum != this->NumChannels) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousFrame.Num() == NumChannels",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\InterpolatedLinearPitchShifter.cpp"
                           ,0x2c,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    fVar6 = __real_3f800000;
    fVar18 = this->CurrentIndex;
    fVar5 = __real_3f000000;
    while (__real_3f000000 = fVar5, fVar18 < 0.0) {
      iVar9 = 0;
      if (0 < this->NumChannels) {
        pfVar14 = pfVar3;
        do {
          iVar13 = (param_2->ReadCounter).Counter;
          iVar15 = (param_2->WriteCounter).Counter;
          if (iVar15 < iVar13) {
            iVar13 = param_2->Capacity - iVar13;
          }
          else {
            iVar13 = -iVar13;
          }
          if (~(iVar15 + iVar13) + param_2->Capacity != 0) {
            uVar1 = (param_2->WriteCounter).Counter;
            *(float *)((param_2->InternalBuffer).AllocatorInstance.Data + (ulonglong)uVar1 * 4) =
                 (*pfVar14 - *(float *)(((longlong)pFVar17 - (longlong)pfVar3) + (longlong)pfVar14))
                 * (fVar18 + fVar6) +
                 *(float *)(((longlong)pFVar17 - (longlong)pfVar3) + (longlong)pfVar14);
            LOCK();
            (param_2->WriteCounter).Counter = (uVar1 + 1) % param_2->Capacity;
            UNLOCK();
          }
          iVar9 = iVar9 + 1;
          pfVar14 = pfVar14 + 1;
        } while (iVar9 < this->NumChannels);
      }
      if (this->InterpFramesRemaining == 0) {
        fVar18 = (this->PitchShiftRatio).TargetValue;
      }
      else {
        this->InterpFramesRemaining = this->InterpFramesRemaining + -1;
        fVar18 = (this->PitchShiftRatio).DeltaValue + (this->PitchShiftRatio).CurrentValue;
        (this->PitchShiftRatio).CurrentValue = fVar18;
      }
      fVar18 = fVar18 + this->CurrentIndex;
      iVar16 = iVar16 + 1;
      this->CurrentIndex = fVar18;
      fVar5 = __real_3f000000;
    }
    if ((this->InterpFramesRemaining != 0) ||
       (__real_322bcc77 <
        (float)((uint)(fVar6 - (this->PitchShiftRatio).TargetValue) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      iVar13 = (int)ROUND((fVar18 + fVar18) - fVar5) >> 1;
      iVar9 = iVar16;
      if ((iVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowerFrameIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\InterpolatedLinearPitchShifter.cpp"
                             ,0x4a,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      while (iVar13 + 1 < iVar8) {
        iVar16 = this->NumChannels;
        iVar15 = 0;
        fVar18 = this->CurrentIndex;
        if (0 < iVar16) {
          pfVar14 = pfVar3 + iVar16 * iVar13;
          do {
            iVar10 = (param_2->ReadCounter).Counter;
            iVar2 = (param_2->WriteCounter).Counter;
            if (iVar2 < iVar10) {
              iVar10 = param_2->Capacity - iVar10;
            }
            else {
              iVar10 = -iVar10;
            }
            if (~(iVar2 + iVar10) + param_2->Capacity != 0) {
              uVar1 = (param_2->WriteCounter).Counter;
              *(float *)((param_2->InternalBuffer).AllocatorInstance.Data + (ulonglong)uVar1 * 4) =
                   (pfVar14[(longlong)(iVar16 * (iVar13 + 1)) - (longlong)(iVar16 * iVar13)] -
                   *pfVar14) * (fVar18 - (float)iVar13) + *pfVar14;
              LOCK();
              (param_2->WriteCounter).Counter = (uVar1 + 1) % param_2->Capacity;
              UNLOCK();
            }
            pfVar14 = pfVar14 + 1;
            iVar15 = iVar15 + 1;
          } while (iVar15 < this->NumChannels);
        }
        if (this->InterpFramesRemaining == 0) {
          fVar18 = (this->PitchShiftRatio).TargetValue;
        }
        else {
          fVar18 = (this->PitchShiftRatio).DeltaValue + (this->PitchShiftRatio).CurrentValue;
          this->InterpFramesRemaining = this->InterpFramesRemaining + -1;
          (this->PitchShiftRatio).CurrentValue = fVar18;
        }
        fVar18 = fVar18 + this->CurrentIndex;
        this->CurrentIndex = fVar18;
        iVar9 = iVar9 + 1;
        iVar13 = (int)ROUND((fVar18 + fVar18) - fVar5) >> 1;
      }
      this->CurrentIndex = this->CurrentIndex - (float)iVar8;
      if (0 < this->NumChannels) {
        lVar11 = (longlong)(this->NumChannels * (iVar8 + -1)) * 4 - (longlong)pFVar17;
        do {
          iVar12 = iVar12 + 1;
          *(undefined4 *)pFVar17 = *(undefined4 *)(pFVar17 + lVar11 + (longlong)pfVar3);
          pFVar17 = pFVar17 + 4;
        } while (iVar12 < this->NumChannels);
      }
    }
    else {
      TCircularAudioBuffer<float,16>::Push(param_2,pfVar3,iVar8 * this->NumChannels);
      iVar9 = iVar16 + iVar8;
    }
  }
  return iVar9;
}

// Reset @ 1445173c0

void __thiscall
Audio::FLinearPitchShifter::Reset(FLinearPitchShifter *this,int param_1,float param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float _Y;
  
  _Y = param_2 * __real_3daaaaab;
  this->NumChannels = param_1;
  fVar2 = __real_40000000;
  this->InterpLengthFrames = param_3;
  this->InterpFramesRemaining = 0;
  fVar2 = powf(fVar2,_Y);
  (this->PitchShiftRatio).TargetValue = fVar2;
  piVar1 = &(this->PreviousFrame).ArrayMax;
  (this->PitchShiftRatio).StartingValue = fVar2;
  (this->PitchShiftRatio).CurrentValue = fVar2;
  (this->PitchShiftRatio).bIsInit = false;
  (this->PitchShiftRatio).DeltaValue = 0.0;
  (this->PreviousFrame).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (0 < this->NumChannels) {
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->PreviousFrame,this->NumChannels);
  }
  this->CurrentIndex = 0.0;
  return;
}

// UpdatePitchShift @ 144520150

void __thiscall
Audio::FLinearPitchShifter::UpdatePitchShift(FLinearPitchShifter *this,float param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = this->InterpLengthFrames;
  fVar3 = param_1 * __real_3daaaaab;
  this->InterpFramesRemaining = iVar2;
  fVar3 = powf(__real_40000000,fVar3);
  (this->PitchShiftRatio).TargetValue = fVar3;
  if (((this->PitchShiftRatio).bIsInit == false) && (iVar2 != 0)) {
    fVar1 = (this->PitchShiftRatio).CurrentValue;
    fVar4 = (fVar3 - fVar1) / (float)iVar2;
    fVar3 = fVar1;
  }
  else {
    (this->PitchShiftRatio).CurrentValue = fVar3;
    (this->PitchShiftRatio).bIsInit = false;
    fVar4 = 0.0;
  }
  (this->PitchShiftRatio).DeltaValue = fVar4;
  (this->PitchShiftRatio).StartingValue = fVar3;
  if ((float)((uint)(fVar3 - (this->PitchShiftRatio).TargetValue) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    this->InterpFramesRemaining = 0;
  }
  return;
}

