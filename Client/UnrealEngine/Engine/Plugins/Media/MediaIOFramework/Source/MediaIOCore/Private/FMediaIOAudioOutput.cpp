// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// FMediaIOAudioOutput @ 14d789da0

FMediaIOAudioOutput * __thiscall
FMediaIOAudioOutput::FMediaIOAudioOutput
          (FMediaIOAudioOutput *this,TSharedPtr<Audio::FPatchOutput,1> *param_1,
          FAudioOptions *param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_bfe0000000000000;
  this->NumSamplesPerFrame = 0;
  this->NumInputChannels = param_2->InNumInputChannels;
  this->NumOutputChannels = param_2->InNumOutputChannels;
  this->TargetFrameRate = param_2->InTargetFrameRate;
  this->MaxSampleLatency = param_2->InMaxSampleLatency;
  this->OutputSampleRate = param_2->InOutputSampleRate;
  (this->PatchOutput).Object = param_1->Object;
  (this->PatchOutput).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FPatchOutput *)0x0;
  uVar1 = this->OutputSampleRate;
  iVar2 = this->NumInputChannels;
  *(undefined8 *)&this->BufferReceivedDelegate = 0;
  *(undefined8 *)&(this->BufferReceivedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->BufferReceivedDelegate).field_0x10 = 0;
  dVar4 = (double)(uVar1 * iVar2) * (double)(this->TargetFrameRate).Denominator;
  this->NumSamplesPerFrame =
       -(int)((longlong)ROUND(dVar3 - (dVar4 + dVar4) / (double)(this->TargetFrameRate).Numerator)
             >> 1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// GetAudioBuffer @ 14d7a90a0

int __thiscall
FMediaIOAudioOutput::GetAudioBuffer(FMediaIOAudioOutput *this,int param_1,float *param_2)

{
  FPatchOutput *this_00;
  int iVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId64,"FAudioOutput::GetAudioBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
               ,0x40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId64);
  }
  this_00 = (this->PatchOutput).Object;
  if (this_00 == (FPatchOutput *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = Audio::FPatchOutput::MixInAudio(this_00,param_2,param_1,false);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar1;
}

// GetFloatBuffer @ 14d7aa620

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
FMediaIOAudioOutput::GetFloatBuffer
          (FMediaIOAudioOutput *this,
          TArray<float,TAlignedHeapAllocator<16>_> *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FPatchOutput *this_00;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar9;
  bool bVar10;
  
  uVar5 = param_1 + 3 & 0xfffffffc;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  uVar7 = 0;
  *piVar1 = 0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar2 = 0;
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,uVar5,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
           (longlong)(int)uVar5 << 2);
  }
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId64,"FAudioOutput::GetAudioBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOCoreAudioOutput.cpp"
               ,0x40);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId64);
  }
  this_00 = (this->PatchOutput).Object;
  if (this_00 != (FPatchOutput *)0x0) {
    uVar7 = Audio::FPatchOutput::MixInAudio(this_00,(float *)pFVar3,uVar5,false);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar7) {
    iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,uVar7 - iVar6,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4,0,
           (longlong)(int)(uVar7 - iVar6) << 2);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar6) {
      uVar5 = iVar6 - uVar7;
      if (((int)(uVar5 | uVar7) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar4)();
        return pTVar9;
      }
      if (uVar5 != 0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar7 * 4;
        iVar6 = (*piVar1 - uVar5) - uVar7;
        if (iVar6 != 0) {
          memmove(pFVar3,pFVar3 + (longlong)(int)uVar5 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar5;
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,&__return_storage_ptr__->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  return __return_storage_ptr__;
}

