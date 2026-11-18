// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// ProcessChunkImpl<short> @ 1444ebca0

int __thiscall
Audio::FSampleRateConverter::ProcessChunkImpl<short>
          (FSampleRateConverter *this,short *param_1,int param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float local_68 [16];
  
  pTVar8 = param_4;
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  fVar7 = __real_38000100;
  fVar6 = __real_3f800000;
  iVar10 = this->NumChannels;
  if ((iVar10 == 0) || (param_2 < iVar10)) {
    return 0;
  }
  iVar10 = param_2 / iVar10;
  iVar12 = this->NextFrameIndex;
  piVar2 = &this->NextFrameIndex;
  param_4._0_4_ = 0;
  while (iVar12 < iVar10) {
    iVar12 = this->NumChannels;
    uVar14 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      do {
        if (this->bUsePreviousChunkFrame == false) {
          local_68[0] = (float)(int)param_1[(int)(iVar12 * this->CurrentFrameIndex + uVar14)] *
                        fVar7;
        }
        else {
          uVar11 = 0;
          if ((int)uVar14 < (this->PreviousChunkFrame).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          local_68[0] = *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar13);
        }
        pFVar4 = (pTVar8->AllocatorInstance).Data;
        local_68[0] = ((float)(int)param_1[(int)(this->NumChannels * *piVar2 + uVar14)] * fVar7 -
                      local_68[0]) * this->FrameAlpha + local_68[0];
        if (((pFVar4 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        iVar12 = pTVar8->ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,piVar1);
        }
        pTVar8->ArrayNum = iVar12 + 1;
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 4;
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_68[0];
        iVar12 = this->NumChannels;
      } while ((int)uVar14 < iVar12);
    }
    param_4._0_4_ = (int)param_4 + 1;
    fVar16 = this->SampleRateRatio + this->FrameAlpha;
    this->FrameAlpha = fVar16;
    if (this->CurrentSampleRatioFrameTick < this->NumSampleRatioFrameTicks) {
      fVar15 = this->SampleRateRatio + this->SampleRatioDelta;
      this->CurrentSampleRatioFrameTick = this->CurrentSampleRatioFrameTick + 1;
    }
    else {
      fVar15 = this->TargetSampleRateRatio;
    }
    iVar12 = (int)fVar16;
    this->SampleRateRatio = fVar15;
    if (0 < iVar12) {
      this->CurrentFrameIndex = this->CurrentFrameIndex + iVar12;
      this->bUsePreviousChunkFrame = false;
      *piVar2 = this->CurrentFrameIndex + 1;
      fVar16 = fVar16 - (float)iVar12;
      this->FrameAlpha = fVar16;
      if (((fVar6 <= fVar16) || (fVar16 < 0.0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FrameAlpha < 1.0f && FrameAlpha >= 0.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleRateConverter.cpp"
                             ,0x93,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
    }
    iVar12 = *piVar2;
  }
  if ((this->CurrentFrameIndex < iVar10) && (iVar10 <= iVar12)) {
    uVar14 = 0;
    this->bUsePreviousChunkFrame = true;
    if (0 < this->NumChannels) {
      lVar13 = 0;
      do {
        sVar3 = param_1[this->CurrentFrameIndex];
        uVar11 = 0;
        if ((int)uVar14 < (this->PreviousChunkFrame).ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        uVar14 = uVar14 + 1;
        *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar13) =
             (float)(int)sVar3 * fVar7;
        lVar13 = lVar13 + 4;
      } while ((int)uVar14 < this->NumChannels);
    }
  }
  iVar12 = this->CurrentFrameIndex;
  if (iVar10 <= iVar12) {
    iVar12 = iVar12 - iVar10;
    this->CurrentFrameIndex = iVar12;
    this->NextFrameIndex = iVar12 + 1;
  }
  return (int)param_4;
}

// ProcessChunkImpl<float> @ 1444ec080

int __thiscall
Audio::FSampleRateConverter::ProcessChunkImpl<float>
          (FSampleRateConverter *this,float *param_1,int param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float local_58 [12];
  
  pTVar6 = param_4;
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  fVar3 = __real_3f800000;
  iVar8 = this->NumChannels;
  if ((iVar8 == 0) || (param_2 < iVar8)) {
    return 0;
  }
  iVar8 = param_2 / iVar8;
  iVar10 = this->NextFrameIndex;
  piVar2 = &this->NextFrameIndex;
  param_4._0_4_ = 0;
  while (iVar10 < iVar8) {
    iVar10 = this->NumChannels;
    uVar12 = 0;
    if (0 < iVar10) {
      lVar11 = 0;
      do {
        if (this->bUsePreviousChunkFrame == false) {
          local_58[0] = param_1[(int)(iVar10 * this->CurrentFrameIndex + uVar12)];
        }
        else {
          uVar9 = 0;
          if ((int)uVar12 < (this->PreviousChunkFrame).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          local_58[0] = *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar11);
        }
        pFVar4 = (pTVar6->AllocatorInstance).Data;
        local_58[0] = (param_1[(int)(this->NumChannels * *piVar2 + uVar12)] - local_58[0]) *
                      this->FrameAlpha + local_58[0];
        if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        iVar10 = pTVar6->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar1);
        }
        pTVar6->ArrayNum = iVar10 + 1;
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 4;
        *(float *)((pTVar6->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58[0];
        iVar10 = this->NumChannels;
      } while ((int)uVar12 < iVar10);
    }
    param_4._0_4_ = (int)param_4 + 1;
    fVar14 = this->SampleRateRatio + this->FrameAlpha;
    this->FrameAlpha = fVar14;
    if (this->CurrentSampleRatioFrameTick < this->NumSampleRatioFrameTicks) {
      fVar13 = this->SampleRateRatio + this->SampleRatioDelta;
      this->CurrentSampleRatioFrameTick = this->CurrentSampleRatioFrameTick + 1;
    }
    else {
      fVar13 = this->TargetSampleRateRatio;
    }
    iVar10 = (int)fVar14;
    this->SampleRateRatio = fVar13;
    if (0 < iVar10) {
      this->CurrentFrameIndex = this->CurrentFrameIndex + iVar10;
      this->bUsePreviousChunkFrame = false;
      *piVar2 = this->CurrentFrameIndex + 1;
      fVar14 = fVar14 - (float)iVar10;
      this->FrameAlpha = fVar14;
      if (((fVar3 <= fVar14) || (fVar14 < 0.0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FrameAlpha < 1.0f && FrameAlpha >= 0.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleRateConverter.cpp"
                             ,0x93,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
    }
    iVar10 = *piVar2;
  }
  if ((this->CurrentFrameIndex < iVar8) && (iVar8 <= iVar10)) {
    uVar12 = 0;
    this->bUsePreviousChunkFrame = true;
    if (0 < this->NumChannels) {
      lVar11 = 0;
      do {
        fVar3 = param_1[this->CurrentFrameIndex];
        uVar9 = 0;
        if ((int)uVar12 < (this->PreviousChunkFrame).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar12 = uVar12 + 1;
        *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar11) = fVar3;
        lVar11 = lVar11 + 4;
      } while ((int)uVar12 < this->NumChannels);
    }
  }
  iVar10 = this->CurrentFrameIndex;
  if (iVar8 <= iVar10) {
    iVar10 = iVar10 - iVar8;
    this->CurrentFrameIndex = iVar10;
    this->NextFrameIndex = iVar10 + 1;
  }
  return (int)param_4;
}

// ~FSampleRateConverter @ 1444f45f0

void __thiscall Audio::FSampleRateConverter::~FSampleRateConverter(FSampleRateConverter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSampleRateConverter_Audio__6B_;
  pFVar1 = (this->PreviousChunkFrame).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISampleRateConverter_Audio__6B_;
  return;
}

// Init @ 1445079f0

void __thiscall
Audio::FSampleRateConverter::Init(FSampleRateConverter *this,float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  this->NextFrameIndex = 1;
  this->FrameAlpha = 0.0;
  this->CurrentFrameIndex = 0;
  (**(code **)(this->_padding_ + 0x10))();
  this->NumChannels = param_2;
  piVar1 = &(this->PreviousChunkFrame).ArrayMax;
  this->bUsePreviousChunkFrame = false;
  piVar2 = &(this->PreviousChunkFrame).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PreviousChunkFrame).AllocatorInstance,0,piVar1);
  }
  iVar3 = this->NumChannels;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->PreviousChunkFrame).AllocatorInstance,piVar2,piVar1);
  memset((this->PreviousChunkFrame).AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)iVar3 << 2);
  return;
}

// ProcessChunk @ 144513be0

int __thiscall
Audio::FSampleRateConverter::ProcessChunk
          (FSampleRateConverter *this,short *param_1,int param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float afStack_68 [16];
  
  pTVar8 = param_4;
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  fVar7 = __real_38000100;
  fVar6 = __real_3f800000;
  iVar10 = this->NumChannels;
  if ((iVar10 == 0) || (param_2 < iVar10)) {
    return 0;
  }
  iVar10 = param_2 / iVar10;
  iVar12 = this->NextFrameIndex;
  piVar2 = &this->NextFrameIndex;
  param_4._0_4_ = 0;
  while (iVar12 < iVar10) {
    iVar12 = this->NumChannels;
    uVar14 = 0;
    if (0 < iVar12) {
      lVar13 = 0;
      do {
        if (this->bUsePreviousChunkFrame == false) {
          afStack_68[0] =
               (float)(int)param_1[(int)(iVar12 * this->CurrentFrameIndex + uVar14)] * fVar7;
        }
        else {
          uVar11 = 0;
          if ((int)uVar14 < (this->PreviousChunkFrame).ArrayNum) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            iVar10 = (*pcVar5)();
            return iVar10;
          }
          afStack_68[0] = *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar13);
        }
        pFVar4 = (pTVar8->AllocatorInstance).Data;
        afStack_68[0] =
             ((float)(int)param_1[(int)(this->NumChannels * *piVar2 + uVar14)] * fVar7 -
             afStack_68[0]) * this->FrameAlpha + afStack_68[0];
        if (((pFVar4 <= (FScriptContainerElement *)afStack_68) &&
            ((FScriptContainerElement *)afStack_68 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        iVar12 = pTVar8->ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar8->AllocatorInstance,piVar1);
        }
        pTVar8->ArrayNum = iVar12 + 1;
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 4;
        *(float *)((pTVar8->AllocatorInstance).Data + (longlong)iVar12 * 4) = afStack_68[0];
        iVar12 = this->NumChannels;
      } while ((int)uVar14 < iVar12);
    }
    param_4._0_4_ = (int)param_4 + 1;
    fVar16 = this->SampleRateRatio + this->FrameAlpha;
    this->FrameAlpha = fVar16;
    if (this->CurrentSampleRatioFrameTick < this->NumSampleRatioFrameTicks) {
      fVar15 = this->SampleRateRatio + this->SampleRatioDelta;
      this->CurrentSampleRatioFrameTick = this->CurrentSampleRatioFrameTick + 1;
    }
    else {
      fVar15 = this->TargetSampleRateRatio;
    }
    iVar12 = (int)fVar16;
    this->SampleRateRatio = fVar15;
    if (0 < iVar12) {
      this->CurrentFrameIndex = this->CurrentFrameIndex + iVar12;
      this->bUsePreviousChunkFrame = false;
      *piVar2 = this->CurrentFrameIndex + 1;
      fVar16 = fVar16 - (float)iVar12;
      this->FrameAlpha = fVar16;
      if (((fVar6 <= fVar16) || (fVar16 < 0.0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FrameAlpha < 1.0f && FrameAlpha >= 0.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleRateConverter.cpp"
                             ,0x93,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
    }
    iVar12 = *piVar2;
  }
  if ((this->CurrentFrameIndex < iVar10) && (iVar10 <= iVar12)) {
    uVar14 = 0;
    this->bUsePreviousChunkFrame = true;
    if (0 < this->NumChannels) {
      lVar13 = 0;
      do {
        sVar3 = param_1[this->CurrentFrameIndex];
        uVar11 = 0;
        if ((int)uVar14 < (this->PreviousChunkFrame).ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          iVar10 = (*pcVar5)();
          return iVar10;
        }
        uVar14 = uVar14 + 1;
        *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar13) =
             (float)(int)sVar3 * fVar7;
        lVar13 = lVar13 + 4;
      } while ((int)uVar14 < this->NumChannels);
    }
  }
  iVar12 = this->CurrentFrameIndex;
  if (iVar10 <= iVar12) {
    iVar12 = iVar12 - iVar10;
    this->CurrentFrameIndex = iVar12;
    this->NextFrameIndex = iVar12 + 1;
  }
  return (int)param_4;
}

// ProcessChunk @ 144513bf0

int __thiscall
Audio::FSampleRateConverter::ProcessChunk
          (FSampleRateConverter *this,float *param_1,int param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float afStack_58 [12];
  
  pTVar6 = param_4;
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  fVar3 = __real_3f800000;
  iVar8 = this->NumChannels;
  if ((iVar8 == 0) || (param_2 < iVar8)) {
    return 0;
  }
  iVar8 = param_2 / iVar8;
  iVar10 = this->NextFrameIndex;
  piVar2 = &this->NextFrameIndex;
  param_4._0_4_ = 0;
  while (iVar10 < iVar8) {
    iVar10 = this->NumChannels;
    uVar12 = 0;
    if (0 < iVar10) {
      lVar11 = 0;
      do {
        if (this->bUsePreviousChunkFrame == false) {
          afStack_58[0] = param_1[(int)(iVar10 * this->CurrentFrameIndex + uVar12)];
        }
        else {
          uVar9 = 0;
          if ((int)uVar12 < (this->PreviousChunkFrame).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          afStack_58[0] = *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar11);
        }
        pFVar4 = (pTVar6->AllocatorInstance).Data;
        afStack_58[0] =
             (param_1[(int)(this->NumChannels * *piVar2 + uVar12)] - afStack_58[0]) *
             this->FrameAlpha + afStack_58[0];
        if (((pFVar4 <= (FScriptContainerElement *)afStack_58) &&
            ((FScriptContainerElement *)afStack_58 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        iVar10 = pTVar6->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar1);
        }
        pTVar6->ArrayNum = iVar10 + 1;
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 4;
        *(float *)((pTVar6->AllocatorInstance).Data + (longlong)iVar10 * 4) = afStack_58[0];
        iVar10 = this->NumChannels;
      } while ((int)uVar12 < iVar10);
    }
    param_4._0_4_ = (int)param_4 + 1;
    fVar14 = this->SampleRateRatio + this->FrameAlpha;
    this->FrameAlpha = fVar14;
    if (this->CurrentSampleRatioFrameTick < this->NumSampleRatioFrameTicks) {
      fVar13 = this->SampleRateRatio + this->SampleRatioDelta;
      this->CurrentSampleRatioFrameTick = this->CurrentSampleRatioFrameTick + 1;
    }
    else {
      fVar13 = this->TargetSampleRateRatio;
    }
    iVar10 = (int)fVar14;
    this->SampleRateRatio = fVar13;
    if (0 < iVar10) {
      this->CurrentFrameIndex = this->CurrentFrameIndex + iVar10;
      this->bUsePreviousChunkFrame = false;
      *piVar2 = this->CurrentFrameIndex + 1;
      fVar14 = fVar14 - (float)iVar10;
      this->FrameAlpha = fVar14;
      if (((fVar3 <= fVar14) || (fVar14 < 0.0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FrameAlpha < 1.0f && FrameAlpha >= 0.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SampleRateConverter.cpp"
                             ,0x93,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
    }
    iVar10 = *piVar2;
  }
  if ((this->CurrentFrameIndex < iVar8) && (iVar8 <= iVar10)) {
    uVar12 = 0;
    this->bUsePreviousChunkFrame = true;
    if (0 < this->NumChannels) {
      lVar11 = 0;
      do {
        fVar3 = param_1[this->CurrentFrameIndex];
        uVar9 = 0;
        if ((int)uVar12 < (this->PreviousChunkFrame).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        uVar12 = uVar12 + 1;
        *(float *)((this->PreviousChunkFrame).AllocatorInstance.Data + lVar11) = fVar3;
        lVar11 = lVar11 + 4;
      } while ((int)uVar12 < this->NumChannels);
    }
  }
  iVar10 = this->CurrentFrameIndex;
  if (iVar8 <= iVar10) {
    iVar10 = iVar10 - iVar8;
    this->CurrentFrameIndex = iVar10;
    this->NextFrameIndex = iVar10 + 1;
  }
  return (int)param_4;
}

// ProcessFullbuffer @ 144513c60

int __thiscall
Audio::FSampleRateConverter::ProcessFullbuffer
          (FSampleRateConverter *this,short *param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  
  iVar1 = ProcessChunkImpl<short>(this,param_1,param_2,param_2 / this->NumChannels,param_3);
  return iVar1;
}

// ProcessFullbuffer @ 144513c90

int __thiscall
Audio::FSampleRateConverter::ProcessFullbuffer
          (FSampleRateConverter *this,float *param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  
  iVar1 = ProcessChunkImpl<float>(this,param_1,param_2,param_2 / this->NumChannels,param_3);
  return iVar1;
}

// SetSampleRateRatio @ 14451c7a0

void __thiscall
Audio::FSampleRateConverter::SetSampleRateRatio
          (FSampleRateConverter *this,float param_1,int param_2)

{
  int iVar1;
  
  this->CurrentSampleRatioFrameTick = 0;
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  this->NumSampleRatioFrameTicks = iVar1;
  if (iVar1 == 0) {
    this->SampleRateRatio = param_1;
    this->TargetSampleRateRatio = param_1;
    this->SampleRatioDelta = 0.0;
    return;
  }
  this->TargetSampleRateRatio = param_1;
  this->SampleRatioDelta = (param_1 - this->SampleRateRatio) / (float)iVar1;
  return;
}

