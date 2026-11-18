// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 13

// ParseHeader @ 146bcae40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPcmAudioInfoHybrid::ParseHeader
          (FPcmAudioInfoHybrid *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  int *piVar1;
  TUniquePtr<FPcmAudioInfoHybrid::FHybridImpl,TDefaultDelete<FPcmAudioInfoHybrid::FHybridImpl>_>
  *pTVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  longlong *plVar10;
  FHybridImpl *pFVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  FHybridImpl *pFVar14;
  uint uVar15;
  void *local_res8;
  FWaveModInfo local_c8;
  longlong local_38 [2];
  
  pFVar14 = (FHybridImpl *)0x0;
  lVar5 = this->_padding_;
  this->_padding_ = (longlong)param_1;
  *(uint *)&this->_padding_ = param_2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  plVar10 = (longlong *)(**(code **)(lVar5 + 0x90))();
  if (*plVar10 == 0) {
LAB_146bcaed8:
    bVar7 = false;
  }
  else {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this);
    if (*plVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    bVar7 = FSoundWaveProxy::IsStreaming((FSoundWaveProxy *)*plVar10);
    if (!bVar7) goto LAB_146bcaed8;
    bVar7 = true;
  }
  local_res8 = (void *)0x0;
  local_c8.WaveCues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.WaveCues.ArrayNum = 0;
  local_c8.WaveCues.ArrayMax = 0;
  local_c8.WaveSampleLoops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.WaveSampleLoops.ArrayNum = 0;
  local_c8.WaveSampleLoops.ArrayMax = 0;
  local_c8.TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
  bVar7 = FWaveModInfo::ReadWaveInfo(&local_c8,param_1,param_2,(FString *)0x0,bVar7,&local_res8);
  if (bVar7) {
    if (local_res8 == (void *)0x0) {
      if (1 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        bVar7 = false;
        goto LAB_146bcb198;
      }
    }
    else {
      uVar15 = (int)local_c8.SampleDataStart - (int)param_1;
      if (uVar15 < 0x12) {
        if (1 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          bVar7 = false;
          goto LAB_146bcb198;
        }
      }
      else {
        bVar3 = (byte)*local_c8.pChannels;
        *(byte *)&this->_padding_ = bVar3;
        if (bVar3 == 0) {
          if (1 < (byte)LogAudio._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            bVar7 = false;
            goto LAB_146bcb198;
          }
        }
        else {
          uVar4 = *local_c8.pSamplesPerSec;
          if (uVar4 == 0) {
            if (1 < (byte)LogAudio._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              bVar7 = false;
              goto LAB_146bcb198;
            }
          }
          else {
            if ((char)*local_c8.pFormatTag == '\x01') {
              pFVar11 = ::operator_new(0x20);
              if (pFVar11 != (FHybridImpl *)0x0) {
                pFVar11->TotalSamplesPerChannel = 0;
                ppuVar13 = &___7FPcmImpl_AdpcmAudioInfoPrivate__6B_;
LAB_146bcb094:
                pFVar11->TotalDecodedSize = 0;
                pFVar11->_padding_ = (longlong)ppuVar13;
                pFVar11->SampleRate = uVar4;
                pFVar11->NumChannels = (uint)bVar3;
                pFVar11->Owner = this;
                pFVar14 = pFVar11;
              }
            }
            else {
              pFVar14 = (FHybridImpl *)0x0;
              if ((char)*local_c8.pFormatTag == '\x02') {
                pFVar11 = ::operator_new(0x58);
                if (pFVar11 != (FHybridImpl *)0x0) {
                  *(undefined8 *)&pFVar11->TotalSamplesPerChannel = 0;
                  ppuVar13 = &___7FAdpcmImpl_AdpcmAudioInfoPrivate__6B_;
                  *(undefined8 *)((longlong)&pFVar11[1]._padding_ + 4) = 0;
                  *(undefined8 *)((longlong)&pFVar11[1].Owner + 4) = 0;
                  pFVar11[1].TotalDecodedSize = 0;
                  pFVar11[1].SampleRate = 0;
                  pFVar11[1].TotalSamplesPerChannel = 0;
                  pFVar11[2]._padding_ = 0;
                  pFVar11[2].Owner = (FPcmAudioInfoHybrid *)0x0;
                  pFVar11[2].NumChannels = 0;
                  pFVar11[2].TotalDecodedSize = 0;
                  goto LAB_146bcb094;
                }
              }
            }
            pTVar2 = &this->Impl;
            if (pTVar2 == (TUniquePtr<FPcmAudioInfoHybrid::FHybridImpl,TDefaultDelete<FPcmAudioInfoHybrid::FHybridImpl>_>
                           *)local_38) {
              if (pFVar14 != (FHybridImpl *)0x0) {
                puVar12 = (undefined8 *)pFVar14->_padding_;
                goto LAB_146bcb0d3;
              }
            }
            else {
              pFVar11 = pTVar2->Ptr;
              pTVar2->Ptr = pFVar14;
              if (pFVar11 != (FHybridImpl *)0x0) {
                puVar12 = (undefined8 *)pFVar11->_padding_;
                pFVar14 = pFVar11;
LAB_146bcb0d3:
                (*(code *)*puVar12)(pFVar14,1);
              }
            }
            pFVar14 = pTVar2->Ptr;
            if (pFVar14 == (FHybridImpl *)0x0) {
              if (1 < (byte)LogAudio._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
                bVar7 = false;
                goto LAB_146bcb198;
              }
            }
            else {
              cVar9 = (**(code **)(pFVar14->_padding_ + 0x10))(pFVar14,&local_c8,local_res8,uVar15);
              if (cVar9 != '\0') {
                piVar1 = (int *)((longlong)&this->_padding_ + 4);
                *piVar1 = *piVar1 + uVar15;
                lVar5 = this->_padding_;
                *(undefined4 *)&this->_padding_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
                *(undefined4 *)((longlong)&this->_padding_ + 4) =
                     *(undefined4 *)((longlong)&this->_padding_ + 4);
                *(uint *)&this->_padding_ = (uint)(byte)lVar5 * pTVar2->Ptr->TotalSamplesPerChannel;
                if (param_3 != (FSoundQualityInfo *)0x0) {
                  uVar15 = *local_c8.pSamplesPerSec;
                  param_3->SampleRate = uVar15;
                  param_3->NumChannels = (uint)*local_c8.pChannels;
                  param_3->SampleDataSize =
                       (uint)(byte)this->_padding_ * pTVar2->Ptr->TotalSamplesPerChannel * 2;
                  param_3->Duration = (float)pTVar2->Ptr->TotalSamplesPerChannel / (float)uVar15;
                }
                bVar7 = true;
                goto LAB_146bcb198;
              }
            }
          }
        }
      }
    }
  }
  else if (1 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    bVar7 = false;
    goto LAB_146bcb198;
  }
  bVar7 = false;
LAB_146bcb198:
  if (local_c8.TimecodeInfo != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
    (**(code **)((longlong)local_c8.TimecodeInfo + -0x10))((longlong)local_c8.TimecodeInfo + -0x10);
  }
  if (local_c8.WaveSampleLoops.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.WaveSampleLoops.AllocatorInstance.Data);
  }
  DestructItems<FWaveCue,int>
            ((FWaveCue *)local_c8.WaveCues.AllocatorInstance.Data,local_c8.WaveCues.ArrayNum);
  if ((FWaveCue *)local_c8.WaveCues.AllocatorInstance.Data != (FWaveCue *)0x0) {
    FMemory::Free(local_c8.WaveCues.AllocatorInstance.Data);
  }
  return bVar7;
}

// CreateDecoder @ 146bcb210

bool __thiscall FPcmAudioInfoHybrid::CreateDecoder(FPcmAudioInfoHybrid *this)

{
  return true;
}

// PrepareToLoop @ 146bcb220

void __thiscall FPcmAudioInfoHybrid::PrepareToLoop(FPcmAudioInfoHybrid *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146bcb22a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Impl).Ptr)->_padding_ + 8))();
  return;
}

// GetFrameSize @ 146bcb240

int __thiscall FPcmAudioInfoHybrid::GetFrameSize(FPcmAudioInfoHybrid *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bcb24a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->Impl).Ptr)->_padding_ + 0x18))();
  return iVar1;
}

// GetMaxFrameSizeSamples @ 146bcb260

uint __thiscall FPcmAudioInfoHybrid::GetMaxFrameSizeSamples(FPcmAudioInfoHybrid *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146bcb26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Impl).Ptr)->_padding_ + 0x20))();
  return uVar1;
}

// SeekToFrame @ 146bcb280

void __thiscall FPcmAudioInfoHybrid::SeekToFrame(FPcmAudioInfoHybrid *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146bcb28a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Impl).Ptr)->_padding_ + 0x28))();
  return;
}

// SeekToTime @ 146bcb2a0

void __thiscall FPcmAudioInfoHybrid::SeekToTime(FPcmAudioInfoHybrid *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146bcb2aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Impl).Ptr)->_padding_ + 0x30))();
  return;
}

// Decode @ 146bcb2c0

FDecodeResult * __thiscall
FPcmAudioInfoHybrid::Decode
          (FPcmAudioInfoHybrid *this,FDecodeResult *__return_storage_ptr__,uchar *param_1,
          int param_2,uchar *param_3,int param_4)

{
  (**(code **)(((this->Impl).Ptr)->_padding_ + 0x38))();
  return __return_storage_ptr__;
}

// ~FPcmAudioInfoHybrid @ 146bcbe90

void __thiscall FPcmAudioInfoHybrid::~FPcmAudioInfoHybrid(FPcmAudioInfoHybrid *this)

{
  FHybridImpl *pFVar1;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FHybridImpl *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  IStreamedCompressedInfo::~IStreamedCompressedInfo((IStreamedCompressedInfo *)this);
  return;
}

// AbsPositionToChunkIndexAndOffset @ 146bcc060

bool __thiscall
FPcmAudioInfoHybrid::AbsPositionToChunkIndexAndOffset
          (FPcmAudioInfoHybrid *this,ulong64 param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  FStreamedAudioChunk *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x90))();
  if (((FSoundWaveProxy *)*plVar5 != (FSoundWaveProxy *)0x0) &&
     (bVar2 = FSoundWaveProxy::IsStreaming((FSoundWaveProxy *)*plVar5), bVar2)) {
    if ((*plVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar4 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)*plVar5);
    uVar8 = (ulonglong)(uint)this->_padding_;
    for (uVar7 = *(uint *)((longlong)&this->_padding_ + 4); (int)uVar7 < (int)uVar4;
        uVar7 = uVar7 + 1) {
      if ((*plVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar6 = FSoundWaveProxy::GetChunk((FSoundWaveProxy *)*plVar5,uVar7);
      if ((uVar8 <= param_1) && (param_1 < (longlong)pFVar6->AudioDataSize + uVar8)) {
        uVar8 = param_1 - uVar8;
        *param_2 = uVar7;
        if ((uVar8 != (uVar8 & 0xffffffff)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        *param_3 = (uint)uVar8;
        return true;
      }
      uVar8 = uVar8 + (longlong)pFVar6->AudioDataSize;
    }
  }
  return false;
}

// CreateImpl @ 146bcc1d0

TUniquePtr<FPcmAudioInfoHybrid::FHybridImpl,TDefaultDelete<FPcmAudioInfoHybrid::FHybridImpl>_>
__thiscall
FPcmAudioInfoHybrid::CreateImpl(FPcmAudioInfoHybrid *this,uchar param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined7 in_register_00000011;
  FHybridImpl *pFVar2;
  undefined4 in_stack_00000028;
  
  pFVar2 = (FHybridImpl *)CONCAT71(in_register_00000011,param_1);
  if ((param_2 & 0xffU) == 1) {
    puVar1 = ::operator_new(0x20);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = this;
      *(uint *)(puVar1 + 2) = param_3;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
      *puVar1 = &___7FPcmImpl_AdpcmAudioInfoPrivate__6B_;
      *(undefined4 *)(puVar1 + 3) = in_stack_00000028;
      goto LAB_146bcc296;
    }
  }
  else {
    if ((param_2 & 0xffU) != 2) {
      pFVar2->_padding_ = 0;
      return (TUniquePtr<FPcmAudioInfoHybrid::FHybridImpl,TDefaultDelete<FPcmAudioInfoHybrid::FHybridImpl>_>
              )pFVar2;
    }
    puVar1 = ::operator_new(0x58);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 3) = in_stack_00000028;
      puVar1[1] = this;
      *(uint *)(puVar1 + 2) = param_3;
      *puVar1 = &___7FAdpcmImpl_AdpcmAudioInfoPrivate__6B_;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      goto LAB_146bcc296;
    }
  }
  puVar1 = (undefined8 *)0x0;
LAB_146bcc296:
  pFVar2->_padding_ = (longlong)puVar1;
  return (TUniquePtr<FPcmAudioInfoHybrid::FHybridImpl,TDefaultDelete<FPcmAudioInfoHybrid::FHybridImpl>_>
          )pFVar2;
}

// IsStreaming @ 146bcd6c0

bool __thiscall FPcmAudioInfoHybrid::IsStreaming(FPcmAudioInfoHybrid *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))();
  if (*plVar4 != 0) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this);
    if (*plVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FSoundWaveProxy::IsStreaming((FSoundWaveProxy *)*plVar4);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// SeekToAbs @ 146bce300

void __thiscall
FPcmAudioInfoHybrid::SeekToAbs(FPcmAudioInfoHybrid *this,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  FStreamedAudioChunk *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  
  bVar2 = IsStreaming(this);
  if (!bVar2) {
    uVar7 = (int)this->_padding_ + (int)param_1;
    if (((uint)this->_padding_ <= uVar7) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7271813221961433195>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.h"
                           ,0x6b,"InSrcBufferOffset < SrcBufferDataSize"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
    *(int *)((longlong)&this->_padding_ + 4) = (int)param_2;
    return;
  }
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this);
  if (((FSoundWaveProxy *)*plVar4 != (FSoundWaveProxy *)0x0) &&
     (bVar2 = FSoundWaveProxy::IsStreaming((FSoundWaveProxy *)*plVar4), bVar2)) {
    if ((*plVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)*plVar4);
    uVar6 = (ulonglong)(uint)this->_padding_;
    for (uVar7 = *(uint *)((longlong)&this->_padding_ + 4); (int)uVar7 < (int)uVar3;
        uVar7 = uVar7 + 1) {
      if ((*plVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = FSoundWaveProxy::GetChunk((FSoundWaveProxy *)*plVar4,uVar7);
      if ((uVar6 <= param_1) && (param_1 < (longlong)pFVar5->AudioDataSize + uVar6)) {
        uVar6 = param_1 - uVar6;
        if ((uVar6 != (uVar6 & 0xffffffff)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this);
        if (*plVar4 != 0) {
          plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this);
          if ((*plVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          bVar2 = FSoundWaveProxy::IsStreaming((FSoundWaveProxy *)*plVar4);
          if (bVar2) {
            plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this);
            if ((*plVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar3 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)*plVar4);
            if (uVar7 < uVar3) goto LAB_146bce51b;
          }
        }
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7271813221961433185>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdpcmAudioDecoder\\Module\\Private\\PcmAudioInfoHybrid.h"
                           ,0x61,
                           "GetStreamingSoundWave().IsValid() && GetStreamingSoundWave()->IsStreaming() && InStreamSeekBlockIndex < GetStreamingSoundWave()->GetNumChunks()"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
LAB_146bce51b:
        LOCK();
        *(uint *)&this->_padding_ = uVar7;
        UNLOCK();
        *(int *)((longlong)&this->_padding_ + 4) = (int)uVar6;
        *(int *)((longlong)&this->_padding_ + 4) = (int)param_2;
        return;
      }
      uVar6 = uVar6 + (longlong)pFVar5->AudioDataSize;
    }
  }
  return;
}

