// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// GetPayloadID @ 14afd87b0

long64 __thiscall
Metasound::TAudioSender<Metasound::FStereoAudioFormat>::GetPayloadID
          (TAudioSender<Metasound::FStereoAudioFormat> *this)

{
  return -1;
}

// PushLiteral @ 14afd87c0

bool __thiscall
Metasound::TAudioSender<Metasound::FStereoAudioFormat>::PushLiteral
          (TAudioSender<Metasound::FStereoAudioFormat> *this,FLiteral *param_1)

{
  undefined1 local_res18 [16];
  
  `Metasound::TAudioSender<Metasound::FStereoAudioFormat>::PushLiteral'::__l2::<lambda_1>::
  operator()(local_res18);
  return false;
}

// GetPayloadID @ 14afd99f0

long64 __thiscall
Metasound::TAudioSender<Metasound::FMonoAudioFormat>::GetPayloadID
          (TAudioSender<Metasound::FMonoAudioFormat> *this)

{
  return -1;
}

// PushLiteral @ 14afd9a00

bool __thiscall
Metasound::TAudioSender<Metasound::FMonoAudioFormat>::PushLiteral
          (TAudioSender<Metasound::FMonoAudioFormat> *this,FLiteral *param_1)

{
  undefined1 local_res18 [16];
  
  `Metasound::TAudioSender<Metasound::FMonoAudioFormat>::PushLiteral'::__l2::<lambda_1>::operator()
            (local_res18);
  return false;
}

// Push @ 14b02e3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TAudioSender<Metasound::FMonoAudioFormat>::Push
          (TAudioSender<Metasound::FMonoAudioFormat> *this,FMonoAudioFormat *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  lVar8 = *(longlong *)&param_1->field_0x10;
  if ((int)*(undefined8 *)&param_1->field_0x18 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  puVar2 = *(undefined8 **)(lVar8 + 8);
  if ((this->DelayLines).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  pFVar3 = (this->DelayLines).AllocatorInstance.Data;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar12 = *(int *)(puVar2 + 1);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != iVar12)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pvVar4 = *(void **)pFVar3;
  pvVar5 = (void *)*puVar2;
  uVar1 = *(uint *)(pFVar3 + 0x18);
  iVar11 = *(int *)(pFVar3 + 0x14);
  if (*(int *)(pFVar3 + 0x18) < iVar11) {
    iVar11 = *(int *)(pFVar3 + 0x10) - iVar11;
  }
  else {
    iVar11 = -iVar11;
  }
  iVar11 = ~(*(int *)(pFVar3 + 0x18) + iVar11) + *(int *)(pFVar3 + 0x10);
  if (iVar12 < iVar11) {
    iVar11 = iVar12;
  }
  iVar12 = *(int *)(pFVar3 + 0x10) - uVar1;
  if (iVar11 < iVar12) {
    iVar12 = iVar11;
  }
  memcpy((void *)((longlong)pvVar4 + (ulonglong)uVar1 * 4),pvVar5,(longlong)iVar12 * 4);
  memcpy(pvVar4,(void *)((longlong)iVar12 * 4 + (longlong)pvVar5),(longlong)(iVar11 - iVar12) << 2);
  LOCK();
  *(uint *)(pFVar3 + 0x18) = (iVar11 + uVar1) % *(uint *)(pFVar3 + 0x10);
  UNLOCK();
  if ((this->DelayLines).ArrayNum < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  pFVar3 = (this->DelayLines).AllocatorInstance.Data;
  iVar12 = *(int *)(pFVar3 + 0x14);
  if (*(int *)(pFVar3 + 0x18) < iVar12) {
    iVar12 = *(int *)(pFVar3 + 0x10) - iVar12;
  }
  else {
    iVar12 = -iVar12;
  }
  if (this->DelayTimeInFrames < (uint)(*(int *)(pFVar3 + 0x18) + iVar12)) {
    if ((this->IntermediaryBuffers).ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    pFVar3 = (this->IntermediaryBuffers).AllocatorInstance.Data;
    if ((this->DelayLines).ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    pFVar6 = (this->DelayLines).AllocatorInstance.Data;
    uVar1 = *(uint *)(pFVar3 + 8);
    pvVar4 = *(void **)pFVar3;
    pvVar5 = *(void **)pFVar6;
    iVar12 = *(int *)(pFVar6 + 0x14);
    if (*(int *)(pFVar6 + 0x18) < iVar12) {
      iVar12 = *(int *)(pFVar6 + 0x10) - iVar12;
    }
    else {
      iVar12 = -iVar12;
    }
    uVar14 = *(int *)(pFVar6 + 0x18) + iVar12;
    if ((int)uVar1 < (int)uVar14) {
      uVar14 = uVar1;
    }
    uVar13 = *(int *)(pFVar6 + 0x10) - *(uint *)(pFVar6 + 0x14);
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
    }
    memcpy(pvVar4,(void *)((longlong)pvVar5 + (ulonglong)*(uint *)(pFVar6 + 0x14) * 4),
           (longlong)(int)uVar13 * 4);
    memcpy((void *)((longlong)(int)uVar13 * 4 + (longlong)pvVar4),pvVar5,
           (longlong)(int)(uVar14 - uVar13) << 2);
    if (0x7ffffffe < uVar1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x3f7,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x426,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    LOCK();
    *(uint *)(pFVar6 + 0x14) = (*(int *)(pFVar6 + 0x14) + uVar14) % *(uint *)(pFVar6 + 0x10);
    UNLOCK();
    if ((this->DataChannelInputs).ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    Audio::FPatchInput::PushAudio
              ((FPatchInput *)(this->DataChannelInputs).AllocatorInstance.Data,*(float **)pFVar3,
               *(int *)(pFVar3 + 8));
  }
  return true;
}

// Push @ 14b02e760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TAudioSender<Metasound::FStereoAudioFormat>::Push
          (TAudioSender<Metasound::FStereoAudioFormat> *this,FStereoAudioFormat *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong local_res20;
  longlong local_78;
  longlong local_70;
  
  lVar6 = *(longlong *)&param_1->field_0x10;
  uVar7 = *(undefined8 *)&param_1->field_0x18;
  iVar11 = 0;
  local_70 = 0;
  local_78 = 0;
  local_res20 = 0;
  do {
    if ((int)uVar7 <= iVar11) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    puVar2 = *(undefined8 **)(local_78 + lVar6 + 8);
    if ((this->DelayLines).ArrayNum <= iVar11) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    pFVar16 = (this->DelayLines).AllocatorInstance.Data + local_78;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar13 = *(int *)(puVar2 + 1);
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != iVar13)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pvVar3 = (void *)*puVar2;
    pvVar4 = *(void **)pFVar16;
    uVar1 = *(uint *)(pFVar16 + 0x18);
    iVar10 = *(int *)(pFVar16 + 0x14);
    if (*(int *)(pFVar16 + 0x18) < iVar10) {
      iVar10 = *(int *)(pFVar16 + 0x10) - iVar10;
    }
    else {
      iVar10 = -iVar10;
    }
    iVar10 = ~(*(int *)(pFVar16 + 0x18) + iVar10) + *(int *)(pFVar16 + 0x10);
    if (iVar13 < iVar10) {
      iVar10 = iVar13;
    }
    iVar13 = *(int *)(pFVar16 + 0x10) - uVar1;
    if (iVar10 < iVar13) {
      iVar13 = iVar10;
    }
    memcpy((void *)((longlong)pvVar4 + (ulonglong)uVar1 * 4),pvVar3,(longlong)iVar13 * 4);
    memcpy(pvVar4,(void *)((longlong)pvVar3 + (longlong)iVar13 * 4),(longlong)(iVar10 - iVar13) << 2
          );
    LOCK();
    *(uint *)(pFVar16 + 0x18) = (uVar1 + iVar10) % *(uint *)(pFVar16 + 0x10);
    UNLOCK();
    if ((this->DelayLines).ArrayNum <= iVar11) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    pFVar16 = (this->DelayLines).AllocatorInstance.Data;
    iVar13 = *(int *)(pFVar16 + local_78 + 0x14);
    if (*(int *)(pFVar16 + local_78 + 0x18) < iVar13) {
      iVar13 = *(int *)(pFVar16 + local_78 + 0x10) - iVar13;
    }
    else {
      iVar13 = -iVar13;
    }
    if (this->DelayTimeInFrames < (uint)(*(int *)(pFVar16 + local_78 + 0x18) + iVar13)) {
      if ((this->IntermediaryBuffers).ArrayNum <= iVar11) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      pFVar16 = (this->IntermediaryBuffers).AllocatorInstance.Data + local_res20;
      if ((this->DelayLines).ArrayNum <= iVar11) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      uVar1 = *(uint *)(pFVar16 + 8);
      pFVar12 = (this->DelayLines).AllocatorInstance.Data + local_78;
      pvVar3 = *(void **)pFVar16;
      pvVar4 = *(void **)pFVar12;
      iVar13 = *(int *)(pFVar12 + 0x14);
      if (*(int *)(pFVar12 + 0x18) < iVar13) {
        iVar13 = *(int *)(pFVar12 + 0x10) - iVar13;
      }
      else {
        iVar13 = -iVar13;
      }
      uVar15 = *(int *)(pFVar12 + 0x18) + iVar13;
      if ((int)uVar1 < (int)uVar15) {
        uVar15 = uVar1;
      }
      uVar14 = *(int *)(pFVar12 + 0x10) - *(uint *)(pFVar12 + 0x14);
      if ((int)uVar15 < (int)uVar14) {
        uVar14 = uVar15;
      }
      memcpy(pvVar3,(void *)((longlong)pvVar4 + (ulonglong)*(uint *)(pFVar12 + 0x14) * 4),
             (longlong)(int)uVar14 * 4);
      memcpy((void *)((longlong)pvVar3 + (longlong)(int)uVar14 * 4),pvVar4,
             (longlong)(int)(uVar15 - uVar14) << 2);
      if (0x7ffffffe < uVar1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                           ,0x3f7,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                           ,0x426,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      LOCK();
      *(uint *)(pFVar12 + 0x14) = (*(int *)(pFVar12 + 0x14) + uVar15) % *(uint *)(pFVar12 + 0x10);
      UNLOCK();
      if ((this->DataChannelInputs).ArrayNum <= iVar11) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      Audio::FPatchInput::PushAudio
                ((FPatchInput *)((this->DataChannelInputs).AllocatorInstance.Data + local_70),
                 *(float **)pFVar16,*(int *)(pFVar16 + 8));
    }
    local_70 = local_70 + 0x18;
    local_res20 = local_res20 + 0x10;
    local_78 = local_78 + 0x20;
    iVar11 = iVar11 + 1;
    if (0x1f < local_res20) {
      return true;
    }
  } while( true );
}

// SetDelay @ 14b032710

/* WARNING: Removing unreachable block (ram,0x00014b0329bb) */

bool __thiscall
Metasound::TAudioSender<Metasound::FMonoAudioFormat>::SetDelay
          (TAudioSender<Metasound::FMonoAudioFormat> *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TCircularAudioBuffer<float,16> *pTVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar12 = (this->Params).OperatorSettings.NumFramesPerBlock;
  iVar10 = (this->Params).OperatorSettings.SampleRate;
  (this->Params).DelayTimeInSeconds = param_1;
  uVar9 = (uint)((float)iVar10 * param_1);
  if ((int)uVar9 < (int)uVar12) {
    uVar12 = uVar9;
  }
  this->DelayTimeInFrames = uVar12;
  if (((this->DelayLines).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar3 = (this->DelayLines).AllocatorInstance.Data;
  uVar12 = *(int *)(pFVar3 + 0x18) - *(int *)(pFVar3 + 0x14);
  if (*(int *)(pFVar3 + 0x18) < *(int *)(pFVar3 + 0x14)) {
    uVar12 = uVar12 + *(int *)(pFVar3 + 0x10);
  }
  if (uVar12 <= this->DelayTimeInFrames) {
    pTVar4 = (TCircularAudioBuffer<float,16> *)(this->DelayLines).AllocatorInstance.Data;
    iVar10 = (this->DelayLines).ArrayNum;
    piVar1 = &(this->DelayLines).ArrayMax;
    fVar15 = (float)this->DelayTimeInFrames;
    lVar14 = 8;
    if (*piVar1 < 0) {
      DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(pTVar4,iVar10);
      (this->DelayLines).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->DelayLines).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(pTVar4,iVar10);
      (this->DelayLines).ArrayNum = 0;
    }
    piVar2 = &(this->IntermediaryBuffers).ArrayMax;
    pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->IntermediaryBuffers).AllocatorInstance.Data;
    iVar10 = (this->IntermediaryBuffers).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar5,iVar10);
      (this->IntermediaryBuffers).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->IntermediaryBuffers).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar5,iVar10);
      (this->IntermediaryBuffers).ArrayNum = 0;
    }
    do {
      iVar10 = (this->DelayLines).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->DelayLines).AllocatorInstance,piVar1);
      }
      (this->DelayLines).ArrayNum = iVar10 + 1;
      Audio::TCircularAudioBuffer<float,16>::TCircularAudioBuffer<float,16>
                ((TCircularAudioBuffer<float,16> *)
                 ((this->DelayLines).AllocatorInstance.Data + (longlong)iVar10 * 0x20),
                 (int)(fVar15 + fVar15));
      local_38.Data = (FScriptContainerElement *)0x0;
      iVar10 = (this->Params).OperatorSettings.NumFramesPerBlock;
      local_30[0] = 0;
      local_30[1] = 0;
      iVar11 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (4,4,iVar10,&local_38,local_30,local_30 + 1);
      memset(local_38.Data + (longlong)iVar11 * 4,0,(longlong)iVar10 << 2);
      pFVar3 = (this->IntermediaryBuffers).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar2 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = (this->IntermediaryBuffers).ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->IntermediaryBuffers).AllocatorInstance,piVar2);
      }
      lVar13 = (longlong)iVar10;
      (this->IntermediaryBuffers).ArrayNum = iVar10 + 1;
      pFVar3 = (this->IntermediaryBuffers).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar13 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar13 * 0x10) = local_38.Data;
      local_38.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + lVar13 * 0x10 + 8) = local_30[0];
      *(int *)(pFVar3 + lVar13 * 0x10 + 0xc) = local_30[1];
      local_30[0] = 0;
      local_30[1] = 0;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return true;
}

// SetDelay @ 14b032a00

/* WARNING: Removing unreachable block (ram,0x00014b032cab) */

bool __thiscall
Metasound::TAudioSender<Metasound::FStereoAudioFormat>::SetDelay
          (TAudioSender<Metasound::FStereoAudioFormat> *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TCircularAudioBuffer<float,16> *pTVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  ForAnyElementType local_38;
  int local_30 [2];
  
  uVar12 = (this->Params).OperatorSettings.NumFramesPerBlock;
  iVar10 = (this->Params).OperatorSettings.SampleRate;
  (this->Params).DelayTimeInSeconds = param_1;
  uVar9 = (uint)((float)iVar10 * param_1);
  if ((int)uVar9 < (int)uVar12) {
    uVar12 = uVar9;
  }
  this->DelayTimeInFrames = uVar12;
  if (((this->DelayLines).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar3 = (this->DelayLines).AllocatorInstance.Data;
  uVar12 = *(int *)(pFVar3 + 0x18) - *(int *)(pFVar3 + 0x14);
  if (*(int *)(pFVar3 + 0x18) < *(int *)(pFVar3 + 0x14)) {
    uVar12 = uVar12 + *(int *)(pFVar3 + 0x10);
  }
  if (uVar12 <= this->DelayTimeInFrames) {
    pTVar4 = (TCircularAudioBuffer<float,16> *)(this->DelayLines).AllocatorInstance.Data;
    iVar10 = (this->DelayLines).ArrayNum;
    piVar1 = &(this->DelayLines).ArrayMax;
    fVar15 = (float)this->DelayTimeInFrames;
    lVar14 = 8;
    if (*piVar1 < 0) {
      DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(pTVar4,iVar10);
      (this->DelayLines).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->DelayLines).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<Audio::TCircularAudioBuffer<float,16>,int>(pTVar4,iVar10);
      (this->DelayLines).ArrayNum = 0;
    }
    piVar2 = &(this->IntermediaryBuffers).ArrayMax;
    pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->IntermediaryBuffers).AllocatorInstance.Data;
    iVar10 = (this->IntermediaryBuffers).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar5,iVar10);
      (this->IntermediaryBuffers).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->IntermediaryBuffers).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar5,iVar10);
      (this->IntermediaryBuffers).ArrayNum = 0;
    }
    do {
      iVar10 = (this->DelayLines).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&(this->DelayLines).AllocatorInstance,piVar1);
      }
      (this->DelayLines).ArrayNum = iVar10 + 1;
      Audio::TCircularAudioBuffer<float,16>::TCircularAudioBuffer<float,16>
                ((TCircularAudioBuffer<float,16> *)
                 ((this->DelayLines).AllocatorInstance.Data + (longlong)iVar10 * 0x20),
                 (int)(fVar15 + fVar15));
      local_38.Data = (FScriptContainerElement *)0x0;
      iVar10 = (this->Params).OperatorSettings.NumFramesPerBlock;
      local_30[0] = 0;
      local_30[1] = 0;
      iVar11 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (4,4,iVar10,&local_38,local_30,local_30 + 1);
      memset(local_38.Data + (longlong)iVar11 * 4,0,(longlong)iVar10 << 2);
      pFVar3 = (this->IntermediaryBuffers).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)*piVar2 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = (this->IntermediaryBuffers).ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->IntermediaryBuffers).AllocatorInstance,piVar2);
      }
      lVar13 = (longlong)iVar10;
      (this->IntermediaryBuffers).ArrayNum = iVar10 + 1;
      pFVar3 = (this->IntermediaryBuffers).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar13 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar13 * 0x10) = local_38.Data;
      local_38.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar3 + lVar13 * 0x10 + 8) = local_30[0];
      *(int *)(pFVar3 + lVar13 * 0x10 + 0xc) = local_30[1];
      local_30[0] = 0;
      local_30[1] = 0;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return true;
}

// operator() @ 150561010

bool __thiscall
`Metasound::TAudioSender<Metasound::FMonoAudioFormat>::PushLiteral'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6140579446773514988>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514988>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_Metasound::TAudioSender<Metasound::FMonoAudioFormat>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150561050

bool __thiscall
`Metasound::TAudioSender<Metasound::FStereoAudioFormat>::PushLiteral'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6140579446773514988>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6140579446773514988>,
                       &`public:___cdecl_`public:_virtual_bool___cdecl_Metasound::TAudioSender<Metasound::FStereoAudioFormat>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

