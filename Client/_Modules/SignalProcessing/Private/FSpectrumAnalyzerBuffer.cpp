// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 10

// FSpectrumAnalyzerBuffer @ 1444f29d0

FSpectrumAnalyzerBuffer * __thiscall
Audio::FSpectrumAnalyzerBuffer::FSpectrumAnalyzerBuffer(FSpectrumAnalyzerBuffer *this,int param_1)

{
  (this->ComplexBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexBuffers).ArrayNum = 0;
  (this->ComplexBuffers).ArrayMax = 0;
  (this->Timestamps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timestamps).ArrayNum = 0;
  (this->Timestamps).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->BufferIndicesCriticalSection,4000);
  Reset(this,param_1);
  return this;
}

// FSpectrumAnalyzerBuffer @ 1444f2a20

FSpectrumAnalyzerBuffer * __thiscall
Audio::FSpectrumAnalyzerBuffer::FSpectrumAnalyzerBuffer(FSpectrumAnalyzerBuffer *this)

{
  (this->ComplexBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexBuffers).ArrayNum = 0;
  (this->ComplexBuffers).ArrayMax = 0;
  (this->Timestamps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timestamps).ArrayNum = 0;
  (this->Timestamps).ArrayMax = 0;
  this->OutputIndex = 0;
  this->InputIndex = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->BufferIndicesCriticalSection,4000);
  return this;
}

// IncrementInputIndex @ 144504ed0

void __thiscall Audio::FSpectrumAnalyzerBuffer::IncrementInputIndex(FSpectrumAnalyzerBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  lpCriticalSection = &this->BufferIndicesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = this->InputIndex + 1U & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  this->InputIndex = uVar3;
  if (this->InputIndex == this->OutputIndex) {
    uVar3 = this->InputIndex + 1U & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    this->InputIndex = uVar3;
  }
  if (this->InputIndex == this->OutputIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputIndex != OutputIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                       ,0x492,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144504f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// IncrementOutputIndex @ 144504f80

void __thiscall Audio::FSpectrumAnalyzerBuffer::IncrementOutputIndex(FSpectrumAnalyzerBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  lpCriticalSection = &this->BufferIndicesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = this->OutputIndex + 1U & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  this->OutputIndex = uVar3;
  if (this->InputIndex == this->OutputIndex) {
    uVar3 = this->OutputIndex + 1U & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    this->OutputIndex = uVar3;
  }
  if (this->InputIndex == this->OutputIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputIndex != OutputIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                       ,0x49f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144505016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// LockMostRecentBuffer @ 144509220

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FSpectrumAnalyzerBuffer::LockMostRecentBuffer(FSpectrumAnalyzerBuffer *this,double *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  uint uVar5;
  
  uVar1 = this->OutputIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->Timestamps).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *param_1 = *(double *)((this->Timestamps).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  uVar1 = this->OutputIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->ComplexBuffers).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TArray<float,TAlignedHeapAllocator<16>_> *)
         ((this->ComplexBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// LockMostRecentBuffer @ 144509310

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FSpectrumAnalyzerBuffer::LockMostRecentBuffer(FSpectrumAnalyzerBuffer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  
  uVar1 = this->OutputIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->ComplexBuffers).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<float,TAlignedHeapAllocator<16>_> *)
         ((this->ComplexBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// Reset @ 1445178a0

void __thiscall Audio::FSpectrumAnalyzerBuffer::Reset(FSpectrumAnalyzerBuffer *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  lpCriticalSection = &this->BufferIndicesCriticalSection;
  lVar5 = (longlong)param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    piVar1 = &(this->ComplexBuffers).ArrayMax;
    pTVar2 = (TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->ComplexBuffers).AllocatorInstance.Data;
    iVar4 = (this->ComplexBuffers).ArrayNum;
    if ((this->ComplexBuffers).ArrayMax < 0) {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar2,iVar4);
      (this->ComplexBuffers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
      }
    }
    else {
      DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>(pTVar2,iVar4);
      (this->ComplexBuffers).ArrayNum = 0;
    }
    iVar4 = (this->ComplexBuffers).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->ComplexBuffers).ArrayNum = iVar4 + 1;
    pFVar6 = (this->ComplexBuffers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)&pFVar6->field_0x0 = 0;
    *(int *)&pFVar6[8].field_0x0 = 0;
    *(int *)(pFVar6 + 0xc) = 0;
    if (0 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,param_1,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 8),
                         (int *)(pFVar6 + 0xc));
      memset((void *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 4),0,lVar5 * 4);
    }
    iVar4 = (this->ComplexBuffers).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->ComplexBuffers).ArrayNum = iVar4 + 1;
    pFVar6 = (this->ComplexBuffers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)&pFVar6->field_0x0 = 0;
    *(int *)&pFVar6[8].field_0x0 = 0;
    *(int *)(pFVar6 + 0xc) = 0;
    if (0 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,param_1,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 8),
                         (int *)(pFVar6 + 0xc));
      memset((void *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 4),0,lVar5 * 4);
    }
    iVar4 = (this->ComplexBuffers).ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->ComplexBuffers).ArrayNum = iVar4 + 1;
    pFVar6 = (this->ComplexBuffers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)&pFVar6->field_0x0 = 0;
    *(int *)&pFVar6[8].field_0x0 = 0;
    *(int *)(pFVar6 + 0xc) = 0;
    if (0 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,param_1,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 8),
                         (int *)(pFVar6 + 0xc));
      memset((void *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 4),0,lVar5 * 4);
    }
    iVar4 = (this->ComplexBuffers).ArrayNum;
    if (iVar4 == (this->ComplexBuffers).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,&(this->ComplexBuffers).ArrayMax);
    }
    (this->ComplexBuffers).ArrayNum = iVar4 + 1;
    pFVar6 = (this->ComplexBuffers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)&pFVar6->field_0x0 = 0;
    *(int *)&pFVar6[8].field_0x0 = 0;
    *(int *)(pFVar6 + 0xc) = 0;
    if (0 < param_1) {
      iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,param_1,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 8),
                         (int *)(pFVar6 + 0xc));
      memset((void *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 4),0,lVar5 * 4);
    }
    piVar1 = &(this->Timestamps).ArrayMax;
    (this->Timestamps).ArrayNum = 0;
    if ((this->Timestamps).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Timestamps).AllocatorInstance,0,piVar1);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,4,&(this->Timestamps).AllocatorInstance,&(this->Timestamps).ArrayNum,
                       piVar1);
    pFVar3 = (this->Timestamps).AllocatorInstance.Data;
    pFVar6 = pFVar3 + (longlong)iVar4 * 8;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    pFVar3 = pFVar3 + (longlong)iVar4 * 8 + 0x10;
    *(undefined8 *)pFVar3 = 0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    this->InputIndex = 0;
    this->OutputIndex = 0;
                    /* WARNING: Could not recover jumptable at 0x000144517b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartWorkOnBuffer @ 14451e2a0

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FSpectrumAnalyzerBuffer::StartWorkOnBuffer(FSpectrumAnalyzerBuffer *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar5;
  
  uVar1 = this->InputIndex;
  uVar4 = 0;
  if ((int)uVar1 < (this->ComplexBuffers).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<float,TAlignedHeapAllocator<16>_> *)
         ((this->ComplexBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
}

// StopWorkOnBuffer @ 14451e9f0

void __thiscall
Audio::FSpectrumAnalyzerBuffer::StopWorkOnBuffer(FSpectrumAnalyzerBuffer *this,double param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = this->InputIndex;
  uVar3 = 0;
  if ((int)uVar4 < (this->Timestamps).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)((this->Timestamps).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = param_1;
  lpCriticalSection = &this->BufferIndicesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar4 = this->InputIndex + 1U & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    this->InputIndex = uVar4;
    if (this->InputIndex == this->OutputIndex) {
      uVar4 = this->InputIndex + 1U & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      this->InputIndex = uVar4;
    }
    if (this->InputIndex == this->OutputIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputIndex != OutputIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                         ,0x492,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014451eae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnlockBuffer @ 14451f210

void __thiscall Audio::FSpectrumAnalyzerBuffer::UnlockBuffer(FSpectrumAnalyzerBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  lpCriticalSection = &this->BufferIndicesCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = this->OutputIndex + 1U & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  this->OutputIndex = uVar3;
  if (this->InputIndex == this->OutputIndex) {
    uVar3 = this->OutputIndex + 1U & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    this->OutputIndex = uVar3;
  }
  if (this->InputIndex == this->OutputIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputIndex != OutputIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                       ,0x49f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014451f2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

