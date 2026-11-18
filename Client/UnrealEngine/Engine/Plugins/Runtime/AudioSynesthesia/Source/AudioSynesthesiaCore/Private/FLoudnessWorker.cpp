// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// FLoudnessWorker @ 14d7f76e0

FLoudnessWorker * __thiscall
Audio::FLoudnessWorker::FLoudnessWorker
          (FLoudnessWorker *this,FAnalyzerParameters *param_1,FLoudnessSettings *param_2)

{
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar1;
  TUniquePtr<Audio::FMultichannelLoudnessAnalyzer,TDefaultDelete<Audio::FMultichannelLoudnessAnalyzer>_>
  *pTVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  FLoudnessWorker *pFVar10;
  TSlidingBuffer<float> *pTVar11;
  FMultichannelLoudnessAnalyzer *pFVar12;
  TSlidingBuffer<float> *pTVar13;
  FMultichannelLoudnessAnalyzer *pFVar14;
  int iVar15;
  longlong local_38;
  longlong local_30;
  
  this->_padding_ = (longlong)&___7FLoudnessWorker_Audio__6B_;
  pTVar1 = &this->InternalBuffer;
  pTVar2 = &this->Analyzer;
  this->NumChannels = param_1->NumChannels;
  this->NumAnalyzedBuffers = 0;
  this->NumHopFrames = 0;
  this->SampleRate = param_1->SampleRate;
  (this->InternalWindow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalWindow).ArrayNum = 0;
  (this->InternalWindow).ArrayMax = 0;
  pTVar1->Ptr = (TSlidingBuffer<float> *)0x0;
  pTVar2->Ptr = (FMultichannelLoudnessAnalyzer *)0x0;
  if ((this->NumChannels < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessFactory.cpp"
                         ,0x2c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLoudnessWorker *)(*pcVar7)();
    return pFVar10;
  }
  if ((this->SampleRate < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessFactory.cpp"
                         ,0x2d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FLoudnessWorker *)(*pcVar7)();
    return pFVar10;
  }
  iVar5 = this->NumChannels;
  lVar8 = param_2->_padding_;
  iVar15 = -((int)ROUND(__real_bf000000 -
                        ((float)param_1->SampleRate + (float)param_1->SampleRate) *
                        param_2->AnalysisPeriod) >> 1);
  if (iVar15 < 1) {
    iVar15 = 1;
  }
  this->NumHopFrames = iVar15;
  pTVar11 = ::operator_new(0x20);
  if (pTVar11 == (TSlidingBuffer<float> *)0x0) {
    pTVar11 = (TSlidingBuffer<float> *)0x0;
  }
  else {
    pTVar11 = TSlidingBuffer<float>::TSlidingBuffer<float>
                        (pTVar11,iVar5 * (int)lVar8,iVar5 * iVar15);
  }
  pFVar14 = (FMultichannelLoudnessAnalyzer *)0x0;
  if (pTVar1 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)&local_38) {
    if (pTVar11 == (TSlidingBuffer<float> *)0x0) goto LAB_14d7f7849;
    pFVar6 = (pTVar11->StorageBuffer).AllocatorInstance.Data;
    pTVar13 = pTVar11;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pTVar13 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar11;
    if (pTVar13 == (TSlidingBuffer<float> *)0x0) goto LAB_14d7f7849;
    pFVar6 = (pTVar13->StorageBuffer).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pTVar13,0x20);
LAB_14d7f7849:
  pFVar12 = ::operator_new(0xa8);
  if (pFVar12 != (FMultichannelLoudnessAnalyzer *)0x0) {
    iVar5 = param_1->SampleRate;
    piVar3 = &(pFVar12->MonoBuffer).ArrayNum;
    piVar4 = &(pFVar12->MonoBuffer).ArrayMax;
    (pFVar12->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *piVar3 = 0;
    *piVar4 = 0;
    (pFVar12->ChannelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->ChannelWeights).ArrayNum = 0;
    (pFVar12->ChannelWeights).ArrayMax = 0;
    FLoudnessAnalyzer::FLoudnessAnalyzer
              (&pFVar12->Analyzer,(float)iVar5,(FLoudnessAnalyzerSettings *)&param_2->_padding_);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(pFVar12->Analyzer).Settings.WindowSize,(ForAnyElementType *)pFVar12,piVar3,
               piVar4);
    pFVar14 = pFVar12;
  }
  if (pTVar2 == (TUniquePtr<Audio::FMultichannelLoudnessAnalyzer,TDefaultDelete<Audio::FMultichannelLoudnessAnalyzer>_>
                 *)&local_30) {
    if (pFVar14 == (FMultichannelLoudnessAnalyzer *)0x0) {
      return this;
    }
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar14->Analyzer);
    pFVar6 = (pFVar14->ChannelWeights).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar14->MonoBuffer).AllocatorInstance.Data;
    pFVar12 = pFVar14;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar12 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar14;
    if (pFVar12 == (FMultichannelLoudnessAnalyzer *)0x0) {
      return this;
    }
    FLoudnessAnalyzer::~FLoudnessAnalyzer(&pFVar12->Analyzer);
    pFVar6 = (pFVar12->ChannelWeights).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar12->MonoBuffer).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pFVar12,0xa8);
  return this;
}

// Analyze @ 14d7fc660

void __thiscall
Audio::FLoudnessWorker::Analyze
          (FLoudnessWorker *this,TArrayView<float_const_,int> *param_1,IAnalyzerResult *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  TSlidingBuffer<float> *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar17;
  int iVar18;
  int local_res10;
  undefined4 uStack_7c;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68 [2];
  
  if ((param_2 == (IAnalyzerResult *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("nullptr != LoudnessResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessFactory.cpp"
                          ,0x40,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (this->InternalBuffer).Ptr;
  uVar8 = *(undefined4 *)&param_1->DataPtr;
  uVar9 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  pfVar12 = param_1->DataPtr;
  iVar10 = param_1->ArrayNum;
  uVar11 = *(undefined4 *)&param_1->field_0xc;
  pFVar5 = (this_00->StorageBuffer).AllocatorInstance.Data;
  iVar2 = (this_00->StorageBuffer).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar3 = this_00->NumHopSamples;
  uVar4 = this_00->NumWindowSamples;
  iVar16 = this_00->NumUnderflowSamples;
  local_res10 = (iVar10 - uVar4) + iVar2;
  if (local_res10 < 0) {
    local_res10 = -1;
    iVar16 = -1;
  }
  else if (local_res10 < iVar16) {
    iVar16 = -1;
  }
  pTVar17 = &this->InternalWindow;
  while( true ) {
    if (iVar16 == -1) {
      local_68[0].DataPtr._0_4_ = uVar8;
      local_68[0].DataPtr._4_4_ = uVar9;
      local_68[0].ArrayNum = iVar10;
      local_68[0]._12_4_ = uVar11;
      TSlidingBuffer<float>::StoreForFutureWindows(this_00,local_68);
      return;
    }
    if ((int)uVar4 < 0) break;
    piVar1 = &(this->InternalWindow).ArrayMax;
    (this->InternalWindow).ArrayNum = 0;
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&pTVar17->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&pTVar17->AllocatorInstance,&(this->InternalWindow).ArrayNum,piVar1);
    iVar15 = 0;
    if (iVar16 < iVar2) {
      iVar15 = iVar2 - iVar16;
      memcpy((pTVar17->AllocatorInstance).Data,pFVar5 + (longlong)iVar16 * 4,(longlong)iVar15 << 2);
    }
    if (iVar15 < (int)uVar4) {
      iVar14 = (iVar16 - iVar2) + iVar15;
      iVar18 = iVar10 - iVar14;
      if ((int)(uVar4 - iVar15) < iVar18) {
        iVar18 = uVar4 - iVar15;
      }
      if (0 < iVar18) {
        memcpy((pTVar17->AllocatorInstance).Data + (longlong)iVar15 * 4,pfVar12 + iVar14,
               (longlong)iVar18 << 2);
        iVar15 = iVar15 + iVar18;
      }
      if (iVar15 < (int)uVar4) {
        memset((pTVar17->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
               (longlong)(int)(uVar4 - iVar15) << 2);
      }
    }
    pFVar6 = (pTVar17->AllocatorInstance).Data;
    iVar15 = (this->InternalWindow).ArrayNum;
    if ((iVar15 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_78._12_4_ = uStack_7c;
    local_78.ArrayNum = iVar15;
    local_78.DataPtr = (float *)pFVar6;
    AnalyzeWindow(this,&local_78,(FLoudnessResult *)param_2);
    iVar16 = iVar16 + iVar3;
    if (local_res10 < iVar16) {
      iVar16 = -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// AnalyzeWindow @ 14d800d60

void __thiscall
Audio::FLoudnessWorker::AnalyzeWindow
          (FLoudnessWorker *this,TArrayView<float_const_,int> *param_1,FLoudnessResult *param_2)

{
  FScriptContainerElement *pFVar1;
  FMultichannelLoudnessAnalyzer *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  float _X;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  float local_d8 [2];
  ForAnyElementType local_d0;
  uint local_c8;
  uint local_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  uint local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [4];
  
  iVar6 = this->NumChannels;
  uVar10 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,&local_c0,(int *)&local_b8,(int *)((longlong)&local_b8 + 4));
  memset(local_c0.Data + (longlong)iVar4 * 4,0,(longlong)iVar6 << 2);
  iStack_80 = (int)local_b8;
  this_00 = (this->Analyzer).Ptr;
  local_88 = local_c0.Data;
  if (((int)local_b8 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68[0].DataPtr = param_1->DataPtr;
  local_68[0].ArrayNum = param_1->ArrayNum;
  local_68[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iStack_80;
  local_78.DataPtr = (float *)local_88;
  _X = FMultichannelLoudnessAnalyzer::CalculatePerceptualEnergy
                 (this_00,local_68,this->NumChannels,&local_78);
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c4 = 0;
  fVar13 = logf(_X);
  fVar15 = __real_41200000;
  iVar6 = (int)local_b8;
  uVar8 = (ulonglong)(int)local_b8;
  pFVar1 = local_c0.Data + uVar8 * 4;
  fVar13 = fVar13 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale;
  uVar9 = uVar10;
  FVar12.Data = local_c0.Data;
  while( true ) {
    uVar5 = (uint)uVar9;
    if ((int)uVar8 != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      uVar5 = local_c8;
    }
    if (FVar12.Data == pFVar1) break;
    fVar14 = logf(*(float *)FVar12.Data);
    local_d8[0] = fVar14 * fVar15 * LoudnessAnalyzerPrivate::Log10Scale;
    if (((local_d0.Data <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 < local_d0.Data + (longlong)(int)local_c4 * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar5 = local_c8, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 == local_c4) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_d0,(int *)&local_c4);
    }
    local_c8 = uVar5 + 1;
    FVar12.Data = FVar12.Data + 4;
    *(float *)(local_d0.Data + (longlong)(int)uVar5 * 4) = local_d8[0];
    uVar8 = local_b8 & 0xffffffff;
    uVar9 = (ulonglong)local_c8;
  }
  local_a0 = -1;
  fVar15 = ((float)(this->NumHopFrames * this->NumAnalyzedBuffers) +
           (float)(((this->Analyzer).Ptr)->Analyzer).Settings.FFTSize * __real_3f000000) /
           (float)this->SampleRate;
  fStack_9c = fVar15;
  fStack_98 = _X;
  fStack_94 = fVar13;
  pTVar7 = TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
                       *)&param_2->ChannelLoudnessArrays,0xffffffff,&local_a0);
  pFVar1 = (pTVar7->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_a0) &&
      ((FScriptContainerElement *)&local_a0 < pFVar1 + (longlong)pTVar7->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = pTVar7->ArrayNum;
  if (iVar6 == pTVar7->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar6 + 1;
  pFVar1 = (pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(fStack_9c,local_a0);
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(fStack_94,fStack_98);
  uVar9 = uVar10;
  if (0 < this->NumChannels) {
    do {
      uVar11 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar11 < (int)local_b8) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      local_b0 = uVar11;
      fStack_ac = fVar15;
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_a8 = *(undefined4 *)(local_c0.Data + uVar10);
      uVar5 = 0;
      if ((int)uVar11 < (int)local_c8) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_a4 = *(undefined4 *)(local_d0.Data + uVar10);
      pTVar7 = TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
               ::FindOrAddImpl<int_const_&>
                         ((TMapBase<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_>,0>_>
                           *)&param_2->ChannelLoudnessArrays,local_b0,(int *)&local_b0);
      pFVar1 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 < pFVar1 + (longlong)pTVar7->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = pTVar7->ArrayNum;
      if (iVar6 == pTVar7->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
      }
      pTVar7->ArrayNum = iVar6 + 1;
      uVar10 = uVar10 + 4;
      pFVar1 = (pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(ulonglong *)pFVar1 = CONCAT44(fStack_ac,local_b0);
      *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_a4,uStack_a8);
      uVar9 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < this->NumChannels);
  }
  this->NumAnalyzedBuffers = this->NumAnalyzedBuffers + 1;
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return;
}

