// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineMP4Encoder
// Functions: 1

// TSampleBuffer<short> @ 14de31b20

TSampleBuffer<short> * __thiscall
Audio::TSampleBuffer<short>::TSampleBuffer<short>
          (TSampleBuffer<short> *this,float *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  TSampleBuffer<short> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar12 = 0;
  this->NumChannels = param_3;
  (this->RawPCMData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawPCMData).ArrayNum = 0;
  (this->RawPCMData).ArrayMax = 0;
  this->NumSamples = param_2;
  piVar1 = &(this->RawPCMData).ArrayNum;
  this->NumFrames = param_2 / param_3;
  piVar2 = &(this->RawPCMData).ArrayMax;
  this->SampleRate = param_4;
  this->SampleDuration = (float)(param_2 / param_3) / (float)param_4;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if ((0 < param_2) && (param_2 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,param_2,(ForAnyElementType *)this,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,this->NumSamples,(ForAnyElementType *)this,piVar1,piVar2);
  fVar7 = __real_46fffe00;
  fVar6 = __real_bf800000;
  fVar5 = __real_3f800000;
  uVar13 = uVar12;
  if (0 < this->NumSamples) {
    do {
      uVar11 = (uint)uVar12;
      fVar4 = *param_1;
      if (fVar5 <= *param_1) {
        fVar4 = fVar5;
      }
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      uVar9 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TSampleBuffer<short> *)(*pcVar3)();
        return pTVar10;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      param_1 = param_1 + 1;
      *(short *)((this->RawPCMData).AllocatorInstance.Data + uVar13) = (short)(int)(fVar4 * fVar7);
      uVar13 = uVar13 + 2;
    } while ((int)(uVar11 + 1) < this->NumSamples);
  }
  return this;
}

