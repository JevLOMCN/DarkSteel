// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// FBaseChannelFormatConverter @ 1444a2340

/* WARNING: Enum "Type": Some values do not have unique names */

FBaseChannelFormatConverter * __thiscall
Audio::FBaseChannelFormatConverter::FBaseChannelFormatConverter
          (FBaseChannelFormatConverter *this,FInputFormat *param_1,FOutputFormat *param_2,
          TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> *param_3,
          int param_4)

{
  FChannelMixEntry *pFVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FBaseChannelFormatConverter *pFVar7;
  FChannelMixState *pFVar8;
  TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
  *pTVar9;
  FStaticBasicLogRecord *pFVar10;
  FChannelMixEntry *pFVar11;
  FChannelMixKey local_res8;
  
  this->_padding_ = (longlong)&___7FBaseChannelFormatConverter_Audio__6B_;
  (this->InputFormat).NumChannels = param_1->NumChannels;
  (this->OutputFormat).NumChannels = param_2->NumChannels;
  (this->OutputGainState).Gain = 1.0;
  (this->OutputGainState).NextGain = 0.0;
  (this->OutputGainState).bFadeToNextGain = false;
  (this->ChannelMixStates).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelMixStates).Pairs.ArrayNum = 0;
  (this->ChannelMixStates).Pairs.ArrayMax = 0;
  this->NumFramesPerCall = param_4;
  if (((this->InputFormat).NumChannels < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputFormat.NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioChannelFormatConverter.cpp"
                         ,0x103,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FBaseChannelFormatConverter *)(*pcVar5)();
    return pFVar7;
  }
  if (((this->OutputFormat).NumChannels < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputFormat.NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioChannelFormatConverter.cpp"
                         ,0x104,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FBaseChannelFormatConverter *)(*pcVar5)();
    return pFVar7;
  }
  if ((param_4 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumFramesPerCall > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioChannelFormatConverter.cpp"
                         ,0x105,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FBaseChannelFormatConverter *)(*pcVar5)();
    return pFVar7;
  }
  pFVar11 = param_3->DataPtr;
  pFVar1 = pFVar11 + param_3->ArrayNum;
  do {
    if (pFVar11 == pFVar1) {
      return this;
    }
    iVar3 = pFVar11->InputChannelIndex;
    iVar4 = pFVar11->OutputChannelIndex;
    fVar2 = pFVar11->Gain;
    local_res8.InputChannelIndex = iVar3;
    local_res8.OutputChannelIndex = iVar4;
    if ((iVar3 < (this->InputFormat).NumChannels) && (-1 < iVar3)) {
      if ((iVar4 < (this->OutputFormat).NumChannels) && (-1 < iVar4)) {
        if (fVar2 == 0.0) {
          TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
          ::Remove(&this->ChannelMixStates,&local_res8);
        }
        else {
          pFVar8 = TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                   ::Find(&this->ChannelMixStates,&local_res8);
          if (pFVar8 == (FChannelMixState *)0x0) {
            pTVar9 = TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                     ::
                     AllocateMemoryForEmplace<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>
                               (&this->ChannelMixStates,&local_res8);
            *(ulonglong *)pTVar9 =
                 CONCAT44(local_res8.OutputChannelIndex,local_res8.InputChannelIndex);
            pFVar8 = (FChannelMixState *)&pTVar9->field_0x8;
            *(undefined8 *)pFVar8 = 0;
            *(undefined8 *)&pTVar9->field_0x10 = 0;
            *(undefined4 *)&pTVar9->field_0x18 = 0;
            *(int *)pFVar8 = iVar3;
            *(int *)&pTVar9->field_0xc = iVar4;
            *(undefined4 *)&pTVar9->field_0x10 = 0;
          }
          *(float *)&pFVar8->field_0x8 = fVar2;
          pFVar8->bFadeToNextGain = false;
        }
      }
      else if (2 < (byte)LogSignalProcessing._0_1_) {
        pFVar10 = &::LOG_Static;
        goto LAB_1444a252d;
      }
    }
    else if (2 < (byte)LogSignalProcessing._0_1_) {
      pFVar10 = &::LOG_Static;
LAB_1444a252d:
      UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogSignalProcessing);
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// ~FBaseChannelFormatConverter @ 1444a6020

void __thiscall
Audio::FBaseChannelFormatConverter::~FBaseChannelFormatConverter(FBaseChannelFormatConverter *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FBaseChannelFormatConverter_Audio__6B_;
  pFVar1 = (this->ChannelMixStates).Pairs.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CreateBaseFormatConverter @ 1444b9b90

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
__cdecl Audio::FBaseChannelFormatConverter::CreateBaseFormatConverter
                  (FInputFormat *param_1,FOutputFormat *param_2,
                  TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int>
                  *param_3,int param_4)

{
  FBaseChannelFormatConverter *pFVar1;
  FStaticBasicLogRecord *pFVar2;
  undefined4 in_register_0000008c;
  int in_stack_00000028;
  TArrayView<Audio::FBaseChannelFormatConverter::FChannelMixEntry_const_,int> local_18;
  
  if (param_2->NumChannels < 1) {
    if (1 < (byte)LogSignalProcessing._0_1_) {
      pFVar2 = &::LOG_Static;
LAB_1444b9c08:
      UE::Logging::Private::BasicLog<2>(pFVar2,(FLogCategoryBase *)&LogSignalProcessing);
    }
  }
  else if (*(int *)&param_3->DataPtr < 1) {
    if (1 < (byte)LogSignalProcessing._0_1_) {
      pFVar2 = &::LOG_Static;
      goto LAB_1444b9c08;
    }
  }
  else if (in_stack_00000028 < 1) {
    if (1 < (byte)LogSignalProcessing._0_1_) {
      pFVar2 = &::LOG_Static;
      goto LAB_1444b9c08;
    }
  }
  else {
    pFVar1 = ::operator_new(0x38);
    if (pFVar1 != (FBaseChannelFormatConverter *)0x0) {
      local_18.DataPtr = *(FChannelMixEntry **)CONCAT44(in_register_0000008c,param_4);
      local_18._8_8_ = ((undefined8 *)CONCAT44(in_register_0000008c,param_4))[1];
      pFVar1 = FBaseChannelFormatConverter
                         (pFVar1,(FInputFormat *)param_2,(FOutputFormat *)param_3,&local_18,
                          in_stack_00000028);
      goto LAB_1444b9c16;
    }
  }
  pFVar1 = (FBaseChannelFormatConverter *)0x0;
LAB_1444b9c16:
  *(FBaseChannelFormatConverter **)param_1 = pFVar1;
  return (TUniquePtr<Audio::FBaseChannelFormatConverter,TDefaultDelete<Audio::FBaseChannelFormatConverter>_>
          )(FBaseChannelFormatConverter *)param_1;
}

// GetInputFormat @ 1444bfdb0

FInputFormat * __thiscall
Audio::FBaseChannelFormatConverter::GetInputFormat(FBaseChannelFormatConverter *this)

{
  return &this->InputFormat;
}

// GetOutputFormat @ 1444c08f0

FOutputFormat * __thiscall
Audio::FBaseChannelFormatConverter::GetOutputFormat(FBaseChannelFormatConverter *this)

{
  return &this->OutputFormat;
}

// GetTargetMixGain @ 1444c1370

float __thiscall
Audio::FBaseChannelFormatConverter::GetTargetMixGain
          (FBaseChannelFormatConverter *this,int param_1,int param_2)

{
  TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  FChannelMixKey local_res8;
  FKeyForward local_res10;
  
  pTVar1 = &this->ChannelMixStates;
  local_res8.InputChannelIndex = param_1;
  local_res8.OutputChannelIndex = param_2;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                    (&pTVar1->Pairs,&local_res8,local_res10,
                     (TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>)local_res10)
  ;
  if (uVar4 == 0xffffffff) {
    return 0.0;
  }
  pFVar6 = (FScriptContainerElement *)0x0;
  uVar5 = 0;
  if ((int)uVar4 < (this->ChannelMixStates).Pairs.ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
  if ((pTVar1->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x1c + 8 ==
      (FScriptContainerElement *)0x0) {
    return 0.0;
  }
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                    (&pTVar1->Pairs,&local_res8,local_res10,
                     (TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>)local_res10)
  ;
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < (this->ChannelMixStates).Pairs.ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
    pFVar6 = (pTVar1->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x1c + 8;
    if (pFVar6 != (FScriptContainerElement *)0x0) goto LAB_1444c14ac;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x148,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar7 = (float)(*pcVar2)();
    return fVar7;
  }
LAB_1444c14ac:
  if (pFVar6[0xc] == (FScriptContainerElement)0x0) {
    return *(float *)(pFVar6 + 8);
  }
  return *(float *)(pFVar6 + 0x10);
}

// GetTargetOutputGain @ 1444c1500

float __thiscall
Audio::FBaseChannelFormatConverter::GetTargetOutputGain(FBaseChannelFormatConverter *this)

{
  if ((this->OutputGainState).bFadeToNextGain != false) {
    return (this->OutputGainState).NextGain;
  }
  return (this->OutputGainState).Gain;
}

// ProcessAudio @ 1444d5c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FBaseChannelFormatConverter::ProcessAudio
          (FBaseChannelFormatConverter *this,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  FKeyForward FVar5;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res8 [8];
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_138;
  undefined8 local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  float *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  float *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  float *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  float *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<float,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8 [6];
  
  local_res10 = param_1;
  if ((param_1->ArrayNum != (this->InputFormat).NumChannels) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInputBuffers.Num() == InputFormat.NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioChannelFormatConverter.cpp"
                         ,0x7f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = param_2->ArrayNum;
  uVar11 = 0;
  iVar12 = (this->OutputFormat).NumChannels;
  if (iVar8 < iVar12) {
    do {
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar19 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar19 + (longlong)iVar8 * 0x10) = 0;
      *(undefined8 *)(pFVar19 + (longlong)iVar8 * 0x10 + 8) = 0;
      iVar8 = param_2->ArrayNum;
      iVar12 = (this->OutputFormat).NumChannels;
    } while (iVar8 < iVar12);
  }
  uVar16 = uVar11;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar11;
      uVar18 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar10 = uVar18;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar19 = (param_2->AllocatorInstance).Data + uVar16;
      iVar8 = *(int *)(pFVar19 + 0xc);
      *(undefined4 *)&pFVar19[8].field_0x0 = 0;
      if (iVar8 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar19,0,(int *)(pFVar19 + 0xc));
      }
      uVar10 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar10 = uVar18;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar19 = (param_2->AllocatorInstance).Data + uVar16;
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,this->NumFramesPerCall,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 8),
                 (int *)(pFVar19 + 0xc));
      iVar8 = this->NumFramesPerCall;
      uVar10 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar10 = uVar18;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memset(*(void **)((param_2->AllocatorInstance).Data + uVar16),0,(longlong)iVar8 << 2);
      uVar11 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x10;
    } while ((int)(uVar13 + 1) < (this->OutputFormat).NumChannels);
  }
  fVar4 = __real_358637bd;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pFVar17 = (FScriptContainerElement *)0x0;
  local_res20 = (this->ChannelMixStates).Pairs.ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  pFVar15 = (this->ChannelMixStates).Pairs.AllocatorInstance.Data;
  uVar10 = 0xffffffff;
  local_138.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->ChannelMixStates;
  local_130 = 0;
  pFVar19 = pFVar15 + 0x14;
  local_120 = pFVar15 + uVar11 * 0x1c;
  do {
    local_128 = pFVar15;
    if ((this->ChannelMixStates).Pairs.ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pTVar6 = local_res10;
    if (pFVar15 == local_120) {
      if ((this->OutputGainState).bFadeToNextGain != false) {
        (this->OutputGainState).Gain = (this->OutputGainState).NextGain;
        (this->OutputGainState).bFadeToNextGain = false;
      }
      iVar8 = (int)local_130;
      local_res10 = (TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *)
                    (local_138.Data + (longlong)(int)local_130 * 8);
      FVar5 = local_res10._0_1_;
      FVar20.Data = local_138.Data;
      do {
        pTVar6 = local_res10;
        if ((int)local_130 != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Audio::FBaseChannelFormatConverter::FChannelMixKey,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *)
            FVar20.Data == pTVar6) {
          if ((FChannelMixKey *)local_138.Data != (FChannelMixKey *)0x0) {
            FMemory::Free(local_138.Data);
          }
          return;
        }
        uVar10 = Algo::
                 BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                           (&pTVar1->Pairs,(FChannelMixKey *)FVar20.Data,FVar5,
                            (TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>)FVar5
                           );
        if (uVar10 != 0xffffffff) {
          uVar13 = 0;
          if ((int)uVar10 < (this->ChannelMixStates).Pairs.ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar19 = (pTVar1->Pairs).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x1c;
          iVar12 = (this->ChannelMixStates).Pairs.ArrayNum + ~uVar10;
          if (iVar12 != 0) {
            memmove(pFVar19,pFVar19 + 0x1c,(longlong)iVar12 * 0x1c);
          }
          piVar2 = &(this->ChannelMixStates).Pairs.ArrayNum;
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,(ForAnyElementType *)pTVar1,(this->ChannelMixStates).Pairs.ArrayNum,
                     &(this->ChannelMixStates).Pairs.ArrayMax);
        }
        FVar20.Data = FVar20.Data + 8;
      } while( true );
    }
    uVar18 = *(uint *)(pFVar19 + -0xc);
    if (uVar18 == uVar10) {
LAB_1444d5fea:
      if ((pFVar17 == (FScriptContainerElement *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("nullptr != CurrentInputChannel",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioChannelFormatConverter.cpp"
                             ,0xb8,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar21 = *(float *)(pFVar19 + -4);
      fVar23 = (this->OutputGainState).Gain;
      fVar22 = fVar21 * fVar23;
      if (*pFVar19 != (FScriptContainerElement)0x0) {
        fVar21 = *(float *)(pFVar19 + 4);
      }
      if ((this->OutputGainState).bFadeToNextGain != false) {
        fVar23 = (this->OutputGainState).NextGain;
      }
      uVar18 = *(uint *)(pFVar19 + -8);
      lVar14 = (longlong)(int)uVar18;
      fVar23 = fVar23 * fVar21;
      if (fVar4 < (float)((uint)(fVar22 - fVar23) & uVar13)) {
        uVar9 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = (param_2->AllocatorInstance).Data;
        local_f8 = *(float **)(pFVar15 + lVar14 * 0x10);
        iVar8 = *(int *)(pFVar15 + lVar14 * 0x10 + 8);
        if ((iVar8 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_e8 = *(float **)pFVar17;
        iVar12 = *(int *)(pFVar17 + 8);
        iStack_f0 = iVar8;
        if ((iVar12 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_b8._12_4_ = uStack_ec;
        local_b8.ArrayNum = iStack_f0;
        local_a8[0]._12_4_ = uStack_dc;
        local_a8[0].ArrayNum = iVar12;
        local_a8[0].DataPtr = local_e8;
        local_b8.DataPtr = local_f8;
        iStack_e0 = iVar12;
        ArrayLerpAddInPlace(local_a8,fVar22,fVar23,&local_b8);
      }
      else {
        uVar9 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar9 = ~uVar18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = (param_2->AllocatorInstance).Data;
        local_118 = *(float **)(pFVar15 + lVar14 * 0x10);
        iVar8 = *(int *)(pFVar15 + lVar14 * 0x10 + 8);
        if ((iVar8 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_108 = *(float **)pFVar17;
        iVar12 = *(int *)(pFVar17 + 8);
        iStack_110 = iVar8;
        if ((iVar12 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_d8._12_4_ = uStack_10c;
        local_d8.ArrayNum = iStack_110;
        local_c8._12_4_ = uStack_fc;
        local_c8.ArrayNum = iVar12;
        local_c8.DataPtr = local_108;
        local_d8.DataPtr = local_118;
        iStack_100 = iVar12;
        ArrayMultiplyAddInPlace(&local_c8,fVar23,&local_d8);
      }
      if (*pFVar19 != (FScriptContainerElement)0x0) {
        *pFVar19 = (FScriptContainerElement)0x0;
        *(float *)(pFVar19 + -4) = *(float *)(pFVar19 + 4);
        if (*(float *)(pFVar19 + 4) == 0.0) {
          iVar8 = (int)local_130;
          if ((int)local_130 == local_130._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_138,(int *)((longlong)&local_130 + 4));
          }
          local_130 = CONCAT44(local_130._4_4_,iVar8 + 1);
          *(undefined4 *)&local_138.Data[(longlong)iVar8 * 8].field_0x0 =
               *(undefined4 *)(pFVar19 + -0xc);
          *(undefined4 *)(local_138.Data + (longlong)iVar8 * 8 + 4) = *(undefined4 *)(pFVar19 + -8);
        }
      }
    }
    else {
      uVar10 = 0;
      if ((int)uVar18 < local_res10->ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = (pTVar6->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10;
      if (*(int *)(pFVar17 + 8) == this->NumFramesPerCall) {
        uVar10 = *(uint *)(pFVar19 + -0xc);
        goto LAB_1444d5fea;
      }
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3711478104594579624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioChannelFormatConverter.cpp"
                         ,0xa8,"InputBuffer.Num() == NumFramesPerCall");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (2 < (byte)LogSignalProcessing._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
      }
      pFVar17 = (FScriptContainerElement *)0x0;
      uVar10 = 0xffffffff;
    }
    pFVar15 = local_128 + 0x1c;
    uVar11 = (ulonglong)local_res20;
    pFVar19 = pFVar19 + 0x1c;
  } while( true );
}

// SetMixGain @ 1444e4310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FBaseChannelFormatConverter::SetMixGain
          (FBaseChannelFormatConverter *this,FChannelMixEntry *param_1,bool param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FChannelMixState *pFVar4;
  TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
  *pTVar5;
  FChannelMixKey local_res8;
  
  iVar2 = param_1->InputChannelIndex;
  iVar3 = param_1->OutputChannelIndex;
  fVar1 = param_1->Gain;
  local_res8.InputChannelIndex = iVar2;
  local_res8.OutputChannelIndex = iVar3;
  if ((iVar2 < (this->InputFormat).NumChannels) && (-1 < iVar2)) {
    if ((iVar3 < (this->OutputFormat).NumChannels) && (-1 < iVar3)) {
      if ((fVar1 != 0.0) || (param_2)) {
        pFVar4 = TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                 ::Find(&this->ChannelMixStates,&local_res8);
        if (pFVar4 == (FChannelMixState *)0x0) {
          pTVar5 = TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                   ::
                   AllocateMemoryForEmplace<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>
                             (&this->ChannelMixStates,&local_res8);
          pFVar4 = (FChannelMixState *)&pTVar5->field_0x8;
          *(ulonglong *)pTVar5 =
               CONCAT44(local_res8.OutputChannelIndex,local_res8.InputChannelIndex);
          *(undefined8 *)pFVar4 = 0;
          *(undefined8 *)&pTVar5->field_0x10 = 0;
          *(undefined4 *)&pTVar5->field_0x18 = 0;
          *(int *)pFVar4 = iVar2;
          *(int *)&pTVar5->field_0xc = iVar3;
          *(undefined4 *)&pTVar5->field_0x10 = 0;
        }
        pFVar4->bFadeToNextGain = param_2;
        if (param_2) {
          pFVar4->NextGain = fVar1;
        }
        else {
          *(float *)&pFVar4->field_0x8 = fVar1;
        }
      }
      else {
        TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
        ::Remove(&this->ChannelMixStates,&local_res8);
      }
    }
    else if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
  }
  else if (2 < (byte)LogSignalProcessing._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
  }
  return;
}

// SetMixGain @ 1444e4480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FBaseChannelFormatConverter::SetMixGain
          (FBaseChannelFormatConverter *this,int param_1,int param_2,float param_3,bool param_4)

{
  FChannelMixState *pFVar1;
  TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
  *pTVar2;
  FChannelMixKey local_res8;
  
  local_res8.InputChannelIndex = param_1;
  local_res8.OutputChannelIndex = param_2;
  if ((param_1 < (this->InputFormat).NumChannels) && (-1 < param_1)) {
    if ((param_2 < (this->OutputFormat).NumChannels) && (-1 < param_2)) {
      if ((param_3 != 0.0) || (param_4)) {
        pFVar1 = TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                 ::Find(&this->ChannelMixStates,&local_res8);
        if (pFVar1 == (FChannelMixState *)0x0) {
          pTVar2 = TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                   ::
                   AllocateMemoryForEmplace<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>
                             (&this->ChannelMixStates,&local_res8);
          pFVar1 = (FChannelMixState *)&pTVar2->field_0x8;
          *(ulonglong *)pTVar2 =
               CONCAT44(local_res8.OutputChannelIndex,local_res8.InputChannelIndex);
          *(undefined8 *)pFVar1 = 0;
          *(undefined8 *)&pTVar2->field_0x10 = 0;
          *(undefined4 *)&pTVar2->field_0x18 = 0;
          *(int *)pFVar1 = param_1;
          *(int *)&pTVar2->field_0xc = param_2;
          *(undefined4 *)&pTVar2->field_0x10 = 0;
        }
        pFVar1->bFadeToNextGain = param_4;
        if (param_4) {
          pFVar1->NextGain = param_3;
        }
        else {
          *(float *)&pFVar1->field_0x8 = param_3;
        }
      }
      else {
        TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
        ::Remove(&this->ChannelMixStates,&local_res8);
      }
    }
    else if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
      return;
    }
  }
  else if (2 < (byte)LogSignalProcessing._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    return;
  }
  return;
}

// SetOutputGain @ 1444e4da0

void __thiscall
Audio::FBaseChannelFormatConverter::SetOutputGain
          (FBaseChannelFormatConverter *this,float param_1,bool param_2)

{
  (this->OutputGainState).bFadeToNextGain = param_2;
  if (param_2) {
    (this->OutputGainState).NextGain = param_1;
    return;
  }
  (this->OutputGainState).Gain = param_1;
  return;
}

