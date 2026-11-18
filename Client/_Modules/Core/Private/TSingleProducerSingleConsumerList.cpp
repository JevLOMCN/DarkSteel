// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// TSingleProducerSingleConsumerList<unsigned___int64,16> @ 141914590

TSingleProducerSingleConsumerList<unsigned___int64,16> * __thiscall
TSingleProducerSingleConsumerList<unsigned___int64,16>::
TSingleProducerSingleConsumerList<unsigned___int64,16>
          (TSingleProducerSingleConsumerList<unsigned___int64,16> *this)

{
  this->HeadBlock = (FBlock *)0x0;
  this->TailBlock = (FBlock *)0x0;
  this->Counter = 0;
  this->ConsumerThreadReadIndex = 0;
  this->ConsumerThreadDeleteIndex = 0;
  return this;
}

// ~TSingleProducerSingleConsumerList<FCsvEvent,32> @ 141919f90

void __thiscall
TSingleProducerSingleConsumerList<FCsvEvent,32>::~TSingleProducerSingleConsumerList<FCsvEvent,32>
          (TSingleProducerSingleConsumerList<FCsvEvent,32> *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FBlock *pFVar3;
  FCsvEvent *pFVar4;
  
  pFVar3 = this->HeadBlock;
  if (pFVar3 == (FBlock *)0x0) {
    this->HeadBlock = (FBlock *)0x0;
    this->TailBlock = (FBlock *)0x0;
    return;
  }
  do {
    pFVar4 = (FCsvEvent *)&pFVar3->Next;
    lVar2 = 0x20;
    this->HeadBlock = *(FBlock **)pFVar4;
    do {
      pFVar1 = pFVar4[-1].EventText.Data.AllocatorInstance.Data;
      pFVar4 = pFVar4 + -1;
      lVar2 = lVar2 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar2 != 0);
    ::operator_delete(pFVar3,0x408);
    pFVar3 = this->HeadBlock;
  } while (pFVar3 != (FBlock *)0x0);
  this->HeadBlock = (FBlock *)0x0;
  this->TailBlock = (FBlock *)0x0;
  return;
}

// ~TSingleProducerSingleConsumerList<unsigned___int64,16> @ 14191a040

void __thiscall
TSingleProducerSingleConsumerList<unsigned___int64,16>::
~TSingleProducerSingleConsumerList<unsigned___int64,16>
          (TSingleProducerSingleConsumerList<unsigned___int64,16> *this)

{
  FBlock *pFVar1;
  
  pFVar1 = this->HeadBlock;
  while (pFVar1 != (FBlock *)0x0) {
    this->HeadBlock = pFVar1->Next;
    ::operator_delete(pFVar1,0x88);
    pFVar1 = this->HeadBlock;
  }
  this->TailBlock = (FBlock *)0x0;
  this->HeadBlock = (FBlock *)0x0;
  return;
}

// AddTailBlock @ 141925a70

void __thiscall
TSingleProducerSingleConsumerList<FCsvCustomStat,256>::AddTailBlock
          (TSingleProducerSingleConsumerList<FCsvCustomStat,256> *this)

{
  FBlock *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(local_res10,CsvProfiler,true);
  pFVar1 = ::operator_new(0x2008);
  if (pFVar1 != (FBlock *)0x0) {
    pFVar1->Next = (FBlock *)0x0;
  }
  if (this->TailBlock == (FBlock *)0x0) {
    this->HeadBlock = pFVar1;
  }
  else {
    this->TailBlock->Next = pFVar1;
  }
  this->TailBlock = pFVar1;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddTailBlock @ 141925b00

void __thiscall
TSingleProducerSingleConsumerList<FCsvEvent,32>::AddTailBlock
          (TSingleProducerSingleConsumerList<FCsvEvent,32> *this)

{
  FBlock *pFVar1;
  FBlock *pFVar2;
  int *piVar3;
  longlong lVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(local_res10,CsvProfiler,true);
  pFVar1 = ::operator_new(0x408);
  pFVar2 = (FBlock *)0x0;
  if (pFVar1 != (FBlock *)0x0) {
    lVar4 = 0x20;
    piVar3 = &pFVar1->Entries[0].EventText.Data.ArrayMax;
    do {
      (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar3 + -3))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)(piVar3 + -1) = 0;
      piVar3 = piVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pFVar1->Next = (FBlock *)0x0;
    pFVar2 = pFVar1;
  }
  if (this->TailBlock == (FBlock *)0x0) {
    this->HeadBlock = pFVar2;
  }
  else {
    this->TailBlock->Next = pFVar2;
  }
  this->TailBlock = pFVar2;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddTailBlock @ 141925bb0

void __thiscall
TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::AddTailBlock
          (TSingleProducerSingleConsumerList<FCsvTimingMarker,256> *this)

{
  FBlock *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(local_res10,CsvProfiler,true);
  pFVar1 = ::operator_new(0x1808);
  if (pFVar1 != (FBlock *)0x0) {
    pFVar1->Next = (FBlock *)0x0;
  }
  if (this->TailBlock == (FBlock *)0x0) {
    this->HeadBlock = pFVar1;
  }
  else {
    this->TailBlock->Next = pFVar1;
  }
  this->TailBlock = pFVar1;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddTailBlock @ 141925c40

void __thiscall
TSingleProducerSingleConsumerList<unsigned___int64,16>::AddTailBlock
          (TSingleProducerSingleConsumerList<unsigned___int64,16> *this)

{
  FBlock *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,CsvProfiler,false,None,Default,true);
  FMemScope::FMemScope(local_res10,CsvProfiler,true);
  pFVar1 = ::operator_new(0x88);
  if (pFVar1 != (FBlock *)0x0) {
    pFVar1->Next = (FBlock *)0x0;
  }
  if (this->TailBlock == (FBlock *)0x0) {
    this->HeadBlock = pFVar1;
  }
  else {
    this->TailBlock->Next = pFVar1;
  }
  this->TailBlock = pFVar1;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PopAll @ 14195add0

void __thiscall
TSingleProducerSingleConsumerList<FCsvCustomStat,256>::PopAll
          (TSingleProducerSingleConsumerList<FCsvCustomStat,256> *this,
          TArray<FCsvCustomStat,TSizedDefaultAllocator<32>_> *param_1,long64 param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FBlock *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FCsvCustomStat *pFVar11;
  ulonglong uVar12;
  
  uVar10 = (int)this->Counter - (int)this->ConsumerThreadReadIndex;
  if (-1 < param_2) {
    iVar8 = param_1->ArrayNum;
    if ((param_2 < (longlong)(((longlong)(param_1->ArrayMax - iVar8) - (ulonglong)uVar10) * 0x20))
       && (param_1->ArrayMax != iVar8)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar8,&param_1->AllocatorInstance,iVar8,&param_1->ArrayMax);
    }
  }
  uVar9 = param_1->ArrayNum + uVar10;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar9 = (uint)(byte)this->ConsumerThreadReadIndex;
  if (uVar10 != 0) {
    uVar12 = (ulonglong)uVar10;
    do {
      if (this->ConsumerThreadReadIndex == this->ConsumerThreadDeleteIndex + 0x100) {
        pFVar3 = this->HeadBlock;
        uVar9 = 0;
        this->HeadBlock = pFVar3->Next;
        ::operator_delete(pFVar3,0x2008);
        this->ConsumerThreadDeleteIndex = this->ConsumerThreadReadIndex;
      }
      if ((this->HeadBlock == (FBlock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeadBlock != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b2,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0xff < uVar9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexInBlock < BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b3,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      pFVar11 = this->HeadBlock->Entries + uVar9;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_1->AllocatorInstance,piVar1);
      }
      uVar9 = uVar9 + 1;
      param_1->ArrayNum = iVar8 + 1;
      lVar6 = pFVar11->_padding_;
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar2 = pFVar4 + (longlong)iVar8 * 0x20;
      *(longlong *)pFVar2 = pFVar11->_padding_;
      *(longlong *)(pFVar2 + 8) = lVar6;
      lVar6 = *(longlong *)&pFVar11->Value;
      pFVar4 = pFVar4 + (longlong)iVar8 * 0x20 + 0x10;
      *(longlong *)pFVar4 = pFVar11->_padding_;
      *(longlong *)(pFVar4 + 8) = lVar6;
      this->ConsumerThreadReadIndex = this->ConsumerThreadReadIndex + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// PopAll @ 14195afb0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSingleProducerSingleConsumerList<FCsvEvent,32>::PopAll
          (TSingleProducerSingleConsumerList<FCsvEvent,32> *this,
          TArray<FCsvEvent,TSizedDefaultAllocator<32>_> *param_1,long64 param_2)

{
  int *piVar1;
  FBlock *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  FCsvEvent *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar7 = (int)this->Counter - (int)this->ConsumerThreadReadIndex;
  if (-1 < param_2) {
    iVar5 = param_1->ArrayNum;
    if ((param_2 < (longlong)(((longlong)(param_1->ArrayMax - iVar5) - (ulonglong)uVar7) * 0x20)) &&
       (param_1->ArrayMax != iVar5)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,&param_1->AllocatorInstance,iVar5,&param_1->ArrayMax);
    }
  }
  uVar11 = param_1->ArrayNum + uVar7;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = (uint)this->ConsumerThreadReadIndex & 0x1f;
  if (uVar7 != 0) {
    uVar10 = (ulonglong)uVar7;
    do {
      if (this->ConsumerThreadReadIndex == this->ConsumerThreadDeleteIndex + 0x20) {
        pFVar2 = this->HeadBlock;
        uVar11 = 0;
        pFVar9 = (FCsvEvent *)&pFVar2->Next;
        this->HeadBlock = *(FBlock **)pFVar9;
        if (pFVar2 != (FBlock *)0x0) {
          lVar8 = 0x20;
          do {
            pFVar6 = pFVar9[-1].EventText.Data.AllocatorInstance.Data;
            pFVar9 = pFVar9 + -1;
            lVar8 = lVar8 + -1;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
          } while (lVar8 != 0);
          ::operator_delete(pFVar2,0x408);
        }
        this->ConsumerThreadDeleteIndex = this->ConsumerThreadReadIndex;
      }
      if ((this->HeadBlock == (FBlock *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeadBlock != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0x1f < uVar11) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexInBlock < BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      pFVar9 = this->HeadBlock->Entries + uVar11;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      uVar11 = uVar11 + 1;
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = (pFVar9->EventText).Data.AllocatorInstance.Data;
      (pFVar9->EventText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar6 + 8) = (pFVar9->EventText).Data.ArrayNum;
      *(int *)(pFVar6 + 0xc) = (pFVar9->EventText).Data.ArrayMax;
      (pFVar9->EventText).Data.ArrayNum = 0;
      (pFVar9->EventText).Data.ArrayMax = 0;
      *(ulong64 *)(pFVar6 + 0x10) = pFVar9->Timestamp;
      *(uint *)(pFVar6 + 0x18) = pFVar9->CategoryIndex;
      this->ConsumerThreadReadIndex = this->ConsumerThreadReadIndex + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// PopAll @ 14195b1f0

void __thiscall
TSingleProducerSingleConsumerList<FCsvTimingMarker,256>::PopAll
          (TSingleProducerSingleConsumerList<FCsvTimingMarker,256> *this,
          TArray<FCsvTimingMarker,TSizedDefaultAllocator<32>_> *param_1,long64 param_2)

{
  int *piVar1;
  uint uVar2;
  FCsvTimingMarker *pFVar3;
  FScriptContainerElement *pFVar4;
  FBlock *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar12 = (int)this->Counter - (int)this->ConsumerThreadReadIndex;
  if (-1 < param_2) {
    iVar10 = param_1->ArrayNum;
    if ((param_2 < (longlong)(((longlong)(param_1->ArrayMax - iVar10) - (ulonglong)uVar12) * 0x18))
       && (param_1->ArrayMax != iVar10)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar10,&param_1->AllocatorInstance,iVar10,&param_1->ArrayMax);
    }
  }
  uVar2 = param_1->ArrayNum + uVar12;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = (ulonglong)(byte)this->ConsumerThreadReadIndex;
  if (uVar12 != 0) {
    uVar13 = (ulonglong)uVar12;
    do {
      if (this->ConsumerThreadReadIndex == this->ConsumerThreadDeleteIndex + 0x100) {
        pFVar5 = this->HeadBlock;
        uVar11 = 0;
        this->HeadBlock = pFVar5->Next;
        ::operator_delete(pFVar5,0x1808);
        this->ConsumerThreadDeleteIndex = this->ConsumerThreadReadIndex;
      }
      if ((this->HeadBlock == (FBlock *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeadBlock != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b2,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((0xff < (uint)uVar11) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexInBlock < BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b3,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = this->HeadBlock->Entries + uVar11;
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_1->AllocatorInstance,piVar1);
      }
      uVar11 = (ulonglong)((uint)uVar11 + 1);
      param_1->ArrayNum = iVar10 + 1;
      uVar8 = *(undefined8 *)&pFVar3->field_0x8;
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar4 = pFVar6 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar4 + 8) = uVar8;
      *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = *(undefined8 *)&pFVar3->field_0x10;
      this->ConsumerThreadReadIndex = this->ConsumerThreadReadIndex + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}

// PopAll @ 14195b3d0

void __thiscall
TSingleProducerSingleConsumerList<unsigned___int64,16>::PopAll
          (TSingleProducerSingleConsumerList<unsigned___int64,16> *this,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,long64 param_2)

{
  int *piVar1;
  FBlock *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar7;
  
  uVar8 = (int)this->Counter - (int)this->ConsumerThreadReadIndex;
  if (-1 < param_2) {
    iVar5 = param_1->ArrayNum;
    if ((param_2 < (longlong)(((longlong)(param_1->ArrayMax - iVar5) - (ulonglong)uVar8) * 8)) &&
       (param_1->ArrayMax != iVar5)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar5,&param_1->AllocatorInstance,iVar5,&param_1->ArrayMax);
    }
  }
  uVar6 = param_1->ArrayNum + uVar8;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar6 = (uint)this->ConsumerThreadReadIndex & 0xf;
  if (uVar8 != 0) {
    uVar9 = (ulonglong)uVar8;
    do {
      uVar7 = (ulonglong)uVar6;
      if (this->ConsumerThreadReadIndex == this->ConsumerThreadDeleteIndex + 0x10) {
        pFVar2 = this->HeadBlock;
        uVar7 = 0;
        this->HeadBlock = pFVar2->Next;
        ::operator_delete(pFVar2,0x88);
        this->ConsumerThreadDeleteIndex = this->ConsumerThreadReadIndex;
      }
      if ((this->HeadBlock == (FBlock *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeadBlock != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0xf < (uint)uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexInBlock < BlockSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                             ,0x4b3,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = this->HeadBlock;
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      uVar6 = (uint)uVar7 + 1;
      *(ulong64 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = pFVar2->Entries[uVar7]
      ;
      this->ConsumerThreadReadIndex = this->ConsumerThreadReadIndex + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

