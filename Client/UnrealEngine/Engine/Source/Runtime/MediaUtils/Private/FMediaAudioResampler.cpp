// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 6

// FMediaAudioResampler @ 146bf2430

FMediaAudioResampler * __thiscall
FMediaAudioResampler::FMediaAudioResampler(FMediaAudioResampler *this)

{
  this->FrameIndex = -0x80000000;
  (this->Input).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Input).ArrayNum = 0;
  (this->Input).ArrayMax = 0;
  (this->InputDuration).Ticks = 0;
  this->InputFrames = 0;
  this->InputSampleRate = 0;
  this->FrameAlpha = 0.0;
  this->LastRate = 0.0;
  this->LastFrameIndex = -0x80000000;
  (this->InputTime).Time.Ticks = 0;
  (this->InputTime).SequenceIndex = 0;
  (this->InputTime).LoopIndex = 0;
  this->OutputChannels = 0;
  this->OutputSampleRate = 0;
  return this;
}

// ClearInput @ 146bf6690

void __thiscall FMediaAudioResampler::ClearInput(FMediaAudioResampler *this)

{
  (this->Input).ArrayNum = 0;
  if ((this->Input).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Input).AllocatorInstance,0,&(this->Input).ArrayMax);
  }
  (this->InputDuration).Ticks = 0;
  this->InputFrames = 0;
  this->InputSampleRate = 0;
  (this->InputTime).Time.Ticks = 0;
  (this->InputTime).SequenceIndex = 0;
  (this->InputTime).LoopIndex = 0;
  this->LastRate = 0.0;
  return;
}

// Flush @ 146bfc8a0

void __thiscall FMediaAudioResampler::Flush(FMediaAudioResampler *this)

{
  (this->Input).ArrayNum = 0;
  if ((this->Input).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Input).AllocatorInstance,0,&(this->Input).ArrayMax);
  }
  (this->InputDuration).Ticks = 0;
  this->InputFrames = 0;
  this->InputSampleRate = 0;
  (this->InputTime).Time.Ticks = 0;
  (this->InputTime).SequenceIndex = 0;
  (this->InputTime).LoopIndex = 0;
  this->FrameAlpha = 0.0;
  this->FrameIndex = -0x80000000;
  this->LastFrameIndex = -0x80000000;
  this->LastRate = 0.0;
  return;
}

// Generate @ 146bfccd0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FMediaAudioResampler::Generate
          (FMediaAudioResampler *this,float *param_1,FMediaTimeStamp *param_2,uint param_3,
          float param_4,FTimespan param_5,TMediaSampleSource<IMediaAudioSample> *param_6,
          uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  long64 lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  atomic<unsigned_char> *paVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  FMediaTimeStamp *this_00;
  float fVar26;
  double dVar27;
  uint local_158;
  TSharedPtr<IMediaAudioSample,1> local_148;
  uint *local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  longlong lStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  longlong lStack_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  FString local_f0;
  FString local_e0;
  undefined8 local_d0;
  longlong lStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  
  *param_7 = 0xffffffff;
  dVar10 = __real_bff8000000000000;
  dVar9 = __real_bfe0000000000000;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_3f800000;
  if (((param_3 == 0) || (param_1 == (float *)0x0)) || (this->OutputSampleRate == 0)) {
    return 0;
  }
  local_158 = 0;
  if (param_3 != 0) {
    puVar23 = &this->InputFrames;
    do {
      this_00 = &this->InputTime;
      if (this->LastFrameIndex == -0x80000000) {
        lVar25 = (this->InputDuration).Ticks;
        lVar24 = (this_00->Time).Ticks;
        lVar7 = (this_00->Time).Ticks;
        iVar14 = (this->InputTime).SequenceIndex;
        iVar4 = (this->InputTime).LoopIndex;
        local_120 = CONCAT31(local_120._1_3_,1);
        local_130 = 1;
        dVar27 = (double)lVar25;
        iVar12 = -1;
        if (0.0 < param_4) {
          iVar12 = 1;
        }
        lVar22 = lVar24 - (longlong)((double)(longlong)(dVar27 * dVar10) * (double)iVar12);
        local_c0 = local_120;
        uStack_bc = uStack_11c;
        lVar24 = lVar24 - (longlong)((double)(longlong)(dVar27 * dVar9) * (double)iVar12);
        local_d0 = CONCAT71(uStack_12f,1);
        local_148.Object = (IMediaAudioSample *)0x0;
        local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        lStack_128 = lVar24;
        lStack_118 = lVar22;
        lStack_c8 = lVar24;
        uStack_b8 = lVar22;
        (**(code **)*param_6)(param_6,&local_148);
        bVar11 = SetInput(this,&local_148);
        if (!bVar11) {
          (this_00->Time).Ticks = lVar7;
          (this->InputTime).SequenceIndex = iVar14;
          (this->InputTime).LoopIndex = iVar4;
          (this->InputDuration).Ticks = lVar25;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_148.SharedReferenceCount.ReferenceController);
          return local_158;
        }
        local_f8 = (this_00->Time).Ticks;
        local_100 = 1;
        if ((lVar24 < local_f8) || (lVar24 <= local_f8)) {
          local_110 = 1;
          local_108 = local_f8;
          if (local_f8 < lVar22) {
            plVar16 = &uStack_b8;
          }
          else {
            plVar16 = &local_108;
            if (local_f8 <= lVar22) {
              plVar16 = &uStack_b8;
            }
          }
          if (*plVar16 != lVar22) goto LAB_146bfcec2;
        }
        else {
LAB_146bfcec2:
          *param_7 = local_158;
        }
        if (6 < (byte)LogMediaUtils._0_1_) {
          if (local_148.Object == (IMediaAudioSample *)0x0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return uVar13;
            }
          }
          (**(code **)((longlong)*local_148.Object + 0x20))();
          FTimespan::ToString(&this_00->Time,&local_e0);
          FTimespan::ToString(&param_5,&local_f0);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
        puVar23 = &this->InputFrames;
      }
      lVar25 = this->FrameIndex;
      if ((lVar25 < 0) || (uVar20 = *puVar23, lVar25 < (longlong)(ulonglong)uVar20)) {
        iVar14 = (this->InputTime).LoopIndex;
        iVar4 = (this->InputTime).SequenceIndex;
        (param_2->Time).Ticks =
             (longlong)
             ((((float)lVar25 + this->FrameAlpha) / (float)*puVar23) *
             (float)(this->InputDuration).Ticks) + (this_00->Time).Ticks;
        param_2->SequenceIndex = iVar4;
        param_2->LoopIndex = iVar14;
        local_138 = puVar23;
        if (param_4 * this->LastRate < 0.0) {
          AlgoImpl::Reverse<float>
                    ((float *)(this->Input).AllocatorInstance.Data,(this->Input).ArrayNum);
          uVar20 = *puVar23;
          puVar23 = &this->InputFrames;
          this->LastRate = param_4;
          this->FrameIndex = ((ulonglong)uVar20 - this->FrameIndex) + -1;
          this->FrameAlpha = fVar8 - this->FrameAlpha;
        }
        uVar18 = this->FrameIndex;
        if (uVar18 != this->LastFrameIndex) {
          pFVar5 = (this->Input).AllocatorInstance.Data;
          uVar20 = this->OutputChannels;
          uVar17 = (ulonglong)uVar20;
          if (uVar18 == 0xffffffffffffffff) {
            uVar18 = 0;
            if ((uint)(this->Input).ArrayNum < uVar20) {
              pcVar15 = "(uint32)(Input.Num()) >= OutputChannels";
              iVar14 = 0x19a;
              paVar19 = &bGEnsureHasExecuted<_3535447259355283046>;
              goto LAB_146bfd30a;
            }
            if (uVar20 != 0) {
              do {
                this->NextFrame[uVar18] = *(float *)(pFVar5 + uVar18 * 4);
                uVar20 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar20;
              } while (uVar20 < this->OutputChannels);
            }
          }
          else {
            lVar25 = (longlong)(this->Input).ArrayNum;
            if (uVar18 == *puVar23 - 1) {
              if (lVar25 < (longlong)((uVar18 + 1) * uVar17)) {
                pcVar15 = "Input.Num() >= ((FrameIndex * OutputChannels) + OutputChannels)";
                iVar14 = 0x1a8;
                paVar19 = &bGEnsureHasExecuted<_3535447259355283032>;
LAB_146bfd30a:
                bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (paVar19,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaAudioResampler.cpp"
                                    ,iVar14,pcVar15);
                if (!bVar11) {
                  ClearInput(this);
                  return local_158;
                }
                pcVar6 = (code *)swi(3);
                uVar13 = (*pcVar6)();
                return uVar13;
              }
              uVar21 = 0;
              if (uVar20 != 0) {
                do {
                  this->CurrentFrame[uVar21] = *(float *)(pFVar5 + uVar21 * 4 + uVar17 * uVar18 * 4)
                  ;
                  uVar20 = (int)uVar21 + 1;
                  uVar21 = (ulonglong)uVar20;
                } while (uVar20 < this->OutputChannels);
              }
              this->LastFrameIndex = -0x80000000;
              this->FrameIndex = -1;
              puVar23 = local_138;
              goto LAB_146bfd298;
            }
            if (lVar25 < (longlong)((uVar18 + 2) * uVar17)) {
              pcVar15 = 
              "Input.Num() >= ((FrameIndex * OutputChannels) + OutputChannels + OutputChannels)";
              iVar14 = 0x1bd;
              paVar19 = &bGEnsureHasExecuted<_3535447259355283011>;
              goto LAB_146bfd30a;
            }
            lVar25 = uVar17 * uVar18;
            uVar18 = 0;
            if (uVar20 != 0) {
              do {
                this->CurrentFrame[uVar18] = *(float *)(pFVar5 + uVar18 * 4 + lVar25 * 4);
                uVar20 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar20;
                uVar17 = (ulonglong)this->OutputChannels;
              } while (uVar20 < this->OutputChannels);
            }
            uVar18 = 0;
            if ((int)uVar17 != 0) {
              do {
                this->NextFrame[uVar18] = *(float *)(pFVar5 + uVar18 * 4 + uVar17 * 4 + lVar25 * 4);
                uVar20 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar20;
              } while (uVar20 < this->OutputChannels);
            }
          }
          this->LastFrameIndex = this->FrameIndex;
        }
        uVar18 = 0;
        if (this->OutputChannels != 0) {
          do {
            pfVar3 = this->NextFrame + uVar18;
            pfVar1 = this->CurrentFrame + uVar18;
            pfVar2 = this->CurrentFrame + uVar18;
            uVar20 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar20;
            *param_1 = (*pfVar3 - *pfVar1) * this->FrameAlpha + *pfVar2;
            param_1 = param_1 + 1;
          } while (uVar20 < this->OutputChannels);
        }
        local_158 = local_158 + 1;
        fVar26 = ((float)((uint)param_4 & uVar13) * (float)this->InputSampleRate) /
                 (float)this->OutputSampleRate + this->FrameAlpha;
        iVar14 = (int)fVar26;
        this->FrameIndex = (longlong)iVar14 + this->FrameIndex;
        fVar26 = fVar26 - (float)iVar14;
        this->FrameAlpha = fVar26;
        if (fVar26 < 0.0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FrameAlpha >= 0.0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaAudioResampler.cpp"
                              ,0x1e4,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return uVar13;
          }
        }
        puVar23 = local_138;
        if (fVar8 < this->FrameAlpha || fVar8 == this->FrameAlpha) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("FrameAlpha < 1.0f",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaAudioResampler.cpp"
                              ,0x1e5,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return uVar13;
          }
        }
      }
      else {
        this->LastFrameIndex = -0x80000000;
        this->FrameIndex = lVar25 - (ulonglong)uVar20;
        puVar23 = &this->InputFrames;
      }
LAB_146bfd298:
    } while (local_158 < param_3);
  }
  return local_158;
}

// Initialize @ 146c01d30

void __thiscall
FMediaAudioResampler::Initialize(FMediaAudioResampler *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((1 < param_1 - 1) && (param_1 != 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOutputChannels == 1) || (InOutputChannels == 2) || (InOutputChannels == 8)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaAudioResampler.cpp"
                       ,0x1ee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->OutputSampleRate = param_2;
  this->FrameAlpha = 0.0;
  this->OutputChannels = param_1;
  return;
}

// SetInput @ 146c0c480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FMediaAudioResampler::SetInput(FMediaAudioResampler *this,TSharedPtr<IMediaAudioSample,1> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  FScriptContainerElement FVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  long64 lVar21;
  undefined6 uVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  bool bVar34;
  undefined1 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  FScriptContainerElement *_Src;
  long64 *plVar40;
  IMediaAudioSample *pIVar41;
  ulonglong uVar42;
  ForAnyElementType FVar43;
  ulonglong uVar44;
  int iVar45;
  longlong lVar46;
  uint uVar47;
  short sVar48;
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  int local_a8 [2];
  FScriptContainerElement *local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  FScriptContainerElement *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<short_const_,int> local_68;
  undefined1 local_58 [24];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined2 uVar61;
  
  pTVar1 = &this->Input;
  piVar2 = &(this->Input).ArrayMax;
  (this->Input).ArrayNum = 0;
  piVar3 = &(this->Input).ArrayNum;
  if ((this->Input).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  (this->InputDuration).Ticks = 0;
  this->InputFrames = 0;
  this->InputSampleRate = 0;
  (this->InputTime).Time.Ticks = 0;
  (this->InputTime).SequenceIndex = 0;
  (this->InputTime).LoopIndex = 0;
  this->LastRate = 0.0;
  if (param_1->Object == (IMediaAudioSample *)0x0) {
    return false;
  }
  _Src = (FScriptContainerElement *)(**(code **)*param_1->Object)();
  if ((param_1->Object == (IMediaAudioSample *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    uVar35 = (*pcVar9)();
    return (bool)uVar35;
  }
  uVar36 = (**(code **)((longlong)*param_1->Object + 8))();
  if ((param_1->Object == (IMediaAudioSample *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    uVar35 = (*pcVar9)();
    return (bool)uVar35;
  }
  uVar37 = (**(code **)((longlong)*param_1->Object + 0x20))();
  if ((param_1->Object == (IMediaAudioSample *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    uVar35 = (*pcVar9)();
    return (bool)uVar35;
  }
  uVar38 = (**(code **)((longlong)*param_1->Object + 0x28))();
  if (_Src == (FScriptContainerElement *)0x0) {
    return false;
  }
  if (uVar36 == 0) {
    return false;
  }
  if (uVar37 == 0) {
    return false;
  }
  if (uVar38 == 0) {
    return false;
  }
  uVar47 = uVar37 * uVar36;
  if ((param_1->Object == (IMediaAudioSample *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    uVar35 = (*pcVar9)();
    return (bool)uVar35;
  }
  iVar39 = (**(code **)((longlong)*param_1->Object + 0x18))();
  if (iVar39 == 2) {
    if (uVar36 == this->OutputChannels) {
      iVar39 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar47,&pTVar1->AllocatorInstance,piVar3,piVar2);
      if (uVar47 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar39 * 4,_Src,
               (longlong)(int)uVar47 << 2);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,this->OutputChannels * uVar37,&pTVar1->AllocatorInstance,piVar3,piVar2);
      bVar34 = MediaAudioResampler::Downmix
                         ((float *)_Src,uVar36,uVar37,(float *)(pTVar1->AllocatorInstance).Data,
                          this->OutputChannels);
      if ((!bVar34) && (*piVar3 = 0, *piVar2 < 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    goto LAB_146c0c672;
  }
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar47,&local_b0,local_a8,local_a8 + 1);
  FVar43.Data = local_b0.Data;
  uVar44 = (ulonglong)uVar47;
  pFVar5 = local_b0.Data + (ulonglong)uVar47 * 4;
  pIVar41 = TSharedPtr<IMediaAudioSample,1>::operator->(param_1);
  iVar39 = (**(code **)((longlong)*pIVar41 + 0x18))(pIVar41);
  fVar33 = _UNK_15142233c;
  fVar32 = _UNK_151422338;
  fVar31 = _UNK_151422334;
  fVar30 = ___xmm_3c0000003c0000003c0000003c000000;
  fVar29 = _UNK_15142232c;
  fVar28 = _UNK_151422328;
  fVar27 = _UNK_151422324;
  fVar62 = ___xmm_30000000300000003000000030000000;
  if (iVar39 == 1) {
    uVar42 = 0;
    if (pFVar5 < FVar43.Data) {
      uVar44 = 0;
    }
    if (((uVar44 != 0) && (7 < uVar44)) &&
       ((_Src + (uVar44 - 1) * 8 < FVar43.Data || (FVar43.Data + uVar44 * 4 + -4 < _Src)))) {
      do {
        uVar42 = uVar42 + 8;
        dVar6 = *(double *)(_Src + 0x10);
        dVar18 = *(double *)(_Src + 0x18);
        *(ulonglong *)FVar43.Data = CONCAT44((float)*(double *)(_Src + 8),(float)*(double *)_Src);
        dVar19 = *(double *)(_Src + 0x20);
        dVar20 = *(double *)(_Src + 0x28);
        *(ulonglong *)(FVar43.Data + 8) = CONCAT44((float)dVar18,(float)dVar6);
        dVar6 = *(double *)(_Src + 0x30);
        dVar18 = *(double *)(_Src + 0x38);
        _Src = _Src + 0x40;
        *(ulonglong *)(FVar43.Data + 0x10) = CONCAT44((float)dVar20,(float)dVar19);
        *(float *)(FVar43.Data + 0x18) = (float)dVar6;
        *(float *)(FVar43.Data + 0x1c) = (float)dVar18;
        FVar43.Data = FVar43.Data + 0x20;
      } while (uVar42 < (uVar44 & 0xfffffffffffffff8));
    }
    if (FVar43.Data < pFVar5) {
      if (0xf < ((ulonglong)(pFVar5 + (3 - (longlong)FVar43.Data)) & 0xfffffffffffffffc)) {
        do {
          *(float *)FVar43.Data = (float)*(double *)_Src;
          *(float *)(FVar43.Data + 4) = (float)*(double *)(_Src + 8);
          *(float *)(FVar43.Data + 8) = (float)*(double *)(_Src + 0x10);
          pFVar4 = _Src + 0x18;
          _Src = _Src + 0x20;
          *(float *)(FVar43.Data + 0xc) = (float)*(double *)pFVar4;
          FVar43.Data = FVar43.Data + 0x10;
        } while (FVar43.Data < pFVar5 + -0xc);
        if (pFVar5 <= FVar43.Data) goto LAB_146c0cc89;
      }
      do {
        dVar6 = *(double *)_Src;
        _Src = _Src + 8;
        *(float *)FVar43.Data = (float)dVar6;
        FVar43.Data = FVar43.Data + 4;
      } while (FVar43.Data < pFVar5);
    }
  }
  else if (iVar39 == 3) {
    uVar42 = 0;
    if (pFVar5 < FVar43.Data) {
      uVar44 = 0;
    }
    if (((uVar44 != 0) && (0xf < uVar44)) &&
       ((_Src + (uVar44 - 1) < FVar43.Data || (FVar43.Data + uVar44 * 4 + -4 < _Src)))) {
      do {
        uVar8 = *(undefined4 *)_Src;
        uVar42 = uVar42 + 0x10;
        uVar35 = (undefined1)((uint)uVar8 >> 0x18);
        uVar61 = CONCAT11(uVar35,uVar35);
        uVar35 = (undefined1)((uint)uVar8 >> 0x10);
        uVar10 = CONCAT35(CONCAT21(uVar61,uVar35),CONCAT14(uVar35,uVar8));
        uVar35 = (undefined1)((uint)uVar8 >> 8);
        uVar22 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar35),uVar35);
        sVar48 = CONCAT11((char)uVar8,(char)uVar8);
        uVar11 = CONCAT62(uVar22,sVar48);
        auVar51._8_4_ = 0;
        auVar51._0_8_ = uVar11;
        auVar51._12_2_ = uVar61;
        auVar51._14_2_ = uVar61;
        uVar61 = (undefined2)((ulonglong)uVar10 >> 0x20);
        auVar50._12_4_ = auVar51._12_4_;
        auVar50._8_2_ = 0;
        auVar50._0_8_ = uVar11;
        auVar50._10_2_ = uVar61;
        auVar49._10_6_ = auVar50._10_6_;
        auVar49._8_2_ = uVar61;
        auVar49._0_8_ = uVar11;
        uVar61 = (undefined2)uVar22;
        auVar23._4_8_ = auVar49._8_8_;
        auVar23._2_2_ = uVar61;
        auVar23._0_2_ = uVar61;
        *(float *)FVar43.Data = (float)((int)sVar48 >> 8) * fVar30;
        *(float *)(FVar43.Data + 4) = (float)(auVar23._0_4_ >> 0x18) * fVar31;
        *(float *)(FVar43.Data + 8) = (float)(auVar49._8_4_ >> 0x18) * fVar32;
        *(float *)(FVar43.Data + 0xc) = (float)(auVar50._12_4_ >> 0x18) * fVar33;
        uVar8 = *(undefined4 *)(_Src + 4);
        uVar35 = (undefined1)((uint)uVar8 >> 0x18);
        uVar61 = CONCAT11(uVar35,uVar35);
        uVar35 = (undefined1)((uint)uVar8 >> 0x10);
        uVar10 = CONCAT35(CONCAT21(uVar61,uVar35),CONCAT14(uVar35,uVar8));
        uVar35 = (undefined1)((uint)uVar8 >> 8);
        uVar22 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar35),uVar35);
        sVar48 = CONCAT11((char)uVar8,(char)uVar8);
        uVar11 = CONCAT62(uVar22,sVar48);
        auVar54._8_4_ = 0;
        auVar54._0_8_ = uVar11;
        auVar54._12_2_ = uVar61;
        auVar54._14_2_ = uVar61;
        uVar61 = (undefined2)((ulonglong)uVar10 >> 0x20);
        auVar53._12_4_ = auVar54._12_4_;
        auVar53._8_2_ = 0;
        auVar53._0_8_ = uVar11;
        auVar53._10_2_ = uVar61;
        auVar52._10_6_ = auVar53._10_6_;
        auVar52._8_2_ = uVar61;
        auVar52._0_8_ = uVar11;
        uVar61 = (undefined2)uVar22;
        auVar24._4_8_ = auVar52._8_8_;
        auVar24._2_2_ = uVar61;
        auVar24._0_2_ = uVar61;
        *(float *)(FVar43.Data + 0x10) = (float)((int)sVar48 >> 8) * fVar30;
        *(float *)(FVar43.Data + 0x14) = (float)(auVar24._0_4_ >> 0x18) * fVar31;
        *(float *)(FVar43.Data + 0x18) = (float)(auVar52._8_4_ >> 0x18) * fVar32;
        *(float *)(FVar43.Data + 0x1c) = (float)(auVar53._12_4_ >> 0x18) * fVar33;
        uVar8 = *(undefined4 *)(_Src + 8);
        uVar35 = (undefined1)((uint)uVar8 >> 0x18);
        uVar61 = CONCAT11(uVar35,uVar35);
        uVar35 = (undefined1)((uint)uVar8 >> 0x10);
        uVar10 = CONCAT35(CONCAT21(uVar61,uVar35),CONCAT14(uVar35,uVar8));
        uVar35 = (undefined1)((uint)uVar8 >> 8);
        uVar22 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar35),uVar35);
        sVar48 = CONCAT11((char)uVar8,(char)uVar8);
        uVar11 = CONCAT62(uVar22,sVar48);
        auVar57._8_4_ = 0;
        auVar57._0_8_ = uVar11;
        auVar57._12_2_ = uVar61;
        auVar57._14_2_ = uVar61;
        uVar61 = (undefined2)((ulonglong)uVar10 >> 0x20);
        auVar56._12_4_ = auVar57._12_4_;
        auVar56._8_2_ = 0;
        auVar56._0_8_ = uVar11;
        auVar56._10_2_ = uVar61;
        auVar55._10_6_ = auVar56._10_6_;
        auVar55._8_2_ = uVar61;
        auVar55._0_8_ = uVar11;
        uVar61 = (undefined2)uVar22;
        auVar25._4_8_ = auVar55._8_8_;
        auVar25._2_2_ = uVar61;
        auVar25._0_2_ = uVar61;
        *(float *)(FVar43.Data + 0x20) = (float)((int)sVar48 >> 8) * fVar30;
        *(float *)(FVar43.Data + 0x24) = (float)(auVar25._0_4_ >> 0x18) * fVar31;
        *(float *)(FVar43.Data + 0x28) = (float)(auVar55._8_4_ >> 0x18) * fVar32;
        *(float *)(FVar43.Data + 0x2c) = (float)(auVar56._12_4_ >> 0x18) * fVar33;
        uVar8 = *(undefined4 *)(_Src + 0xc);
        _Src = _Src + 0x10;
        uVar35 = (undefined1)((uint)uVar8 >> 0x18);
        uVar61 = CONCAT11(uVar35,uVar35);
        uVar35 = (undefined1)((uint)uVar8 >> 0x10);
        uVar10 = CONCAT35(CONCAT21(uVar61,uVar35),CONCAT14(uVar35,uVar8));
        uVar35 = (undefined1)((uint)uVar8 >> 8);
        uVar22 = CONCAT51(CONCAT41((int)((ulonglong)uVar10 >> 0x20),uVar35),uVar35);
        sVar48 = CONCAT11((char)uVar8,(char)uVar8);
        uVar11 = CONCAT62(uVar22,sVar48);
        auVar60._8_4_ = 0;
        auVar60._0_8_ = uVar11;
        auVar60._12_2_ = uVar61;
        auVar60._14_2_ = uVar61;
        uVar61 = (undefined2)((ulonglong)uVar10 >> 0x20);
        auVar59._12_4_ = auVar60._12_4_;
        auVar59._8_2_ = 0;
        auVar59._0_8_ = uVar11;
        auVar59._10_2_ = uVar61;
        auVar58._10_6_ = auVar59._10_6_;
        auVar58._8_2_ = uVar61;
        auVar58._0_8_ = uVar11;
        uVar61 = (undefined2)uVar22;
        auVar26._4_8_ = auVar58._8_8_;
        auVar26._2_2_ = uVar61;
        auVar26._0_2_ = uVar61;
        *(float *)(FVar43.Data + 0x30) = (float)((int)sVar48 >> 8) * fVar30;
        *(float *)(FVar43.Data + 0x34) = (float)(auVar26._0_4_ >> 0x18) * fVar31;
        *(float *)(FVar43.Data + 0x38) = (float)(auVar58._8_4_ >> 0x18) * fVar32;
        *(float *)(FVar43.Data + 0x3c) = (float)(auVar59._12_4_ >> 0x18) * fVar33;
        FVar43.Data = FVar43.Data + 0x40;
      } while (uVar42 < (uVar44 & 0xfffffffffffffff0));
    }
    fVar62 = __real_3c000000;
    if (FVar43.Data < pFVar5) {
      if (0xf < ((ulonglong)(pFVar5 + (3 - (longlong)FVar43.Data)) & 0xfffffffffffffffc)) {
        do {
          *(float *)FVar43.Data = (float)(int)(char)*_Src * fVar62;
          *(float *)(FVar43.Data + 4) = (float)(int)(char)_Src[1] * fVar62;
          *(float *)(FVar43.Data + 8) = (float)(int)(char)_Src[2] * fVar62;
          pFVar4 = _Src + 3;
          _Src = _Src + 4;
          *(float *)(FVar43.Data + 0xc) = (float)(int)(char)*pFVar4 * fVar62;
          FVar43.Data = FVar43.Data + 0x10;
        } while (FVar43.Data < pFVar5 + -0xc);
        if (pFVar5 <= FVar43.Data) goto LAB_146c0cc89;
      }
      do {
        FVar7 = *_Src;
        _Src = _Src + 1;
        *(float *)FVar43.Data = (float)(int)(char)FVar7 * fVar62;
        FVar43.Data = FVar43.Data + 4;
      } while (FVar43.Data < pFVar5);
    }
  }
  else if (iVar39 == 4) {
    if (((int)uVar47 < 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar34)) {
      pcVar9 = (code *)swi(3);
      uVar35 = (*pcVar9)();
      return (bool)uVar35;
    }
    uStack_94 = uStack_7c;
    local_a0 = FVar43.Data;
    uStack_98 = uVar47;
    local_88 = _Src;
    uStack_80 = uVar47;
    if (((int)uVar47 < 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar34)) {
      pcVar9 = (code *)swi(3);
      uVar35 = (*pcVar9)();
      return (bool)uVar35;
    }
    local_78._12_4_ = uStack_94;
    local_78.ArrayNum = uStack_98;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = uStack_80;
    local_78.DataPtr = (float *)local_a0;
    local_68.DataPtr = (short *)local_88;
    Audio::ArrayPcm16ToFloat(&local_68,&local_78);
  }
  else {
    if (iVar39 != 5) {
      if (local_b0.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_b0.Data);
      return false;
    }
    uVar42 = 0;
    if (pFVar5 < FVar43.Data) {
      uVar44 = uVar42;
    }
    if (((uVar44 != 0) && (0xf < uVar44)) &&
       ((_Src + (uVar44 - 1) * 4 < FVar43.Data || (FVar43.Data + uVar44 * 4 + -4 < _Src)))) {
      do {
        iVar39 = *(int *)(_Src + 4);
        iVar45 = *(int *)(_Src + 8);
        iVar12 = *(int *)(_Src + 0xc);
        uVar42 = uVar42 + 0x10;
        iVar13 = *(int *)(_Src + 0x10);
        iVar14 = *(int *)(_Src + 0x14);
        iVar15 = *(int *)(_Src + 0x18);
        iVar16 = *(int *)(_Src + 0x1c);
        *(float *)FVar43.Data = (float)*(int *)_Src * fVar62;
        *(float *)(FVar43.Data + 4) = (float)iVar39 * fVar27;
        *(float *)(FVar43.Data + 8) = (float)iVar45 * fVar28;
        *(float *)(FVar43.Data + 0xc) = (float)iVar12 * fVar29;
        iVar39 = *(int *)(_Src + 0x20);
        iVar45 = *(int *)(_Src + 0x24);
        iVar12 = *(int *)(_Src + 0x28);
        iVar17 = *(int *)(_Src + 0x2c);
        *(float *)(FVar43.Data + 0x10) = (float)iVar13 * fVar62;
        *(float *)(FVar43.Data + 0x14) = (float)iVar14 * fVar27;
        *(float *)(FVar43.Data + 0x18) = (float)iVar15 * fVar28;
        *(float *)(FVar43.Data + 0x1c) = (float)iVar16 * fVar29;
        iVar13 = *(int *)(_Src + 0x30);
        iVar14 = *(int *)(_Src + 0x34);
        iVar15 = *(int *)(_Src + 0x38);
        iVar16 = *(int *)(_Src + 0x3c);
        _Src = _Src + 0x40;
        *(float *)(FVar43.Data + 0x20) = (float)iVar39 * fVar62;
        *(float *)(FVar43.Data + 0x24) = (float)iVar45 * fVar27;
        *(float *)(FVar43.Data + 0x28) = (float)iVar12 * fVar28;
        *(float *)(FVar43.Data + 0x2c) = (float)iVar17 * fVar29;
        *(float *)(FVar43.Data + 0x30) = (float)iVar13 * fVar62;
        *(float *)(FVar43.Data + 0x34) = (float)iVar14 * fVar27;
        *(float *)(FVar43.Data + 0x38) = (float)iVar15 * fVar28;
        *(float *)(FVar43.Data + 0x3c) = (float)iVar16 * fVar29;
        FVar43.Data = FVar43.Data + 0x40;
      } while (uVar42 < (uVar44 & 0xfffffffffffffff0));
    }
    fVar62 = __real_30000000;
    if (FVar43.Data < pFVar5) {
      if (0xf < ((ulonglong)(pFVar5 + (3 - (longlong)FVar43.Data)) & 0xfffffffffffffffc)) {
        do {
          *(float *)FVar43.Data = (float)*(int *)_Src * fVar62;
          *(float *)(FVar43.Data + 4) = (float)*(int *)(_Src + 4) * fVar62;
          *(float *)(FVar43.Data + 8) = (float)*(int *)(_Src + 8) * fVar62;
          pFVar4 = _Src + 0xc;
          _Src = _Src + 0x10;
          *(float *)(FVar43.Data + 0xc) = (float)*(int *)pFVar4 * fVar62;
          FVar43.Data = FVar43.Data + 0x10;
        } while (FVar43.Data < pFVar5 + -0xc);
        if (pFVar5 <= FVar43.Data) goto LAB_146c0cc89;
      }
      lVar46 = (longlong)_Src - (longlong)FVar43.Data;
      do {
        *(float *)FVar43.Data = (float)*(int *)(FVar43.Data + lVar46) * fVar62;
        FVar43.Data = FVar43.Data + 4;
      } while (FVar43.Data < pFVar5);
    }
  }
LAB_146c0cc89:
  if (uVar36 == this->OutputChannels) {
    if ((pTVar1 == (TArray<float,TSizedDefaultAllocator<32>_> *)&local_b0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar34)) {
      pcVar9 = (code *)swi(3);
      uVar35 = (*pcVar9)();
      return (bool)uVar35;
    }
    lVar46 = (longlong)local_a8[0];
    if (local_a8[0] != 0) {
      iVar39 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_a8[0],&pTVar1->AllocatorInstance,&(this->Input).ArrayNum,
                          &(this->Input).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar39 * 4,local_b0.Data,lVar46 << 2);
    }
  }
  else {
    piVar2 = &(this->Input).ArrayMax;
    iVar45 = this->OutputChannels * uVar37;
    piVar3 = &(this->Input).ArrayNum;
    iVar39 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar45,&pTVar1->AllocatorInstance,piVar3,piVar2);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar39 * 4,0,(longlong)iVar45 << 2);
    bVar34 = MediaAudioResampler::Downmix
                       ((float *)local_b0.Data,uVar36,uVar37,
                        (float *)(pTVar1->AllocatorInstance).Data,this->OutputChannels);
    if ((!bVar34) && (*piVar3 = 0, *piVar2 < 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
LAB_146c0c672:
  if (this->FrameIndex == -0x80000000) {
    this->FrameIndex = 0;
  }
  else if (this->InputSampleRate != 0) {
    fVar62 = ((float)this->InputSampleRate / (float)uVar38) * this->FrameAlpha;
    iVar39 = (int)fVar62;
    this->FrameIndex = (longlong)iVar39;
    this->FrameAlpha = fVar62 - (float)iVar39;
  }
  if ((param_1->Object == (IMediaAudioSample *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    uVar35 = (*pcVar9)();
    return (bool)uVar35;
  }
  plVar40 = (long64 *)(**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,local_b8);
  (this->InputDuration).Ticks = *plVar40;
  this->InputFrames = uVar37;
  this->InputSampleRate = uVar38;
  if ((param_1->Object == (IMediaAudioSample *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    uVar35 = (*pcVar9)();
    return (bool)uVar35;
  }
  plVar40 = (long64 *)(**(code **)((longlong)*param_1->Object + 0x30))(param_1->Object,local_58);
  lVar21 = plVar40[1];
  (this->InputTime).Time.Ticks = *plVar40;
  (this->InputTime).SequenceIndex = (int)lVar21;
  (this->InputTime).LoopIndex = (int)((ulonglong)lVar21 >> 0x20);
  return true;
}

