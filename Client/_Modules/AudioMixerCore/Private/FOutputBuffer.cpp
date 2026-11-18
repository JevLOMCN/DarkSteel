// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerCore
// Functions: 5

// GetNumSamples @ 144527940

int __thiscall Audio::FOutputBuffer::GetNumSamples(FOutputBuffer *this)

{
  return (this->RenderBuffer).ArrayNum;
}

// GetSizeForDataFormat @ 144527b40

ulong64 __cdecl Audio::FOutputBuffer::GetSizeForDataFormat(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (param_1 == Float) {
    return 4;
  }
  if (param_1 != Int16) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                       ,0x160,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  return 2;
}

// Init @ 144527ba0

void __thiscall
Audio::FOutputBuffer::Init
          (FOutputBuffer *this,IAudioMixer *param_1,int param_2,int param_3,Type param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TAlignedHeapAllocator<16>_> *pTVar3;
  Type TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Blue,"FOutputBuffer_Init");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId238,"FOutputBuffer_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
               ,0xee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId238);
  }
  piVar1 = &(this->RenderBuffer).ArrayMax;
  iVar7 = 0;
  piVar2 = &(this->RenderBuffer).ArrayNum;
  *piVar2 = 0;
  if ((this->RenderBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->RenderBuffer).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2,&(this->RenderBuffer).AllocatorInstance,piVar2,piVar1);
  this->DataFormat = param_4;
  if ((param_1 == (IAudioMixer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudioMixer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0xf5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->AudioMixer = param_1;
  if (this->DataFormat == Float) {
    iVar8 = 4;
  }
  else if (this->DataFormat == Int16) {
    iVar8 = 2;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = 0;
  }
  TCircularAudioBuffer<unsigned_char,16>::SetCapacity
            (&this->CircularBuffer,iVar8 * param_2 * param_3);
  piVar1 = &(this->PopBuffer).ArrayMax;
  (this->PopBuffer).ArrayNum = 0;
  if ((this->PopBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,&(this->PopBuffer).AllocatorInstance,0,piVar1);
  }
  if (this->DataFormat == Float) {
    iVar8 = 4;
  }
  else if (this->DataFormat == Int16) {
    iVar8 = 2;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                       ,0x160,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = 0;
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (1,1,iVar8 * param_2,&(this->PopBuffer).AllocatorInstance,&(this->PopBuffer).ArrayNum,
             piVar1);
  TVar4 = this->DataFormat;
  if (TVar4 != Float) {
    pTVar3 = &this->FormattedBuffer;
    if (TVar4 == Float) {
      iVar7 = 4;
    }
    else if (TVar4 == Int16) {
      iVar7 = 2;
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                         ,0x160,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->FormattedBuffer).ArrayNum;
    piVar1 = &(this->FormattedBuffer).ArrayNum;
    uVar10 = iVar7 * param_2;
    if (iVar8 < (int)uVar10) {
      iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (1,1,uVar10 - iVar8,&pTVar3->AllocatorInstance,piVar1,
                         &(this->FormattedBuffer).ArrayMax);
      memset((pTVar3->AllocatorInstance).Data + iVar7,0,(longlong)(int)(uVar10 - iVar8));
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar8) {
        uVar9 = iVar8 - uVar10;
        if (((int)(uVar9 | uVar10) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar9 != 0) {
          _Dst = (pTVar3->AllocatorInstance).Data + (int)uVar10;
          iVar7 = (*piVar1 - uVar9) - uVar10;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (int)uVar9,(longlong)iVar7);
          }
          *piVar1 = *piVar1 - uVar9;
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (1,1,&pTVar3->AllocatorInstance,*piVar1,&(this->FormattedBuffer).ArrayMax);
        }
      }
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// MixNextBuffer @ 144528350

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FOutputBuffer::MixNextBuffer(FOutputBuffer *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerRenderAudio> FVar13;
  ulong64 uVar14;
  TArrayView<float,int> *pTVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  longlong lVar21;
  float fVar22;
  FColor_u_0 local_res8 [2];
  uint local_res10;
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_f8 [2];
  TArrayView<float,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78 [3];
  
  iVar1 = (this->CircularBuffer).ReadCounter.Counter;
  iVar2 = (this->CircularBuffer).WriteCounter.Counter;
  puVar16 = &(this->CircularBuffer).Capacity;
  uVar18 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar18 = uVar18 + *puVar16;
  }
  uVar11 = *puVar16;
  uVar17 = 0;
  if (this->DataFormat == Float) {
    uVar17 = 4;
  }
  else if (this->DataFormat == Int16) {
    uVar17 = 2;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                       ,0x160,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((int)((uVar11 + ~uVar18) / uVar17) < (this->RenderBuffer).ArrayNum) {
    return false;
  }
  if (__CsvProfilerStat268 == false) {
    FCsvProfilerTrace::OutputInlineStat("RenderAudio",_GCsvCategory_Audio.Index);
    __CsvProfilerStat268 = true;
  }
  uVar18 = _GCsvCategory_Audio.Index;
  local_res10 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("RenderAudio",_GCsvCategory_Audio.Index,"CSV_RenderAudio");
  FVar13 = StatPtr_STAT_AudioMixerRenderAudio;
  if (StatPtr_STAT_AudioMixerRenderAudio ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerRenderAudio>)0x0) {
    pFVar12 = ::FName::FName(local_f8,"STAT_AudioMixerRenderAudio");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerRenderAudio>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerRenderAudio,*pFVar12,
                        L"Render Audio","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar8 = false;
  bVar6 = false;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar11 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar19.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                   ,0x10d);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar19.Value;
      uStackX_24 = uVar11;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar5 = true;
      goto LAB_144528575;
    }
  }
  bVar5 = false;
  FVar20.ComparisonIndex.Value = 0;
  FVar20.Number = 0;
LAB_144528575:
  memset((this->RenderBuffer).AllocatorInstance.Data,0,(longlong)(this->RenderBuffer).ArrayNum << 2)
  ;
  if (this->AudioMixer != (IAudioMixer *)0x0) {
    (**(code **)this->AudioMixer->_padding_)();
  }
  fVar22 = LinearGainScalarForFinalOututCVar;
  fVar7 = __real_3f800000;
  if (this->DataFormat == Float) {
    if (__real_322bcc77 <
        (float)((uint)(LinearGainScalarForFinalOututCVar - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      pTVar15 = TArrayView<float,int>::
                TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                          (&local_88,&this->RenderBuffer);
      local_c8.DataPtr = pTVar15->DataPtr;
      local_c8.ArrayNum = pTVar15->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
      ArrayMultiplyByConstantInPlace(&local_c8,fVar22);
    }
    pTVar15 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (local_78,&this->RenderBuffer);
    local_b8.DataPtr = pTVar15->DataPtr;
    local_b8.ArrayNum = pTVar15->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    ArrayRangeClamp(&local_b8,__real_bf800000,fVar7);
    TCircularAudioBuffer<unsigned_char,16>::Push
              (&this->CircularBuffer,(uchar *)(this->RenderBuffer).AllocatorInstance.Data,
               (this->RenderBuffer).ArrayNum << 2);
  }
  else if (this->DataFormat == Int16) {
    pFVar3 = (this->FormattedBuffer).AllocatorInstance.Data;
    iVar1 = (this->RenderBuffer).ArrayNum;
    uVar14 = GetSizeForDataFormat(Int16);
    if (((ulonglong)(longlong)(this->FormattedBuffer).ArrayNum / uVar14 != (longlong)iVar1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FormattedBuffer.Num() / GetSizeForDataFormat(DataFormat) == RenderBuffer.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                            ,0x129,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    fVar7 = __real_46fffe00;
    fVar22 = LinearGainScalarForFinalOututCVar * __real_46fffe00;
    pTVar15 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_a8,&this->RenderBuffer);
    local_e8.DataPtr = pTVar15->DataPtr;
    local_e8.ArrayNum = pTVar15->ArrayNum;
    local_e8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    ArrayMultiplyByConstantInPlace(&local_e8,fVar22);
    pTVar15 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_98,&this->RenderBuffer);
    local_d8.DataPtr = pTVar15->DataPtr;
    local_d8.ArrayNum = pTVar15->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
    ArrayRangeClamp(&local_d8,__real_c6fffe00,fVar7);
    uVar18 = 0;
    if (0 < iVar1) {
      lVar21 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar18 < (this->RenderBuffer).ArrayNum) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar18 = uVar18 + 1;
        *(short *)(pFVar3 + lVar21 * 2) =
             (short)(int)*(float *)((this->RenderBuffer).AllocatorInstance.Data + lVar21 * 4);
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar1);
    }
    TCircularAudioBuffer<unsigned_char,16>::Push
              (&this->CircularBuffer,(uchar *)(this->FormattedBuffer).AllocatorInstance.Data,
               (this->FormattedBuffer).ArrayNum);
    uVar18 = local_res10;
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixerCore\\Private\\AudioMixer.cpp"
                        ,0x13a,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  if ((0 < ExtraAudioMixerDeviceLoggingCVar) &&
     (this->CallCounterMixNextBuffer = this->CallCounterMixNextBuffer + 1,
     500 < this->CallCounterMixNextBuffer)) {
    if (3 < (byte)LogAudioMixer._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
    }
    this->CallCounterMixNextBuffer = 0;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("RenderAudio",uVar18);
  return true;
}

// PopBufferData @ 144528ad0

TArrayView<unsigned_char_const_,int> * __thiscall
Audio::FOutputBuffer::PopBufferData
          (FOutputBuffer *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *_Src;
  code *pcVar6;
  bool bVar7;
  TArrayView<unsigned_char_const_,int> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  memset((this->PopBuffer).AllocatorInstance.Data,0,(longlong)(this->PopBuffer).ArrayNum);
  uVar2 = (this->CircularBuffer).ReadCounter.Counter;
  puVar1 = &(this->CircularBuffer).Capacity;
  _Dst = (this->PopBuffer).AllocatorInstance.Data;
  _Src = (this->CircularBuffer).InternalBuffer.AllocatorInstance.Data;
  uVar3 = (this->PopBuffer).ArrayNum;
  iVar4 = (this->CircularBuffer).ReadCounter.Counter;
  iVar5 = (this->CircularBuffer).WriteCounter.Counter;
  uVar10 = iVar5 - iVar4;
  if (iVar5 < iVar4) {
    uVar10 = uVar10 + *puVar1;
  }
  if ((int)uVar3 < (int)uVar10) {
    uVar10 = uVar3;
  }
  uVar9 = *puVar1 - uVar2;
  if ((int)uVar10 < (int)uVar9) {
    uVar9 = uVar10;
  }
  memcpy(_Dst,_Src + uVar2,(longlong)(int)uVar9);
  memcpy(_Dst + (int)uVar9,_Src,(longlong)(int)(uVar10 - uVar9));
  if (0x7ffffffe < uVar3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x3f7,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar6)();
      return pTVar8;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x426,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar6)();
      return pTVar8;
    }
  }
  LOCK();
  (this->CircularBuffer).ReadCounter.Counter =
       ((this->CircularBuffer).ReadCounter.Counter + uVar10) % *puVar1;
  UNLOCK();
  *param_1 = uVar10;
  iVar4 = (this->PopBuffer).ArrayNum;
  __return_storage_ptr__->DataPtr = (uchar *)(this->PopBuffer).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TArrayView<unsigned_char_const_,int> *)(*pcVar6)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar4;
  return __return_storage_ptr__;
}

