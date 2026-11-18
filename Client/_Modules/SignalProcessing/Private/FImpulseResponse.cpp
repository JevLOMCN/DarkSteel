// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 6

// FImpulseResponse @ 1444ef300

FImpulseResponse * __thiscall
Audio::FUniformPartitionConvolution::FImpulseResponse::FImpulseResponse
          (FImpulseResponse *this,int param_1,TSharedRef<Audio::IFFTAlgorithm,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FImpulseResponse *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  
  this->NumBlocks = param_1;
  iVar6 = (**(code **)((longlong)*param_2->Object + 8))();
  this->BlockSize = iVar6 / 2;
  (this->FFTAlgorithm).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  (this->FFTAlgorithm).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar6 = (**(code **)((longlong)*param_2->Object + 8))();
  uVar11 = 0;
  piVar1 = &(this->FFTInput).ArrayNum;
  this->NumActiveBlocks = 0;
  this->NumImpulseResponseSamples = 0;
  this->NumFFTOutputFloats = iVar6 + 2;
  piVar2 = &(this->FFTInput).ArrayMax;
  (this->FFTInput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  iVar6 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  if ((iVar6 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFTAlgorithm->Size() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                         ,0x18e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FImpulseResponse *)(*pcVar4)();
    return pFVar9;
  }
  if ((this->NumFFTOutputFloats < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFFTOutputFloats > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                         ,399,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FImpulseResponse *)(*pcVar4)();
    return pFVar9;
  }
  if ((this->BlockSize < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                         ,400,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FImpulseResponse *)(*pcVar4)();
    return pFVar9;
  }
  iVar6 = (**(code **)((longlong)*(this->FFTAlgorithm).Object + 8))();
  iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar6,&(this->FFTInput).AllocatorInstance,piVar1,piVar2);
  memset((this->FFTInput).AllocatorInstance.Data + (longlong)iVar7 * 4,0,(longlong)iVar6 << 2);
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
            (&this->Blocks,this->NumBlocks);
  uVar13 = uVar11;
  if (0 < this->NumBlocks) {
    do {
      uVar10 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar10 < (this->Blocks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FImpulseResponse *)(*pcVar4)();
        return pFVar9;
      }
      iVar6 = this->NumFFTOutputFloats;
      pFVar12 = (this->Blocks).AllocatorInstance.Data + uVar13;
      iVar7 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,iVar6,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 8),
                         (int *)(pFVar12 + 0xc));
      memset((void *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar7 * 4),0,(longlong)iVar6 << 2
            );
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar10 + 1) < this->NumBlocks);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FImpulseResponse @ 1444f3990

void __thiscall
Audio::FUniformPartitionConvolution::FImpulseResponse::~FImpulseResponse(FImpulseResponse *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)(this->Blocks).AllocatorInstance.Data,
             (this->Blocks).ArrayNum);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FFTInput).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FFTAlgorithm).SharedReferenceCount.ReferenceController);
  return;
}

// GetNumActiveBlocks @ 144504110

int __thiscall
Audio::FUniformPartitionConvolution::FImpulseResponse::GetNumActiveBlocks(FImpulseResponse *this)

{
  return this->NumActiveBlocks;
}

// GetNumImpulseResponseSamples @ 1445041e0

int __thiscall
Audio::FUniformPartitionConvolution::FImpulseResponse::GetNumImpulseResponseSamples
          (FImpulseResponse *this)

{
  return this->NumImpulseResponseSamples;
}

// GetTransformedBlock @ 144504ad0

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
Audio::FUniformPartitionConvolution::FImpulseResponse::GetTransformedBlock
          (FImpulseResponse *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Blocks).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
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
         ((this->Blocks).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// SetImpulseResponse @ 14451b0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FUniformPartitionConvolution::FImpulseResponse::SetImpulseResponse
          (FImpulseResponse *this,float *param_1,int param_2)

{
  IFFTAlgorithm *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_2 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\UniformPartitionConvolution.cpp"
                         ,0x1a2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = this->NumBlocks;
  iVar6 = iVar5 * this->BlockSize;
  if ((iVar6 < param_2) && (param_2 = iVar6, 2 < (byte)LogSignalProcessing._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    iVar5 = this->NumBlocks;
  }
  uVar7 = 0;
  this->NumImpulseResponseSamples = param_2;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      iVar5 = this->NumFFTOutputFloats;
      uVar4 = 0;
      if ((int)uVar7 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      memset(*(void **)((this->Blocks).AllocatorInstance.Data + lVar8),0,(longlong)iVar5 << 2);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < this->NumBlocks);
  }
  uVar7 = 0;
  iVar5 = param_2 / this->BlockSize + (uint)(param_2 % this->BlockSize != 0);
  this->NumActiveBlocks = iVar5;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      iVar5 = this->BlockSize;
      iVar6 = this->NumImpulseResponseSamples - iVar5 * uVar7;
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      memcpy((this->FFTInput).AllocatorInstance.Data,param_1 + (int)(iVar5 * uVar7),
             (longlong)iVar6 * 4);
      if (0 < iVar5 - iVar6) {
        memset((this->FFTInput).AllocatorInstance.Data + (longlong)iVar6 * 4,0,
               (longlong)(iVar5 - iVar6) << 2);
      }
      pIVar1 = (this->FFTAlgorithm).Object;
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
      uVar4 = 0;
      if ((int)uVar7 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      (*pcVar2)(pIVar1,(this->FFTInput).AllocatorInstance.Data,
                *(undefined8 *)((this->Blocks).AllocatorInstance.Data + lVar8));
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < this->NumActiveBlocks);
  }
  return;
}

