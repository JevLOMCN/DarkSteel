// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 8

// GetDesiredNumSamplesToRenderPerCallback @ 146557550

int __thiscall
Audio::FSoundWaveScrubberGenerator::GetDesiredNumSamplesToRenderPerCallback
          (FSoundWaveScrubberGenerator *this)

{
  return this->NumChannels << 8;
}

// Init @ 14655d9d0

void __thiscall
Audio::FSoundWaveScrubberGenerator::Init
          (FSoundWaveScrubberGenerator *this,TSharedPtr<FSoundWaveProxy,1> *param_1,float param_2,
          int param_3,float param_4)

{
  TSharedPtr<FSoundWaveProxy,1> local_18;
  
  this->NumChannels = param_3;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSoundWaveScrubber::Init(&this->SoundWaveScrubber,&local_18,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsFinished @ 1465612f0

bool __thiscall Audio::FSoundWaveScrubberGenerator::IsFinished(FSoundWaveScrubberGenerator *this)

{
  return false;
}

// OnGenerateAudio @ 146563820

int __thiscall
Audio::FSoundWaveScrubberGenerator::OnGenerateAudio
          (FSoundWaveScrubberGenerator *this,float *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<float,int> local_18;
  
  memset(param_1,0,(longlong)param_2 << 2);
  local_18.DataPtr = param_1;
  local_18.ArrayNum = param_2;
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FSoundWaveScrubber::RenderAudio(&this->SoundWaveScrubber,&local_18);
  return iVar3;
}

// SetGrainDurationRange @ 146572e80

void __thiscall
Audio::FSoundWaveScrubberGenerator::SetGrainDurationRange
          (FSoundWaveScrubberGenerator *this,TVector2<double> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lpCriticalSection = &(this->SoundWaveScrubber).CritSect;
  dVar1 = *(double *)&param_1->field0_0x0;
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  uVar6 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar5 = SUB84(dVar2,0);
  uVar7 = (int)((ulonglong)dVar2 >> 0x20);
  if (__real_3fe0000000000000 <= dVar2) {
    uVar5 = SUB84(__real_3fe0000000000000,0);
    uVar7 = uVar6;
  }
  uVar3 = SUB84(dVar1,0);
  uVar4 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_3fe0000000000000 <= dVar1) {
    uVar3 = SUB84(__real_3fe0000000000000,0);
    uVar4 = uVar6;
  }
  uVar6 = (undefined4)((ulonglong)__real_3fa99999a0000000 >> 0x20);
  if ((double)CONCAT44(uVar7,uVar5) <= __real_3fa99999a0000000) {
    uVar5 = SUB84(__real_3fa99999a0000000,0);
    uVar7 = uVar6;
  }
  if ((double)CONCAT44(uVar4,uVar3) <= __real_3fa99999a0000000) {
    uVar3 = SUB84(__real_3fa99999a0000000,0);
    uVar4 = uVar6;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SoundWaveScrubber).TargetGrainDurationRange.field0_0x0._s_0.X =
         (double)CONCAT44(uVar4,uVar3);
    (this->SoundWaveScrubber).TargetGrainDurationRange.field0_0x0._s_0.Y =
         (double)CONCAT44(uVar7,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000146572efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetIsScrubbing @ 146572fc0

void __thiscall
Audio::FSoundWaveScrubberGenerator::SetIsScrubbing(FSoundWaveScrubberGenerator *this,bool param_1)

{
  (this->SoundWaveScrubber).bIsScrubbing = param_1;
  return;
}

// SetIsScrubbingWhileStationary @ 146573000

void __thiscall
Audio::FSoundWaveScrubberGenerator::SetIsScrubbingWhileStationary
          (FSoundWaveScrubberGenerator *this,bool param_1)

{
  (this->SoundWaveScrubber).bIsScrubbingWhileStationary = param_1;
  return;
}

// SetPlayheadTime @ 1465741b0

void __thiscall
Audio::FSoundWaveScrubberGenerator::SetPlayheadTime(FSoundWaveScrubberGenerator *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &(this->SoundWaveScrubber).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar1 = FGenericPlatformMath::Fmod(param_1,(this->SoundWaveScrubber).SourceFileDurationSeconds);
    (this->SoundWaveScrubber).TargetPlayheadTimeSeconds = fVar1;
                    /* WARNING: Could not recover jumptable at 0x000146574205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

