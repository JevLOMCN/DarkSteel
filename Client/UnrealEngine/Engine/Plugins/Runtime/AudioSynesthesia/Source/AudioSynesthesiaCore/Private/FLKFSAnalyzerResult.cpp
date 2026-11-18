// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 5

// FLKFSAnalyzerResult @ 14d7f6350

FLKFSAnalyzerResult * __thiscall
Audio::FLKFSAnalyzerResult::FLKFSAnalyzerResult(FLKFSAnalyzerResult *this)

{
  this->_padding_ = (longlong)&___7FLKFSAnalyzerResult_Audio__6B_;
  (this->ChannelResults).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelResults).Pairs.ArrayNum = 0;
  (this->ChannelResults).Pairs.ArrayMax = 0;
  return this;
}

// Add @ 14d7fb120

void __thiscall Audio::FLKFSAnalyzerResult::Add(FLKFSAnalyzerResult *this,FLKFSResults *param_1)

{
  FLKFSResults *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar6 = TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->ChannelResults,param_1->Channel);
  if (pTVar6 == (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
             ::Emplace<int_const_&>(&this->ChannelResults,&param_1->Channel);
  }
  pFVar1 = (FLKFSResults *)(pTVar6->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + pTVar6->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = pTVar6->ArrayNum;
  if (iVar5 == pTVar6->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar5 + 1;
  uVar3 = *(undefined8 *)&param_1->Energy;
  pFVar7 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x1c;
  *(undefined8 *)pFVar7 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar7 + 8) = uVar3;
  *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)&param_1->ShortTermLoudness;
  *(float *)(pFVar7 + 0x18) = param_1->GatedLoudness;
  return;
}

// GetChannelLoudnessResults @ 14d806af0

TArray<FLKFSResults,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLKFSAnalyzerResult::GetChannelLoudnessResults(FLKFSAnalyzerResult *this,int param_1)

{
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->ChannelResults,param_1);
  if (pTVar1 == (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`Audio::FLKFSAnalyzerResult::GetChannelLoudnessResults'::__l7::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar1 = &::EmptyArray;
  }
  return pTVar1;
}

// GetLoudnessResults @ 14d8074e0

TArray<FLKFSResults,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FLKFSAnalyzerResult::GetLoudnessResults(FLKFSAnalyzerResult *this)

{
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TSortedMap<int,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
           ::Find(&this->ChannelResults,-1);
  if (pTVar1 == (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`Audio::FLKFSAnalyzerResult::GetChannelLoudnessResults'::__l7::
               _dynamic_atexit_destructor_for__EmptyArray__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar1 = &::EmptyArray;
  }
  return pTVar1;
}

// GetNumChannels @ 14d807960

int __thiscall Audio::FLKFSAnalyzerResult::GetNumChannels(FLKFSAnalyzerResult *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->ChannelResults).Pairs.ArrayNum;
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1 + -1;
  }
  return iVar2;
}

