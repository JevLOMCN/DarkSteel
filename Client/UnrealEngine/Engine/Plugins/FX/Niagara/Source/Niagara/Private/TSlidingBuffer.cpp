// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// TSlidingBuffer<float> @ 1490b09f0

TSlidingBuffer<float> * __thiscall
Audio::TSlidingBuffer<float>::TSlidingBuffer<float>
          (TSlidingBuffer<float> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TSlidingBuffer<float> *pTVar3;
  
  this->NumHopSamples = param_2;
  this->NumWindowSamples = param_1;
  (this->StorageBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StorageBuffer).ArrayNum = 0;
  (this->StorageBuffer).ArrayMax = 0;
  this->NumUnderflowSamples = 0;
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumWindowSamples >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlidingBuffer<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (this->NumHopSamples < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumHopSamples >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSlidingBuffer<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// StoreForFutureWindows @ 14913a010

void __thiscall
Audio::TSlidingBuffer<float>::StoreForFutureWindows
          (TSlidingBuffer<float> *this,TArrayView<float_const_,int> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  iVar13 = this->NumUnderflowSamples;
  if (0 < iVar13) {
    iVar8 = (this->StorageBuffer).ArrayNum;
    if (iVar13 < iVar8) {
      if ((iVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->StorageBuffer).AllocatorInstance.Data;
      iVar8 = (this->StorageBuffer).ArrayNum - iVar13;
      if (iVar8 != 0) {
        memmove(pFVar4,pFVar4 + (longlong)iVar13 * 4,(longlong)iVar8 << 2);
      }
      piVar1 = &(this->StorageBuffer).ArrayNum;
      *piVar1 = *piVar1 - iVar13;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(this->StorageBuffer).AllocatorInstance,(this->StorageBuffer).ArrayNum,
                 &(this->StorageBuffer).ArrayMax);
      this->NumUnderflowSamples = 0;
    }
    else {
      piVar1 = &(this->StorageBuffer).ArrayMax;
      this->NumUnderflowSamples = iVar13 - iVar8;
      (this->StorageBuffer).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->StorageBuffer).AllocatorInstance,0,piVar1);
      }
    }
  }
  iVar8 = param_1->ArrayNum;
  piVar1 = &(this->StorageBuffer).ArrayNum;
  iVar10 = this->NumUnderflowSamples;
  iVar3 = *piVar1;
  iVar11 = iVar8 - iVar10;
  iVar13 = iVar11 + iVar3;
  if (iVar13 < 0) {
    this->NumUnderflowSamples = iVar10 - iVar8;
  }
  else if (iVar13 < this->NumWindowSamples) {
    pfVar5 = param_1->DataPtr;
    if (((pfVar5 + iVar10 == (float *)0x0) && (iVar11 != 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar11,&(this->StorageBuffer).AllocatorInstance,piVar1,
                        &(this->StorageBuffer).ArrayMax);
    if (iVar11 != 0) {
      memcpy((this->StorageBuffer).AllocatorInstance.Data + (longlong)iVar13 * 4,pfVar5 + iVar10,
             (longlong)iVar11 << 2);
    }
    this->NumUnderflowSamples = 0;
  }
  else {
    iVar10 = iVar13 - this->NumWindowSamples;
    iVar13 = ((iVar10 % this->NumHopSamples - iVar10) - this->NumHopSamples) + iVar13;
    if (iVar8 < iVar13) {
      uVar12 = (iVar8 - iVar13) + iVar3;
      if (0 < (int)uVar12) {
        uVar9 = 0;
        if ((int)uVar12 <= iVar3) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->StorageBuffer).AllocatorInstance.Data;
        iVar13 = (this->StorageBuffer).ArrayNum - uVar12;
        if (iVar13 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar12 * 4,(longlong)iVar13 << 2);
        }
        piVar1 = &(this->StorageBuffer).ArrayNum;
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->StorageBuffer).AllocatorInstance,(this->StorageBuffer).ArrayNum,
                   &(this->StorageBuffer).ArrayMax);
      }
      pfVar5 = param_1->DataPtr;
      if (((pfVar5 == (float *)0x0) && (iVar8 != 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar8,&(this->StorageBuffer).AllocatorInstance,
                          &(this->StorageBuffer).ArrayNum,&(this->StorageBuffer).ArrayMax);
      if (iVar8 != 0) {
        memcpy((this->StorageBuffer).AllocatorInstance.Data + (longlong)iVar13 * 4,pfVar5,
               (longlong)iVar8 << 2);
      }
    }
    else {
      piVar1 = &(this->StorageBuffer).ArrayNum;
      piVar2 = &(this->StorageBuffer).ArrayMax;
      if (iVar13 < 1) {
        this->NumUnderflowSamples = -iVar13;
        *piVar1 = 0;
        if (*piVar2 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->StorageBuffer).AllocatorInstance,0,piVar2);
        }
      }
      else {
        *piVar1 = 0;
        if (*piVar2 < iVar13) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar13,&(this->StorageBuffer).AllocatorInstance,0,piVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar13,&(this->StorageBuffer).AllocatorInstance,piVar1,piVar2);
        memcpy((this->StorageBuffer).AllocatorInstance.Data,param_1->DataPtr + (iVar8 - iVar13),
               (longlong)iVar13 << 2);
      }
    }
  }
  return;
}

