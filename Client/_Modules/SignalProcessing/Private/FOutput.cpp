// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// FOutput @ 1444f1680

FOutput * __thiscall
Audio::FUniformPartitionConvolution::FOutput::FOutput
          (FOutput *this,int param_1,TSharedRef<Audio::IFFTAlgorithm,1> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FOutput *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  
  this->NumBlocks = param_1;
  iVar5 = (**(code **)((longlong)*param_2->Object + 8))();
  this->BlockSize = iVar5 / 2;
  iVar5 = (**(code **)((longlong)*param_2->Object + 8))();
  this->NumFFTOutputFloats = iVar5 + 2;
  (this->FFTAlgorithm).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->FFTAlgorithm).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar9 = 0;
  piVar1 = &(this->OutputBuffer).ArrayNum;
  (this->OutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *(undefined8 *)&(this->OutputBuffer).ArrayMax = 0;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
            (&this->Blocks,this->NumBlocks);
  uVar12 = uVar9;
  if (0 < this->NumBlocks) {
    do {
      uVar10 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar10 < (this->Blocks).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FOutput *)(*pcVar3)();
        return pFVar8;
      }
      iVar5 = this->NumFFTOutputFloats;
      pFVar11 = (this->Blocks).AllocatorInstance.Data + uVar12;
      iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar5,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 8),
                         (int *)(pFVar11 + 0xc));
      memset((void *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 4),0,(longlong)iVar5 << 2
            );
      uVar9 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar10 + 1) < this->NumBlocks);
  }
  iVar5 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar5,&(this->OutputBuffer).AllocatorInstance,piVar1,
                     &(this->OutputBuffer).ArrayMax);
  memset((this->OutputBuffer).AllocatorInstance.Data + (longlong)iVar7 * 4,0,(longlong)iVar5 << 2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FOutput @ 1444f41e0

void __thiscall Audio::FUniformPartitionConvolution::FOutput::~FOutput(FOutput *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)(this->Blocks).AllocatorInstance.Data,
             (this->Blocks).ArrayNum);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FFTAlgorithm).SharedReferenceCount.ReferenceController);
  return;
}

// GetTransformedBlock @ 144504b60

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FUniformPartitionConvolution::FOutput::GetTransformedBlock(FOutput *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  uint uVar5;
  
  uVar5 = (this->HeadBlockIndex + param_1) % this->NumBlocks;
  uVar3 = 0;
  if ((int)uVar5 < (this->Blocks).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<float,TAlignedHeapAllocator<16>_> *)
         ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10);
}

// PopBlock @ 14450c9c0

void __thiscall Audio::FUniformPartitionConvolution::FOutput::PopBlock(FOutput *this,float *param_1)

{
  size_t _Size;
  uint uVar1;
  IFFTAlgorithm *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = this->HeadBlockIndex;
  uVar6 = 0;
  if ((int)uVar1 < (this->Blocks).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar2 = (this->FFTAlgorithm).Object;
  pFVar3 = (this->OutputBuffer).AllocatorInstance.Data;
  (**(code **)((longlong)*pIVar2 + 0x28))
            (pIVar2,*(undefined8 *)
                     ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10),pFVar3);
  _Size = (longlong)this->BlockSize * 4;
  memcpy(param_1,pFVar3 + _Size,_Size);
  PopBlock(this);
  return;
}

// PopBlock @ 14450ca90

void __thiscall Audio::FUniformPartitionConvolution::FOutput::PopBlock(FOutput *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = this->HeadBlockIndex;
  this->HeadBlockIndex = (int)(uVar1 + 1) % this->NumBlocks;
  uVar4 = 0;
  if ((int)uVar1 < (this->Blocks).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  memset(*(void **)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10),0,
         (longlong)this->NumFFTOutputFloats << 2);
  return;
}

// Reset @ 1445174e0

void __thiscall Audio::FUniformPartitionConvolution::FOutput::Reset(FOutput *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < this->NumBlocks) {
    lVar6 = 0;
    do {
      iVar1 = this->NumFFTOutputFloats;
      uVar4 = 0;
      if ((int)uVar5 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      memset(*(void **)((this->Blocks).AllocatorInstance.Data + lVar6),0,(longlong)iVar1 << 2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < this->NumBlocks);
  }
  memset((this->OutputBuffer).AllocatorInstance.Data,0,(longlong)this->BlockSize << 3);
  return;
}

