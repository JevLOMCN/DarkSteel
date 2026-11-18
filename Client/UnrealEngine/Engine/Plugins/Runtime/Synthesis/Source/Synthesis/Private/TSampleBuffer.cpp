// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// TSampleBuffer<short> @ 14f0b5650

TSampleBuffer<short> * __thiscall
Audio::TSampleBuffer<short>::TSampleBuffer<short>
          (TSampleBuffer<short> *this,TSampleBuffer<short> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = &(this->RawPCMData).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->RawPCMData).ArrayMax;
  *piVar2 = 0;
  (this->RawPCMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = param_1->NumSamples;
  this->NumSamples = uVar3;
  this->NumFrames = param_1->NumFrames;
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->SampleDuration = param_1->SampleDuration;
  if (-1 < (int)uVar3) {
    if ((0 < (int)uVar3) && (uVar3 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,this->NumSamples,(ForAnyElementType *)this,piVar1,piVar2);
    memcpy((this->RawPCMData).AllocatorInstance.Data,(param_1->RawPCMData).AllocatorInstance.Data,
           (longlong)this->NumSamples * 2);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// TSampleBuffer<float> @ 14f0b5720

TSampleBuffer<float> * __thiscall
Audio::TSampleBuffer<float>::TSampleBuffer<float>
          (TSampleBuffer<float> *this,TSampleBuffer<float> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = &(this->RawPCMData).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->RawPCMData).ArrayMax;
  *piVar2 = 0;
  (this->RawPCMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = param_1->NumSamples;
  this->NumSamples = uVar3;
  this->NumFrames = param_1->NumFrames;
  this->NumChannels = param_1->NumChannels;
  this->SampleRate = param_1->SampleRate;
  this->SampleDuration = param_1->SampleDuration;
  if (-1 < (int)uVar3) {
    if ((0 < (int)uVar3) && (uVar3 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,(ForAnyElementType *)this,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,this->NumSamples,(ForAnyElementType *)this,piVar1,piVar2);
    memcpy((this->RawPCMData).AllocatorInstance.Data,(param_1->RawPCMData).AllocatorInstance.Data,
           (longlong)this->NumSamples << 2);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// GetAudioFrameAtFractionalIndexInternal @ 14f0d8bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::TSampleBuffer<float>::GetAudioFrameAtFractionalIndexInternal
          (TSampleBuffer<float> *this,float param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  fVar12 = FGenericPlatformMath::Fmod(param_1,__real_3f800000);
  iVar11 = (int)ROUND((param_1 + param_1) - __real_3f000000) >> 1;
  iVar5 = iVar11 + 1;
  iVar10 = 0;
  if (iVar5 != this->NumFrames) {
    iVar10 = iVar5;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,this->NumChannels,Default);
  iVar5 = this->NumChannels;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = iVar5 * iVar11 + uVar7;
      uVar9 = 0;
      if ((int)uVar6 < (this->RawPCMData).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((this->RawPCMData).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
      uVar9 = iVar10 * this->NumChannels + uVar7;
      uVar6 = 0;
      if ((int)uVar9 < (this->RawPCMData).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((this->RawPCMData).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      uVar6 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
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
      *(float *)((param_2->AllocatorInstance).Data + lVar8) = (fVar2 - fVar1) * fVar12 + fVar1;
      lVar8 = lVar8 + 4;
      iVar5 = this->NumChannels;
    } while ((int)uVar7 < iVar5);
  }
  return;
}

